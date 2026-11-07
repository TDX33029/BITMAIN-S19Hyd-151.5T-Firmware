// FUN_0168a7c4 @ 0168a7c4 size=84 calls_out=2 calls_in=0
// strings: 

int FUN_0168a7c4(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_01681dec(param_1 + 8);
  uVar1 = (uint)(uVar2 >> 0x20);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x20) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar1,*(uint *)(param_1 + 0x20),&DAT_018adbb8);
  }
  return *(int *)(param_1 + 0x1c) + uVar1 * 0xc0 + 0x70;
}

