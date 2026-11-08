// FUN_0164e6b8 @ 0164e6b8 size=128 calls_out=1 calls_in=1
// strings: 

uint FUN_0164e6b8(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = *param_1;
  do {
    uVar2 = uVar3;
    if ((uVar2 & 8) != 0) break;
    if (0xffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_004c13f3,0x1c,&DAT_01d06878);
    }
    uVar3 = *param_1;
    if (uVar3 == uVar2) {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = uVar2 + 0x10;
      }
      bVar4 = false;
      if (bVar1) {
        DataMemoryBarrier(0xb);
        bVar4 = true;
      }
    }
    else {
      bVar4 = false;
      ClearExclusiveLocal();
    }
  } while (!bVar4);
  return (uVar2 & 8) >> 3 ^ 1;
}

