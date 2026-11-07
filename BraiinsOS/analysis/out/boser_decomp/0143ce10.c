// FUN_0143ce10 @ 0143ce10 size=1148 calls_out=5 calls_in=2
// strings: 

void FUN_0143ce10(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  short *psVar4;
  ushort *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  short *psVar8;
  ushort uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  ushort *puVar16;
  undefined4 *puVar17;
  ushort *puVar18;
  undefined4 uVar19;
  int local_148;
  short *local_144;
  int local_138;
  short *local_134;
  int local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 auStack_118 [80];
  short *local_c8;
  int iStack_c4;
  short *psStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  short *local_a8;
  short *local_a4;
  int local_a0;
  short *local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  short *local_58;
  short *local_54;
  short *local_50;
  short *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_34;
  int local_30;
  short *local_2c;
  int local_28;
  
  puVar6 = *(undefined1 **)(param_3 + 0x50);
  puVar17 = (undefined4 *)(param_3 + 0x38);
  if (puVar6 == &DAT_3b9aca00) {
    FUN_0143d324(param_1 + 0x1c,param_2,*puVar17,*(undefined4 *)(param_3 + 0x3c),
                 *(undefined4 *)(param_3 + 0x40));
    *param_1 = 2;
    param_1[1] = 0;
    param_1[0x24] = param_3;
    return;
  }
  uVar10 = *(undefined4 *)(param_3 + 0x48);
  uVar12 = *(undefined4 *)(param_3 + 0x4c);
  if (*(char *)(param_3 + 0x75) == '\x01') {
    if (*(char *)(param_3 + 0x7a) != '\0') goto LAB_0143cf70;
    local_148 = param_2[2];
    psVar8 = (short *)param_2[3];
    psVar4 = (short *)*param_2;
    psVar13 = (short *)param_2[1];
    if (psVar13 == psVar8) goto LAB_0143d1e0;
    psVar14 = psVar4;
    do {
      sVar1 = *psVar13;
      FUN_01bed4e2(&local_a8,psVar13 + 1,0x1e);
      psVar15 = psVar14;
      if (sVar1 == 0) {
        psVar15 = psVar14 + 0x10;
        *psVar14 = 0;
        FUN_01bed4e2(psVar14 + 1,&local_a8,0x1e);
      }
      psVar13 = psVar13 + 0x10;
      psVar14 = psVar15;
      local_144 = psVar4;
    } while (psVar13 != psVar8);
LAB_0143cf64:
    psVar4 = local_144;
  }
  else {
    if (*(char *)(param_3 + 0x7a) == '\0') {
LAB_0143cf70:
      uVar9 = 0;
      psVar8 = (short *)0x0;
      puVar18 = (ushort *)param_2[1];
      puVar16 = (ushort *)param_2[3];
      psVar4 = (short *)0x4;
      uVar7 = *param_2;
      uVar11 = param_2[2];
      if (puVar16 != puVar18) {
        uVar9 = *puVar18;
      }
      local_130 = 0;
      local_134 = (short *)&SUB_00000004;
      local_138 = 0;
      local_50 = (short *)0x0;
      local_54 = (short *)0x4;
      local_58 = (short *)0x0;
      if (puVar16 != puVar18) {
        do {
          uVar2 = *puVar18;
          FUN_01bed4e2(&local_a8,puVar18 + 1,0x1e);
          iVar3 = local_130;
          if (((uVar2 == 0 ^ uVar9) & 1) == 0) {
            if (psVar8 == local_58) {
              FUN_012eadc4(&local_58);
              psVar4 = local_54;
            }
            puVar5 = (ushort *)((int)psVar4 + (int)psVar8 * 0x20);
            *puVar5 = uVar2;
            FUN_01bed4e2(puVar5 + 1,&local_a8,0x1e);
            psVar8 = (short *)((int)psVar8 + 1);
            local_50 = psVar8;
          }
          else {
            if (local_130 == local_138) {
              FUN_012eadc4(&local_138);
            }
            local_134[iVar3 * 0x10] = uVar2;
            FUN_01bed4e2(local_134 + iVar3 * 0x10 + 1,&local_a8,0x1e);
            local_130 = iVar3 + 1;
          }
          puVar18 = puVar18 + 0x10;
        } while (puVar18 != puVar16);
      }
      psVar13 = local_54;
      local_144 = local_58;
      iVar3 = local_130;
      psVar4 = local_134;
      local_148 = local_138;
      FUN_0134c054(uVar11,uVar7,4,0x20);
      psVar15 = psVar4 + iVar3 * 0x10;
      if (((uint)psVar8 & 0x7ffffff) != 0) {
        uVar7 = *(undefined4 *)(param_3 + 0x40);
        uVar11 = *puVar17;
        uVar19 = *(undefined4 *)(param_3 + 0x3c);
        local_a0 = local_148;
        local_a8 = psVar4;
        local_a4 = psVar4;
        local_9c = psVar15;
        FUN_0143d324(&local_138,&local_a8,uVar11,uVar19,uVar7);
        FUN_019e6e74(&local_a8,&DAT_01cf8004,uVar10,uVar12,puVar6,&DAT_01cf8004);
        local_28 = (int)psVar13 + (int)psVar8 * 0x20;
        local_30 = (int)psVar13;
        local_34 = (int)psVar13;
        local_2c = local_144;
        FUN_0143d324(&local_58,&local_34,uVar11,uVar19,uVar7);
        FUN_01bed4e2(auStack_118,&local_a8,0x50);
        local_c8 = local_58;
        iStack_c4 = (int)local_54;
        psStack_c0 = local_50;
        uStack_bc = local_4c;
        local_b8 = local_48;
        uStack_b4 = uStack_44;
        uStack_b0 = uStack_40;
        uStack_ac = uStack_3c;
        param_1[0x1c] = local_138;
        param_1[0x1d] = local_134;
        param_1[0x1e] = local_130;
        param_1[0x1f] = uStack_12c;
        param_1[0x20] = local_128;
        param_1[0x21] = uStack_124;
        param_1[0x22] = uStack_120;
        param_1[0x23] = uStack_11c;
        FUN_01bed4e2(param_1,auStack_118,0x70);
        param_1[0x24] = param_3;
        return;
      }
      goto LAB_0143d218;
    }
    local_148 = param_2[2];
    psVar8 = (short *)param_2[3];
    psVar4 = (short *)*param_2;
    psVar13 = (short *)param_2[1];
    if (psVar13 != psVar8) {
      psVar14 = psVar4;
      do {
        sVar1 = *psVar13;
        FUN_01bed4e2(&local_a8,psVar13 + 1,0x1e);
        psVar15 = psVar14;
        if (sVar1 != 0) {
          psVar15 = psVar14 + 0x10;
          *psVar14 = sVar1;
          FUN_01bed4e2(psVar14 + 1,&local_a8,0x1e);
        }
        psVar13 = psVar13 + 0x10;
        psVar14 = psVar15;
        local_144 = psVar4;
      } while (psVar13 != psVar8);
      goto LAB_0143cf64;
    }
LAB_0143d1e0:
    psVar15 = psVar4;
  }
  local_144 = (short *)0x0;
  psVar13 = (short *)0x4;
  FUN_0134c054(0,4,4,0x20);
LAB_0143d218:
  local_58 = psVar4;
  local_54 = psVar4;
  local_50 = (short *)local_148;
  local_4c = psVar15;
  FUN_0143d324(&local_a8,&local_58,*puVar17,*(undefined4 *)(param_3 + 0x3c),
               *(undefined4 *)(param_3 + 0x40));
  param_1[0x1c] = local_a8;
  param_1[0x1d] = local_a4;
  param_1[0x1e] = local_a0;
  param_1[0x1f] = local_9c;
  param_1[0x20] = local_98;
  param_1[0x21] = uStack_94;
  param_1[0x22] = uStack_90;
  param_1[0x23] = uStack_8c;
  *param_1 = 2;
  param_1[1] = 0;
  param_1[0x24] = param_3;
  FUN_0134c054(local_144,psVar13,4,0x20);
  return;
}

