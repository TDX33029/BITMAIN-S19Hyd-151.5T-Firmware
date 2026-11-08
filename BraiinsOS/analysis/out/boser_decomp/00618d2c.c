// FUN_00618d2c @ 00618d2c size=96 calls_out=3 calls_in=0
// strings: 

void FUN_00618d2c(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  bool bVar2;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar1 = FUN_019d72c4(param_1,param_1 + 0x88,*param_3,param_3[1]);
  if (iVar1 != 0) {
    FUN_00f30f58(&local_20,param_1 + 0x18);
    bVar2 = *param_2 != 0 || param_2[1] != 0;
    iVar1 = 0;
    if (bVar2) {
      iVar1 = param_2[2];
    }
    if (bVar2 && iVar1 != 0) {
      FUN_01443048(iVar1,param_2[3]);
    }
    *param_2 = local_20;
    param_2[1] = iStack_1c;
    param_2[2] = iStack_18;
    param_2[3] = iStack_14;
  }
  return;
}

