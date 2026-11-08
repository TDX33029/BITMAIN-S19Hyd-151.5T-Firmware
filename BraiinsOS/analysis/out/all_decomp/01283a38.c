// FUN_01283a38 @ 01283a38 size=152 calls_out=2 calls_in=12
// strings: 

undefined4 * FUN_01283a38(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)FUN_01283ad4(3,0);
  puVar2 = DAT_018dd950;
  if (DAT_018dd950 == (undefined4 *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x18dd950);
    } while (!bVar1);
    DataMemoryBarrier(0xb);
    DAT_018dd950 = puVar3;
  }
  else {
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    if (puVar3[1] != 0) {
      thunk_FUN_016d3fb4(*puVar3);
    }
    thunk_FUN_016d3fb4(puVar3);
    puVar3 = puVar2;
  }
  return puVar3;
}

