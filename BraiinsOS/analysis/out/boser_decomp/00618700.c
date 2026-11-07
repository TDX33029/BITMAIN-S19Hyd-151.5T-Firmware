// FUN_00618700 @ 00618700 size=132 calls_out=3 calls_in=0
// strings: 

void FUN_00618700(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  bool bVar2;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar1 = FUN_019d72c4(param_1,param_1 + 0x168,*param_3,param_3[1]);
  if (iVar1 != 0) {
    FUN_00f30a6c(&local_20,param_1 + 0x18);
    if (*param_2 == 0 && param_2[1] == 0) {
      bVar2 = param_2[2] != 0 || param_2[3] != 0;
      iVar1 = 0;
      if (bVar2) {
        iVar1 = param_2[4];
      }
      if (bVar2 && iVar1 != 0) {
        FUN_01443048(iVar1,param_2[5]);
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = local_20;
    param_2[3] = iStack_1c;
    param_2[4] = iStack_18;
    param_2[5] = iStack_14;
  }
  return;
}

