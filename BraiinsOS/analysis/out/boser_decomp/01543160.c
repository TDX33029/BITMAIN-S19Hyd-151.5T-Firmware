// FUN_01543160 @ 01543160 size=4988 calls_out=33 calls_in=3
// strings: unevaluatedItems | unevaluatedItems | $ref~! | $dynamicRef | $recursiveRef | itemsInlineTable

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01543160(undefined4 *param_1,int *******param_2,undefined4 *param_3)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int ******ppppppiVar11;
  byte *pbVar12;
  int *******pppppppiVar13;
  int *******pppppppiVar14;
  undefined4 uVar15;
  int *****pppppiVar16;
  uint uVar17;
  int iVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int extraout_r3;
  uint uVar23;
  undefined4 uVar24;
  int *******unaff_r5;
  uint uVar25;
  int iVar26;
  int *******pppppppiVar27;
  uint uVar28;
  uint uVar29;
  int *******pppppppiVar30;
  int *******pppppppiVar31;
  undefined4 uVar32;
  int iVar33;
  int iVar34;
  bool bVar35;
  ulonglong uVar36;
  char *local_31c;
  undefined4 local_318;
  int local_300;
  int local_2fc;
  int local_2f8;
  int *******local_2e0;
  int *******local_2d8;
  int *******local_2d4;
  int *******local_2d0;
  int *******pppppppiStack_2cc;
  int *******pppppppiStack_2c8;
  int *******local_2c0;
  int *******local_2bc;
  int *******local_2b8;
  int *******pppppppiStack_2b4;
  int *******pppppppiStack_2b0;
  int local_2a8;
  int local_2a4;
  int *******local_2a0;
  int local_29c;
  int *******local_298;
  int iStack_294;
  int *******pppppppiStack_290;
  int *******local_288;
  int local_284;
  int *******local_280;
  int *******local_278;
  int *******pppppppiStack_274;
  int *******pppppppiStack_270;
  int *******local_268;
  int *******local_264;
  int *******local_260;
  int *******pppppppiStack_25c;
  int *******pppppppiStack_258;
  int *******local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 local_1f8;
  int *******local_1d4;
  int local_1d0;
  int *******local_1cc;
  int *******local_1c8;
  int *******local_1c4;
  int *******local_1c0;
  int *******pppppppiStack_1bc;
  int *******pppppppiStack_1b8;
  char local_1b4;
  int *******local_190;
  int *******local_18c;
  int *******local_174;
  int *******local_170;
  undefined4 local_150;
  int local_14c;
  undefined1 local_140;
  int *******local_138;
  int *******local_134;
  int *******pppppppiStack_130;
  int *******pppppppiStack_12c;
  int *******pppppppiStack_128;
  int *******local_124;
  int *******local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int *******local_b0;
  int *******local_ac;
  int *******local_a8;
  int *******pppppppiStack_a4;
  int *******pppppppiStack_a0;
  int *******local_98;
  int *******local_94;
  int *******local_90;
  int *******pppppppiStack_8c;
  int *******pppppppiStack_88;
  
  uVar6 = *param_3;
  uVar15 = param_3[1];
  iVar7 = FUN_0196b3a8(uVar6,uVar15,"unevaluatedItems",0x10);
  pppppppiVar30 = (int *******)0x0;
  if (iVar7 == 0) {
    pppppppiVar27 = (int *******)0x0;
  }
  else {
    FUN_01545d70(&local_1c8,param_2,"unevaluatedItems",0x10);
    uVar5 = FUN_016731b0(local_140,iVar7);
    FUN_0156aca8(&local_268,&local_1c8,iVar7,uVar5);
    unaff_r5 = local_264;
    pppppppiVar27 = local_268;
    if (local_268 == (int *******)0x0) {
      uVar6 = FUN_01594a60(local_264);
      FUN_014ff9e0(&local_1c8);
      *param_1 = 2;
      param_1[1] = uVar6;
      return;
    }
    local_138 = local_260;
    local_134 = pppppppiStack_25c;
    pppppppiStack_130 = pppppppiStack_258;
    FUN_014ff9e0(&local_1c8);
  }
  local_2d0 = local_138;
  pppppppiStack_2cc = local_134;
  pppppppiStack_2c8 = pppppppiStack_130;
  local_2d8 = pppppppiVar27;
  local_2d4 = unaff_r5;
  iVar7 = FUN_0196b3a8(uVar6,uVar15,&DAT_005710a8,8);
  if (iVar7 != 0) {
    FUN_01545d70(&local_1c8,param_2,&DAT_005710a8,8);
    uVar5 = FUN_016731b0(local_140,iVar7);
    FUN_0156aca8(&local_268,&local_1c8,iVar7,uVar5);
    unaff_r5 = local_264;
    pppppppiVar30 = local_268;
    if (local_268 == (int *******)0x0) {
      uVar6 = FUN_01594a60(local_264);
      FUN_014ff9e0(&local_1c8);
      *param_1 = 2;
      param_1[1] = uVar6;
      goto LAB_01543820;
    }
    local_138 = local_260;
    local_134 = pppppppiStack_25c;
    pppppppiStack_130 = pppppppiStack_258;
    FUN_014ff9e0(&local_1c8);
  }
  pppppppiVar27 = pppppppiStack_130;
  local_2b8 = local_138;
  pppppppiStack_2b4 = local_134;
  pppppppiStack_2b0 = pppppppiStack_130;
  local_2c0 = pppppppiVar30;
  local_2bc = unaff_r5;
  pcVar8 = (char *)FUN_0196b3a8(uVar6,uVar15,"$ref~!",4);
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\x03')) {
LAB_0154342c:
    iVar7 = 0;
LAB_01543434:
    local_2a8 = iVar7;
    pcVar8 = (char *)FUN_0196b3a8(uVar6,uVar15,"$dynamicRef",0xb);
    if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\x03')) {
LAB_01543544:
      iVar9 = 0;
LAB_01543548:
      local_2a4 = iVar9;
      iVar10 = FUN_0196b3a8(uVar6,uVar15,"$recursiveRef",0xd);
      pppppppiVar30 = (int *******)0x0;
      local_2e0 = param_2;
      if (iVar10 == 0) goto LAB_01543a1c;
      FUN_01571e38(&local_1c8,param_2);
      pppppppiVar13 = local_1c4;
      if (local_1c8 == (int *******)0x8000000a) {
        local_268 = local_1c0;
        local_264 = pppppppiStack_1bc;
        local_260 = pppppppiStack_1b8;
        pppppppiVar30 = local_1c4;
        if (local_1b4 == '\x06') goto LAB_015437d8;
        local_278 = local_1c0;
        pppppppiStack_274 = pppppppiStack_1bc;
        pppppppiStack_270 = pppppppiStack_1b8;
        if (*(char *)local_1c4 == '\x05') {
          FUN_0166c584(&local_98,param_2[0x13],local_1b4,local_1c4);
          ppppppiVar11 = param_2[0xe];
          pppppppiVar13 = pppppppiVar13 + 1;
          do {
            pppppiVar16 = *ppppppiVar11;
            bVar35 = (bool)hasExclusiveAccess(ppppppiVar11);
          } while (!bVar35);
          *ppppppiVar11 = (int *****)((int)pppppiVar16 + 1);
          if ((int)pppppiVar16 < 0) {
LAB_01544500:
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0x1544500);
            (*pcVar1)();
          }
          FUN_01571d9c(&local_1c8,param_2,&local_278,local_1b4,&local_98,ppppppiVar11,param_2[0xf]);
          uVar17 = *(uint *)(local_14c + 8);
          if (0x7ffffffe < uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_0130701c(&DAT_01cfbe80);
          }
          *(uint *)(local_14c + 8) = uVar17 + 1;
          if (*(int *)(local_14c + 0x1c) != 0) {
            uVar22 = *(uint *)(local_14c + 0x20);
            uVar28 = *(uint *)(local_14c + 0x24);
            uVar25 = *(uint *)(local_14c + 0x28) ^ (uint)pppppppiVar13;
            uVar20 = *(uint *)(local_14c + 0x2c);
            uVar21 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                     uVar20 >> 0x18;
            lVar3 = (ulonglong)uVar21 * 0xb36a80d2;
            uVar23 = (uint)lVar3;
            uVar29 = uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
                     uVar28 >> 0x18;
            uVar21 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
                     uVar25 >> 0x18) * -0x4c957f2e +
                     uVar21 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
            uVar20 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
                     uVar23 >> 0x18) ^
                     uVar20 * 0x2df45158 +
                     uVar25 * 0x2d7f954c + (int)((ulonglong)uVar25 * 0x2df45158 >> 0x20);
            uVar23 = (uVar21 * 0x1000000 | (uVar21 >> 8 & 0xff) << 0x10 |
                      (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) ^
                     (uint)((ulonglong)uVar25 * 0x2df45158);
            lVar3 = (ulonglong)uVar29 * (ulonglong)uVar23;
            uVar21 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                     uVar20 >> 0x18;
            lVar4 = (ulonglong)~uVar22 * (ulonglong)uVar21;
            uVar25 = (uint)lVar4;
            uVar21 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
                     uVar23 >> 0x18) * ~uVar22 + uVar21 * ~uVar28 + (int)((ulonglong)lVar4 >> 0x20);
            iVar10 = *(int *)(local_14c + 0x10);
            uVar22 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
                     uVar25 >> 0x18) ^
                     uVar20 * uVar29 +
                     uVar23 * (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                               (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) +
                     (int)((ulonglong)lVar3 >> 0x20);
            uVar20 = (uVar21 * 0x1000000 | (uVar21 >> 8 & 0xff) << 0x10 |
                      (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) ^ (uint)lVar3;
            uVar21 = uVar22;
            if ((uVar23 & 0x20) != 0) {
              uVar21 = uVar20;
              uVar20 = uVar22;
            }
            uVar21 = uVar20 << (uVar23 & 0x1f) | (uVar21 >> 1) >> (~uVar23 & 0x1f);
            uVar20 = uVar21 >> 0x19;
            local_2e0 = (int *******)0x80808080;
            local_2fc = 0;
            while( true ) {
              uVar21 = *(uint *)(local_14c + 0x14) & uVar21;
              uVar23 = *(uint *)(iVar10 + uVar21);
              uVar22 = uVar23 ^ uVar20 * 0x1010101;
              uVar22 = ~uVar22 & 0x80808080 & uVar22 + 0xfefefeff;
              while (uVar22 != 0) {
                uVar25 = uVar22 >> 8;
                uVar28 = uVar22 >> 0x10;
                uVar29 = uVar22 >> 0x18;
                uVar2 = uVar22 << 0x18;
                pppppppiVar27 = (int *******)(uVar22 - 1);
                uVar22 = (uint)pppppppiVar27 & uVar22;
                uVar25 = uVar21 + ((uint)LZCOUNT(uVar2 | (uVar25 & 0xff) << 0x10 |
                                                 (uVar28 & 0xff) << 8 | uVar29) >> 3) &
                         *(uint *)(local_14c + 0x14);
                if (*(int ********)(iVar10 + -8 + uVar25 * -8) == pppppppiVar13) {
                  pppppppiVar30 = *(int ********)(iVar10 + uVar25 * -8 + -4);
                  do {
                    ppppppiVar11 = *pppppppiVar30;
                    bVar35 = (bool)hasExclusiveAccess(pppppppiVar30);
                  } while (!bVar35);
                  *pppppppiVar30 = (int ******)((int)ppppppiVar11 + 1);
                  if ((int)ppppppiVar11 < 0) goto LAB_01544500;
                  bVar35 = false;
                  *(int *)(local_14c + 8) = *(int *)(local_14c + 8) + -1;
                  goto LAB_01543a0c;
                }
              }
              if ((uVar23 & 0x80808080 & uVar23 << 1) != 0) break;
              local_2fc = local_2fc + 4;
              uVar21 = uVar21 + local_2fc;
            }
          }
          *(uint *)(local_14c + 8) = uVar17;
          do {
            ppppppiVar11 = *local_174;
            bVar35 = (bool)hasExclusiveAccess(local_174);
          } while (!bVar35);
          *local_174 = (int ******)((int)ppppppiVar11 + 1);
          if ((int)ppppppiVar11 < 0) goto LAB_01544500;
          do {
            ppppppiVar11 = *local_190;
            bVar35 = (bool)hasExclusiveAccess(local_190);
          } while (!bVar35);
          *local_190 = (int ******)((int)ppppppiVar11 + 1);
          if ((int)ppppppiVar11 < 0) goto LAB_01544500;
          if (local_170 != (int *******)0x0) {
            do {
              ppppppiVar11 = *local_170;
              bVar35 = (bool)hasExclusiveAccess(local_170);
            } while (!bVar35);
            *local_170 = (int ******)((int)ppppppiVar11 + 1);
            if ((int)ppppppiVar11 < 0) goto LAB_01544500;
          }
          local_b0 = local_174;
          local_ac = local_190;
          local_a8 = local_18c;
          pppppppiStack_a4 = local_170;
          pppppppiVar14 = (int *******)FUN_015720d8(local_150,&local_b0);
          pppppppiVar30 = pppppppiVar14;
          pppppppiVar27 = local_170;
          if (pppppppiVar14 == (int *******)0x0) {
            FUN_01543160(&local_268,&local_1c8,pppppppiVar13);
            pppppppiVar30 = local_264;
            pppppppiVar27 = local_268;
            if (local_268 != (int *******)0x2) {
              FUN_01bed4e2(&pppppppiStack_130,&local_260,0x68);
              local_134 = pppppppiVar30;
              local_138 = pppppppiVar27;
              local_1f8 = 3;
              pppppppiVar30 = (int *******)FUN_01546094(&local_268);
              local_1d4 = pppppppiVar30;
              FUN_01546110(&local_268,pppppppiVar30 + 2,&local_138);
              if (local_268 != (int *******)0x2) {
                FUN_015448f0(&local_268);
              }
              FUN_0152a2e4(&local_b0);
              FUN_014ff9e0(&local_1c8);
              goto LAB_01543a1c;
            }
            pppppppiVar30 = (int *******)FUN_01594a60(local_264);
          }
          FUN_0152a2e4(&local_b0);
          bVar35 = pppppppiVar14 == (int *******)0x0;
LAB_01543a0c:
          FUN_014ff9e0(&local_1c8);
          if (bVar35) goto LAB_015437d8;
        }
        else {
          FUN_0150343c(&local_278);
          pppppppiVar30 = (int *******)0x0;
          pppppppiVar27 = pppppppiStack_1b8;
        }
LAB_01543a1c:
        uVar32 = 0;
        local_2a0 = pppppppiVar30;
        pbVar12 = (byte *)FUN_0196b3a8(uVar6,uVar15,"itemsInlineTable",5);
        if (pbVar12 == (byte *)0x0) {
          iVar10 = 0;
        }
        else if (*(byte *)(param_2 + 0x22) < 4) {
          uVar17 = FUN_0196b3a8(uVar6,uVar15,"additionalItems",0xf);
          bVar35 = uVar17 == 0;
          iVar10 = 0;
          if (bVar35) {
            uVar17 = (uint)*pbVar12;
          }
          uVar32 = 1;
          if (bVar35 && uVar17 == 4) {
            local_318 = *(undefined4 *)(pbVar12 + 0xc);
          }
          else {
            local_318 = 0xffffffff;
          }
        }
        else {
          iVar10 = 1;
          uVar32 = 0;
        }
        pcVar8 = (char *)FUN_0196b3a8(uVar6,uVar15,"prefixItems",0xb);
        uVar17 = 0;
        if (pcVar8 != (char *)0x0) {
          bVar35 = *pcVar8 == '\x04';
          if (bVar35) {
            pcVar8 = *(char **)(pcVar8 + 0xc);
          }
          uVar17 = (uint)bVar35;
          if (bVar35) {
            local_31c = pcVar8;
          }
        }
        uVar36 = FUN_015461a0(param_2,param_3);
        iVar18 = (int)(uVar36 >> 0x20);
        if ((uVar36 & 1) == 0) {
          local_29c = iVar18;
          pppppppiVar13 = (int *******)FUN_0196b3a8(uVar6,uVar15,"allOf",5);
          if ((pppppppiVar13 == (int *******)0x0) ||
             (pppppppiVar27 = pppppppiVar13, *(char *)pppppppiVar13 != '\x04')) {
            pppppppiVar13 = (int *******)&DAT_80000000;
            local_2f8 = iVar10;
LAB_01543bb4:
            local_298 = pppppppiVar13;
            iStack_294 = local_2f8;
            pppppppiStack_290 = pppppppiVar27;
            pppppppiVar14 = (int *******)FUN_0196b3a8(uVar6,uVar15,"anyOf",5);
            if ((pppppppiVar14 == (int *******)0x0) ||
               (pppppppiVar27 = pppppppiVar14, *(char *)pppppppiVar14 != '\x04')) {
              pppppppiVar14 = (int *******)&DAT_80000000;
              local_300 = extraout_r3;
LAB_01543c34:
              iVar26 = 0x1543c60;
              local_288 = pppppppiVar14;
              local_284 = local_300;
              local_280 = pppppppiVar27;
              pcVar8 = (char *)FUN_0196b3a8(uVar6,uVar15,"oneOf",5);
              pppppppiVar27 = (int *******)&DAT_80000000;
              if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\x04')) {
LAB_01543cbc:
                param_1[0xd] = local_2d8;
                param_1[0xe] = local_2d4;
                param_1[0xf] = local_2d0;
                param_1[0x10] = pppppppiStack_2cc;
                param_1[0x11] = pppppppiStack_2c8;
                param_1[0x12] = local_2c0;
                param_1[0x13] = local_2bc;
                param_1[0x14] = local_2b8;
                param_1[0x15] = pppppppiStack_2b4;
                param_1[0x16] = pppppppiStack_2b0;
                param_1[4] = local_298;
                param_1[5] = iStack_294;
                param_1[6] = pppppppiStack_290;
                param_1[7] = local_288;
                param_1[8] = local_284;
                param_1[9] = local_280;
                *(char *)(param_1 + 0x1b) = (char)iVar10;
                param_1[0x17] = iVar7;
                param_1[10] = pppppppiVar27;
                param_1[0x18] = iVar9;
                param_1[0x19] = pppppppiVar30;
                param_1[0x1a] = iVar18;
                param_1[1] = local_318;
                param_1[2] = uVar17;
                param_1[0xb] = iVar26;
                param_1[0xc] = local_2e0;
                *param_1 = uVar32;
                param_1[3] = local_31c;
                return;
              }
              FUN_01545d70(&local_268,param_2,"oneOf",5);
              pppppppiVar27 = *(int ********)(pcVar8 + 0xc);
              if ((int *******)0xf83e0f < pppppppiVar27) {
                uVar6 = 0;
LAB_01543cac:
                    /* WARNING: Subroutine does not return */
                FUN_00664620(uVar6,local_2e0);
              }
              local_2e0 = (int *******)((int)pppppppiVar27 * 0x84);
              if (local_2e0 == (int *******)0x0) {
                iVar26 = 4;
                pppppppiVar27 = (int *******)0x0;
              }
              else {
                uVar6 = 4;
                iVar26 = FUN_01298504(local_2e0,4);
                if (iVar26 == 0) goto LAB_01543cac;
              }
              local_2e0 = (int *******)0x0;
              local_1cc = (int *******)0x0;
              local_1d4 = pppppppiVar27;
              local_1d0 = iVar26;
              if (*(int *)(pcVar8 + 0xc) != 0) {
                iVar33 = *(int *)(pcVar8 + 0xc) * 0x18;
                iVar34 = 0;
                local_2e0 = (int *******)0x0;
                pcVar8 = *(char **)(pcVar8 + 8);
                do {
                  if (*pcVar8 == '\x05') {
                    FUN_015276e8(&local_1c8,&local_268,iVar34);
                    uVar5 = FUN_016731b0(local_140,pcVar8);
                    FUN_0156aca8(&local_98,&local_1c8,pcVar8,uVar5);
                    if (local_98 == (int *******)0x0) {
                      iVar26 = FUN_01594a60();
                    }
                    else {
                      local_a8 = local_90;
                      pppppppiStack_a4 = pppppppiStack_8c;
                      pppppppiStack_a0 = pppppppiStack_88;
                      local_ac = local_94;
                      local_b0 = local_98;
                      FUN_01543160(&local_98,&local_1c8,pcVar8 + 4);
                      pppppppiVar31 = local_94;
                      pppppppiVar27 = local_98;
                      if (local_98 != (int *******)0x2) {
                        FUN_01bed4e2(&uStack_11c,&local_90,0x68);
                        local_138 = local_b0;
                        local_134 = local_ac;
                        pppppppiStack_130 = local_a8;
                        pppppppiStack_12c = pppppppiStack_a4;
                        pppppppiStack_128 = pppppppiStack_a0;
                        local_124 = pppppppiVar27;
                        local_120 = pppppppiVar31;
                        if (local_2e0 == local_1d4) {
                          FUN_0155dcc0(&local_1d4);
                          iVar26 = local_1d0;
                        }
                        FUN_01bed4e2(iVar26 + (int)local_2e0 * 0x84,&local_138,0x84);
                        local_2e0 = (int *******)((int)local_2e0 + 1);
                        local_1cc = local_2e0;
                        FUN_014ff9e0(&local_1c8);
                        goto LAB_015442f8;
                      }
                      iVar26 = FUN_01594a60(local_94);
                      FUN_01542eb4(&local_b0);
                    }
                    FUN_014ff9e0(&local_1c8);
                    FUN_014ff23c(&local_1d4);
                    FUN_014ff9e0(&local_268);
                    goto LAB_0154449c;
                  }
LAB_015442f8:
                  iVar34 = iVar34 + 1;
                  iVar33 = iVar33 + -0x18;
                  pcVar8 = pcVar8 + 0x18;
                } while (iVar33 != 0);
              }
              pppppppiVar27 = local_1d4;
              FUN_014ff9e0(&local_268);
              if (pppppppiVar27 != (int *******)&DAT_80000001) goto LAB_01543cbc;
LAB_0154449c:
              *param_1 = 2;
              param_1[1] = iVar26;
              if (pppppppiVar14 != (int *******)&DAT_80000000) {
                FUN_014ff23c(&local_288);
              }
            }
            else {
              FUN_01545d70(&local_268,param_2,"anyOf",5);
              pppppppiVar27 = (int *******)pppppppiVar14[3];
              if ((int *******)0xf83e0f < pppppppiVar27) {
                uVar24 = 0;
                pppppppiVar31 = param_2;
LAB_01543c20:
                    /* WARNING: Subroutine does not return */
                FUN_00664620(uVar24,pppppppiVar31);
              }
              pppppppiVar31 = (int *******)((int)pppppppiVar27 * 0x84);
              if (pppppppiVar31 == (int *******)0x0) {
                local_300 = 4;
                pppppppiVar27 = (int *******)0x0;
              }
              else {
                uVar24 = 4;
                local_300 = FUN_01298504(pppppppiVar31,4);
                if (local_300 == 0) goto LAB_01543c20;
              }
              local_1cc = (int *******)0x0;
              local_1d4 = pppppppiVar27;
              local_1d0 = local_300;
              if (pppppppiVar14[3] == (int ******)0x0) {
                pppppppiVar27 = (int *******)0x0;
              }
              else {
                local_2e0 = (int *******)&local_1c8;
                iVar26 = (int)pppppppiVar14[3] * 0x18;
                pppppppiVar27 = (int *******)0x0;
                iVar33 = 0;
                ppppppiVar11 = pppppppiVar14[2];
                do {
                  if (*(char *)ppppppiVar11 == '\x05') {
                    FUN_015276e8(local_2e0,&local_268,iVar33);
                    uVar5 = FUN_016731b0(local_140,ppppppiVar11);
                    FUN_0156aca8(&local_98,local_2e0,ppppppiVar11,uVar5);
                    if (local_98 == (int *******)0x0) {
                      local_300 = FUN_01594a60();
                    }
                    else {
                      local_a8 = local_90;
                      pppppppiStack_a4 = pppppppiStack_8c;
                      pppppppiStack_a0 = pppppppiStack_88;
                      local_ac = local_94;
                      local_b0 = local_98;
                      FUN_01543160(&local_98,local_2e0,ppppppiVar11 + 1);
                      pppppppiVar31 = local_94;
                      pppppppiVar14 = local_98;
                      if (local_98 != (int *******)0x2) {
                        FUN_01bed4e2(&uStack_11c,&local_90,0x68);
                        local_138 = local_b0;
                        local_134 = local_ac;
                        pppppppiStack_130 = local_a8;
                        pppppppiStack_12c = pppppppiStack_a4;
                        pppppppiStack_128 = pppppppiStack_a0;
                        local_124 = pppppppiVar14;
                        local_120 = pppppppiVar31;
                        if (pppppppiVar27 == local_1d4) {
                          FUN_0155dcc0(&local_1d4);
                          local_300 = local_1d0;
                        }
                        FUN_01bed4e2(local_300 + (int)pppppppiVar27 * 0x84,&local_138,0x84);
                        pppppppiVar27 = (int *******)((int)pppppppiVar27 + 1);
                        local_1cc = pppppppiVar27;
                        FUN_014ff9e0(local_2e0);
                        goto LAB_01544128;
                      }
                      local_300 = FUN_01594a60(local_94);
                      FUN_01542eb4(&local_b0);
                    }
                    FUN_014ff9e0(&local_1c8);
                    FUN_014ff23c(&local_1d4);
                    FUN_014ff9e0(&local_268);
                    goto LAB_01544440;
                  }
LAB_01544128:
                  iVar33 = iVar33 + 1;
                  iVar26 = iVar26 + -0x18;
                  ppppppiVar11 = ppppppiVar11 + 6;
                } while (iVar26 != 0);
              }
              pppppppiVar14 = local_1d4;
              FUN_014ff9e0(&local_268);
              if (pppppppiVar14 != (int *******)&DAT_80000001) goto LAB_01543c34;
LAB_01544440:
              *param_1 = 2;
              param_1[1] = local_300;
            }
            if (pppppppiVar13 != (int *******)&DAT_80000000) {
              FUN_014ff23c(&local_298);
            }
          }
          else {
            FUN_01545d70(&local_268,param_2,"allOf",5);
            pppppppiVar27 = (int *******)pppppppiVar13[3];
            if ((int *******)0xf83e0f < pppppppiVar27) {
              uVar24 = 0;
              pppppppiVar14 = param_2;
LAB_01543ba0:
                    /* WARNING: Subroutine does not return */
              FUN_00664620(uVar24,pppppppiVar14);
            }
            pppppppiVar14 = (int *******)((int)pppppppiVar27 * 0x84);
            if (pppppppiVar14 == (int *******)0x0) {
              local_2f8 = 4;
              pppppppiVar27 = (int *******)0x0;
            }
            else {
              uVar24 = 4;
              local_2f8 = FUN_01298504(pppppppiVar14,4);
              if (local_2f8 == 0) goto LAB_01543ba0;
            }
            local_1cc = (int *******)0x0;
            local_1d4 = pppppppiVar27;
            local_1d0 = local_2f8;
            if (pppppppiVar13[3] == (int ******)0x0) {
              pppppppiVar27 = (int *******)0x0;
            }
            else {
              local_2e0 = (int *******)&local_1c8;
              pppppppiVar27 = (int *******)0x0;
              iVar26 = (int)pppppppiVar13[3] * 0x18;
              iVar33 = 0;
              ppppppiVar11 = pppppppiVar13[2];
              do {
                if (*(char *)ppppppiVar11 == '\x05') {
                  FUN_015276e8(local_2e0,&local_268,iVar33);
                  uVar5 = FUN_016731b0(local_140,ppppppiVar11);
                  FUN_0156aca8(&local_98,local_2e0,ppppppiVar11,uVar5);
                  if (local_98 == (int *******)0x0) {
                    local_2f8 = FUN_01594a60();
                  }
                  else {
                    local_a8 = local_90;
                    pppppppiStack_a4 = pppppppiStack_8c;
                    pppppppiStack_a0 = pppppppiStack_88;
                    local_ac = local_94;
                    local_b0 = local_98;
                    FUN_01543160(&local_98,local_2e0,ppppppiVar11 + 1);
                    pppppppiVar14 = local_94;
                    pppppppiVar13 = local_98;
                    if (local_98 != (int *******)0x2) {
                      FUN_01bed4e2(&uStack_11c,&local_90,0x68);
                      local_138 = local_b0;
                      local_134 = local_ac;
                      pppppppiStack_130 = local_a8;
                      pppppppiStack_12c = pppppppiStack_a4;
                      pppppppiStack_128 = pppppppiStack_a0;
                      local_124 = pppppppiVar13;
                      local_120 = pppppppiVar14;
                      if (pppppppiVar27 == local_1d4) {
                        FUN_0155dcc0(&local_1d4);
                        local_2f8 = local_1d0;
                      }
                      FUN_01bed4e2(local_2f8 + (int)pppppppiVar27 * 0x84,&local_138,0x84);
                      pppppppiVar27 = (int *******)((int)pppppppiVar27 + 1);
                      local_1cc = pppppppiVar27;
                      FUN_014ff9e0(local_2e0);
                      goto LAB_01543f68;
                    }
                    local_2f8 = FUN_01594a60(local_94);
                    FUN_01542eb4(&local_b0);
                  }
                  FUN_014ff9e0(&local_1c8);
                  FUN_014ff23c(&local_1d4);
                  FUN_014ff9e0(&local_268);
                  goto LAB_0154437c;
                }
LAB_01543f68:
                iVar33 = iVar33 + 1;
                iVar26 = iVar26 + -0x18;
                ppppppiVar11 = ppppppiVar11 + 6;
              } while (iVar26 != 0);
            }
            pppppppiVar13 = local_1d4;
            FUN_014ff9e0(&local_268);
            if (pppppppiVar13 != (int *******)&DAT_80000001) goto LAB_01543bb4;
LAB_0154437c:
            *param_1 = 2;
            param_1[1] = local_2f8;
          }
          if (iVar18 != 0) {
            FUN_01545cac(&local_29c);
          }
        }
        else {
          *param_1 = 2;
          param_1[1] = iVar18;
        }
        if (pppppppiVar30 != (int *******)0x0) {
          DataMemoryBarrier(0xb);
          do {
            ppppppiVar11 = *pppppppiVar30;
            bVar35 = (bool)hasExclusiveAccess(pppppppiVar30);
          } while (!bVar35);
          *pppppppiVar30 = (int ******)((int)ppppppiVar11 + -1);
          if (ppppppiVar11 == (int ******)0x1) {
            DataMemoryBarrier(0xb);
            FUN_0155d4b4(&local_2a0);
          }
        }
      }
      else {
        pppppppiVar30 = (int *******)FUN_01545ee0(&local_1c8);
LAB_015437d8:
        *param_1 = 2;
        param_1[1] = pppppppiVar30;
      }
      if (iVar9 != 0) {
        FUN_01545c7c(&local_2a4);
      }
    }
    else {
      FUN_01671400(&local_268,param_2 + 0x14,*(undefined4 *)(pcVar8 + 8),
                   *(undefined4 *)(pcVar8 + 0xc));
      puVar19 = (undefined4 *)((uint)&local_268 | 4);
      local_98 = (int *******)*puVar19;
      local_94 = (int *******)puVar19[1];
      local_90 = (int *******)puVar19[2];
      pppppppiStack_8c = (int *******)puVar19[3];
      pppppppiVar27 = (int *******)puVar19[4];
      pppppppiStack_88 = pppppppiVar27;
      if (local_268 == (int *******)0x8000000a) {
        local_b0 = local_98;
        local_ac = local_94;
        local_a8 = local_90;
        pppppppiStack_a4 = pppppppiStack_8c;
        pppppppiStack_a0 = pppppppiVar27;
        if (*(char *)local_98 != '\x05') {
          FUN_0150343c((uint)&local_b0 | 4);
          goto LAB_01543544;
        }
        FUN_01543160(&local_268,param_2,local_98 + 1);
        pppppppiVar30 = local_264;
        pppppppiVar27 = local_268;
        if (local_268 == (int *******)0x2) {
          iVar9 = FUN_01594a60(local_264);
        }
        else {
          FUN_01bed4e2(&local_1c0,&local_260,0x68);
          local_1c4 = pppppppiVar30;
          local_1c8 = pppppppiVar27;
          iVar9 = FUN_01546074();
          FUN_01bed4e2(iVar9,&local_1c8,0x70);
        }
        FUN_0150343c((uint)&local_b0 | 4);
        if (pppppppiVar27 == (int *******)0x2) goto LAB_01543528;
        goto LAB_01543548;
      }
      local_120 = local_250;
      uStack_11c = uStack_24c;
      uStack_118 = uStack_248;
      uStack_114 = uStack_244;
      puVar19 = (undefined4 *)((uint)&local_138 | 4);
      local_110 = local_240;
      uStack_10c = uStack_23c;
      uStack_108 = uStack_238;
      uStack_104 = uStack_234;
      local_138 = local_268;
      *puVar19 = local_98;
      puVar19[1] = local_94;
      puVar19[2] = local_90;
      puVar19[3] = pppppppiStack_8c;
      puVar19[4] = pppppppiVar27;
      iVar9 = FUN_01545ee0();
LAB_01543528:
      *param_1 = 2;
      param_1[1] = iVar9;
    }
    if (iVar7 != 0) {
      FUN_01545c7c(&local_2a8);
    }
  }
  else {
    FUN_01671400(&local_268,param_2 + 0x14,*(undefined4 *)(pcVar8 + 8),*(undefined4 *)(pcVar8 + 0xc)
                );
    puVar19 = (undefined4 *)((uint)&local_268 | 4);
    local_98 = (int *******)*puVar19;
    local_94 = (int *******)puVar19[1];
    local_90 = (int *******)puVar19[2];
    pppppppiStack_8c = (int *******)puVar19[3];
    pppppppiVar27 = (int *******)puVar19[4];
    pppppppiStack_88 = pppppppiVar27;
    if (local_268 == (int *******)0x8000000a) {
      local_b0 = local_98;
      local_ac = local_94;
      local_a8 = local_90;
      pppppppiStack_a4 = pppppppiStack_8c;
      pppppppiStack_a0 = pppppppiVar27;
      if (*(char *)local_98 != '\x05') {
        FUN_0150343c((uint)&local_b0 | 4);
        goto LAB_0154342c;
      }
      FUN_01543160(&local_268,param_2,local_98 + 1);
      pppppppiVar30 = local_264;
      pppppppiVar27 = local_268;
      if (local_268 == (int *******)0x2) {
        iVar7 = FUN_01594a60(local_264);
      }
      else {
        FUN_01bed4e2(&local_1c0,&local_260,0x68);
        local_1c4 = pppppppiVar30;
        local_1c8 = pppppppiVar27;
        iVar7 = thunk_FUN_01be5118(0x70);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x70);
        }
        FUN_01bed4e2(iVar7,&local_1c8,0x70);
      }
      FUN_0150343c((uint)&local_b0 | 4);
      if (pppppppiVar27 == (int *******)0x2) goto LAB_01543414;
      goto LAB_01543434;
    }
    local_120 = local_250;
    uStack_11c = uStack_24c;
    uStack_118 = uStack_248;
    uStack_114 = uStack_244;
    puVar19 = (undefined4 *)((uint)&local_138 | 4);
    local_110 = local_240;
    uStack_10c = uStack_23c;
    uStack_108 = uStack_238;
    uStack_104 = uStack_234;
    local_138 = local_268;
    *puVar19 = local_98;
    puVar19[1] = local_94;
    puVar19[2] = local_90;
    puVar19[3] = pppppppiStack_8c;
    puVar19[4] = pppppppiVar27;
    iVar7 = FUN_01545ee0();
LAB_01543414:
    *param_1 = 2;
    param_1[1] = iVar7;
  }
  if (local_2c0 != (int *******)0x0) {
    FUN_01542eb4(&local_2c0);
  }
LAB_01543820:
  if (local_2d8 != (int *******)0x0) {
    FUN_01542eb4(&local_2d8);
  }
  return;
}

