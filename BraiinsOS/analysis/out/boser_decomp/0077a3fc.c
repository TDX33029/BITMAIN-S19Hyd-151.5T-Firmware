// FUN_0077a3fc @ 0077a3fc size=60 calls_out=2 calls_in=0
// strings: 

void FUN_0077a3fc(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  FUN_013cf52c();
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013cef90(param_1);
    return;
  }
  return;
}

