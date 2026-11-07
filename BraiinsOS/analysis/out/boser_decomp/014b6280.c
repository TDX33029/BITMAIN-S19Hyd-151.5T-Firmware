// FUN_014b6280 @ 014b6280 size=136 calls_out=2 calls_in=2
// strings: 

int FUN_014b6280(int param_1)

{
  int iVar1;
  
  DataMemoryBarrier(0xb);
  if (DAT_01d4ee30 != 0) {
    FUN_016439d8();
  }
  iVar1 = 0;
  if (DAT_01d4ede0 != 2 || DAT_01d4ede4 != 0) {
    iVar1 = DAT_01d4ee0c;
    if (DAT_01d4ee10 < 9) {
      if (DAT_01d4ee10 != 8) {
LAB_014b62f0:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(DAT_01d4ee0c,DAT_01d4ee10,0,8,&DAT_01d06558);
      }
    }
    else if (*(char *)(DAT_01d4ee0c + 8) < -0x40) goto LAB_014b62f0;
  }
  if (iVar1 != 0) {
    param_1 = iVar1;
  }
  return param_1;
}

