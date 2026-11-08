// FUN_019af384 @ 019af384 size=184 calls_out=5 calls_in=6
// strings: <string-with-nul>

void FUN_019af384(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_28;
  undefined4 local_24;
  
  FUN_00666814(&local_28);
  if (local_28 == -0x80000000) {
    uVar1 = local_24;
  }
  else {
    *(undefined1 *)(param_1 + 0x78) = 1;
    uVar1 = FUN_00664758("<string-with-nul>",0x12);
    if (local_28 != 0) {
      thunk_FUN_01be4678(local_24);
    }
  }
  iVar4 = *(int *)(param_1 + 0x38);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0xffffffff,0,&DAT_01d27b24);
  }
  iVar2 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar2 + (iVar4 + -1) * 4) = uVar1;
  if (iVar4 == iVar3) {
    FUN_019af460(param_1 + 0x30);
    iVar2 = *(int *)(param_1 + 0x34);
  }
  *(undefined4 *)(iVar2 + iVar4 * 4) = 0;
  *(int *)(param_1 + 0x38) = iVar4 + 1;
  return;
}

