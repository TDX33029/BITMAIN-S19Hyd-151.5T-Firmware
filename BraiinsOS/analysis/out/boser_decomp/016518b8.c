// FUN_016518b8 @ 016518b8 size=112 calls_out=2 calls_in=16
// strings: 

int FUN_016518b8(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  iVar2 = FUN_0165192c(3,0);
  iVar3 = DAT_01d519e4;
  if (DAT_01d519e4 == 0) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x1d519e4);
    } while (!bVar1);
    bVar1 = true;
    DAT_01d519e4 = iVar2;
  }
  else {
    ClearExclusiveLocal();
  }
  DataMemoryBarrier(0xb);
  if (bVar1) {
    iVar3 = iVar2;
  }
  else {
    FUN_01651b38();
  }
  return iVar3;
}

