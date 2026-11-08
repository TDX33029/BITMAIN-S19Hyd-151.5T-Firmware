// FUN_00b92330 @ 00b92330 size=68 calls_out=2 calls_in=14
// strings: 

void FUN_00b92330(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  
  FUN_01650a90();
  FUN_01650a90((uint)param_1 | 1);
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 - 0x10;
  if ((uVar2 & 0xfffffff2) == 0x12) {
    FUN_0164ccc4(param_1);
    return;
  }
  return;
}

