// FUN_01a757a0 @ 01a757a0 size=908 calls_out=4 calls_in=2
// strings: 

int FUN_01a757a0(undefined4 *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  undefined4 local_130;
  undefined4 *local_108;
  int local_104;
  undefined4 *local_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [80];
  undefined4 *local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar4 = FUN_01a756a0();
  FUN_01a6434c(auStack_98,param_1 + 0x10);
  uVar15 = param_1[6];
  uVar17 = param_1[7];
  uVar20 = param_1[4];
  uVar22 = param_1[5];
  if (param_1[1] == 0) {
    local_48 = &DAT_0056d238;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
  }
  else {
    FUN_019790d4(&local_108,0xc,4,param_1[1] + 1);
    iVar24 = local_104;
    puVar16 = local_108;
    puVar19 = (uint *)*param_1;
    FUN_01bed4e2(local_108,puVar19,local_104 + 5);
    iVar5 = param_1[3];
    if (iVar5 != 0) {
      puVar7 = puVar19 + 1;
      uVar12 = ~*puVar19 & 0x80808080;
      puVar11 = puVar19;
      iVar23 = iVar5;
      do {
        puVar6 = puVar7;
        if (uVar12 == 0) {
          do {
            puVar7 = puVar6 + 1;
            uVar12 = *puVar6;
            puVar11 = puVar11 + -0xc;
            puVar6 = puVar7;
          } while ((uVar12 & 0x80808080) == 0x80808080);
          uVar12 = uVar12 & 0x80808080 ^ 0x80808080;
        }
        uVar1 = (uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                              (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3;
        uVar18 = puVar11[uVar1 * -3 + -3];
        piVar8 = (int *)puVar11[uVar1 * -3 + -2];
        do {
          iVar21 = *piVar8;
          bVar3 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar3);
        *piVar8 = iVar21 + 1;
        if (iVar21 < 0) goto LAB_01a75b28;
        iVar21 = uVar1 * -0xc - (int)puVar19;
        iVar23 = iVar23 + -1;
        *(uint *)((int)puVar11 + (int)puVar16 + iVar21 + -4) = puVar11[uVar1 * -3 + -1];
        *(int **)((int)puVar11 + (int)puVar16 + iVar21 + -8) = piVar8;
        uVar12 = uVar12 - 1 & uVar12;
        *(uint *)((int)puVar11 + (int)puVar16 + iVar21 + -0xc) = uVar18;
      } while (iVar23 != 0);
    }
    local_44 = iVar24;
    local_40 = param_1[2];
    local_48 = puVar16;
    local_3c = iVar5;
  }
  uVar13 = param_1[0xf];
  uVar9 = param_1[0xc];
  uVar10 = param_1[0xd];
  uVar14 = param_1[0xe];
  local_38 = uVar20;
  uStack_34 = uVar22;
  local_30 = uVar15;
  local_2c = uVar17;
  if (param_1[9] == 0) {
    iVar24 = 0;
    local_130 = 0;
    puVar16 = &DAT_0056d238;
    iVar5 = 0;
  }
  else {
    FUN_019790d4(&local_108,0xc,4,param_1[9] + 1);
    puVar19 = (uint *)param_1[8];
    FUN_01bed4e2(local_108,puVar19,local_104 + 5);
    iVar5 = param_1[0xb];
    if (iVar5 != 0) {
      puVar7 = puVar19 + 1;
      uVar12 = ~*puVar19 & 0x80808080;
      puVar11 = puVar19;
      iVar24 = iVar5;
      do {
        puVar6 = puVar7;
        if (uVar12 == 0) {
          do {
            puVar7 = puVar6 + 1;
            uVar12 = *puVar6;
            puVar11 = puVar11 + -0xc;
            puVar6 = puVar7;
          } while ((uVar12 & 0x80808080) == 0x80808080);
          uVar12 = uVar12 & 0x80808080 ^ 0x80808080;
        }
        uVar1 = (uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                              (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3;
        piVar8 = (int *)puVar11[uVar1 * -3 + -3];
        do {
          iVar23 = *piVar8;
          bVar3 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar3);
        *piVar8 = iVar23 + 1;
        if (iVar23 < 0) {
LAB_01a75b28:
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xfdee,0x1a75b28);
          (*pcVar2)();
        }
        iVar23 = uVar1 * -0xc - (int)puVar19;
        uVar18 = puVar11[uVar1 * -3 + -2];
        *(uint *)((int)puVar11 + (int)local_108 + iVar23 + -4) = puVar11[uVar1 * -3 + -1];
        *(uint *)((int)puVar11 + (int)local_108 + iVar23 + -8) = uVar18;
        *(int **)((int)puVar11 + (int)local_108 + iVar23 + -0xc) = piVar8;
        uVar12 = uVar12 - 1 & uVar12;
        iVar24 = iVar24 + -1;
      } while (iVar24 != 0);
    }
    local_130 = param_1[10];
    puVar16 = local_108;
    iVar24 = local_104;
  }
  FUN_01bed4e2(&local_108,auStack_98,0x4c);
  local_b8 = local_48;
  iStack_b4 = local_44;
  uStack_b0 = local_40;
  iStack_ac = local_3c;
  local_a8 = local_38;
  uStack_a4 = uStack_34;
  uStack_a0 = local_30;
  uStack_9c = local_2c;
  *(undefined4 **)(iVar4 + 8) = local_48;
  *(int *)(iVar4 + 0xc) = local_44;
  *(undefined4 *)(iVar4 + 0x10) = local_40;
  *(int *)(iVar4 + 0x14) = local_3c;
  *(undefined4 *)(iVar4 + 0x18) = local_38;
  *(undefined4 *)(iVar4 + 0x1c) = uStack_34;
  *(undefined4 *)(iVar4 + 0x20) = local_30;
  *(undefined4 *)(iVar4 + 0x24) = local_2c;
  *(undefined4 *)(iVar4 + 0x38) = uVar9;
  *(undefined4 *)(iVar4 + 0x3c) = uVar10;
  *(undefined4 *)(iVar4 + 0x40) = uVar14;
  *(undefined4 *)(iVar4 + 0x44) = uVar13;
  *(undefined4 *)(iVar4 + 0x30) = local_130;
  *(undefined4 **)(iVar4 + 0x28) = puVar16;
  *(int *)(iVar4 + 0x2c) = iVar24;
  *(int *)(iVar4 + 0x34) = iVar5;
  FUN_01bed4e2(iVar4 + 0x48,&local_108,0x4c);
  return iVar4;
}

