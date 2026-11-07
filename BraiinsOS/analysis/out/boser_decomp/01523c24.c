// FUN_01523c24 @ 01523c24 size=4248 calls_out=33 calls_in=1
// strings: properties | patternProperties | patternProperties | patternProperties | additionalProperties | patternProperties

void FUN_01523c24(undefined4 *param_1,int param_2,undefined4 *param_3,char *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined1 uVar3;
  char *pcVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  char *pcVar14;
  undefined *puVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *local_2b8;
  undefined *local_2b4;
  undefined *local_2b0;
  undefined *local_2a8;
  undefined *local_2a4;
  undefined *local_2a0;
  undefined *local_298;
  undefined *local_294;
  undefined *local_290;
  undefined8 local_28c;
  undefined8 local_284;
  undefined *local_27c;
  undefined *puStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined *local_268;
  undefined *local_264;
  undefined *local_260;
  undefined *puStack_25c;
  undefined *puStack_258;
  undefined1 local_210;
  undefined *local_204;
  undefined *local_200;
  undefined4 local_1fc;
  undefined *local_1f8;
  undefined *local_1f4;
  undefined *local_1f0;
  undefined4 local_1ec;
  undefined *local_1e8;
  undefined4 local_1e4;
  undefined *local_1e0;
  undefined4 local_1dc;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined *local_1cc;
  undefined *local_1c8;
  undefined *local_1c4;
  undefined *local_1c0;
  undefined *local_1bc;
  undefined *local_1b8;
  undefined *local_1b4;
  undefined *local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  int local_180 [8];
  undefined *local_160;
  undefined *local_15c;
  undefined *local_158;
  undefined *local_154;
  undefined *puStack_150;
  undefined *local_14c;
  undefined *puStack_148;
  undefined *local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined *local_f8;
  undefined *puStack_f4;
  undefined *puStack_f0;
  undefined *puStack_ec;
  undefined *puStack_e8;
  undefined *local_c4;
  undefined *local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_64;
  undefined1 local_30;
  
  uVar13 = *param_3;
  uVar11 = param_3[1];
  pcVar4 = (char *)FUN_0196b3a8(uVar13,uVar11,"properties",10);
  pcVar5 = (char *)FUN_0196b3a8(uVar13,uVar11,"patternProperties",0x11);
  if (pcVar5 != (char *)0x0) {
    if (*pcVar5 != '\x05') {
      uVar18 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                            "patternProperties",0x11);
      uVar11 = (undefined4)((ulonglong)uVar18 >> 0x20);
      piVar12 = (int *)uVar18;
      do {
        iVar7 = *piVar12;
        bVar16 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar16);
      *piVar12 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_01525378;
      uVar18 = FUN_015321a0();
      uVar11 = FUN_015956e0(piVar12,uVar11,piVar12,uVar11,uVar18,pcVar5,0x20);
      goto LAB_01524b44;
    }
    if (**(int **)(param_2 + 0x48) != 2) {
      FUN_01526248(&local_298,param_2,"patternProperties",0x11);
      local_1d8 = *(undefined **)(pcVar5 + 0xc);
      if ((undefined *)0x147ae14 < local_1d8) {
        uVar11 = 0;
        pcVar14 = pcVar4;
LAB_01523ea0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar11,pcVar14);
      }
      pcVar14 = (char *)((int)local_1d8 * 100);
      if (pcVar14 == (char *)0x0) {
        puVar15 = (undefined *)0x4;
        local_204 = (undefined *)0x0;
      }
      else {
        uVar11 = 4;
        puVar15 = (undefined *)FUN_01298504(pcVar14,4);
        if (puVar15 == (undefined *)0x0) goto LAB_01523ea0;
        local_204 = local_1d8;
      }
      local_1ec = *(undefined4 *)(pcVar5 + 8);
      local_1f0 = *(undefined **)(pcVar5 + 4);
      if (local_1f0 == (undefined *)0x0) {
        local_1d8 = (undefined *)0x0;
      }
      local_1f8 = (undefined *)(uint)(local_1f0 != (undefined *)0x0);
      local_1fc = 0;
      local_1e4 = 0;
      local_1f4 = (undefined *)0x0;
      local_200 = puVar15;
      local_1e8 = local_1f8;
      local_1e0 = local_1f0;
      local_1dc = local_1ec;
      iVar7 = FUN_01a41998(&local_1f8);
      puVar2 = local_204;
      if (iVar7 != 0) {
        FUN_01526248(&local_b8,&local_298,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
        FUN_0157cf50(local_180,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
                    /* WARNING: Could not recover jumptable at 0x01524600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_01524604 + *(int *)(&DAT_01524604 + local_180[0] * 4)))();
        return;
      }
      FUN_014ff9e0(&local_298);
      if (puVar2 == (undefined *)0x80000000) {
        *param_1 = 1;
        param_1[1] = 0;
        param_1[2] = puVar15;
        return;
      }
      local_2b0 = (undefined *)0x0;
      local_2b8 = puVar2;
      local_2b4 = puVar15;
      if (*param_4 == '\x01') {
        uVar11 = 0;
        if (param_4[1] == '\0') {
          if (pcVar4 == (char *)0x0) {
            local_160 = puVar2;
            local_158 = (undefined *)0x0;
            uVar11 = *(undefined4 *)(param_2 + 0x38);
            uVar13 = *(undefined4 *)(param_2 + 0x3c);
            local_15c = puVar15;
            uVar18 = FUN_015345a4(uVar11,uVar13,"additionalProperties",0x14);
            uVar17 = FUN_015345a4(uVar11,uVar13,"patternProperties",0x11);
            FUN_01526248(&local_b8,param_2,"patternProperties",0x11);
            local_27c = (undefined *)FUN_015707a4(local_64);
            local_298 = local_2b8;
            local_294 = local_2b4;
            local_290 = local_2b0;
            local_28c = uVar18;
            local_284 = uVar17;
            puVar9 = (undefined4 *)FUN_015268f8(0x20);
            *puVar9 = local_298;
            puVar9[1] = local_294;
            puVar9[2] = local_290;
            *(undefined8 *)(puVar9 + 3) = local_28c;
            *(undefined8 *)(puVar9 + 5) = local_284;
            puVar9[7] = local_27c;
            *param_1 = 1;
            param_1[1] = puVar9;
            param_1[2] = &DAT_01cfad70;
            goto LAB_0152519c;
          }
          if (*pcVar4 == '\x05') {
            FUN_01506924(param_1,param_2,pcVar4 + 4,&local_2b8);
            return;
          }
          uVar18 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                                "properties",10);
          uVar11 = (undefined4)((ulonglong)uVar18 >> 0x20);
          piVar12 = (int *)uVar18;
          do {
            iVar7 = *piVar12;
            bVar16 = (bool)hasExclusiveAccess(piVar12);
          } while (!bVar16);
          *piVar12 = iVar7 + 1;
          if (iVar7 < 0) goto LAB_01525378;
          uVar18 = FUN_015321a0();
          uVar11 = FUN_01594754(piVar12,uVar11,piVar12,uVar11,uVar18,pcVar4,&DAT_004a68c8);
          goto LAB_01525294;
        }
      }
      else {
        if (pcVar4 == (char *)0x0) {
          FUN_01526248(&local_298,param_2,"additionalProperties",0x14);
          uVar3 = FUN_016731b0(local_210,param_4);
          FUN_0156aca8(&local_1d0,&local_298,param_4,uVar3);
          if (local_1d0 != (undefined *)0x0) {
            local_f8 = local_1d0;
            puStack_f4 = local_1cc;
            puStack_f0 = local_1c8;
            puStack_ec = local_1c4;
            puStack_e8 = local_1c0;
            local_1f8 = local_2b8;
            local_1f4 = local_2b4;
            local_1f0 = local_2b0;
            uVar18 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                                  "patternProperties",0x11);
            FUN_01526248(&local_b8,param_2,"patternProperties",0x11);
            local_138 = FUN_015707a4(local_64);
            local_154 = local_1d0;
            puStack_150 = local_1cc;
            local_14c = local_1c8;
            puStack_148 = local_1c4;
            local_144 = local_1c0;
            local_160 = local_2b8;
            local_15c = local_2b4;
            local_158 = local_2b0;
            local_140 = uVar18;
            puVar9 = (undefined4 *)FUN_015268f8(0x2c);
            *puVar9 = local_160;
            puVar9[1] = local_15c;
            puVar9[2] = local_158;
            puVar9[3] = local_154;
            puVar9[4] = puStack_150;
            puVar9[5] = local_14c;
            puVar9[6] = puStack_148;
            puVar9[7] = local_144;
            *(undefined8 *)(puVar9 + 8) = local_140;
            puVar9[10] = local_138;
            param_1[1] = puVar9;
            param_1[2] = &DAT_01cfad90;
            *param_1 = 1;
            FUN_014ff9e0(&local_298);
            goto LAB_0152519c;
          }
          param_1[1] = 0;
          *param_1 = 1;
          param_1[2] = local_1cc;
          FUN_014ff9e0(&local_298);
          goto LAB_015252a4;
        }
        if (*pcVar4 == '\x05') {
          FUN_014ff3a0(param_1,param_2,pcVar4 + 4,&local_2b8,param_4);
          return;
        }
        uVar18 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                              "properties",10);
        uVar11 = (undefined4)((ulonglong)uVar18 >> 0x20);
        piVar12 = (int *)uVar18;
        do {
          iVar7 = *piVar12;
          bVar16 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar16);
        *piVar12 = iVar7 + 1;
        if (iVar7 < 0) goto LAB_01525378;
        uVar18 = FUN_015321a0();
        uVar11 = FUN_01594754(piVar12,uVar11,piVar12,uVar11,uVar18,pcVar4,&DAT_004a68c8);
LAB_01525294:
        param_1[1] = 0;
        param_1[2] = uVar11;
        uVar11 = 1;
      }
      *param_1 = uVar11;
LAB_015252a4:
      FUN_014ffdfc(&local_2b8);
      return;
    }
    FUN_01526248(&local_298,param_2,"patternProperties",0x11);
    local_1b0 = *(undefined **)(pcVar5 + 0xc);
    if ((undefined *)0x3333333 < local_1b0) {
      uVar11 = 0;
      iVar7 = param_2;
LAB_01523cd8:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar11,iVar7);
    }
    puVar15 = (undefined *)0x4;
    iVar7 = (int)local_1b0 * 0x28;
    local_c4 = (undefined *)0x0;
    if (iVar7 != 0) {
      uVar11 = 4;
      puVar15 = (undefined *)FUN_01298504(iVar7,4);
      if (puVar15 == (undefined *)0x0) goto LAB_01523cd8;
      local_c4 = local_1b0;
    }
    local_1c8 = *(undefined **)(pcVar5 + 4);
    local_1c4 = *(undefined **)(pcVar5 + 8);
    if (local_1c8 == (undefined *)0x0) {
      local_1b0 = (undefined *)0x0;
    }
    local_1d0 = (undefined *)(uint)(local_1c8 != (undefined *)0x0);
    local_bc = 0;
    local_1bc = (undefined *)0x0;
    local_1cc = (undefined *)0x0;
    local_1c0 = local_1d0;
    local_1b8 = local_1c8;
    local_1b4 = local_1c4;
    local_c0 = puVar15;
    iVar7 = FUN_01a41998(&local_1d0);
    puVar2 = local_c4;
    if (iVar7 != 0) {
      FUN_01526248(&local_b8,&local_298,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
      FUN_0157cf50(&local_f8,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
                    /* WARNING: Could not recover jumptable at 0x01524020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_01524024 + *(int *)(&DAT_01524024 + (int)local_f8 * 4)))();
      return;
    }
    FUN_014ff9e0(&local_298);
    if (puVar2 == (undefined *)0x80000000) {
      param_1[1] = 0;
      param_1[2] = puVar15;
      *param_1 = 1;
      return;
    }
    local_2a0 = (undefined *)0x0;
    local_2a8 = puVar2;
    local_2a4 = puVar15;
    if (*param_4 == '\x01') {
      uVar11 = 0;
      if (param_4[1] == '\0') {
        if (pcVar4 == (char *)0x0) {
          local_160 = puVar2;
          local_158 = (undefined *)0x0;
          uVar11 = *(undefined4 *)(param_2 + 0x38);
          uVar13 = *(undefined4 *)(param_2 + 0x3c);
          local_15c = puVar15;
          uVar18 = FUN_015345a4(uVar11,uVar13,"additionalProperties",0x14);
          uVar17 = FUN_015345a4(uVar11,uVar13,"patternProperties",0x11);
          FUN_01526248(&local_b8,param_2,"patternProperties",0x11);
          local_27c = (undefined *)FUN_015707a4(local_64);
          local_298 = local_2a8;
          local_294 = local_2a4;
          local_290 = local_2a0;
          local_28c = uVar18;
          local_284 = uVar17;
          puVar9 = (undefined4 *)FUN_015268f8(0x20);
          *puVar9 = local_298;
          puVar9[1] = local_294;
          puVar9[2] = local_290;
          *(undefined8 *)(puVar9 + 3) = local_28c;
          *(undefined8 *)(puVar9 + 5) = local_284;
          puVar9[7] = local_27c;
          param_1[1] = puVar9;
          param_1[2] = &DAT_01cfadb0;
          *param_1 = 1;
LAB_0152519c:
          FUN_014ff9e0(&local_b8);
          return;
        }
        if (*pcVar4 == '\x05') {
          FUN_0150a518(param_1,param_2,pcVar4 + 4,&local_2a8);
          return;
        }
        uVar18 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                              "properties",10);
        uVar11 = (undefined4)((ulonglong)uVar18 >> 0x20);
        piVar12 = (int *)uVar18;
        do {
          iVar7 = *piVar12;
          bVar16 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar16);
        *piVar12 = iVar7 + 1;
        if (iVar7 < 0) goto LAB_01525378;
        uVar18 = FUN_015321a0();
        uVar11 = FUN_01594754(piVar12,uVar11,piVar12,uVar11,uVar18,pcVar4,&DAT_004a68c8);
        goto LAB_0152520c;
      }
    }
    else {
      if (pcVar4 == (char *)0x0) {
        FUN_01526248(&local_298,param_2,"additionalProperties",0x14);
        uVar3 = FUN_016731b0(local_210,param_4);
        FUN_0156aca8(&local_1d0,&local_298,param_4,uVar3);
        if (local_1d0 != (undefined *)0x0) {
          local_f8 = local_1d0;
          puStack_f4 = local_1cc;
          puStack_f0 = local_1c8;
          puStack_ec = local_1c4;
          puStack_e8 = local_1c0;
          local_1f8 = local_2a8;
          local_1f4 = local_2a4;
          local_1f0 = local_2a0;
          uVar18 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                                "patternProperties",0x11);
          FUN_01526248(&local_b8,param_2,"patternProperties",0x11);
          local_138 = FUN_015707a4(local_64);
          local_154 = local_1d0;
          puStack_150 = local_1cc;
          local_14c = local_1c8;
          puStack_148 = local_1c4;
          local_144 = local_1c0;
          local_160 = local_2a8;
          local_15c = local_2a4;
          local_158 = local_2a0;
          local_140 = uVar18;
          puVar9 = (undefined4 *)FUN_015268f8(0x2c);
          *puVar9 = local_160;
          puVar9[1] = local_15c;
          puVar9[2] = local_158;
          puVar9[3] = local_154;
          puVar9[4] = puStack_150;
          puVar9[5] = local_14c;
          puVar9[6] = puStack_148;
          puVar9[7] = local_144;
          *(undefined8 *)(puVar9 + 8) = local_140;
          puVar9[10] = local_138;
          param_1[1] = puVar9;
          param_1[2] = &DAT_01cfadd0;
          *param_1 = 1;
          FUN_014ff9e0(&local_298);
          goto LAB_0152519c;
        }
        param_1[1] = 0;
        *param_1 = 1;
        param_1[2] = local_1cc;
        FUN_014ff9e0(&local_298);
        goto LAB_0152521c;
      }
      if (*pcVar4 == '\x05') {
        FUN_015036d8(param_1,param_2,pcVar4 + 4,&local_2a8,param_4);
        return;
      }
      uVar18 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                            "properties",10);
      uVar11 = (undefined4)((ulonglong)uVar18 >> 0x20);
      piVar12 = (int *)uVar18;
      do {
        iVar7 = *piVar12;
        bVar16 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar16);
      *piVar12 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_01525378;
      uVar18 = FUN_015321a0();
      uVar11 = FUN_01594754(piVar12,uVar11,piVar12,uVar11,uVar18,pcVar4,&DAT_004a68c8);
LAB_0152520c:
      param_1[1] = 0;
      param_1[2] = uVar11;
      uVar11 = 1;
    }
    *param_1 = uVar11;
LAB_0152521c:
    FUN_01503d58(&local_2a8);
    return;
  }
  if (*param_4 == '\x01') {
    if (param_4[1] != '\0') {
      uVar11 = 0;
LAB_01523d04:
      *param_1 = uVar11;
      return;
    }
    if (pcVar4 == (char *)0x0) {
      uVar18 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                            "additionalProperties",0x14);
      puVar8 = (undefined8 *)thunk_FUN_01be5118(8);
      if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      *puVar8 = uVar18;
      *param_1 = 1;
      param_1[1] = puVar8;
      param_1[2] = &DAT_01cfad50;
      return;
    }
    pbVar6 = (byte *)FUN_0196b3a8(uVar13,uVar11,&DAT_0056fdb8,8);
    if (pbVar6 == (byte *)0x0) {
LAB_01523eec:
      if (*pcVar4 == '\x05') {
        if (*(uint *)(pcVar4 + 0xc) < 0xf) {
          FUN_01527288(&local_b8,pcVar4 + 4,param_2);
        }
        else {
          FUN_0152716c(&local_b8,pcVar4 + 4,param_2);
        }
        *param_1 = 1;
        param_1[1] = local_b8;
        param_1[2] = local_b4;
        return;
      }
    }
    else {
      uVar10 = (uint)*pbVar6;
      bVar16 = uVar10 == 4;
      if (bVar16) {
        uVar10 = *(uint *)(pbVar6 + 0xc);
      }
      if ((!bVar16 || uVar10 != 1) || (pcVar5 = *(char **)(pbVar6 + 8), *pcVar5 != '\x03'))
      goto LAB_01523eec;
      if (*pcVar4 == '\x05') {
        if (*(uint *)(pcVar4 + 0xc) < 0xf) {
          FUN_006666fc(&local_b8,*(undefined4 *)(pcVar5 + 8),*(undefined4 *)(pcVar5 + 0xc));
          FUN_01526fb8(&local_298,pcVar4 + 4,param_2,&local_b8);
        }
        else {
          FUN_006666fc(&local_b8,*(undefined4 *)(pcVar5 + 8),*(undefined4 *)(pcVar5 + 0xc));
          FUN_01526ddc(&local_298,pcVar4 + 4,param_2,&local_b8);
        }
        param_1[1] = local_298;
        param_1[2] = local_294;
        uVar11 = 1;
        goto LAB_01523d04;
      }
    }
    piVar12 = *(int **)(param_2 + 0x38);
    do {
      iVar7 = *piVar12;
      bVar16 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar16);
    *piVar12 = iVar7 + 1;
    if (iVar7 < 0) {
LAB_01525378:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1525378);
      (*pcVar1)();
    }
    uVar11 = *(undefined4 *)(param_2 + 0x3c);
    do {
      iVar7 = *piVar12;
      bVar16 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar16);
    *piVar12 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_01525378;
    uVar18 = FUN_015321a0();
  }
  else {
    if (pcVar4 == (char *)0x0) {
      FUN_01526248(&local_b8,param_2,"additionalProperties",0x14);
      uVar3 = FUN_016731b0(local_30,param_4);
      FUN_0156aca8(&local_298,&local_b8,param_4,uVar3);
      if (local_298 == (undefined *)0x0) {
        puVar9 = (undefined4 *)0x0;
        puVar15 = local_294;
      }
      else {
        local_158 = local_290;
        local_154 = (undefined *)local_28c;
        puStack_150 = local_28c._4_4_;
        local_160 = local_298;
        local_15c = local_294;
        puVar9 = (undefined4 *)thunk_FUN_01be5118(0x14);
        if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x14);
        }
        *puVar9 = local_160;
        puVar9[1] = local_15c;
        puVar9[2] = local_158;
        puVar9[3] = local_154;
        puVar9[4] = puStack_150;
        puVar15 = &DAT_01cfad30;
      }
      FUN_014ff9e0(&local_b8);
      *param_1 = 1;
      param_1[1] = puVar9;
      param_1[2] = puVar15;
      return;
    }
    if (*pcVar4 == '\x05') {
      if (0xe < *(uint *)(pcVar4 + 0xc)) {
        FUN_01526248(&local_b8,param_2,"additionalProperties",0x14);
        FUN_0155ee38(&local_160,param_2,pcVar4 + 4);
        if (local_160 != (undefined *)0x0) {
          local_1c8 = local_158;
          local_1c4 = local_154;
          local_1c0 = puStack_150;
          local_1bc = local_14c;
          local_1b8 = puStack_148;
          local_1b4 = local_144;
          local_1b0 = (undefined *)local_140;
          uStack_1ac = local_140._4_4_;
          uStack_1a8 = local_138;
          uStack_1a4 = uStack_134;
          local_1d0 = local_160;
          local_1cc = local_15c;
          uVar3 = FUN_016731b0(local_30,param_4);
          FUN_0156aca8(&local_160,&local_b8,param_4,uVar3);
          if (local_160 != (undefined *)0x0) {
            local_260 = local_158;
            puStack_25c = local_154;
            puStack_258 = puStack_150;
            local_264 = local_15c;
            local_268 = local_160;
            local_298 = local_1d0;
            local_294 = local_1cc;
            local_290 = local_1c8;
            local_28c._0_4_ = local_1c4;
            local_28c._4_4_ = local_1c0;
            local_284._0_4_ = local_1bc;
            local_284._4_4_ = local_1b8;
            local_27c = local_1b4;
            puStack_278 = local_1b0;
            uStack_274 = uStack_1ac;
            uStack_270 = uStack_1a8;
            uStack_26c = uStack_1a4;
            iVar7 = thunk_FUN_01be5118(0x48);
            if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(8,0x48);
            }
            FUN_01bed4e2(iVar7,&local_298,0x48);
            local_15c = &DAT_01cfac90;
            goto LAB_01524cac;
          }
          FUN_0152aae0(&local_1d0);
        }
        iVar7 = 0;
LAB_01524cac:
        FUN_014ff9e0(&local_b8);
        *param_1 = 1;
        param_1[1] = iVar7;
        param_1[2] = local_15c;
        return;
      }
      FUN_01526248(&local_b8,param_2,"additionalProperties",0x14);
      FUN_0155f304(&local_160,param_2,pcVar4 + 4);
      puVar15 = local_15c;
      if (local_160 != (undefined *)0x80000000) {
        local_1d0 = local_160;
        local_1c8 = local_158;
        local_1cc = local_15c;
        uVar3 = FUN_016731b0(local_30,param_4);
        FUN_0156aca8(&local_160,&local_b8,param_4,uVar3);
        if (local_160 != (undefined *)0x0) {
          local_284._0_4_ = local_158;
          local_284._4_4_ = local_154;
          local_27c = puStack_150;
          local_28c._0_4_ = local_160;
          local_28c._4_4_ = local_15c;
          local_298 = local_1d0;
          local_294 = local_1cc;
          local_290 = local_1c8;
          puVar9 = (undefined4 *)thunk_FUN_01be5118(0x20);
          if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x20);
          }
          puVar15 = &DAT_01cfac70;
          *puVar9 = local_298;
          puVar9[1] = local_294;
          puVar9[2] = local_290;
          puVar9[3] = (undefined *)local_28c;
          puVar9[4] = local_28c._4_4_;
          puVar9[5] = (undefined *)local_284;
          puVar9[6] = local_284._4_4_;
          puVar9[7] = local_27c;
          goto LAB_01524ccc;
        }
        FUN_01501cbc(&local_1d0);
        puVar15 = local_15c;
      }
      puVar9 = (undefined4 *)0x0;
LAB_01524ccc:
      FUN_014ff9e0(&local_b8);
      *param_1 = 1;
      param_1[1] = puVar9;
      param_1[2] = puVar15;
      return;
    }
    piVar12 = *(int **)(param_2 + 0x38);
    do {
      iVar7 = *piVar12;
      bVar16 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar16);
    *piVar12 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_01525378;
    uVar11 = *(undefined4 *)(param_2 + 0x3c);
    do {
      iVar7 = *piVar12;
      bVar16 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar16);
    *piVar12 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_01525378;
    uVar18 = FUN_015321a0();
  }
  uVar11 = FUN_01594754(piVar12,uVar11,piVar12,uVar11,uVar18,pcVar4,&DAT_004a68c8);
LAB_01524b44:
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = uVar11;
  return;
}

