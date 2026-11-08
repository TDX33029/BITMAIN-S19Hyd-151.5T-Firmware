// FUN_00a846fc @ 00a846fc size=1048 calls_out=3 calls_in=1
// strings: 

void FUN_00a846fc(undefined4 *param_1,undefined4 *param_2,byte *param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  uint *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 uVar21;
  int *piVar22;
  int *piVar23;
  undefined4 uVar24;
  undefined4 local_1c8;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  uint *local_124;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined2 local_f4;
  int *local_f0;
  undefined4 local_ec;
  int *local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint local_b0;
  uint *local_ac;
  uint uStack_a8;
  uint uStack_a4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  piVar23 = (int *)param_2[0x1c];
  do {
    iVar9 = *piVar23;
    bVar7 = (bool)hasExclusiveAccess(piVar23);
  } while (!bVar7);
  *piVar23 = iVar9 + 1;
  if (-1 < iVar9) {
    piVar16 = (int *)param_2[0x28];
    uVar24 = param_2[0x1d];
    if (piVar16 != (int *)0x0) {
      do {
        iVar9 = *piVar16;
        bVar7 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar7);
      *piVar16 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_00a84b10;
    }
    uVar10 = param_2[0x21];
    uVar11 = param_2[0x22];
    uVar12 = param_2[0x23];
    uVar2 = *(undefined1 *)((int)param_2 + 0x99);
    uVar3 = *(undefined1 *)(param_2 + 0x26);
    uVar19 = param_2[0x1e];
    uVar21 = param_2[0x1f];
    uVar18 = param_2[0x20];
    piVar14 = (int *)param_2[0x18];
    uVar4 = *(undefined1 *)((int)param_2 + 0x9a);
    uVar5 = *(undefined1 *)(param_2 + 0x24);
    do {
      iVar9 = *piVar14;
      bVar7 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar7);
    *piVar14 = iVar9 + 1;
    if (-1 < iVar9) {
      piVar15 = (int *)param_2[0x1a];
      uVar13 = param_2[0x19];
      if (piVar15 != (int *)0x0) {
        do {
          iVar9 = *piVar15;
          bVar7 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar7);
        *piVar15 = iVar9 + 1;
        if (iVar9 < 0) goto LAB_00a84b10;
        local_1c8 = param_2[0x1b];
      }
      local_150 = *param_2;
      local_14c = param_2[1];
      local_148 = param_2[2];
      local_144 = param_2[3];
      local_140 = param_2[4];
      local_13c = param_2[5];
      local_138 = param_2[6];
      local_110 = param_2[0x10];
      local_108 = param_2[0x12];
      local_104 = param_2[0x13];
      local_100 = param_2[0x14];
      local_fc = param_2[0x15];
      local_f8 = param_2[0x16];
      local_f4 = *(undefined2 *)(param_2 + 0x17);
      local_130 = param_2[8];
      local_12c = param_2[9];
      local_128 = param_2[10];
      piVar22 = (int *)param_2[0x27];
      puVar17 = (uint *)param_2[0xb];
      local_118 = param_2[0xe];
      local_114 = param_2[0xf];
      local_134 = param_2[7];
      local_120 = param_2[0xc];
      uVar6 = *(undefined1 *)((int)param_2 + 0xa6);
      local_e4 = local_1c8;
      do {
        iVar9 = *piVar22;
        bVar7 = (bool)hasExclusiveAccess(piVar22);
      } while (!bVar7);
      *piVar22 = iVar9 + 1;
      local_f0 = piVar14;
      local_ec = uVar13;
      local_e8 = piVar15;
      local_124 = puVar17;
      if (-1 < iVar9) {
        uVar20 = (uint)*param_3;
        if (uVar20 == 0) {
          local_b0 = 0;
        }
        else if (uVar20 == 1) {
          local_b0 = (uint)param_3[1] << 8;
        }
        else {
          puVar17 = (uint *)FUN_014333b0();
          puVar8 = *(undefined4 **)(param_3 + 4);
          (**(code **)*puVar8)(&local_b0,puVar8 + 3,puVar8[1],puVar8[2]);
          *puVar17 = local_b0;
          puVar17[1] = (uint)local_ac;
          puVar17[2] = uStack_a8;
          puVar17[3] = uStack_a4;
          local_b0 = 0;
        }
        local_b0 = local_b0 | uVar20;
        local_ac = puVar17;
        (*(code *)**(undefined4 **)(param_3 + 8))
                  (&uStack_a8,param_3 + 0x14,*(undefined4 *)(param_3 + 0xc),
                   *(undefined4 *)(param_3 + 0x10));
        FUN_01441788(&local_e0,&local_b0);
        local_40 = *(undefined4 *)param_3;
        uStack_3c = *(undefined4 *)(param_3 + 4);
        uStack_38 = *(undefined4 *)(param_3 + 8);
        uStack_34 = *(undefined4 *)(param_3 + 0xc);
        uStack_30 = *(undefined4 *)(param_3 + 0x10);
        uStack_2c = *(undefined4 *)(param_3 + 0x14);
        param_1[0x2f] = local_e0;
        param_1[0x30] = uStack_dc;
        param_1[0x31] = uStack_d8;
        param_1[0x32] = uStack_d4;
        param_1[0x33] = uStack_d0;
        param_1[0x34] = local_cc;
        param_1[0x35] = uStack_c8;
        param_1[0x36] = uStack_c4;
        param_1[0x37] = uStack_c0;
        param_1[0x38] = uStack_bc;
        param_1[0x39] = uStack_b8;
        FUN_01bed4e2(&local_b0,&local_150,0x70);
        *(undefined4 *)((int)param_1 + 0xb1) = *(undefined4 *)((int)param_2 + 0x91);
        param_1[0x2d] = param_2[0x25];
        *param_1 = 0;
        param_1[1] = 0;
        FUN_01bed4e2(param_1 + 2,&local_b0,0x88);
        *(undefined1 *)((int)param_1 + 0xf1) = uVar6;
        *(undefined1 *)(param_1 + 0x3c) = uVar6;
        param_1[0x3a] = piVar22;
        param_1[0x3b] = piVar16;
        *(undefined1 *)((int)param_1 + 0xba) = uVar4;
        *(undefined1 *)((int)param_1 + 0xb9) = uVar2;
        *(undefined1 *)(param_1 + 0x2e) = uVar3;
        *(undefined1 *)(param_1 + 0x2c) = uVar5;
        param_1[0x25] = uVar24;
        param_1[0x26] = uVar19;
        param_1[0x27] = uVar21;
        param_1[0x28] = uVar18;
        param_1[0x29] = uVar10;
        param_1[0x2a] = uVar11;
        param_1[0x24] = piVar23;
        param_1[0x2b] = uVar12;
        return;
      }
    }
  }
LAB_00a84b10:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xa84b10);
  (*pcVar1)();
}

