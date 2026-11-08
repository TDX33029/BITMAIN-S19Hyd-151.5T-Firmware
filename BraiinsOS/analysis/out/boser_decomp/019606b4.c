// FUN_019606b4 @ 019606b4 size=100 calls_out=2 calls_in=9
// strings: 

uint * FUN_019606b4(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if ((uVar2 < 0xfffffff0) && ((uVar2 & 8) == 0)) {
    if (*param_1 == uVar2) {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = uVar2 + 0x10;
        DataMemoryBarrier(0xb);
        goto LAB_019606f0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  FUN_0164cfdc(param_1);
LAB_019606f0:
  FUN_0165098c(param_1);
  FUN_0165098c((uint)param_1 | 1);
  return param_1;
}

