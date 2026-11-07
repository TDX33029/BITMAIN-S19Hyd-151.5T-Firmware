// FUN_006147d8 @ 006147d8 size=6688 calls_out=13 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006147d8(undefined4 *param_1,int param_2,int param_3,byte *******param_4,byte ******param_5
                 ,byte ******param_6)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  bool bVar5;
  int *piVar6;
  undefined4 *puVar7;
  byte *******pppppppbVar8;
  ushort *puVar9;
  byte *******pppppppbVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
  byte *******pppppppbVar14;
  byte ******ppppppbVar15;
  byte *pbVar16;
  byte ******ppppppbVar17;
  undefined4 uVar18;
  uint uVar19;
  byte *******pppppppbVar20;
  byte ******ppppppbVar21;
  uint uVar22;
  undefined4 uVar23;
  byte *******pppppppbVar24;
  byte ******ppppppbVar25;
  uint uVar26;
  byte ******ppppppbVar27;
  ushort *puVar28;
  byte *******pppppppbVar29;
  int iVar30;
  undefined1 uVar31;
  uint *puVar32;
  uint uVar33;
  uint uVar34;
  byte *******pppppppbVar35;
  byte *******pppppppbVar36;
  uint uVar37;
  byte *******pppppppbVar38;
  byte *******unaff_r11;
  byte *******pppppppbVar39;
  uint uVar40;
  byte ******local_2f0;
  byte ******local_2ec;
  byte ******local_2e8;
  byte ******local_2e4;
  byte ******local_2e0;
  byte ******local_2dc;
  int local_2d8;
  byte ******local_2cc;
  byte *******local_2c8;
  byte *******local_2c4;
  uint local_2c0;
  byte ******local_2bc;
  undefined *local_2b4;
  undefined *local_2b0;
  int local_2ac;
  byte *******local_2a4;
  uint local_2a0;
  byte ******local_29c;
  byte *******local_298;
  uint local_290;
  byte *******local_28c;
  byte *******local_288;
  byte ******local_26c;
  byte *******local_268;
  byte *******local_264;
  byte *******local_260;
  byte *******local_25c;
  byte *******local_258;
  int local_254;
  byte *******local_250;
  byte *******local_24c;
  byte *******local_248;
  byte *******local_244;
  byte ******local_240;
  byte *******pppppppbStack_23c;
  byte *******pppppppbStack_238;
  byte *******pppppppbStack_234;
  byte *******pppppppbStack_230;
  byte *******local_22c;
  byte ******ppppppbStack_228;
  byte *******pppppppbStack_224;
  byte *******pppppppbStack_220;
  byte *******pppppppbStack_21c;
  byte *******local_218;
  byte *******pppppppbStack_214;
  byte ******ppppppbStack_210;
  byte *******pppppppbStack_20c;
  byte *******pppppppbStack_208;
  byte *******pppppppbStack_204;
  undefined1 auStack_200 [96];
  undefined4 local_1a0;
  int local_19c;
  undefined4 local_198;
  byte ******local_140;
  byte *******pppppppbStack_13c;
  byte *******pppppppbStack_138;
  byte *******pppppppbStack_134;
  byte *******pppppppbStack_130;
  byte *******local_12c;
  byte ******ppppppbStack_128;
  byte *******pppppppbStack_124;
  byte *******pppppppbStack_120;
  byte *******pppppppbStack_11c;
  byte *******local_118;
  byte ******ppppppbStack_110;
  byte *******pppppppbStack_10c;
  byte *******pppppppbStack_108;
  byte ******local_e0;
  byte *******pppppppbStack_dc;
  byte *******pppppppbStack_d8;
  byte *******pppppppbStack_d4;
  byte *******pppppppbStack_d0;
  byte *******local_cc;
  byte ******ppppppbStack_c8;
  byte *******pppppppbStack_c4;
  byte *******pppppppbStack_c0;
  byte *******pppppppbStack_bc;
  byte *******local_b8;
  byte ******ppppppbStack_b0;
  byte *******pppppppbStack_ac;
  byte *******pppppppbStack_a8;
  byte ******local_80;
  byte *******local_7c;
  byte *******local_78 [2];
  byte *******local_70 [2];
  byte ******local_68;
  byte *******local_64;
  byte *******local_60;
  byte *******pppppppbStack_5c;
  byte *******local_58;
  byte *******local_54;
  byte ******local_50;
  byte *******pppppppbStack_4c;
  byte *******local_48;
  byte *******local_44;
  byte *******local_40;
  byte *******pppppppbStack_3c;
  byte ******local_38;
  byte *******local_34;
  byte *******local_30;
  byte *******pppppppbStack_2c;
  
  if (param_2 != 0) {
    do {
      puVar32 = (uint *)(param_2 + 0xb0);
      uVar22 = 0xffffffff;
      uVar40 = (uint)*(ushort *)(param_2 + 0x10e);
      iVar30 = uVar40 << 3;
      do {
        if (iVar30 == 0) goto LAB_0061485c;
        ppppppbVar25 = (byte ******)*puVar32;
        uVar37 = puVar32[1];
        iVar30 = iVar30 + -8;
        uVar22 = uVar22 + 1;
        puVar32 = puVar32 + 2;
        uVar37 = (uint)(uVar37 == 0 && (param_6 <= ppppppbVar25) <= uVar37) -
                 (uint)((uint)(ppppppbVar25 <= param_6) <= -uVar37);
      } while (uVar37 == 1);
      uVar40 = uVar22;
      if ((uVar37 & 0xff) == 0) {
        pcVar12 = (char *)(param_2 + uVar22 * 0x10);
        if (*pcVar12 != 'O') {
          uVar18 = *(undefined4 *)(pcVar12 + 4);
          uVar23 = *(undefined4 *)(pcVar12 + 8);
          uVar13 = *(undefined4 *)(pcVar12 + 0xc);
          *param_1 = *(undefined4 *)pcVar12;
          param_1[1] = uVar18;
          param_1[2] = uVar23;
          param_1[3] = uVar13;
          return;
        }
        piVar6 = *(int **)(pcVar12 + 4);
        do {
          iVar30 = *piVar6;
          bVar5 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar5);
        *piVar6 = iVar30 + 1;
        if (iVar30 < 0) {
          software_udf(0xfdee,0x6148b4);
          return;
        }
        uVar13 = *(undefined4 *)(pcVar12 + 4);
        *(undefined1 *)param_1 = 0x4f;
        param_1[1] = uVar13;
        return;
      }
LAB_0061485c:
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      param_2 = *(int *)(param_2 + uVar40 * 4 + 0x110);
    } while( true );
  }
  if (param_6 <= param_5) {
    local_2d8 = (int)param_5 - (int)param_6;
    local_264 = (byte *******)((int)param_4 + (int)param_6);
    puVar7 = (undefined4 *)((uint)&local_80 | 4);
    local_2ac = 8;
    local_254 = 8;
    local_244 = (byte *******)0x0;
    local_24c = (byte *******)0x0;
    local_250 = (byte *******)0x0;
    local_258 = (byte *******)0x0;
    local_2b0 = &DAT_018ac46c;
    local_2b4 = &DAT_00413115;
    local_29c = (byte ******)0x0;
    local_2a0 = 0;
    local_2a4 = (byte *******)0x0;
    local_298 = (byte *******)0x0;
    local_288 = (byte *******)0x0;
    local_268 = (byte *******)0x0;
    local_290 = 0;
LAB_006149a8:
    uVar22 = 0;
    param_4 = (byte *******)0x0;
    local_25c = (byte *******)0x0;
    iVar30 = local_2d8;
    uVar40 = 0;
    pppppppbVar29 = local_264;
    do {
      unaff_r11 = pppppppbVar29;
      iVar11 = iVar30;
      if (iVar11 == 0) {
        param_4 = (byte *******)((int)local_264 + local_2d8);
        local_260._0_1_ = 0x13;
        local_268 = (byte *******)0x0;
        unaff_r11 = param_4;
        goto LAB_00615e00;
      }
      uVar37 = (uint)*(byte *)unaff_r11;
      local_260._0_1_ = 6;
      if ((uVar22 == 0x3f) && (1 < uVar37)) {
        param_4 = local_28c;
        goto LAB_00615e00;
      }
      uVar19 = uVar22 & 0x3f;
      uVar33 = uVar37 & 0x7f;
      uVar26 = uVar19 - 0x20;
      uVar22 = uVar22 + 7;
      uVar40 = uVar33 << uVar19;
      if (-1 < (int)uVar26) {
        uVar40 = 0;
      }
      param_4 = (byte *******)(uVar40 | (uint)param_4);
      uVar40 = uVar33 >> (0x20 - uVar19 & 0xff);
      pppppppbVar29 = (byte *******)((int)unaff_r11 + 1);
      if (-1 < (int)uVar26) {
        uVar40 = uVar33 << (uVar26 & 0xff);
      }
      local_25c = (byte *******)(uVar40 | (uint)local_25c);
      iVar30 = iVar11 + -1;
      uVar40 = uVar37;
    } while (0x7fffffff < (uint)(int)(char)*(byte *)unaff_r11);
    if (param_4 != (byte *******)0x0 || local_25c != (byte *******)0x0) {
      if (iVar11 + -1 == 0) {
LAB_00615edc:
        param_4 = pppppppbVar29;
        uVar40 = 0;
        local_260._0_1_ = 0x13;
        local_268 = (byte *******)0x0;
        unaff_r11 = param_4;
      }
      else {
        local_264 = (byte *******)((int)unaff_r11 + 2);
        iVar30 = iVar11 + -2;
        local_2bc = (byte ******)((int)(char)*(byte *)pppppppbVar29 & 0x7f);
        if ((char)*(byte *)pppppppbVar29 < 0) {
          pppppppbVar29 = local_264;
          if (iVar30 == 0) goto LAB_00615edc;
          local_264 = (byte *******)((int)unaff_r11 + 3);
          local_2bc = (byte ******)
                      ((uint)local_2bc | ((int)(char)*(byte *)((int)unaff_r11 + 2) & 0x7fU) << 7);
          iVar30 = iVar11 + -3;
          if ((uint)(int)(char)*(byte *)((int)unaff_r11 + 2) < 0x80000000) goto LAB_00614adc;
          pppppppbVar29 = local_264;
          if (iVar30 == 0) goto LAB_00615edc;
          bVar1 = *(byte *)local_264;
          if (bVar1 < 4) {
            local_264 = unaff_r11 + 1;
            local_2bc = (byte ******)((uint)local_2bc | (uint)bVar1 << 0xe);
            iVar30 = iVar11 + -4;
            goto LAB_00614adc;
          }
          uVar40 = 0;
          local_268 = (byte *******)0x0;
          unaff_r11 = local_264;
        }
        else {
LAB_00614adc:
          local_268 = (byte *******)0x0;
          unaff_r11 = local_264;
          if (((uint)local_2bc & 0xffff) == 0) {
            uVar40 = 0;
            local_260._0_1_ = 8;
          }
          else {
            uVar40 = local_290;
            if (iVar30 == 0) {
              local_260._0_1_ = 0x13;
              local_26c = local_2cc;
              param_4 = local_264;
            }
            else {
              bVar1 = *(byte *)local_264;
              if (bVar1 < 2) {
                uVar40 = 0;
                local_60 = (byte *******)0x0;
                local_50 = (byte ******)0x0;
                local_68 = (byte ******)0x0;
                local_64 = (byte *******)0x0;
                local_40 = (byte *******)0x0;
                local_30 = (byte *******)0x0;
                local_58 = (byte *******)0x0;
                local_54 = (byte *******)0x0;
                local_80 = (byte ******)0x0;
                local_7c = (byte *******)0x0;
                local_48 = (byte *******)0x0;
                local_44 = (byte *******)0x0;
                local_78[0] = (byte *******)0x0;
                local_78[1] = (byte *******)0x0;
                local_38 = (byte ******)0x0;
                local_34 = (byte *******)0x0;
                local_70[0] = (byte *******)0x0;
                local_260 = (byte *******)(iVar30 - 1);
                local_26c = (byte ******)0x0;
                local_264 = (byte *******)((int)local_264 + 1);
                pppppppbVar29 = (byte *******)&local_24c;
LAB_00614b84:
                pppppppbVar24 = local_70[1];
                pppppppbVar10 = local_70[0];
                unaff_r11 = local_78[1];
                pppppppbVar38 = local_7c;
                ppppppbVar25 = local_80;
                pppppppbVar8 = local_248;
                pppppppbVar14 = local_24c;
                if (local_260 == (byte *******)0x0) {
                  pppppppbVar39 = local_264;
LAB_00615e90:
                  local_264 = pppppppbVar39;
                  uVar40 = 0;
                  local_260._0_1_ = 0x13;
                  local_268 = (byte *******)0x0;
                  local_2c0 = (uint)local_26c;
                  pppppppbVar39 = local_264;
                  goto LAB_00615dcc;
                }
                iVar30 = (int)local_260 - 1;
                pppppppbVar39 = (byte *******)((int)local_264 + 1);
                uVar22 = (int)(char)*(byte *)local_264 & 0x7f;
                if ((uint)(int)(char)*(byte *)local_264 < 0x80000000) {
LAB_00614bd4:
                  local_26c = (byte ******)uVar22;
                  if (uVar22 == 0) goto LAB_00614f00;
                }
                else {
                  if (iVar30 == 0) goto LAB_00615e90;
                  pppppppbVar39 = (byte *******)((int)local_264 + 2);
                  uVar22 = uVar22 | ((int)(char)*(byte *)((int)local_264 + 1) & 0x7fU) << 7;
                  iVar30 = (int)local_260 - 2;
                  if (-1 < (char)*(byte *)((int)local_264 + 1)) goto LAB_00614bd4;
                  if (iVar30 == 0) goto LAB_00615e90;
                  if (3 < *(byte *)pppppppbVar39) goto LAB_00616044;
                  uVar19 = (uint)*(byte *)pppppppbVar39 << 0xe;
                  local_26c = (byte ******)(uVar22 | uVar19);
                  iVar30 = (int)local_260 - 3;
                  pppppppbVar39 = (byte *******)((int)local_264 + 3);
                  if (uVar22 == 0 && (uVar19 & 0xffff) == 0) goto LAB_00614f00;
                }
                if (iVar30 == 0) {
                  local_264 = pppppppbVar39;
LAB_00615eb8:
                  local_260._0_1_ = 0x13;
                  pppppppbVar39 = local_264;
LAB_00615ed0:
                  uVar40 = 0;
                  local_268 = (byte *******)0x0;
                  goto LAB_00615dcc;
                }
                pppppppbVar14 = (byte *******)((int)pppppppbVar39 + 1);
                local_260 = (byte *******)(iVar30 - 1);
                uVar40 = (int)(char)*(byte *)pppppppbVar39 & 0x7f;
                uVar22 = uVar40;
                if (0x7fffffff < (uint)(int)(char)*(byte *)pppppppbVar39) {
                  local_264 = pppppppbVar14;
                  if (local_260 == (byte *******)0x0) goto LAB_00615eb8;
                  uVar40 = uVar40 | ((int)(char)*(byte *)((int)pppppppbVar39 + 1) & 0x7fU) << 7;
                  pppppppbVar14 = (byte *******)((int)pppppppbVar39 + 2);
                  local_260 = (byte *******)(iVar30 - 2);
                  uVar22 = uVar40;
                  if (-1 < (char)*(byte *)((int)pppppppbVar39 + 1)) goto joined_r0x00614ce0;
                  local_264 = pppppppbVar14;
                  if (local_260 == (byte *******)0x0) goto LAB_00615eb8;
                  if (*(byte *)pppppppbVar14 < 4) {
                    uVar37 = (uint)*(byte *)pppppppbVar14 << 0xe;
                    uVar22 = uVar40 | uVar37;
                    local_260 = (byte *******)(iVar30 - 3);
                    pppppppbVar14 = (byte *******)((int)pppppppbVar39 + 3);
                    uVar40 = uVar40 | uVar37 & 0xffff;
                    goto joined_r0x00614ce0;
                  }
                  local_260._0_1_ = 6;
                  local_264 = param_4;
                  goto LAB_00615ed0;
                }
joined_r0x00614ce0:
                local_2c0 = uVar22;
                if (uVar40 == 0x21) {
                  uVar40 = 0;
                  uVar22 = 0;
                  pppppppbVar8 = (byte *******)0x0;
                  pppppppbVar38 = (byte *******)0x0;
                  pppppppbVar29 = pppppppbVar14;
                  uVar37 = (uint)local_260;
                  do {
                    if (uVar37 == 0) {
                      local_264 = (byte *******)((int)pppppppbVar14 + (int)local_260);
                      local_268 = (byte *******)0x0;
                      local_260._0_1_ = 0x13;
                      pppppppbVar29 = local_264;
                      goto LAB_00615dc8;
                    }
                    local_264 = (byte *******)((int)pppppppbVar29 + 1);
                    bVar2 = *(byte *)pppppppbVar29;
                    uVar40 = (uint)bVar2;
                    if ((uVar22 == 0x3f) && (uVar40 != 0x7f && uVar40 != 0)) {
                      local_260._0_1_ = 7;
                      local_264 = local_2c4;
                      goto LAB_00615dc4;
                    }
                    uVar34 = uVar22 & 0x3f;
                    uVar26 = uVar40 & 0x7f;
                    uVar33 = uVar34 - 0x20;
                    uVar37 = uVar37 - 1;
                    uVar19 = uVar26 << uVar34;
                    uVar22 = uVar22 + 7;
                    if (-1 < (int)uVar33) {
                      uVar19 = 0;
                    }
                    pppppppbVar8 = (byte *******)(uVar19 | (uint)pppppppbVar8);
                    uVar19 = uVar26 >> (0x20 - uVar34 & 0xff);
                    if (-1 < (int)uVar33) {
                      uVar19 = uVar26 << (uVar33 & 0xff);
                    }
                    pppppppbVar38 = (byte *******)(uVar19 | (uint)pppppppbVar38);
                    pppppppbVar29 = local_264;
                  } while ((char)bVar2 < '\0');
                  if (((int)uVar22 < 0x40) && (0x3f < uVar40)) {
                    uVar40 = 0xffffffff;
                    uVar19 = (uVar22 & 0x3f) - 0x20;
                    if (-1 < (int)uVar19) {
                      uVar40 = -1 << (uVar19 & 0xff);
                    }
                    uVar22 = -1 << (uVar22 & 0x3f);
                    if (-1 < (int)uVar19) {
                      uVar22 = 0;
                    }
                    pppppppbVar8 = (byte *******)((uint)pppppppbVar8 | uVar22);
                    local_288 = (byte *******)((uint)pppppppbVar38 | uVar40);
                  }
                  else {
                    local_288 = pppppppbVar38;
                  }
                  uVar22 = (uint)pppppppbVar8 >> 0x10;
                  uVar40 = ((uint)pppppppbVar8 & 0xffff) >> 8;
                  pppppppbVar29 = local_288;
                  local_2c4 = pppppppbVar8;
                  local_260 = (byte *******)uVar37;
                }
                else {
                  if (uVar40 == 0) {
                    local_260._0_1_ = 9;
                    uVar40 = 0;
                    local_268 = (byte *******)0x0;
                    local_2c0 = (uint)local_26c;
                    local_264 = param_4;
                    goto LAB_00615dcc;
                  }
                  pppppppbVar8 = (byte *******)0x0;
                  uVar40 = 0;
                  uVar22 = 0;
                  pppppppbVar29 = (byte *******)0x0;
                  local_264 = pppppppbVar14;
                }
                local_268 = (byte *******)(((uint)local_26c & 0xffff) + local_2c0 * 0x10000);
                ppppppbVar25 = (byte ******)
                               (uVar22 << 0x10 | uVar40 << 8 | (uint)pppppppbVar8 & 0xff);
                uVar37 = uVar22;
                if (local_80 == (byte ******)0x1) {
                  if (local_78[1] == local_7c) {
                    FUN_01010b4c(puVar7);
                  }
                  pppppppbVar14 = local_78[0] + (int)unaff_r11 * 4;
                  *pppppppbVar14 = ppppppbVar25;
                  pppppppbVar14[2] = (byte ******)local_268;
                  pppppppbVar14[1] = (byte ******)pppppppbVar29;
                  pppppppbVar14[3] = (byte ******)pppppppbVar14;
                  local_78[1] = (byte *******)((int)unaff_r11 + 1);
                }
                else if (local_7c == (byte *******)&DAT_00000005) {
                  iVar30 = thunk_FUN_016d4a50(0x50);
                  if (iVar30 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600af4(8,0x50);
                  }
                  local_1a0 = 5;
                  local_19c = iVar30;
                  FUN_016dd1aa(iVar30,local_78,0x50);
                  local_198 = 5;
                  FUN_01010b4c(&local_1a0);
                  *puVar7 = local_1a0;
                  puVar7[1] = local_19c;
                  puVar7[2] = 6;
                  *(undefined4 *)(local_19c + 0x5c) = 6;
                  local_198 = 6;
                  *(byte *******)(local_19c + 0x50) = ppppppbVar25;
                  *(byte ********)(local_19c + 0x54) = pppppppbVar29;
                  *(byte ********)(local_19c + 0x58) = local_268;
                  local_80 = (byte ******)0x1;
                }
                else {
                  if (&DAT_00000004 < local_7c) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa4a4(local_7c,5,&DAT_018822f4);
                  }
                  local_78[(int)local_7c * 4] = (byte *******)ppppppbVar25;
                  local_70[(int)local_7c * 4 + 1] = local_7c;
                  local_70[(int)local_7c * 4 + -1] = pppppppbVar29;
                  local_70[(int)local_7c * 4] = local_268;
                  local_7c = (byte *******)((int)local_7c + 1);
                }
                goto LAB_00614b84;
              }
              local_260._0_1_ = 10;
              local_26c = local_2cc;
            }
          }
        }
      }
      goto LAB_00615e00;
    }
    local_68 = (byte ******)local_248;
    local_64 = local_244;
    uVar31 = (undefined1)local_2a0;
    local_260._0_1_ = SUB41(local_2a4,0);
    if (local_258 != (byte *******)&DAT_80000000) {
      local_78[0] = local_258;
      local_7c = (byte *******)0x1;
      local_80 = (byte ******)0x1;
      local_70[1] = local_24c;
      local_70[0] = (byte *******)CONCAT31(CONCAT21((short)local_29c,uVar31),local_260._0_1_);
      local_78[1] = (byte *******)local_254;
      puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x20);
      if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x20);
      }
      *puVar7 = local_80;
      puVar7[1] = local_7c;
      puVar7[2] = local_78[0];
      puVar7[3] = local_78[1];
      puVar7[4] = local_70[0];
      puVar7[5] = local_70[1];
      puVar7[6] = local_68;
      puVar7[7] = local_64;
      *(undefined1 *)param_1 = 0x4f;
      param_1[1] = puVar7;
      return;
    }
    param_5 = local_29c;
    local_268 = local_244;
    param_4 = local_248;
    unaff_r11 = local_24c;
    goto LAB_00615e6c;
  }
  uVar31 = 0;
  local_260._0_1_ = 0x13;
  local_268 = (byte *******)0x0;
  goto LAB_00615e6c;
LAB_0061537c:
  puVar9 = (ushort *)((int)pppppppbVar39 + 0x4d6);
  if (uVar22 < 0xb) {
    pppppppbVar29 = pppppppbVar39 + uVar40 * 2;
    if (uVar40 < uVar22) {
      FUN_016dd52c(pppppppbVar29 + 2,pppppppbVar29,(uVar22 - uVar40) * 8);
      *pppppppbVar29 = (byte ******)param_4;
      pppppppbVar29[1] = (byte ******)local_25c;
      local_80 = local_240;
      local_7c = pppppppbStack_23c;
      local_78[0] = pppppppbStack_238;
      local_78[1] = pppppppbStack_234;
      local_70[0] = pppppppbStack_230;
      local_70[1] = local_22c;
      local_68 = ppppppbStack_228;
      local_64 = pppppppbStack_224;
      local_60 = pppppppbStack_220;
      pppppppbStack_5c = pppppppbStack_21c;
      local_58 = local_218;
      local_54 = pppppppbStack_214;
      local_50 = ppppppbStack_210;
      pppppppbStack_4c = pppppppbStack_20c;
      local_48 = pppppppbStack_208;
      local_44 = pppppppbStack_204;
      FUN_016dd52c(pppppppbVar39 + uVar40 * 0x1a + 0x30,pppppppbVar39 + uVar40 * 0x1a + 0x16,
                   (uVar22 - uVar40) * 0x68);
    }
    else {
      *pppppppbVar29 = (byte ******)param_4;
      pppppppbVar29[1] = (byte ******)local_25c;
      local_80 = local_e0;
      local_7c = pppppppbStack_dc;
      local_78[0] = pppppppbStack_d8;
      local_78[1] = pppppppbStack_d4;
      local_70[0] = pppppppbStack_d0;
      local_70[1] = local_cc;
      local_68 = ppppppbStack_c8;
      local_64 = pppppppbStack_c4;
      local_60 = pppppppbStack_c0;
      pppppppbStack_5c = pppppppbStack_bc;
      local_58 = local_b8;
      local_54 = pppppppbStack_214;
      local_50 = ppppppbStack_b0;
      pppppppbStack_4c = pppppppbStack_ac;
      local_48 = pppppppbStack_a8;
      local_44 = pppppppbStack_204;
    }
    pppppppbVar39[uVar40 * 0x1a + 0x16] = ppppppbVar25;
    pppppppbVar39[uVar40 * 0x1a + 0x17] = (byte ******)pppppppbVar38;
    pppppppbVar39[uVar40 * 0x1a + 0x18] = ppppppbVar27;
    pppppppbVar39[uVar40 * 0x1a + 0x1a] = (byte ******)pppppppbVar10;
    pppppppbVar39[uVar40 * 0x1a + 0x19] = (byte ******)unaff_r11;
    pppppppbVar39[uVar40 * 0x1a + 0x1b] = (byte ******)pppppppbVar24;
    pppppppbVar39[uVar40 * 0x1a + 0x1c] = local_80;
    pppppppbVar39[uVar40 * 0x1a + 0x1d] = (byte ******)local_7c;
    pppppppbVar39[uVar40 * 0x1a + 0x1e] = (byte ******)local_78[0];
    pppppppbVar39[uVar40 * 0x1a + 0x1f] = (byte ******)local_78[1];
    pppppppbVar39[uVar40 * 0x1a + 0x20] = (byte ******)local_70[0];
    pppppppbVar39[uVar40 * 0x1a + 0x21] = (byte ******)local_70[1];
    pppppppbVar39[uVar40 * 0x1a + 0x22] = local_68;
    pppppppbVar39[uVar40 * 0x1a + 0x23] = (byte ******)local_64;
    pppppppbVar39[uVar40 * 0x1a + 0x24] = (byte ******)local_60;
    pppppppbVar39[uVar40 * 0x1a + 0x25] = (byte ******)pppppppbStack_5c;
    pppppppbVar39[uVar40 * 0x1a + 0x26] = (byte ******)local_58;
    pppppppbVar39[uVar40 * 0x1a + 0x27] = (byte ******)local_54;
    pppppppbVar39[uVar40 * 0x1a + 0x28] = local_50;
    pppppppbVar39[uVar40 * 0x1a + 0x29] = (byte ******)pppppppbStack_4c;
    pppppppbVar39[uVar40 * 0x1a + 0x2a] = (byte ******)local_48;
    pppppppbVar39[uVar40 * 0x1a + 0x2b] = (byte ******)local_44;
    pppppppbVar39[uVar40 * 0x1a + 0x2c] = (byte ******)param_4;
    pppppppbVar39[uVar40 * 0x1a + 0x2d] = (byte ******)local_25c;
    *(byte *)((int)pppppppbVar39 + uVar40 * 0x68 + 0xba) = bVar1;
    *(undefined2 *)(pppppppbVar39 + uVar40 * 0x1a + 0x2e) = uVar4;
    *puVar9 = uVar3 + 1;
  }
  else {
    uVar22 = 4;
    bVar5 = false;
    if (4 < uVar40) {
      if (uVar40 == 5) {
        uVar22 = 5;
      }
      else {
        if (uVar40 == 6) {
          uVar22 = 5;
          uVar40 = 0;
        }
        else {
          uVar40 = uVar40 - 7;
          uVar22 = 6;
        }
        bVar5 = true;
      }
    }
    local_260 = (byte *******)thunk_FUN_016d4a50(0x4d8);
    if (local_260 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x4d8);
    }
    pbVar16 = (byte *)((int)local_260 + 0x4d6);
    pbVar16[0] = 0;
    pbVar16[1] = 0;
    local_260[0x134] = (byte ******)0x0;
    local_2ec = pppppppbVar39[uVar22 * 2];
    local_2f0 = (pppppppbVar39 + uVar22 * 2)[1];
    uVar37 = (uint)*puVar9 + ~uVar22;
    *(short *)pbVar16 = (short)uVar37;
    pppppppbVar29 = pppppppbVar39 + uVar22 * 0x1a + 0x16;
    local_2e0 = *pppppppbVar29;
    local_2e8 = pppppppbVar29[2];
    local_2e4 = pppppppbVar29[1];
    FUN_016dd1aa(&local_80,pppppppbVar29 + 3,0x5c);
    if (0xb < uVar37) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar37,0xb,&DAT_018ac47c);
    }
    FUN_016dd1aa(local_260,pppppppbVar39 + (uVar22 + 1) * 2,uVar37 * 8);
    FUN_016dd1aa(local_260 + 0x16,pppppppbVar39 + (uVar22 + 1) * 0x1a + 0x16,uVar37 * 0x68);
    *puVar9 = (ushort)uVar22;
    FUN_016dd1aa(&local_e0,&local_80,0x5c);
    pppppppbVar29 = local_260;
    if (!bVar5) {
      pppppppbVar29 = pppppppbVar39;
    }
    uVar3 = *(ushort *)((int)pppppppbVar29 + 0x4d6);
    pppppppbVar20 = pppppppbVar29 + uVar40 * 2;
    if (uVar40 < uVar3) {
      iVar30 = uVar3 - uVar40;
      FUN_016dd52c(pppppppbVar20 + 2,pppppppbVar20,iVar30 * 8);
      local_80 = local_240;
      local_7c = pppppppbStack_23c;
      local_78[0] = pppppppbStack_238;
      local_78[1] = pppppppbStack_234;
      local_70[0] = pppppppbStack_230;
      local_70[1] = local_22c;
      local_68 = ppppppbStack_228;
      local_64 = pppppppbStack_224;
      local_60 = pppppppbStack_220;
      pppppppbStack_5c = pppppppbStack_21c;
      local_58 = local_218;
      local_54 = pppppppbStack_214;
      local_50 = ppppppbStack_210;
      pppppppbStack_4c = pppppppbStack_20c;
      local_48 = pppppppbStack_208;
      local_44 = pppppppbStack_204;
      FUN_016dd52c(pppppppbVar29 + uVar40 * 0x1a + 0x30,pppppppbVar29 + uVar40 * 0x1a + 0x16,
                   iVar30 * 0x68);
    }
    else {
      local_80 = local_240;
      local_7c = pppppppbStack_23c;
      local_78[0] = pppppppbStack_238;
      local_78[1] = pppppppbStack_234;
      local_70[0] = pppppppbStack_230;
      local_70[1] = local_22c;
      local_68 = ppppppbStack_228;
      local_64 = pppppppbStack_224;
      local_60 = pppppppbStack_220;
      pppppppbStack_5c = pppppppbStack_21c;
      local_58 = local_218;
      local_54 = pppppppbStack_214;
      local_50 = ppppppbStack_210;
      pppppppbStack_4c = pppppppbStack_20c;
      local_48 = pppppppbStack_208;
      local_44 = pppppppbStack_204;
    }
    *pppppppbVar20 = (byte ******)param_4;
    pppppppbVar20[1] = (byte ******)local_25c;
    pppppppbVar29[uVar40 * 0x1a + 0x16] = ppppppbVar25;
    pppppppbVar29[uVar40 * 0x1a + 0x17] = (byte ******)pppppppbVar38;
    pppppppbVar29[uVar40 * 0x1a + 0x18] = ppppppbVar27;
    pppppppbVar29[uVar40 * 0x1a + 0x1a] = (byte ******)pppppppbVar10;
    pppppppbVar29[uVar40 * 0x1a + 0x19] = (byte ******)unaff_r11;
    pppppppbVar29[uVar40 * 0x1a + 0x1b] = (byte ******)pppppppbVar24;
    pppppppbVar29[uVar40 * 0x1a + 0x1c] = local_80;
    pppppppbVar29[uVar40 * 0x1a + 0x1d] = (byte ******)local_7c;
    pppppppbVar29[uVar40 * 0x1a + 0x1e] = (byte ******)local_78[0];
    pppppppbVar29[uVar40 * 0x1a + 0x1f] = (byte ******)local_78[1];
    pppppppbVar29[uVar40 * 0x1a + 0x20] = (byte ******)local_70[0];
    pppppppbVar29[uVar40 * 0x1a + 0x21] = (byte ******)local_70[1];
    pppppppbVar29[uVar40 * 0x1a + 0x22] = local_68;
    pppppppbVar29[uVar40 * 0x1a + 0x23] = (byte ******)local_64;
    pppppppbVar29[uVar40 * 0x1a + 0x24] = (byte ******)local_60;
    pppppppbVar29[uVar40 * 0x1a + 0x25] = (byte ******)pppppppbStack_5c;
    pppppppbVar29[uVar40 * 0x1a + 0x26] = (byte ******)local_58;
    pppppppbVar29[uVar40 * 0x1a + 0x27] = (byte ******)local_54;
    pppppppbVar29[uVar40 * 0x1a + 0x28] = local_50;
    pppppppbVar29[uVar40 * 0x1a + 0x29] = (byte ******)pppppppbStack_4c;
    pppppppbVar29[uVar40 * 0x1a + 0x2a] = (byte ******)local_48;
    pppppppbVar29[uVar40 * 0x1a + 0x2b] = (byte ******)local_44;
    *(byte *)((int)pppppppbVar29 + uVar40 * 0x68 + 0xba) = bVar1;
    pppppppbVar29[uVar40 * 0x1a + 0x2c] = (byte ******)param_4;
    *(undefined2 *)(pppppppbVar29 + uVar40 * 0x1a + 0x2e) = uVar4;
    pppppppbVar29[uVar40 * 0x1a + 0x2d] = (byte ******)local_25c;
    *(ushort *)((int)pppppppbVar29 + 0x4d6) = uVar3 + 1;
    FUN_016dd1aa(&local_140,&local_e0,0x5c);
    if (local_2e0 != (byte ******)0x2) {
      FUN_016dd1aa(auStack_200,&local_140,0x5c);
      if ((byte *******)pppppppbVar39[0x134] == (byte *******)0x0) {
        local_2c8 = (byte *******)0x0;
      }
      else {
        local_2c8 = (byte *******)0x0;
        pppppppbVar29 = (byte *******)pppppppbVar39[0x134];
        local_2dc = local_2e8;
        do {
          pppppppbVar38 = pppppppbVar29;
          uVar22 = (uint)*(ushort *)(pppppppbVar39 + 0x135);
          puVar9 = (ushort *)((int)pppppppbVar38 + 0x4d6);
          uVar40 = (uint)*puVar9;
          if (uVar40 < 0xb) {
            pppppppbVar29 = pppppppbVar38 + uVar22 * 2;
            uVar37 = uVar22 + 1;
            if (uVar22 < uVar40) {
              iVar30 = uVar40 - uVar22;
              FUN_016dd52c(pppppppbVar38 + uVar37 * 2,pppppppbVar29,iVar30 * 8);
              *pppppppbVar29 = local_2ec;
              pppppppbVar29[1] = local_2f0;
              pppppppbVar29 = pppppppbVar38 + uVar22 * 0x1a + 0x16;
              FUN_016dd52c(pppppppbVar38 + uVar37 * 0x1a + 0x16,pppppppbVar29,iVar30 * 0x68);
              pppppppbVar38[uVar22 * 0x1a + 0x16] = local_2e0;
              pppppppbVar29[1] = local_2e4;
              pppppppbVar29[2] = local_2dc;
              FUN_016dd1aa(pppppppbVar29 + 3,auStack_200,0x5c);
              FUN_016dd52c(pppppppbVar38 + uVar22 + 0x138,pppppppbVar38 + uVar22 + 0x137,iVar30 * 4)
              ;
            }
            else {
              *pppppppbVar29 = local_2ec;
              pppppppbVar29[1] = local_2f0;
              pppppppbVar38[uVar22 * 0x1a + 0x16] = local_2e0;
              pppppppbVar38[uVar22 * 0x1a + 0x17] = local_2e4;
              pppppppbVar38[uVar22 * 0x1a + 0x18] = local_2dc;
              FUN_016dd1aa(pppppppbVar38 + uVar22 * 0x1a + 0x19,auStack_200,0x5c);
            }
            *puVar9 = (ushort)(uVar40 + 1);
            pppppppbVar38[uVar22 + 0x137] = (byte ******)local_260;
            if (uVar37 < uVar40 + 2) {
              do {
                ppppppbVar25 = pppppppbVar38[uVar22 + 0x137];
                uVar22 = uVar22 + 1;
                *(short *)(ppppppbVar25 + 0x135) = (short)uVar22;
                ppppppbVar25[0x134] = (byte *****)pppppppbVar38;
              } while (uVar40 + 1 != uVar22);
            }
            goto LAB_00615c20;
          }
          uVar37 = 4;
          if (uVar22 < 5) {
            bVar5 = false;
          }
          else {
            bVar5 = false;
            if (uVar22 == 5) {
              uVar37 = 5;
            }
            else if (uVar22 == 6) {
              uVar22 = 0;
              uVar37 = 5;
              bVar5 = true;
            }
            else {
              uVar22 = uVar22 - 7;
              bVar5 = true;
              uVar37 = 6;
            }
          }
          pppppppbVar10 = (byte *******)thunk_FUN_016d4a50(0x508);
          if (pppppppbVar10 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x508);
          }
          puVar28 = (ushort *)((int)pppppppbVar10 + 0x4d6);
          *puVar28 = 0;
          pppppppbVar10[0x134] = (byte ******)0x0;
          ppppppbVar15 = pppppppbVar38[uVar37 * 2];
          ppppppbVar27 = (pppppppbVar38 + uVar37 * 2)[1];
          uVar19 = (uint)*puVar9 + ~uVar37;
          *puVar28 = (ushort)uVar19;
          pppppppbVar29 = pppppppbVar38 + uVar37 * 0x1a + 0x16;
          ppppppbVar25 = *pppppppbVar29;
          local_2e8 = pppppppbVar29[2];
          ppppppbVar21 = pppppppbVar29[1];
          FUN_016dd1aa(&local_80,pppppppbVar29 + 3,0x5c);
          if (0xb < uVar19) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,uVar19,0xb,&DAT_018ac47c);
          }
          FUN_016dd1aa(pppppppbVar10,pppppppbVar38 + (uVar37 + 1) * 2,uVar19 * 8);
          FUN_016dd1aa(pppppppbVar10 + 0x16,pppppppbVar38 + (uVar37 + 1) * 0x1a + 0x16,uVar19 * 0x68
                      );
          *puVar9 = (ushort)uVar37;
          FUN_016dd1aa(&local_e0,&local_80,0x5c);
          uVar19 = (uint)*puVar28;
          iVar30 = uVar19 + 1;
          if (0xb < uVar19) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,iVar30,0xc,&DAT_018ac48c);
          }
          if (uVar40 - uVar37 != iVar30) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
          }
          local_2c8 = (byte *******)((int)local_2c8 + 1);
          FUN_016dd1aa(pppppppbVar10 + 0x136,pppppppbVar38 + uVar37 + 0x137,iVar30 * 4);
          uVar40 = 0;
          do {
            ppppppbVar17 = (pppppppbVar10 + 0x136)[uVar40];
            *(short *)(ppppppbVar17 + 0x135) = (short)uVar40;
            ppppppbVar17[0x134] = (byte *****)pppppppbVar10;
            if (uVar19 <= uVar40) break;
            uVar40 = uVar40 + 1;
          } while (uVar40 <= uVar19);
          FUN_016dd1aa(&local_140,&local_e0,0x5c);
          uVar40 = uVar22 + 1;
          pppppppbVar29 = pppppppbVar10;
          if (!bVar5) {
            pppppppbVar29 = pppppppbVar38;
          }
          pppppppbVar24 = pppppppbVar29 + uVar22 * 2;
          uVar37 = (uint)*(ushort *)((int)pppppppbVar29 + 0x4d6);
          if (uVar22 < uVar37) {
            iVar30 = uVar37 - uVar22;
            FUN_016dd52c(pppppppbVar29 + uVar40 * 2,pppppppbVar24,iVar30 * 8);
            pppppppbVar39 = pppppppbVar29 + uVar22 * 0x1a + 0x16;
            FUN_016dd52c(pppppppbVar29 + uVar40 * 0x1a + 0x16,pppppppbVar39,iVar30 * 0x68);
            pppppppbVar29[uVar22 * 0x1a + 0x16] = local_2e0;
            *pppppppbVar24 = local_2ec;
            pppppppbVar24[1] = local_2f0;
            pppppppbVar39[1] = local_2e4;
            pppppppbVar39[2] = local_2dc;
            FUN_016dd1aa(pppppppbVar39 + 3,auStack_200,0x5c);
            FUN_016dd52c(pppppppbVar29 + uVar22 + 0x138,pppppppbVar29 + uVar22 + 0x137,iVar30 * 4);
          }
          else {
            *pppppppbVar24 = local_2ec;
            pppppppbVar24[1] = local_2f0;
            pppppppbVar29[uVar22 * 0x1a + 0x16] = local_2e0;
            pppppppbVar29[uVar22 * 0x1a + 0x17] = local_2e4;
            pppppppbVar29[uVar22 * 0x1a + 0x18] = local_2dc;
            FUN_016dd1aa(pppppppbVar29 + uVar22 * 0x1a + 0x19,auStack_200,0x5c);
          }
          *(ushort *)((int)pppppppbVar29 + 0x4d6) = (ushort)(uVar37 + 1);
          pppppppbVar29[uVar22 + 0x137] = (byte ******)local_260;
          if (uVar40 < uVar37 + 2) {
            do {
              ppppppbVar17 = pppppppbVar29[uVar22 + 0x137];
              uVar22 = uVar22 + 1;
              *(short *)(ppppppbVar17 + 0x135) = (short)uVar22;
              ppppppbVar17[0x134] = (byte *****)pppppppbVar29;
            } while (uVar37 + 1 != uVar22);
          }
          FUN_016dd1aa(&local_1a0,&local_140,0x5c);
          if (ppppppbVar25 == (byte ******)0x2) goto LAB_00615c20;
          FUN_016dd1aa(auStack_200,&local_1a0,0x5c);
          pppppppbVar29 = (byte *******)pppppppbVar38[0x134];
          pppppppbVar39 = pppppppbVar38;
          local_2f0 = ppppppbVar27;
          local_2ec = ppppppbVar15;
          local_2e4 = ppppppbVar21;
          local_2e0 = ppppppbVar25;
          local_2dc = local_2e8;
          local_260 = pppppppbVar10;
        } while ((byte *******)pppppppbVar38[0x134] != (byte *******)0x0);
      }
      pppppppbVar29 = (byte *******)thunk_FUN_016d4a50(0x508);
      if (pppppppbVar29 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x508);
      }
      puVar9 = (ushort *)((int)pppppppbVar29 + 0x4d6);
      *puVar9 = 0;
      pppppppbVar29[0x134] = (byte ******)0x0;
      pppppppbVar29[0x136] = (byte ******)pppppppbVar14;
      if ((byte *******)0xfffffffe < pppppppbVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018af438);
      }
      *(undefined2 *)(pppppppbVar14 + 0x135) = 0;
      pppppppbVar14[0x134] = (byte ******)pppppppbVar29;
      local_24c = pppppppbVar29;
      local_248 = (byte *******)((int)pppppppbVar8 + 1);
      if (local_2c8 != pppppppbVar8) {
        uVar13 = 0x30;
LAB_00616204:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(local_2b4,uVar13,local_2b0);
      }
      uVar40 = (uint)*puVar9;
      if (10 < uVar40) {
        uVar13 = 0x20;
        local_2b4 = &DAT_00565dd0;
        local_2b0 = &DAT_018af428;
        goto LAB_00616204;
      }
      uVar3 = (ushort)(uVar40 + 1);
      *puVar9 = uVar3;
      pppppppbVar29[uVar40 * 2] = local_2ec;
      (pppppppbVar29 + uVar40 * 2)[1] = local_2f0;
      pppppppbVar29[uVar40 * 0x1a + 0x17] = local_2e4;
      pppppppbVar29[uVar40 * 0x1a + 0x18] = local_2e8;
      pppppppbVar29[uVar40 * 0x1a + 0x16] = local_2e0;
      FUN_016dd1aa(pppppppbVar29 + uVar40 * 0x1a + 0x19,auStack_200,0x5c);
      (pppppppbVar29 + 0x136)[uVar40 + 1] = (byte ******)local_260;
      *(ushort *)(local_260 + 0x135) = uVar3;
      local_260[0x134] = (byte ******)pppppppbVar29;
    }
  }
LAB_00615c20:
LAB_00615284:
  local_244 = (byte *******)((int)local_244 + 1);
LAB_00615290:
  local_26c = local_2bc;
  local_28c = param_4;
  local_268 = local_25c;
  goto LAB_006149a8;
LAB_00614f00:
  if (iVar30 == 0) {
    local_264 = pppppppbVar39;
LAB_006160a8:
    local_260._0_1_ = 0x13;
    uVar37 = 0;
    local_288 = (byte *******)0x0;
    pppppppbVar39 = local_264;
LAB_00615dc4:
    uVar40 = 0;
    pppppppbVar29 = pppppppbVar39;
    local_268 = local_288;
LAB_00615dc8:
    local_2c0 = uVar37;
    pppppppbVar39 = pppppppbVar29;
LAB_00615dcc:
    pppppppbVar29 = (byte *******)0x0;
    if (local_80 != (byte ******)0x0) {
      pppppppbVar29 = local_7c;
    }
    if (local_80 != (byte ******)0x0 && pppppppbVar29 != (byte *******)0x0) {
      thunk_FUN_016d3fb4(local_78[0]);
    }
    pppppppbVar29 = (byte *******)(local_2c0 << 0x10 | uVar40 << 8);
LAB_00615df4:
    local_26c = (byte ******)((uint)pppppppbVar29 >> 0x10);
    uVar40 = ((uint)pppppppbVar29 & 0xffff) >> 8;
    param_4 = local_264;
    unaff_r11 = pppppppbVar39;
  }
  else {
    local_2d8 = iVar30 + -1;
    local_264 = (byte *******)((int)pppppppbVar39 + 1);
    uVar22 = (int)(char)*(byte *)pppppppbVar39 & 0x7f;
    if (0x7fffffff < (uint)(int)(char)*(byte *)pppppppbVar39) {
      if (local_2d8 == 0) goto LAB_006160a8;
      uVar22 = uVar22 | ((int)(char)*(byte *)((int)pppppppbVar39 + 1) & 0x7fU) << 7;
      local_264 = (byte *******)((int)pppppppbVar39 + 2);
      local_2d8 = iVar30 + -2;
      if (-1 < (char)*(byte *)((int)pppppppbVar39 + 1)) goto LAB_00614f4c;
      if (local_2d8 == 0) goto LAB_006160a8;
      bVar2 = *(byte *)local_264;
      if (bVar2 < 4) {
        local_2d8 = iVar30 + -3;
        local_264 = (byte *******)((int)pppppppbVar39 + 3);
        if (uVar22 != 0 || (bVar2 & 3) != 0) goto LAB_006160d0;
        goto LAB_00614f5c;
      }
      local_26c = (byte ******)0x0;
LAB_00616044:
      local_260._0_1_ = 6;
      local_288 = (byte *******)0x0;
      uVar37 = (uint)local_26c;
      local_264 = param_4;
      goto LAB_00615dc4;
    }
LAB_00614f4c:
    if (uVar22 != 0) {
LAB_006160d0:
      local_260._0_1_ = 0xd;
      local_264 = local_268;
      goto LAB_00615dc8;
    }
LAB_00614f5c:
    local_268 = local_70[1];
    local_260._0_1_ = SUB41(local_78[0],0);
    local_e0 = local_68;
    pppppppbStack_dc = local_64;
    pppppppbStack_d8 = local_60;
    pppppppbStack_d4 = pppppppbStack_5c;
    pppppppbStack_d0 = local_58;
    local_cc = local_54;
    ppppppbStack_c8 = local_50;
    pppppppbStack_c4 = pppppppbStack_4c;
    pppppppbStack_c0 = local_48;
    pppppppbStack_bc = local_44;
    local_b8 = local_40;
    pppppppbStack_214 = pppppppbStack_3c;
    ppppppbStack_b0 = local_38;
    pppppppbStack_ac = local_34;
    pppppppbStack_a8 = local_30;
    pppppppbStack_204 = pppppppbStack_2c;
    if (local_80 == (byte ******)0x2) {
      pppppppbVar29 = local_78[0];
      local_264 = local_70[0];
      pppppppbVar39 = local_78[1];
      goto LAB_00615df4;
    }
    local_26c = local_80;
    local_2cc = (byte ******)((uint)local_78[0] >> 0x10);
    local_290 = (uint)local_78[0] >> 8 & 0xff;
    local_140 = local_e0;
    pppppppbStack_13c = pppppppbStack_dc;
    pppppppbStack_138 = pppppppbStack_d8;
    pppppppbStack_134 = pppppppbStack_d4;
    pppppppbStack_130 = pppppppbStack_d0;
    local_12c = local_cc;
    ppppppbStack_128 = ppppppbStack_c8;
    pppppppbStack_124 = pppppppbStack_c4;
    pppppppbStack_120 = pppppppbStack_c0;
    pppppppbStack_11c = pppppppbStack_bc;
    local_118 = local_b8;
    ppppppbStack_110 = ppppppbStack_b0;
    pppppppbStack_10c = pppppppbStack_ac;
    pppppppbStack_108 = pppppppbStack_a8;
    if (local_80 != (byte ******)0x3) {
      ppppppbVar27 = (byte ******)
                     ((uint)local_78[0] & 0xff | local_290 << 8 | (int)local_2cc << 0x10);
      uVar4 = SUB42(local_2bc,0);
      local_240 = local_e0;
      pppppppbStack_23c = pppppppbStack_dc;
      pppppppbStack_238 = pppppppbStack_d8;
      pppppppbStack_234 = pppppppbStack_d4;
      pppppppbStack_230 = pppppppbStack_d0;
      local_22c = local_cc;
      ppppppbStack_228 = ppppppbStack_c8;
      pppppppbStack_224 = pppppppbStack_c4;
      pppppppbStack_220 = pppppppbStack_c0;
      pppppppbStack_21c = pppppppbStack_bc;
      local_218 = local_b8;
      ppppppbStack_210 = ppppppbStack_b0;
      pppppppbStack_20c = pppppppbStack_ac;
      pppppppbStack_208 = pppppppbStack_a8;
      if (local_25c == (byte *******)0x0) {
        if ((byte *******)((int)param_4 + -1) < local_298) {
LAB_00616070:
          pppppppbVar29 = (byte *******)0x0;
          if (local_80 != (byte ******)0x0) {
            pppppppbVar29 = local_7c;
          }
          if (local_80 != (byte ******)0x0 && pppppppbVar29 != (byte *******)0x0) {
LAB_00615fa8:
            thunk_FUN_016d3fb4(ppppppbVar27);
          }
LAB_00616090:
          local_260._0_1_ = 0xe;
          uVar40 = 0;
          goto LAB_00615e00;
        }
        if ((byte *******)((int)param_4 + -1) == local_298) {
          pppppppbVar29 = local_30;
          if (local_244 != (byte *******)0x0) {
            pppppppbVar29 = local_24c;
          }
          if (local_244 != (byte *******)0x0 && pppppppbVar29 != (byte *******)0x0) {
            pppppppbVar14 = local_248;
            do {
              uVar22 = 0xffffffff;
              uVar40 = (uint)*(ushort *)((int)pppppppbVar29 + 0x4d6);
              iVar30 = uVar40 << 3;
              pppppppbVar8 = pppppppbVar29;
              do {
                if (iVar30 == 0) goto LAB_00615364;
                pppppppbVar39 = (byte *******)*pppppppbVar8;
                iVar30 = iVar30 + -8;
                ppppppbVar15 = pppppppbVar8[1];
                uVar22 = uVar22 + 1;
                pppppppbVar8 = pppppppbVar8 + 2;
                uVar37 = (uint)(ppppppbVar15 == (byte ******)0x0 &&
                               (byte ******)(uint)(param_4 <= pppppppbVar39) <= ppppppbVar15) -
                         (uint)((uint)(pppppppbVar39 <= param_4) <= (uint)-(int)ppppppbVar15);
              } while (uVar37 == 1);
              uVar40 = uVar22;
              if ((uVar37 & 0xff) == 0) goto LAB_00616070;
LAB_00615364:
              if (pppppppbVar14 == (byte *******)0x0) break;
              pppppppbVar14 = (byte *******)((int)pppppppbVar14 + -1);
              pppppppbVar29 = (byte *******)pppppppbVar29[uVar40 + 0x136];
            } while( true );
          }
          local_80 = local_e0;
          local_7c = pppppppbStack_dc;
          local_78[0] = pppppppbStack_d8;
          local_78[1] = pppppppbStack_d4;
          local_70[0] = pppppppbStack_d0;
          local_70[1] = local_cc;
          local_68 = ppppppbStack_c8;
          local_64 = pppppppbStack_c4;
          local_60 = pppppppbStack_c0;
          pppppppbStack_5c = pppppppbStack_bc;
          local_58 = local_b8;
          local_54 = pppppppbStack_214;
          local_50 = ppppppbStack_b0;
          pppppppbStack_4c = pppppppbStack_ac;
          local_48 = pppppppbStack_a8;
          local_44 = pppppppbStack_204;
          if (local_298 == local_258) {
            FUN_01010cec(&local_258);
            local_2ac = local_254;
          }
          puVar32 = (uint *)(local_2ac + (int)local_298 * 0x68);
          *puVar32 = (uint)ppppppbVar25;
          puVar32[1] = (uint)pppppppbVar38;
          puVar32[2] = (uint)ppppppbVar27;
          puVar32[3] = (uint)unaff_r11;
          puVar32[4] = (uint)pppppppbVar10;
          puVar32[5] = (uint)pppppppbVar24;
          puVar32[6] = (uint)local_80;
          puVar32[7] = (uint)local_7c;
          puVar32[8] = (uint)local_78[0];
          puVar32[9] = (uint)local_78[1];
          puVar32[10] = (uint)local_70[0];
          puVar32[0xb] = (uint)local_70[1];
          puVar32[0xc] = (uint)local_68;
          puVar32[0xd] = (uint)local_64;
          puVar32[0xe] = (uint)local_60;
          puVar32[0xf] = (uint)pppppppbStack_5c;
          puVar32[0x10] = (uint)local_58;
          puVar32[0x11] = (uint)local_54;
          puVar32[0x12] = (uint)local_50;
          puVar32[0x13] = (uint)pppppppbStack_4c;
          puVar32[0x14] = (uint)local_48;
          puVar32[0x15] = (uint)local_44;
          *(byte *)((int)puVar32 + 0x62) = bVar1;
          *(undefined2 *)(puVar32 + 0x18) = uVar4;
          local_29c = (byte ******)((uint)param_4 >> 0x10);
          puVar32[0x16] = (uint)param_4;
          puVar32[0x17] = 0;
          local_2a0 = ((uint)param_4 & 0xffff) >> 8;
          local_2a4 = param_4;
          local_298 = param_4;
          local_250 = param_4;
          goto LAB_00615290;
        }
      }
      if (local_24c != (byte *******)0x0) {
        pppppppbVar29 = local_248;
        pppppppbVar39 = local_24c;
        do {
          uVar40 = 0xffffffff;
          uVar3 = *(ushort *)((int)pppppppbVar39 + 0x4d6);
          uVar22 = (uint)uVar3;
          iVar30 = uVar22 << 3;
          pppppppbVar20 = pppppppbVar39;
          do {
            if (iVar30 == 0) {
              uVar40 = uVar22;
              goto LAB_006151d8;
            }
            pppppppbVar35 = (byte *******)*pppppppbVar20;
            pppppppbVar36 = (byte *******)pppppppbVar20[1];
            iVar30 = iVar30 + -8;
            uVar40 = uVar40 + 1;
            pppppppbVar20 = pppppppbVar20 + 2;
            uVar37 = (uint)(pppppppbVar36 <= local_25c &&
                           (uint)(param_4 <= pppppppbVar35) <=
                           (uint)((int)pppppppbVar36 - (int)local_25c)) -
                     (uint)(local_25c <= pppppppbVar36 &&
                           (uint)(pppppppbVar35 <= param_4) <=
                           (uint)((int)local_25c - (int)pppppppbVar36));
          } while (uVar37 == 1);
          if ((uVar37 & 0xff) == 0) {
            local_260._0_1_ = 0xe;
            if (local_80 == (byte ******)0x0) {
              uVar40 = 0;
              goto LAB_00615e00;
            }
            if (local_7c == (byte *******)0x0) goto LAB_00616090;
            goto LAB_00615fa8;
          }
LAB_006151d8:
          if (pppppppbVar29 == (byte *******)0x0) goto LAB_0061537c;
          pppppppbVar29 = (byte *******)((int)pppppppbVar29 + -1);
          pppppppbVar39 = (byte *******)pppppppbVar39[uVar40 + 0x136];
        } while( true );
      }
      pppppppbVar29 = (byte *******)thunk_FUN_016d4a50(0x4d8);
      if (pppppppbVar29 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x4d8);
      }
      ((byte *)((int)pppppppbVar29 + 0x4d6))[0] = 1;
      ((byte *)((int)pppppppbVar29 + 0x4d6))[1] = 0;
      pppppppbVar29[0x16] = ppppppbVar25;
      pppppppbVar29[0x134] = (byte ******)0x0;
      pppppppbVar29[0x17] = (byte ******)pppppppbVar38;
      pppppppbVar29[0x18] = ppppppbVar27;
      pppppppbVar29[0x19] = (byte ******)unaff_r11;
      pppppppbVar29[0x1a] = (byte ******)pppppppbVar10;
      *pppppppbVar29 = (byte ******)param_4;
      pppppppbVar29[1] = (byte ******)local_25c;
      pppppppbVar29[0x1b] = (byte ******)pppppppbVar24;
      local_248 = (byte *******)0x0;
      pppppppbVar29[0x1c] = local_240;
      pppppppbVar29[0x1d] = (byte ******)pppppppbStack_23c;
      pppppppbVar29[0x1e] = (byte ******)pppppppbStack_238;
      pppppppbVar29[0x1f] = (byte ******)pppppppbStack_234;
      pppppppbVar29[0x20] = (byte ******)pppppppbStack_230;
      pppppppbVar29[0x21] = (byte ******)local_22c;
      pppppppbVar29[0x22] = ppppppbStack_228;
      pppppppbVar29[0x23] = (byte ******)pppppppbStack_224;
      pppppppbVar29[0x24] = (byte ******)pppppppbStack_220;
      pppppppbVar29[0x25] = (byte ******)pppppppbStack_21c;
      pppppppbVar29[0x26] = (byte ******)local_218;
      pppppppbVar29[0x27] = (byte ******)pppppppbStack_214;
      pppppppbVar29[0x28] = ppppppbStack_210;
      pppppppbVar29[0x29] = (byte ******)pppppppbStack_20c;
      pppppppbVar29[0x2a] = (byte ******)pppppppbStack_208;
      pppppppbVar29[0x2b] = (byte ******)pppppppbStack_204;
      *(byte *)((int)pppppppbVar29 + 0xba) = bVar1;
      pppppppbVar29[0x2c] = (byte ******)param_4;
      pppppppbVar29[0x2d] = (byte ******)local_25c;
      *(undefined2 *)(pppppppbVar29 + 0x2e) = uVar4;
      local_24c = pppppppbVar29;
      goto LAB_00615284;
    }
    uVar40 = local_290;
    param_4 = local_70[0];
    local_26c = local_2cc;
  }
LAB_00615e00:
  iVar30 = local_254;
  uVar31 = (undefined1)uVar40;
  if (local_250 != (byte *******)0x0) {
    piVar6 = (int *)(local_254 + 4);
    pppppppbVar29 = local_250;
    do {
      iVar11 = 0;
      if (piVar6[-1] != 0) {
        iVar11 = *piVar6;
      }
      if (piVar6[-1] != 0 && iVar11 != 0) {
        thunk_FUN_016d3fb4(piVar6[1]);
      }
      piVar6 = piVar6 + 0x1a;
      pppppppbVar29 = (byte *******)((int)pppppppbVar29 + -1);
    } while (pppppppbVar29 != (byte *******)0x0);
  }
  if (local_258 != (byte *******)0x0) {
    thunk_FUN_016d3fb4(iVar30);
  }
  FUN_0061421c(&local_24c);
  param_5 = local_26c;
LAB_00615e6c:
  *(short *)((int)param_1 + 2) = (short)param_5;
  *(undefined1 *)((int)param_1 + 1) = uVar31;
  *(undefined1 *)param_1 = local_260._0_1_;
  param_1[1] = unaff_r11;
  param_1[2] = param_4;
  param_1[3] = local_268;
  return;
}

