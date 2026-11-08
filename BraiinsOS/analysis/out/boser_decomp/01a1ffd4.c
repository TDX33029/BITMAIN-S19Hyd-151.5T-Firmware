// FUN_01a1ffd4 @ 01a1ffd4 size=52 calls_out=1 calls_in=1
// strings: 

void FUN_01a1ffd4(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0x1fff) >> 3;
  if (0x2dc < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1,0x2dd,&DAT_01d2a928);
  }
  return;
}

