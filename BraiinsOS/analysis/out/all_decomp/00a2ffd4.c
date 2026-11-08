// FUN_00a2ffd4 @ 00a2ffd4 size=128 calls_out=4 calls_in=0
// strings: 

void FUN_00a2ffd4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = FUN_010ceb84(param_2,param_3);
  iVar2 = (int)((ulonglong)lVar4 >> 0x20);
  if (lVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar2);
  }
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
  FUN_016dd1aa(iVar1,(int)lVar4,iVar2);
  *param_1 = iVar3;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  return;
}

