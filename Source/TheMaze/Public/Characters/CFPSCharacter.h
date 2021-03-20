#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CFPSCharacter.generated.h"

//Classes added to show the compiler what to do
class USpringArmComponent;
class UCameraComponent; 
class UStaticMeshComponent; 

UCLASS()
class THEMAZE_API ACFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACFPSCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera");
	USpringArmComponent* SpringArmComp; 

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera");
	UCameraComponent* CameraComp; 

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Play");
	UStaticMeshComponent* MeshComp; 


protected:

	void MoveForward(float Value);
	void MoveRight(float Value);
	void TurnUpRate(float Value);
	void LookUpAtRate(float Value);
	void InteractPressed(); 

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Play");
	float BaseTurnRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Play");
	float BaseLookUpRate; 
public:	

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
