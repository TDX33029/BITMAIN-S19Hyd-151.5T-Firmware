// FUN_015c6584 @ 015c6584 size=2544 calls_out=24 calls_in=1
// strings: .gnu_debugaltlink

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015c6584(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  byte bVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  uint *extraout_r2;
  uint *puVar17;
  char *pcVar18;
  int unaff_r4;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  undefined4 *puVar25;
  uint *puVar26;
  uint *puVar27;
  int iVar28;
  uint *puVar29;
  bool bVar30;
  undefined8 uVar31;
  uint *local_458;
  uint *local_454;
  int local_3f8;
  int local_3f4;
  int local_3f0;
  uint local_3ec;
  int local_3e8;
  uint local_3e4;
  undefined1 auStack_3e0 [256];
  int local_2e0;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  uint *local_298;
  uint *local_294;
  uint *local_290;
  int iStack_28c;
  int iStack_288;
  undefined4 local_284;
  uint uStack_280;
  uint uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined1 auStack_258 [80];
  uint *local_208;
  undefined4 local_204;
  uint *local_200;
  int local_1f8;
  undefined4 local_1f4;
  uint local_1f0;
  uint local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  int local_1c8;
  uint *local_1c4;
  uint *local_1c0;
  uint *puStack_1bc;
  uint *local_1b8;
  uint *local_1b4;
  uint *local_1b0;
  uint *local_1a8 [2];
  uint *local_1a0;
  int local_19c;
  int local_198;
  undefined4 local_194;
  uint local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  int local_168;
  uint *local_164;
  uint *local_160;
  uint *local_15c;
  undefined4 uStack_28;
  
  iVar15 = param_4[1];
  local_454 = (uint *)param_4[2];
  FUN_015c5480(local_1a8,iVar15,local_454);
  puVar4 = local_1a0;
  puVar29 = local_1a8[1];
  if (local_1a8[0] != (uint *)&DAT_00000001) {
    iVar22 = *param_4;
    param_1[0x48] = 0x80000000;
    if (iVar22 == 0) {
      return;
    }
    if (iVar15 == 0) {
      return;
    }
    iVar22 = FUN_016d3bc8();
    uVar19 = *(byte *)(iVar15 + -3) & 0x1f;
    if (((*(byte *)(iVar22 + 0x14) & 0x1f) != 0) ||
       (uVar23 = *(uint *)(iVar22 + 0x14) & 0xfffff000, iVar20 = uVar23 - 0x10, uVar23 == 0)) {
      iVar20 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar22 + 0x14) & 0xfff) >> 6) * 2) <<
               4;
    }
    uVar23 = (uint)(*(byte *)(iVar15 + -3) >> 5);
    iVar12 = *(int *)(iVar22 + 8) + 0x10;
    iVar28 = iVar20 * uVar19 + iVar20 + -4;
    iVar20 = iVar12 + iVar28;
    if (4 < uVar23) {
      if (uVar23 != 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar1)();
      }
      uVar23 = *(uint *)(iVar20 + -4);
      if (uVar23 < 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar1)();
      }
      if (*(char *)(iVar20 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar1)();
      }
    }
    if ((uint)(iVar20 - iVar15) < uVar23) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar1)();
    }
    if (*(char *)(iVar20 - uVar23) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar1)();
    }
    if (*(char *)(iVar12 + iVar28) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar1)();
    }
    bVar2 = *(byte *)(iVar22 + 0x14);
    uVar23 = 1 << uVar19;
    *(undefined1 *)(iVar15 + -3) = 0xff;
    *(undefined2 *)(iVar15 + -2) = 0;
    do {
      uVar24 = *(uint *)(iVar22 + 0x10);
      uVar11 = *(uint *)(iVar22 + 0xc) | uVar24;
      if ((uVar23 & uVar11) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar1)();
      }
      if ((uVar24 == 0) || (uVar11 + uVar23 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar22,uVar19);
        FUN_016dddc0(&DAT_018ddd48);
        if (unaff_r4 == 0) {
          return;
        }
        puVar25 = (undefined4 *)FUN_016d2bc8();
        uVar21 = *puVar25;
        FUN_016d6ac4(uStack_28,unaff_r4);
        *puVar25 = uVar21;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar22 + 0x10) = uVar23 + uVar24;
        return;
      }
      puVar29 = (uint *)(iVar22 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar29);
        uVar11 = *puVar29;
        if (uVar24 != uVar11) goto LAB_016d409c;
        bVar30 = (bool)hasExclusiveAccess(puVar29);
      } while (!bVar30);
      *puVar29 = uVar23 + uVar24;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar24 == uVar11) {
        return;
      }
    } while( true );
  }
  local_3e4 = 0;
  local_3e8 = 4;
  local_3ec = 0;
  local_3f0 = 0;
  local_3f4 = 4;
  local_3f8 = 0;
  FUN_015c5808(local_1a8,local_1a8[1],local_1a0);
  puVar10 = local_15c;
  puVar9 = local_160;
  puVar8 = local_164;
  iVar20 = local_168;
  uVar7 = local_184;
  uVar6 = local_188;
  uVar23 = local_18c;
  uVar19 = local_190;
  uVar21 = local_194;
  iVar22 = local_198;
  puVar5 = local_1a0;
  puVar26 = local_1a8[1];
  puVar3 = local_1a8[0];
  if (local_168 != -0x80000000) {
    local_2b0 = local_180;
    uStack_2ac = uStack_17c;
    uStack_2a8 = uStack_178;
    uStack_2a4 = uStack_174;
    uStack_2a0 = uStack_170;
    uStack_29c = uStack_16c;
    if (local_19c == 0 || local_198 == 0) {
      iVar28 = -0x80000000;
      puVar27 = puVar4;
    }
    else {
      local_458 = &local_3ec;
      iVar28 = local_19c * 0x28;
      puVar27 = (uint *)0x0;
      puVar17 = local_1a0;
      do {
        uVar11 = *puVar17;
        if (!CARRY4(uVar23,(uint)CARRY4(uVar19,uVar11))) {
          uVar31 = FUN_0127b808(iVar22,uVar21,uVar19 + uVar11,uVar23 + CARRY4(uVar19,uVar11),uVar6,
                                uVar7);
          if ((((int)uVar31 != 0) && ((int)((ulonglong)uVar31 >> 0x20) == 0x11)) &&
             (iVar12 = thunk_FUN_016dd50a((int)uVar31,".gnu_debugaltlink",0x11), iVar12 == 0)) {
            if (puVar17[1] != 8) {
              puVar13 = (uint *)puVar17[5];
              iVar28 = -0x80000000;
              if (puVar13 == (uint *)0x0) goto LAB_015c682c;
              puVar16 = (uint *)puVar17[4];
              puVar17 = extraout_r2;
              if (puVar16 <= puVar26) {
                puVar17 = (uint *)((int)puVar26 - (int)puVar16);
              }
              if (puVar16 > puVar26 || puVar17 < puVar13) goto LAB_015c682c;
              puVar26 = (uint *)0x0;
              puVar27 = (uint *)((int)puVar3 + (int)puVar16);
              goto LAB_015c6a08;
            }
            break;
          }
        }
        iVar28 = iVar28 + -0x28;
        puVar17 = puVar17 + 10;
      } while (iVar28 != 0);
      iVar28 = -0x80000000;
    }
    goto LAB_015c682c;
  }
  iVar22 = 4;
  param_1[0x48] = 0x80000000;
  goto LAB_015c6620;
  while (puVar26 = (uint *)((int)puVar26 + 1), puVar13 != puVar26) {
LAB_015c6a08:
    if (*(char *)((int)puVar27 + (int)puVar26) == '\0') {
      pcVar18 = (char *)((int)puVar27 + (int)puVar26 + 1);
      iVar12 = (int)puVar13 - (int)((int)puVar26 + 1);
      puVar17 = puVar27;
      if ((puVar26 == (uint *)0x0) || ((char)*puVar27 != '/')) {
        if ((uint)local_454 >> 7 < 3) {
          FUN_016dd1aa(local_1a8,iVar15,local_454);
          *(char *)((int)local_1a8 + (int)local_454) = '\0';
          FUN_00fab008(&local_208,local_1a8,(char *)((int)local_454 + 1));
          if (local_208 == (uint *)&DAT_00000001) {
            local_290 = &DAT_018aae48;
            local_294 = (uint *)&SUB_00000002;
          }
          else {
            iVar14 = FUN_016d6638(local_204,0);
            if (iVar14 != 0) {
              puVar13 = (uint *)FUN_016dd8a2();
              if (puVar13 == (uint *)0x0) {
                local_294 = (uint *)&DAT_00000001;
              }
              else {
                local_294 = (uint *)FUN_0063f47c(puVar13,1);
                if (local_294 == (uint *)0x0) goto LAB_015c6b40;
              }
              FUN_016dd1aa(local_294,iVar14,puVar13);
              thunk_FUN_016d3fb4(iVar14);
              puVar17 = local_294;
              local_298 = puVar13;
              local_290 = puVar13;
              if (puVar13 != (uint *)&DAT_80000000) goto LAB_015c6bec;
              goto LAB_015c6b6c;
            }
            puVar25 = (undefined4 *)FUN_016d2bc8();
            local_294 = (uint *)((uint)local_294 & 0xffffff00);
            local_290 = (uint *)*puVar25;
          }
        }
        else {
          FUN_015c709c(&local_298,iVar15,local_454);
          if (local_298 != (uint *)&DAT_80000000) {
LAB_015c6bec:
            puVar13 = local_294;
            local_454 = local_298;
            if (local_290 == (uint *)0x0) {
              bVar30 = false;
            }
            else {
              bVar30 = (char)*local_294 == '/';
            }
            local_1a0 = (uint *)CONCAT31(local_1a0._1_3_,6);
            local_1a8[1] = local_290;
            local_1a8[0] = local_294;
            local_18c = CONCAT22(CONCAT11(local_18c._3_1_,bVar30),0x201);
            FUN_015c7164(&local_208,local_1a8);
            if (((uint)local_208 & 0xff) - 7 < 3) {
              uVar31 = FUN_015c7664(local_1a8);
              puVar16 = (uint *)((ulonglong)uVar31 >> 0x20);
              if (puVar16 == (uint *)0x0) {
                bVar30 = false;
                local_1a0 = (uint *)0x0;
                local_1a8[1] = (uint *)&DAT_00000001;
              }
              else {
                puVar17 = (uint *)FUN_0063f47c(puVar16,1);
                if (puVar17 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(1,puVar16);
                }
                FUN_016dd1aa(puVar17,(int)uVar31,puVar16);
                bVar30 = ((char *)((int)puVar17 + (int)puVar16))[-1] != '/';
                local_1a8[1] = puVar17;
                local_1a0 = puVar16;
              }
              local_1a8[0] = local_1a0;
              if (puVar26 == (uint *)0x0) {
LAB_015c6cfc:
                if (bVar30) {
                  FUN_015bf41c(local_1a8,puVar16,1,1,1);
                  puVar17 = (uint *)((int)local_1a0 + 1);
                  *(char *)((int)local_1a8[1] + (int)local_1a0) = '/';
                  puVar16 = local_1a8[0];
                  goto LAB_015c6d38;
                }
                puVar17 = puVar16;
              }
              else {
                puVar17 = (uint *)0x0;
                if ((char)*puVar27 != '/') goto LAB_015c6cfc;
LAB_015c6d38:
                local_1a0 = puVar17;
              }
              if ((uint *)((int)puVar16 - (int)puVar17) < puVar26) {
                FUN_015bf41c(local_1a8,puVar17,puVar26,1,1);
                puVar17 = local_1a0;
              }
              puVar16 = local_1a8[1];
              FUN_016dd1aa((char *)((int)local_1a8[1] + (int)puVar17),puVar27,puVar26);
              local_1a0 = (uint *)((int)puVar17 + (int)puVar26);
              iVar14 = FUN_015c7ac8(puVar16);
              if (iVar14 == 0) {
                if (local_1a8[0] != (uint *)0x0) {
                  thunk_FUN_016d3fb4(puVar16);
                }
                if (local_454 != (uint *)0x0) {
                  thunk_FUN_016d3fb4(puVar13);
                }
                goto LAB_015c6dcc;
              }
              local_1b0 = local_1a0;
              local_1b4 = local_1a8[1];
              local_1b8 = local_1a8[0];
            }
            else {
              local_1b8 = (uint *)&DAT_80000000;
            }
            if (local_454 != (uint *)0x0) {
              thunk_FUN_016d3fb4(puVar13);
            }
            goto LAB_015c6de0;
          }
        }
LAB_015c6b6c:
        puVar26 = local_290;
        puVar27 = puVar17;
        if ((char)local_294 == '\x03') {
          uVar11 = *local_290;
          puVar27 = (uint *)local_290[1];
          if ((code *)*puVar27 != (code *)0x0) {
            (*(code *)*puVar27)(uVar11);
          }
          if (puVar27[1] != 0) {
            thunk_FUN_016d3fb4(uVar11);
          }
          thunk_FUN_016d3fb4(puVar26);
        }
      }
      else {
        iVar14 = FUN_015c7ac8(puVar27,puVar26);
        if (iVar14 == 0) {
LAB_015c6dcc:
          FUN_015c620c(&local_1b8,pcVar18,iVar12);
        }
        else {
          puVar16 = (uint *)FUN_0063f47c(puVar26,1);
          puVar13 = puVar26;
          if (puVar16 == (uint *)0x0) {
LAB_015c6b40:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,puVar13);
          }
          FUN_016dd1aa(puVar16,puVar27,puVar26);
          local_1b8 = puVar26;
          local_1b4 = puVar16;
          local_1b0 = puVar26;
        }
LAB_015c6de0:
        puVar13 = local_1b4;
        puVar26 = local_1b8;
        puVar27 = puVar17;
        if (local_1b8 != (uint *)&DAT_80000000) {
          FUN_015c5480(&local_208,local_1b4,local_1b0);
          uVar11 = local_3e4;
          if (local_208 == (uint *)&DAT_00000001) {
            if (local_3e4 == local_3ec) {
              FUN_015cbe88(local_458);
            }
            puVar25 = (undefined4 *)(local_3e8 + uVar11 * 8);
            *puVar25 = local_204;
            puVar25[1] = local_200;
            local_3e4 = uVar11 + 1;
            if (0xfffffffe < uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018aaa7c);
            }
            FUN_015c5808(local_1a8,local_204,local_200);
            puVar17 = local_200;
            if (local_168 == -0x80000000) goto LAB_015c6ecc;
            local_454 = local_164;
            local_458 = local_160;
            uVar31 = FUN_015c604c(local_1a8);
            puVar17 = local_15c;
            if ((((int)uVar31 == 0) || ((int)((ulonglong)uVar31 >> 0x20) != iVar12)) ||
               (iVar28 = thunk_FUN_016dd50a((int)uVar31,pcVar18,iVar12), iVar28 != 0)) {
              if (local_168 != 0) {
                thunk_FUN_016d3fb4(local_164);
              }
              goto LAB_015c6ecc;
            }
            iVar28 = local_168;
            local_298 = local_1a8[0];
            local_294 = local_1a8[1];
            local_290 = local_1a0;
            iStack_28c = local_19c;
            iStack_288 = local_198;
            local_284 = local_194;
            uStack_280 = local_190;
            uStack_27c = local_18c;
            uStack_278 = local_188;
            uStack_274 = local_184;
            local_270 = local_180;
            uStack_26c = uStack_17c;
            uStack_268 = uStack_178;
            uStack_264 = uStack_174;
            uStack_260 = uStack_170;
            uStack_25c = uStack_16c;
          }
          else {
LAB_015c6ecc:
            iVar28 = -0x80000000;
          }
          puVar27 = puVar17;
          if (puVar26 != (uint *)0x0) {
            thunk_FUN_016d3fb4(puVar13);
          }
        }
      }
      break;
    }
  }
LAB_015c682c:
  FUN_015c8370(auStack_258,param_2,param_3,&local_3f8);
  local_1f0 = uVar19;
  local_1ec = uVar23;
  local_1e8 = uVar6;
  local_1e4 = uVar7;
  local_1f4 = uVar21;
  local_1f8 = iVar22;
  local_200 = puVar5;
  local_208 = puVar3;
  local_1e0 = local_2b0;
  uStack_1dc = uStack_2ac;
  uStack_1d8 = uStack_2a8;
  uStack_1d4 = uStack_2a4;
  uStack_1d0 = uStack_2a0;
  uStack_1cc = uStack_29c;
  local_1c0 = puVar9;
  puStack_1bc = puVar10;
  local_1c4 = puVar8;
  local_1c8 = iVar20;
  local_1a8[0] = local_298;
  local_1a8[1] = local_294;
  local_1a0 = local_290;
  local_19c = iStack_28c;
  local_198 = iStack_288;
  local_194 = local_284;
  local_190 = uStack_280;
  local_18c = uStack_27c;
  local_188 = uStack_278;
  local_184 = uStack_274;
  local_180 = local_270;
  uStack_17c = uStack_26c;
  uStack_178 = uStack_268;
  uStack_174 = uStack_264;
  uStack_170 = uStack_260;
  uStack_16c = uStack_25c;
  local_160 = local_458;
  local_164 = local_454;
  local_168 = iVar28;
  local_15c = puVar27;
  FUN_015c8690(auStack_3e0,&local_3f8,&local_208,local_1a8,auStack_258);
  iVar22 = local_3f4;
  if (local_2e0 != -0x80000000) {
    FUN_016dd1aa(local_1a8,auStack_3e0,0x130);
    FUN_016dd1aa(param_1 + 8,local_1a8,0x130);
    param_1[2] = local_3f8;
    param_1[3] = local_3f4;
    param_1[4] = local_3f0;
    param_1[5] = local_3ec;
    param_1[6] = local_3e8;
    param_1[7] = local_3e4;
    *param_1 = puVar29;
    param_1[1] = puVar4;
    iVar22 = *param_4;
    goto joined_r0x015c69b4;
  }
  param_1[0x48] = 0x80000000;
  if (local_3f0 != 0) {
    puVar25 = (undefined4 *)(local_3f4 + 4);
    iVar20 = local_3f0;
    do {
      if (puVar25[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar25);
      }
      puVar25 = puVar25 + 3;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
LAB_015c6620:
  if (local_3f8 != 0) {
    thunk_FUN_016d3fb4(iVar22);
  }
  iVar22 = local_3e8;
  if (local_3e4 != 0) {
    puVar25 = (undefined4 *)(local_3e8 + 4);
    uVar19 = local_3e4;
    do {
      FUN_016d6ac4(puVar25[-1],*puVar25);
      puVar25 = puVar25 + 2;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  if (local_3ec != 0) {
    thunk_FUN_016d3fb4(iVar22);
  }
  FUN_016d6ac4(puVar29,puVar4);
  iVar22 = *param_4;
joined_r0x015c69b4:
  if (iVar22 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(iVar15);
  return;
}

