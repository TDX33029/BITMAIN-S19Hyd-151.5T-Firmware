// FUN_01125c24 @ 01125c24 size=156 calls_out=4 calls_in=1
// strings: 

void FUN_01125c24(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_2[1];
  iVar5 = param_2[2];
  uVar1 = 0;
  if (iVar5 < 0) {
LAB_01125c40:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar1,iVar5);
  }
  if (iVar5 == 0) {
    iVar2 = 1;
    iVar3 = 0;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(iVar5);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_01125c40;
    }
    iVar3 = iVar5;
  }
  FUN_016dd1aa(iVar2,iVar4,iVar5);
  if (*param_2 != 0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  param_1[5] = iVar3;
  param_1[4] = 3;
  param_1[6] = iVar2;
  param_1[7] = iVar5;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

