// FUN_009df410 @ 009df410 size=84 calls_out=3 calls_in=3
// strings: 

void FUN_009df410(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  FUN_00b384cc();
  FUN_012cb6a8();
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a95994(param_1);
    return;
  }
  return;
}

