// FUN_0072fb60 @ 0072fb60 size=1484 calls_out=7 calls_in=3
// strings: lid ELF sect | ion  | header offset/size/a | lid ELF sect | ment | lign

void FUN_0072fb60(undefined4 *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  char *pcVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  uint local_ac;
  int local_a8;
  uint *local_a0;
  uint local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (param_3 < 0x34) goto LAB_0072fb94;
  uVar1 = *param_2;
  bVar18 = uVar1 == 0x464c457f;
  if (bVar18) {
    uVar1 = (uint)(byte)param_2[1];
  }
  if ((((!bVar18 || uVar1 != 1) || (1 < *(byte *)((int)param_2 + 5) - 1)) ||
      (*(char *)((int)param_2 + 6) != '\x01')) || (*(byte *)((int)param_2 + 5) == 2))
  goto LAB_0072fb94;
  uVar1 = param_2[8];
  if (uVar1 == 0) {
LAB_0072fd0c:
    uVar11 = 0;
    pcVar14 = (char *)0x1;
LAB_0072fd14:
    local_a8 = 0;
    local_ac = 0;
    local_98 = 0;
    local_a0 = (uint *)0x0;
  }
  else {
    uVar11 = (uint)(ushort)param_2[0xc];
    if (uVar11 == 0) {
      FUN_0072df6c(&local_70,uVar1,*(undefined2 *)((int)param_2 + 0x2e),param_2,param_3);
      if (local_70 != (undefined4 *)0x0) goto LAB_0072fb94;
      if (local_6c != (undefined4 *)0x0) {
        uVar11 = *(uint *)((int)local_6c + 0x14);
      }
      if (local_6c == (undefined4 *)0x0 || uVar11 == 0) goto LAB_0072fd0c;
    }
    if (*(short *)((int)param_2 + 0x2e) != 0x28) goto LAB_0072fb94;
    pcVar14 = "Inva";
    bVar18 = (int)((ulonglong)uVar11 * 0x28 >> 0x20) == 0;
    bVar19 = uVar1 <= param_3;
    bVar20 = (uint)((ulonglong)uVar11 * 0x28) <= param_3 - uVar1;
    if ((bVar18 && bVar19) && bVar20) {
      pcVar14 = (char *)((int)param_2 + uVar1);
    }
    if ((!bVar18 || !bVar19) || !bVar20) {
      uVar11 = 0x30;
    }
    if ((!bVar18 || !bVar19) || !bVar20) goto LAB_0072fb94;
    uVar2 = (uint)*(ushort *)((int)param_2 + 0x32);
    if (uVar2 == 0xffff) {
      FUN_0072df6c(&local_70,uVar1,*(undefined2 *)((int)param_2 + 0x2e),param_2,param_3);
      if ((local_70 != (undefined4 *)0x0) || (local_6c == (undefined4 *)0x0)) goto LAB_0072fb94;
      uVar2 = *(uint *)((int)local_6c + 0x18);
    }
    if ((uVar2 == 0) || (uVar11 <= uVar2)) goto LAB_0072fb94;
    if (*(int *)(pcVar14 + uVar2 * 0x28 + 4) == 8) goto LAB_0072fd14;
    local_98 = *(uint *)(pcVar14 + uVar2 * 0x28 + 0x10);
    local_a8 = *(uint *)(pcVar14 + uVar2 * 0x28 + 0x14) + local_98;
    local_ac = (uint)CARRY4(*(uint *)(pcVar14 + uVar2 * 0x28 + 0x14),local_98);
    local_a0 = param_2;
  }
  iVar5 = uVar11 * 0x28;
  iVar3 = -1;
  piVar8 = (int *)(pcVar14 + 4);
  do {
    if (iVar5 == 0) {
      local_28 = 0;
      local_2c = 0;
      local_30 = 0;
      local_34 = 0;
      local_60 = 0;
      local_64 = 0;
      local_68 = (undefined4 *)0x1;
      local_6c = (undefined4 *)0x0;
      local_5c = local_38;
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      goto LAB_0072fe28;
    }
    piVar10 = piVar8 + -1;
    iVar9 = *piVar8;
    iVar5 = iVar5 + -0x28;
    iVar3 = iVar3 + 1;
    piVar8 = piVar8 + 10;
  } while (iVar9 != 2);
  FUN_0072f5cc(&local_70,param_2,param_3,pcVar14,uVar11,iVar3,piVar10);
  if (local_70 == (undefined4 *)0x0) {
LAB_0072fb94:
    param_1[0x10] = 0x80000000;
    return;
  }
  local_88 = local_60;
  uStack_84 = local_5c;
  local_80 = local_58;
  uStack_7c = uStack_54;
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  if (local_6c == (undefined4 *)0x0) {
LAB_0072fe28:
    iVar5 = uVar11 * 0x28;
    iVar3 = -1;
    piVar8 = (int *)(pcVar14 + 4);
    do {
      if (iVar5 == 0) {
        local_88 = 0;
        uStack_84 = local_38;
        local_80 = 0;
        uStack_7c = 0;
        uStack_78 = 0;
        uStack_74 = 0;
        goto LAB_0072ff48;
      }
      piVar10 = piVar8 + -1;
      iVar9 = *piVar8;
      iVar5 = iVar5 + -0x28;
      iVar3 = iVar3 + 1;
      piVar8 = piVar8 + 10;
    } while (iVar9 != 0xb);
    FUN_0072f5cc(&local_70,param_2,param_3,pcVar14,uVar11,iVar3,piVar10);
    if (local_70 == (undefined4 *)0x0) goto LAB_0072fb94;
    local_88 = local_60;
    uStack_84 = local_5c;
    local_80 = local_58;
    uStack_7c = uStack_54;
    uStack_78 = uStack_50;
    uStack_74 = uStack_4c;
    if (local_6c == (undefined4 *)0x0) goto LAB_0072ff48;
    puVar15 = local_70 + (int)local_6c * 4;
  }
  else {
    puVar15 = local_70 + (int)local_6c * 4;
  }
  do {
    puVar17 = local_70 + 4;
    if (((*(byte *)(local_70 + 3) & 0xf) - 1 < 2) && (*(short *)((int)local_70 + 0xe) != 0)) {
      uVar6 = *local_70;
      uVar13 = local_70[1];
      uVar4 = local_70[2];
      puVar16 = (undefined4 *)thunk_FUN_01be5118(0x60);
      if (puVar16 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,0x60);
      }
      *puVar16 = uVar13;
      puVar16[1] = 0;
      puVar12 = (undefined4 *)0x1;
      puVar16[3] = 0;
      puVar16[4] = uVar6;
      puVar16[2] = uVar4;
      local_68 = (undefined4 *)0x1;
      local_70 = (undefined4 *)0x4;
      local_6c = puVar16;
      if (puVar17 == puVar15) {
        puVar15 = (undefined4 *)0x4;
      }
      else {
        do {
          puVar12 = local_68;
          puVar7 = puVar17;
          while ((puVar17 = puVar7 + 4, 1 < (*(byte *)(puVar7 + 3) & 0xf) - 1 ||
                 (*(short *)((int)puVar7 + 0xe) == 0))) {
            puVar7 = puVar17;
            if (puVar17 == puVar15) goto LAB_007300dc;
          }
          uVar6 = *puVar7;
          uVar13 = puVar7[1];
          uVar4 = puVar7[2];
          if (local_68 == local_70) {
            FUN_016092cc(&local_70,local_68,1,8,0x18);
            puVar16 = local_6c;
          }
          local_68 = (undefined4 *)((int)puVar12 + 1);
          puVar12 = puVar16 + (int)puVar12 * 6;
          *puVar12 = uVar13;
          puVar12[1] = 0;
          puVar12[3] = 0;
          puVar12[2] = uVar4;
          puVar12[4] = uVar6;
        } while (puVar17 != puVar15);
LAB_007300dc:
        puVar12 = local_68;
        puVar16 = local_6c;
        puVar15 = local_70;
        if ((undefined4 *)0x1 < local_68) {
          if (local_68 < (undefined4 *)0x15) {
            FUN_007345a8(local_6c,local_68);
          }
          else {
            FUN_00723a88(local_6c,local_68);
          }
        }
      }
      goto LAB_0072ff54;
    }
    local_70 = puVar17;
  } while (puVar17 != puVar15);
LAB_0072ff48:
  puVar16 = (undefined4 *)&DAT_00000008;
  puVar15 = (undefined4 *)0x0;
  puVar12 = (undefined4 *)0x0;
LAB_0072ff54:
  param_1[4] = local_a0;
  param_1[6] = local_98;
  param_1[0x12] = puVar12;
  param_1[8] = local_a8;
  param_1[0x10] = puVar15;
  param_1[0x11] = puVar16;
  param_1[5] = param_3;
  param_1[3] = uVar11;
  param_1[7] = 0;
  param_1[9] = local_ac;
  param_1[10] = local_88;
  param_1[0xb] = uStack_84;
  param_1[0xc] = local_80;
  param_1[0xd] = uStack_7c;
  param_1[0xe] = uStack_78;
  param_1[0xf] = uStack_74;
  param_1[2] = pcVar14;
  param_1[1] = param_3;
  *param_1 = param_2;
  return;
}

