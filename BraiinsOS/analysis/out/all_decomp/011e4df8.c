// FUN_011e4df8 @ 011e4df8 size=296 calls_out=6 calls_in=29
// strings: getrandom::getrandom() failed.

undefined4 * FUN_011e4df8(void)

{
  bool bVar1;
  undefined4 *puVar2;
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
  if (DAT_018dd8e8 != (undefined4 *)0x0) {
    return DAT_018dd8e8;
  }
  FUN_016dd606(&local_68,0,0x40);
  local_24 = FUN_0100fa18(&local_68,0x40);
  if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("getrandom::getrandom() failed.",0x1e,&local_24,&DAT_018920d4,&DAT_018920e4);
  }
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x40);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x40);
  }
  *puVar3 = local_68;
  puVar3[1] = uStack_64;
  puVar3[2] = uStack_60;
  puVar3[3] = uStack_5c;
  puVar3[4] = uStack_58;
  puVar3[5] = local_54;
  puVar3[6] = uStack_50;
  puVar3[7] = uStack_4c;
  puVar3[8] = uStack_48;
  puVar3[9] = uStack_44;
  puVar3[10] = local_40;
  puVar3[0xb] = uStack_3c;
  puVar3[0xc] = uStack_38;
  puVar3[0xd] = uStack_34;
  puVar3[0xe] = uStack_30;
  puVar3[0xf] = uStack_2c;
  puVar2 = DAT_018dd8e8;
  if (DAT_018dd8e8 != (undefined4 *)0x0) {
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    thunk_FUN_016d3fb4();
    return puVar2;
  }
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(0x18dd8e8);
  } while (!bVar1);
  DAT_018dd8e8 = puVar3;
  DataMemoryBarrier(0xb);
  return puVar3;
}

