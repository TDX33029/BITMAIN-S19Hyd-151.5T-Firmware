// FUN_01671044 @ 01671044 size=268 calls_out=6 calls_in=17
// strings: getrandom::getrandom() failed.

undefined4 * FUN_01671044(void)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_24;
  
  DataMemoryBarrier(0xb);
  puVar3 = DAT_01d51a28;
  if (DAT_01d51a28 == (undefined4 *)0x0) {
    FUN_01bed93e(&local_68,0,0x40);
    local_24 = FUN_0134a8f8(&local_68,0x40);
    if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("getrandom::getrandom() failed.",0x1e,&local_24,&DAT_01d06fcc,&DAT_01d06fdc);
    }
    puVar1 = (undefined4 *)thunk_FUN_01be5118(0x40);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x40);
    }
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    puVar1[4] = uStack_58;
    puVar1[5] = local_54;
    puVar1[6] = uStack_50;
    puVar1[7] = uStack_4c;
    puVar1[8] = uStack_48;
    puVar1[9] = uStack_44;
    puVar1[10] = local_40;
    puVar1[0xb] = uStack_3c;
    puVar1[0xc] = uStack_38;
    puVar1[0xd] = uStack_34;
    puVar1[0xe] = uStack_30;
    puVar1[0xf] = uStack_2c;
    puVar3 = DAT_01d51a28;
    if (DAT_01d51a28 == (undefined4 *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(0x1d51a28);
      } while (!bVar2);
      bVar2 = true;
      DAT_01d51a28 = puVar1;
    }
    else {
      bVar2 = false;
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    if (bVar2) {
      puVar3 = puVar1;
    }
    else {
      thunk_FUN_01be4678();
    }
  }
  return puVar3;
}

