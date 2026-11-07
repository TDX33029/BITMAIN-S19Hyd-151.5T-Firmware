// FUN_006cac18 @ 006cac18 size=348 calls_out=4 calls_in=115
// strings: 

void FUN_006cac18(uint *param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  undefined4 *puStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar5 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar1 = (uint *)((int)uVar5 + (int)((ulonglong)uVar5 >> 0x20));
  if ((char)puVar1[4] == '\0') {
    FUN_019ae6ac(&local_98);
    *puVar1 = local_98;
    puVar1[1] = uStack_94;
    puVar1[2] = uStack_90;
    puVar1[3] = uStack_8c;
    *(undefined1 *)(puVar1 + 4) = 1;
  }
  local_98 = *puVar1;
  uStack_94 = puVar1[1];
  uStack_90 = puVar1[2];
  uStack_8c = puVar1[3];
  *puVar1 = local_98 + 1;
  puVar1[1] = uStack_94 + (0xfffffffe < local_98);
  local_80 = 0;
  local_88 = 0;
  local_84 = 8;
  puStack_7c = &DAT_0056d238;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  local_68 = (undefined4 *)param_2[1];
  iVar2 = param_2[2];
  local_5c = local_68 + iVar2 * 0xe;
  local_60 = *param_2;
  local_64 = local_68;
  if (iVar2 != 0) {
    puVar3 = local_68 + 7;
    iVar2 = iVar2 * 0x38;
    puVar6 = local_5c;
    local_64 = local_68;
    do {
      puVar4 = puVar3 + 7;
      if (puVar3[-1] == -0x7ffffff9) break;
      local_58 = puVar3[-5];
      uStack_54 = puVar3[-4];
      uStack_50 = puVar3[-3];
      uStack_4c = puVar3[-2];
      local_44 = *puVar3;
      uStack_40 = puVar3[1];
      uStack_3c = puVar3[2];
      local_38 = puVar3[3];
      uStack_34 = puVar3[4];
      uStack_30 = puVar3[5];
      uStack_2c = puVar3[6];
      puVar4 = puVar6;
      local_48 = puVar3[-1];
      FUN_006cadb8(&local_98,puVar3[-7],puVar3[-6],&local_58,puVar6);
      puVar3 = puVar3 + 0xe;
      iVar2 = iVar2 + -0x38;
      puVar6 = puVar4;
    } while (iVar2 != 0);
    local_64 = puVar4;
  }
  FUN_0070378c(&local_68);
  *param_1 = local_98;
  param_1[1] = uStack_94;
  param_1[2] = uStack_90;
  param_1[3] = uStack_8c;
  param_1[4] = local_88;
  param_1[5] = local_84;
  param_1[6] = local_80;
  param_1[7] = (uint)puStack_7c;
  param_1[8] = uStack_78;
  param_1[9] = uStack_74;
  param_1[10] = uStack_70;
  param_1[0xb] = uStack_6c;
  return;
}

