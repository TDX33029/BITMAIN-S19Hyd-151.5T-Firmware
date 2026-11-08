// FUN_006f1840 @ 006f1840 size=176 calls_out=3 calls_in=0
// strings: 

void FUN_006f1840(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*param_2 == -0x80000000) {
    *(undefined1 *)param_1 = 6;
    return;
  }
  iVar2 = param_2[2];
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar2);
  }
  iVar4 = param_2[1];
  if (iVar2 == 0) {
    iVar3 = 0;
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(iVar2);
    iVar3 = iVar2;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar2);
    }
  }
  FUN_016dd1aa(iVar1,iVar4,iVar2);
  local_30 = CONCAT31(local_30._1_3_,3);
  *param_1 = local_30;
  param_1[1] = iVar3;
  param_1[2] = iVar1;
  param_1[3] = iVar2;
  param_1[4] = uStack_20;
  param_1[5] = uStack_1c;
  return;
}

