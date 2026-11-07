// FUN_00a67a70 @ 00a67a70 size=640 calls_out=3 calls_in=4
// strings: 

void FUN_00a67a70(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  int local_8c;
  int local_80;
  int local_7c;
  int local_78;
  byte *local_70;
  byte *local_6c;
  undefined4 local_68;
  byte *local_64;
  undefined8 local_60;
  int local_58;
  undefined8 *local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  local_68 = *param_2;
  local_70 = (byte *)param_2[1];
  pbVar7 = local_70 + param_2[2] * 0x20;
  local_78 = 0;
  local_8c = 8;
  local_7c = 8;
  local_80 = 0;
  local_6c = local_70;
  local_64 = pbVar7;
  if (param_2[2] != 0) {
    pbVar5 = local_70;
    local_6c = local_70;
    do {
      iVar3 = local_78;
      iVar8 = *(int *)(pbVar5 + 0x10);
      pbVar13 = pbVar5 + 0x20;
      if (iVar8 == -0x80000000) break;
      iVar12 = *(int *)(pbVar5 + 0x18);
      puVar9 = *(undefined8 **)(pbVar5 + 0x14);
      bVar1 = *pbVar5;
      uVar15 = *(undefined8 *)(pbVar5 + 8);
      puVar6 = puVar9;
      puVar10 = puVar9;
      if (iVar12 != 0) {
        iVar11 = iVar12 * 0x28;
        do {
          iVar11 = iVar11 + -0x28;
          local_48 = *(undefined4 *)(puVar10 + 3);
          uStack_44 = *(undefined4 *)((int)puVar10 + 0x1c);
          uStack_40 = *(undefined4 *)(puVar10 + 4);
          uVar2 = *puVar10;
          local_58 = *(int *)(puVar10 + 1);
          local_54 = *(undefined8 **)((int)puVar10 + 0xc);
          local_50 = *(int *)(puVar10 + 2);
          local_4c = *(undefined4 *)((int)puVar10 + 0x14);
          local_60._0_4_ = (undefined4)uVar2;
          local_60._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          *(undefined4 *)puVar10 = (undefined4)local_60;
          *(undefined4 *)((int)puVar10 + 4) = local_60._4_4_;
          *(int *)(puVar10 + 1) = local_58;
          *(undefined8 **)((int)puVar10 + 0xc) = local_54;
          *(int *)(puVar10 + 2) = local_50;
          *(undefined4 *)((int)puVar10 + 0x14) = local_4c;
          *(undefined4 *)(puVar10 + 3) = local_48;
          *(undefined4 *)((int)puVar10 + 0x1c) = uStack_44;
          *(undefined4 *)(puVar10 + 4) = uStack_40;
          *(undefined1 *)((int)puVar10 + 0x24) = *(undefined1 *)((int)puVar10 + 0x24);
          puVar10 = puVar10 + 5;
        } while (iVar11 != 0);
        puVar6 = puVar9 + iVar12 * 5;
        local_60 = uVar2;
      }
      puVar14 = puVar6 + 2;
      for (iVar12 = ((uint)((int)(puVar9 + iVar12 * 5) - (int)puVar6) >> 3) * -0x33333333;
          iVar12 != 0; iVar12 = iVar12 + -1) {
        if (*(int *)(puVar14 + -2) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)((int)puVar14 + -0xc));
        }
        if (*(int *)((int)puVar14 + -4) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)puVar14);
        }
        if (*(int *)(puVar14 + 1) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)((int)puVar14 + 0xc));
        }
        puVar14 = puVar14 + 5;
      }
      local_50 = ((uint)((int)puVar10 - (int)puVar9) >> 3) * -0x33333333;
      local_60 = 0;
      if ((bVar1 & 1) != 0) {
        local_60 = uVar15;
      }
      local_58 = iVar8;
      local_54 = puVar9;
      if (iVar3 == local_80) {
        FUN_00a8a450(&local_80);
        local_8c = local_7c;
      }
      local_78 = iVar3 + 1;
      puVar4 = (undefined4 *)(local_8c + iVar3 * 0x18);
      *puVar4 = (undefined4)local_60;
      puVar4[1] = local_60._4_4_;
      puVar4[2] = local_58;
      puVar4[3] = local_54;
      puVar4[4] = local_50;
      puVar4[5] = local_4c;
      pbVar5 = pbVar13;
    } while (pbVar13 != pbVar7);
    local_6c = pbVar13;
  }
  FUN_00a85bfc(&local_70);
  *param_1 = local_80;
  param_1[1] = local_7c;
  param_1[2] = local_78;
  return;
}

