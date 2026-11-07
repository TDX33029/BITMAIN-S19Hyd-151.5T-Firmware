// FUN_0062ddfc @ 0062ddfc size=1360 calls_out=6 calls_in=3
// strings: 

void FUN_0062ddfc(undefined4 *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  bool bVar14;
  uint local_94;
  uint *local_90;
  uint local_88;
  int local_84;
  uint local_80;
  int local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_3 < 0x34) goto LAB_0062de30;
  uVar1 = *param_2;
  bVar14 = uVar1 == 0x464c457f;
  if (bVar14) {
    uVar1 = (uint)(byte)param_2[1];
  }
  if ((((!bVar14 || uVar1 != 1) || (1 < *(byte *)((int)param_2 + 5) - 1)) ||
      (*(char *)((int)param_2 + 6) != '\x01')) || (*(char *)((int)param_2 + 5) == '\x02'))
  goto LAB_0062de30;
  uVar1 = param_2[8];
  if (uVar1 == 0) {
LAB_0062df2c:
    bVar14 = true;
    local_94 = 0;
    iVar4 = 1;
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    local_90 = (uint *)0x0;
    local_7c = 1;
  }
  else {
    local_80 = (uint)(ushort)param_2[0xc];
    if (local_80 == 0) {
      if ((*(short *)((int)param_2 + 0x2e) != 0x28) || (param_3 < uVar1 || param_3 - uVar1 < 0x28))
      goto LAB_0062de30;
      local_80 = *(uint *)((int)param_2 + uVar1 + 0x14);
      if (local_80 == 0) goto LAB_0062df2c;
    }
    else if (*(short *)((int)param_2 + 0x2e) != 0x28) goto LAB_0062de30;
    if (((int)((ulonglong)local_80 * 0x28 >> 0x20) != 0) ||
       (param_3 < uVar1 || param_3 - uVar1 < (uint)((ulonglong)local_80 * 0x28))) {
LAB_0062de30:
      param_1[0x10] = 0x80000000;
      return;
    }
    local_7c = (int)param_2 + uVar1;
    uVar1 = (uint)*(ushort *)((int)param_2 + 0x32);
    if (uVar1 == 0xffff) {
      uVar1 = *(uint *)(local_7c + 0x18);
    }
    if ((uVar1 == 0) || (local_80 <= uVar1)) goto LAB_0062de30;
    iVar4 = local_7c + uVar1 * 0x28;
    iVar2 = 0;
    if (*(int *)(iVar4 + 4) == 8) {
      local_94 = 0;
      local_90 = (uint *)0x0;
      local_84 = 0;
      local_88 = 0;
    }
    else {
      local_94 = *(uint *)(iVar4 + 0x10);
      local_84 = *(uint *)(iVar4 + 0x14) + local_94;
      local_88 = (uint)CARRY4(*(uint *)(iVar4 + 0x14),local_94);
      local_90 = param_2;
    }
    iVar4 = local_7c + local_80 * 0x28;
    iVar7 = local_80 * 0x28;
    iVar5 = local_7c;
    do {
      if (*(int *)(iVar5 + 4) == 2) {
        FUN_00617708(&local_78,param_2,param_3,local_7c,local_80,iVar2,iVar5);
        if (local_78 == (undefined4 *)0x0) goto LAB_0062de30;
        local_40 = local_68;
        uStack_3c = uStack_64;
        uStack_38 = local_60;
        uStack_34 = local_5c;
        uStack_30 = local_58;
        uStack_2c = local_54;
        if (local_74 == (undefined4 *)0x0) goto LAB_0062dfa4;
        puVar10 = local_78 + (int)local_74 * 4;
        goto LAB_0062e1b0;
      }
      iVar5 = iVar5 + 0x28;
      iVar2 = iVar2 + 1;
      iVar7 = iVar7 + -0x28;
    } while (iVar7 != 0);
    bVar14 = false;
  }
  local_74 = (undefined4 *)0x0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_70 = (undefined4 *)0x1;
  local_40 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  if (!bVar14) {
LAB_0062dfa4:
    iVar7 = 0;
    iVar2 = local_7c;
    do {
      if (*(int *)(iVar2 + 4) == 0xb) {
        local_68 = local_40;
        local_60 = uStack_38;
        local_5c = uStack_34;
        local_58 = uStack_30;
        local_54 = uStack_2c;
        FUN_00617708(&local_78,param_2,param_3,local_7c,local_80,iVar7,iVar2);
        if (local_78 == (undefined4 *)0x0) goto LAB_0062de30;
        local_40 = local_68;
        uStack_3c = uStack_64;
        uStack_38 = local_60;
        uStack_34 = local_5c;
        uStack_30 = local_58;
        uStack_2c = local_54;
        if (local_74 == (undefined4 *)0x0) goto LAB_0062e018;
        puVar10 = local_78 + (int)local_74 * 4;
        goto LAB_0062e1b0;
      }
      iVar2 = iVar2 + 0x28;
      iVar7 = iVar7 + 1;
    } while (iVar2 != iVar4);
  }
  local_40 = 0;
  uStack_3c = uStack_64;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
LAB_0062e018:
  puVar12 = (undefined4 *)&DAT_00000008;
  puVar8 = (undefined4 *)0x0;
  puVar10 = (undefined4 *)0x0;
LAB_0062e024:
  param_1[4] = local_90;
  param_1[3] = local_80;
  param_1[6] = local_94;
  param_1[7] = 0;
  param_1[8] = local_84;
  param_1[9] = local_88;
  param_1[0x10] = puVar10;
  param_1[0x11] = puVar12;
  param_1[0x12] = puVar8;
  param_1[5] = param_3;
  param_1[2] = local_7c;
  param_1[10] = local_40;
  param_1[0xb] = uStack_3c;
  param_1[0xc] = uStack_38;
  param_1[0xd] = uStack_34;
  param_1[0xe] = uStack_30;
  param_1[0xf] = uStack_2c;
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
  while (local_78 = puVar11, puVar11 != puVar10) {
LAB_0062e1b0:
    puVar11 = local_78 + 4;
    if (((*(byte *)(local_78 + 3) & 0xf) - 1 < 2) && (*(short *)((int)local_78 + 0xe) != 0)) {
      uVar3 = *local_78;
      uVar9 = local_78[1];
      uVar13 = local_78[2];
      puVar12 = (undefined4 *)thunk_FUN_016d4a50(0x60);
      if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(8,0x60);
      }
      *puVar12 = uVar9;
      puVar12[1] = 0;
      puVar12[2] = uVar13;
      puVar8 = (undefined4 *)0x1;
      puVar12[3] = 0;
      puVar12[4] = uVar3;
      local_70 = (undefined4 *)0x1;
      local_78 = (undefined4 *)0x4;
      if (puVar11 == puVar10) {
        puVar10 = (undefined4 *)0x4;
      }
      else {
        local_74 = puVar12;
        do {
          puVar8 = local_70;
          puVar6 = puVar11;
          while ((puVar11 = puVar6 + 4, 1 < (*(byte *)(puVar6 + 3) & 0xf) - 1 ||
                 (*(short *)((int)puVar6 + 0xe) == 0))) {
            puVar6 = puVar11;
            if (puVar11 == puVar10) goto LAB_0062e2f0;
          }
          uVar9 = *puVar6;
          uVar13 = puVar6[1];
          uVar3 = puVar6[2];
          if (local_70 == local_78) {
            FUN_0061d240(&local_78,local_70,1,8,0x18);
            puVar12 = local_74;
          }
          local_70 = (undefined4 *)((int)puVar8 + 1);
          puVar8 = puVar12 + (int)puVar8 * 6;
          *puVar8 = uVar13;
          puVar8[1] = 0;
          puVar8[3] = 0;
          puVar8[2] = uVar3;
          puVar8[4] = uVar9;
        } while (puVar11 != puVar10);
LAB_0062e2f0:
        puVar8 = local_70;
        puVar12 = local_74;
        puVar10 = local_78;
        if ((undefined4 *)0x1 < local_70) {
          if (local_70 < (undefined4 *)0x15) {
            FUN_00613768(local_74,local_70);
          }
          else {
            FUN_00619234(local_74,local_70);
          }
        }
      }
      goto LAB_0062e024;
    }
  }
  goto LAB_0062e018;
}

