// FUN_00798fdc @ 00798fdc size=112 calls_out=3 calls_in=0
// strings: 

void FUN_00798fdc(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 0xd8) == -0x80000000) {
    *param_1 = -0x80000000;
    return;
  }
  uVar2 = *(undefined4 *)(param_2 + 0xdc);
  iVar3 = *(int *)(param_2 + 0xe0);
  if (iVar3 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(iVar3);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar3);
    }
  }
  FUN_016dd1aa(iVar1,uVar2,iVar3);
  *param_1 = iVar3;
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  return;
}

