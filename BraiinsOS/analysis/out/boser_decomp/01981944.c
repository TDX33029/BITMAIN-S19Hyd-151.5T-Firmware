// FUN_01981944 @ 01981944 size=2520 calls_out=26 calls_in=1
// strings: .gnu_debugaltlink

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01981944(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  int iVar16;
  uint *puVar17;
  undefined4 *puVar18;
  uint *puVar19;
  uint *extraout_r3;
  uint *puVar20;
  uint *puVar21;
  int iVar22;
  uint *puVar23;
  uint *puVar24;
  uint *puVar25;
  int iVar26;
  bool bVar27;
  undefined8 uVar28;
  uint *local_45c;
  int local_428;
  uint *local_41c;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
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
  uint local_208;
  undefined4 local_204;
  uint *local_200;
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
  
  iVar26 = param_4[1];
  puVar23 = (uint *)param_4[2];
  FUN_019809f0(local_1a8,iVar26,puVar23);
  puVar2 = local_1a0;
  puVar1 = local_1a8[1];
  if (local_1a8[0] != (uint *)&DAT_00000001) {
    iVar22 = *param_4;
    param_1[0x48] = 0x80000000;
    if (iVar22 == 0) {
      return;
    }
    thunk_FUN_01be4678(iVar26);
    return;
  }
  local_3e4 = 0;
  local_3e8 = 4;
  local_3ec = 0;
  local_3f0 = 0;
  local_3f4 = 4;
  local_3f8 = 0;
  FUN_01980be4(local_1a8,local_1a8[1],local_1a0);
  puVar12 = local_15c;
  puVar11 = local_160;
  puVar10 = local_164;
  iVar9 = local_168;
  uVar8 = local_184;
  uVar7 = local_188;
  uVar6 = local_18c;
  uVar5 = local_190;
  uVar4 = local_194;
  iVar22 = local_198;
  puVar3 = local_1a0;
  puVar17 = local_1a8[1];
  puVar24 = local_1a8[0];
  if (local_168 != -0x80000000) {
    local_2b0 = local_180;
    uStack_2ac = uStack_17c;
    uStack_2a8 = uStack_178;
    uStack_2a4 = uStack_174;
    uStack_2a0 = uStack_170;
    uStack_29c = uStack_16c;
    local_428 = -0x80000000;
    puVar25 = puVar2;
    local_41c = puVar23;
    if ((local_19c != 0) && (local_198 != 0)) {
      local_45c = &local_3ec;
      puVar25 = (uint *)0x0;
      iVar16 = local_19c * 0x28;
      puVar20 = local_1a0;
      do {
        uVar13 = *puVar20;
        if (!CARRY4(uVar6,(uint)CARRY4(uVar5,uVar13))) {
          uVar28 = FUN_0164bbd8(iVar22,uVar4,uVar5 + uVar13,uVar6 + CARRY4(uVar5,uVar13),uVar7,uVar8
                               );
          if ((((int)uVar28 != 0) && ((int)((ulonglong)uVar28 >> 0x20) == 0x11)) &&
             (iVar14 = thunk_FUN_01bed842((int)uVar28,".gnu_debugaltlink",0x11), iVar14 == 0)) {
            if (puVar20[1] != 8) {
              puVar21 = (uint *)puVar20[5];
              if (puVar21 != (uint *)0x0) {
                puVar19 = (uint *)puVar20[4];
                puVar20 = extraout_r3;
                if (puVar19 <= puVar17) {
                  puVar20 = (uint *)((int)puVar17 - (int)puVar19);
                }
                if (puVar19 <= puVar17 && puVar21 <= puVar20) {
                  pcVar15 = (char *)((int)puVar24 + (int)puVar19);
                  puVar24 = (uint *)0x0;
                  goto LAB_01981d50;
                }
              }
            }
            break;
          }
        }
        iVar16 = iVar16 + -0x28;
        puVar20 = puVar20 + 10;
      } while (iVar16 != 0);
    }
    goto LAB_01981ba4;
  }
  goto LAB_01981c98;
  while (puVar24 = (uint *)((int)puVar24 + 1), puVar21 != puVar24) {
LAB_01981d50:
    puVar25 = puVar23;
    if (pcVar15[(int)puVar24] == '\0') {
      iVar22 = (int)puVar21 - (int)((int)puVar24 + 1);
      if ((puVar24 == (uint *)0x0) || (*pcVar15 != '/')) {
        if ((uint)puVar23 >> 7 < 3) {
          FUN_01bed4e2(local_1a8,iVar26,puVar23);
          *(char *)((int)local_1a8 + (int)puVar23) = '\0';
          FUN_012fbc58(&local_208,local_1a8,(char *)((int)puVar23 + 1));
          if (local_208 == 1) {
            local_290 = &DAT_01d27a70;
            local_294 = (uint *)0x2;
          }
          else {
            iVar16 = FUN_01be6884(local_204,0);
            if (iVar16 != 0) {
              puVar17 = (uint *)FUN_01bedbda();
              if (puVar17 == (uint *)0x0) {
                local_294 = (uint *)&DAT_00000001;
              }
              else {
                local_294 = (uint *)FUN_01298504(puVar17,1);
                if (local_294 == (uint *)0x0) goto LAB_01981e88;
              }
              FUN_01bed4e2(local_294,iVar16,puVar17);
              thunk_FUN_01be4678(iVar16);
              puVar23 = local_294;
              puVar25 = local_294;
              local_298 = puVar17;
              local_290 = puVar17;
              if (puVar17 != (uint *)&DAT_80000000) goto LAB_01981f38;
              goto LAB_01981eb8;
            }
            puVar18 = (undefined4 *)FUN_01be3244();
            local_294 = (uint *)((uint)local_294 & 0xffffff00);
            local_290 = (uint *)*puVar18;
          }
        }
        else {
          FUN_0198245c(&local_298,iVar26,puVar23,&LAB_01982448);
          if (local_298 != (uint *)&DAT_80000000) {
LAB_01981f38:
            puVar17 = local_294;
            local_41c = local_298;
            if (local_290 == (uint *)0x0) {
              bVar27 = false;
            }
            else {
              bVar27 = (char)*local_294 == '/';
            }
            local_1a0 = (uint *)CONCAT31(local_1a0._1_3_,6);
            local_1a8[1] = local_290;
            local_1a8[0] = local_294;
            local_18c = CONCAT22(CONCAT11(local_18c._3_1_,bVar27),0x201);
            FUN_01982524(&local_208,local_1a8);
            if ((local_208 & 0xff) - 7 < 3) {
              uVar28 = FUN_0198294c(local_1a8);
              puVar23 = (uint *)((ulonglong)uVar28 >> 0x20);
              if (puVar23 == (uint *)0x0) {
                bVar27 = false;
                local_1a0 = (uint *)0x0;
                local_1a8[1] = (uint *)&DAT_00000001;
              }
              else {
                puVar25 = (uint *)FUN_01298504(puVar23,1);
                if (puVar25 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00664620(1,puVar23);
                }
                FUN_01bed4e2(puVar25,(int)uVar28,puVar23);
                bVar27 = ((char *)((int)puVar25 + (int)puVar23))[-1] != '/';
                local_1a8[1] = puVar25;
                local_1a0 = puVar23;
              }
              local_1a8[0] = local_1a0;
              if (puVar24 == (uint *)0x0) {
LAB_01982048:
                if (bVar27) {
                  FUN_0197ac30(local_1a8,puVar23,1,1,1);
                  puVar25 = (uint *)((int)local_1a0 + 1);
                  *(char *)((int)local_1a8[1] + (int)local_1a0) = '/';
                  puVar23 = local_1a8[0];
                  goto LAB_01982084;
                }
                puVar25 = puVar23;
              }
              else {
                puVar25 = (uint *)0x0;
                if (*pcVar15 != '/') goto LAB_01982048;
LAB_01982084:
                local_1a0 = puVar25;
              }
              if ((uint *)((int)puVar23 - (int)puVar25) < puVar24) {
                FUN_0197ac30(local_1a8,puVar25,puVar24,1,1);
                puVar25 = local_1a0;
              }
              puVar23 = local_1a8[1];
              FUN_01bed4e2((char *)((int)local_1a8[1] + (int)puVar25),pcVar15,puVar24);
              local_1a0 = (uint *)((int)puVar25 + (int)puVar24);
              iVar16 = FUN_01982d98(puVar23);
              if (iVar16 == 0) {
                if (local_1a8[0] != (uint *)0x0) {
                  thunk_FUN_01be4678(puVar23);
                }
                if (local_41c != (uint *)0x0) {
                  thunk_FUN_01be4678(puVar17);
                }
                goto LAB_0198212c;
              }
              local_1b0 = local_1a0;
              local_1b4 = local_1a8[1];
              local_1b8 = local_1a8[0];
            }
            else {
              local_1b8 = (uint *)&DAT_80000000;
            }
            if (local_41c != (uint *)0x0) {
              thunk_FUN_01be4678(puVar17);
            }
            goto LAB_0198213c;
          }
        }
LAB_01981eb8:
        puVar23 = local_290;
        if ((char)local_294 == '\x03') {
          uVar13 = *local_290;
          puVar25 = (uint *)local_290[1];
          if ((code *)*puVar25 != (code *)0x0) {
            (*(code *)*puVar25)(uVar13);
          }
          if (puVar25[1] != 0) {
            thunk_FUN_01be4678(uVar13);
          }
          thunk_FUN_01be4678(puVar23);
        }
      }
      else {
        iVar16 = FUN_01982d98(pcVar15,puVar24,param_3);
        if (iVar16 == 0) {
LAB_0198212c:
          FUN_019815c8(&local_1b8,pcVar15 + (int)puVar24 + 1,iVar22);
LAB_0198213c:
          puVar25 = puVar23;
        }
        else {
          puVar25 = (uint *)FUN_01298504(puVar24,1);
          puVar17 = puVar24;
          if (puVar25 == (uint *)0x0) {
LAB_01981e88:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,puVar17);
          }
          FUN_01bed4e2(puVar25,pcVar15,puVar24);
          local_1b8 = puVar24;
          local_1b4 = puVar25;
          local_1b0 = puVar24;
        }
        puVar17 = local_1b4;
        puVar23 = local_1b8;
        if (local_1b8 != (uint *)&DAT_80000000) {
          FUN_019809f0(&local_208,local_1b4,local_1b0);
          uVar13 = local_3e4;
          puVar25 = puVar17;
          if (local_208 == 1) {
            local_41c = local_200;
            if (local_3e4 == local_3ec) {
              FUN_01986d38(local_45c);
            }
            puVar18 = (undefined4 *)(local_3e8 + uVar13 * 8);
            *puVar18 = local_204;
            puVar18[1] = local_200;
            local_3e4 = uVar13 + 1;
            if (0xfffffffe < uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01d27680);
            }
            FUN_01980be4(local_1a8);
            local_428 = -0x80000000;
            if (local_168 != -0x80000000) {
              local_41c = local_164;
              local_45c = local_160;
              uVar28 = FUN_01981420(local_1a8);
              puVar25 = local_15c;
              if ((((int)uVar28 == 0) || ((int)((ulonglong)uVar28 >> 0x20) != iVar22)) ||
                 (iVar22 = thunk_FUN_01bed842((int)uVar28,pcVar15 + (int)puVar24 + 1,iVar22),
                 iVar22 != 0)) {
                if (local_168 != 0) {
                  thunk_FUN_01be4678(local_164,param_2);
                }
              }
              else {
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
                local_428 = local_168;
              }
            }
          }
          else {
            local_428 = -0x80000000;
          }
          if (puVar23 != (uint *)0x0) {
            thunk_FUN_01be4678(puVar17,param_2);
          }
        }
      }
      break;
    }
  }
LAB_01981ba4:
  FUN_01983350(auStack_258,param_2,param_3,&local_3f8);
  local_1f0 = uVar5;
  local_1ec = uVar6;
  local_1e8 = uVar7;
  local_1e4 = uVar8;
  local_1f4 = uVar4;
  local_200 = puVar3;
  local_1e0 = local_2b0;
  uStack_1dc = uStack_2ac;
  uStack_1d8 = uStack_2a8;
  uStack_1d4 = uStack_2a4;
  uStack_1d0 = uStack_2a0;
  uStack_1cc = uStack_29c;
  local_1c0 = puVar11;
  puStack_1bc = puVar12;
  local_1c4 = puVar10;
  local_1c8 = iVar9;
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
  local_160 = local_45c;
  local_164 = local_41c;
  local_168 = local_428;
  local_15c = puVar25;
  FUN_01983678(auStack_3e0,&local_3f8,&local_208,local_1a8,auStack_258);
  if (local_2e0 != -0x80000000) {
    FUN_01bed4e2(local_1a8,auStack_3e0,0x130);
    FUN_01bed4e2(param_1 + 8,local_1a8,0x130);
    param_1[2] = local_3f8;
    param_1[3] = local_3f4;
    param_1[4] = local_3f0;
    param_1[5] = local_3ec;
    param_1[6] = local_3e8;
    param_1[7] = local_3e4;
    *param_1 = puVar1;
    param_1[1] = puVar2;
    goto LAB_01981cf8;
  }
LAB_01981c98:
  param_1[0x48] = 0x80000000;
  FUN_01981388(&local_3f8);
  FUN_01be6d98(puVar1,puVar2);
LAB_01981cf8:
  if (*param_4 != 0) {
    thunk_FUN_01be4678(iVar26);
  }
  return;
}

