// FUN_0168b40c @ 0168b40c size=72 calls_out=2 calls_in=2
// strings: 

int FUN_0168b40c(void)

{
  uint uVar1;
  
  uVar1 = FUN_0168b45c();
  if (uVar1 == 0) {
    return 9;
  }
  if (0x3fffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d0781c);
  }
  if (0x3ffffffc < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d0782c);
  }
  return uVar1 * 4 + 0xd;
}

