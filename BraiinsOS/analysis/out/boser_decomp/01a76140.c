// FUN_01a76140 @ 01a76140 size=420 calls_out=5 calls_in=7
// strings: 

undefined4 * FUN_01a76140(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined4 *local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x98);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x98);
  }
  local_64 = 0;
  local_8c = 0;
  local_90 = 4;
  local_94 = 0;
  local_98 = 0;
  local_9c = 1;
  local_a0 = 0;
  local_60 = 0x300;
  local_80 = 0;
  local_84 = 1;
  local_88 = 0;
  local_74 = 0;
  local_78 = 4;
  local_7c = 0;
  local_68 = 0;
  local_6c = 4;
  local_70 = 0;
  local_a8[0] = 0;
  uVar7 = thunk_FUN_01bee35a(0,0x2c0);
  puVar5 = (uint *)((int)uVar7 + (int)((ulonglong)uVar7 >> 0x20));
  if ((char)puVar5[4] == '\0') {
    FUN_019ae6ac(&local_38);
    *puVar5 = local_38;
    puVar5[1] = uStack_34;
    puVar5[2] = uStack_30;
    puVar5[3] = uStack_2c;
    *(undefined1 *)(puVar5 + 4) = 1;
  }
  uVar6 = puVar5[2];
  uVar2 = puVar5[3];
  local_48 = *puVar5;
  uStack_44 = puVar5[1];
  uVar3 = local_48 + 1;
  uVar4 = uStack_44 + (0xfffffffe < local_48);
  *puVar5 = uVar3;
  puVar5[1] = uVar4;
  local_58 = &DAT_0056d238;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  *puVar5 = local_48 + 2;
  puVar5[1] = uStack_44 + (0xfffffffd < local_48);
  local_40 = uVar6;
  local_3c = uVar2;
  FUN_01bed4e2(puVar1 + 0x12,local_a8,0x4c);
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = local_58;
  puVar1[3] = uStack_54;
  puVar1[4] = uStack_50;
  puVar1[5] = uStack_4c;
  puVar1[6] = local_48;
  puVar1[7] = uStack_44;
  puVar1[8] = local_40;
  puVar1[9] = local_3c;
  puVar1[10] = &DAT_0056d238;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = uVar3;
  puVar1[0xf] = uVar4;
  puVar1[0x10] = uVar6;
  puVar1[0x11] = uVar2;
  return puVar1;
}

