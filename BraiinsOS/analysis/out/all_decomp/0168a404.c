// FUN_0168a404 @ 0168a404 size=88 calls_out=2 calls_in=0
// strings: 

bool FUN_0168a404(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_01681dec(param_1 + 8);
  uVar1 = (uint)(uVar2 >> 0x20);
  if ((uVar2 & 1) == 0) {
    return false;
  }
  if (*(uint *)(param_1 + 0x20) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar1,*(uint *)(param_1 + 0x20),&DAT_018adb98);
  }
  return *(int *)(*(int *)(param_1 + 0x1c) + uVar1 * 0xc0) != 0;
}

