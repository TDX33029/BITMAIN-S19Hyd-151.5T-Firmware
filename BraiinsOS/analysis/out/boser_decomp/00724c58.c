// FUN_00724c58 @ 00724c58 size=92 calls_out=2 calls_in=3
// strings: 

undefined4 FUN_00724c58(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == *(int *)(param_1 + 0xc)) {
    FUN_012671ec();
  }
  iVar2 = iVar3 + 1;
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x10) + iVar3 * 8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(int *)(param_1 + 0x14) = iVar2;
  if (iVar3 != -1) {
    iVar3 = *(int *)(param_1 + 0x10) + iVar2 * 8;
    iVar2 = 0;
    if (iVar3 != 8) {
      return *(undefined4 *)(iVar3 + -8);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0cc(&DAT_01c07860,iVar2);
}

