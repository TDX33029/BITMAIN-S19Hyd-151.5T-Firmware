// FUN_00e6f3c8 @ 00e6f3c8 size=5804 calls_out=27 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e6f3c8(undefined4 *param_1,byte *******param_2)

{
  byte *******pppppppbVar1;
  byte *******pppppppbVar2;
  byte *******pppppppbVar3;
  byte *******pppppppbVar4;
  byte *******pppppppbVar5;
  byte *******pppppppbVar6;
  byte *******pppppppbVar7;
  byte *******pppppppbVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  byte *******pppppppbVar11;
  byte ******ppppppbVar12;
  byte *******pppppppbVar13;
  byte *******pppppppbVar14;
  byte ******ppppppbVar15;
  int iVar16;
  byte *******pppppppbVar17;
  byte *******pppppppbVar18;
  byte *******pppppppbVar19;
  byte *******pppppppbVar20;
  byte *******unaff_r9;
  byte *******unaff_r10;
  uint uVar21;
  undefined4 uVar22;
  byte *******pppppppbVar23;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  byte *******local_578;
  byte *******local_574;
  byte *******local_570;
  byte *******local_56c;
  byte *******local_568;
  byte *******local_564;
  byte *******local_560;
  byte *******local_55c;
  byte *******local_554;
  byte *******local_550;
  byte *******local_548;
  byte *******local_544;
  byte *******local_540;
  byte *******local_53c;
  byte *******local_538;
  byte *******local_534;
  byte *******local_530;
  byte *******local_52c;
  byte *******local_51c;
  undefined4 local_518;
  undefined4 uStack_514;
  byte *******local_500;
  undefined4 local_4fc;
  byte *******local_4f8;
  byte *******local_4f4;
  byte *******local_4f0;
  byte *******local_4e8;
  byte *******local_4e4;
  byte *******local_4e0;
  byte *******local_4dc;
  undefined8 local_4d8;
  byte *******local_4d0;
  byte *******local_4cc;
  byte *******local_4c8;
  byte *******local_4c4;
  byte *******local_4c0;
  byte *******local_4bc;
  byte *******local_4b8;
  byte *******local_4b4;
  byte *******local_4b0;
  byte *******local_4ac;
  byte *******local_4a8;
  byte *******local_4a0;
  byte *******local_49c;
  byte *******local_498;
  byte *******local_490;
  byte *******pppppppbStack_48c;
  byte *******pppppppbStack_488;
  undefined4 uStack_484;
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 local_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined1 auStack_458 [72];
  byte *******local_410;
  byte *******pppppppbStack_40c;
  byte *******pppppppbStack_408;
  byte *******local_400;
  byte *******local_3fc;
  byte *******local_3f8;
  undefined1 auStack_3f4 [76];
  byte *******local_3a8;
  byte *******local_3a4;
  byte *******local_358;
  byte *******local_354;
  byte *******local_350;
  byte *******local_34c [63];
  byte *******local_250;
  byte *******local_24c;
  byte *******local_248;
  byte *******pppppppbStack_244;
  byte *******pppppppbStack_240;
  byte *******pppppppbStack_23c;
  undefined4 uStack_238;
  undefined4 local_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 local_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  byte *******local_148;
  byte *******local_144;
  byte *******local_140;
  byte *******local_48;
  byte *******local_44;
  byte *******local_40;
  
  local_500 = param_2;
  if (param_2[1] == (byte ******)0x0) {
    local_248 = (byte *******)0x1;
    local_24c = (byte *******)0x2501;
    local_250 = (byte *******)0x80000000;
    pppppppbVar8 = (byte *******)thunk_FUN_016d4a50(0xc);
    if (pppppppbVar8 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
LAB_00e6f5c4:
    pppppppbVar17 = (byte *******)&local_250;
    local_24c = pppppppbVar8;
  }
  else {
    ppppppbVar12 = (byte ******)((int)param_2[1] + -1);
    uVar21 = (uint)*(byte *)*param_2;
    *param_2 = (byte ******)((int)*param_2 + 1);
    param_2[1] = ppppppbVar12;
    if (uVar21 != 0) {
      if (uVar21 == 1) {
        FUN_00efbe38(&local_250,param_2);
        if (local_250 == (byte *******)&DAT_00000001) goto LAB_00e6f5d8;
        local_3fc = pppppppbStack_244;
        local_400 = local_248;
        if (pppppppbStack_244 == (byte *******)0x0) {
          ppppppbVar12 = param_2[1];
          uVar22 = 1;
          local_3fc = (byte *******)0x0;
          pppppppbStack_244 = (byte *******)0x0;
          pppppppbVar8 = local_24c;
          unaff_r10 = local_248;
          goto joined_r0x00e6f450;
        }
        local_144 = (byte *******)FUN_00fac4cc;
        local_148 = (byte *******)&local_400;
        FUN_00600d2c(&local_358,&DAT_00584bb4,&local_148);
        local_24c = (byte *******)thunk_FUN_016d4a50(0xc);
        if (local_24c == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        goto LAB_00e6f634;
      }
      local_250 = (byte *******)&DAT_80000004;
      local_24c = (byte *******)uVar21;
      pppppppbVar8 = (byte *******)thunk_FUN_016d4a50(0xc);
      if (pppppppbVar8 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      goto LAB_00e6f5c4;
    }
    uVar22 = 0;
    pppppppbVar8 = local_24c;
joined_r0x00e6f450:
    if (ppppppbVar12 == (byte ******)0x0) {
      local_248 = (byte *******)0x1;
      local_24c = (byte *******)0x2501;
      local_250 = (byte *******)0x80000000;
      pppppppbVar8 = (byte *******)thunk_FUN_016d4a50(0xc);
      if (pppppppbVar8 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      goto LAB_00e6f5c4;
    }
    param_2[1] = (byte ******)((int)ppppppbVar12 + -1);
    local_24c = (byte *******)(uint)*(byte *)*param_2;
    *param_2 = (byte ******)((int)*param_2 + 1);
    if (local_24c == (byte *******)0x0) {
      pppppppbVar17 = (byte *******)&SUB_00000002;
      ppppppbVar12 = param_2[1];
    }
    else {
      if (local_24c != (byte *******)0x1) {
        local_250 = (byte *******)&DAT_80000004;
        pppppppbVar8 = (byte *******)thunk_FUN_016d4a50(0xc);
        if (pppppppbVar8 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        goto LAB_00e6f5c4;
      }
      local_24c = pppppppbVar8;
      FUN_00e76970(&local_250,param_2);
      if ((char)local_250 == '\x01') goto LAB_00e6f5d8;
      pppppppbVar17 = (byte *******)((uint)local_250 >> 8 & 0xff);
      ppppppbVar12 = param_2[1];
      pppppppbVar8 = local_24c;
    }
    if (ppppppbVar12 == (byte ******)0x0) {
      local_248 = (byte *******)&DAT_00000001;
      local_24c = (byte *******)0x2501;
      local_250 = (byte *******)0x80000000;
      pppppppbVar8 = (byte *******)thunk_FUN_016d4a50(0xc);
      if (pppppppbVar8 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
LAB_00e6f768:
      *pppppppbVar8 = (byte ******)local_250;
      pppppppbVar8[1] = (byte ******)local_24c;
      pppppppbVar8[2] = (byte ******)local_248;
      local_248 = pppppppbVar8;
LAB_00e6f780:
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = local_248;
      return;
    }
    ppppppbVar12 = (byte ******)((int)ppppppbVar12 + -1);
    param_2[1] = ppppppbVar12;
    local_24c = (byte *******)(uint)*(byte *)*param_2;
    *param_2 = (byte ******)((int)*param_2 + 1);
    if (local_24c == (byte *******)0x0) {
      pppppppbVar20 = (byte *******)0x0;
      pppppppbVar18 = (byte *******)&DAT_00000005;
      local_24c = pppppppbVar8;
    }
    else {
      if (local_24c != (byte *******)0x1) {
        local_250 = (byte *******)&DAT_80000004;
        pppppppbVar8 = (byte *******)thunk_FUN_016d4a50(0xc);
        if (pppppppbVar8 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        goto LAB_00e6f768;
      }
      local_24c = pppppppbVar8;
      FUN_00efc920(&local_250,param_2);
      if (local_250 == (byte *******)&DAT_00000005 && local_24c == (byte *******)0x0)
      goto LAB_00e6f780;
      local_358 = pppppppbStack_244;
      local_354 = pppppppbStack_240;
      local_350 = pppppppbStack_23c;
      ppppppbVar12 = param_2[1];
      pppppppbVar18 = local_250;
      pppppppbVar20 = local_24c;
      unaff_r9 = local_248;
    }
    pppppppbVar8 = (byte *******)&local_4f8;
    local_4f8 = local_358;
    local_4f4 = local_354;
    local_4f0 = local_350;
    local_4fc = 10;
    if (ppppppbVar12 == (byte ******)0x0) {
      local_248 = (byte *******)0x1;
      local_24c = (byte *******)0x2501;
      local_250 = (byte *******)0x80000000;
      pppppppbVar8 = (byte *******)thunk_FUN_016d4a50(0xc);
      if (pppppppbVar8 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      goto LAB_00e6f5c4;
    }
    ppppppbVar12 = (byte ******)((int)ppppppbVar12 + -1);
    param_2[1] = ppppppbVar12;
    pppppppbVar14 = (byte *******)((int)*param_2 + 1);
    uVar21 = (uint)*(byte *)*param_2;
    *param_2 = (byte ******)pppppppbVar14;
    if (uVar21 == 0) {
      pppppppbVar23 = (byte *******)0x0;
      pppppppbVar13 = (byte *******)&SUB_00000002;
      local_4bc = pppppppbVar17;
      local_4ac = pppppppbVar18;
      local_4c4 = pppppppbVar20;
LAB_00e6f7e8:
      local_4b0 = local_544;
      local_4b4 = local_53c;
      local_4b8 = local_540;
      local_4c8 = local_538;
      local_4cc = local_51c;
      local_4d0 = local_52c;
      local_4dc = local_530;
      local_4e0 = local_534;
      local_4e8 = pppppppbVar13;
      local_4e4 = pppppppbVar23;
      local_4d8 = unaff_d8;
      local_4c0 = pppppppbVar8;
      local_4a8 = pppppppbVar14;
      if (ppppppbVar12 == (byte ******)0x0) {
        local_248 = (byte *******)&DAT_00000001;
        local_24c = (byte *******)0x2501;
        local_250 = (byte *******)&DAT_80000000;
        pppppppbVar8 = (byte *******)thunk_FUN_016d4a50(0xc);
        if (pppppppbVar8 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
LAB_00e6f9e0:
        pppppppbVar17 = (byte *******)&local_250;
LAB_00e6f9e8:
        ppppppbVar12 = pppppppbVar17[1];
        ppppppbVar15 = pppppppbVar17[2];
        *pppppppbVar8 = *pppppppbVar17;
        pppppppbVar8[1] = ppppppbVar12;
        pppppppbVar8[2] = ppppppbVar15;
LAB_00e6f9f8:
        *param_1 = 3;
        param_1[1] = 0;
        param_1[2] = pppppppbVar8;
      }
      else {
        ppppppbVar12 = (byte ******)((int)ppppppbVar12 + -1);
        param_2[1] = ppppppbVar12;
        pppppppbVar8 = (byte *******)(uint)*(byte *)*param_2;
        *param_2 = (byte ******)((int)*param_2 + 1);
        if (pppppppbVar8 != (byte *******)0x0) {
          if (pppppppbVar8 != (byte *******)&DAT_00000001) {
            local_250 = (byte *******)&DAT_80000004;
            local_24c = pppppppbVar8;
            pppppppbVar8 = (byte *******)thunk_FUN_016d4a50(0xc);
            if (pppppppbVar8 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0xc);
            }
            goto LAB_00e6f9e0;
          }
          FUN_00efbe38(&local_358,param_2);
          pppppppbVar14 = local_350;
          if (local_358 == (byte *******)&DAT_00000001) {
            pppppppbVar8 = local_354;
          }
          else {
            local_3fc = local_34c[0];
            local_400 = local_350;
            if (local_34c[0] != (byte *******)0x0) {
              local_248 = (byte *******)&DAT_005674cc;
              local_250 = (byte *******)&local_400;
              pppppppbStack_244 = (byte *******)&LAB_00fac484;
              local_24c = (byte *******)FUN_00fac4cc;
              FUN_00600d2c(&local_148,&DAT_0056c1eb,&local_250);
              pppppppbVar8 = (byte *******)thunk_FUN_016d4a50(0xc);
              if (pppppppbVar8 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,0xc);
              }
              pppppppbVar17 = (byte *******)&local_148;
              goto LAB_00e6f9e8;
            }
            pppppppbVar8 = (byte *******)0x5555;
            if (local_350 < (byte *******)0x5555) {
              pppppppbVar8 = local_350;
            }
            if (local_350 == (byte *******)0x0) {
              local_51c = (byte *******)&DAT_00000008;
              pppppppbVar8 = (byte *******)0x0;
            }
            else {
              local_51c = (byte *******)thunk_FUN_016d4a50((int)pppppppbVar8 * 0x30);
              if (local_51c == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(8,(int)pppppppbVar8 * 0x30);
              }
            }
            puVar9 = (undefined4 *)((uint)&local_250 | 4);
            iVar16 = 0x28;
            local_140 = (byte *******)0x0;
            local_148 = pppppppbVar8;
            local_144 = local_51c;
            while( true ) {
              local_530 = local_140;
              if (pppppppbVar14 == local_140) break;
              if (param_2[1] < (byte ******)0x8) {
                *puVar9 = 0x2501;
                puVar9[1] = 8;
                local_250 = (byte *******)&DAT_80000000;
                pppppppbVar8 = (byte *******)thunk_FUN_016d4a50(0xc);
                if (pppppppbVar8 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600874(4,0xc);
                }
                goto LAB_00e70540;
              }
              unaff_d8 = *(undefined8 *)*param_2;
              param_2[1] = param_2[1] + -2;
              *param_2 = *param_2 + 2;
              FUN_00ea9914(&local_250,param_2);
              pppppppbVar1 = pppppppbStack_244;
              pppppppbVar3 = local_248;
              pppppppbVar23 = local_24c;
              pppppppbVar13 = local_250;
              pppppppbVar8 = pppppppbVar3;
              if (local_250 == (byte *******)&SUB_00000002 && local_24c == (byte *******)0x0) {
LAB_00e7055c:
                if (local_148 != (byte *******)0x0) {
                  thunk_FUN_016d3fb4(local_51c);
                }
                goto LAB_00e6f9f8;
              }
              FUN_00efbe38(&local_250,param_2);
              pppppppbVar5 = local_248;
              pppppppbVar8 = local_24c;
              if (local_250 == (byte *******)&DAT_00000001) goto LAB_00e7055c;
              if (pppppppbStack_244 != (byte *******)0x0) {
                local_3fc = (byte *******)&DAT_0187c504;
                local_350 = local_248;
                local_34c[0] = pppppppbStack_244;
                local_358 = (byte *******)CONCAT31(local_358._1_3_,1);
                local_400 = (byte *******)&local_3a8;
                local_248 = (byte *******)&local_400;
                local_250 = (byte *******)&local_358;
                pppppppbStack_244 = (byte *******)&LAB_0115452c;
                local_24c = (byte *******)&LAB_01579e10;
                pppppppbVar8 = (byte *******)FUN_00e94644(&DAT_0058e458,&local_250);
                goto LAB_00e7055c;
              }
              FUN_00efbe38(&local_250,param_2);
              pppppppbVar2 = local_248;
              pppppppbVar8 = local_24c;
              if (local_250 == (byte *******)&DAT_00000001) goto LAB_00e7055c;
              local_3a4 = pppppppbStack_244;
              local_3a8 = local_248;
              if (pppppppbStack_244 != (byte *******)0x0) {
                local_3fc = (byte *******)FUN_00fac4cc;
                local_400 = (byte *******)&local_3a8;
                FUN_00600d2c(&local_358,&DAT_00584bb4,&local_400);
                pppppppbVar8 = (byte *******)thunk_FUN_016d4a50(0xc);
                if (pppppppbVar8 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600874(4,0xc);
                }
                pppppppbVar17 = (byte *******)&local_358;
LAB_00e70548:
                ppppppbVar12 = pppppppbVar17[1];
                ppppppbVar15 = pppppppbVar17[2];
                *pppppppbVar8 = *pppppppbVar17;
                pppppppbVar8[1] = ppppppbVar12;
                pppppppbVar8[2] = ppppppbVar15;
                goto LAB_00e7055c;
              }
              if (&DAT_00000005 < local_248) {
                local_3fc = (byte *******)&DAT_018ab990;
                local_400 = (byte *******)&DAT_0187bed8;
                local_350 = local_248;
                local_34c[0] = (byte *******)0x0;
                local_358 = (byte *******)CONCAT31(local_358._1_3_,1);
                local_248 = (byte *******)&local_400;
                local_250 = (byte *******)&local_358;
                pppppppbStack_244 = (byte *******)&LAB_0115452c;
                local_24c = (byte *******)&LAB_01579e10;
                pppppppbVar8 = (byte *******)FUN_00e94644(&DAT_0058e458,&local_250);
                goto LAB_00e7055c;
              }
              ppppppbVar12 = param_2[1];
              if (ppppppbVar12 == (byte ******)0x0) {
                *puVar9 = 0x2501;
                puVar9[1] = 1;
                local_250 = (byte *******)&DAT_80000000;
                pppppppbVar8 = (byte *******)thunk_FUN_016d4a50(0xc);
                if (pppppppbVar8 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600874(4,0xc);
                }
LAB_00e70540:
                pppppppbVar17 = (byte *******)&local_250;
                goto LAB_00e70548;
              }
              ppppppbVar15 = *param_2;
              pppppppbVar8 = (byte *******)(uint)*(byte *)ppppppbVar15;
              *param_2 = (byte ******)((int)ppppppbVar15 + 1);
              param_2[1] = (byte ******)((int)ppppppbVar12 - 1);
              pppppppbVar19 = (byte *******)0x0;
              if (pppppppbVar8 != (byte *******)0x0) {
                if (pppppppbVar8 == (byte *******)&DAT_00000001) {
                  if (ppppppbVar12 < (byte ******)0x5) {
                    *puVar9 = 0x2501;
                    puVar9[1] = 4;
                    local_250 = (byte *******)&DAT_80000000;
                    pppppppbVar8 = (byte *******)thunk_FUN_016d4a50(0xc);
                    if (pppppppbVar8 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00600874(4,0xc);
                    }
                  }
                  else {
                    param_2[1] = (byte ******)((int)ppppppbVar12 - 5U);
                    local_550 = *(byte ********)((int)ppppppbVar15 + 1);
                    *param_2 = (byte ******)((int)ppppppbVar15 + 5);
                    if ((byte ******)0x3 < (byte ******)((int)ppppppbVar12 - 5U)) {
                      pppppppbVar19 = (byte *******)&DAT_00000001;
                      *param_2 = (byte ******)((int)ppppppbVar15 + 9);
                      param_2[1] = (byte ******)((int)ppppppbVar12 - 9);
                      local_554 = *(byte ********)((int)ppppppbVar15 + 5);
                      goto LAB_00e6ff08;
                    }
                    *puVar9 = 0x2501;
                    puVar9[1] = 4;
                    local_250 = (byte *******)&DAT_80000000;
                    pppppppbVar8 = (byte *******)thunk_FUN_016d4a50(0xc);
                    if (pppppppbVar8 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00600874(4,0xc);
                    }
                  }
                }
                else {
                  local_250 = (byte *******)&DAT_80000004;
                  local_24c = pppppppbVar8;
                  pppppppbVar8 = (byte *******)thunk_FUN_016d4a50(0xc);
                  if (pppppppbVar8 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600874(4,0xc);
                  }
                }
                goto LAB_00e70540;
              }
LAB_00e6ff08:
              if (((uint)pppppppbVar13 & 3) == 2) break;
              pppppppbVar8 = pppppppbVar3;
              if (pppppppbVar13 == (byte *******)0x3) goto LAB_00e7055c;
              if (local_530 == local_148) {
                FUN_00edfcb4(&local_148);
                local_51c = local_144;
              }
              pbVar10 = (byte *)((int)local_51c + iVar16);
              *pbVar10 = (byte)pppppppbVar2;
              iVar16 = iVar16 + 0x30;
              local_518 = (undefined4)unaff_d8;
              uStack_514 = (undefined4)((ulonglong)unaff_d8 >> 0x20);
              *(byte ********)(pbVar10 + -8) = local_554;
              *(byte ********)(pbVar10 + -4) = pppppppbVar5;
              *(byte ********)(pbVar10 + -0x28) = pppppppbVar13;
              *(undefined4 *)(pbVar10 + -0x18) = local_518;
              *(undefined4 *)(pbVar10 + -0x14) = uStack_514;
              *(byte ********)(pbVar10 + -0x24) = pppppppbVar23;
              local_140 = (byte *******)((int)local_530 + 1);
              *(byte ********)(pbVar10 + -0x10) = pppppppbVar19;
              *(byte ********)(pbVar10 + -0xc) = local_550;
              *(byte ********)(pbVar10 + -0x20) = pppppppbVar3;
              *(byte ********)(pbVar10 + -0x1c) = pppppppbVar1;
              local_548 = pppppppbVar19;
            }
            if (-0x7fffffff < (int)local_148) {
              ppppppbVar12 = param_2[1];
              pppppppbVar8 = local_24c;
              pppppppbVar14 = local_148;
              goto joined_r0x00e703c4;
            }
            pppppppbVar8 = local_51c;
          }
          goto LAB_00e6f9f8;
        }
        pppppppbVar14 = (byte *******)&DAT_80000000;
        pppppppbVar8 = local_24c;
joined_r0x00e703c4:
        if (ppppppbVar12 == (byte ******)0x0) {
          local_248 = (byte *******)&DAT_00000001;
          local_24c = (byte *******)0x2501;
          local_250 = (byte *******)&DAT_80000000;
          pppppppbVar8 = (byte *******)thunk_FUN_016d4a50(0xc);
          if (pppppppbVar8 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0xc);
          }
LAB_00e703f0:
          pppppppbVar17 = (byte *******)&local_250;
LAB_00e703f4:
          ppppppbVar12 = pppppppbVar17[1];
          ppppppbVar15 = pppppppbVar17[2];
          *pppppppbVar8 = *pppppppbVar17;
          pppppppbVar8[1] = ppppppbVar12;
          pppppppbVar8[2] = ppppppbVar15;
LAB_00e70404:
          *param_1 = 3;
          param_1[1] = 0;
          param_1[2] = pppppppbVar8;
        }
        else {
          param_2[1] = (byte ******)((int)ppppppbVar12 + -1);
          local_24c = (byte *******)(uint)*(byte *)*param_2;
          *param_2 = (byte ******)((int)*param_2 + 1);
          if (local_24c != (byte *******)0x0) {
            if (local_24c != (byte *******)&DAT_00000001) {
              local_250 = (byte *******)&DAT_80000004;
              pppppppbVar8 = (byte *******)thunk_FUN_016d4a50(0xc);
              if (pppppppbVar8 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,0xc);
              }
              goto LAB_00e703f0;
            }
            local_24c = pppppppbVar8;
            FUN_00efbe38(&local_250,param_2);
            if (local_250 == (byte *******)&DAT_00000001) {
              pppppppbVar8 = local_24c;
            }
            else {
              local_3fc = pppppppbStack_244;
              local_400 = local_248;
              if (pppppppbStack_244 != (byte *******)0x0) {
                local_144 = (byte *******)FUN_00fac4cc;
                local_148 = (byte *******)&local_400;
                FUN_00600d2c(&local_358,&DAT_00584bb4,&local_148);
                pppppppbVar8 = (byte *******)thunk_FUN_016d4a50(0xc);
                if (pppppppbVar8 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600874(4,0xc);
                }
                pppppppbVar17 = (byte *******)&local_358;
                goto LAB_00e703f4;
              }
              local_548._0_1_ = SUB41(local_248,0);
              if (&SUB_00000002 < local_248) {
                local_34c[0] = pppppppbStack_244;
                local_250 = (byte *******)&local_358;
                local_350 = local_248;
                local_144 = (byte *******)&DAT_018ab990;
                local_358 = (byte *******)CONCAT31(local_358._1_3_,1);
                local_148 = (byte *******)&DAT_0187d080;
                pppppppbStack_244 = (byte *******)&LAB_0115452c;
                local_24c = (byte *******)&LAB_01579e10;
                local_248 = (byte *******)&local_148;
                pppppppbVar8 = (byte *******)FUN_00e94644(&DAT_0058e458,&local_250);
              }
              else {
                FUN_00ea9914(&local_250,param_2);
                local_52c = local_250;
                local_534 = local_24c;
                if (local_250 != (byte *******)&SUB_00000002 || local_24c != (byte *******)0x0) {
                  local_560 = local_248;
                  local_564 = pppppppbStack_244;
                  FUN_00ea9914(&local_250,param_2);
                  local_568 = local_250;
                  local_56c = local_24c;
                  if (local_250 != (byte *******)&SUB_00000002 || local_24c != (byte *******)0x0) {
                    unaff_d8 = CONCAT44(pppppppbStack_244,local_248);
                    FUN_00ea9914(&local_250,param_2);
                    local_574 = local_250;
                    local_578 = local_24c;
                    if (local_250 != (byte *******)&SUB_00000002 || local_24c != (byte *******)0x0)
                    {
                      unaff_d9 = CONCAT44(pppppppbStack_244,local_248);
                      goto LAB_00e6fba8;
                    }
                  }
                }
                pppppppbVar8 = local_248;
              }
            }
            goto LAB_00e70404;
          }
          local_534 = (byte *******)0x0;
          local_52c = (byte *******)&SUB_00000002;
          local_24c = pppppppbVar8;
LAB_00e6fba8:
          local_4fc = 7;
          FUN_00ea9acc(&local_250,param_2);
          pppppppbVar8 = local_24c;
          if (local_250 == (byte *******)0x80000001) goto LAB_00e70404;
          local_498 = local_248;
          local_49c = local_24c;
          local_4a0 = local_250;
          FUN_00f12a90(&local_250,&local_500);
          pppppppbVar23 = local_248;
          pppppppbVar13 = local_24c;
          pppppppbVar8 = local_250;
          local_538 = local_248;
          if (local_250 == (byte *******)&DAT_00000004 && local_24c == (byte *******)0x0) {
LAB_00e6fc08:
            param_1[1] = 0;
            *param_1 = 3;
            param_1[2] = local_538;
          }
          else {
            local_490 = pppppppbStack_244;
            pppppppbStack_48c = pppppppbStack_240;
            pppppppbStack_488 = pppppppbStack_23c;
            uStack_484 = uStack_238;
            local_480 = local_234;
            uStack_47c = uStack_230;
            uStack_478 = uStack_22c;
            uStack_474 = uStack_228;
            local_470 = local_224;
            uStack_46c = uStack_220;
            uStack_468 = uStack_21c;
            uStack_464 = uStack_218;
            uStack_460 = uStack_214;
            if (local_250 == (byte *******)0x3 && local_24c == (byte *******)0x0) {
              local_538 = (byte *******)FUN_00e94830(7,&DAT_0187c544,&DAT_018ab990);
              goto LAB_00e6fc08;
            }
            FUN_00f12cd4(&local_250,&local_500);
            pppppppbVar5 = local_248;
            pppppppbVar1 = local_24c;
            pppppppbVar3 = local_250;
            local_53c = local_248;
            if (local_250 == (byte *******)&DAT_00000009 && local_24c == (byte *******)0x0) {
LAB_00e700a0:
              param_1[1] = 0;
              *param_1 = 3;
              param_1[2] = local_53c;
            }
            else {
              FUN_016dd1aa(auStack_458,&pppppppbStack_244,0x44);
              if (pppppppbVar3 == (byte *******)&DAT_00000008 && pppppppbVar1 == (byte *******)0x0)
              {
                local_53c = (byte *******)FUN_00e94830(8,&DAT_0187c544,&DAT_018ab990);
                goto LAB_00e700a0;
              }
              FUN_00f13108(&local_250,&local_500);
              pppppppbVar7 = local_248;
              pppppppbVar19 = local_24c;
              pppppppbVar2 = local_250;
              local_550 = local_248;
              if (local_250 == (byte *******)&DAT_0000000d && local_24c == (byte *******)0x0) {
LAB_00e701f4:
                param_1[1] = 0;
                *param_1 = 3;
                param_1[2] = local_550;
              }
              else {
                local_410 = pppppppbStack_244;
                pppppppbStack_40c = pppppppbStack_240;
                pppppppbStack_408 = pppppppbStack_23c;
                if (local_250 == (byte *******)&DAT_0000000c && local_24c == (byte *******)0x0) {
                  local_550 = (byte *******)FUN_00e94830(9,&DAT_0187c544,&DAT_018ab990);
                  goto LAB_00e701f4;
                }
                FUN_00f134f0(&local_250,&local_500);
                pppppppbVar11 = local_248;
                pppppppbVar6 = local_24c;
                pppppppbVar4 = local_250;
                local_55c = local_248;
                if (local_250 == (byte *******)&DAT_00000004 && local_24c == (byte *******)0x0) {
LAB_00e70480:
                  param_1[1] = 0;
                  *param_1 = 3;
                  param_1[2] = local_55c;
                }
                else {
                  FUN_016dd1aa(&local_3a8,&pppppppbStack_244,0x4c);
                  if (pppppppbVar4 == (byte *******)0x3 && pppppppbVar6 == (byte *******)0x0) {
                    local_55c = (byte *******)FUN_00e94830(10,&DAT_0187c544,&DAT_018ab990);
                    goto LAB_00e70480;
                  }
                  FUN_016dd1aa(auStack_3f4,&local_3a8,0x4c);
                  local_3fc = pppppppbVar6;
                  local_400 = pppppppbVar4;
                  local_3f8 = pppppppbVar11;
                  FUN_00f1399c(&local_250,&local_500);
                  pppppppbVar11 = local_248;
                  pppppppbVar6 = local_24c;
                  pppppppbVar4 = local_250;
                  local_570 = local_248;
                  if (local_250 == (byte *******)&DAT_00000004 && local_24c == (byte *******)0x0) {
LAB_00e70624:
                    param_1[1] = 0;
                    *param_1 = 3;
                    param_1[2] = local_570;
                  }
                  else {
                    FUN_016dd1aa(&local_148,&pppppppbStack_244,0xfc);
                    if (pppppppbVar4 == (byte *******)0x3 && pppppppbVar6 == (byte *******)0x0) {
                      local_570 = (byte *******)FUN_00e94830(0xb,&DAT_0187c544,&DAT_018ab990);
                      goto LAB_00e70624;
                    }
                    FUN_016dd1aa(local_34c,&local_148,0xfc);
                    local_358 = pppppppbVar4;
                    local_354 = pppppppbVar6;
                    local_350 = pppppppbVar11;
                    FUN_00f13cd8(&local_250,&local_500);
                    pppppppbVar11 = local_24c;
                    if (local_250 == (byte *******)0x80000001) {
LAB_00e706a4:
                      *param_1 = 3;
                      param_1[1] = 0;
                      param_1[2] = pppppppbVar11;
                    }
                    else {
                      if (local_250 == (byte *******)&DAT_80000000) {
                        pppppppbVar11 = (byte *******)FUN_00e94830(0xc,&DAT_0187c544,&DAT_018ab990);
                        goto LAB_00e706a4;
                      }
                      local_40 = local_248;
                      local_44 = local_24c;
                      local_48 = local_250;
                      FUN_00f13ff4(&local_250,&local_500);
                      local_570 = local_24c;
                      if (local_250 != (byte *******)0x80000001) {
                        if (local_250 != (byte *******)&DAT_80000000) {
                          FUN_016dd1aa(param_1,&local_4e8,0x48);
                          param_1[0xb1] = local_51c;
                          param_1[0xb2] = local_530;
                          param_1[0xb3] = local_4a0;
                          param_1[0xb4] = local_49c;
                          param_1[0xb5] = local_498;
                          param_1[0xb0] = pppppppbVar14;
                          FUN_016dd1aa(param_1 + 0x30,&local_400,0x58);
                          FUN_016dd1aa(param_1 + 0x46,&local_358,0x108);
                          param_1[0x16] = local_568;
                          param_1[0x1a] = local_574;
                          param_1[0x15] = local_564;
                          param_1[0x17] = local_56c;
                          *(undefined1 *)(param_1 + 0x1e) = local_548._0_1_;
                          param_1[0xac] = local_40;
                          param_1[0x1b] = local_578;
                          *(undefined8 *)(param_1 + 0x18) = unaff_d8;
                          *(undefined8 *)(param_1 + 0x1c) = unaff_d9;
                          param_1[0xaa] = local_48;
                          param_1[0xab] = local_44;
                          param_1[0x8b] = local_4f8;
                          param_1[0x8c] = local_4f4;
                          param_1[0x8d] = local_4f0;
                          param_1[0x23] = local_490;
                          param_1[0x24] = pppppppbStack_48c;
                          param_1[0x25] = pppppppbStack_488;
                          param_1[0x26] = uStack_484;
                          param_1[0x27] = local_480;
                          param_1[0x28] = uStack_47c;
                          param_1[0x29] = uStack_478;
                          param_1[0x2a] = uStack_474;
                          param_1[0x2b] = local_470;
                          param_1[0x2c] = uStack_46c;
                          param_1[0x2d] = uStack_468;
                          param_1[0x2e] = uStack_464;
                          param_1[0x2f] = uStack_460;
                          FUN_016dd1aa(param_1 + 0x91,auStack_458,0x44);
                          param_1[0x12] = local_52c;
                          param_1[0x13] = local_534;
                          param_1[0x20] = pppppppbVar8;
                          param_1[0x88] = pppppppbVar18;
                          param_1[0x89] = pppppppbVar20;
                          param_1[0x8e] = pppppppbVar3;
                          param_1[0x8f] = pppppppbVar1;
                          param_1[0xa2] = pppppppbVar2;
                          param_1[0xa3] = pppppppbVar19;
                          param_1[0x14] = local_560;
                          param_1[0x22] = pppppppbVar23;
                          param_1[0x90] = pppppppbVar5;
                          *(char *)(param_1 + 0xb6) = (char)pppppppbVar17;
                          param_1[0xad] = local_250;
                          param_1[0xae] = local_24c;
                          param_1[0xaf] = local_248;
                          param_1[0xa4] = pppppppbVar7;
                          param_1[0x21] = pppppppbVar13;
                          param_1[0x8a] = unaff_r9;
                          param_1[0xa5] = local_410;
                          param_1[0xa6] = pppppppbStack_40c;
                          param_1[0xa7] = pppppppbStack_408;
                          param_1[0xa8] = uVar22;
                          param_1[0xa9] = unaff_r10;
                          return;
                        }
                        local_570 = (byte *******)FUN_00e94830(0xd,&DAT_0187c544,&DAT_018ab990);
                      }
                      param_1[1] = 0;
                      *param_1 = 3;
                      param_1[2] = local_570;
                      FUN_00e7ac08(&local_48);
                    }
                    if (pppppppbVar4 != (byte *******)&SUB_00000002 ||
                        pppppppbVar6 != (byte *******)0x0) {
                      FUN_005c38e4(&local_358);
                    }
                  }
                  FUN_005c7b40(&local_400);
                }
              }
            }
          }
          FUN_00e7af9c(&local_4a0);
        }
        if (((uint)pppppppbVar14 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_51c);
        }
      }
      if (local_4e8 == (byte *******)&SUB_00000002 && local_4e4 == (byte *******)0x0) {
        return;
      }
      if (local_4d0 == (byte *******)&DAT_80000000 || local_4d0 == (byte *******)0x0) {
        if (local_4c4 != (byte *******)&DAT_80000000 && local_4c4 != (byte *******)0x0)
        goto LAB_00e6fa7c;
      }
      else {
        thunk_FUN_016d3fb4(local_4cc);
        if (local_4c4 != (byte *******)&DAT_80000000 && local_4c4 != (byte *******)0x0) {
LAB_00e6fa7c:
          thunk_FUN_016d3fb4(local_4c0);
          if (local_4b8 == (byte *******)&DAT_80000000 || local_4b8 == (byte *******)0x0) {
            return;
          }
          goto LAB_00e6fa4c;
        }
      }
      if (local_4b8 == (byte *******)&DAT_80000000 || local_4b8 == (byte *******)0x0) {
        return;
      }
LAB_00e6fa4c:
      thunk_FUN_016d3fb4(local_4b4);
      return;
    }
    if (uVar21 != 1) {
      local_250 = (byte *******)&DAT_80000004;
      local_24c = (byte *******)uVar21;
      pppppppbVar8 = (byte *******)thunk_FUN_016d4a50(0xc);
      if (pppppppbVar8 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      goto LAB_00e6f5c4;
    }
    local_3a8 = param_2;
    FUN_00efbe38(&local_250,param_2);
    pppppppbVar3 = local_248;
    if (local_250 == (byte *******)&DAT_00000001) goto LAB_00e6f5d8;
    local_3fc = pppppppbStack_244;
    local_400 = local_248;
    if (pppppppbStack_244 == (byte *******)0x0) {
      local_548 = local_248;
      FUN_00efbe38(&local_250,param_2);
      pppppppbVar14 = local_248;
      if (local_250 == (byte *******)&DAT_00000001) goto LAB_00e6f5d8;
      local_3fc = pppppppbStack_244;
      local_400 = local_248;
      if (pppppppbStack_244 == (byte *******)0x0) {
        if ((byte ******)0x7 < param_2[1]) {
          param_2[1] = param_2[1] + -2;
          unaff_d8 = *(undefined8 *)*param_2;
          *param_2 = *param_2 + 2;
          FUN_00ea9914(&local_250,param_2);
          pppppppbVar23 = local_24c;
          pppppppbVar13 = local_250;
          if (local_250 == (byte *******)&SUB_00000002 && local_24c == (byte *******)0x0) {
            local_24c = local_248;
            goto LAB_00e6f5d8;
          }
          local_554 = local_24c;
          local_530 = pppppppbStack_244;
          local_534 = local_248;
          FUN_00ea971c(&local_250,param_2);
          pppppppbVar5 = local_24c;
          pppppppbVar1 = local_250;
          local_51c = local_24c;
          local_52c = local_250;
          if (local_250 != (byte *******)0x80000001) {
            local_538 = local_248;
            local_3a4 = (byte *******)&DAT_00000001;
            FUN_00ea971c(&local_250,param_2);
            local_4bc = local_248;
            pppppppbVar8 = local_24c;
            pppppppbVar2 = local_250;
            local_550 = local_24c;
            if (local_250 != (byte *******)0x80000001) {
              local_560 = local_248;
              FUN_00f12a28(&local_250,&local_3a8);
              local_53c = local_24c;
              local_540 = local_250;
              if (local_250 != (byte *******)0x80000002) {
                if (local_250 != (byte *******)0x80000001) {
                  local_544 = local_248;
                  ppppppbVar12 = param_2[1];
                  local_4ac = pppppppbVar3;
                  local_4c4 = pppppppbVar2;
                  goto LAB_00e6f7e8;
                }
                local_53c = (byte *******)FUN_00e94830(6,&DAT_0187c52c,&DAT_018ab990);
              }
              if (((uint)pppppppbVar2 & 0x7fffffff) != 0) {
                thunk_FUN_016d3fb4(pppppppbVar8);
              }
              local_550 = local_53c;
            }
            if (((uint)pppppppbVar1 & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(pppppppbVar5);
            }
            local_51c = local_550;
          }
          local_24c = local_51c;
          goto LAB_00e6f5d8;
        }
        local_248 = (byte *******)0x8;
        local_24c = (byte *******)0x2501;
        local_250 = (byte *******)0x80000000;
        pppppppbVar8 = (byte *******)thunk_FUN_016d4a50(0xc);
        if (pppppppbVar8 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        goto LAB_00e6f5c4;
      }
      local_144 = (byte *******)FUN_00fac4cc;
      local_148 = (byte *******)&local_400;
      FUN_00600d2c(&local_358,&DAT_00584bb4,&local_148);
      local_24c = (byte *******)thunk_FUN_016d4a50(0xc);
      if (local_24c == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
    }
    else {
      local_144 = (byte *******)FUN_00fac4cc;
      local_148 = (byte *******)&local_400;
      FUN_00600d2c(&local_358,&DAT_00584bb4,&local_148);
      local_24c = (byte *******)thunk_FUN_016d4a50(0xc);
      if (local_24c == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
    }
LAB_00e6f634:
    pppppppbVar17 = (byte *******)&local_358;
  }
  ppppppbVar12 = pppppppbVar17[1];
  ppppppbVar15 = pppppppbVar17[2];
  *local_24c = *pppppppbVar17;
  local_24c[1] = ppppppbVar12;
  local_24c[2] = ppppppbVar15;
LAB_00e6f5d8:
  *param_1 = 3;
  param_1[1] = 0;
  param_1[2] = local_24c;
  return;
}

