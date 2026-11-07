// FUN_00a98170 @ 00a98170 size=100 calls_out=2 calls_in=3
// strings: 

uint * FUN_00a98170(uint *param_1)

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
        goto LAB_00a981ac;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  FUN_0164cfdc(param_1);
LAB_00a981ac:
  FUN_0165098c(param_1);
  FUN_0165098c((uint)param_1 | 1);
  return param_1;
}

