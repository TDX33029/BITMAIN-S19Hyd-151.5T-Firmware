// FUN_0104a480 @ 0104a480 size=172 calls_out=3 calls_in=1
// strings: 

void FUN_0104a480(undefined4 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(uint *)(param_2 + 0xc) < param_3) {
    param_1[3] = param_3;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 1;
    return;
  }
  iVar3 = *(int *)(param_2 + 8);
  *(uint *)(param_2 + 8) = iVar3 + param_3;
  uVar1 = 0;
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) - param_3;
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_3);
  }
  if (param_3 == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(param_3);
    uVar1 = param_3;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_3);
    }
  }
  param_1[1] = uVar1;
  param_1[2] = iVar2;
  FUN_016dd1aa(iVar2,iVar3);
  param_1[3] = param_3;
  *param_1 = 0;
  return;
}

