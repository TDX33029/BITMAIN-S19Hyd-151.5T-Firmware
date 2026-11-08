// FUN_014294b4 @ 014294b4 size=108 calls_out=2 calls_in=5
// strings: 

void FUN_014294b4(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    piVar2 = (int *)param_1[1];
    if (*piVar2 != 0) {
      FUN_01443048(*piVar2,piVar2[1]);
    }
    thunk_FUN_01be4678(piVar2);
    return;
  }
  if (param_1[2] != 0) {
    (**(code **)(param_1[2] + 0x10))(param_1 + 5,param_1[3],param_1[4]);
    iVar1 = *param_1;
  }
  FUN_01443048(iVar1,param_1[1]);
  return;
}

