// FUN_00a15ee8 @ 00a15ee8 size=68 calls_out=2 calls_in=3
// strings: 

void FUN_00a15ee8(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  
  FUN_01282570();
  FUN_01282570((uint)param_1 | 1);
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 - 0x10;
  if ((uVar2 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(param_1);
    return;
  }
  return;
}

