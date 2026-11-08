// FUN_0119d304 @ 0119d304 size=64 calls_out=2 calls_in=2
// strings: 

void FUN_0119d304(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  FUN_019f8c54(param_1 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1);
    return;
  }
  return;
}

