// FUN_016d63a4 @ 016d63a4 size=26 calls_out=1 calls_in=1
// strings: 

int FUN_016d63a4(void)

{
  int iVar1;
  
  software_interrupt(0);
  iVar1 = FUN_016d3496();
  if (-1 < iVar1) {
    iVar1 = 0x14 - iVar1;
  }
  return iVar1;
}

