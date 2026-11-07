// FUN_00682f50 @ 00682f50 size=2600 calls_out=18 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 FUN_00682f50(int *param_1,uint *param_2,char param_3)

{
  byte bVar1;
  bool bVar2;
  char *pcVar3;
  char cVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  code **ppcVar11;
  int *piVar12;
  code **ppcVar13;
  int *piVar14;
  uint uVar15;
  undefined *puVar16;
  int iVar17;
  undefined1 uVar18;
  int iVar19;
  int iVar20;
  code **ppcVar21;
  code *pcVar22;
  uint uVar23;
  code **ppcVar24;
  char local_1e5;
  int local_1e4;
  code **ppcStack_1e0;
  code *pcStack_1dc;
  uint local_1d8;
  code *pcStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  uint uStack_1c8;
  uint local_1c4;
  char *local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  code **local_1b0;
  code *local_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint local_19c;
  char *local_198;
  int local_194;
  int local_190;
  int local_18c;
  uint local_188;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  char *local_174;
  code *local_170;
  undefined4 local_16c;
  uint local_164;
  code **local_160;
  uint local_15c;
  int *local_158;
  uint local_154;
  uint local_150;
  uint uStack_14c;
  uint uStack_148;
  char *pcStack_144;
  code ***local_13c;
  undefined4 local_138;
  undefined4 *local_134;
  code *local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  code **local_118;
  code *local_114;
  undefined *local_110;
  code ***local_10c;
  int *local_108;
  undefined *local_104;
  code **local_f0;
  code *local_ec;
  undefined4 local_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  uint local_d8;
  char *pcStack_d4;
  code *pcStack_d0;
  uint uStack_cc;
  code **local_2c;
  code *local_28;
  
  iVar19 = *param_1;
  ppcVar24 = (code **)(iVar19 + 8);
  do {
    local_1e5 = param_3;
    if (*ppcVar24 != (code *)0x0) {
      ClearExclusiveLocal();
      FUN_015bf680(ppcVar24);
      goto LAB_00682f88;
    }
    bVar2 = (bool)hasExclusiveAccess(ppcVar24);
  } while (!bVar2);
  *ppcVar24 = (code *)0x1;
  DataMemoryBarrier(0xb);
LAB_00682f88:
  uVar23 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar6 = *(char *)(iVar19 + 0xc);
  }
  else {
    uVar23 = FUN_015bf3f8();
    uVar23 = uVar23 ^ 1;
    cVar6 = *(char *)(iVar19 + 0xc);
  }
  if (cVar6 != '\0') {
    local_ec._1_3_ = (undefined3)((uint)local_ec >> 8);
    local_ec = (code *)CONCAT31(local_ec._1_3_,(char)uVar23);
    local_f0 = ppcVar24;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_f0,&DAT_018587a0,&DAT_018a598c);
  }
  iVar17 = param_1[3];
  ppcVar13 = (code **)param_1[1];
  pcVar22 = (code *)param_1[2];
  local_1e4 = iVar19 + 0x160;
  ppcVar21 = (code **)(iVar17 + 8);
  do {
    ppcStack_1e0 = ppcVar13;
    pcStack_1dc = pcVar22;
    if (*ppcVar21 != (code *)0x0) {
      ClearExclusiveLocal();
      FUN_015bf680(ppcVar21);
      goto LAB_00682ff4;
    }
    bVar2 = (bool)hasExclusiveAccess(ppcVar21);
  } while (!bVar2);
  *ppcVar21 = (code *)0x1;
  DataMemoryBarrier(0xb);
LAB_00682ff4:
  uVar15 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar6 = *(char *)(iVar17 + 0xc);
    cVar4 = local_1e5;
    uVar5 = local_16c;
    uVar10 = local_164;
    piVar14 = local_158;
  }
  else {
    uVar15 = FUN_015bf3f8();
    uVar15 = uVar15 ^ 1;
    cVar6 = *(char *)(iVar17 + 0xc);
    cVar4 = local_1e5;
    uVar5 = local_16c;
    uVar10 = local_164;
    piVar14 = local_158;
  }
  local_1e5 = cVar4;
  if (cVar6 != '\0') {
    local_ec._1_3_ = (undefined3)((uint)local_ec >> 8);
    local_ec = (code *)CONCAT31(local_ec._1_3_,(char)uVar15);
    local_f0 = ppcVar21;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_f0,&DAT_01858790,&DAT_018a599c);
  }
  local_1d8 = *param_2;
  pcStack_1d4 = (code *)param_2[1];
  uStack_1d0 = param_2[2];
  uStack_1cc = param_2[3];
  uStack_1c8 = param_2[4];
  local_1c4 = param_2[5];
  iVar7 = iVar17 + 0x10;
  iVar8 = iVar19 + 0xe8;
  local_1bc = iVar19 + 0xf0;
  local_1c0 = &local_1e5;
  local_1b8 = iVar8;
  local_1b4 = iVar7;
  if (((*(code ***)(iVar19 + 0x198) <= ppcVar13) ||
      (local_158 = (int *)(*(int *)(iVar19 + 0x194) + (int)ppcVar13 * 0xf8),
      *local_158 == 3 && local_158[1] == 0)) || ((code *)local_158[0x35] != pcVar22)) {
    local_f0 = &local_1ac;
    local_ec = FUN_0101a4ac;
    local_1b0 = ppcVar13;
    local_1ac = pcVar22;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_f0,&DAT_01882550);
  }
  puVar9 = (undefined1 *)local_158[6];
  local_f0 = (code **)*param_2;
  local_ec = (code *)param_2[1];
  local_e8 = param_2[2];
  uStack_e4 = param_2[3];
  local_e0 = param_2[4];
  uStack_dc = param_2[5];
  local_1b0 = (code **)local_1d8;
  local_1ac = pcStack_1d4;
  uStack_1a8 = uStack_1d0;
  uStack_1a4 = uStack_1cc;
  uStack_1a0 = uStack_1c8;
  local_19c = local_1c4;
  local_198 = local_1c0;
  local_194 = local_1bc;
  local_190 = iVar8;
  local_18c = iVar7;
  if (pcVar22 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00408f5c,0x26,&DAT_018a5888);
  }
  local_188 = *param_2;
  local_184 = param_2[1];
  local_180 = param_2[2];
  local_17c = param_2[3];
  local_178 = param_2[4];
  local_174 = (char *)param_2[5];
  local_16c._3_1_ = (undefined1)((uint)uVar5 >> 0x18);
  local_16c._0_2_ = (undefined2)uVar5;
  local_16c = CONCAT13(local_16c._3_1_,CONCAT12(cVar4,(undefined2)local_16c)) & 0xffffff00;
  local_170 = pcVar22;
  if (local_188 == 0) {
    local_164 = local_17c;
    if (-1 < (int)local_17c) goto LAB_0068317c;
LAB_00683144:
    uVar18 = 2;
    local_164 = uVar10;
  }
  else {
    pcVar3 = local_1c0;
    if (local_188 == 1) {
      pcVar3 = local_174;
    }
    local_164 = 0;
    if (local_188 == 1 && pcVar3 == (char *)0x0) {
      local_164 = local_17c - local_178;
      if (local_17c < local_178) {
        local_164 = 0;
      }
      if ((int)local_164 < 0) goto LAB_00683144;
    }
LAB_0068317c:
    local_118 = ppcVar13;
    local_114 = pcVar22;
    if ((*local_158 == 3 && local_158[1] == 0) || ((code *)local_158[0x35] != pcVar22)) {
      local_ec = FUN_0101a4ac;
      local_f0 = &local_114;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00599806,&local_f0,&DAT_01882550);
    }
    bVar1 = *(byte *)(local_158 + 8);
    cVar6 = bVar1 - 6;
    if (bVar1 < 6) {
      cVar6 = '\x06';
    }
    if ((cVar6 == '\x05' || cVar6 == '\x03') && (*(char *)((int)local_158 + 0x21) != '\0')) {
      local_158[0x38] = local_158[0x38] + local_164;
      local_d8 = DAT_018d8a6c;
      local_e8 = 2;
      if (DAT_018dd947 == '\0') {
        local_134 = (undefined4 *)(DAT_018d8a6c + 0x1c);
        local_160 = (code **)*local_134;
        local_15c = *(uint *)(DAT_018d8a6c + 0x20);
        local_154 = 0;
        if (local_15c != 0) {
          uStack_12c = *(undefined4 *)(DAT_018d8a6c + 0x20);
          local_158 = *(int **)(DAT_018d8a6c + 0x24);
          local_154 = *(undefined4 *)(DAT_018d8a6c + 0x28);
          local_130 = (code *)*local_134;
          local_120 = 0;
          uStack_128 = *(undefined4 *)(DAT_018d8a6c + 0x24);
          uStack_124 = *(undefined4 *)(DAT_018d8a6c + 0x28);
        }
        if (local_15c < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018a4944);
        }
        local_150 = 1;
        local_2c = ppcVar13;
        local_28 = pcVar22;
        if (((*(code ***)(iVar19 + 0x198) <= ppcVar13) ||
            (local_108 = (int *)(*(int *)(iVar19 + 0x194) + (int)ppcVar13 * 0xf8),
            *local_108 == 3 && local_108[1] == 0)) || ((code *)local_108[0x35] != pcVar22)) {
          local_118 = &local_28;
          local_114 = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00599806,&local_118,&DAT_01882550);
        }
        local_10c = &local_160;
        local_114 = (code *)&local_164;
        local_108 = local_108 + 0x37;
        local_118 = &local_130;
        local_13c = &local_118;
        local_138 = 2;
        local_104 = &DAT_018a4904;
        local_110 = &DAT_018a4904;
        FUN_01694880(&local_f0,&local_13c);
      }
      local_160 = local_f0;
      local_15c = (uint)local_ec;
      local_158 = (int *)local_e8;
      local_154 = uStack_e4;
      local_150 = local_e0;
      uStack_14c = uStack_dc;
      uStack_148 = local_d8;
      pcStack_144 = pcStack_d4;
      if (local_e8 != 2) {
        uVar10 = uStack_e4;
        if ((local_e8 & 1) != 0) {
          uVar10 = uStack_e4 + (*(int *)(local_e0 + 8) - 1U & 0xfffffff8) + 8;
        }
        (**(code **)(local_e0 + 0x30))(uVar10,&local_160);
      }
      ppcVar11 = *(code ***)(iVar19 + 0x198);
      if (((ppcVar13 < ppcVar11) &&
          (piVar14 = (int *)(*(int *)(iVar19 + 0x194) + (int)ppcVar13 * 0xf8),
          *piVar14 != 3 || piVar14[1] != 0)) && ((code *)piVar14[0x35] == pcVar22)) {
        iVar20 = iVar19 + 0xf8;
        if ((uint)piVar14[0x37] < (uint)piVar14[0x38]) {
          piVar14[0x37] = piVar14[0x38];
          ppcVar11 = *(code ***)(iVar19 + 0x198);
          if (((ppcVar11 <= ppcVar13) ||
              (piVar14 = (int *)(*(int *)(iVar19 + 0x194) + (int)ppcVar13 * 0xf8),
              *piVar14 == 3 && piVar14[1] == 0)) || ((code *)piVar14[0x35] != pcVar22))
          goto LAB_006838f4;
          if ((char)piVar14[0x3b] == '\0') {
            local_118 = ppcVar13;
            local_114 = pcVar22;
            FUN_0101d22c(iVar20,&local_1e4);
            ppcVar11 = *(code ***)(iVar19 + 0x198);
          }
        }
        if (cVar4 != '\0') {
          if (((ppcVar11 <= ppcVar13) ||
              (piVar14 = (int *)(*(int *)(iVar19 + 0x194) + (int)ppcVar13 * 0xf8),
              *piVar14 == 3 && piVar14[1] == 0)) || ((code *)piVar14[0x35] != pcVar22)) {
            puVar16 = &DAT_01882560;
            goto LAB_006838fc;
          }
          local_118 = ppcVar13;
          local_114 = pcVar22;
          FUN_0101ffc0(piVar14 + 8);
          FUN_0101c8fc(iVar20,0,&local_1e4,iVar19 + 0x10);
          ppcVar11 = *(code ***)(iVar19 + 0x198);
        }
        if (((ppcVar13 < ppcVar11) &&
            (piVar14 = (int *)(*(int *)(iVar19 + 0x194) + (int)ppcVar13 * 0xf8),
            *piVar14 != 3 || piVar14[1] != 0)) && ((code *)piVar14[0x35] == pcVar22)) {
          if ((piVar14[0xf] < 1) && (piVar14[0x38] != 0)) {
            local_118 = ppcVar13;
            local_114 = pcVar22;
            FUN_016dd1aa((uint)&local_118 | 7,&local_188,0x20);
            local_e8 = local_e8 & 0xffffff00;
            FUN_016dd1aa((int)&local_e8 + 1,&local_118,0x27);
            local_f0 = (code **)0x0;
            iVar8 = *(int *)(iVar17 + 0x20);
            FUN_00757f04(iVar7,iVar8,&local_f0);
            if (piVar14[0x1b] == 1) {
              if ((*(uint *)(iVar17 + 0x18) <= (uint)piVar14[0x1d]) ||
                 (piVar12 = (int *)(*(int *)(iVar17 + 0x14) + piVar14[0x1d] * 0xc0), *piVar12 == 2))
              {
                    /* WARNING: Subroutine does not return */
                FUN_015be724(&DAT_00412edc,0xb,&DAT_018a58ec);
              }
              *piVar12 = 1;
              piVar12[1] = iVar8;
            }
            else {
              piVar14[0x1c] = iVar8;
              piVar14[0x1b] = 1;
            }
            piVar14[0x1d] = iVar8;
          }
          else {
            local_e8 = local_188;
            uStack_e4 = local_184;
            local_e0 = local_180;
            uStack_dc = local_17c;
            local_d8 = local_178;
            pcStack_d4 = local_174;
            pcStack_d0 = local_170;
            uStack_cc = local_16c;
            local_f0 = (code **)((uint)local_f0 & 0xffffff00);
            local_118 = ppcVar13;
            local_114 = pcVar22;
            FUN_00757a80(iVar20,&local_f0,iVar7,&local_1e4,iVar8);
          }
          if (local_158 != (int *)0x2) {
            uVar10 = local_154;
            if (((uint)local_158 & 1) != 0) {
              uVar10 = local_154 + (*(int *)(local_150 + 8) - 1U & 0xfffffff8) + 8;
            }
            (**(code **)(local_150 + 0x34))(uVar10,&local_160);
          }
          FUN_005c3320(&local_160);
          uVar18 = 0xc;
          goto LAB_006835d0;
        }
      }
LAB_006838f4:
      puVar16 = &DAT_01882550;
LAB_006838fc:
      local_ec = FUN_0101a4ac;
      local_118 = ppcVar13;
      local_114 = pcVar22;
      local_f0 = &local_114;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00599806,&local_f0,puVar16);
    }
    uVar18 = 5 < bVar1;
  }
  local_158 = piVar14;
  if (local_188 == 1) {
    if (local_17c != 0) {
      thunk_FUN_016d3fb4(local_180);
    }
  }
  else if (local_188 == 0) {
    (**(code **)(local_184 + 0x10))(&local_178,local_180,local_17c);
  }
LAB_006835d0:
  FUN_0102e068(iVar19 + 0x10,&local_1e4,puVar9 != &DAT_3b9aca00);
  if (((uVar15 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar7 = FUN_015bf3f8(), iVar7 == 0))
  {
    *(undefined1 *)(iVar17 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    pcVar22 = *ppcVar21;
    bVar2 = (bool)hasExclusiveAccess(ppcVar21);
  } while (!bVar2);
  *ppcVar21 = (code *)0x0;
  if (pcVar22 == (code *)0x2) {
    FUN_016d6968(0xf0,ppcVar21,0x81,1);
  }
  if (((uVar23 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar17 = FUN_015bf3f8(), iVar17 == 0)) {
    *(undefined1 *)(iVar19 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    pcVar22 = *ppcVar24;
    bVar2 = (bool)hasExclusiveAccess(ppcVar24);
  } while (!bVar2);
  *ppcVar24 = (code *)0x0;
  if (pcVar22 == (code *)0x2) {
    FUN_016d6968(0xf0,ppcVar24,0x81,1);
    return uVar18;
  }
  return uVar18;
}

