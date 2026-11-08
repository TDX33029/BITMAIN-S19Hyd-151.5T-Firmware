// FUN_01677048 @ 01677048 size=88 calls_out=2 calls_in=0
// strings: 

int FUN_01677048(int param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_01681dec();
  uVar2 = (uint)(uVar3 >> 0x20);
  iVar1 = 0;
  if ((uVar3 & 1) != 0) {
    if (*(uint *)(param_1 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar2,*(uint *)(param_1 + 0x18),&DAT_018adc28);
    }
    iVar1 = *(int *)(param_1 + 0x14) + uVar2 * 0xc0 + 0x70;
  }
  if (iVar1 != 0) {
    iVar1 = iVar1 + 0x18;
  }
  return iVar1;
}

