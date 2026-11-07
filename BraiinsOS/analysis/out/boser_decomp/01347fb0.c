// FUN_01347fb0 @ 01347fb0 size=200 calls_out=1 calls_in=5
// strings: 

void FUN_01347fb0(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_0134807c(&local_48);
  cVar2 = DAT_01d51a20;
  if (DAT_01d51a20 == '\0') {
    bVar4 = false;
    bVar1 = (bool)hasExclusiveAccess(0x1d51a20);
    if (bVar1) {
      DAT_01d51a20 = '\x01';
      bVar4 = true;
    }
  }
  else {
    bVar4 = false;
    ClearExclusiveLocal();
  }
  DataMemoryBarrier(0xb);
  cVar3 = DAT_01d51a20;
  while( true ) {
    if (bVar4) {
      DataMemoryBarrier(0xb);
      DAT_01d51a20 = 2;
      DAT_01d51a1c = uStack_1c;
      DAT_01d51a18 = uStack_20;
      DAT_01d51a14 = uStack_24;
      DAT_01d51a10 = uStack_28;
      DAT_01d51a0c = uStack_2c;
      DAT_01d51a08 = local_30;
      DAT_01d51a04 = uStack_34;
      DAT_01d51a00 = uStack_38;
      DAT_01d519fc = uStack_3c;
      DAT_01d519f8 = uStack_40;
      DAT_01d519f4 = uStack_44;
      DAT_01d519f0 = local_48;
      return;
    }
    if (cVar2 == '\x02') break;
    HintYield();
    DAT_01d51a20 = cVar3;
    if (cVar3 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(0x1d51a20);
      if (bVar1) {
        DAT_01d51a20 = '\x01';
      }
      bVar4 = false;
      if (bVar1) {
        bVar4 = true;
      }
    }
    else {
      bVar4 = false;
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    cVar2 = cVar3;
    cVar3 = DAT_01d51a20;
  }
  DAT_01d51a20 = cVar3;
  return;
}

