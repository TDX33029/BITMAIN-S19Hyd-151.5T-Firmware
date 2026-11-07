// FUN_007017a8 @ 007017a8 size=72 calls_out=2 calls_in=10
// strings: 

int FUN_007017a8(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_007015e4();
  uVar1 = (uint)(uVar2 >> 0x20);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1,*(uint *)(param_1 + 0x18),&DAT_01d2c084);
  }
  return *(int *)(param_1 + 0x14) + uVar1 * 0x40;
}

