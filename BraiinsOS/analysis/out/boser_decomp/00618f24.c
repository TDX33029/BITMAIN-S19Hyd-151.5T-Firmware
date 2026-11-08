// FUN_00618f24 @ 00618f24 size=88 calls_out=3 calls_in=0
// strings: 

void FUN_00618f24(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  iVar1 = FUN_019d72c4(param_1,param_1 + 0x48,*param_3,param_3[1]);
  if (iVar1 != 0) {
    FUN_00f30558(&local_30,param_1 + 0x18);
    if (*param_2 != 9) {
      FUN_00d356e0(param_2);
    }
    *param_2 = local_30;
    param_2[1] = iStack_2c;
    param_2[2] = iStack_28;
    param_2[3] = iStack_24;
    param_2[4] = iStack_20;
    param_2[5] = iStack_1c;
  }
  return;
}

