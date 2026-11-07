// FUN_0144e898 @ 0144e898 size=88 calls_out=3 calls_in=3
// strings: capacity overflow

void FUN_0144e898(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x3f8);
  if ((uVar1 < 0xfe) || (uVar1 = *(uint *)(param_1 + 4), uVar1 != 0xffffffff)) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = 0xffffffff >> LZCOUNT(uVar1);
    }
    if (uVar2 != 0xffffffff) {
      FUN_0144e8f8(param_1,uVar2 + 1);
      FUN_01ab1588();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c("capacity overflow",0x11,&DAT_01d2ebe8);
}

