// FUN_015cb668 @ 015cb668 size=3536 calls_out=27 calls_in=3
// strings: dns_sd::service_daemon

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015cb668(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int **ppiVar16;
  uint uVar17;
  int iVar18;
  code *pcVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint *puVar22;
  uint uVar23;
  int *piVar24;
  int **ppiVar25;
  uint uVar26;
  int **ppiVar27;
  uint *puVar28;
  int iVar29;
  int **ppiVar30;
  int **ppiVar31;
  uint uVar32;
  int **ppiVar33;
  uint *puVar34;
  uint *puVar35;
  uint *puVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  int **local_200;
  int **local_1fc;
  int **local_1f8;
  int **local_1f4;
  int local_1b0;
  uint local_184;
  int local_180;
  int **local_178;
  int **local_170;
  int local_16c;
  undefined4 uStack_168;
  int local_164;
  uint local_160;
  uint uStack_15c;
  uint uStack_158;
  uint local_154;
  int **local_150;
  uint local_14c;
  uint uStack_148;
  uint local_144;
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  uint local_134;
  int **local_130;
  uint uStack_12c;
  int **ppiStack_128;
  int local_124;
  uint local_120;
  int **ppiStack_11c;
  uint uStack_118;
  uint local_114;
  int *local_110;
  int **local_10c;
  undefined1 auStack_108 [12];
  int local_fc;
  int local_d4;
  int local_c8;
  int local_bc;
  int **local_a8;
  int **local_a4;
  int **local_a0;
  uint local_9c;
  undefined4 *local_98;
  int **local_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  int ***local_84;
  int local_58;
  int **local_44;
  int **local_40;
  int **local_3c;
  int *local_38;
  int *local_34;
  int *piStack_30;
  int *local_2c;
  int local_28;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    return;
  }
  uVar37 = thunk_FUN_01bee35a(&local_120,0x2c0);
  puVar28 = (uint *)((int)uVar37 + (int)((ulonglong)uVar37 >> 0x20));
  if ((char)puVar28[4] == '\0') {
    FUN_019ae6ac(&local_a8);
    *puVar28 = (uint)local_a8;
    puVar28[1] = (uint)local_a4;
    puVar28[2] = (uint)local_a0;
    puVar28[3] = local_9c;
    *(undefined1 *)(puVar28 + 4) = 1;
  }
  local_160 = *puVar28;
  uStack_15c = puVar28[1];
  local_154 = puVar28[3];
  local_140 = local_160 + 1;
  uStack_13c = uStack_15c + (0xfffffffe < local_160);
  puVar5 = puVar28 + 2;
  uStack_158 = *puVar5;
  *puVar28 = local_140;
  puVar28[1] = uStack_13c;
  local_170 = (int **)&DAT_0056d238;
  local_16c = 0;
  uStack_168 = 0;
  local_164 = 0;
  local_120 = local_160 + 2;
  ppiStack_11c = (int **)(uStack_15c + (0xfffffffd < local_160));
  *puVar28 = local_120;
  puVar28[1] = (uint)ppiStack_11c;
  local_150 = (int **)&DAT_0056d238;
  local_14c = 0;
  uStack_148 = 0;
  local_144 = 0;
  *puVar28 = local_160 + 3;
  puVar28[1] = uStack_15c + (0xfffffffc < local_160);
  local_130 = (int **)&DAT_0056d238;
  uStack_12c = 0;
  ppiStack_128 = (int **)0x0;
  local_124 = 0;
  uStack_118 = uStack_158;
  local_114 = local_154;
  uStack_138 = uStack_158;
  local_134 = local_154;
  uVar37 = FUN_015fbb98();
  puVar36 = (uint *)*param_1;
  local_180 = param_1[3];
  puVar22 = (uint *)((uint)&local_a8 | 4);
  puVar35 = puVar36 + 1;
  local_184 = ~*puVar36 & 0x80808080;
LAB_015cb808:
  iVar18 = param_1[0x48];
  uVar26 = param_1[0x49];
  iVar6 = param_1[0x4b];
  uVar7 = param_1[0x4e];
  uVar20 = param_1[0x4f];
  uVar8 = param_1[0x4c];
  uVar21 = param_1[0x4d];
  uVar9 = local_184;
  while (local_180 != 0) {
    puVar34 = puVar35;
    if (uVar9 == 0) {
      do {
        puVar35 = puVar34 + 1;
        uVar9 = *puVar34;
        puVar36 = puVar36 + -0x18;
        puVar34 = puVar35;
      } while ((uVar9 & 0x80808080) == 0x80808080);
      uVar9 = uVar9 & 0x80808080 ^ 0x80808080;
    }
    local_180 = local_180 + -1;
    local_184 = uVar9 - 1 & uVar9;
    uVar17 = (uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8
                           | uVar9 >> 0x18) >> 3;
    uVar23 = puVar36[uVar17 * -6 + -5];
    uVar32 = puVar36[uVar17 * -6 + -4];
    uVar9 = local_184;
    if (iVar6 != 0) {
      uVar10 = FUN_01adafd4(uVar8,uVar21,uVar7,uVar20,uVar23,uVar32);
      uVar14 = uVar10 >> 0x19;
      iVar29 = 0;
      while( true ) {
        uVar10 = uVar26 & uVar10;
        uVar11 = *(uint *)(iVar18 + uVar10);
        uVar12 = uVar11 ^ uVar14 * 0x1010101;
        uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff;
        while (uVar12 != 0) {
          iVar13 = iVar18 + -0x10 +
                   (uVar10 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                            (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                   uVar26) * -0x10;
          uVar12 = uVar12 - 1 & uVar12;
          if ((uVar32 == *(uint *)(iVar13 + 8)) &&
             (iVar13 = thunk_FUN_01bed842(uVar23,*(undefined4 *)(iVar13 + 4),uVar32), iVar13 == 0))
          {
            uVar26 = puVar36[uVar17 * -6 + -2];
            uVar23 = puVar36[uVar17 * -6 + -1];
            uVar9 = uVar26;
            goto LAB_015cb9e0;
          }
        }
        if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
        iVar29 = iVar29 + 4;
        uVar10 = uVar10 + iVar29;
      }
    }
  }
  local_84 = &local_170;
  local_94 = local_170;
  uStack_90 = local_16c;
  uStack_8c = uStack_168;
  uStack_88 = local_164;
  uStack_168 = 0;
  local_9c = (int)local_170 + local_16c + 1;
  ppiVar31 = local_170 + 1;
  uVar9 = ~(uint)*local_170 & 0x80808080;
  local_98 = (undefined4 *)local_164;
  local_a8 = local_170;
  ppiVar30 = local_170;
  iVar6 = local_164;
  local_170 = (int **)&DAT_0056d238;
  local_16c = 0;
  local_164 = 0;
  local_a4 = (int **)uVar9;
  local_a0 = ppiVar31;
  goto LAB_015cc184;
LAB_015cb9e0:
  uVar32 = uVar9;
  if (uVar32 != uVar26 + uVar23 * 0x18) {
    pcVar19 = *(code **)(*(int *)(uVar32 + 0x14) + 0x58);
    iVar6 = (*pcVar19)(*(undefined4 *)(uVar32 + 0x10),pcVar19,(int)uVar37,
                       (int)((ulonglong)uVar37 >> 0x20));
    uVar9 = uVar32 + 0x18;
    if (iVar6 == 0) {
      uVar38 = (**(code **)(*(int *)(uVar32 + 0x14) + 0x1c))(*(undefined4 *)(uVar32 + 0x10));
      iVar6 = (int)uVar38;
      (**(code **)((int)((ulonglong)uVar38 >> 0x20) + 0xc))(&local_a8,iVar6);
      if ((local_a8 == (int **)0xfd1f1978 && local_a0 == (int **)0x901dc7f5) &&
          (local_a4 == (int **)0x4f0c4dfb && local_9c == 0xd152ef85)) {
        piVar24 = *(int **)(iVar6 + 0x44);
        ppiVar30 = *(int ***)(iVar6 + 0x48);
        local_110 = piVar24;
        local_10c = ppiVar30;
        iVar18 = FUN_015db690(param_2,piVar24,ppiVar30);
        if (iVar18 != 0) {
          FUN_015cc78c(&local_a8,param_1,puVar36[uVar17 * -6 + -5],puVar36[uVar17 * -6 + -4],piVar24
                       ,ppiVar30);
          if (local_58 == -0x80000000) {
            if (&DAT_00000001 < local_a8) {
              FUN_0134bd64(local_a4,local_a0);
            }
          }
          else {
            FUN_01bed4e2(auStack_108,&local_a8,0x60);
            if (3 < DAT_01d51b00) {
              local_44 = &local_110;
              local_40 = (int **)&LAB_018a13b8;
              local_9c = 0x17;
              local_98 = (undefined4 *)&DAT_01cfcf18;
              local_a4 = (int **)&DAT_00000017;
              local_a0 = (int **)0x4b3d9f;
              local_a8 = (int **)0x4b3d9f;
              FUN_015fb650(&DAT_00579f37,&local_44,4,&local_a8);
            }
            iVar18 = 0;
            if (local_d4 != 0) {
              iVar18 = local_c8;
            }
            local_178 = ppiVar30;
            if (((local_d4 == 0 || iVar18 == 0) || (local_bc == 0)) || (local_fc == 0)) {
              if (3 < DAT_01d51b00) {
                local_44 = &local_110;
                local_40 = (int **)&LAB_018a13b8;
                local_9c = 0x17;
                local_98 = (undefined4 *)&DAT_01cfcf28;
                local_a4 = (int **)&DAT_00000017;
                local_a0 = (int **)0x4b3d9f;
                local_a8 = (int **)0x4b3d9f;
                FUN_015fb650(&DAT_005bb50b,&local_44,4,&local_a8);
              }
              uVar7 = *(undefined4 *)(iVar6 + 0x44);
              iVar18 = *(int *)(iVar6 + 0x48);
              uVar14 = FUN_01a9c24c(param_1[0x6c],param_1[0x6d],param_1[0x6e],param_1[0x6f],uVar7,
                                    iVar18);
              iVar6 = param_1[0x68];
              uVar10 = param_1[0x69];
              uVar32 = uVar14 >> 0x19;
              local_1b0 = 0;
              do {
                uVar14 = uVar10 & uVar14;
                uVar11 = *(uint *)(iVar6 + uVar14);
                uVar12 = uVar11 ^ uVar32 * 0x1010101;
                uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff;
                while (uVar12 != 0) {
                  uVar15 = uVar12 >> 8;
                  uVar1 = uVar12 >> 0x10;
                  uVar2 = uVar12 >> 0x18;
                  uVar3 = uVar12 << 0x18;
                  uVar12 = uVar12 - 1 & uVar12;
                  uVar15 = uVar14 + ((uint)LZCOUNT(uVar3 | (uVar15 & 0xff) << 0x10 |
                                                   (uVar1 & 0xff) << 8 | uVar2) >> 3) & uVar10;
                  iVar29 = iVar6 + -0xc + uVar15 * -0xc;
                  if ((iVar18 == *(int *)(iVar29 + 8)) &&
                     (iVar29 = thunk_FUN_01bed842(uVar7,*(undefined4 *)(iVar29 + 4),iVar18),
                     iVar29 == 0)) {
                    iVar6 = iVar6 + uVar15 * -0xc;
                    FUN_015d2850(param_1 + 0x68,iVar6);
                    if (*(int *)(iVar6 + -0xc) == -0x80000000) goto LAB_015cbd18;
                    FUN_0134bd64(*(int *)(iVar6 + -0xc),*(undefined4 *)(iVar6 + -8));
                    uVar7 = 0;
                    ppiVar25 = (int **)puVar36[uVar17 * -6 + -4];
                    ppiVar31 = local_1f8;
                    if ((int)ppiVar25 < 0) goto LAB_015cc434;
                    uVar32 = puVar36[uVar17 * -6 + -5];
                    if (ppiVar25 != (int **)0x0) {
                      local_1f8 = (int **)FUN_01298504(ppiVar25,1);
                      ppiVar31 = ppiVar25;
                      if (local_1f8 != (int **)0x0) {
                        goto LAB_015cbed8;
                      }
LAB_015cc430:
                      uVar7 = 1;
                      goto LAB_015cc434;
                    }
                    local_1f8 = (int **)&DAT_00000001;
                    ppiVar31 = (int **)0x0;
LAB_015cbed8:
                    FUN_01bed4e2(local_1f8,uVar32,ppiVar25);
                    local_44 = ppiVar31;
                    local_40 = local_1f8;
                    local_3c = ppiVar25;
                    FUN_015dae2c(&local_a8,&local_130,&local_44);
                    ppiVar33 = local_94;
                    puVar4 = local_98;
                    uVar32 = local_9c;
                    ppiVar27 = local_a0;
                    ppiVar25 = local_a4;
                    ppiVar31 = local_a8;
                    ppiVar16 = local_a8;
                    if (local_a0 != (int **)&DAT_80000000) {
                      if ((char)puVar28[4] == '\0') {
                        FUN_019ae6ac(&local_a8);
                        *puVar5 = (uint)local_a0;
                        puVar28[3] = local_9c;
                        *puVar28 = (uint)local_a8;
                        puVar28[1] = (uint)local_a4;
                        *(undefined1 *)(puVar28 + 4) = 1;
                      }
                      uVar14 = *puVar28;
                      uVar10 = puVar28[1];
                      local_a8 = ppiVar27;
                      uVar11 = *puVar5;
                      uVar12 = puVar28[3];
                      *puVar28 = uVar14 + 1;
                      puVar28[1] = uVar10 + (0xfffffffe < uVar14);
                      *puVar22 = uVar32;
                      puVar22[1] = (uint)puVar4;
                      local_98 = &DAT_0056d238;
                      local_94 = (int **)0x0;
                      puVar22[9] = uVar11;
                      puVar22[10] = uVar12;
                      puVar22[7] = uVar14;
                      puVar22[8] = uVar10;
                      ppiVar16 = (int **)FUN_015d2e84(ppiVar33,uVar10,ppiVar31,ppiVar25,&local_a8);
                    }
                    uVar7 = 0;
                    ppiVar31 = local_200;
                    if ((int)ppiVar30 < 0) goto LAB_015cc434;
                    if (ppiVar30 == (int **)0x0) {
                      local_200 = (int **)&DAT_00000001;
                      local_178 = (int **)0x0;
                    }
                    else {
                      local_200 = (int **)FUN_01298504(ppiVar30,1);
                      ppiVar31 = ppiVar30;
                      if (local_200 == (int **)0x0) goto LAB_015cc430;
                    }
                    FUN_01bed4e2(local_200,piVar24,ppiVar30);
                    local_a8 = local_178;
                    local_a4 = local_200;
                    local_a0 = ppiVar30;
                    FUN_015dcc90(ppiVar16 + -8,&local_a8);
                    goto LAB_015cc034;
                  }
                }
                if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) goto LAB_015cbd18;
                local_1b0 = local_1b0 + 4;
                uVar14 = uVar14 + local_1b0;
              } while( true );
            }
            if (3 < DAT_01d51b00) {
              local_44 = &local_110;
              local_40 = (int **)&LAB_018a13b8;
              local_9c = 0x17;
              local_98 = (undefined4 *)&DAT_01cfcf38;
              local_a4 = (int **)&DAT_00000017;
              local_a0 = (int **)0x4b3d9f;
              local_a8 = (int **)0x4b3d9f;
              FUN_015fb650(&DAT_00597df5,&local_44,4,&local_a8);
            }
            uVar7 = 0;
            ppiVar31 = local_1f4;
            if ((int)ppiVar30 < 0) goto LAB_015cc434;
            if (ppiVar30 != (int **)0x0) {
              local_1f4 = (int **)FUN_01298504(ppiVar30,1);
              if (local_1f4 != (int **)0x0) goto LAB_015cbe54;
              goto LAB_015cc428;
            }
            local_1f4 = (int **)&DAT_00000001;
            local_178 = (int **)0x0;
LAB_015cbe54:
            FUN_01bed4e2(local_1f4,piVar24,ppiVar30);
            local_a8 = local_178;
            local_a4 = local_1f4;
            local_a0 = ppiVar30;
            FUN_015dcc90(&local_170,&local_a8);
            ppiVar30 = (int **)thunk_FUN_01be5118(0x60);
            if (ppiVar30 == (int **)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(8,0x60);
            }
            FUN_01bed4e2(ppiVar30,auStack_108,0x60);
            local_a8 = (int **)0x2;
            local_a4 = ppiVar30;
            FUN_015a8be8(param_1 + 0x48,puVar36[uVar17 * -6 + -5],puVar36[uVar17 * -6 + -4],
                         &local_a8);
          }
        }
      }
    }
    goto LAB_015cb9e0;
  }
  goto LAB_015cb808;
LAB_015cbd18:
  uVar7 = 0;
  ppiVar31 = local_1fc;
  if ((int)ppiVar30 < 0) {
LAB_015cc434:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar7,ppiVar31);
  }
LAB_015cc034:
  if (ppiVar30 == (int **)0x0) {
    local_1fc = (int **)&DAT_00000001;
    local_178 = (int **)0x0;
  }
  else {
    local_1fc = (int **)FUN_01298504(ppiVar30,1);
    if (local_1fc == (int **)0x0) {
LAB_015cc428:
      uVar7 = 1;
      ppiVar31 = ppiVar30;
      goto LAB_015cc434;
    }
    local_178 = ppiVar30;
  }
  FUN_01bed4e2(local_1fc,piVar24,ppiVar30);
  local_a8 = local_178;
  local_a4 = local_1fc;
  local_a0 = ppiVar30;
  FUN_015dcc90(&local_150,&local_a8);
  FUN_015a8ee0(auStack_108);
  goto LAB_015cb9e0;
LAB_015cc184:
  iVar18 = 0;
  if (iVar6 == 0) goto LAB_015cc224;
  uVar26 = uVar9;
  ppiVar25 = ppiVar31;
  if (uVar9 == 0) {
    do {
      ppiVar31 = ppiVar25 + 1;
      piVar24 = *ppiVar25;
      ppiVar30 = ppiVar30 + -0xc;
      ppiVar25 = ppiVar31;
    } while (((uint)piVar24 & 0x80808080) == 0x80808080);
    uVar26 = (uint)piVar24 & 0x80808080 ^ 0x80808080;
    local_a8 = ppiVar30;
    local_a0 = ppiVar31;
  }
  iVar18 = iVar6 + -1;
  uVar9 = uVar26 - 1 & uVar26;
  uVar26 = (uint)LZCOUNT(uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 |
                         (uVar26 >> 0x10 & 0xff) << 8 | uVar26 >> 0x18) >> 3;
  ppiVar25 = (int **)ppiVar30[uVar26 * -3 + -3];
  if (ppiVar25 == (int **)&DAT_80000000) {
    local_a4 = (int **)uVar9;
    goto LAB_015cc224;
  }
  ppiVar33 = (int **)ppiVar30[uVar26 * -3 + -2];
  ppiVar27 = (int **)ppiVar30[uVar26 * -3 + -1];
  local_a4 = (int **)uVar9;
  FUN_015dd424(param_1 + 0x60,ppiVar33,ppiVar27);
  local_44 = ppiVar25;
  local_40 = ppiVar33;
  local_3c = ppiVar27;
  FUN_015dcc90(param_1 + 0x68,&local_44);
  iVar6 = iVar18;
  goto LAB_015cc184;
LAB_015cc224:
  local_98 = (undefined4 *)iVar18;
  FUN_015d1458(&local_a8);
  local_84 = &local_150;
  local_94 = local_150;
  uStack_90 = local_14c;
  uStack_8c = uStack_148;
  uStack_88 = local_144;
  uStack_148 = 0;
  ppiVar31 = local_150 + 1;
  local_9c = (int)local_150 + local_14c + 1;
  uVar26 = ~(uint)*local_150 & 0x80808080;
  local_98 = (undefined4 *)local_144;
  local_a8 = local_150;
  ppiVar30 = local_150;
  uVar9 = local_144;
  local_150 = (int **)&DAT_0056d238;
  local_14c = 0;
  local_144 = 0;
  local_a4 = (int **)uVar26;
  local_a0 = ppiVar31;
  do {
    uVar17 = 0;
    if (uVar9 == 0) {
LAB_015cc320:
      local_98 = (undefined4 *)uVar17;
      FUN_015d1458(&local_a8);
      if (local_124 == 0) {
        FUN_015d1734(&local_130);
      }
      else {
        if (3 < DAT_01d51b00) {
          local_2c = &local_28;
          local_28 = local_124;
          local_44 = &local_2c;
          local_40 = (int **)&LAB_016cd65c;
          local_98 = (undefined4 *)&DAT_01cfcf08;
          local_9c = 0x17;
          local_a4 = (int **)0x17;
          local_a0 = (int **)0x4b3d9f;
          local_a8 = (int **)0x4b3d9f;
          FUN_015fb650(&DAT_0057c04c,&local_44,4,&local_a8);
        }
        local_a8 = local_130;
        local_a4 = (int **)uStack_12c;
        local_a0 = ppiStack_128;
        local_9c = local_124;
        local_98 = (undefined4 *)local_120;
        local_94 = ppiStack_11c;
        uStack_90 = uStack_118;
        uStack_8c = local_114;
        FUN_015c48dc(param_1,&local_a8);
      }
      FUN_015d1344(&local_150);
      FUN_015d1344(&local_170);
      return;
    }
    uVar17 = uVar26;
    ppiVar25 = ppiVar31;
    if (uVar26 == 0) {
      do {
        ppiVar31 = ppiVar25 + 1;
        piVar24 = *ppiVar25;
        ppiVar30 = ppiVar30 + -0xc;
        ppiVar25 = ppiVar31;
      } while (((uint)piVar24 & 0x80808080) == 0x80808080);
      uVar17 = (uint)piVar24 & 0x80808080 ^ 0x80808080;
      local_a8 = ppiVar30;
      local_a0 = ppiVar31;
    }
    uVar9 = uVar9 - 1;
    uVar26 = uVar17 - 1 & uVar17;
    uVar17 = (uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                           (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3;
    local_a4 = (int **)uVar26;
    if (ppiVar30[uVar17 * -3 + -3] == (int *)0x80000000) {
      uVar17 = uVar9;
      goto LAB_015cc320;
    }
    local_34 = ppiVar30[uVar17 * -3 + -2];
    piStack_30 = ppiVar30[uVar17 * -3 + -1];
    local_38 = ppiVar30[uVar17 * -3 + -3];
    FUN_015cc6c0(param_1,&local_38);
  } while( true );
}

