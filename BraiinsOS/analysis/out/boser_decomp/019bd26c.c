// FUN_019bd26c @ 019bd26c size=72 calls_out=1 calls_in=3
// strings: 

void FUN_019bd26c(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  DataMemoryBarrier(0xb);
  if (DAT_01d50360 != 2) {
    FUN_019c9de0();
  }
  do {
    bVar1 = (bool)hasExclusiveAccess(0x1d5035c);
  } while (!bVar1);
  DAT_01d5035c = DAT_01d5035c + 1;
  uVar2 = FUN_01beaf68(param_1);
  iVar3 = thunk_FUN_01bee080(6,uVar2,0,0,0,0,0);
  if (iVar3 == -4) {
    iVar3 = 0;
  }
  FUN_01be3b5a(iVar3);
  return;
}

