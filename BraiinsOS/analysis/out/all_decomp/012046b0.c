// FUN_012046b0 @ 012046b0 size=2004 calls_out=17 calls_in=1
// strings: $recursiveRef

longlong FUN_012046b0(int param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int **ppiVar21;
  int iVar22;
  int **ppiVar23;
  int iVar24;
  undefined4 uVar25;
  uint uVar26;
  int *piVar27;
  int *piVar28;
  uint uVar29;
  int local_3d8;
  undefined4 local_3c8;
  int *piStack_3c4;
  int *piStack_3c0;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 local_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 local_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  int *local_348;
  int local_344;
  int *local_340;
  int local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  int *local_32c;
  int *local_328;
  undefined1 auStack_324 [20];
  int local_310;
  int local_30c;
  undefined1 local_2f8;
  int *local_2f0;
  int *local_2ec;
  int local_2e8;
  int *local_2e4;
  undefined4 local_2e0 [38];
  int local_248;
  undefined4 local_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238 [38];
  int local_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  uint local_18c;
  undefined1 auStack_188 [152];
  int local_f0;
  int local_e0;
  char *local_dc;
  undefined4 local_d8;
  int *piStack_d4;
  int *piStack_d0;
  undefined1 local_cc;
  int local_40;
  undefined4 local_30;
  
  iVar16 = *param_2;
  if (iVar16 != 0) {
    iVar24 = param_2[1];
    while( true ) {
      uVar29 = (uint)*(ushort *)(iVar16 + 0x192);
      iVar22 = iVar16 + 0x10c;
      uVar26 = 0xffffffff;
      iVar18 = uVar29 * 0xc;
      do {
        if (iVar18 == 0) goto LAB_01204758;
        uVar14 = *(uint *)(iVar22 + 8);
        uVar11 = uVar14;
        if (0xc < uVar14) {
          uVar11 = 0xd;
        }
        iVar7 = FUN_016dd50a("$recursiveRef",*(undefined4 *)(iVar22 + 4),uVar11);
        if (iVar7 == 0) {
          iVar7 = 0xd - uVar14;
        }
        iVar18 = iVar18 + -0xc;
        uVar26 = uVar26 + 1;
        iVar22 = iVar22 + 0xc;
      } while ((char)((0 < iVar7) - (iVar7 < 0)) == '\x01');
      uVar29 = uVar26;
      if (0 < iVar7 == iVar7 < 0) break;
LAB_01204758:
      if (iVar24 == 0) goto LAB_01204a58;
      iVar24 = iVar24 + -1;
      iVar16 = *(int *)(iVar16 + uVar29 * 4 + 0x198);
    }
    FUN_012643bc(&local_e0,param_1);
    if (local_e0 != -0x7ffffff6) {
      uVar25 = FUN_012043c4(&local_e0);
      return CONCAT44(uVar25,1);
    }
    local_3c8 = local_d8;
    piStack_3c4 = piStack_d4;
    piStack_3c0 = piStack_d0;
    if (*local_dc == '\x05') {
      uVar25 = *(undefined4 *)(param_1 + 0x4c);
      FUN_01348cc4(&local_3b8,uVar25,local_cc,local_dc);
      piVar27 = *(int **)(param_1 + 0x38);
      pcVar8 = local_dc + 4;
      iVar16 = *(int *)(param_1 + 0x3c);
      do {
        iVar24 = *piVar27;
        bVar3 = (bool)hasExclusiveAccess(piVar27);
      } while (!bVar3);
      *piVar27 = iVar24 + 1;
      if (iVar24 < 0) {
LAB_01204e80:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1204e80);
        (*pcVar1)();
      }
      uVar13 = *(undefined4 *)(param_1 + 0x48);
      do {
        iVar24 = *piVar27;
        bVar3 = (bool)hasExclusiveAccess(piVar27);
      } while (!bVar3);
      *piVar27 = iVar24 + 1;
      if (iVar24 < 0) goto LAB_01204e80;
      FUN_0119dc58(auStack_324,param_1 + 0x5c);
      piVar9 = piStack_3c0;
      piVar6 = piStack_3c4;
      local_330 = local_3c8;
      local_32c = piStack_3c4;
      local_328 = piStack_3c0;
      local_380 = local_3b8;
      uStack_37c = uStack_3b4;
      uStack_378 = uStack_3b0;
      uStack_374 = uStack_3ac;
      local_370 = local_3a8;
      uStack_36c = uStack_3a4;
      uStack_368 = uStack_3a0;
      uStack_364 = uStack_39c;
      uStack_360 = uStack_398;
      local_35c = local_394;
      uStack_358 = uStack_390;
      uStack_354 = uStack_38c;
      uStack_350 = uStack_388;
      uStack_34c = uStack_384;
      local_2f8 = local_cc;
      uVar29 = *(uint *)(local_30c + 8);
      local_348 = piVar27;
      local_344 = iVar16;
      local_340 = piVar27;
      local_33c = iVar16;
      local_338 = uVar13;
      local_334 = uVar25;
      if (0x7ffffffe < uVar29) {
        FUN_00fb71b0(&DAT_0188aef8);
        goto LAB_01204e80;
      }
      *(uint *)(local_30c + 8) = uVar29 + 1;
      if (*(int *)(local_30c + 0x1c) != 0) {
        uVar12 = *(uint *)(local_30c + 0x20);
        uVar19 = *(uint *)(local_30c + 0x24);
        uVar17 = *(uint *)(local_30c + 0x28) ^ (uint)pcVar8;
        uVar11 = *(uint *)(local_30c + 0x2c);
        uVar26 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                 uVar11 >> 0x18;
        lVar4 = (ulonglong)uVar26 * 0xb36a80d2;
        uVar14 = (uint)lVar4;
        uVar26 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
                 uVar17 >> 0x18) * -0x4c957f2e +
                 uVar26 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
        uVar11 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                 uVar14 >> 0x18) ^
                 uVar11 * 0x2df45158 +
                 uVar17 * 0x2d7f954c + (int)((ulonglong)uVar17 * 0x2df45158 >> 0x20);
        uVar20 = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                 uVar19 >> 0x18;
        uVar14 = (uVar26 * 0x1000000 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
                 uVar26 >> 0x18) ^ (uint)((ulonglong)uVar17 * 0x2df45158);
        lVar4 = (ulonglong)uVar20 * (ulonglong)uVar14;
        uVar26 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                 uVar11 >> 0x18;
        lVar5 = (ulonglong)~uVar12 * (ulonglong)uVar26;
        uVar17 = (uint)lVar5;
        iVar24 = *(int *)(local_30c + 0x10);
        uVar26 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                 uVar14 >> 0x18) * ~uVar12 + uVar26 * ~uVar19 + (int)((ulonglong)lVar5 >> 0x20);
        uVar26 = (uVar26 * 0x1000000 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
                 uVar26 >> 0x18) ^ (uint)lVar4;
        uVar12 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
                 uVar17 >> 0x18) ^
                 uVar11 * uVar20 +
                 uVar14 * (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                           (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) +
                 (int)((ulonglong)lVar4 >> 0x20);
        uVar11 = uVar12;
        if ((uVar14 & 0x20) != 0) {
          uVar11 = uVar26;
          uVar26 = uVar12;
        }
        uVar11 = uVar26 << (uVar14 & 0x1f) | (uVar11 >> 1) >> (~uVar14 & 0x1f);
        uVar26 = uVar11 >> 0x19;
        local_3d8 = 0;
        while( true ) {
          uVar11 = *(uint *)(local_30c + 0x14) & uVar11;
          uVar12 = *(uint *)(iVar24 + uVar11);
          uVar14 = uVar12 ^ uVar26 * 0x1010101;
          uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff;
          while (uVar14 != 0) {
            uVar17 = uVar14 >> 8;
            uVar19 = uVar14 >> 0x10;
            uVar20 = uVar14 >> 0x18;
            uVar2 = uVar14 << 0x18;
            uVar14 = uVar14 - 1 & uVar14;
            uVar17 = uVar11 + ((uint)LZCOUNT(uVar2 | (uVar17 & 0xff) << 0x10 | (uVar19 & 0xff) << 8
                                             | uVar20) >> 3) & *(uint *)(local_30c + 0x14);
            if (*(char **)(iVar24 + -8 + uVar17 * -8) == pcVar8) {
              iVar24 = iVar24 + uVar17 * -8;
              piVar27 = *(int **)(iVar24 + -4);
              do {
                iVar16 = *piVar27;
                bVar3 = (bool)hasExclusiveAccess(piVar27);
              } while (!bVar3);
              *piVar27 = iVar16 + 1;
              if (iVar16 < 0) goto LAB_01204e80;
              uVar25 = *(undefined4 *)(iVar24 + -4);
              uVar13 = 0;
              *(int *)(local_30c + 8) = *(int *)(local_30c + 8) + -1;
              goto LAB_01204d98;
            }
          }
          if ((uVar12 & 0x80808080 & uVar12 << 1) != 0) break;
          local_3d8 = local_3d8 + 4;
          uVar11 = uVar11 + local_3d8;
        }
      }
      *(uint *)(local_30c + 8) = uVar29;
      do {
        iVar24 = *piStack_3c4;
        bVar3 = (bool)hasExclusiveAccess(piStack_3c4);
      } while (!bVar3);
      *piStack_3c4 = iVar24 + 1;
      if (iVar24 < 0) goto LAB_01204e80;
      do {
        iVar24 = *piVar27;
        bVar3 = (bool)hasExclusiveAccess(piVar27);
      } while (!bVar3);
      *piVar27 = iVar24 + 1;
      if (iVar24 < 0) goto LAB_01204e80;
      if (piStack_3c0 != (int *)0x0) {
        do {
          iVar24 = *piStack_3c0;
          bVar3 = (bool)hasExclusiveAccess(piStack_3c0);
        } while (!bVar3);
        *piStack_3c0 = iVar24 + 1;
        if (iVar24 < 0) goto LAB_01204e80;
      }
      local_2e4 = piStack_3c0;
      uVar29 = *(uint *)(local_310 + 8);
      local_2f0 = piStack_3c4;
      local_2ec = piVar27;
      local_2e8 = iVar16;
      if (0x7ffffffe < uVar29) {
        FUN_00fb71b0(&DAT_0188aeb8);
        goto LAB_01204e80;
      }
      *(uint *)(local_310 + 8) = uVar29 + 1;
      if (*(int *)(local_310 + 0x1c) != 0) {
        uVar26 = FUN_011e02d8(local_310 + 0x20,&local_2f0);
        uVar11 = *(uint *)(local_310 + 0x14);
        uVar29 = uVar26 >> 0x19;
        ppiVar23 = (int **)0x0;
        if (piVar9 != (int *)0x0) {
          ppiVar23 = &local_2e4;
        }
        iVar18 = *(int *)(local_310 + 0x10);
        iVar24 = 0;
        do {
          uVar26 = uVar11 & uVar26;
          uVar12 = *(uint *)(iVar18 + uVar26);
          uVar14 = uVar12 ^ uVar29 * 0x1010101;
          for (uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff; uVar14 != 0;
              uVar14 = uVar14 - 1 & uVar14) {
            iVar22 = iVar18 + (uVar26 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10
                                                       | (uVar14 >> 0x10 & 0xff) << 8 |
                                                       uVar14 >> 0x18) >> 3) & uVar11) * -0x14;
            piVar9 = *(int **)(iVar22 + -0x14);
            if ((((piVar6 == piVar9) ||
                 ((piVar6[4] == piVar9[4] &&
                  (iVar7 = thunk_FUN_016dd50a(piVar6[3],piVar9[3]), iVar7 == 0)))) &&
                (iVar16 == *(int *)(iVar22 + -0xc))) &&
               (iVar7 = thunk_FUN_016dd50a(piVar27 + 2,*(int *)(iVar22 + -0x10) + 8,iVar16),
               iVar7 == 0)) {
              piVar9 = (int *)(iVar22 + -8);
              ppiVar21 = ppiVar23;
              if (*piVar9 == 0) {
                piVar9 = (int *)0x0;
              }
LAB_01204c5c:
              if (ppiVar21 == (int **)0x0) {
                if (piVar9 == (int *)0x0) {
                  piVar27 = *(int **)(iVar22 + -4);
                  do {
                    iVar16 = *piVar27;
                    bVar3 = (bool)hasExclusiveAccess(piVar27);
                  } while (!bVar3);
                  *piVar27 = iVar16 + 1;
                  if (iVar16 < 0) goto LAB_01204e80;
                  uVar25 = *(undefined4 *)(iVar22 + -4);
                  uVar13 = 0;
                  *(int *)(local_310 + 8) = *(int *)(local_310 + 8) + -1;
                  goto LAB_01204d90;
                }
              }
              else if (piVar9 != (int *)0x0) {
                iVar7 = (*ppiVar21)[2];
                iVar10 = *(int *)(*piVar9 + 8);
                if (*(int *)(iVar7 + 0x10) == *(int *)(iVar10 + 0x10)) goto code_r0x01204c8c;
              }
            }
LAB_01204cb8:
          }
          if ((uVar12 & 0x80808080 & uVar12 << 1) != 0) goto LAB_01204d50;
          iVar24 = iVar24 + 4;
          uVar26 = uVar26 + iVar24;
        } while( true );
      }
      goto LAB_01204d58;
    }
    FUN_01167ec8(&local_3c8);
  }
LAB_01204a58:
  uVar29 = 0;
LAB_01204a5c:
  return (ulonglong)uVar29 << 0x20;
code_r0x01204c8c:
  piVar9 = (int *)(*piVar9 + 0xc);
  iVar15 = *piVar9;
  ppiVar21 = (int **)(*ppiVar21 + 3);
  piVar28 = *ppiVar21;
  iVar7 = thunk_FUN_016dd50a(*(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(iVar10 + 0xc));
  if (piVar28 == (int *)0x0) {
    ppiVar21 = (int **)0x0;
  }
  if (iVar15 == 0) {
    piVar9 = (int *)0x0;
  }
  if (iVar7 != 0) goto LAB_01204cb8;
  goto LAB_01204c5c;
LAB_01204d50:
  uVar29 = *(int *)(local_310 + 8) - 1;
LAB_01204d58:
  *(uint *)(local_310 + 8) = uVar29;
  FUN_011fa954(local_238,&local_380,pcVar8);
  if (local_1a0 == -0x80000000) {
    uVar25 = FUN_011f0ab8(local_238[0]);
    uVar13 = 1;
LAB_01204d90:
    FUN_011a38e0(&local_2f0);
LAB_01204d98:
    FUN_01161600(&local_380);
    return CONCAT44(uVar25,uVar13);
  }
  FUN_016dd1aa((uint)local_2e0 | 4,(uint)local_238 | 4,0x94);
  local_248 = local_1a0;
  local_2e0[0] = local_238[0];
  local_244 = local_19c;
  uStack_240 = uStack_198;
  uStack_23c = uStack_194;
  local_30 = 3;
  local_dc = (char *)0x1;
  local_e0 = 1;
  uVar29 = FUN_01204618(0xb8);
  FUN_016dd1aa(uVar29,&local_e0,0xb8);
  local_18c = uVar29;
  FUN_01205ad4(&local_e0,uVar29 + 8,local_2e0);
  if ((local_40 != -0x80000000) &&
     (FUN_016dd1aa(auStack_188,&local_d8,0xa8), local_f0 != -0x80000000)) {
    FUN_0120010c(auStack_188);
  }
  FUN_011a38e0(&local_2f0);
  FUN_01161600(&local_380);
  goto LAB_01204a5c;
}

