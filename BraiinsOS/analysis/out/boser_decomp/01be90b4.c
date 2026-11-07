// FUN_01be90b4 @ 01be90b4 size=1988 calls_out=20 calls_in=1
// strings: 

undefined4
FUN_01be90b4(int param_1,int param_2,uint *param_3,int *param_4,int param_5,uint param_6,int param_7
            )

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *extraout_r3;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  uint uVar16;
  ushort *puVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  int *piVar21;
  byte *pbVar22;
  bool bVar23;
  uint auStack_188 [2];
  undefined4 uStack_180;
  int local_17c;
  undefined4 *local_178;
  undefined4 *local_174;
  undefined4 local_170;
  int local_16c;
  int local_168;
  int local_164;
  int *local_160;
  int *local_15c;
  int local_158;
  uint local_154;
  int local_150;
  int local_14c;
  int *local_148;
  uint local_144;
  undefined1 *local_140;
  uint *local_13c;
  ushort ****local_138;
  undefined1 *local_134;
  int local_130;
  undefined4 *local_12c;
  int local_128;
  int *local_124;
  uint local_120;
  uint local_11c;
  ushort local_118 [2];
  undefined4 local_114;
  undefined4 local_110;
  int local_10c;
  uint local_108;
  undefined1 auStack_104 [12];
  undefined2 ****local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  uint local_ec;
  ushort ***local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  ushort ****local_cc;
  undefined4 local_c8;
  int *local_c4;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined1 *local_b0;
  undefined4 local_ac;
  undefined2 *****local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 auStack_94 [4];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [68];
  
  local_134 = auStack_94;
  local_e8 = (ushort ***)0x0;
  uStack_e4 = 0;
  local_e0 = 0;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  local_d0 = 0;
  local_11c = 0;
  local_13c = param_3;
  local_128 = param_2;
  local_124 = param_4;
  FUN_01bed93e(local_134,0,0x54);
  local_168 = param_1 * 2;
  iVar13 = -(param_1 * 8 + 0x10);
  uVar8 = param_1 * 4 + 7U & 0xfffffff8;
  uVar11 = (int)auStack_188 + iVar13 + 0xb;
  local_15c = (int *)((int)auStack_188 + (iVar13 - uVar8) + 8);
  local_160 = (int *)((int)local_118 + uVar8 * -2 + iVar13 + -0x68);
  iVar14 = -(local_168 + 7U & 0xfffffff8);
  local_120 = uVar11 >> 2;
  local_12c = (undefined4 *)(uVar11 & 0xfffffffc);
  FUN_01bef8fc(1,&local_114);
  puVar15 = auStack_90;
  local_144 = *(int *)(param_7 + 0x60) * 1000;
  uVar9 = *(undefined4 *)(param_7 + 0x58);
  local_164 = (int)local_118 + iVar14 + uVar8 * -2 + iVar13 + -0x68;
  iVar19 = param_7 + 8;
  local_14c = 2;
  uVar10 = 0x10;
  for (; iVar5 = local_14c, local_11c < *(uint *)(param_7 + 0x54); local_11c = local_11c + 1) {
    if (*(int *)(iVar19 + -8) == 2) {
      FUN_01bed4e2(puVar15,iVar19,4);
      uVar2 = FUN_01be7b9a(0x35);
      *(undefined2 *)(puVar15 + -4) = 2;
      *(undefined2 *)(puVar15 + -2) = uVar2;
    }
    else {
      FUN_01bed4e2(puVar15 + 4,iVar19,0x10);
      uVar2 = FUN_01be7b9a(0x35);
      uVar10 = *(undefined4 *)(iVar19 + -4);
      *(undefined2 *)(puVar15 + -2) = uVar2;
      local_14c = 10;
      *(undefined4 *)(puVar15 + 0x14) = uVar10;
      uVar10 = 0x1c;
      *(undefined2 *)(puVar15 + -4) = 10;
    }
    puVar15 = puVar15 + 0x1c;
    iVar19 = iVar19 + 0x1c;
  }
  uVar3 = FUN_01be9c4e(local_14c,0x80802,0);
  uVar11 = (uint)(iVar5 == 10);
  puVar15 = (undefined1 *)(uVar11 & uVar3 >> 0x1f);
  if (puVar15 == (undefined1 *)0x0) {
    if ((int)uVar3 < 0) {
      uVar11 = 0;
    }
    if (uVar11 == 0) {
      uVar2 = (undefined2)local_14c;
      goto LAB_01be92da;
    }
    *(undefined4 *)((int)auStack_188 + iVar14 + uVar8 * -2 + iVar13) = 4;
    puVar6 = auStack_80;
    local_b0 = puVar15;
    FUN_01be9b78(uVar3,0x29,0x1a,&local_b0);
    uVar11 = 0;
    while (bVar23 = local_11c != uVar11, uVar11 = uVar11 + 1, bVar23) {
      if (*(short *)(puVar6 + -0x14) == 2) {
        FUN_01bed4e2(puVar6,puVar6 + -0x10,4);
        FUN_01bed4e2(puVar6 + -0xc,&DAT_005673f4,0xc);
        *(undefined4 *)(puVar6 + -0x10) = 0;
        *(undefined2 *)(puVar6 + -0x14) = 10;
        *(undefined4 *)(puVar6 + 4) = 0;
      }
      puVar6 = puVar6 + 0x1c;
    }
    local_e8 = (ushort ***)CONCAT22(local_e8._2_2_,10);
    local_14c = 10;
  }
  else {
    piVar4 = (int *)FUN_01be3244();
    if (*piVar4 != 0x61) {
      local_e8 = (ushort ***)CONCAT22(local_e8._2_2_,10);
      goto LAB_01be921c;
    }
    uVar11 = 0;
    do {
      if (local_11c == uVar11) goto LAB_01be921c;
      uVar11 = uVar11 + 1;
    } while (*(int *)(local_11c * 0x1c + param_7) == 10);
    uVar3 = FUN_01be9c4e(2,0x80802,0);
    uVar2 = 2;
    local_14c = 2;
    uVar10 = 0x10;
LAB_01be92da:
    local_e8 = (ushort ***)CONCAT22(local_e8._2_2_,uVar2);
    if ((int)uVar3 < 0) goto LAB_01be921c;
  }
  iVar19 = FUN_01be718e(uVar3,&local_e8,uVar10);
  if (-1 < iVar19) {
    for (iVar19 = 0; iVar19 < param_1; iVar19 = iVar19 + 1) {
      local_12c[iVar19 * 2] = 0xffffffff;
    }
    *(uint *)(param_1 * 8 + local_120 * 4) = uVar3;
    local_174 = local_12c + param_1 * 2;
    *(undefined2 *)(local_174 + 1) = 1;
    local_174[2] = 0xfffffffe;
    FUN_01bee4ee(auStack_104,&LAB_01be9018_1);
    FUN_01bef8fc(local_114,0);
    FUN_01bed93e(param_5,0,param_1 * 4);
    uVar11 = FUN_01bf1018(local_144,uVar9);
    local_154 = uVar11;
    iVar19 = FUN_01be9038();
    local_140 = local_134 + local_11c * 0x1c;
    local_170 = 0x80801;
    local_150 = iVar19 - uVar11;
    local_120 = 0;
    local_148 = (int *)(param_5 + -4);
    local_158 = iVar19;
    while ((uint)(iVar19 - local_158) < local_144) {
      piVar4 = local_148;
      iVar5 = 0;
      do {
        if (param_1 <= iVar5) {
          if (iVar5 == param_1) goto LAB_01be983a;
          break;
        }
        piVar4 = piVar4 + 1;
        iVar5 = iVar5 + 1;
      } while (0 < *piVar4);
      if ((uint)(iVar19 - local_150) < local_154) {
        uVar11 = (local_154 + local_150) - iVar19;
      }
      else {
        piVar4 = local_148;
        for (iVar5 = 0; iVar5 < param_1; iVar5 = iVar5 + 1) {
          piVar4 = piVar4 + 1;
          if (*piVar4 == 0) {
            for (puVar15 = local_134; iVar1 = local_128, puVar20 = local_13c, puVar15 != local_140;
                puVar15 = puVar15 + 0x1c) {
              *(undefined1 **)((int)auStack_188 + iVar14 + uVar8 * -2 + iVar13) = puVar15;
              uVar11 = puVar20[iVar5];
              uVar9 = *(undefined4 *)(iVar1 + iVar5 * 4);
              *(undefined4 *)((int)local_118 + iVar14 + uVar8 * -2 + iVar13 + -0x6c) = uVar10;
              FUN_01be9b4e(uVar3,uVar9,uVar11,0x4000);
            }
          }
        }
        local_16c = local_168;
        uVar11 = local_154;
        local_150 = iVar19;
      }
      puVar15 = (undefined1 *)FUN_01bea68a(local_12c,param_1 + 1,uVar11);
      if (0 < (int)puVar15) {
        local_138 = (ushort ****)0x20004000;
        puVar6 = puVar15;
LAB_01be93c8:
        uVar11 = local_120;
        puVar15 = puVar6;
        if ((int)local_120 < param_1) {
          local_108 = param_6;
          local_bc = 0;
          local_b8 = 0;
          local_b4 = 0;
          local_10c = local_124[local_120];
          iVar19 = local_120 * 4;
          local_c4 = &local_10c;
          local_c0 = 1;
          local_cc = &local_e8;
          local_c8 = uVar10;
          puVar15 = (undefined1 *)FUN_01be8eca(uVar3,&local_cc,0);
          if ((int)puVar15 < 0) goto LAB_01be968c;
          puVar6 = puVar15;
          if (3 < (int)puVar15) {
            puVar6 = local_134;
            for (uVar18 = 0; local_11c != uVar18; uVar18 = uVar18 + 1) {
              iVar5 = FUN_01bed842(puVar6,&local_e8,uVar10);
              puVar12 = local_134;
              if (iVar5 == 0) {
                pbVar22 = (byte *)local_124[uVar11];
                puVar6 = (undefined1 *)(uint)*pbVar22;
                puVar7 = (undefined4 *)(local_128 + iVar19);
                uVar16 = local_120;
                goto LAB_01be949e;
              }
              puVar6 = puVar6 + 0x1c;
            }
          }
          goto LAB_01be93c8;
        }
LAB_01be968c:
        local_138 = (ushort ****)&local_f8;
        puVar7 = local_12c;
        piVar4 = local_15c;
        puVar20 = local_13c;
        for (iVar19 = 0; iVar19 < param_1; iVar19 = iVar19 + 1) {
          if ((int)((uint)*(ushort *)((int)puVar7 + 6) << 0x1d) < 0) {
            local_c0 = *puVar20;
            local_130 = *piVar4;
            local_c4 = *(int **)(local_128 + iVar19 * 4);
            local_b0 = (undefined1 *)0x0;
            local_ac = 0;
            local_a0 = 0;
            local_9c = 0;
            local_98 = 0;
            local_a8 = &local_cc;
            local_f8 = (undefined2 ****)
                       CONCAT22(local_f8._2_2_,
                                (ushort)((local_c0 & 0xff) << 8) | (ushort)(local_c0 >> 8) & 0xff);
            local_cc = local_138;
            local_c8 = 2;
            local_a4 = 2;
            FUN_01be9080(&local_b0);
            puVar15 = (undefined1 *)FUN_01be9b2a(*puVar7,&local_b0,0x4000);
            if ((int)puVar15 < 0) goto LAB_01be983a;
            uVar11 = *puVar20;
            *piVar4 = (int)(puVar15 + local_130);
            if (puVar15 + local_130 == (undefined1 *)(uVar11 + 2)) {
              *(undefined2 *)(puVar7 + 1) = 1;
            }
          }
          puVar7 = puVar7 + 2;
          piVar4 = piVar4 + 1;
          puVar20 = puVar20 + 1;
        }
        puVar17 = (ushort *)((int)local_12c + 6);
        puVar6 = (undefined1 *)(local_164 + 1);
        piVar4 = local_160;
        piVar21 = local_124;
        for (iVar19 = 0; iVar19 < param_1; iVar19 = iVar19 + 1) {
          if ((int)((uint)*puVar17 << 0x1f) < 0) {
            local_130 = *piVar4;
            local_cc = (ushort ****)(puVar6 + -1);
            local_c4 = (int *)*piVar21;
            local_b0 = (undefined1 *)0x0;
            local_ac = 0;
            local_a0 = 0;
            local_9c = 0;
            local_98 = 0;
            local_c8 = 2;
            local_c0 = param_6;
            local_a4 = 2;
            local_a8 = &local_cc;
            FUN_01be9080(&local_b0,local_130);
            puVar15 = (undefined1 *)FUN_01be8eca(*(undefined4 *)(puVar17 + -3),&local_b0,0);
            puVar12 = puVar15 + local_130;
            if ((int)puVar15 < 1) goto LAB_01be983a;
            *piVar4 = (int)puVar12;
            if (1 < (int)puVar12) {
              puVar15 = (undefined1 *)(param_6 + 1);
              uVar11 = (uint)CONCAT11(puVar6[-1],*puVar6);
              if (uVar11 < 0xd) goto LAB_01be983a;
              if (((int)(uVar11 + 1) < (int)puVar12) || ((int)puVar15 < (int)puVar12)) {
                if (-1 < (int)((9U >> (*(byte *)(*piVar21 + 3) & 0xf)) << 0x1f)) goto LAB_01be983a;
                puVar15 = *(undefined1 **)(puVar17 + -3);
                *(uint *)(param_5 + iVar19 * 4) = uVar11;
                software_interrupt(0);
                puVar17[-0xffffffff00000003] = 0xffff;
                puVar17[-0xffffffff00000002] = 0xffff;
              }
            }
          }
          piVar4 = piVar4 + 1;
          piVar21 = piVar21 + 1;
          puVar17 = puVar17 + 4;
          puVar6 = puVar6 + 2;
        }
      }
      iVar19 = FUN_01be9038(puVar15);
    }
LAB_01be983a:
    FUN_01bee4f6(auStack_104,1);
    iVar13 = 0;
    while (iVar14 = iVar13 + 1, iVar13 < param_1) {
      local_148 = local_148 + 1;
      iVar13 = iVar14;
      if (*local_148 < 0) {
        *local_148 = 0;
      }
    }
    return 0;
  }
  FUN_01bf01d6(uVar3);
LAB_01be921c:
  FUN_01bef8fc(local_114,0);
  return 0xffffffff;
  while (uVar16 = uVar16 + 1, puVar7 = puVar7 + 1, param_1 != uVar16) {
LAB_01be949e:
    iVar5 = uVar16 * 4;
    if (((undefined1 *)(uint)*(byte *)*puVar7 == puVar6) && (pbVar22[1] == ((byte *)*puVar7)[1])) {
      local_130 = *(int *)(param_5 + iVar5);
      if (local_130 == 0) {
        if ((pbVar22[3] & 0xf) == 2) {
          if (local_16c != 0) {
            local_16c = local_16c + -1;
            *(undefined4 *)((int)local_118 + iVar14 + uVar8 * -2 + iVar13 + -0x6c) = uVar10;
            *(undefined1 **)((int)auStack_188 + iVar14 + uVar8 * -2 + iVar13) =
                 puVar12 + uVar18 * 0x1c;
            puVar6 = (undefined1 *)
                     FUN_01be9b4e(uVar3,*(undefined4 *)(local_128 + iVar5),local_13c[uVar16],0x4000)
            ;
          }
        }
        else if (-1 < (-10 >> (pbVar22[3] & 0xf)) << 0x1f) {
          *(undefined1 **)(param_5 + iVar5) = puVar15;
          if (local_120 != uVar16) {
            FUN_01bed4e2(local_124[uVar16],local_124[uVar11],puVar15);
            goto LAB_01be9508;
          }
          piVar4 = (int *)(iVar19 + param_5);
          goto LAB_01be961e;
        }
      }
      break;
    }
  }
  goto LAB_01be93c8;
  while (local_120 = local_120 + 1, piVar4 = piVar4 + 1, param_1 != local_120) {
LAB_01be961e:
    if (*piVar4 == 0) goto LAB_01be9508;
  }
  *(undefined2 *)(local_174 + 1) = 0;
LAB_01be9508:
  if ((-1 < (int)((uint)*(byte *)(local_124[uVar16] + 2) << 0x1e)) &&
     (puVar6 = (undefined1 *)(local_b4 << 0x1a), -1 < (int)puVar6)) goto LAB_01be93c8;
  *(undefined4 *)(param_5 + iVar5) = 0xffffffff;
  FUN_01bef8fc(1,0);
  local_a0 = 0;
  puVar15 = local_134 + uVar18 * 0x1c;
  local_17c = uVar16 * 8;
  local_118[0] = (ushort)local_13c[uVar16] << 8 | (ushort)local_13c[uVar16] >> 8;
  local_9c = 0;
  local_98 = 0;
  puVar7 = local_12c + uVar16 * 2;
  local_f0 = *(undefined4 *)(local_128 + iVar5);
  uVar11 = local_13c[uVar16];
  local_f4 = 2;
  local_a4 = 2;
  local_f8 = (undefined2 ****)local_118;
  local_a8 = &local_f8;
  local_178 = puVar7;
  local_ec = uVar11;
  local_b0 = puVar15;
  local_ac = uVar10;
  uVar9 = FUN_01be9c4e(local_14c,local_170,0);
  local_12c[uVar16 * 2] = uVar9;
  *(undefined2 *)(puVar7 + 1) = 4;
  *(undefined4 *)((int)auStack_188 + iVar14 + uVar8 * -2 + iVar13) = 4;
  local_110 = 1;
  iVar19 = FUN_01be9b78(uVar9,6,0x1e,&local_110);
  if (iVar19 == 0) {
    iVar19 = FUN_01be9b2a(uVar9,&local_b0,local_138);
    bVar23 = iVar19 == uVar11 + 2;
    puVar7 = extraout_r3;
    if (bVar23) {
      puVar7 = local_178;
    }
    if (bVar23) {
      *(undefined2 *)(puVar7 + 1) = 1;
    }
    if (iVar19 < 0) {
      piVar4 = (int *)FUN_01be3244();
      if (*piVar4 == 0x73) {
        puVar6 = (undefined1 *)FUN_01bef8fc(local_114,0);
        local_130 = 0;
        goto LAB_01be95d8;
      }
      goto LAB_01be95b8;
    }
    local_130 = iVar19;
  }
  else {
LAB_01be95b8:
    iVar19 = FUN_01be71a6(uVar9,puVar15,uVar10);
    if ((iVar19 != 0) && (piVar4 = (int *)FUN_01be3244(), *piVar4 != 0x73)) {
      FUN_01bf01d6(uVar9);
      *(undefined4 *)((int)local_12c + local_17c) = 0xffffffff;
      puVar6 = (undefined1 *)FUN_01bef8fc(local_114,0);
      goto LAB_01be93c8;
    }
  }
  puVar6 = (undefined1 *)FUN_01bef8fc(local_114,0);
LAB_01be95d8:
  local_15c[uVar16] = local_130;
  local_160[uVar16] = 0;
  goto LAB_01be93c8;
}

