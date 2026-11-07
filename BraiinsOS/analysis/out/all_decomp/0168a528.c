// FUN_0168a528 @ 0168a528 size=92 calls_out=2 calls_in=0
// strings: 

int FUN_0168a528(int param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_01681dec(param_1 + 8);
  uVar2 = (uint)(uVar3 >> 0x20);
  iVar1 = 0;
  if ((uVar3 & 1) != 0) {
    if (*(uint *)(param_1 + 0x20) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar2,*(uint *)(param_1 + 0x20),&DAT_018adc28);
    }
    iVar1 = *(int *)(param_1 + 0x1c) + uVar2 * 0xc0 + 0x70;
  }
  if (iVar1 != 0) {
    iVar1 = iVar1 + 0x18;
  }
  return iVar1;
}

