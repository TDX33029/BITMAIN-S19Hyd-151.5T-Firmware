// FUN_00f9df8c @ 00f9df8c size=144 calls_out=4 calls_in=0
// strings: 

void FUN_00f9df8c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x30) - 2U < 2) {
    return;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005342b4,0x79,&DAT_01d307b8);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 != 0) && (iVar2 = iVar1 * 4 + 4, iVar1 + iVar2 != -5)) {
    thunk_FUN_01be4678(*(int *)(param_1 + 0x1c) - iVar2);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  FUN_012759c0(uVar3,*(undefined4 *)(param_1 + 0x18));
  FUN_0132b958(*(undefined4 *)(param_1 + 0x10),uVar3,8,0xd8);
  return;
}

