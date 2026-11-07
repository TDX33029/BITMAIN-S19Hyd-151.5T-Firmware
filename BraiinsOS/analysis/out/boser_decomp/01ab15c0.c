// FUN_01ab15c0 @ 01ab15c0 size=88 calls_out=3 calls_in=1
// strings: capacity overflow

void FUN_01ab15c0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x148);
  if ((uVar1 < 9) || (uVar1 = *(uint *)(param_1 + 4), uVar1 != 0xffffffff)) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = 0xffffffff >> LZCOUNT(uVar1);
    }
    if (uVar2 != 0xffffffff) {
      FUN_01ab1620(param_1,uVar2 + 1);
      FUN_01ab1588();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c("capacity overflow",0x11,&DAT_01d2ebe8);
}

