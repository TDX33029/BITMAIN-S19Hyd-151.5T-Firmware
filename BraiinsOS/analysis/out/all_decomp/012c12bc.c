// FUN_012c12bc @ 012c12bc size=444 calls_out=5 calls_in=2
// strings: 

undefined4 * FUN_012c12bc(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 auStack_110 [88];
  undefined4 *local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 *puStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xa0);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xa0);
  }
  uVar7 = thunk_FUN_016de0ee(puVar1,0x2c0);
  puVar5 = (uint *)((int)uVar7 + (int)((ulonglong)uVar7 >> 0x20));
  if ((char)puVar5[4] == '\0') {
    FUN_015f62e4(&local_b8);
    *puVar5 = (uint)local_b8;
    puVar5[1] = uStack_b4;
    puVar5[2] = uStack_b0;
    puVar5[3] = uStack_ac;
    *(undefined1 *)(puVar5 + 4) = 1;
  }
  uVar2 = *puVar5;
  uVar4 = puVar5[1];
  uVar6 = puVar5[2];
  uVar3 = puVar5[3];
  local_88 = uVar2 + 1;
  uStack_84 = uVar4 + (0xfffffffe < uVar2);
  *puVar5 = local_88;
  puVar5[1] = uStack_84;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  local_b8 = &DAT_005674cc;
  *puVar5 = uVar2 + 3;
  puVar5[1] = uVar4 + (0xfffffffc < uVar2);
  puStack_98 = &DAT_005674cc;
  local_78 = &DAT_005674cc;
  local_a8 = uVar2;
  uStack_a4 = uVar4;
  uStack_a0 = uVar6;
  uStack_9c = uVar3;
  uStack_94 = uStack_b4;
  uStack_90 = uStack_b0;
  uStack_8c = uStack_ac;
  uStack_80 = uVar6;
  uStack_7c = uVar3;
  local_74 = uStack_b4;
  local_70 = uStack_b0;
  local_6c = uStack_ac;
  local_68 = local_b8;
  local_64 = uStack_b4;
  uStack_60 = uStack_b0;
  uStack_5c = uStack_ac;
  local_58 = uVar2;
  uStack_54 = uVar4;
  uStack_50 = uVar6;
  local_4c = uVar3;
  local_48 = puStack_98;
  local_44 = uStack_b4;
  local_40 = uStack_b0;
  local_3c = uStack_ac;
  local_38 = local_88;
  uStack_34 = uStack_84;
  uStack_30 = uVar6;
  local_2c = uVar3;
  FUN_016dd1aa((uint)auStack_110 | 4,&local_b8,0x50);
  puVar1[1] = 1;
  puVar1[2] = 0;
  *puVar1 = 1;
  FUN_016dd1aa(puVar1 + 3,auStack_110,0x54);
  puVar1[0x1c] = 0;
  puVar1[0x18] = uVar2 + 2;
  puVar1[0x19] = uVar4 + (0xfffffffd < uVar2);
  puVar1[0x1a] = uVar6;
  puVar1[0x1b] = uVar3;
  puVar1[0x24] = 0x80000000;
  return puVar1;
}

