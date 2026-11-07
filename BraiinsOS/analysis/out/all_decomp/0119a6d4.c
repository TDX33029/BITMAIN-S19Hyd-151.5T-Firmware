// FUN_0119a6d4 @ 0119a6d4 size=5240 calls_out=35 calls_in=1
// strings: properties | patternProperties | patternProperties | patternProperties | patternProperties | patternProperties

void FUN_0119a6d4(undefined4 *param_1,int param_2,int *param_3,char *param_4)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  uint uVar11;
  char *pcVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  byte *pbVar19;
  int iVar20;
  undefined **ppuVar21;
  int iVar22;
  undefined4 uVar23;
  int iVar24;
  int iVar25;
  char *pcVar26;
  bool bVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined **local_290;
  undefined **local_28c;
  undefined **local_288;
  undefined **local_280;
  undefined **local_27c;
  undefined **local_278;
  undefined **local_270;
  undefined **local_26c;
  undefined **local_268;
  undefined8 local_264;
  undefined8 local_25c;
  undefined **local_254;
  undefined **ppuStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined **local_240;
  undefined **local_23c;
  undefined **local_238;
  undefined **ppuStack_234;
  undefined **ppuStack_230;
  undefined1 local_1e8;
  undefined **local_1dc;
  undefined **local_1d8;
  undefined4 local_1d4;
  undefined **local_1d0;
  undefined **local_1cc;
  undefined **local_1c8;
  undefined **local_1c4;
  undefined **local_1c0;
  undefined4 local_1bc;
  undefined **local_1b8;
  undefined **local_1b4;
  undefined **local_1b0;
  undefined **local_1a8;
  undefined **local_1a4;
  undefined **local_1a0;
  undefined **local_19c;
  undefined **local_198;
  undefined **local_194;
  undefined **local_190;
  undefined **local_18c;
  undefined **local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined **local_158;
  undefined **local_154;
  undefined4 local_150;
  undefined **local_148;
  undefined **ppuStack_144;
  undefined **ppuStack_140;
  undefined **local_130;
  undefined **local_12c;
  undefined **local_128;
  undefined **local_124;
  undefined **ppuStack_120;
  undefined **local_11c;
  undefined **ppuStack_118;
  undefined **local_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined1 *local_98;
  undefined2 local_94;
  undefined4 local_64;
  undefined1 local_60;
  char *local_5c;
  int *local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined1 local_30;
  
  iVar22 = *param_3;
  if (iVar22 != 0) {
    iVar24 = param_3[1];
    iVar18 = iVar22;
    iVar25 = iVar24;
    do {
      uVar16 = (uint)*(ushort *)(iVar18 + 0x192);
      iVar20 = iVar18 + 0x10c;
      uVar15 = 0xffffffff;
      iVar17 = uVar16 * 0xc;
      do {
        if (iVar17 == 0) goto LAB_0119a79c;
        uVar14 = *(uint *)(iVar20 + 8);
        uVar11 = uVar14;
        if (9 < uVar14) {
          uVar11 = 10;
        }
        iVar5 = FUN_016dd50a("properties",*(undefined4 *)(iVar20 + 4),uVar11);
        if (iVar5 == 0) {
          iVar5 = 10 - uVar14;
        }
        iVar17 = iVar17 + -0xc;
        uVar15 = uVar15 + 1;
        iVar20 = iVar20 + 0xc;
      } while ((char)((0 < iVar5) - (iVar5 < 0)) == '\x01');
      uVar16 = uVar15;
      if (0 < iVar5 == iVar5 < 0) {
        pcVar6 = (char *)(iVar18 + uVar15 * 0x18);
        goto LAB_0119a7c0;
      }
LAB_0119a79c:
      if (iVar25 == 0) goto LAB_0119ad34;
      iVar25 = iVar25 + -1;
      iVar18 = *(int *)(iVar18 + uVar16 * 4 + 0x198);
    } while( true );
  }
  if (*param_4 != '\x01') {
LAB_0119b630:
    FUN_0119d4b4(&local_b8,param_2,"additionalProperties",0x14);
    uVar4 = FUN_01352d48(local_30,param_4);
    FUN_0125acb4(&local_270,&local_b8,param_4,uVar4);
    if (local_270 == (undefined **)0x0) {
      puVar9 = (undefined4 *)0x0;
      ppuVar21 = local_26c;
    }
    else {
      local_130 = local_270;
      local_12c = local_26c;
      local_128 = local_268;
      local_124 = (undefined **)local_264;
      ppuStack_120 = local_264._4_4_;
      puVar9 = (undefined4 *)thunk_FUN_016d4a50(0x14);
      if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x14);
      }
      *puVar9 = local_130;
      puVar9[1] = local_12c;
      puVar9[2] = local_128;
      puVar9[3] = local_124;
      puVar9[4] = ppuStack_120;
      ppuVar21 = (undefined **)&DAT_01889468;
    }
    FUN_01161600(&local_b8);
    *param_1 = 1;
    param_1[1] = puVar9;
    param_1[2] = ppuVar21;
    return;
  }
  if (param_4[1] == '\0') {
LAB_0119ae30:
    uVar29 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                          "additionalProperties",0x14);
    puVar8 = (undefined8 *)thunk_FUN_016d4a50(8);
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    *puVar8 = uVar29;
    *param_1 = 1;
    param_1[1] = puVar8;
    param_1[2] = &DAT_01889488;
    return;
  }
LAB_0119a8f0:
  uVar7 = 0;
LAB_0119a8f4:
  *param_1 = uVar7;
  return;
LAB_0119ad34:
  pcVar6 = (char *)0x0;
LAB_0119a7c0:
  pcVar12 = "patternProperties";
  iVar18 = iVar24;
  iVar25 = iVar22;
  do {
    uVar16 = (uint)*(ushort *)(iVar25 + 0x192);
    iVar20 = iVar25 + 0x10c;
    uVar15 = 0xffffffff;
    iVar17 = uVar16 * 0xc;
    do {
      if (iVar17 == 0) goto LAB_0119a858;
      uVar14 = *(uint *)(iVar20 + 8);
      uVar11 = uVar14;
      if (0x10 < uVar14) {
        uVar11 = 0x11;
      }
      iVar5 = FUN_016dd50a("patternProperties",*(undefined4 *)(iVar20 + 4),uVar11);
      if (iVar5 == 0) {
        iVar5 = 0x11 - uVar14;
      }
      iVar17 = iVar17 + -0xc;
      uVar15 = uVar15 + 1;
      iVar20 = iVar20 + 0xc;
    } while ((char)((0 < iVar5) - (iVar5 < 0)) == '\x01');
    uVar16 = uVar15;
    if (0 < iVar5 == iVar5 < 0) {
      pcVar26 = (char *)(iVar25 + uVar15 * 0x18);
      if (*pcVar26 != '\x05') {
        uStack_40 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                                 "patternProperties",0x11);
        piVar13 = (int *)uStack_40;
        do {
          iVar22 = *piVar13;
          bVar27 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar27);
        *piVar13 = iVar22 + 1;
        if (-1 < iVar22) {
          DataMemoryBarrier(0xb);
          if (DAT_018da8bc != 0) {
            FUN_0120d52c();
          }
          do {
            iVar22 = *DAT_018da8b4;
            bVar27 = (bool)hasExclusiveAccess(DAT_018da8b4);
          } while (!bVar27);
          *DAT_018da8b4 = iVar22 + 1;
          if (-1 < iVar22) {
            local_48 = DAT_018da8b4;
            uStack_44 = DAT_018da8b8;
            local_60 = 6;
            local_94 = 0x2000;
            local_98 = &DAT_80000028;
            local_b8 = 1;
            local_5c = pcVar26;
            local_b4 = uStack_40;
            iVar22 = thunk_FUN_016d4a50(0x80);
            if (iVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x80);
            }
            FUN_016dd1aa(iVar22,&local_b8,0x80);
            param_1[1] = 0;
            param_1[2] = iVar22;
            *param_1 = 1;
            return;
          }
        }
        goto LAB_0119c394;
      }
      if (**(int **)(param_2 + 0x48) == 2) {
        FUN_0119d4b4(&local_270,param_2,"patternProperties",0x11);
        local_188 = *(undefined ***)(pcVar26 + 0xc);
        if ((undefined **)0x3333333 < local_188) {
          uVar7 = 0;
LAB_0119a8cc:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar7,pcVar12);
        }
        ppuVar21 = (undefined **)0x4;
        pcVar12 = (char *)((int)local_188 * 0x28);
        local_158 = (undefined **)0x0;
        if (pcVar12 != (char *)0x0) {
          ppuVar21 = (undefined **)thunk_FUN_016d4a50(pcVar12);
          if (ppuVar21 == (undefined **)0x0) {
            uVar7 = 4;
            goto LAB_0119a8cc;
          }
          local_158 = local_188;
        }
        local_1a0 = *(undefined ***)(pcVar26 + 4);
        local_19c = *(undefined ***)(pcVar26 + 8);
        if (local_1a0 == (undefined **)0x0) {
          local_188 = (undefined **)0x0;
        }
        local_1a8 = (undefined **)(uint)(local_1a0 != (undefined **)0x0);
        local_150 = 0;
        local_194 = (undefined **)0x0;
        local_1a4 = (undefined **)0x0;
        local_198 = local_1a8;
        local_190 = local_1a0;
        local_18c = local_19c;
        local_154 = ppuVar21;
        iVar22 = FUN_00f45584(&local_1a8);
        ppuVar2 = local_158;
        if (iVar22 != 0) {
          FUN_0119d4b4(&local_b8,&local_270,*(undefined4 *)(iVar22 + 4),*(undefined4 *)(iVar22 + 8))
          ;
          FUN_0123ae94(&local_1d0,*(undefined4 *)(iVar22 + 4),*(undefined4 *)(iVar22 + 8));
                    /* WARNING: Could not recover jumptable at 0x0119ab44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_0119ab48 + *(int *)(&DAT_0119ab48 + (int)local_1d0 * 4)))();
          return;
        }
        FUN_01161600(&local_270);
        if (ppuVar2 == (undefined **)0x80000000) {
          param_1[1] = 0;
          param_1[2] = ppuVar21;
          *param_1 = 1;
          return;
        }
        local_278 = (undefined **)0x0;
        local_280 = ppuVar2;
        local_27c = ppuVar21;
        if (*param_4 == '\x01') {
          uVar7 = 0;
          if (param_4[1] != '\0') goto LAB_0119c0f8;
          if (pcVar6 == (char *)0x0) {
            uVar23 = *(undefined4 *)(param_2 + 0x38);
            uVar7 = *(undefined4 *)(param_2 + 0x3c);
            local_130 = ppuVar2;
            local_128 = (undefined **)0x0;
            local_12c = ppuVar21;
            uVar29 = FUN_0123ab30(uVar23,uVar7,"additionalProperties",0x14);
            uVar28 = FUN_0123ab30(uVar23,uVar7,"patternProperties",0x11);
            FUN_0119d4b4(&local_b8,param_2,"patternProperties",0x11);
            local_254 = (undefined **)FUN_01261fac(local_64);
            local_270 = local_280;
            local_26c = local_27c;
            local_268 = local_278;
            local_264 = uVar29;
            local_25c = uVar28;
            puVar9 = (undefined4 *)FUN_0119e23c(0x20);
            puVar10 = &DAT_018894e8;
            *puVar9 = local_270;
            puVar9[1] = local_26c;
            puVar9[2] = local_268;
            *(undefined8 *)(puVar9 + 3) = local_264;
            *(undefined8 *)(puVar9 + 5) = local_25c;
            puVar9[7] = local_254;
LAB_0119be84:
            *param_1 = 1;
            param_1[1] = puVar9;
            param_1[2] = puVar10;
LAB_0119be98:
            FUN_01161600(&local_b8);
            return;
          }
          if (*pcVar6 == '\x05') {
            FUN_0116e980(param_1,param_2,pcVar6 + 4,&local_280);
            return;
          }
          uVar29 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                                "properties",10);
          uVar7 = (undefined4)((ulonglong)uVar29 >> 0x20);
          piVar13 = (int *)uVar29;
          do {
            iVar22 = *piVar13;
            bVar27 = (bool)hasExclusiveAccess(piVar13);
          } while (!bVar27);
          *piVar13 = iVar22 + 1;
          if (iVar22 < 0) goto LAB_0119c394;
          uVar29 = FUN_0123aae8();
          uVar7 = FUN_011f07a8(piVar13,uVar7,piVar13,uVar7,uVar29,pcVar6,&DAT_0038bd72);
        }
        else {
          if (pcVar6 == (char *)0x0) {
            FUN_0119d4b4(&local_270,param_2,"additionalProperties",0x14);
            uVar4 = FUN_01352d48(local_1e8,param_4);
            FUN_0125acb4(&local_1a8,&local_270,param_4,uVar4);
            if (local_1a8 == (undefined **)0x0) {
              *param_1 = 1;
              param_1[1] = 0;
              param_1[2] = local_1a4;
              FUN_01161600(&local_270);
              FUN_011694d8(&local_280);
              return;
            }
            local_1d0 = local_1a8;
            local_1cc = local_1a4;
            local_1c8 = local_1a0;
            local_1c4 = local_19c;
            local_1c0 = local_198;
            local_148 = local_280;
            ppuStack_144 = local_27c;
            ppuStack_140 = local_278;
            uVar29 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                                  "patternProperties",0x11);
            FUN_0119d4b4(&local_b8,param_2,"patternProperties",0x11);
            local_108 = FUN_01261fac(local_64);
            local_124 = local_1a8;
            ppuStack_120 = local_1a4;
            local_11c = local_1a0;
            ppuStack_118 = local_19c;
            local_114 = local_198;
            local_130 = local_280;
            local_12c = local_27c;
            local_128 = local_278;
            local_110 = uVar29;
            puVar9 = (undefined4 *)FUN_0119e23c(0x2c);
            *puVar9 = local_130;
            puVar9[1] = local_12c;
            puVar9[2] = local_128;
            puVar9[3] = local_124;
            puVar9[4] = ppuStack_120;
            puVar9[5] = local_11c;
            puVar9[6] = ppuStack_118;
            puVar9[7] = local_114;
            *(undefined8 *)(puVar9 + 8) = local_110;
            puVar9[10] = local_108;
            param_1[1] = puVar9;
            param_1[2] = &DAT_01889508;
            *param_1 = 1;
            FUN_01161600(&local_270);
            goto LAB_0119be98;
          }
          if (*pcVar6 == '\x05') {
            FUN_011681ec(param_1,param_2,pcVar6 + 4,&local_280,param_4);
            return;
          }
          uVar29 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                                "properties",10);
          uVar7 = (undefined4)((ulonglong)uVar29 >> 0x20);
          piVar13 = (int *)uVar29;
          do {
            iVar22 = *piVar13;
            bVar27 = (bool)hasExclusiveAccess(piVar13);
          } while (!bVar27);
          *piVar13 = iVar22 + 1;
          if (iVar22 < 0) goto LAB_0119c394;
          uVar29 = FUN_0123aae8();
          uVar7 = FUN_011f07a8(piVar13,uVar7,piVar13,uVar7,uVar29,pcVar6,&DAT_0038bd72);
        }
        param_1[1] = 0;
        param_1[2] = uVar7;
        uVar7 = 1;
LAB_0119c0f8:
        *param_1 = uVar7;
        FUN_0115eac4(ppuVar21,0);
        if (ppuVar2 == (undefined **)0x0) {
          return;
        }
        thunk_FUN_016d3fb4(ppuVar21);
        return;
      }
      FUN_0119d4b4(&local_270,param_2,"patternProperties",0x11);
      local_1b0 = *(undefined ***)(pcVar26 + 0xc);
      if ((undefined **)0x147ae14 < local_1b0) {
        uVar7 = 0;
LAB_0119aa10:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar7,pcVar12);
      }
      pcVar12 = (char *)((int)local_1b0 * 100);
      if (pcVar12 == (char *)0x0) {
        ppuVar21 = (undefined **)0x4;
        local_1dc = (undefined **)0x0;
      }
      else {
        ppuVar21 = (undefined **)thunk_FUN_016d4a50(pcVar12);
        if (ppuVar21 == (undefined **)0x0) {
          uVar7 = 4;
          goto LAB_0119aa10;
        }
        local_1dc = local_1b0;
      }
      local_1c4 = *(undefined ***)(pcVar26 + 8);
      local_1c8 = *(undefined ***)(pcVar26 + 4);
      if (local_1c8 == (undefined **)0x0) {
        local_1b0 = (undefined **)0x0;
      }
      local_1d0 = (undefined **)(uint)(local_1c8 != (undefined **)0x0);
      local_1d4 = 0;
      local_1bc = 0;
      local_1cc = (undefined **)0x0;
      local_1d8 = ppuVar21;
      local_1c0 = local_1d0;
      local_1b8 = local_1c8;
      local_1b4 = local_1c4;
      iVar22 = FUN_00f45584(&local_1d0);
      ppuVar2 = local_1dc;
      if (iVar22 != 0) {
        FUN_0119d4b4(&local_b8,&local_270,*(undefined4 *)(iVar22 + 4),*(undefined4 *)(iVar22 + 8));
        FUN_0123ae94(&local_148,*(undefined4 *)(iVar22 + 4),*(undefined4 *)(iVar22 + 8));
                    /* WARNING: Could not recover jumptable at 0x0119b078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_0119b07c + *(int *)(&DAT_0119b07c + (int)local_148 * 4)))();
        return;
      }
      FUN_01161600(&local_270);
      if (ppuVar2 == (undefined **)0x80000000) {
        param_1[1] = 0;
        param_1[2] = ppuVar21;
        *param_1 = 1;
        return;
      }
      local_288 = (undefined **)0x0;
      local_290 = ppuVar2;
      local_28c = ppuVar21;
      if (*param_4 == '\x01') {
        uVar7 = 0;
        if (param_4[1] != '\0') goto LAB_0119c198;
        if (pcVar6 == (char *)0x0) {
          uVar23 = *(undefined4 *)(param_2 + 0x38);
          uVar7 = *(undefined4 *)(param_2 + 0x3c);
          local_128 = (undefined **)0x0;
          local_130 = ppuVar2;
          local_12c = ppuVar21;
          uVar29 = FUN_0123ab30(uVar23,uVar7,"additionalProperties",0x14);
          uVar28 = FUN_0123ab30(uVar23,uVar7,"patternProperties",0x11);
          FUN_0119d4b4(&local_b8,param_2,"patternProperties",0x11);
          local_254 = (undefined **)FUN_01261fac(local_64);
          local_270 = local_290;
          local_26c = local_28c;
          local_268 = local_288;
          local_264 = uVar29;
          local_25c = uVar28;
          puVar9 = (undefined4 *)FUN_0119e23c(0x20);
          puVar10 = &DAT_018894a8;
          *puVar9 = local_270;
          puVar9[1] = local_26c;
          puVar9[2] = local_268;
          *(undefined8 *)(puVar9 + 3) = local_264;
          *(undefined8 *)(puVar9 + 5) = local_25c;
          puVar9[7] = local_254;
          goto LAB_0119be84;
        }
        if (*pcVar6 == '\x05') {
          FUN_011752bc(param_1,param_2,pcVar6 + 4,&local_290);
          return;
        }
        uVar29 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                              "properties",10);
        uVar7 = (undefined4)((ulonglong)uVar29 >> 0x20);
        piVar13 = (int *)uVar29;
        do {
          iVar22 = *piVar13;
          bVar27 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar27);
        *piVar13 = iVar22 + 1;
        if (iVar22 < 0) goto LAB_0119c394;
        uVar29 = FUN_0123aae8();
        uVar7 = FUN_011f07a8(piVar13,uVar7,piVar13,uVar7,uVar29,pcVar6,&DAT_0038bd72);
      }
      else {
        if (pcVar6 == (char *)0x0) {
          FUN_0119d4b4(&local_270,param_2,"additionalProperties",0x14);
          uVar4 = FUN_01352d48(local_1e8,param_4);
          FUN_0125acb4(&local_1a8,&local_270,param_4,uVar4);
          if (local_1a8 == (undefined **)0x0) {
            *param_1 = 1;
            param_1[1] = 0;
            param_1[2] = local_1a4;
            FUN_01161600(&local_270);
            FUN_011619e0(&local_290);
            return;
          }
          local_1d0 = local_1a8;
          local_1cc = local_1a4;
          local_1c8 = local_1a0;
          local_1c4 = local_19c;
          local_1c0 = local_198;
          local_148 = local_290;
          ppuStack_144 = local_28c;
          ppuStack_140 = local_288;
          uVar29 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                                "patternProperties",0x11);
          FUN_0119d4b4(&local_b8,param_2,"patternProperties",0x11);
          local_108 = FUN_01261fac(local_64);
          local_124 = local_1a8;
          ppuStack_120 = local_1a4;
          local_11c = local_1a0;
          ppuStack_118 = local_19c;
          local_114 = local_198;
          local_130 = local_290;
          local_12c = local_28c;
          local_128 = local_288;
          local_110 = uVar29;
          puVar9 = (undefined4 *)FUN_0119e23c(0x2c);
          *puVar9 = local_130;
          puVar9[1] = local_12c;
          puVar9[2] = local_128;
          puVar9[3] = local_124;
          puVar9[4] = ppuStack_120;
          puVar9[5] = local_11c;
          puVar9[6] = ppuStack_118;
          puVar9[7] = local_114;
          *(undefined8 *)(puVar9 + 8) = local_110;
          puVar9[10] = local_108;
          param_1[1] = puVar9;
          param_1[2] = &DAT_018894c8;
          *param_1 = 1;
          FUN_01161600(&local_270);
          goto LAB_0119be98;
        }
        if (*pcVar6 == '\x05') {
          FUN_01160278(param_1,param_2,pcVar6 + 4,&local_290,param_4);
          return;
        }
        uVar29 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                              "properties",10);
        uVar7 = (undefined4)((ulonglong)uVar29 >> 0x20);
        piVar13 = (int *)uVar29;
        do {
          iVar22 = *piVar13;
          bVar27 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar27);
        *piVar13 = iVar22 + 1;
        if (iVar22 < 0) goto LAB_0119c394;
        uVar29 = FUN_0123aae8();
        uVar7 = FUN_011f07a8(piVar13,uVar7,piVar13,uVar7,uVar29,pcVar6,&DAT_0038bd72);
      }
      param_1[1] = 0;
      param_1[2] = uVar7;
      uVar7 = 1;
LAB_0119c198:
      *param_1 = uVar7;
      FUN_0115e82c(ppuVar21,0);
      if (ppuVar2 == (undefined **)0x0) {
        return;
      }
      thunk_FUN_016d3fb4(ppuVar21);
      return;
    }
LAB_0119a858:
    if (iVar18 == 0) break;
    iVar18 = iVar18 + -1;
    iVar25 = *(int *)(iVar25 + uVar16 * 4 + 0x198);
  } while( true );
  if (*param_4 == '\x01') {
    if (param_4[1] != '\0') goto LAB_0119a8f0;
    if (pcVar6 == (char *)0x0) goto LAB_0119ae30;
    while( true ) {
      uVar16 = (uint)*(ushort *)(iVar22 + 0x192);
      iVar25 = iVar22 + 0x10c;
      uVar15 = 0xffffffff;
      iVar18 = uVar16 * 0xc;
      do {
        if (iVar18 == 0) goto LAB_0119ae0c;
        uVar14 = *(uint *)(iVar25 + 8);
        uVar11 = uVar14;
        if (7 < uVar14) {
          uVar11 = 8;
        }
        iVar17 = FUN_016dd50a(&DAT_00569b28,*(undefined4 *)(iVar25 + 4),uVar11);
        if (iVar17 == 0) {
          iVar17 = 8 - uVar14;
        }
        iVar18 = iVar18 + -0xc;
        uVar15 = uVar15 + 1;
        iVar25 = iVar25 + 0xc;
      } while ((char)((0 < iVar17) - (iVar17 < 0)) == '\x01');
      uVar16 = uVar15;
      if (0 < iVar17 == iVar17 < 0) break;
LAB_0119ae0c:
      if (iVar24 == 0) goto LAB_0119b8c0;
      iVar24 = iVar24 + -1;
      iVar22 = *(int *)(iVar22 + uVar16 * 4 + 0x198);
    }
    pbVar19 = (byte *)(iVar22 + uVar15 * 0x18);
    uVar16 = (uint)*pbVar19;
    bVar27 = uVar16 == 4;
    if (bVar27) {
      uVar16 = *(uint *)(pbVar19 + 0xc);
    }
    if ((bVar27 && uVar16 == 1) && (pcVar12 = *(char **)(pbVar19 + 8), *pcVar12 == '\x03')) {
      if (*pcVar6 != '\x05') goto LAB_0119bfb8;
      if (*(uint *)(pcVar6 + 0xc) < 0xf) {
        FUN_00602a1c(&local_b8,*(undefined4 *)(pcVar12 + 8),*(undefined4 *)(pcVar12 + 0xc));
        FUN_0119eab4(&local_270,pcVar6 + 4,param_2,&local_b8);
      }
      else {
        FUN_00602a1c(&local_b8,*(undefined4 *)(pcVar12 + 8),*(undefined4 *)(pcVar12 + 0xc));
        FUN_0119e8b4(&local_270,pcVar6 + 4,param_2,&local_b8);
      }
      param_1[1] = local_270;
      param_1[2] = local_26c;
      uVar7 = 1;
      goto LAB_0119a8f4;
    }
LAB_0119b8c0:
    if (*pcVar6 == '\x05') {
      if (*(uint *)(pcVar6 + 0xc) < 0xf) {
        FUN_0119eda0();
      }
      else {
        FUN_0119ec84(&local_b8,pcVar6 + 4,param_2);
      }
      *param_1 = 1;
      param_1[1] = local_b8;
      param_1[2] = (undefined4)local_b4;
      return;
    }
LAB_0119bfb8:
    piVar13 = *(int **)(param_2 + 0x38);
    uVar7 = *(undefined4 *)(param_2 + 0x3c);
    do {
      iVar22 = *piVar13;
      bVar27 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar27);
    *piVar13 = iVar22 + 1;
    if (iVar22 < 0) goto LAB_0119c394;
    do {
      iVar22 = *piVar13;
      bVar27 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar27);
    *piVar13 = iVar22 + 1;
    if (iVar22 < 0) goto LAB_0119c394;
    DataMemoryBarrier(0xb);
    if (DAT_018da8bc != 0) {
      FUN_0120d52c();
    }
    do {
      iVar22 = *DAT_018da8b4;
      bVar27 = (bool)hasExclusiveAccess(DAT_018da8b4);
    } while (!bVar27);
    *DAT_018da8b4 = iVar22 + 1;
  }
  else {
    if (pcVar6 == (char *)0x0) goto LAB_0119b630;
    if (*pcVar6 == '\x05') {
      if (*(uint *)(pcVar6 + 0xc) < 0xf) {
        FUN_0119d4b4(&local_b8,param_2,"additionalProperties",0x14);
        FUN_011e50c8(&local_130,param_2,pcVar6 + 4);
        ppuVar3 = local_128;
        ppuVar2 = local_12c;
        ppuVar21 = local_130;
        if (local_130 == (undefined **)0x80000000) {
          puVar9 = (undefined4 *)0x0;
          ppuVar21 = local_12c;
        }
        else {
          local_1a0 = local_128;
          local_1a4 = local_12c;
          local_1a8 = local_130;
          uVar4 = FUN_01352d48(local_30,param_4);
          FUN_0125acb4(&local_130,&local_b8,param_4,uVar4);
          if (local_130 == (undefined **)0x0) {
            FUN_0115e9c0(ppuVar2,ppuVar3);
            if (ppuVar21 != (undefined **)0x0) {
              thunk_FUN_016d3fb4(ppuVar2);
            }
            puVar9 = (undefined4 *)0x0;
            ppuVar21 = local_12c;
          }
          else {
            local_264._0_4_ = local_130;
            local_25c._0_4_ = local_128;
            local_25c._4_4_ = local_124;
            local_254 = ppuStack_120;
            local_264._4_4_ = local_12c;
            local_270 = local_1a8;
            local_26c = local_1a4;
            local_268 = local_1a0;
            puVar9 = (undefined4 *)thunk_FUN_016d4a50(0x20);
            if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x20);
            }
            *puVar9 = local_270;
            puVar9[1] = local_26c;
            puVar9[2] = local_268;
            puVar9[3] = (undefined **)local_264;
            puVar9[4] = local_264._4_4_;
            puVar9[5] = (undefined **)local_25c;
            puVar9[6] = local_25c._4_4_;
            puVar9[7] = local_254;
            ppuVar21 = &PTR_LAB_018893a8;
          }
        }
        FUN_01161600(&local_b8);
        *param_1 = 1;
        param_1[1] = puVar9;
        param_1[2] = ppuVar21;
        return;
      }
      FUN_0119d4b4(&local_b8,param_2,"additionalProperties",0x14);
      FUN_011e4414(&local_130,param_2,pcVar6 + 4);
      if (local_130 == (undefined **)0x0) {
        iVar22 = 0;
      }
      else {
        local_1a0 = local_128;
        local_19c = local_124;
        local_198 = ppuStack_120;
        local_194 = local_11c;
        local_190 = ppuStack_118;
        local_18c = local_114;
        local_188 = (undefined **)local_110;
        uStack_184 = local_110._4_4_;
        uStack_180 = local_108;
        uStack_17c = uStack_104;
        local_1a8 = local_130;
        local_1a4 = local_12c;
        uVar4 = FUN_01352d48(local_30,param_4);
        FUN_0125acb4(&local_130,&local_b8,param_4,uVar4);
        if (local_130 == (undefined **)0x0) {
          FUN_011a4518(&local_1a8);
          iVar22 = 0;
        }
        else {
          local_240 = local_130;
          local_23c = local_12c;
          local_238 = local_128;
          ppuStack_234 = local_124;
          ppuStack_230 = ppuStack_120;
          local_270 = local_1a8;
          local_26c = local_1a4;
          local_268 = local_1a0;
          local_264._0_4_ = local_19c;
          local_264._4_4_ = local_198;
          local_25c._0_4_ = local_194;
          local_25c._4_4_ = local_190;
          local_254 = local_18c;
          ppuStack_250 = local_188;
          uStack_24c = uStack_184;
          uStack_248 = uStack_180;
          uStack_244 = uStack_17c;
          iVar22 = thunk_FUN_016d4a50(0x48);
          if (iVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x48);
          }
          FUN_016dd1aa(iVar22,&local_270,0x48);
          local_12c = (undefined **)&DAT_018893c8;
        }
      }
      FUN_01161600(&local_b8);
      *param_1 = 1;
      param_1[1] = iVar22;
      param_1[2] = local_12c;
      return;
    }
    piVar13 = *(int **)(param_2 + 0x38);
    uVar7 = *(undefined4 *)(param_2 + 0x3c);
    do {
      iVar22 = *piVar13;
      bVar27 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar27);
    *piVar13 = iVar22 + 1;
    if (iVar22 < 0) goto LAB_0119c394;
    do {
      iVar22 = *piVar13;
      bVar27 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar27);
    *piVar13 = iVar22 + 1;
    if (iVar22 < 0) goto LAB_0119c394;
    DataMemoryBarrier(0xb);
    if (DAT_018da8bc != 0) {
      FUN_0120d52c();
    }
    do {
      iVar22 = *DAT_018da8b4;
      bVar27 = (bool)hasExclusiveAccess(DAT_018da8b4);
    } while (!bVar27);
    *DAT_018da8b4 = iVar22 + 1;
  }
  if (-1 < iVar22) {
    uVar7 = FUN_011f07a8(piVar13,uVar7,piVar13,uVar7,DAT_018da8b4,DAT_018da8b8,pcVar6,&DAT_0038bd72)
    ;
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = uVar7;
    return;
  }
LAB_0119c394:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x119c394);
  (*pcVar1)();
}

