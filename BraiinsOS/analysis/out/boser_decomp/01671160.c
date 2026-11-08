// FUN_01671160 @ 01671160 size=216 calls_out=4 calls_in=16
// strings: 

undefined4 * FUN_01671160(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  DataMemoryBarrier(0xb);
  puVar2 = DAT_01d51a2c;
  if (DAT_01d51a2c == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)thunk_FUN_01be5118(4);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,4);
    }
    *puVar2 = &DAT_0056b468;
    puVar3 = (undefined4 *)thunk_FUN_01be5118(8);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    *puVar3 = puVar2;
    puVar3[1] = &DAT_01d06fec;
    puVar2 = DAT_01d51a2c;
    if (DAT_01d51a2c == (undefined4 *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(0x1d51a2c);
      } while (!bVar1);
      bVar1 = true;
      DAT_01d51a2c = puVar3;
    }
    else {
      bVar1 = false;
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    if (bVar1) {
      puVar2 = puVar3;
    }
    else {
      FUN_00f80320(*puVar3,puVar3[1]);
      thunk_FUN_01be4678(puVar3);
    }
  }
  return puVar2;
}

