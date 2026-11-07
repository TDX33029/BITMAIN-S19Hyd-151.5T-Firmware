// FUN_0165b904 @ 0165b904 size=164 calls_out=6 calls_in=1
// strings: 

void FUN_0165b904(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 2) {
    return;
  }
  piVar2 = (int *)param_1[5];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016b9834(param_1[5]);
  }
  FUN_0134aee0(param_1[2],param_1[3],4,4);
  FUN_014fe2e4(param_1 + 0x9a);
  FUN_0169f4e0(param_1 + 0xb5);
  if (param_1[0x96] != -0x80000000) {
    FUN_0134aee0(param_1[0x96],param_1[0x97],4,4);
  }
  FUN_016a231c(param_1 + 0x36);
  if (param_1[0x32] == 2) {
    return;
  }
  FUN_016a235c(param_1 + 6);
  return;
}

