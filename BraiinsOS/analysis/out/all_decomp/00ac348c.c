// FUN_00ac348c @ 00ac348c size=328 calls_out=6 calls_in=2
// strings: getrandom::getrandom() failed.

void FUN_00ac348c(undefined4 *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
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
  puVar5 = DAT_018dd8e8;
  if (DAT_018dd8e8 == (undefined4 *)0x0) {
    FUN_016dd606(&local_68,0,0x40);
    local_24 = FUN_0100fa18(&local_68,0x40);
    if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("getrandom::getrandom() failed.",0x1e,&local_24,&DAT_018920d4,&DAT_018920e4);
    }
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x40);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x40);
    }
    *puVar2 = local_68;
    puVar2[1] = uStack_64;
    puVar2[2] = uStack_60;
    puVar2[3] = uStack_5c;
    puVar2[4] = uStack_58;
    puVar2[5] = local_54;
    puVar2[6] = uStack_50;
    puVar2[7] = uStack_4c;
    puVar2[8] = uStack_48;
    puVar2[9] = uStack_44;
    puVar2[10] = local_40;
    puVar2[0xb] = uStack_3c;
    puVar2[0xc] = uStack_38;
    puVar2[0xd] = uStack_34;
    puVar2[0xe] = uStack_30;
    puVar2[0xf] = uStack_2c;
    puVar5 = DAT_018dd8e8;
    if (DAT_018dd8e8 == (undefined4 *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(0x18dd8e8);
      } while (!bVar1);
      DataMemoryBarrier(0xb);
      puVar5 = puVar2;
      DAT_018dd8e8 = puVar2;
    }
    else {
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4();
    }
  }
  uVar3 = *puVar5;
  uVar4 = puVar5[1];
  uVar9 = puVar5[2];
  uVar7 = puVar5[6];
  uVar6 = puVar5[7];
  uVar8 = puVar5[3];
  uVar10 = puVar5[5];
  *param_1 = puVar5[4];
  param_1[1] = uVar10;
  param_1[2] = uVar7;
  param_1[3] = uVar6;
  param_1[4] = uVar9;
  param_1[5] = uVar8;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  return;
}

