// FUN_01676eb8 @ 01676eb8 size=88 calls_out=2 calls_in=0
// strings: 

bool FUN_01676eb8(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_01681dec();
  uVar1 = (uint)(uVar2 >> 0x20);
  if ((uVar2 & 1) == 0) {
    return false;
  }
  if (*(uint *)(param_1 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar1,*(uint *)(param_1 + 0x18),&DAT_018adb98);
  }
  return *(int *)(*(int *)(param_1 + 0x14) + uVar1 * 0xc0) == 1;
}

