// FUN_00a7f374 @ 00a7f374 size=188 calls_out=4 calls_in=1
// strings: 

void FUN_00a7f374(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iStack_24;
  int iStack_20;
  int local_1c;
  
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  *(undefined4 *)(param_2 + 8) = 0;
  FUN_0157e5fc(&iStack_24,param_2 + 0xc,param_2);
  if (iStack_24 == 2) {
    *param_1 = -0x80000000;
    param_1[1] = iStack_20;
    return;
  }
  if (local_1c < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,local_1c);
  }
  if (local_1c == 0) {
    iVar2 = 0;
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(local_1c);
    iVar2 = local_1c;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_1c);
    }
  }
  FUN_016dd1aa(iVar1,iStack_20,local_1c);
  *param_1 = iVar2;
  param_1[1] = iVar1;
  param_1[2] = local_1c;
  return;
}

