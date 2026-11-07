// FUN_015f71d4 @ 015f71d4 size=212 calls_out=7 calls_in=3
// strings: <string-with-nul>

void FUN_015f71d4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_28;
  int local_24;
  
  FUN_00602b88(&local_28);
  if (local_28 == -0x80000000) {
    iVar1 = local_24;
  }
  else {
    *(undefined1 *)(param_1 + 0x78) = 1;
    iVar1 = thunk_FUN_016d4a50(0x12);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(1,0x12);
    }
    FUN_016dd1aa(iVar1,"<string-with-nul>",0x12);
    if (local_28 != 0) {
      thunk_FUN_016d3fb4(local_24);
    }
  }
  iVar4 = *(int *)(param_1 + 0x38);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(0xffffffff,0,&DAT_018aaefc);
  }
  iVar2 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)(param_1 + 0x30);
  *(int *)(iVar2 + (iVar4 + -1) * 4) = iVar1;
  if (iVar4 == iVar3) {
    FUN_015f72d0(param_1 + 0x30);
    iVar2 = *(int *)(param_1 + 0x34);
  }
  *(undefined4 *)(iVar2 + iVar4 * 4) = 0;
  *(int *)(param_1 + 0x38) = iVar4 + 1;
  return;
}

