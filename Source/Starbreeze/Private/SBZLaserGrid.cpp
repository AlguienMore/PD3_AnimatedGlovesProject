#include "SBZLaserGrid.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ASBZLaserGrid::ASBZLaserGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LaserComponentClass = NULL;
    this->LaserComponentClass = NULL;
    this->bShouldDisableOnAlarm = true;
    this->bShouldUsePatterns = false;
    this->PatternCyclingTime = 15.00f;
    this->LaserAudioEvent = NULL;
    this->CurrentPatternIndex = -2;
    this->bIsEnabled = true;
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASBZLaserGrid::StopCyclingPatterns() {
}

void ASBZLaserGrid::StartCyclingPatterns() {
}

void ASBZLaserGrid::SetEnabled(bool bEnabled) {
}

void ASBZLaserGrid::OnRep_CurrentPatternIndex() {
}

void ASBZLaserGrid::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}

void ASBZLaserGrid::NextPattern() {
}

void ASBZLaserGrid::Multicast_SetEnabled_Implementation(bool bEnabled) {
}

void ASBZLaserGrid::Multicast_NextPattern_Implementation() {
}

void ASBZLaserGrid::BlockingActorEntered(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZLaserGrid::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZLaserGrid, CurrentPatternIndex);
    DOREPLIFETIME(ASBZLaserGrid, bIsEnabled);
}


