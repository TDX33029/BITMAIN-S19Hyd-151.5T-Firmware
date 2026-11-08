// FUN_01291d30 @ 01291d30 size=156 calls_out=1 calls_in=2
// strings: 

void FUN_01291d30(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 / 0x16d;
  if (0x23bbc < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1,0x191,&DAT_01c26470);
  }
  if ((param_1 % 0x16d < (uint)(byte)""[uVar1]) && (400 < uVar1 - 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0xffffffff,0x191,&DAT_01c26480);
  }
  return;
}

