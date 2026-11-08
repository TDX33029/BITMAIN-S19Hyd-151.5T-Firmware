// FUN_00ffafe8 @ 00ffafe8 size=6136 calls_out=5 calls_in=1
// strings: 

void FUN_00ffafe8(undefined4 *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  ushort uVar2;
  bool bVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint ***pppuVar10;
  uint **ppuVar11;
  uint uVar12;
  uint ***pppuVar13;
  uint ***pppuVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  uint *unaff_r7;
  uint *puVar19;
  uint ***pppuVar20;
  uint uVar21;
  uint ***pppuVar22;
  uint ***pppuVar23;
  uint ***pppuVar24;
  uint *puVar25;
  uint ***pppuVar26;
  uint *puVar27;
  uint *puVar28;
  undefined8 uVar29;
  int local_178;
  int local_174;
  int local_170;
  uint *local_16c;
  uint *local_168;
  uint *local_164;
  uint *local_160;
  uint *local_15c;
  uint *local_158;
  uint *local_154;
  uint *local_150;
  uint *local_14c;
  uint ***local_144;
  uint local_140;
  uint ***local_13c;
  uint ***local_138;
  uint ***local_134;
  uint ***local_130;
  uint ***local_12c;
  uint ***local_128;
  int *local_124;
  uint ***local_120;
  uint *local_11c;
  uint ***local_118;
  uint ***local_114;
  uint *local_110;
  uint *local_10c;
  ushort local_108;
  undefined2 uStack_106;
  uint ***local_104;
  uint *local_100;
  uint ***local_fc;
  uint ***local_f8;
  uint ***local_f4;
  uint *local_f0;
  uint local_ec;
  uint *local_e8;
  uint ***local_e4;
  undefined4 local_e0;
  uint ***local_dc;
  uint local_d8;
  int local_d4;
  int local_d0;
  uint ***local_cc;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 == 3) {
    uVar5 = FUN_011d8b0c(param_2[1],param_2[2],param_3);
    *param_1 = 3;
    param_1[1] = uVar5;
    param_1[2] = &DAT_01c1bda8;
  }
  else {
    uVar21 = param_3[0x15];
    uVar2 = *(ushort *)(param_3 + 6);
    pppuVar26 = (uint ***)(uint)uVar2;
    if (*param_3 == 1) {
      puVar25 = (uint *)param_3[1];
      do {
        uVar6 = *puVar25;
        bVar3 = (bool)hasExclusiveAccess(puVar25);
      } while (!bVar3);
      *puVar25 = uVar6 + 1;
      pppuVar20 = (uint ***)&DAT_00000001;
      if (0x7fffffff < uVar6) goto LAB_00ffc614;
    }
    else {
      puVar25 = (uint *)param_3[1];
      pppuVar20 = (uint ***)0x0;
    }
    pppuVar22 = (uint ***)param_3[2];
    if (param_3[3] == 2) {
      pppuVar14 = (uint ***)0x2;
    }
    else {
      if ((param_3[3] & 1U) == 0) {
        unaff_r7 = (uint *)param_3[4];
        pppuVar14 = (uint ***)0x0;
      }
      else {
        unaff_r7 = (uint *)param_3[4];
        do {
          uVar6 = *unaff_r7;
          bVar3 = (bool)hasExclusiveAccess(unaff_r7);
        } while (!bVar3);
        *unaff_r7 = uVar6 + 1;
        pppuVar14 = (uint ***)&DAT_00000001;
        if (0x7fffffff < uVar6) goto LAB_00ffc614;
      }
      local_14c = (uint *)param_3[5];
    }
    local_12c = pppuVar14;
    local_128 = pppuVar22;
    if (param_3[7] == 1) {
      puVar7 = (uint *)param_3[8];
      do {
        uVar6 = *puVar7;
        bVar3 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar3);
      *puVar7 = uVar6 + 1;
      pppuVar13 = (uint ***)&DAT_00000001;
      if (0x7fffffff < uVar6) goto LAB_00ffc614;
    }
    else {
      puVar7 = (uint *)param_3[8];
      pppuVar13 = (uint ***)0x0;
    }
    local_134 = (uint ***)param_3[9];
    local_130 = pppuVar13;
    local_124 = param_2;
    if (param_3[10] == 2) {
      pppuVar23 = (uint ***)0x2;
      pppuVar10 = pppuVar13;
    }
    else {
      if ((param_3[10] & 1U) == 0) {
        pppuVar10 = (uint ***)param_3[0xb];
        pppuVar23 = (uint ***)0x0;
      }
      else {
        pppuVar10 = (uint ***)param_3[0xb];
        do {
          ppuVar11 = *pppuVar10;
          bVar3 = (bool)hasExclusiveAccess(pppuVar10);
        } while (!bVar3);
        *pppuVar10 = (uint **)((int)ppuVar11 + 1);
        pppuVar23 = (uint ***)&DAT_00000001;
        if ((uint **)0x7fffffff < ppuVar11) goto LAB_00ffc614;
      }
      local_150 = (uint *)param_3[0xc];
    }
    local_140 = uVar21;
    local_13c = pppuVar20;
    local_138 = pppuVar26;
    if (param_3[0xd] == 1) {
      puVar27 = (uint *)param_3[0xe];
      do {
        uVar12 = *puVar27;
        bVar3 = (bool)hasExclusiveAccess(puVar27);
      } while (!bVar3);
      *puVar27 = uVar12 + 1;
      uVar6 = 1;
      if (0x7fffffff < uVar12) goto LAB_00ffc614;
    }
    else {
      puVar27 = (uint *)param_3[0xe];
      uVar6 = 0;
    }
    pppuVar26 = (uint ***)param_3[0xf];
    local_144 = pppuVar23;
    if (param_3[0x10] == 2) {
      uVar5 = 2;
      local_d8 = 2;
      pppuVar24 = pppuVar23;
    }
    else {
      if ((param_3[0x10] & 1U) == 0) {
        pppuVar24 = (uint ***)param_3[0x11];
        uVar5 = 0;
      }
      else {
        pppuVar24 = (uint ***)param_3[0x11];
        do {
          ppuVar11 = *pppuVar24;
          bVar3 = (bool)hasExclusiveAccess(pppuVar24);
        } while (!bVar3);
        *pppuVar24 = (uint **)((int)ppuVar11 + 1);
        uVar5 = 1;
        if ((uint **)0x7fffffff < ppuVar11) goto LAB_00ffc614;
      }
      local_d8 = param_3[0x12];
    }
    _local_108 = CONCAT22(uStack_106,uVar2);
    local_10c = local_14c;
    local_d4 = param_3[0x13];
    local_d0 = param_3[0x14];
    local_f0 = local_150;
    local_120 = pppuVar20;
    local_11c = puVar25;
    local_118 = pppuVar22;
    local_114 = pppuVar14;
    local_110 = unaff_r7;
    local_104 = pppuVar13;
    local_100 = puVar7;
    local_fc = local_134;
    local_f8 = pppuVar23;
    local_f4 = pppuVar10;
    local_ec = uVar6;
    local_e8 = puVar27;
    local_e4 = pppuVar26;
    local_e0 = uVar5;
    local_dc = pppuVar24;
    local_cc = (uint ***)uVar21;
    FUN_00ffca68(local_b0,param_2,&local_120);
    uVar21 = param_3[0x15];
    uVar2 = *(ushort *)(param_3 + 6);
    uVar6 = (uint)uVar2;
    if (*param_3 == 1) {
      puVar25 = (uint *)param_3[1];
      do {
        uVar12 = *puVar25;
        bVar3 = (bool)hasExclusiveAccess(puVar25);
      } while (!bVar3);
      *puVar25 = uVar12 + 1;
      pppuVar26 = (uint ***)&DAT_00000001;
      if (0x7fffffff < uVar12) goto LAB_00ffc614;
    }
    else {
      puVar25 = (uint *)param_3[1];
      pppuVar26 = (uint ***)0x0;
    }
    pppuVar20 = (uint ***)param_3[2];
    if (param_3[3] == 2) {
      pppuVar22 = (uint ***)0x2;
      puVar7 = local_150;
    }
    else {
      if ((param_3[3] & 1U) == 0) {
        puVar7 = (uint *)param_3[4];
        pppuVar22 = (uint ***)0x0;
      }
      else {
        puVar7 = (uint *)param_3[4];
        do {
          uVar12 = *puVar7;
          bVar3 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar3);
        *puVar7 = uVar12 + 1;
        pppuVar22 = (uint ***)&DAT_00000001;
        if (0x7fffffff < uVar12) goto LAB_00ffc614;
      }
      local_150 = (uint *)param_3[5];
    }
    if (param_3[7] == 1) {
      puVar27 = (uint *)param_3[8];
      do {
        uVar12 = *puVar27;
        bVar3 = (bool)hasExclusiveAccess(puVar27);
      } while (!bVar3);
      *puVar27 = uVar12 + 1;
      local_128 = (uint ***)&DAT_00000001;
      if (0x7fffffff < uVar12) goto LAB_00ffc614;
    }
    else {
      puVar27 = (uint *)param_3[8];
      local_128 = (uint ***)0x0;
    }
    local_130 = (uint ***)param_3[9];
    local_12c = pppuVar22;
    if (param_3[10] == 2) {
      pppuVar13 = (uint ***)0x2;
      pppuVar14 = pppuVar22;
    }
    else {
      if ((param_3[10] & 1U) == 0) {
        pppuVar14 = (uint ***)param_3[0xb];
        pppuVar13 = (uint ***)0x0;
      }
      else {
        pppuVar14 = (uint ***)param_3[0xb];
        do {
          ppuVar11 = *pppuVar14;
          bVar3 = (bool)hasExclusiveAccess(pppuVar14);
        } while (!bVar3);
        *pppuVar14 = (uint **)((int)ppuVar11 + 1);
        pppuVar13 = (uint ***)&DAT_00000001;
        if ((uint **)0x7fffffff < ppuVar11) goto LAB_00ffc614;
      }
      local_154 = (uint *)param_3[0xc];
    }
    if (param_3[0xd] == 1) {
      puVar19 = (uint *)param_3[0xe];
      do {
        uVar8 = *puVar19;
        bVar3 = (bool)hasExclusiveAccess(puVar19);
      } while (!bVar3);
      *puVar19 = uVar8 + 1;
      uVar12 = 1;
      if (0x7fffffff < uVar8) goto LAB_00ffc614;
    }
    else {
      puVar19 = (uint *)param_3[0xe];
      uVar12 = 0;
    }
    local_144 = (uint ***)param_3[0xf];
    local_140 = uVar12;
    local_13c = pppuVar13;
    local_138 = pppuVar20;
    local_134 = pppuVar26;
    if (param_3[0x10] == 2) {
      uVar5 = 2;
      pppuVar10 = pppuVar13;
    }
    else {
      if ((param_3[0x10] & 1U) == 0) {
        pppuVar10 = (uint ***)param_3[0x11];
        uVar5 = 0;
      }
      else {
        pppuVar10 = (uint ***)param_3[0x11];
        do {
          ppuVar11 = *pppuVar10;
          bVar3 = (bool)hasExclusiveAccess(pppuVar10);
        } while (!bVar3);
        *pppuVar10 = (uint **)((int)ppuVar11 + 1);
        uVar5 = 1;
        if ((uint **)0x7fffffff < ppuVar11) goto LAB_00ffc614;
      }
      uVar6 = param_3[0x12];
    }
    local_d4 = param_3[0x13];
    local_d0 = param_3[0x14];
    local_104 = local_128;
    local_f0 = local_154;
    local_10c = local_150;
    _local_108 = CONCAT22(uStack_106,uVar2);
    local_120 = pppuVar26;
    local_11c = puVar25;
    local_118 = pppuVar20;
    local_114 = pppuVar22;
    local_110 = puVar7;
    local_100 = puVar27;
    local_fc = local_130;
    local_f8 = pppuVar13;
    local_f4 = pppuVar14;
    local_ec = uVar12;
    local_e8 = puVar19;
    local_e4 = local_144;
    local_e0 = uVar5;
    local_dc = pppuVar10;
    local_d8 = uVar6;
    local_cc = (uint ***)uVar21;
    FUN_00ffca68(local_a0,local_124 + 3,&local_120);
    uVar21 = param_3[0x15];
    uVar2 = *(ushort *)(param_3 + 6);
    uVar6 = (uint)uVar2;
    if (*param_3 == 1) {
      puVar25 = (uint *)param_3[1];
      do {
        uVar12 = *puVar25;
        bVar3 = (bool)hasExclusiveAccess(puVar25);
      } while (!bVar3);
      *puVar25 = uVar12 + 1;
      pppuVar26 = (uint ***)&DAT_00000001;
      if (0x7fffffff < uVar12) goto LAB_00ffc614;
    }
    else {
      puVar25 = (uint *)param_3[1];
      pppuVar26 = (uint ***)0x0;
    }
    pppuVar20 = (uint ***)param_3[2];
    if (param_3[3] == 2) {
      pppuVar22 = (uint ***)0x2;
    }
    else {
      if ((param_3[3] & 1U) == 0) {
        puVar7 = (uint *)param_3[4];
        pppuVar22 = (uint ***)0x0;
      }
      else {
        puVar7 = (uint *)param_3[4];
        do {
          uVar12 = *puVar7;
          bVar3 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar3);
        *puVar7 = uVar12 + 1;
        pppuVar22 = (uint ***)&DAT_00000001;
        if (0x7fffffff < uVar12) goto LAB_00ffc614;
      }
      local_154 = (uint *)param_3[5];
    }
    if (param_3[7] == 1) {
      puVar27 = (uint *)param_3[8];
      do {
        uVar12 = *puVar27;
        bVar3 = (bool)hasExclusiveAccess(puVar27);
      } while (!bVar3);
      *puVar27 = uVar12 + 1;
      local_128 = (uint ***)&DAT_00000001;
      if (0x7fffffff < uVar12) goto LAB_00ffc614;
    }
    else {
      puVar27 = (uint *)param_3[8];
      local_128 = (uint ***)0x0;
    }
    local_130 = (uint ***)param_3[9];
    local_12c = pppuVar22;
    if (param_3[10] == 2) {
      pppuVar13 = (uint ***)0x2;
      pppuVar14 = pppuVar22;
    }
    else {
      if ((param_3[10] & 1U) == 0) {
        pppuVar14 = (uint ***)param_3[0xb];
        pppuVar13 = (uint ***)0x0;
      }
      else {
        pppuVar14 = (uint ***)param_3[0xb];
        do {
          ppuVar11 = *pppuVar14;
          bVar3 = (bool)hasExclusiveAccess(pppuVar14);
        } while (!bVar3);
        *pppuVar14 = (uint **)((int)ppuVar11 + 1);
        pppuVar13 = (uint ***)&DAT_00000001;
        if ((uint **)0x7fffffff < ppuVar11) goto LAB_00ffc614;
      }
      local_158 = (uint *)param_3[0xc];
    }
    if (param_3[0xd] == 1) {
      puVar19 = (uint *)param_3[0xe];
      do {
        uVar8 = *puVar19;
        bVar3 = (bool)hasExclusiveAccess(puVar19);
      } while (!bVar3);
      *puVar19 = uVar8 + 1;
      uVar12 = 1;
      if (0x7fffffff < uVar8) goto LAB_00ffc614;
    }
    else {
      puVar19 = (uint *)param_3[0xe];
      uVar12 = 0;
    }
    local_144 = (uint ***)param_3[0xf];
    local_140 = uVar12;
    local_13c = pppuVar13;
    local_138 = pppuVar20;
    local_134 = pppuVar26;
    if (param_3[0x10] == 2) {
      uVar5 = 2;
      pppuVar10 = pppuVar13;
    }
    else {
      if ((param_3[0x10] & 1U) == 0) {
        pppuVar10 = (uint ***)param_3[0x11];
        uVar5 = 0;
      }
      else {
        pppuVar10 = (uint ***)param_3[0x11];
        do {
          ppuVar11 = *pppuVar10;
          bVar3 = (bool)hasExclusiveAccess(pppuVar10);
        } while (!bVar3);
        *pppuVar10 = (uint **)((int)ppuVar11 + 1);
        uVar5 = 1;
        if ((uint **)0x7fffffff < ppuVar11) goto LAB_00ffc614;
      }
      uVar6 = param_3[0x12];
    }
    local_d4 = param_3[0x13];
    local_d0 = param_3[0x14];
    local_104 = local_128;
    local_f0 = local_158;
    local_10c = local_154;
    _local_108 = CONCAT22(uStack_106,uVar2);
    local_120 = pppuVar26;
    local_11c = puVar25;
    local_118 = pppuVar20;
    local_114 = pppuVar22;
    local_110 = puVar7;
    local_100 = puVar27;
    local_fc = local_130;
    local_f8 = pppuVar13;
    local_f4 = pppuVar14;
    local_ec = uVar12;
    local_e8 = puVar19;
    local_e4 = local_144;
    local_e0 = uVar5;
    local_dc = pppuVar10;
    local_d8 = uVar6;
    local_cc = (uint ***)uVar21;
    FUN_00ffca68(local_90,local_124 + 6,&local_120);
    uVar21 = param_3[0x15];
    uVar2 = *(ushort *)(param_3 + 6);
    uVar6 = (uint)uVar2;
    if (*param_3 == 1) {
      puVar25 = (uint *)param_3[1];
      do {
        uVar12 = *puVar25;
        bVar3 = (bool)hasExclusiveAccess(puVar25);
      } while (!bVar3);
      *puVar25 = uVar12 + 1;
      pppuVar26 = (uint ***)&DAT_00000001;
      if (0x7fffffff < uVar12) goto LAB_00ffc614;
    }
    else {
      puVar25 = (uint *)param_3[1];
      pppuVar26 = (uint ***)0x0;
    }
    pppuVar20 = (uint ***)param_3[2];
    if (param_3[3] == 2) {
      pppuVar22 = (uint ***)0x2;
    }
    else {
      if ((param_3[3] & 1U) == 0) {
        puVar7 = (uint *)param_3[4];
        pppuVar22 = (uint ***)0x0;
      }
      else {
        puVar7 = (uint *)param_3[4];
        do {
          uVar12 = *puVar7;
          bVar3 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar3);
        *puVar7 = uVar12 + 1;
        pppuVar22 = (uint ***)&DAT_00000001;
        if (0x7fffffff < uVar12) goto LAB_00ffc614;
      }
      local_158 = (uint *)param_3[5];
    }
    if (param_3[7] == 1) {
      puVar27 = (uint *)param_3[8];
      do {
        uVar12 = *puVar27;
        bVar3 = (bool)hasExclusiveAccess(puVar27);
      } while (!bVar3);
      *puVar27 = uVar12 + 1;
      local_128 = (uint ***)&DAT_00000001;
      if (0x7fffffff < uVar12) goto LAB_00ffc614;
    }
    else {
      puVar27 = (uint *)param_3[8];
      local_128 = (uint ***)0x0;
    }
    local_130 = (uint ***)param_3[9];
    local_12c = pppuVar22;
    if (param_3[10] == 2) {
      pppuVar13 = (uint ***)0x2;
      pppuVar14 = pppuVar22;
    }
    else {
      if ((param_3[10] & 1U) == 0) {
        pppuVar14 = (uint ***)param_3[0xb];
        pppuVar13 = (uint ***)0x0;
      }
      else {
        pppuVar14 = (uint ***)param_3[0xb];
        do {
          ppuVar11 = *pppuVar14;
          bVar3 = (bool)hasExclusiveAccess(pppuVar14);
        } while (!bVar3);
        *pppuVar14 = (uint **)((int)ppuVar11 + 1);
        pppuVar13 = (uint ***)&DAT_00000001;
        if ((uint **)0x7fffffff < ppuVar11) goto LAB_00ffc614;
      }
      local_15c = (uint *)param_3[0xc];
    }
    if (param_3[0xd] == 1) {
      puVar19 = (uint *)param_3[0xe];
      do {
        uVar8 = *puVar19;
        bVar3 = (bool)hasExclusiveAccess(puVar19);
      } while (!bVar3);
      *puVar19 = uVar8 + 1;
      uVar12 = 1;
      if (0x7fffffff < uVar8) goto LAB_00ffc614;
    }
    else {
      puVar19 = (uint *)param_3[0xe];
      uVar12 = 0;
    }
    local_144 = (uint ***)param_3[0xf];
    local_140 = uVar12;
    local_13c = pppuVar13;
    local_138 = pppuVar20;
    local_134 = pppuVar26;
    if (param_3[0x10] == 2) {
      uVar5 = 2;
      pppuVar10 = pppuVar13;
    }
    else {
      if ((param_3[0x10] & 1U) == 0) {
        pppuVar10 = (uint ***)param_3[0x11];
        uVar5 = 0;
      }
      else {
        pppuVar10 = (uint ***)param_3[0x11];
        do {
          ppuVar11 = *pppuVar10;
          bVar3 = (bool)hasExclusiveAccess(pppuVar10);
        } while (!bVar3);
        *pppuVar10 = (uint **)((int)ppuVar11 + 1);
        uVar5 = 1;
        if ((uint **)0x7fffffff < ppuVar11) goto LAB_00ffc614;
      }
      uVar6 = param_3[0x12];
    }
    local_d4 = param_3[0x13];
    local_d0 = param_3[0x14];
    local_104 = local_128;
    local_f0 = local_15c;
    local_10c = local_158;
    _local_108 = CONCAT22(uStack_106,uVar2);
    local_120 = pppuVar26;
    local_11c = puVar25;
    local_118 = pppuVar20;
    local_114 = pppuVar22;
    local_110 = puVar7;
    local_100 = puVar27;
    local_fc = local_130;
    local_f8 = pppuVar13;
    local_f4 = pppuVar14;
    local_ec = uVar12;
    local_e8 = puVar19;
    local_e4 = local_144;
    local_e0 = uVar5;
    local_dc = pppuVar10;
    local_d8 = uVar6;
    local_cc = (uint ***)uVar21;
    FUN_00ffca68(local_80,local_124 + 9,&local_120);
    uVar21 = param_3[0x15];
    uVar2 = *(ushort *)(param_3 + 6);
    uVar6 = (uint)uVar2;
    if (*param_3 == 1) {
      puVar25 = (uint *)param_3[1];
      do {
        uVar12 = *puVar25;
        bVar3 = (bool)hasExclusiveAccess(puVar25);
      } while (!bVar3);
      *puVar25 = uVar12 + 1;
      pppuVar26 = (uint ***)&DAT_00000001;
      if (0x7fffffff < uVar12) goto LAB_00ffc614;
    }
    else {
      puVar25 = (uint *)param_3[1];
      pppuVar26 = (uint ***)0x0;
    }
    pppuVar20 = (uint ***)param_3[2];
    if (param_3[3] == 2) {
      pppuVar22 = (uint ***)0x2;
    }
    else {
      if ((param_3[3] & 1U) == 0) {
        puVar7 = (uint *)param_3[4];
        pppuVar22 = (uint ***)0x0;
      }
      else {
        puVar7 = (uint *)param_3[4];
        do {
          uVar12 = *puVar7;
          bVar3 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar3);
        *puVar7 = uVar12 + 1;
        pppuVar22 = (uint ***)&DAT_00000001;
        if (0x7fffffff < uVar12) goto LAB_00ffc614;
      }
      local_15c = (uint *)param_3[5];
    }
    if (param_3[7] == 1) {
      puVar27 = (uint *)param_3[8];
      do {
        uVar12 = *puVar27;
        bVar3 = (bool)hasExclusiveAccess(puVar27);
      } while (!bVar3);
      *puVar27 = uVar12 + 1;
      local_128 = (uint ***)&DAT_00000001;
      if (0x7fffffff < uVar12) goto LAB_00ffc614;
    }
    else {
      puVar27 = (uint *)param_3[8];
      local_128 = (uint ***)0x0;
    }
    local_130 = (uint ***)param_3[9];
    local_12c = pppuVar22;
    if (param_3[10] == 2) {
      pppuVar13 = (uint ***)0x2;
      pppuVar14 = pppuVar22;
    }
    else {
      if ((param_3[10] & 1U) == 0) {
        pppuVar14 = (uint ***)param_3[0xb];
        pppuVar13 = (uint ***)0x0;
      }
      else {
        pppuVar14 = (uint ***)param_3[0xb];
        do {
          ppuVar11 = *pppuVar14;
          bVar3 = (bool)hasExclusiveAccess(pppuVar14);
        } while (!bVar3);
        *pppuVar14 = (uint **)((int)ppuVar11 + 1);
        pppuVar13 = (uint ***)&DAT_00000001;
        if ((uint **)0x7fffffff < ppuVar11) goto LAB_00ffc614;
      }
      local_160 = (uint *)param_3[0xc];
    }
    if (param_3[0xd] == 1) {
      puVar19 = (uint *)param_3[0xe];
      do {
        uVar8 = *puVar19;
        bVar3 = (bool)hasExclusiveAccess(puVar19);
      } while (!bVar3);
      *puVar19 = uVar8 + 1;
      uVar12 = 1;
      if (0x7fffffff < uVar8) goto LAB_00ffc614;
    }
    else {
      puVar19 = (uint *)param_3[0xe];
      uVar12 = 0;
    }
    local_144 = (uint ***)param_3[0xf];
    local_140 = uVar12;
    local_13c = pppuVar13;
    local_138 = pppuVar20;
    local_134 = pppuVar26;
    if (param_3[0x10] == 2) {
      uVar5 = 2;
      pppuVar10 = pppuVar13;
    }
    else {
      if ((param_3[0x10] & 1U) == 0) {
        pppuVar10 = (uint ***)param_3[0x11];
        uVar5 = 0;
      }
      else {
        pppuVar10 = (uint ***)param_3[0x11];
        do {
          ppuVar11 = *pppuVar10;
          bVar3 = (bool)hasExclusiveAccess(pppuVar10);
        } while (!bVar3);
        *pppuVar10 = (uint **)((int)ppuVar11 + 1);
        uVar5 = 1;
        if ((uint **)0x7fffffff < ppuVar11) goto LAB_00ffc614;
      }
      uVar6 = param_3[0x12];
    }
    local_d4 = param_3[0x13];
    local_d0 = param_3[0x14];
    local_104 = local_128;
    local_f0 = local_160;
    local_10c = local_15c;
    _local_108 = CONCAT22(uStack_106,uVar2);
    local_120 = pppuVar26;
    local_11c = puVar25;
    local_118 = pppuVar20;
    local_114 = pppuVar22;
    local_110 = puVar7;
    local_100 = puVar27;
    local_fc = local_130;
    local_f8 = pppuVar13;
    local_f4 = pppuVar14;
    local_ec = uVar12;
    local_e8 = puVar19;
    local_e4 = local_144;
    local_e0 = uVar5;
    local_dc = pppuVar10;
    local_d8 = uVar6;
    local_cc = (uint ***)uVar21;
    FUN_00ffca68(local_70,local_124 + 0xc,&local_120);
    uVar21 = param_3[0x15];
    uVar2 = *(ushort *)(param_3 + 6);
    uVar6 = (uint)uVar2;
    if (*param_3 == 1) {
      puVar25 = (uint *)param_3[1];
      do {
        uVar12 = *puVar25;
        bVar3 = (bool)hasExclusiveAccess(puVar25);
      } while (!bVar3);
      *puVar25 = uVar12 + 1;
      pppuVar26 = (uint ***)&DAT_00000001;
      if (0x7fffffff < uVar12) goto LAB_00ffc614;
    }
    else {
      puVar25 = (uint *)param_3[1];
      pppuVar26 = (uint ***)0x0;
    }
    pppuVar20 = (uint ***)param_3[2];
    if (param_3[3] == 2) {
      pppuVar22 = (uint ***)0x2;
    }
    else {
      if ((param_3[3] & 1U) == 0) {
        puVar7 = (uint *)param_3[4];
        pppuVar22 = (uint ***)0x0;
      }
      else {
        puVar7 = (uint *)param_3[4];
        do {
          uVar12 = *puVar7;
          bVar3 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar3);
        *puVar7 = uVar12 + 1;
        pppuVar22 = (uint ***)&DAT_00000001;
        if (0x7fffffff < uVar12) goto LAB_00ffc614;
      }
      local_160 = (uint *)param_3[5];
    }
    if (param_3[7] == 1) {
      puVar27 = (uint *)param_3[8];
      do {
        uVar12 = *puVar27;
        bVar3 = (bool)hasExclusiveAccess(puVar27);
      } while (!bVar3);
      *puVar27 = uVar12 + 1;
      local_128 = (uint ***)&DAT_00000001;
      if (0x7fffffff < uVar12) goto LAB_00ffc614;
    }
    else {
      puVar27 = (uint *)param_3[8];
      local_128 = (uint ***)0x0;
    }
    local_130 = (uint ***)param_3[9];
    local_12c = pppuVar22;
    if (param_3[10] == 2) {
      pppuVar13 = (uint ***)0x2;
      pppuVar14 = pppuVar22;
    }
    else {
      if ((param_3[10] & 1U) == 0) {
        pppuVar14 = (uint ***)param_3[0xb];
        pppuVar13 = (uint ***)0x0;
      }
      else {
        pppuVar14 = (uint ***)param_3[0xb];
        do {
          ppuVar11 = *pppuVar14;
          bVar3 = (bool)hasExclusiveAccess(pppuVar14);
        } while (!bVar3);
        *pppuVar14 = (uint **)((int)ppuVar11 + 1);
        pppuVar13 = (uint ***)&DAT_00000001;
        if ((uint **)0x7fffffff < ppuVar11) goto LAB_00ffc614;
      }
      local_164 = (uint *)param_3[0xc];
    }
    if (param_3[0xd] == 1) {
      puVar19 = (uint *)param_3[0xe];
      do {
        uVar8 = *puVar19;
        bVar3 = (bool)hasExclusiveAccess(puVar19);
      } while (!bVar3);
      *puVar19 = uVar8 + 1;
      uVar12 = 1;
      if (0x7fffffff < uVar8) goto LAB_00ffc614;
    }
    else {
      puVar19 = (uint *)param_3[0xe];
      uVar12 = 0;
    }
    local_144 = (uint ***)param_3[0xf];
    local_140 = uVar12;
    local_13c = pppuVar13;
    local_138 = pppuVar20;
    local_134 = pppuVar26;
    if (param_3[0x10] == 2) {
      uVar5 = 2;
      pppuVar10 = pppuVar13;
    }
    else {
      if ((param_3[0x10] & 1U) == 0) {
        pppuVar10 = (uint ***)param_3[0x11];
        uVar5 = 0;
      }
      else {
        pppuVar10 = (uint ***)param_3[0x11];
        do {
          ppuVar11 = *pppuVar10;
          bVar3 = (bool)hasExclusiveAccess(pppuVar10);
        } while (!bVar3);
        *pppuVar10 = (uint **)((int)ppuVar11 + 1);
        uVar5 = 1;
        if ((uint **)0x7fffffff < ppuVar11) goto LAB_00ffc614;
      }
      uVar6 = param_3[0x12];
    }
    local_d4 = param_3[0x13];
    local_d0 = param_3[0x14];
    local_104 = local_128;
    local_f0 = local_164;
    local_10c = local_160;
    _local_108 = CONCAT22(uStack_106,uVar2);
    local_120 = pppuVar26;
    local_11c = puVar25;
    local_118 = pppuVar20;
    local_114 = pppuVar22;
    local_110 = puVar7;
    local_100 = puVar27;
    local_fc = local_130;
    local_f8 = pppuVar13;
    local_f4 = pppuVar14;
    local_ec = uVar12;
    local_e8 = puVar19;
    local_e4 = local_144;
    local_e0 = uVar5;
    local_dc = pppuVar10;
    local_d8 = uVar6;
    local_cc = (uint ***)uVar21;
    FUN_00ffca68(local_60,local_124 + 0xf,&local_120);
    uVar21 = param_3[0x15];
    uVar2 = *(ushort *)(param_3 + 6);
    uVar6 = (uint)uVar2;
    if (*param_3 == 1) {
      puVar25 = (uint *)param_3[1];
      do {
        uVar12 = *puVar25;
        bVar3 = (bool)hasExclusiveAccess(puVar25);
      } while (!bVar3);
      *puVar25 = uVar12 + 1;
      pppuVar26 = (uint ***)&DAT_00000001;
      if (0x7fffffff < uVar12) goto LAB_00ffc614;
    }
    else {
      puVar25 = (uint *)param_3[1];
      pppuVar26 = (uint ***)0x0;
    }
    pppuVar20 = (uint ***)param_3[2];
    if (param_3[3] == 2) {
      pppuVar22 = (uint ***)0x2;
    }
    else {
      if ((param_3[3] & 1U) == 0) {
        puVar7 = (uint *)param_3[4];
        pppuVar22 = (uint ***)0x0;
      }
      else {
        puVar7 = (uint *)param_3[4];
        do {
          uVar12 = *puVar7;
          bVar3 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar3);
        *puVar7 = uVar12 + 1;
        pppuVar22 = (uint ***)&DAT_00000001;
        if (0x7fffffff < uVar12) goto LAB_00ffc614;
      }
      local_164 = (uint *)param_3[5];
    }
    if (param_3[7] == 1) {
      puVar27 = (uint *)param_3[8];
      do {
        uVar12 = *puVar27;
        bVar3 = (bool)hasExclusiveAccess(puVar27);
      } while (!bVar3);
      *puVar27 = uVar12 + 1;
      local_128 = (uint ***)&DAT_00000001;
      if (0x7fffffff < uVar12) goto LAB_00ffc614;
    }
    else {
      puVar27 = (uint *)param_3[8];
      local_128 = (uint ***)0x0;
    }
    local_130 = (uint ***)param_3[9];
    local_12c = pppuVar22;
    if (param_3[10] == 2) {
      pppuVar13 = (uint ***)0x2;
      pppuVar14 = pppuVar22;
    }
    else {
      if ((param_3[10] & 1U) == 0) {
        pppuVar14 = (uint ***)param_3[0xb];
        pppuVar13 = (uint ***)0x0;
      }
      else {
        pppuVar14 = (uint ***)param_3[0xb];
        do {
          ppuVar11 = *pppuVar14;
          bVar3 = (bool)hasExclusiveAccess(pppuVar14);
        } while (!bVar3);
        *pppuVar14 = (uint **)((int)ppuVar11 + 1);
        pppuVar13 = (uint ***)&DAT_00000001;
        if ((uint **)0x7fffffff < ppuVar11) goto LAB_00ffc614;
      }
      local_168 = (uint *)param_3[0xc];
    }
    if (param_3[0xd] == 1) {
      puVar19 = (uint *)param_3[0xe];
      do {
        uVar8 = *puVar19;
        bVar3 = (bool)hasExclusiveAccess(puVar19);
      } while (!bVar3);
      *puVar19 = uVar8 + 1;
      uVar12 = 1;
      if (0x7fffffff < uVar8) goto LAB_00ffc614;
    }
    else {
      puVar19 = (uint *)param_3[0xe];
      uVar12 = 0;
    }
    local_144 = (uint ***)param_3[0xf];
    local_140 = uVar12;
    local_13c = pppuVar13;
    local_138 = pppuVar20;
    local_134 = pppuVar26;
    if (param_3[0x10] == 2) {
      uVar5 = 2;
      pppuVar10 = pppuVar13;
    }
    else {
      if ((param_3[0x10] & 1U) == 0) {
        pppuVar10 = (uint ***)param_3[0x11];
        uVar5 = 0;
      }
      else {
        pppuVar10 = (uint ***)param_3[0x11];
        do {
          ppuVar11 = *pppuVar10;
          bVar3 = (bool)hasExclusiveAccess(pppuVar10);
        } while (!bVar3);
        *pppuVar10 = (uint **)((int)ppuVar11 + 1);
        uVar5 = 1;
        if ((uint **)0x7fffffff < ppuVar11) goto LAB_00ffc614;
      }
      uVar6 = param_3[0x12];
    }
    local_d4 = param_3[0x13];
    local_d0 = param_3[0x14];
    local_104 = local_128;
    local_f0 = local_168;
    local_10c = local_164;
    _local_108 = CONCAT22(uStack_106,uVar2);
    local_120 = pppuVar26;
    local_11c = puVar25;
    local_118 = pppuVar20;
    local_114 = pppuVar22;
    local_110 = puVar7;
    local_100 = puVar27;
    local_fc = local_130;
    local_f8 = pppuVar13;
    local_f4 = pppuVar14;
    local_ec = uVar12;
    local_e8 = puVar19;
    local_e4 = local_144;
    local_e0 = uVar5;
    local_dc = pppuVar10;
    local_d8 = uVar6;
    local_cc = (uint ***)uVar21;
    FUN_00ffca68(local_50,local_124 + 0x12,&local_120);
    uVar21 = param_3[0x15];
    uVar2 = *(ushort *)(param_3 + 6);
    uVar6 = (uint)uVar2;
    if (*param_3 == 1) {
      puVar25 = (uint *)param_3[1];
      do {
        uVar12 = *puVar25;
        bVar3 = (bool)hasExclusiveAccess(puVar25);
      } while (!bVar3);
      *puVar25 = uVar12 + 1;
      pppuVar26 = (uint ***)&DAT_00000001;
      if (0x7fffffff < uVar12) goto LAB_00ffc614;
    }
    else {
      puVar25 = (uint *)param_3[1];
      pppuVar26 = (uint ***)0x0;
    }
    pppuVar20 = (uint ***)param_3[2];
    if (param_3[3] == 2) {
      pppuVar22 = (uint ***)0x2;
    }
    else {
      if ((param_3[3] & 1U) == 0) {
        puVar7 = (uint *)param_3[4];
        pppuVar22 = (uint ***)0x0;
      }
      else {
        puVar7 = (uint *)param_3[4];
        do {
          uVar12 = *puVar7;
          bVar3 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar3);
        *puVar7 = uVar12 + 1;
        pppuVar22 = (uint ***)&DAT_00000001;
        if (0x7fffffff < uVar12) goto LAB_00ffc614;
      }
      local_168 = (uint *)param_3[5];
    }
    if (param_3[7] == 1) {
      puVar27 = (uint *)param_3[8];
      do {
        uVar12 = *puVar27;
        bVar3 = (bool)hasExclusiveAccess(puVar27);
      } while (!bVar3);
      *puVar27 = uVar12 + 1;
      pppuVar14 = (uint ***)&DAT_00000001;
      if (0x7fffffff < uVar12) goto LAB_00ffc614;
    }
    else {
      puVar27 = (uint *)param_3[8];
      pppuVar14 = (uint ***)0x0;
    }
    local_12c = (uint ***)param_3[9];
    local_128 = pppuVar14;
    if (param_3[10] == 2) {
      pppuVar10 = (uint ***)0x2;
      pppuVar13 = pppuVar14;
    }
    else {
      if ((param_3[10] & 1U) == 0) {
        pppuVar13 = (uint ***)param_3[0xb];
        pppuVar10 = (uint ***)0x0;
      }
      else {
        pppuVar13 = (uint ***)param_3[0xb];
        do {
          ppuVar11 = *pppuVar13;
          bVar3 = (bool)hasExclusiveAccess(pppuVar13);
        } while (!bVar3);
        *pppuVar13 = (uint **)((int)ppuVar11 + 1);
        pppuVar10 = (uint ***)&DAT_00000001;
        if ((uint **)0x7fffffff < ppuVar11) goto LAB_00ffc614;
      }
      local_16c = (uint *)param_3[0xc];
    }
    local_134 = pppuVar10;
    local_130 = pppuVar22;
    if (param_3[0xd] == 1) {
      puVar19 = (uint *)param_3[0xe];
      do {
        uVar8 = *puVar19;
        bVar3 = (bool)hasExclusiveAccess(puVar19);
      } while (!bVar3);
      *puVar19 = uVar8 + 1;
      uVar12 = 1;
      if (0x7fffffff < uVar8) goto LAB_00ffc614;
    }
    else {
      puVar19 = (uint *)param_3[0xe];
      uVar12 = 0;
    }
    local_144 = (uint ***)param_3[0xf];
    pppuVar23 = (uint ***)&local_144;
    local_140 = uVar12;
    local_13c = pppuVar20;
    local_138 = pppuVar26;
    if (param_3[0x10] == 2) {
      uVar5 = 2;
    }
    else {
      if ((param_3[0x10] & 1U) == 0) {
        pppuVar23 = (uint ***)param_3[0x11];
        uVar5 = 0;
      }
      else {
        pppuVar23 = (uint ***)param_3[0x11];
        do {
          ppuVar11 = *pppuVar23;
          bVar3 = (bool)hasExclusiveAccess(pppuVar23);
        } while (!bVar3);
        *pppuVar23 = (uint **)((int)ppuVar11 + 1);
        uVar5 = 1;
        if ((uint **)0x7fffffff < ppuVar11) goto LAB_00ffc614;
      }
      uVar6 = param_3[0x12];
    }
    local_d4 = param_3[0x13];
    local_d0 = param_3[0x14];
    local_f0 = local_16c;
    local_10c = local_168;
    _local_108 = CONCAT22(uStack_106,uVar2);
    puVar28 = (uint *)0xffc438;
    local_120 = pppuVar26;
    local_11c = puVar25;
    local_118 = pppuVar20;
    local_114 = pppuVar22;
    local_110 = puVar7;
    local_104 = pppuVar14;
    local_100 = puVar27;
    local_fc = local_12c;
    local_f8 = pppuVar10;
    local_f4 = pppuVar13;
    local_ec = uVar12;
    local_e8 = puVar19;
    local_e4 = local_144;
    local_e0 = uVar5;
    local_dc = pppuVar23;
    local_d8 = uVar6;
    local_cc = (uint ***)uVar21;
    FUN_00ffca68(local_40,local_124 + 0x15,&local_120);
    piVar4 = local_124;
    pppuVar26 = (uint ***)param_3[0x15];
    uVar2 = *(ushort *)(param_3 + 6);
    if (*param_3 == 1) {
      puVar25 = (uint *)param_3[1];
      do {
        uVar21 = *puVar25;
        bVar3 = (bool)hasExclusiveAccess(puVar25);
      } while (!bVar3);
      *puVar25 = uVar21 + 1;
      pppuVar20 = (uint ***)&DAT_00000001;
      if (0x7fffffff < uVar21) goto LAB_00ffc614;
    }
    else {
      puVar25 = (uint *)param_3[1];
      pppuVar20 = (uint ***)0x0;
    }
    pppuVar22 = (uint ***)param_3[2];
    if (param_3[3] == 2) {
      pppuVar14 = (uint ***)0x2;
    }
    else {
      if ((param_3[3] & 1U) == 0) {
        puVar7 = (uint *)param_3[4];
        pppuVar14 = (uint ***)0x0;
      }
      else {
        puVar7 = (uint *)param_3[4];
        do {
          uVar21 = *puVar7;
          bVar3 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar3);
        *puVar7 = uVar21 + 1;
        pppuVar14 = (uint ***)&DAT_00000001;
        if (0x7fffffff < uVar21) goto LAB_00ffc614;
      }
      local_170 = param_3[5];
    }
    if (param_3[7] == 1) {
      puVar27 = (uint *)param_3[8];
      do {
        uVar21 = *puVar27;
        bVar3 = (bool)hasExclusiveAccess(puVar27);
      } while (!bVar3);
      *puVar27 = uVar21 + 1;
      pppuVar13 = (uint ***)&DAT_00000001;
      if (0x7fffffff < uVar21) goto LAB_00ffc614;
    }
    else {
      puVar27 = (uint *)param_3[8];
      pppuVar13 = (uint ***)0x0;
    }
    local_130 = (uint ***)param_3[9];
    local_12c = pppuVar13;
    local_128 = pppuVar14;
    if (param_3[10] == 2) {
      pppuVar10 = (uint ***)0x2;
    }
    else {
      if ((param_3[10] & 1U) == 0) {
        puVar28 = (uint *)param_3[0xb];
        pppuVar10 = (uint ***)0x0;
      }
      else {
        puVar28 = (uint *)param_3[0xb];
        do {
          uVar21 = *puVar28;
          bVar3 = (bool)hasExclusiveAccess(puVar28);
        } while (!bVar3);
        *puVar28 = uVar21 + 1;
        pppuVar10 = (uint ***)&DAT_00000001;
        if (0x7fffffff < uVar21) goto LAB_00ffc614;
      }
      local_174 = param_3[0xc];
    }
    local_138 = pppuVar22;
    local_134 = pppuVar26;
    if (param_3[0xd] == 1) {
      puVar19 = (uint *)param_3[0xe];
      do {
        uVar21 = *puVar19;
        bVar3 = (bool)hasExclusiveAccess(puVar19);
      } while (!bVar3);
      *puVar19 = uVar21 + 1;
      uVar5 = 1;
      if (0x7fffffff < uVar21) goto LAB_00ffc614;
    }
    else {
      puVar19 = (uint *)param_3[0xe];
      uVar5 = 0;
    }
    iVar9 = param_3[0xf];
    local_144 = pppuVar10;
    local_140 = (uint)uVar2;
    local_13c = pppuVar20;
    if (param_3[0x10] == 2) {
      uVar17 = 2;
      pppuVar23 = pppuVar20;
    }
    else {
      if ((param_3[0x10] & 1U) == 0) {
        pppuVar23 = (uint ***)param_3[0x11];
        uVar17 = 0;
      }
      else {
        pppuVar23 = (uint ***)param_3[0x11];
        do {
          ppuVar11 = *pppuVar23;
          bVar3 = (bool)hasExclusiveAccess(pppuVar23);
        } while (!bVar3);
        *pppuVar23 = (uint **)((int)ppuVar11 + 1);
        uVar17 = 1;
        if ((uint **)0x7fffffff < ppuVar11) {
LAB_00ffc614:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xffc614);
          (*pcVar1)();
        }
      }
      local_178 = param_3[0x12];
    }
    local_d8 = local_178;
    local_f0 = (uint *)local_174;
    _local_108 = CONCAT22(uStack_106,uVar2);
    local_10c = (uint *)local_170;
    local_d0 = param_3[0x14];
    local_d4 = param_3[0x13];
    local_120 = pppuVar20;
    local_11c = puVar25;
    local_118 = pppuVar22;
    local_114 = pppuVar14;
    local_110 = puVar7;
    local_104 = pppuVar13;
    local_100 = puVar27;
    local_fc = local_130;
    local_f8 = pppuVar10;
    local_f4 = (uint ***)puVar28;
    local_ec = uVar5;
    local_e8 = puVar19;
    local_e4 = (uint ***)iVar9;
    local_e0 = uVar17;
    local_dc = pppuVar23;
    local_cc = pppuVar26;
    FUN_00ffca68(&local_30,local_124 + 0x18,&local_120);
    uVar21 = piVar4[0x1b];
    if (uVar21 < 2) {
      uVar29 = FUN_00ffcae8(param_3);
    }
    else {
      uVar29 = FUN_011d9954(piVar4[0x1c],piVar4[0x1d],param_3);
    }
    local_128 = (uint ***)((ulonglong)uVar29 >> 0x20);
    iVar9 = piVar4[0x1f];
    iVar15 = piVar4[0x20];
    iVar16 = piVar4[0x21];
    iVar18 = piVar4[0x22];
    param_1[0x1e] = piVar4[0x1e];
    param_1[0x1f] = iVar9;
    param_1[0x20] = iVar15;
    param_1[0x21] = iVar16;
    param_1[0x22] = iVar18;
    local_c0 = local_30;
    uStack_bc = uStack_2c;
    uStack_b8 = uStack_28;
    FUN_01bed4e2(param_1,&local_120,0x6c);
    param_1[0x1b] = uVar21;
    param_1[0x1c] = (int)uVar29;
    param_1[0x1d] = local_128;
  }
  return;
}

