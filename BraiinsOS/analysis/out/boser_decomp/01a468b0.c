// FUN_01a468b0 @ 01a468b0 size=184 calls_out=3 calls_in=1
// strings: 

void FUN_01a468b0(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int local_24;
  
  iVar2 = *(int *)(param_3 + 0xc);
  while( true ) {
    uVar1 = *(undefined4 *)(param_3 + 8);
    FUN_01a50290(&local_38,param_2,param_3);
    if (local_38 != 3) {
      if (local_38 == 1) {
        *param_1 = 3;
        *(undefined4 *)(param_3 + 8) = uVar1;
        *(int *)(param_3 + 0xc) = iVar2;
        FUN_0134aee0(iStack_34,iStack_30,4,0xc);
        FUN_012d40d0(local_28,local_24);
        return;
      }
      *param_1 = local_38;
      param_1[1] = iStack_34;
      param_1[2] = iStack_30;
      param_1[3] = iStack_2c;
      param_1[4] = local_28;
      param_1[5] = local_24;
      return;
    }
    if (*(int *)(param_3 + 0xc) == iVar2) break;
    iVar2 = *(int *)(param_3 + 0xc);
  }
  *param_1 = 2;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

