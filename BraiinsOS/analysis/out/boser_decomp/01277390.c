// FUN_01277390 @ 01277390 size=76 calls_out=2 calls_in=2
// strings: 

int FUN_01277390(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_012771b8();
  uVar1 = (uint)(uVar2 >> 0x20);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1,*(uint *)(param_1 + 0x18),&DAT_01d2c084);
  }
  return uVar1 * 0xd8 + *(int *)(param_1 + 0x14);
}

