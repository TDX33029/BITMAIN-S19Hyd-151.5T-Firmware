// FUN_0125855c @ 0125855c size=132 calls_out=2 calls_in=1
// strings: use_config_fallbackstruct ModelDetectionstruct PerformanceScalingV2struct PerformanceScalingV3

void FUN_0125855c(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0x13) {
    iVar1 = thunk_FUN_01bed842(param_2,
                               "use_config_fallbackstruct ModelDetectionstruct PerformanceScalingV2struct PerformanceScalingV3"
                               ,0x13);
    if (iVar1 == 0) {
      *param_1 = 2;
      return;
    }
    param_3 = 0x13;
  }
  FUN_0123bfbc(param_1,param_2,param_3,&DAT_01c24f50);
  return;
}

