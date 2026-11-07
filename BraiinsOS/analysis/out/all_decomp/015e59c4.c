// FUN_015e59c4 @ 015e59c4 size=156 calls_out=7 calls_in=2
// strings: 

void FUN_015e59c4(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = FUN_016d6638(param_2,0);
  if (iVar1 == 0) {
    piVar4 = (int *)FUN_016d2bc8();
    iVar1 = *piVar4;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = -0x80000000;
    param_1[2] = iVar1;
    return;
  }
  iVar2 = FUN_016dd8a2();
  if (iVar2 == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(iVar2);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar2);
    }
  }
  FUN_016dd1aa(iVar3,iVar1,iVar2);
  thunk_FUN_016d3fb4(iVar1);
  *param_1 = iVar2;
  param_1[1] = iVar3;
  param_1[2] = iVar2;
  return;
}

