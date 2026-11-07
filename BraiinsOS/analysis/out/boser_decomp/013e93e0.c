// FUN_013e93e0 @ 013e93e0 size=16584 calls_out=72 calls_in=1
// strings: internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_013e93e0(uint *param_1,undefined4 param_2,uint *******param_3,uint param_4,
                 undefined1 *param_5,uint param_6,uint *******param_7)

{
  code *pcVar1;
  ushort uVar2;
  char cVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *******pppppppuVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *******pppppppuVar13;
  uint *puVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint *******pppppppuVar23;
  undefined1 *puVar24;
  undefined4 *puVar25;
  int *piVar26;
  int iVar27;
  uint *******pppppppuVar28;
  undefined4 *puVar29;
  uint *******pppppppuVar30;
  undefined4 *puVar31;
  uint *****pppppuVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  uint *******pppppppuVar35;
  undefined4 *puVar36;
  int *piVar37;
  undefined1 *puVar38;
  uint *******pppppppuVar39;
  uint *******pppppppuVar40;
  uint *puVar41;
  uint *puVar42;
  uint *******pppppppuVar43;
  uint uVar44;
  uint uVar45;
  int *piVar46;
  uint ******ppppppuVar47;
  undefined *puVar48;
  uint extraout_r3;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint *******pppppppuVar52;
  uint *******pppppppuVar53;
  uint ******ppppppuVar54;
  char *pcVar55;
  undefined4 uVar56;
  uint uVar57;
  uint uVar58;
  char *pcVar59;
  int iVar60;
  uint ******ppppppuVar61;
  undefined4 uVar62;
  uint *puVar63;
  uint *puVar64;
  undefined4 uVar65;
  uint *puVar66;
  uint uVar67;
  int iVar68;
  char *pcVar69;
  int iVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  char *pcVar76;
  uint *******pppppppuVar77;
  uint uVar78;
  char *pcVar79;
  uint ******ppppppuVar80;
  uint *puVar81;
  uint uVar82;
  bool bVar83;
  bool bVar84;
  bool bVar85;
  bool bVar86;
  double dVar87;
  double dVar88;
  double dVar89;
  undefined8 uVar90;
  ulonglong uVar91;
  longlong lVar92;
  uint local_450;
  char *local_44c;
  uint *******local_408;
  uint local_3c0;
  uint ******local_3b0;
  uint ******local_3ac;
  uint ******local_380;
  uint ******local_37c;
  uint local_36c;
  uint local_360;
  uint *******local_35c;
  uint *******local_358;
  uint local_354;
  uint *******local_350;
  uint *******local_340;
  uint local_338;
  uint local_334;
  uint local_330;
  uint uStack_32c;
  uint local_328;
  uint local_324;
  uint *local_320;
  byte local_31c;
  uint *******local_218;
  uint *******local_214;
  uint *******local_210;
  uint *******local_20c;
  uint *******local_208;
  uint *******local_204;
  uint *******local_200;
  uint *******local_1fc;
  uint *******local_1f8;
  uint *******local_1f4;
  uint *******local_1f0;
  uint *******pppppppuStack_1ec;
  uint local_1e8;
  uint local_1e4;
  byte local_1e0;
  undefined4 local_1dc;
  uint *******local_100;
  uint *******local_fc;
  uint *******local_f8;
  uint ******local_ec;
  uint *******local_e8;
  uint *******local_e4;
  uint *******local_e0;
  uint *******local_d8;
  uint *******local_d4;
  uint *******local_d0;
  uint *******local_c8;
  uint *******local_c4;
  uint *******local_c0;
  uint *******local_bc;
  uint *******local_b8;
  uint *******local_b4;
  uint *******local_b0;
  uint *******local_ac;
  uint *******local_a8;
  uint *******local_a0;
  uint *******local_9c;
  uint *******local_98;
  uint *******local_94;
  uint *******local_90;
  uint *******local_8c;
  uint *******local_88;
  uint *******local_84;
  uint *******local_80;
  uint *******local_78;
  uint *******local_74;
  uint *******pppppppuStack_70;
  uint *******local_6c;
  uint *******local_68;
  uint *******pppppppuStack_64;
  uint *******local_60;
  uint *******pppppppuStack_5c;
  uint *******pppppppuStack_58;
  uint *******pppppppuStack_54;
  uint *******pppppppuStack_50;
  uint *******pppppppuStack_4c;
  uint *******local_48;
  uint *******local_44;
  uint *******local_40;
  
  puVar63 = param_1 + 2;
  if (((*param_1 & 1) != 0) && (*puVar63 == 0 && param_1[3] == 0)) {
    return 0;
  }
  puVar64 = param_1 + 0x4f;
  if ((char)*puVar64 == '\0') {
    bVar83 = (bool)hasExclusiveAccess(puVar64);
    if (!bVar83) goto LAB_013efb30;
    *(char *)puVar64 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_013efb30:
    FUN_0164fba8(puVar64);
  }
  FUN_0165098c(puVar64);
  puVar41 = param_1 + 0x26;
  if ((char)*puVar41 == '\0') {
    bVar83 = (bool)hasExclusiveAccess(puVar41);
    if (bVar83) {
      *(char *)puVar41 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_013e94ac;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(puVar41);
LAB_013e94ac:
  FUN_0165098c(puVar41);
  if (param_5 != &DAT_3b9aca00) {
    FUN_019b0710(&local_218,&DAT_3b9aca00,param_1[8],param_1[9],param_1[10]);
    uVar20 = (uint)(ZEXT48(local_218) * 1000000000);
    lVar92 = ZEXT48(local_214) * 1000000000 + (ZEXT48(local_218) * 1000000000 >> 0x20);
    uVar21 = (uint)lVar92;
    uVar73 = (uint)((ulonglong)lVar92 >> 0x20);
    pcVar59 = (char *)(uVar20 + (int)local_210);
    bVar83 = CARRY4(uVar21,(uint)CARRY4(uVar20,(uint)local_210));
    uVar21 = uVar21 + CARRY4(uVar20,(uint)local_210);
    pcVar69 = (char *)0xfffffffe;
    if (pcVar59 < (char *)0xfffffffe) {
      pcVar69 = pcVar59;
    }
    if (uVar21 != 0xffffffff) {
      pcVar69 = pcVar59;
    }
    local_450 = 0xffffffff;
    local_44c = (char *)0xfffffffe;
    if (-(uint)CARRY4(uVar73,(uint)bVar83) < (uint)(uVar73 + bVar83 == 0)) {
      local_450 = uVar21;
      local_44c = pcVar69;
    }
  }
  puVar4 = param_1 + 0x1e;
  local_338 = *puVar4;
  local_334 = param_1[0x1f];
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  puVar42 = param_1 + 0x20;
  local_330 = *puVar42;
  uStack_32c = param_1[0x21];
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  puVar66 = param_1 + 0x68;
  local_324 = 0;
  local_320 = (uint *)0x0;
  if (*puVar66 != 0) {
    local_320 = puVar66;
  }
  thunk_FUN_01bee35a();
  puVar33 = (undefined4 *)((uint)&local_78 | 4);
  puVar34 = (undefined4 *)((uint)&local_218 | 4);
  bVar83 = true;
  puVar5 = param_1 + 0x1a;
  puVar6 = param_1 + 0x18;
  puVar7 = param_1 + 8;
  puVar8 = param_1 + 0x48;
  pppppppuVar9 = (uint *******)(param_1 + 0x62);
  puVar10 = param_1 + 0x1c;
  puVar11 = param_1 + 0x3a;
  puVar12 = param_1 + 0x56;
  pppppppuVar13 = (uint *******)(param_1 + 0x42);
  puVar14 = param_1 + 0x36;
  iVar15 = (int)param_1 + 0xb9;
  puVar16 = param_1 + 0x2e;
  puVar17 = param_1 + 0x28;
  puVar18 = param_1 + 0x50;
  local_31c = (byte)extraout_r3;
  local_3c0 = 0;
  pppppppuVar77 = (uint *******)&local_218;
  local_328 = extraout_r3;
LAB_013e9750:
  if (!bVar83) goto LAB_013ec0b4;
  iVar19 = FUN_01405df0(param_1[4],param_1[5]);
  if (iVar19 != 0) {
    if (*puVar16 == 0) {
      bVar83 = (bool)hasExclusiveAccess(puVar16);
      if (bVar83) {
        *puVar16 = 8;
        DataMemoryBarrier(0xb);
        goto LAB_013e97a0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    FUN_0164d8d8(puVar16);
LAB_013e97a0:
    FUN_0165098c(puVar16);
    FUN_0165098c(iVar15);
                    /* WARNING: Could not recover jumptable at 0x013e97d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar20 = (*(code *)(&DAT_013e97dc + *(int *)(&DAT_013e97dc + param_1[4] * 4)))();
    return uVar20;
  }
  uVar90 = FUN_01405df0(param_1[6],param_1[7]);
  uVar20 = (uint)((ulonglong)uVar90 >> 0x20);
  if ((int)uVar90 != 0) {
    uVar20 = *puVar16;
    if ((uVar20 < 0xfffffff0) && ((uVar20 & 8) == 0)) {
      if (*puVar16 == uVar20) {
        bVar83 = (bool)hasExclusiveAccess(puVar16);
        if (bVar83) {
          *puVar16 = uVar20 + 0x10;
          DataMemoryBarrier(0xb);
          goto LAB_013ea1a8;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    }
    FUN_0164cfdc(puVar16);
LAB_013ea1a8:
    FUN_0165098c(puVar16);
    FUN_0165098c(iVar15);
                    /* WARNING: Could not recover jumptable at 0x013ea1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar20 = (*(code *)(&DAT_013ea1e0 + *(int *)(&DAT_013ea1e0 + param_1[6] * 4)))();
    return uVar20;
  }
  if ((char)param_1[0x6b] == '\0') {
    uVar21 = *param_1;
    bVar83 = (uVar21 & 1) != 0;
    if (bVar83) {
      uVar21 = *puVar63;
      uVar20 = param_1[3];
    }
    if (bVar83 && (uVar21 != 0 || uVar20 != 0)) {
      DataMemoryBarrier(0xb);
      if (((*(char *)((int)param_1 + 0x1ad) == '\0') &&
          (uVar20 >> 1 < uStack_32c ||
           uStack_32c - (uVar20 >> 1) <
           (uint)(((uint)((byte)uVar20 & 1) << 0x1f | uVar21 >> 1) <= local_330))) &&
         ((*param_1 & 1) != 0)) {
        uVar20 = *puVar63;
        uVar21 = param_1[3];
        uVar90 = *(undefined8 *)puVar63;
        if (param_1[0x38] != 0) {
          dVar89 = (double)FUN_01bf0e80();
          dVar87 = (double)FUN_01bf0e80(uVar20,uVar21);
          dVar88 = (double)FUN_01bf0e80(local_338,local_334);
          dVar88 = (dVar89 / dVar87) * dVar88;
          uVar90 = FUN_01bf0b64(SUB84(dVar88,0),(int)((ulonglong)dVar88 >> 0x20));
          if (dVar88 < 0.0) {
            uVar90 = 0;
          }
          if (1.844674407370955e+19 < dVar88) {
            uVar90 = 0xffffffffffffffff;
          }
        }
        pppppppuVar77 = (uint *******)uVar90;
        if ((int)((ulonglong)uVar90 >> 0x20) != 0) {
          pppppppuVar77 = (uint *******)&DAT_ffffffff;
        }
        if (pppppppuVar77 < (uint *******)0x81) {
          pppppppuVar77 = (uint *******)&DAT_00000080;
        }
        if (*puVar16 == 0) {
          bVar83 = (bool)hasExclusiveAccess(puVar16);
          if (!bVar83) goto LAB_013ef754;
          *puVar16 = 8;
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_013ef754:
          FUN_0164d8d8(puVar16);
        }
        FUN_0165098c(puVar16);
        FUN_0165098c(iVar15);
        if ((uint *******)0xffffff < pppppppuVar77) {
          pppppppuVar77 = (uint *******)0x1000000;
        }
        uVar20 = param_1[0x31];
        iVar19 = LZCOUNT((char *)((int)pppppppuVar77 + -1));
        if (uVar20 <= 0xffffffffU >> iVar19) {
          uVar73 = (0xffffffffU >> iVar19) + 1;
          iVar68 = uVar73 * 8;
          uVar21 = FUN_012985ec(iVar68,8);
          if (uVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(8,iVar68);
          }
          if (uVar20 != 0) {
            thunk_FUN_01be4678(param_1[0x30]);
          }
          param_1[0x32] = 0xffffffff >> iVar19;
          param_1[0x33] = 0;
          param_1[0x30] = uVar21;
          param_1[0x31] = uVar73;
          param_1[0x34] = (int)pppppppuVar77 * 10;
        }
        FUN_009dd354(puVar16);
        DataMemoryBarrier(0xb);
        *(undefined1 *)((int)param_1 + 0x1ad) = 1;
      }
    }
  }
  local_3c0 = local_3c0 + 1;
  local_350 = (uint *******)0x0;
LAB_013ec0b4:
  uVar21 = local_324;
  uVar20 = local_328;
  local_31c = 0;
  if (param_1[0x29] != 0) {
    FUN_019b0710(&local_218,0,*puVar7,param_1[9],param_1[10]);
    uVar74 = 0;
    uVar73 = 0;
    uVar22 = (uint)(ZEXT48(local_218) * 1000000000);
    lVar92 = ZEXT48(local_214) * 1000000000 + (ZEXT48(local_218) * 1000000000 >> 0x20);
    uVar49 = (uint)lVar92;
    uVar67 = (uint)((ulonglong)lVar92 >> 0x20);
    pppppppuVar23 = (uint *******)(uVar22 + (int)local_210);
    bVar83 = CARRY4(uVar49,(uint)CARRY4(uVar22,(uint)local_210));
    uVar49 = uVar49 + CARRY4(uVar22,(uint)local_210);
    local_354 = 0;
    pppppppuVar77 = (uint *******)0xfffffffe;
    if (pppppppuVar23 < (uint *******)0xfffffffe) {
      pppppppuVar77 = pppppppuVar23;
    }
    if (uVar49 != 0xffffffff) {
      pppppppuVar77 = pppppppuVar23;
    }
    pppppppuVar23 = (uint *******)0xfffffffe;
    uVar22 = 0xffffffff;
    if (-(uint)CARRY4(uVar67,(uint)bVar83) < (uint)(uVar67 + bVar83 == 0)) {
      pppppppuVar23 = pppppppuVar77;
      uVar22 = uVar49;
    }
    pppppppuVar43 = (uint *******)param_1[0x2c];
    uVar49 = param_1[0x2d];
    param_1[0x2c] = (uint)pppppppuVar23;
    param_1[0x2d] = uVar22;
    local_36c = 0;
    pppppppuVar52 = (uint *******)0x0;
LAB_013ec1a8:
    local_340 = pppppppuVar52;
    pppppppuVar52 = (uint *******)&DAT_00000001;
    bVar83 = true;
LAB_013ec1d4:
    bVar84 = bVar83;
    local_350 = pppppppuVar52;
LAB_013ec1e0:
    if (pppppppuVar52 == (uint *******)0x0) {
      uVar67 = local_354 & uVar74;
      if (bVar83) goto LAB_013ec3b4;
      pppppppuVar52 = (uint *******)(uVar67 & 0xff);
      goto LAB_013ec48c;
    }
    if (&SUB_00000004 < local_340) {
      pppppppuVar35 = (uint *******)&DAT_00000005;
      puVar48 = &DAT_01cf3b3c;
      goto LAB_013efd28;
    }
    pppppppuVar77 = (uint *******)param_1[0x2a];
    uVar74 = param_1[0x2b];
    uVar73 = (int)pppppppuVar23 - (int)pppppppuVar77;
    iVar19 = uVar22 - (uVar74 + (pppppppuVar77 > pppppppuVar23));
    if (uVar22 <= uVar74 && (uint)(pppppppuVar77 <= pppppppuVar23) <= uVar22 - uVar74) {
      uVar73 = 0;
      iVar19 = 0;
    }
    uVar91 = FUN_01bf0ff0(uVar73,iVar19,&DAT_3b9aca00,0);
    uVar51 = (uint)(uVar91 >> 0x20);
    uVar67 = (int)pppppppuVar43 - (int)pppppppuVar77;
    iVar68 = uVar49 - (uVar74 + (pppppppuVar77 > pppppppuVar43));
    lVar92 = (uVar91 & 0xffffffff) * 1000000000;
    uVar78 = (uint)lVar92;
    uVar57 = (uint)((ulonglong)lVar92 >> 0x20);
    if (uVar49 <= uVar74 && (uint)(pppppppuVar77 <= pppppppuVar43) <= uVar49 - uVar74) {
      uVar67 = 0;
      iVar68 = 0;
    }
    uVar91 = FUN_01bf0ff0(uVar67,iVar68,&DAT_3b9aca00,0);
    uVar45 = (uint)(uVar91 >> 0x20);
    lVar92 = (uVar91 & 0xffffffff) * 1000000000;
    uVar82 = (uint)lVar92;
    uVar50 = (uint)((ulonglong)lVar92 >> 0x20);
    lVar92 = (ulonglong)uVar51 * 1000000000 + (ulonglong)uVar57;
    uVar58 = (uint)lVar92;
    uVar44 = (uint)((ulonglong)lVar92 >> 0x20);
    uVar75 = uVar73 - uVar78;
    uVar74 = iVar19 - (uVar51 * 1000000000 + uVar57 + (uint)(uVar73 < uVar78));
    lVar92 = (ulonglong)uVar45 * 1000000000 + (ulonglong)uVar50;
    uVar51 = (uint)lVar92;
    uVar57 = (uint)((ulonglong)lVar92 >> 0x20);
    uVar73 = uVar78 + uVar75;
    bVar83 = CARRY4(uVar58,uVar74) || CARRY4(uVar58 + uVar74,(uint)CARRY4(uVar78,uVar75));
    uVar74 = uVar58 + uVar74 + (uint)CARRY4(uVar78,uVar75);
    if (uVar44 + bVar83 != 0 || CARRY4(uVar44,(uint)bVar83)) {
      uVar73 = 0xffffffff;
      uVar74 = 0xffffffff;
    }
    uVar78 = uVar67 - uVar82;
    uVar45 = iVar68 - (uVar45 * 1000000000 + uVar50 + (uint)(uVar67 < uVar82));
    uVar67 = uVar82 + uVar78;
    bVar83 = CARRY4(uVar51,uVar45) || CARRY4(uVar51 + uVar45,(uint)CARRY4(uVar82,uVar78));
    uVar51 = uVar51 + uVar45 + (uint)CARRY4(uVar82,uVar78);
    if (uVar57 + bVar83 != 0 || CARRY4(uVar57,(uint)bVar83)) {
      uVar67 = 0xffffffff;
      uVar51 = 0xffffffff;
    }
    uVar78 = (&DAT_00476ab8)[(int)local_340 * 2] & 0x3f;
    uVar57 = uVar73 >> uVar78 | uVar74 << (0x20 - uVar78 & 0xff);
    uVar73 = uVar78 - 0x20;
    uVar67 = uVar67 >> uVar78 | uVar51 << (0x20 - uVar78 & 0xff);
    pppppppuVar77 = (uint *******)(uVar74 >> uVar78);
    if (-1 < (int)uVar73) {
      uVar57 = uVar74 >> (uVar73 & 0xff);
      uVar67 = uVar51 >> (uVar73 & 0xff);
    }
    pppppppuVar52 = (uint *******)(uVar51 >> uVar78);
    if (-1 < (int)uVar73) {
      pppppppuVar77 = (uint *******)0x0;
      pppppppuVar52 = (uint *******)0x0;
    }
    if (pppppppuVar52 <= pppppppuVar77 &&
        (uint)(uVar57 <= uVar67) <= (uint)((int)pppppppuVar52 - (int)pppppppuVar77)) {
      uVar73 = (uVar57 - uVar67) + 1;
      uVar74 = (&DAT_00476ae0)[(int)local_340 * 2];
      pcVar69 = (char *)((int)pppppppuVar77 +
                        ((uint)(0xfffffffe < uVar57 - uVar67) -
                        (int)((int)pppppppuVar52 + (uint)(uVar57 < uVar67))));
      local_350 = (uint *******)0x0;
      local_354 = uVar74 - 1;
      if ((char *)(&DAT_00476ae4)[(int)local_340 * 2] <= pcVar69 &&
          (uint)(uVar73 <= uVar74) <=
          (uint)((int)(&DAT_00476ae4)[(int)local_340 * 2] - (int)pcVar69)) {
        uVar73 = uVar74;
      }
      uVar67 = local_354 & uVar67;
      uVar73 = uVar67 + uVar73;
      uVar74 = uVar67;
      local_36c = uVar73;
LAB_013ec3b4:
      pppppppuVar35 = (uint *******)param_1[0x29];
      pppppppuVar52 = local_340;
      if (local_340 < pppppppuVar35) {
        pppppppuVar52 = (uint *******)(uVar67 & 0xff);
        piVar46 = (int *)(*puVar17 + (int)local_340 * 8);
        pppppppuVar35 = (uint *******)piVar46[1];
        if (pppppppuVar52 < pppppppuVar35) {
          puVar36 = (undefined4 *)(*piVar46 + (int)pppppppuVar52 * 0x18);
LAB_013ec3ec:
          do {
            pppppppuVar35 = (uint *******)puVar36[4];
            if (pppppppuVar35 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01cf3c24);
            }
            if (*(char *)pppppppuVar35 == '\0') goto LAB_013ec47c;
            pppppppuVar53 = (uint *******)puVar36[3];
            if (pppppppuVar53 != (uint *******)0x0 && pppppppuVar35 != pppppppuVar53) {
              pppppppuVar77 = (uint *******)*puVar36;
              bVar83 = pppppppuVar77 == (uint *******)&DAT_00000001;
              if (bVar83) {
                pppppppuVar77 = (uint *******)puVar36[1];
              }
              if (bVar83 && pppppppuVar77 == pppppppuVar53) {
                ppppppuVar80 = pppppppuVar77[3];
                pppppppuVar77 = (uint *******)&DAT_00000001;
                *puVar36 = 1;
                puVar36[1] = ppppppuVar80;
              }
              ppppppuVar80 = pppppppuVar53[3];
              if (pppppppuVar53[4] == (uint ******)0x0) {
                puVar36[3] = ppppppuVar80;
              }
              else {
                if (ppppppuVar80 == (uint ******)0x0) goto LAB_013ec3ec;
                pppppppuVar53[4][3] = (uint *****)ppppppuVar80;
                ppppppuVar80 = pppppppuVar53[3];
              }
              pppppppuVar77 = (uint *******)0x0;
              pppppppuVar53[3] = (uint ******)0x0;
              if (ppppppuVar80 != (uint ******)0x0) {
                pppppppuVar77 = (uint *******)pppppppuVar53[4];
                ppppppuVar80[4] = (uint *****)pppppppuVar77;
                pppppppuVar53[4] = (uint ******)pppppppuVar35;
                puVar36[4] = pppppppuVar53;
                pppppppuVar35[3] = (uint ******)pppppppuVar53;
              }
            }
          } while( true );
        }
      }
      puVar48 = &DAT_01cf3c14;
      local_340 = pppppppuVar52;
      goto LAB_013efd28;
    }
  }
LAB_013eca5c:
  puVar38 = &DAT_3b9aca00;
  puVar24 = (undefined1 *)param_1[0x10];
  bVar83 = puVar24 == &DAT_3b9aca00;
  if (bVar83) {
    puVar24 = (undefined1 *)param_1[0x14];
  }
  if (bVar83 && puVar24 == &DAT_3b9aca00) {
    puVar38 = (undefined1 *)param_1[0x37];
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    if (*puVar14 != 0xffffffff || puVar38 != (undefined1 *)0xffffffff) goto LAB_013eca7c;
    goto LAB_013ed5e0;
  }
LAB_013eca7c:
  FUN_019b0710(&local_218,puVar38,*puVar7,param_1[9],param_1[10]);
  uVar73 = (uint)(ZEXT48(local_218) * 1000000000);
  lVar92 = ZEXT48(local_214) * 1000000000 + (ZEXT48(local_218) * 1000000000 >> 0x20);
  uVar74 = (uint)lVar92;
  uVar22 = (uint)((ulonglong)lVar92 >> 0x20);
  pppppppuVar23 = (uint *******)(uVar73 + (int)local_210);
  bVar83 = CARRY4(uVar74,(uint)CARRY4(uVar73,(uint)local_210));
  pppppppuVar52 = (uint *******)(uVar74 + CARRY4(uVar73,(uint)local_210));
  pppppppuVar77 = (uint *******)0xfffffffe;
  if (pppppppuVar23 < (uint *******)0xfffffffe) {
    pppppppuVar77 = pppppppuVar23;
  }
  if (pppppppuVar52 != (uint *******)&DAT_ffffffff) {
    pppppppuVar77 = pppppppuVar23;
  }
  pppppppuVar35 = (uint *******)param_1[0x10];
  pppppppuVar43 = (uint *******)0xfffffffe;
  pppppppuVar23 = (uint *******)&DAT_ffffffff;
  if (-(uint)CARRY4(uVar22,(uint)bVar83) < (uint)(uVar22 + bVar83 == 0)) {
    pppppppuVar43 = pppppppuVar77;
    pppppppuVar23 = pppppppuVar52;
  }
  if ((pppppppuVar35 == (uint *******)&DAT_3b9aca00) && (*pppppppuVar13 == (uint ******)0x0))
  goto LAB_013ed510;
  local_100 = (uint *******)param_1[0xe];
  local_fc = (uint *******)param_1[0xf];
  pppppppuVar52 = (uint *******)*puVar14;
  pppppppuVar53 = (uint *******)param_1[0x37];
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  if (pppppppuVar52 != (uint *******)&DAT_ffffffff || pppppppuVar53 != (uint *******)&DAT_ffffffff)
  {
    local_c0 = pppppppuVar52;
    local_bc = pppppppuVar53;
  }
  local_c8 = (uint *******)
             (uint)(pppppppuVar52 != (uint *******)&DAT_ffffffff ||
                   pppppppuVar53 != (uint *******)&DAT_ffffffff);
  local_c4 = (uint *******)0x0;
  local_f8 = pppppppuVar35;
  local_e8 = pppppppuVar43;
  local_e4 = pppppppuVar23;
  if (param_7 == (uint *******)0x0) goto LAB_013ed508;
  pppppppuVar52 = (uint *******)0x0;
  bVar83 = true;
LAB_013ecba4:
  bVar84 = false;
  while( true ) {
    piVar46 = (int *)param_1[0x65];
    if (piVar46 == (int *)0x0) {
      ppppppuVar61 = (uint ******)0x0;
      ppppppuVar80 = (uint ******)0x2;
      pppppppuVar35 = (uint *******)&local_48;
    }
    else {
      pppppppuVar77 = *(uint ********)(*piVar46 + 0x10);
      do {
        ppppppuVar80 = *pppppppuVar77;
        bVar84 = (bool)hasExclusiveAccess(pppppppuVar77);
      } while (!bVar84);
      *pppppppuVar77 = (uint ******)((int)ppppppuVar80 + 1);
      if ((int)ppppppuVar80 < 0) goto LAB_013efec4;
      iVar19 = *piVar46;
      local_340 = *(uint ********)(iVar19 + 8);
      local_350 = *(uint ********)(iVar19 + 0xc);
      DataMemoryBarrier(0xb);
      ppppppuVar47 = *(uint *******)(*piVar46 + 0x20);
      ppppppuVar54 = *(uint *******)(*piVar46 + 0x24);
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      local_44 = (uint *******)0x0;
      bVar84 = ppppppuVar47 != (uint ******)0xffffffff || ppppppuVar54 != (uint ******)0xffffffff;
      ppppppuVar61 = local_380;
      ppppppuVar80 = local_37c;
      if (bVar84) {
        ppppppuVar61 = ppppppuVar54;
        ppppppuVar80 = ppppppuVar47;
      }
      local_48 = (uint *******)(uint)bVar84;
      bVar84 = *(short *)(iVar19 + 0x34) != *(short *)(iVar19 + 0x36);
      pppppppuVar35 = (uint *******)&local_d8;
      local_380 = ppppppuVar61;
      local_37c = ppppppuVar80;
    }
    *pppppppuVar35 = ppppppuVar80;
    pppppppuVar53 = local_48;
    pppppppuVar35[1] = ppppppuVar61;
    if (pppppppuVar53 == (uint *******)0x2 && local_44 == (uint *******)0x0) goto LAB_013ed510;
    pppppppuVar52 = (uint *******)((int)pppppppuVar52 + 1);
    if ((!bVar84) && (((uint)pppppppuVar53 & 1) != 0)) break;
    FUN_013f1fb0(param_1,pppppppuVar77 + 2,local_340,local_350,puVar18);
    DataMemoryBarrier(0xb);
    do {
      ppppppuVar80 = *pppppppuVar77;
      bVar83 = (bool)hasExclusiveAccess(pppppppuVar77);
    } while (!bVar83);
    *pppppppuVar77 = (uint ******)((int)ppppppuVar80 - 1);
    if (ppppppuVar80 == (uint ******)0x1) {
      DataMemoryBarrier(0xb);
      FUN_0140a97c(pppppppuVar77);
    }
    bVar83 = false;
    if (pppppppuVar52 == param_7) goto LAB_013ed510;
  }
  uVar73 = 0;
  if (local_f8 != (uint *******)&DAT_3b9aca00) {
    uVar73 = (uint)(ZEXT48(local_100) * 1000000000);
    lVar92 = ZEXT48(local_fc) * 1000000000 + (ZEXT48(local_100) * 1000000000 >> 0x20);
    uVar74 = (uint)lVar92;
    uVar22 = (uint)((ulonglong)lVar92 >> 0x20);
    pcVar59 = (char *)(uVar73 + (int)local_f8);
    bVar84 = CARRY4(uVar74,(uint)CARRY4(uVar73,(uint)local_f8));
    uVar74 = uVar74 + CARRY4(uVar73,(uint)local_f8);
    pcVar69 = (char *)0xfffffffe;
    if (pcVar59 < (char *)0xfffffffe) {
      pcVar69 = pcVar59;
    }
    if (uVar74 != 0xffffffff) {
      pcVar69 = pcVar59;
    }
    uVar73 = 0;
    uVar49 = 0xffffffff;
    pcVar59 = (char *)0xfffffffe;
    if (-(uint)CARRY4(uVar22,(uint)bVar84) < (uint)(uVar22 + bVar84 == 0)) {
      uVar49 = uVar74;
      pcVar59 = pcVar69;
    }
    pppppppuVar53 = (uint *******)((int)local_d8 + (int)pcVar59);
    pppppppuVar35 = (uint *******)((int)local_d4 + CARRY4((uint)local_d8,(uint)pcVar59) + uVar49);
    if (CARRY4((uint)local_d4,uVar49) ||
        CARRY4((uint)((int)local_d4 + uVar49),(uint)CARRY4((uint)local_d8,(uint)pcVar59))) {
      pppppppuVar35 = (uint *******)&DAT_ffffffff;
      pppppppuVar53 = (uint *******)&DAT_ffffffff;
    }
    pppppppuVar30 = (uint *******)0xfffffffe;
    if (pppppppuVar53 < (uint *******)0xfffffffe) {
      pppppppuVar30 = pppppppuVar53;
    }
    if (pppppppuVar35 == (uint *******)&DAT_ffffffff) {
      pppppppuVar53 = pppppppuVar30;
    }
    if (pppppppuVar35 < local_e4 ||
        (uint)((int)local_e4 - (int)pppppppuVar35) < (uint)(pppppppuVar53 <= local_e8)) {
      uVar73 = 1;
    }
  }
  pppppppuVar35 = local_d4;
  if (uVar73 == 0) {
    pppppppuVar35 = local_c8;
  }
  if (uVar73 == 0 &&
      ((uint)pppppppuVar35 &
      (uint)(local_d4 <= local_bc &&
            (uint)(local_c0 <= local_d8) <= (uint)((int)local_d4 - (int)local_bc))) == 0) {
    DataMemoryBarrier(0xb);
    do {
      ppppppuVar80 = *pppppppuVar77;
      bVar83 = (bool)hasExclusiveAccess(pppppppuVar77);
    } while (!bVar83);
    *pppppppuVar77 = (uint ******)((int)ppppppuVar80 - 1);
    if (ppppppuVar80 == (uint ******)0x1) {
      DataMemoryBarrier(0xb);
      FUN_0140a97c(pppppppuVar77);
    }
    goto LAB_013ed510;
  }
  if (*puVar11 == 0) {
    local_408 = (uint *******)0x0;
    local_68 = (uint *******)0x0;
    goto LAB_013ece8c;
  }
  FUN_0140b4bc(&local_78,puVar11,pppppppuVar77);
  if (local_68 == (uint *******)0x0) {
    local_408 = (uint *******)0x0;
    goto LAB_013ece8c;
  }
  local_408 = local_68 + 1;
  if (*(char *)local_408 == '\0') {
    bVar84 = (bool)hasExclusiveAccess(local_408);
    if (!bVar84) goto LAB_013ece74;
    *(char *)local_408 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_013ece74:
    FUN_0164fba8(local_408);
  }
  FUN_0165098c(local_408);
LAB_013ece8c:
  uVar22 = param_1[0x1d] & 0x3f;
  uVar74 = (uint)local_340 >> uVar22 | (int)local_350 << (0x20 - uVar22 & 0xff);
  if (-1 < (int)(uVar22 - 0x20)) {
    uVar74 = (uint)local_350 >> (uVar22 - 0x20 & 0xff);
  }
  uVar22 = 0;
  if (param_1[0x1d] != 0x40) {
    uVar22 = uVar74;
  }
  if (param_1[0x17] <= uVar22) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar22,param_1[0x17],&DAT_01cf3dd8);
  }
  uVar74 = param_1[0x16];
  ppppppuVar80 = (uint ******)FUN_013f0d78();
  iVar19 = uVar74 + uVar22 * 8;
  local_ec = ppppppuVar80;
  puVar25 = (undefined4 *)FUN_0140b1c4(iVar19);
  piVar46 = (int *)(iVar19 + 4);
  puVar36 = puVar25;
  do {
    pppppppuVar35 = (uint *******)puVar36[1];
    pcVar69 = (char *)((int)pppppppuVar35 + -1);
    if ((char *)((uint)pppppppuVar35 ^ (uint)pcVar69) <= pcVar69) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_00475d7a,0x36,&DAT_01cf35b0);
    }
    piVar37 = puVar36 + 5;
    cVar3 = FUN_0160a118((uint)pppppppuVar35 >> 1,piVar37,piVar46);
    if (cVar3 == '\x03') {
      local_1fc = (uint *******)CONCAT31(local_1fc._1_3_,1);
      local_200 = (uint *******)0x0;
      local_210 = &local_ec;
      local_20c = (uint *******)((uint)pcVar69 & (uint)local_340);
      local_218 = (uint *******)*puVar36;
      local_208 = local_218 + (int)local_20c;
      local_214 = pppppppuVar35;
      local_204 = local_20c;
      while( true ) {
        FUN_013f4d28(&local_a0,&local_218);
        pppppppuVar53 = local_94;
        pppppppuVar35 = local_9c;
        if (local_a0 != (uint *******)&DAT_00000001) goto LAB_013ed270;
        if (local_9c == (uint *******)0x0) break;
        ppppppuVar61 = (uint ******)0x0;
        puVar29 = (undefined4 *)((uint)local_94 & 0xfffffff8);
        if (puVar29 == (undefined4 *)0x0) goto LAB_013ed1f0;
        pppppppuVar30 = (uint *******)*puVar29;
        if ((pppppppuVar30 == pppppppuVar77) ||
           (((((iVar68 = FUN_013cad2c(pppppppuVar30 + 2,pppppppuVar77 + 2), iVar68 != 0 &&
               (*(short *)(pppppppuVar30 + 0x14) == *(short *)(pppppppuVar77 + 0x14))) &&
              ((*(short *)(pppppppuVar30 + 0x14) != 0x24 ||
               (*(short *)((int)pppppppuVar30 + 0x52) == *(short *)((int)pppppppuVar77 + 0x52)))))
             && ((uint)*(ushort *)(pppppppuVar30 + 0x13) == (uint)*(ushort *)(pppppppuVar77 + 0x13))
             ) && ((1 < *(ushort *)(pppppppuVar30 + 0x13) - 5 ||
                   (*(short *)((int)pppppppuVar30 + 0x4e) == *(short *)((int)pppppppuVar77 + 0x4e)))
                  )))) {
          if (((uint)pppppppuVar53 & 2) != 0) goto LAB_013ed1f0;
          pppppppuVar30 = *(uint ********)(*(int *)(puVar29[1] + 0x80) + 0x20);
          pppppppuVar39 = *(uint ********)(*(int *)(puVar29[1] + 0x80) + 0x24);
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          if (pppppppuVar30 == (uint *******)&DAT_ffffffff &&
              pppppppuVar39 == (uint *******)&DAT_ffffffff) goto LAB_013ed1f0;
          if ((((uint)local_c8 & 1) == 0) ||
             (local_bc < pppppppuVar39 ||
              (uint)((int)pppppppuVar39 - (int)local_bc) < (uint)(local_c0 <= pppppppuVar30))) {
            if (local_f8 == (uint *******)&DAT_3b9aca00) goto LAB_013ed1f0;
            uVar49 = (uint)(ZEXT48(local_100) * 1000000000);
            lVar92 = ZEXT48(local_fc) * 1000000000 + (ZEXT48(local_100) * 1000000000 >> 0x20);
            uVar74 = (uint)lVar92;
            uVar22 = (uint)((ulonglong)lVar92 >> 0x20);
            pcVar59 = (char *)(uVar49 + (int)local_f8);
            bVar84 = CARRY4(uVar74,(uint)CARRY4(uVar49,(uint)local_f8));
            uVar74 = uVar74 + CARRY4(uVar49,(uint)local_f8);
            pcVar69 = (char *)0xfffffffe;
            if (pcVar59 < (char *)0xfffffffe) {
              pcVar69 = pcVar59;
            }
            if (uVar74 != 0xffffffff) {
              pcVar69 = pcVar59;
            }
            uVar49 = 0xffffffff;
            pcVar59 = (char *)0xfffffffe;
            if (-(uint)CARRY4(uVar22,(uint)bVar84) < (uint)(uVar22 + bVar84 == 0)) {
              uVar49 = uVar74;
              pcVar59 = pcVar69;
            }
            pppppppuVar40 = (uint *******)((int)pppppppuVar30 + (int)pcVar59);
            pppppppuVar28 =
                 (uint *******)
                 ((int)pppppppuVar39 + CARRY4((uint)pppppppuVar30,(uint)pcVar59) + uVar49);
            if (CARRY4((uint)pppppppuVar39,uVar49) ||
                CARRY4((uint)((int)pppppppuVar39 + uVar49),
                       (uint)CARRY4((uint)pppppppuVar30,(uint)pcVar59))) {
              pppppppuVar28 = (uint *******)&DAT_ffffffff;
              pppppppuVar40 = (uint *******)&DAT_ffffffff;
            }
            pppppppuVar30 = (uint *******)0xfffffffe;
            if (pppppppuVar40 < (uint *******)0xfffffffe) {
              pppppppuVar30 = pppppppuVar40;
            }
            if (pppppppuVar28 == (uint *******)&DAT_ffffffff) {
              pppppppuVar40 = (uint *******)0xfffffffe;
            }
            ppppppuVar61 = (uint ******)0x0;
            if (pppppppuVar28 == (uint *******)&DAT_ffffffff) {
              pppppppuVar40 = pppppppuVar30;
            }
            if (local_e4 <= pppppppuVar28 &&
                (uint)(pppppppuVar40 <= local_e8) <= (uint)((int)local_e4 - (int)pppppppuVar28))
            goto LAB_013ed1f0;
          }
          if ((uint *******)*pppppppuVar35 == pppppppuVar53) {
            ppppppuVar61 = (uint ******)((uint)puVar29 | 2);
            DataMemoryBarrier(0xb);
            bVar84 = (bool)hasExclusiveAccess(pppppppuVar35);
            if (bVar84) {
              *pppppppuVar35 = ppppppuVar61;
              DataMemoryBarrier(0xb);
              goto LAB_013ed1f0;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          local_1fc = (uint *******)CONCAT31(local_1fc._1_3_,1);
        }
      }
      if (&param_5 == (undefined1 **)&DAT_00000100) goto LAB_013ed39c;
      cVar3 = '\0';
    }
    puVar29 = (undefined4 *)
              FUN_013f57f0(puVar36,&local_ec,*puVar6,param_1[0x19],*puVar5,param_1[0x1b],cVar3);
    if (puVar29 != (undefined4 *)0x0) {
      puVar36 = puVar29;
    }
  } while( true );
LAB_013ec47c:
  bVar84 = false;
LAB_013ec48c:
  pppppppuVar35 = (uint *******)param_1[0x29];
  if (pppppppuVar35 <= local_340) {
LAB_013efcfc:
    puVar48 = &DAT_01cf3be4;
LAB_013efd28:
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(local_340,pppppppuVar35,puVar48);
  }
  piVar46 = (int *)(*puVar17 + (int)local_340 * 8);
  pppppppuVar35 = (uint *******)piVar46[1];
  if (pppppppuVar35 <= pppppppuVar52) {
    local_340 = pppppppuVar52;
    goto LAB_013efcfc;
  }
  pcVar69 = *(char **)(*piVar46 + (int)pppppppuVar52 * 0x18 + 0xc);
  if (((pcVar69 != (char *)0x0) && (*pcVar69 == '\0')) ||
     (pcVar69 = (char *)FUN_013f6e00(), pcVar69 == (char *)0x0)) {
    uVar74 = uVar74 + 1;
    pppppppuVar52 = (uint *******)0x0;
    bVar84 = true;
    bVar83 = true;
    if ((uVar73 & 0xff) <= (uVar74 & 0xff)) {
      pppppppuVar52 = (uint *******)((int)local_340 + 1);
      if (&SUB_00000004 < (uint *******)((int)local_340 + 1)) goto LAB_013eca5c;
      goto LAB_013ec1a8;
    }
    goto LAB_013ec1e0;
  }
  if (*pcVar69 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf3b84);
  }
  pppppppuVar35 = *(uint ********)(*(int *)(pcVar69 + 4) + 0x28);
  uVar67 = *(uint *)(*(int *)(pcVar69 + 4) + 0x2c);
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  if (pppppppuVar35 == (uint *******)&DAT_ffffffff && uVar67 == 0xffffffff) {
    bVar83 = false;
    FUN_01409c78(pcVar69);
    pppppppuVar52 = (uint *******)0x0;
    goto LAB_013ec1e0;
  }
  pppppppuVar52 = local_350;
  uVar73 = local_36c;
  bVar83 = bVar84;
  if (uVar22 <= uVar67 && (uint)(pppppppuVar35 <= pppppppuVar23) <= uVar22 - uVar67) {
    puVar24 = (undefined1 *)FUN_01409ca4(puVar17,pcVar69);
    if (puVar24 != (undefined1 *)0x0) {
      FUN_01409e30(*puVar24,*(undefined4 *)(puVar24 + 8));
      FUN_01409c78(puVar24);
    }
    goto LAB_013ec1d4;
  }
  FUN_01409e30(*pcVar69,*(undefined4 *)(pcVar69 + 8));
  if (*pcVar69 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf3b84);
  }
  DataMemoryBarrier(0xb);
  if (*(short *)(*(int *)(pcVar69 + 4) + 0x34) != *(short *)(*(int *)(pcVar69 + 4) + 0x36))
  goto LAB_013eca30;
  iVar19 = *(int *)(pcVar69 + 4);
  uVar67 = *(uint *)(iVar19 + 8);
  uVar51 = *(uint *)(iVar19 + 0xc);
  if (*puVar11 == 0) {
    pppppppuVar35 = (uint *******)0x0;
    local_68 = (uint *******)0x0;
    goto LAB_013ec668;
  }
  FUN_0140b4bc(&local_78,puVar11,*(undefined4 *)(iVar19 + 0x10));
  if (local_68 == (uint *******)0x0) {
    pppppppuVar35 = (uint *******)0x0;
    goto LAB_013ec668;
  }
  pppppppuVar35 = local_68 + 1;
  if (*(char *)pppppppuVar35 == '\0') {
    bVar84 = (bool)hasExclusiveAccess(pppppppuVar35);
    if (!bVar84) goto LAB_013ec658;
    *(char *)pppppppuVar35 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_013ec658:
    FUN_0164fba8(pppppppuVar35);
  }
  FUN_0165098c(pppppppuVar35);
LAB_013ec668:
  uVar78 = param_1[0x1d] & 0x3f;
  uVar57 = uVar67 >> uVar78 | uVar51 << (0x20 - uVar78 & 0xff);
  if (-1 < (int)(uVar78 - 0x20)) {
    uVar57 = uVar51 >> (uVar78 - 0x20 & 0xff);
  }
  uVar51 = 0;
  if (param_1[0x1d] != 0x40) {
    uVar51 = uVar57;
  }
  if (param_1[0x17] <= uVar51) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar51,param_1[0x17],&DAT_01cf3dd8);
  }
  uVar57 = param_1[0x16];
  pppppppuVar53 = (uint *******)FUN_013f0d78();
  iVar68 = uVar57 + uVar51 * 8;
  local_c8 = pppppppuVar53;
  puVar25 = (undefined4 *)FUN_0140b1c4(iVar68);
  piVar46 = (int *)(iVar68 + 4);
  puVar36 = puVar25;
LAB_013ec6d4:
  pppppppuVar77 = (uint *******)puVar36[1];
  pcVar59 = (char *)((int)pppppppuVar77 + -1);
  if ((char *)((uint)pppppppuVar77 ^ (uint)pcVar59) <= pcVar59) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00475d7a,0x36,&DAT_01cf35b0);
  }
  piVar37 = puVar36 + 5;
  cVar3 = FUN_0160a118((uint)pppppppuVar77 >> 1,piVar37,piVar46);
  if (cVar3 != '\x03') {
    puVar29 = (undefined4 *)
              FUN_013f57f0(puVar36,&local_c8,*puVar6,param_1[0x19],*puVar5,param_1[0x1b],cVar3);
    goto LAB_013ec8e8;
  }
  local_1fc = (uint *******)CONCAT31(local_1fc._1_3_,1);
  local_200 = (uint *******)0x0;
  local_210 = (uint *******)&local_c8;
  local_20c = (uint *******)((uint)pcVar59 & uVar67);
  local_218 = (uint *******)*puVar36;
  local_208 = local_218 + (int)local_20c;
  local_214 = pppppppuVar77;
  local_204 = local_20c;
LAB_013ec74c:
  FUN_013f4d28(&local_a0,&local_218);
  pppppppuVar39 = local_94;
  pppppppuVar30 = local_9c;
  if (local_a0 != (uint *******)&DAT_00000001) goto LAB_013ec974;
  if (local_9c == (uint *******)0x0) goto LAB_013ec8b4;
  piVar26 = (int *)((uint)local_94 & 0xfffffff8);
  pppppppuVar77 = pppppppuVar39;
  if (piVar26 == (int *)0x0) goto LAB_013ec974;
  iVar70 = *piVar26;
  iVar60 = *(int *)(iVar19 + 0x10);
  if ((iVar70 != iVar60) &&
     ((((iVar27 = FUN_013cad2c(iVar70 + 8,iVar60 + 8), iVar27 == 0 ||
        (*(short *)(iVar70 + 0x50) != *(short *)(iVar60 + 0x50))) ||
       (((*(short *)(iVar70 + 0x50) == 0x24 &&
         (*(short *)(iVar70 + 0x52) != *(short *)(iVar60 + 0x52))) ||
        ((uint)*(ushort *)(iVar70 + 0x4c) != (uint)*(ushort *)(iVar60 + 0x4c))))) ||
      ((*(ushort *)(iVar70 + 0x4c) - 5 < 2 &&
       (*(short *)(iVar70 + 0x4e) != *(short *)(iVar60 + 0x4e))))))) goto LAB_013ec74c;
  if (((uint)pppppppuVar39 & 2) != 0) goto LAB_013ec974;
  pppppppuVar28 = *(uint ********)(*(int *)(piVar26[1] + 0x80) + 0x28);
  uVar51 = *(uint *)(*(int *)(piVar26[1] + 0x80) + 0x2c);
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  if ((pppppppuVar28 == (uint *******)&DAT_ffffffff && uVar51 == 0xffffffff) ||
     (uVar22 <= uVar51 && (uint)(pppppppuVar28 <= pppppppuVar23) <= uVar22 - uVar51))
  goto LAB_013ec974;
  if ((uint *******)*pppppppuVar30 == pppppppuVar39) {
    DataMemoryBarrier(0xb);
    bVar84 = (bool)hasExclusiveAccess(pppppppuVar30);
    if (bVar84) {
      *pppppppuVar30 = (uint ******)((uint)piVar26 | 2);
      DataMemoryBarrier(0xb);
      if (((uint)pppppppuVar39 & 0xfffffff8) != 0) goto LAB_013ec904;
LAB_013ec974:
      piVar46 = (int *)0x0;
      goto LAB_013ec978;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  local_1fc = (uint *******)CONCAT31(local_1fc._1_3_,1);
  goto LAB_013ec74c;
LAB_013ec8b4:
  puVar29 = (undefined4 *)
            FUN_013f57f0(puVar36,&local_c8,*puVar6,param_1[0x19],*puVar5,param_1[0x1b],0);
LAB_013ec8e8:
  if (puVar29 != (undefined4 *)0x0) {
    puVar36 = puVar29;
  }
  goto LAB_013ec6d4;
LAB_013ec904:
  do {
    bVar84 = (bool)hasExclusiveAccess(piVar46);
  } while (!bVar84);
  *piVar46 = *piVar46 + -1;
  do {
    bVar84 = (bool)hasExclusiveAccess(piVar37);
  } while (!bVar84);
  *piVar37 = *piVar37 + 1;
  do {
    bVar84 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar84);
  *puVar10 = *puVar10 - 1;
  piVar46 = *(int **)(((uint)pppppppuVar39 & 0xfffffff8) + 4);
  do {
    iVar60 = *piVar46;
    bVar84 = (bool)hasExclusiveAccess(piVar46);
  } while (!bVar84);
  *piVar46 = iVar60 + 1;
  if (iVar60 < 0) goto LAB_013efbd0;
  FUN_013f5018(pppppppuVar53);
LAB_013ec978:
  FUN_0140b280(iVar68,pppppppuVar53,puVar25,puVar36);
  FUN_013f0f2c(pppppppuVar53);
  if (piVar46 != (int *)0x0) {
    if (local_320 != (uint *)0x0) {
      piVar37 = *(int **)(iVar19 + 0x10);
      do {
        iVar19 = *piVar37;
        bVar84 = (bool)hasExclusiveAccess(piVar37);
      } while (!bVar84);
      *piVar37 = iVar19 + 1;
      if (iVar19 < 0) goto LAB_013efec4;
      FUN_013f10ac(local_320,piVar37,piVar46,0);
    }
    bVar85 = 0xfffffffe < local_328;
    local_328 = local_328 + 1;
    bVar84 = CARRY4(local_324,(uint)bVar85);
    local_324 = local_324 + bVar85;
    if (bVar84) {
      local_328 = 0xffffffff;
      local_324 = 0xffffffff;
    }
    FUN_013f1df8(puVar18,piVar46,0,&local_328,&local_338);
  }
  FUN_013f1058(pppppppuVar35);
  FUN_013f0f64(&local_78);
LAB_013eca30:
  FUN_013f2db8(pcVar69);
  goto LAB_013ec1d4;
LAB_013ed39c:
  ppppppuVar61 = (uint ******)0x38;
LAB_013ed1f0:
  if (((uint)ppppppuVar61 & 0xfffffff8) == 0) {
LAB_013ed270:
    piVar46 = (int *)0x0;
  }
  else {
    do {
      bVar84 = (bool)hasExclusiveAccess(piVar46);
    } while (!bVar84);
    *piVar46 = *piVar46 + -1;
    do {
      bVar84 = (bool)hasExclusiveAccess(piVar37);
    } while (!bVar84);
    *piVar37 = *piVar37 + 1;
    do {
      bVar84 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar84);
    *puVar10 = *puVar10 - 1;
    piVar46 = *(int **)(((uint)ppppppuVar61 & 0xfffffff8) + 4);
    do {
      iVar68 = *piVar46;
      bVar84 = (bool)hasExclusiveAccess(piVar46);
    } while (!bVar84);
    *piVar46 = iVar68 + 1;
    if (iVar68 < 0) goto LAB_013efbd0;
    FUN_013f5018(ppppppuVar80,ppppppuVar61);
  }
  FUN_0140b280(iVar19,ppppppuVar80,puVar25,puVar36);
  FUN_013f0f2c(ppppppuVar80);
  puVar81 = local_320;
  if (piVar46 == (int *)0x0) {
    FUN_013f1fb0(param_1,pppppppuVar77 + 2,local_340,local_350,puVar18);
    bVar84 = true;
    bVar83 = false;
  }
  else {
    if (local_320 != (uint *)0x0) {
      FUN_013f10ac(local_320,pppppppuVar77,piVar46,uVar73 ^ 1);
    }
    bVar84 = puVar81 == (uint *)0x0;
    bVar86 = 0xfffffffe < local_328;
    local_328 = local_328 + 1;
    bVar85 = CARRY4(local_324,(uint)bVar86);
    local_324 = local_324 + bVar86;
    if (bVar85) {
      local_328 = 0xffffffff;
      local_324 = 0xffffffff;
    }
    FUN_013f1d70(puVar18,param_1[0x28],param_1[0x29],piVar46,0);
  }
  FUN_013f1058(local_408);
  FUN_013f0f64(&local_78);
  if (bVar84) {
    DataMemoryBarrier(0xb);
    do {
      ppppppuVar80 = *pppppppuVar77;
      bVar84 = (bool)hasExclusiveAccess(pppppppuVar77);
    } while (!bVar84);
    *pppppppuVar77 = (uint ******)((int)ppppppuVar80 - 1);
    if (ppppppuVar80 == (uint ******)0x1) {
      DataMemoryBarrier(0xb);
      FUN_0140a97c(pppppppuVar77);
    }
  }
  if (pppppppuVar52 == param_7) goto LAB_013ed4fc;
  goto LAB_013ecba4;
LAB_013ed4fc:
  if (bVar83) {
LAB_013ed508:
    local_31c = 1;
  }
LAB_013ed510:
  if ((undefined1 *)param_1[0x14] == &DAT_3b9aca00) {
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    if (*puVar14 != 0xffffffff || param_1[0x37] != 0xffffffff) goto LAB_013ed54c;
  }
  else {
LAB_013ed54c:
    uVar73 = param_1[0x28];
    uVar74 = param_1[0x29];
    FUN_013f22a4(param_1,0,puVar18,uVar73,uVar74,param_7,pppppppuVar43,pppppppuVar23,&local_338);
    FUN_013f22a4(param_1,1,puVar18,uVar73,uVar74,param_7,pppppppuVar43,pppppppuVar23,&local_338);
    FUN_013f22a4(param_1,2,puVar18,uVar73,uVar74,param_7,pppppppuVar43,pppppppuVar23,&local_338);
  }
LAB_013ed5e0:
  if (*pppppppuVar13 != (uint ******)0x0) {
    DataMemoryBarrier(0xb);
    if ((char)param_1[0x4b] == '\0') {
      FUN_019b0710(&local_218,param_1,*puVar7,param_1[9],param_1[10]);
      if (param_1[100] == 0) {
        local_b4 = (uint *******)param_1[0x43];
        uVar73 = (uint)(ZEXT48(local_218) * 1000000000);
        local_ac = (uint *******)((uint)local_ac & 0xffffff00);
        local_b0 = (uint *******)0x0;
        lVar92 = ZEXT48(local_214) * 1000000000 + (ZEXT48(local_218) * 1000000000 >> 0x20);
        uVar74 = (uint)lVar92;
        uVar22 = (uint)((ulonglong)lVar92 >> 0x20);
        pppppppuVar23 = (uint *******)(uVar73 + (int)local_210);
        bVar83 = CARRY4(uVar74,(uint)CARRY4(uVar73,(uint)local_210));
        pppppppuVar52 = (uint *******)(uVar74 + CARRY4(uVar73,(uint)local_210));
        pppppppuVar77 = (uint *******)0xfffffffe;
        if (pppppppuVar23 < (uint *******)0xfffffffe) {
          pppppppuVar77 = pppppppuVar23;
        }
        if (pppppppuVar52 != (uint *******)&DAT_ffffffff) {
          pppppppuVar77 = pppppppuVar23;
        }
        local_48 = (uint *******)0xfffffffe;
        local_44 = (uint *******)&DAT_ffffffff;
        if (-(uint)CARRY4(uVar22,(uint)bVar83) < (uint)(uVar22 + bVar83 == 0)) {
          local_48 = pppppppuVar77;
          local_44 = pppppppuVar52;
        }
        local_a8 = (uint *******)&local_48;
        local_b8 = (uint *******)&DAT_01cf3af8;
        local_c8 = (uint *******)&DAT_80000000;
        local_bc = pppppppuVar13;
        do {
          while( true ) {
            FUN_01408d94(&local_78,&local_c8);
            pppppppuVar52 = pppppppuStack_70;
            pppppppuVar23 = local_74;
            pppppppuVar77 = local_78;
            if (local_78 == (uint *******)&DAT_80000000) {
              pppppppuVar23 = (uint *******)&SUB_00000004;
              pppppppuVar77 = (uint *******)0x0;
              if (local_c8 != (uint *******)&DAT_80000000) {
                FUN_0072151c(&local_c8);
              }
              pppppppuVar52 = (uint *******)0x0;
              goto LAB_013ede64;
            }
            local_218 = local_78;
            local_214 = local_74;
            local_210 = pppppppuStack_70;
            local_20c = local_6c;
            local_208 = local_68;
            local_204 = pppppppuStack_64;
            local_200 = local_60;
            local_1fc = pppppppuStack_5c;
            local_1f8 = pppppppuStack_58;
            local_1f4 = pppppppuStack_54;
            local_1f0 = pppppppuStack_50;
            pppppppuStack_1ec = pppppppuStack_4c;
            if (pppppppuStack_5c < local_a8[1] ||
                (uint)((int)local_a8[1] - (int)pppppppuStack_5c) < (uint)(local_60 <= *local_a8))
            break;
            FUN_019bb7e0(local_78,local_74);
            FUN_01406d64(&local_208);
          }
        } while (local_78 == (uint *******)&DAT_80000000);
        uVar56 = puVar33[1];
        uVar62 = puVar33[2];
        uVar65 = puVar33[3];
        uVar71 = puVar33[4];
        *puVar34 = *puVar33;
        puVar34[1] = uVar56;
        puVar34[2] = uVar62;
        puVar34[3] = uVar65;
        puVar34[4] = uVar71;
        uVar56 = puVar33[6];
        uVar62 = puVar33[7];
        uVar65 = puVar33[8];
        uVar71 = puVar33[9];
        uVar72 = puVar33[10];
        puVar34[5] = puVar33[5];
        puVar34[6] = uVar56;
        puVar34[7] = uVar62;
        puVar34[8] = uVar65;
        puVar34[9] = uVar71;
        puVar34[10] = uVar72;
        FUN_01406d64(&local_208);
        pppppppuVar43 = (uint *******)thunk_FUN_01be5118(0x30);
        if (pppppppuVar43 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(4,0x30);
        }
        *pppppppuVar43 = (uint ******)pppppppuVar77;
        pppppppuVar43[1] = (uint ******)pppppppuVar23;
        pppppppuVar43[2] = (uint ******)pppppppuVar52;
        local_100 = (uint *******)&SUB_00000004;
        local_f8 = (uint *******)&DAT_00000001;
        local_a0 = local_c8;
        local_9c = local_c4;
        local_98 = local_c0;
        local_94 = local_bc;
        local_90 = local_b8;
        local_8c = local_b4;
        local_88 = local_b0;
        local_84 = local_ac;
        local_80 = local_a8;
        pppppppuVar52 = (uint *******)&DAT_00000001;
        local_fc = pppppppuVar43;
        while( true ) {
          FUN_01408d94(&local_78,&local_a0);
          pppppppuVar35 = pppppppuStack_70;
          pppppppuVar23 = local_74;
          pppppppuVar77 = local_78;
          if (local_78 == (uint *******)&DAT_80000000) break;
          local_218 = local_78;
          local_214 = local_74;
          local_210 = pppppppuStack_70;
          local_20c = local_6c;
          local_208 = local_68;
          local_204 = pppppppuStack_64;
          local_200 = local_60;
          local_1fc = pppppppuStack_5c;
          local_1f8 = pppppppuStack_58;
          local_1f4 = pppppppuStack_54;
          local_1f0 = pppppppuStack_50;
          pppppppuStack_1ec = pppppppuStack_4c;
          if (pppppppuStack_5c < local_80[1] ||
              (uint)((int)local_80[1] - (int)pppppppuStack_5c) < (uint)(local_60 <= *local_80)) {
            if (local_78 != (uint *******)&DAT_80000000) {
              uVar56 = puVar33[1];
              uVar62 = puVar33[2];
              uVar65 = puVar33[3];
              uVar71 = puVar33[4];
              *puVar34 = *puVar33;
              puVar34[1] = uVar56;
              puVar34[2] = uVar62;
              puVar34[3] = uVar65;
              puVar34[4] = uVar71;
              uVar56 = puVar33[6];
              uVar62 = puVar33[7];
              uVar65 = puVar33[8];
              uVar71 = puVar33[9];
              uVar72 = puVar33[10];
              puVar34[5] = puVar33[5];
              puVar34[6] = uVar56;
              puVar34[7] = uVar62;
              puVar34[8] = uVar65;
              puVar34[9] = uVar71;
              puVar34[10] = uVar72;
              FUN_01406d64(&local_208);
              if (pppppppuVar52 == local_100) {
                FUN_006520b4(&local_100,pppppppuVar52,1,4,0xc);
                pppppppuVar43 = local_fc;
              }
              local_f8 = (uint *******)((int)pppppppuVar52 + 1);
              pppppppuVar52 = pppppppuVar43 + (int)pppppppuVar52 * 3;
              *pppppppuVar52 = (uint ******)pppppppuVar77;
              pppppppuVar52[1] = (uint ******)pppppppuVar23;
              pppppppuVar52[2] = (uint ******)pppppppuVar35;
              pppppppuVar52 = local_f8;
            }
          }
          else {
            FUN_019bb7e0(local_78,local_74);
            FUN_01406d64(&local_208);
          }
        }
        if (local_a0 != (uint *******)&DAT_80000000) {
          FUN_0072151c(&local_a0);
        }
        pppppppuVar23 = local_fc;
        pppppppuVar77 = local_100;
LAB_013ede64:
        pppppppuVar43 = pppppppuVar23 + (int)pppppppuVar52 * 3;
        local_c8 = pppppppuVar23;
        local_c4 = pppppppuVar23;
        local_c0 = pppppppuVar77;
        local_bc = pppppppuVar43;
        if (pppppppuVar52 != (uint *******)0x0) {
          while( true ) {
            pppppppuVar52 = pppppppuVar23 + 3;
            ppppppuVar80 = *pppppppuVar23;
            local_c4 = pppppppuVar52;
            if (ppppppuVar80 == (uint ******)0x80000000) break;
            local_340 = (uint *******)pppppppuVar23[1];
            ppppppuVar61 = pppppppuVar23[2];
            uVar90 = FUN_01adafd4(param_1[0x44],param_1[0x45],param_1[0x46],param_1[0x47],local_340,
                                  ppppppuVar61);
            uVar74 = (uint)((ulonglong)uVar90 >> 0x20);
            local_350 = (uint *******)uVar90;
            uVar22 = param_1[0x49] & 0x3f;
            uVar73 = (uint)local_350 >> uVar22 | uVar74 << (0x20 - uVar22 & 0xff);
            if (-1 < (int)(uVar22 - 0x20)) {
              uVar73 = uVar74 >> (uVar22 - 0x20 & 0xff);
            }
            uVar74 = 0;
            if (param_1[0x49] != 0x40) {
              uVar74 = uVar73;
            }
            if (param_1[0x43] <= uVar74) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar74,param_1[0x43],&DAT_01cf3dd8);
            }
            ppppppuVar47 = *pppppppuVar13;
            pppppppuVar23 = (uint *******)FUN_013f0d78();
            ppppppuVar47 = ppppppuVar47 + uVar74 * 2;
            local_100 = pppppppuVar23;
            puVar25 = (undefined4 *)FUN_0140b398(ppppppuVar47);
            ppppppuVar54 = ppppppuVar47 + 1;
            puVar36 = puVar25;
LAB_013edf38:
            pppppppuVar77 = (uint *******)puVar36[1];
            pcVar69 = (char *)((int)pppppppuVar77 + -1);
            if ((char *)((uint)pppppppuVar77 ^ (uint)pcVar69) <= pcVar69) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec(&DAT_00475d7a,0x36,&DAT_01cf35b0);
            }
            piVar46 = puVar36 + 5;
            cVar3 = FUN_0160a118((uint)pppppppuVar77 >> 1,piVar46,ppppppuVar54);
            if (cVar3 != '\x03') goto LAB_013ee03c;
            local_1fc = (uint *******)CONCAT31(local_1fc._1_3_,1);
            local_200 = (uint *******)0x0;
            local_210 = (uint *******)&local_100;
            local_20c = (uint *******)((uint)pcVar69 & (uint)local_350);
            local_218 = (uint *******)*puVar36;
            local_208 = local_218 + (int)local_20c;
            local_214 = pppppppuVar77;
            local_204 = local_20c;
LAB_013edfa8:
            FUN_013f4d28(&local_a0,&local_218);
            pppppppuVar35 = local_94;
            pppppppuVar77 = local_9c;
            if (local_a0 != (uint *******)&DAT_00000001) goto LAB_013ee074;
            if (local_9c == (uint *******)0x0) goto LAB_013ee038;
            uVar73 = (uint)local_94 & 0xfffffff8;
            if (uVar73 == 0) goto LAB_013ee074;
            if ((*(uint *******)(uVar73 + 0x28) != ppppppuVar61) ||
               (iVar19 = thunk_FUN_01bed842(*(undefined4 *)(uVar73 + 0x24),local_340,ppppppuVar61),
               iVar19 != 0)) goto LAB_013edfa8;
            if (((uint)pppppppuVar35 & 2) != 0) {
LAB_013ee074:
              local_68 = (uint *******)&DAT_80000000;
              goto LAB_013ee080;
            }
            if ((uint *******)*pppppppuVar77 != pppppppuVar35) {
              ClearExclusiveLocal();
LAB_013ee02c:
              local_1fc = (uint *******)CONCAT31(local_1fc._1_3_,1);
              goto LAB_013edfa8;
            }
            DataMemoryBarrier(0xb);
            bVar83 = (bool)hasExclusiveAccess(pppppppuVar77);
            if (!bVar83) goto LAB_013ee02c;
            *pppppppuVar77 = (uint ******)(uVar73 | 2);
            DataMemoryBarrier(0xb);
            do {
              bVar83 = (bool)hasExclusiveAccess(ppppppuVar54);
            } while (!bVar83);
            *ppppppuVar54 = (uint *****)((int)*ppppppuVar54 + -1);
            do {
              bVar83 = (bool)hasExclusiveAccess(piVar46);
            } while (!bVar83);
            *piVar46 = *piVar46 + 1;
            do {
              bVar83 = (bool)hasExclusiveAccess(puVar8);
            } while (!bVar83);
            *puVar8 = *puVar8 - 1;
            FUN_01408d28(&local_218,uVar73);
            local_78 = local_218;
            local_74 = local_214;
            pppppppuStack_70 = local_210;
            local_6c = local_20c;
            local_68 = local_208;
            pppppppuStack_64 = local_204;
            local_60 = local_200;
            pppppppuStack_5c = local_1fc;
            FUN_013f50bc(pppppppuVar23,(uint ******)(uVar73 | 2));
LAB_013ee080:
            FUN_0140b280(ppppppuVar47,pppppppuVar23,puVar25,puVar36);
            pppppppuVar77 = local_60;
            local_218 = local_78;
            local_214 = local_74;
            local_210 = pppppppuStack_70;
            local_20c = local_6c;
            local_208 = local_68;
            local_204 = pppppppuStack_64;
            local_200 = local_60;
            local_1fc = pppppppuStack_5c;
            FUN_013f0f2c(pppppppuVar23);
            if (local_208 != (uint *******)&DAT_80000000) {
              FUN_01406d64(&local_218);
            }
            FUN_019bb7e0(ppppppuVar80,local_340);
            pppppppuVar23 = pppppppuVar52;
            if (pppppppuVar52 == pppppppuVar43) break;
          }
        }
        FUN_013d5a30(&local_c8);
        if (*puVar8 == 0) {
          DataMemoryBarrier(0xb);
          *(undefined1 *)(param_1 + 0x4b) = 1;
        }
      }
      else {
        local_e4 = (uint *******)&DAT_00000008;
        pppppppuVar23 = (uint *******)0x0;
        local_e0 = (uint *******)0x0;
        local_e8 = (uint *******)0x0;
        pppppppuVar77 = pppppppuVar23;
        if (param_7 != (uint *******)0x0) {
          do {
            pppppppuVar23 = pppppppuVar77;
            if (*pppppppuVar9 == (uint ******)0x0) {
              piVar46 = (int *)param_1[0x65];
              if (piVar46 == (int *)0x0) {
                *pppppppuVar9 = (uint ******)0x0;
                goto LAB_013ee1a8;
              }
              param_1[99] = (uint)piVar46;
              param_1[0x62] = 0;
            }
            else {
              piVar46 = (int *)param_1[99];
              param_1[0x62] = 0;
              if (piVar46 == (int *)0x0) goto LAB_013eddf0;
            }
            iVar19 = *piVar46;
            uVar73 = piVar46[1];
            param_1[0x62] = 1;
            param_1[99] = uVar73;
            DataMemoryBarrier(0xb);
            if (*(short *)(iVar19 + 0x34) == *(short *)(iVar19 + 0x36)) {
              pppppppuVar52 = *(uint ********)(*piVar46 + 0x20);
              ppppppuVar80 = *(uint *******)(*piVar46 + 0x24);
              ClearExclusiveLocal();
              DataMemoryBarrier(0xb);
              if (pppppppuVar52 != (uint *******)&DAT_ffffffff ||
                  ppppppuVar80 != (uint ******)0xffffffff) {
                iVar68 = *piVar46;
                iVar19 = *(int *)(iVar68 + 0x10);
                local_1e8 = 0;
                local_1e4 = 0;
                local_1e0 = 0;
                local_1dc = 0;
                local_1f8 = (uint *******)param_1[0x22];
                local_1f4 = (uint *******)param_1[0x23];
                local_210 = (uint *******)((uint)local_1f8 ^ 0x6e657261);
                local_1f0 = (uint *******)param_1[0x24];
                pppppppuStack_1ec = (uint *******)param_1[0x25];
                local_20c = (uint *******)((uint)local_1f4 ^ 0x6c796765);
                local_204 = (uint *******)((uint)pppppppuStack_1ec ^ 0x646f7261);
                local_208 = (uint *******)((uint)local_1f0 ^ 0x6e646f6d);
                local_1fc = (uint *******)((uint)pppppppuStack_1ec ^ 0x74656462);
                local_200 = (uint *******)((uint)local_1f0 ^ 0x79746573);
                local_214 = (uint *******)((uint)local_1f4 ^ 0x736f6d65);
                local_218 = (uint *******)((uint)local_1f8 ^ 0x70736575);
                FUN_013f8a0c(iVar19 + 8,&local_218);
                uVar2 = *(ushort *)(iVar19 + 0x50);
                local_78 = (uint *******)(uint)uVar2;
                FUN_013f18e0(&local_218,&local_78,4);
                if ((uint ******)(uint)uVar2 == (uint ******)0x24) {
                  local_78 = (uint *******)CONCAT22(local_78._2_2_,*(undefined2 *)(iVar19 + 0x52));
                  FUN_013f18e0(&local_218,&local_78,2);
                }
                pppppppuVar23 = (uint *******)(uint)*(ushort *)(iVar19 + 0x4c);
                local_78 = pppppppuVar23;
                FUN_013f18e0(&local_218,&local_78,4);
                if (pppppppuVar23 == (uint *******)&DAT_00000006 ||
                    pppppppuVar23 == (uint *******)&DAT_00000005) {
                  local_78 = (uint *******)CONCAT22(local_78._2_2_,*(undefined2 *)(iVar19 + 0x4e));
                  FUN_013f18e0(&local_218,&local_78,2);
                }
                pppppppuVar43 = local_e0;
                ppppppuVar61 = *(uint *******)(iVar68 + 0x10);
                do {
                  pppppuVar32 = *ppppppuVar61;
                  bVar83 = (bool)hasExclusiveAccess(ppppppuVar61);
                } while (!bVar83);
                *ppppppuVar61 = (uint *****)((int)pppppuVar32 + 1);
                if ((int)pppppuVar32 < 0) {
LAB_013efec4:
                    /* WARNING: Does not return */
                  pcVar1 = (code *)software_udf(0xfdee,0x13efec4);
                  (*pcVar1)();
                }
                pcVar76 = (char *)((int)local_204 + (int)local_214) +
                          CARRY4((uint)local_208,(uint)local_218);
                uVar67 = ((int)local_204 << 0xd | (uint)local_208 >> 0x13) ^ (uint)pcVar76;
                uVar73 = local_1e4 | (uint)local_1e0 << 0x18;
                uVar51 = ((int)local_208 << 0xd | (uint)local_204 >> 0x13) ^
                         (uint)((int)local_208 + (int)local_218);
                uVar49 = local_1e8 ^ (uint)local_200;
                uVar74 = uVar73 ^ (uint)local_1fc;
                pcVar79 = (char *)(uVar49 + (int)local_210);
                pcVar69 = (char *)((int)local_20c + CARRY4(uVar49,(uint)local_210) + uVar74);
                pcVar59 = pcVar79 + uVar51;
                pcVar55 = pcVar69 + CARRY4((uint)pcVar79,uVar51) + uVar67;
                uVar57 = (uint)pcVar55 ^ (uVar67 << 0x11 | uVar51 >> 0xf);
                uVar22 = (uVar49 << 0x10 | uVar74 >> 0x10) ^ (uint)pcVar79;
                uVar74 = (uVar74 << 0x10 | uVar49 >> 0x10) ^ (uint)pcVar69;
                pcVar69 = (char *)((int)local_208 + (int)local_218) +
                          CARRY4(uVar22,(uint)pcVar76) + uVar74;
                uVar49 = (uint)pcVar59 ^ (uVar51 << 0x11 | uVar67 >> 0xf);
                uVar67 = (uint)(pcVar76 + uVar22) ^ local_1e8;
                uVar44 = uVar67 + uVar49;
                uVar50 = ((uint)pcVar69 ^ uVar73) + uVar57 + (uint)CARRY4(uVar67,uVar49);
                uVar73 = uVar50 ^ (uVar57 << 0xd | uVar49 >> 0x13);
                uVar51 = uVar44 ^ (uVar49 << 0xd | uVar57 >> 0x13);
                uVar49 = (uVar74 << 0x15 | uVar22 >> 0xb) ^ (uint)pcVar69;
                uVar78 = (uint)pcVar55 ^ 0xff;
                uVar22 = (uVar22 << 0x15 | uVar74 >> 0xb) ^ (uint)(pcVar76 + uVar22);
                uVar45 = uVar22 + uVar78;
                pcVar55 = pcVar59 + CARRY4(uVar22,uVar78) + uVar49 + CARRY4(uVar51,uVar45) + uVar73;
                uVar67 = (uint)pcVar55 ^ (uVar73 << 0x11 | uVar51 >> 0xf);
                uVar57 = uVar51 + uVar45 ^ (uVar51 << 0x11 | uVar73 >> 0xf);
                uVar74 = (uVar49 << 0x10 | uVar22 >> 0x10) ^
                         (uint)(pcVar59 + CARRY4(uVar22,uVar78) + uVar49);
                uVar22 = (uVar22 << 0x10 | uVar49 >> 0x10) ^ uVar45;
                uVar78 = uVar22 + uVar50;
                uVar49 = uVar74 + uVar44 + (uint)CARRY4(uVar22,uVar50);
                uVar75 = uVar67 + uVar49 + (uint)CARRY4(uVar57,uVar78);
                uVar73 = (uVar67 << 0xd | uVar57 >> 0x13) ^ uVar75;
                uVar67 = (uVar57 << 0xd | uVar67 >> 0x13) ^ uVar57 + uVar78;
                uVar49 = (uVar74 << 0x15 | uVar22 >> 0xb) ^ uVar49;
                uVar74 = (uVar22 << 0x15 | uVar74 >> 0xb) ^ uVar78;
                pcVar69 = pcVar55 + uVar74;
                uVar22 = uVar49 + uVar51 + uVar45 + (uint)CARRY4(uVar74,(uint)pcVar55);
                uVar45 = (uVar49 << 0x10 | uVar74 >> 0x10) ^ uVar22;
                pcVar59 = pcVar69 + uVar67;
                uVar74 = (uVar74 << 0x10 | uVar49 >> 0x10) ^ (uint)pcVar69;
                uVar50 = uVar73 + uVar22 + (uint)CARRY4(uVar67,(uint)pcVar69);
                uVar49 = uVar74 + uVar75;
                uVar58 = (uVar73 << 0x11 | uVar67 >> 0xf) ^ uVar50;
                uVar44 = (uVar74 << 0x15 | uVar45 >> 0xb) ^ uVar49;
                uVar51 = uVar45 + uVar57 + uVar78 + (uint)CARRY4(uVar74,uVar75);
                uVar73 = (uVar67 << 0x11 | uVar73 >> 0xf) ^ (uint)pcVar59;
                uVar22 = uVar44 + uVar50;
                uVar74 = (uVar45 << 0x15 | uVar74 >> 0xb) ^ uVar51;
                pcVar59 = pcVar59 + CARRY4(uVar44,uVar50) + uVar74;
                uVar67 = (uVar73 << 0xd | uVar58 >> 0x13) ^ uVar73 + uVar49;
                uVar73 = (uVar58 << 0xd | uVar73 >> 0x13) ^
                         uVar58 + uVar51 + (uint)CARRY4(uVar73,uVar49);
                if (local_e0 == local_e8) {
                  FUN_0140bcfc(&local_e8);
                }
                uVar49 = (uVar74 << 0x10 | uVar44 >> 0x10) ^ (uint)pcVar59;
                uVar74 = (uVar44 << 0x10 | uVar74 >> 0x10) ^ uVar22;
                pppppppuVar35 = local_e4 + (int)pppppppuVar43 * 6;
                *pppppppuVar35 =
                     (uint ******)
                     ((uVar74 << 0x15 | uVar49 >> 0xb) ^ (uVar67 << 0x11 | uVar73 >> 0xf) ^
                      (uint)(pcVar59 + CARRY4(uVar67,uVar22) + uVar73) ^ uVar67 + uVar22);
                pppppppuVar35[1] =
                     (uint ******)
                     ((uVar49 << 0x15 | uVar74 >> 0xb) ^ (uVar73 << 0x11 | uVar67 >> 0xf) ^
                      uVar67 + uVar22 ^ (uint)(pcVar59 + CARRY4(uVar67,uVar22) + uVar73));
                pppppppuVar23 = (uint *******)((int)pppppppuVar77 + 1);
                pppppppuVar35[2] = (uint ******)pppppppuVar52;
                pppppppuVar35[3] = ppppppuVar80;
                pppppppuVar35[4] = ppppppuVar61;
                local_e0 = (uint *******)((int)pppppppuVar43 + 1);
                local_350 = pppppppuVar52;
                local_340 = pppppppuVar77;
              }
            }
            pppppppuVar77 = pppppppuVar23;
          } while (pppppppuVar23 < param_7);
        }
        pppppppuVar77 = pppppppuVar23;
        if (*pppppppuVar9 == (uint ******)0x0) {
LAB_013eddf0:
          uVar73 = param_1[0x65];
          pppppppuVar23 = pppppppuVar77;
          if (uVar73 != 0) {
            param_1[99] = uVar73;
            param_1[0x62] = 0;
            goto LAB_013ede0c;
          }
LAB_013ee1a8:
          pppppppuVar77 = (uint *******)0x0;
          *pppppppuVar9 = (uint ******)0x0;
        }
        else {
          pppppppuVar77 = (uint *******)0x0;
          uVar73 = param_1[99];
          param_1[0x62] = 0;
          if (uVar73 != 0) {
LAB_013ede0c:
            pppppppuVar77 = (uint *******)&DAT_00000001;
            uVar73 = *(uint *)(uVar73 + 4);
            param_1[0x62] = 1;
            param_1[99] = uVar73;
          }
        }
        if (pppppppuVar23 == (uint *******)0x0) {
          FUN_013f1d20(&local_e8);
          pppppppuVar77 = pppppppuVar9;
        }
        else {
          local_d8 = local_e8;
          local_d4 = local_e4;
          local_d0 = local_e0;
          uVar73 = param_1[0x4a];
          pcVar69 = (char *)(uVar73 + 8);
          if (*pcVar69 == '\0') {
            bVar83 = (bool)hasExclusiveAccess(pcVar69);
            if (!bVar83) goto LAB_013ee204;
            *pcVar69 = '\x01';
            DataMemoryBarrier(0xb);
          }
          else {
            ClearExclusiveLocal();
LAB_013ee204:
            FUN_0164fba8(pcVar69);
          }
          FUN_0165098c(pcVar69);
          pppppppuVar52 = *(uint ********)(uVar73 + 0x14);
          puVar36 = (undefined4 *)(uVar73 + 0xc);
          if (pppppppuVar52 == (uint *******)0x0) {
            local_84 = (uint *******)((uint)local_84 & 0xffffff00);
            local_88 = (uint *******)0x0;
            local_8c = (uint *******)param_1[0x43];
            local_90 = (uint *******)&DAT_01cf3af8;
            local_a0 = (uint *******)&DAT_80000000;
            local_94 = pppppppuVar13;
            FUN_01408d94(&local_218,&local_a0);
            pppppppuVar52 = local_1f8;
            if (local_218 == (uint *******)&DAT_80000000) {
LAB_013ee2c0:
              pppppppuVar43 = (uint *******)&DAT_00000008;
              if (local_a0 != (uint *******)&DAT_80000000) {
                FUN_0072151c(&local_a0);
              }
              pppppppuVar52 = (uint *******)0x0;
              pppppppuVar35 = (uint *******)0x0;
            }
            else {
              local_78 = local_208;
              local_74 = local_204;
              pppppppuStack_70 = local_200;
              local_6c = local_1fc;
              local_c8 = local_1f4;
              local_c4 = local_1f0;
              local_c0 = pppppppuStack_1ec;
              FUN_019bb7e0(local_218,local_214);
              local_350 = pppppppuVar77;
              if (pppppppuVar52 == (uint *******)&DAT_80000000) goto LAB_013ee2c0;
              local_218 = local_78;
              local_214 = local_74;
              local_210 = pppppppuStack_70;
              local_20c = local_6c;
              local_208 = pppppppuVar52;
              local_204 = local_c8;
              local_200 = local_c4;
              local_1fc = local_c0;
              pppppppuVar43 = (uint *******)thunk_FUN_01be5118(0x80);
              if (pppppppuVar43 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00664620(8,0x80);
              }
              *pppppppuVar43 = (uint ******)local_218;
              pppppppuVar43[1] = (uint ******)local_214;
              pppppppuVar43[2] = (uint ******)local_210;
              pppppppuVar43[3] = (uint ******)local_20c;
              pppppppuVar43[4] = (uint ******)local_208;
              pppppppuVar43[5] = (uint ******)local_204;
              pppppppuVar43[6] = (uint ******)local_200;
              pppppppuVar43[7] = (uint ******)local_1fc;
              local_48 = (uint *******)&SUB_00000004;
              local_40 = (uint *******)&DAT_00000001;
              local_78 = local_a0;
              local_74 = local_9c;
              pppppppuStack_70 = local_98;
              local_6c = local_94;
              local_68 = local_90;
              pppppppuStack_64 = local_8c;
              local_60 = local_88;
              pppppppuStack_5c = local_84;
              local_44 = pppppppuVar43;
              while( true ) {
                pppppppuVar52 = local_40;
                FUN_01408d94(&local_218,&local_78);
                pppppppuVar35 = local_1f8;
                if (local_218 == (uint *******)&DAT_80000000) break;
                local_c8 = local_208;
                local_c4 = local_204;
                local_c0 = local_200;
                local_bc = local_1fc;
                local_100 = local_1f4;
                local_fc = local_1f0;
                local_f8 = pppppppuStack_1ec;
                FUN_019bb7e0(local_218,local_214);
                if (pppppppuVar35 == (uint *******)&DAT_80000000) break;
                local_218 = local_c8;
                local_214 = local_c4;
                local_210 = local_c0;
                local_20c = local_bc;
                local_208 = pppppppuVar35;
                local_204 = local_100;
                local_200 = local_fc;
                local_1fc = local_f8;
                if (pppppppuVar52 == local_48) {
                  FUN_01af7b44(&local_48,pppppppuVar52,1,8,0x20);
                  pppppppuVar43 = local_44;
                }
                pppppppuVar35 = pppppppuVar43 + (int)pppppppuVar52 * 8;
                local_40 = (uint *******)((int)pppppppuVar52 + 1);
                *pppppppuVar35 = (uint ******)local_218;
                pppppppuVar35[1] = (uint ******)local_214;
                pppppppuVar35[2] = (uint ******)local_210;
                pppppppuVar35[3] = (uint ******)local_20c;
                pppppppuVar35[4] = (uint ******)local_208;
                pppppppuVar35[5] = (uint ******)local_204;
                pppppppuVar35[6] = (uint ******)local_200;
                pppppppuVar35[7] = (uint ******)local_1fc;
              }
              if (local_78 != (uint *******)&DAT_80000000) {
                FUN_0072151c(&local_78);
              }
              pppppppuVar35 = local_48;
              local_340 = pppppppuVar23;
            }
            FUN_01408930(puVar36);
            *(uint ********)(uVar73 + 0xc) = pppppppuVar35;
            *(uint ********)(uVar73 + 0x10) = pppppppuVar43;
            *(uint ********)(uVar73 + 0x14) = pppppppuVar52;
          }
          local_40 = (uint *******)0x0;
          local_44 = (uint *******)&SUB_00000004;
          local_48 = (uint *******)0x0;
          uVar74 = (uint)(pppppppuVar23 == param_7) & (uint)pppppppuVar77;
          if (local_d0 != (uint *******)0x0) {
            pppppppuVar23 = local_d4 + (int)local_d0 * 6;
            pppppppuVar77 = local_d4;
            do {
              local_340 = pppppppuVar77;
              ppppppuVar80 = *local_340;
              ppppppuVar61 = local_340[1];
              uVar49 = param_1[0x1d] & 0x3f;
              uVar22 = (uint)ppppppuVar80 >> uVar49 | (int)ppppppuVar61 << (0x20 - uVar49 & 0xff);
              if (-1 < (int)(uVar49 - 0x20)) {
                uVar22 = (uint)ppppppuVar61 >> (uVar49 - 0x20 & 0xff);
              }
              uVar49 = 0;
              if (param_1[0x1d] != 0x40) {
                uVar49 = uVar22;
              }
              if (param_1[0x17] <= uVar49) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar49,param_1[0x17],&DAT_01cf3dd8);
              }
              local_350 = (uint *******)local_340[2];
              pppppppuVar43 = (uint *******)local_340[3];
              iVar19 = *(int *)(uVar73 + 0x14);
              iVar60 = *(int *)(uVar73 + 0x10);
              uVar22 = param_1[0x16];
              pppppppuVar77 = (uint *******)FUN_013f0d78();
              iVar68 = uVar22 + uVar49 * 8;
              local_a0 = pppppppuVar77;
              puVar29 = (undefined4 *)FUN_0140b1c4(iVar68);
              puVar25 = puVar29;
LAB_013ee564:
              pppppppuVar35 = (uint *******)puVar25[1];
              pppppppuVar52 = (uint *******)((uint)((int)pppppppuVar35 + -1) & (uint)ppppppuVar80);
              if (pppppppuVar35 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(pppppppuVar52,0,&DAT_01cf3570);
              }
              local_218 = (uint *******)*puVar25;
              local_1fc = (uint *******)CONCAT31(local_1fc._1_3_,1);
              local_200 = (uint *******)0x0;
              local_208 = local_218 + (int)pppppppuVar52;
              local_210 = (uint *******)&local_a0;
              local_214 = pppppppuVar35;
              local_20c = pppppppuVar52;
              local_204 = pppppppuVar52;
LAB_013ee5b0:
              FUN_013f4d28(&local_78,&local_218);
              pppppppuVar52 = local_6c;
              if (local_78 == (uint *******)&DAT_00000001) {
                if (local_74 != (uint *******)0x0) {
                  puVar81 = (uint *)((uint)local_6c & 0xfffffff8);
                  if (puVar81 == (uint *)0x0) goto LAB_013ee698;
                  ppppppuVar47 = (uint ******)*puVar81;
                  ppppppuVar54 = local_340[4];
                  if ((ppppppuVar47 == ppppppuVar54) ||
                     ((((iVar70 = FUN_013cad2c(ppppppuVar47 + 2,ppppppuVar54 + 2), iVar70 != 0 &&
                        (*(short *)(ppppppuVar47 + 0x14) == *(short *)(ppppppuVar54 + 0x14))) &&
                       ((*(short *)(ppppppuVar47 + 0x14) != 0x24 ||
                        (*(short *)((int)ppppppuVar47 + 0x52) ==
                         *(short *)((int)ppppppuVar54 + 0x52))))) &&
                      (((uint)*(ushort *)(ppppppuVar47 + 0x13) ==
                        (uint)*(ushort *)(ppppppuVar54 + 0x13) &&
                       ((1 < *(ushort *)(ppppppuVar47 + 0x13) - 5 ||
                        (*(short *)((int)ppppppuVar47 + 0x4e) ==
                         *(short *)((int)ppppppuVar54 + 0x4e))))))))) {
                    piVar46 = (int *)0x0;
                    if (((uint)pppppppuVar52 & 2) == 0) {
                      piVar46 = (int *)puVar81[1];
                      do {
                        iVar70 = *piVar46;
                        bVar83 = (bool)hasExclusiveAccess(piVar46);
                      } while (!bVar83);
                      *piVar46 = iVar70 + 1;
                      if (iVar70 < 0) goto LAB_013efbd0;
                    }
                    goto LAB_013ee6cc;
                  }
                  goto LAB_013ee5b0;
                }
                puVar31 = (undefined4 *)
                          FUN_013f57f0(puVar25,&local_a0,*puVar6,param_1[0x19],*puVar5,param_1[0x1b]
                                       ,0);
                if (puVar31 != (undefined4 *)0x0) {
                  puVar25 = puVar31;
                }
                goto LAB_013ee564;
              }
LAB_013ee698:
              piVar46 = (int *)0x0;
LAB_013ee6cc:
              FUN_0140b280(iVar68,pppppppuVar77,puVar29,puVar25);
              FUN_013f0f2c(pppppppuVar77);
              if (piVar46 != (int *)0x0) {
                bVar83 = false;
                pppppppuVar77 = *(uint ********)(piVar46[0x20] + 0x20);
                pppppppuVar52 = *(uint ********)(piVar46[0x20] + 0x24);
                ClearExclusiveLocal();
                DataMemoryBarrier(0xb);
                if ((pppppppuVar77 != (uint *******)&DAT_ffffffff ||
                     pppppppuVar52 != (uint *******)&DAT_ffffffff) &&
                   (pppppppuVar77 == local_350 && pppppppuVar52 == pppppppuVar43)) {
                  ppppppuVar47 = local_340[4];
                  iVar19 = iVar19 << 5;
                  while( true ) {
                    bVar83 = false;
                    if ((iVar19 == 0) ||
                       (FUN_01408d28(&local_218,iVar60), local_208 == (uint *******)&DAT_80000000))
                    goto LAB_013ee7e4;
                    if ((pppppppuVar43 < local_20c ||
                         (uint)((int)local_20c - (int)pppppppuVar43) <
                         (uint)(local_350 <= local_210)) &&
                       (iVar68 = (*(code *)local_214[5])
                                           ((char *)((int)local_218 +
                                                    ((int)local_214[2] - 1U & 0xfffffff8) + 8),
                                            ppppppuVar47 + 2,piVar46 + 2), iVar68 != 0)) break;
                    FUN_01406d64(&local_218);
                    iVar60 = iVar60 + 0x20;
                    iVar19 = iVar19 + -0x20;
                  }
                  bVar83 = true;
                  FUN_01406d64(&local_218);
                }
LAB_013ee7e4:
                FUN_01406bcc(piVar46);
                if (bVar83) {
                  if (*puVar11 == 0) {
                    pppppppuVar77 = (uint *******)0x0;
                    local_68 = (uint *******)0x0;
                  }
                  else {
                    FUN_0140b4bc(&local_78,puVar11,local_340[4]);
                    if (local_68 == (uint *******)0x0) {
                      pppppppuVar77 = (uint *******)0x0;
                    }
                    else {
                      pppppppuVar77 = local_68 + 1;
                      if (*(char *)pppppppuVar77 == '\0') {
                        bVar83 = (bool)hasExclusiveAccess(pppppppuVar77);
                        if (!bVar83) goto LAB_013ee860;
                        *(char *)pppppppuVar77 = '\x01';
                        DataMemoryBarrier(0xb);
                      }
                      else {
                        ClearExclusiveLocal();
LAB_013ee860:
                        FUN_0164fba8(pppppppuVar77);
                      }
                      FUN_0165098c(pppppppuVar77);
                    }
                  }
                  uVar49 = param_1[0x1d] & 0x3f;
                  uVar22 = (uint)ppppppuVar80 >> uVar49 |
                           (int)ppppppuVar61 << (0x20 - uVar49 & 0xff);
                  if (-1 < (int)(uVar49 - 0x20)) {
                    uVar22 = (uint)ppppppuVar61 >> (uVar49 - 0x20 & 0xff);
                  }
                  uVar49 = 0;
                  if (param_1[0x1d] != 0x40) {
                    uVar49 = uVar22;
                  }
                  if (param_1[0x17] <= uVar49) {
                    /* WARNING: Subroutine does not return */
                    FUN_012fb12c(uVar49,param_1[0x17],&DAT_01cf3dd8);
                  }
                  uVar22 = param_1[0x16];
                  pppppppuVar52 = (uint *******)FUN_013f0d78();
                  iVar19 = uVar22 + uVar49 * 8;
                  local_c8 = pppppppuVar52;
                  puVar29 = (undefined4 *)FUN_0140b1c4(iVar19);
                  piVar46 = (int *)(iVar19 + 4);
                  puVar25 = puVar29;
                  while( true ) {
                    pppppppuVar35 = (uint *******)puVar25[1];
                    pcVar59 = (char *)((int)pppppppuVar35 + -1);
                    if ((char *)((uint)pppppppuVar35 ^ (uint)pcVar59) <= pcVar59) {
                    /* WARNING: Subroutine does not return */
                      FUN_012fb0ec(&DAT_00475d7a,0x36,&DAT_01cf35b0);
                    }
                    piVar37 = puVar25 + 5;
                    cVar3 = FUN_0160a118((uint)pppppppuVar35 >> 1,piVar37,piVar46);
                    if (cVar3 == '\x03') break;
                    puVar31 = (undefined4 *)
                              FUN_013f57f0(puVar25,&local_c8,*puVar6,param_1[0x19],*puVar5,
                                           param_1[0x1b],cVar3);
LAB_013eeae0:
                    if (puVar31 != (undefined4 *)0x0) {
                      puVar25 = puVar31;
                    }
                  }
                  local_1fc = (uint *******)CONCAT31(local_1fc._1_3_,1);
                  local_200 = (uint *******)0x0;
                  local_210 = (uint *******)&local_c8;
                  local_20c = (uint *******)((uint)pcVar59 & (uint)ppppppuVar80);
                  local_218 = (uint *******)*puVar25;
                  local_208 = local_218 + (int)local_20c;
                  local_214 = pppppppuVar35;
                  local_204 = local_20c;
                  do {
                    do {
                      FUN_013f4d28(&local_a0,&local_218);
                      pppppppuVar53 = local_94;
                      pppppppuVar35 = local_9c;
                      if (local_a0 != (uint *******)&DAT_00000001) goto LAB_013eeb74;
                      if (local_9c == (uint *******)0x0) {
                        puVar31 = (undefined4 *)
                                  FUN_013f57f0(puVar25,&local_c8,*puVar6,param_1[0x19],*puVar5,
                                               param_1[0x1b],0);
                        goto LAB_013eeae0;
                      }
                      puVar81 = (uint *)((uint)local_94 & 0xfffffff8);
                      if (puVar81 == (uint *)0x0) {
LAB_013eeb74:
                        ppppppuVar80 = (uint ******)0x0;
                        goto LAB_013eeb7c;
                      }
                      ppppppuVar61 = (uint ******)*puVar81;
                      ppppppuVar47 = local_340[4];
                    } while ((ppppppuVar61 != ppppppuVar47) &&
                            ((((iVar68 = FUN_013cad2c(ppppppuVar61 + 2,ppppppuVar47 + 2),
                               iVar68 == 0 ||
                               (*(short *)(ppppppuVar61 + 0x14) != *(short *)(ppppppuVar47 + 0x14)))
                              || ((*(short *)(ppppppuVar61 + 0x14) == 0x24 &&
                                  (*(short *)((int)ppppppuVar61 + 0x52) !=
                                   *(short *)((int)ppppppuVar47 + 0x52))))) ||
                             (((uint)*(ushort *)(ppppppuVar61 + 0x13) !=
                               (uint)*(ushort *)(ppppppuVar47 + 0x13) ||
                              ((*(ushort *)(ppppppuVar61 + 0x13) - 5 < 2 &&
                               (*(short *)((int)ppppppuVar61 + 0x4e) !=
                                *(short *)((int)ppppppuVar47 + 0x4e)))))))));
                    if (((uint)pppppppuVar53 & 2) != 0) goto LAB_013eeb74;
                    pppppppuVar30 = *(uint ********)(*(int *)(puVar81[1] + 0x80) + 0x20);
                    pppppppuVar39 = *(uint ********)(*(int *)(puVar81[1] + 0x80) + 0x24);
                    ClearExclusiveLocal();
                    DataMemoryBarrier(0xb);
                    if ((pppppppuVar30 == (uint *******)&DAT_ffffffff &&
                         pppppppuVar39 == (uint *******)&DAT_ffffffff) ||
                       (pppppppuVar30 != local_350 || pppppppuVar39 != pppppppuVar43))
                    goto LAB_013eeb74;
                    if ((uint *******)*pppppppuVar35 == pppppppuVar53) {
                      DataMemoryBarrier(0xb);
                      bVar83 = (bool)hasExclusiveAccess(pppppppuVar35);
                      if (!bVar83) goto LAB_013eea70;
                      *pppppppuVar35 = (uint ******)((uint)puVar81 | 2);
                      DataMemoryBarrier(0xb);
                      if (((uint)pppppppuVar53 & 0xfffffff8) == 0) goto LAB_013eeb74;
                      do {
                        bVar83 = (bool)hasExclusiveAccess(piVar46);
                      } while (!bVar83);
                      *piVar46 = *piVar46 + -1;
                      do {
                        bVar83 = (bool)hasExclusiveAccess(piVar37);
                      } while (!bVar83);
                      *piVar37 = *piVar37 + 1;
                      do {
                        bVar83 = (bool)hasExclusiveAccess(puVar10);
                      } while (!bVar83);
                      *puVar10 = *puVar10 - 1;
                      ppppppuVar80 = *(uint *******)(((uint)pppppppuVar53 & 0xfffffff8) + 4);
                      do {
                        pppppuVar32 = *ppppppuVar80;
                        bVar83 = (bool)hasExclusiveAccess(ppppppuVar80);
                      } while (!bVar83);
                      *ppppppuVar80 = (uint *****)((int)pppppuVar32 + 1);
                      if ((int)pppppuVar32 < 0) goto LAB_013efbd0;
                      FUN_013f5018(pppppppuVar52);
LAB_013eeb7c:
                      FUN_0140b280(iVar19,pppppppuVar52,puVar29,puVar25);
                      uVar22 = FUN_013f0f2c(pppppppuVar52);
                      if (ppppppuVar80 != (uint ******)0x0) {
                        uVar22 = *puVar66;
                      }
                      if (ppppppuVar80 != (uint ******)0x0 && uVar22 != 0) {
                        ppppppuVar61 = local_340[4];
                        do {
                          pppppuVar32 = *ppppppuVar61;
                          bVar83 = (bool)hasExclusiveAccess(ppppppuVar61);
                        } while (!bVar83);
                        *ppppppuVar61 = (uint *****)((int)pppppuVar32 + 1);
                        if ((int)pppppuVar32 < 0) goto LAB_013efec4;
                        FUN_013f396c(param_1,ppppppuVar61,ppppppuVar80,1);
                      }
                      if (pppppppuVar77 != (uint *******)0x0) {
                        FUN_01650a90(pppppppuVar77);
                        if (*(char *)pppppppuVar77 == '\x01') {
                          DataMemoryBarrier(0xb);
                          do {
                            bVar83 = (bool)hasExclusiveAccess(pppppppuVar77);
                            if (bVar83) {
                              *(char *)pppppppuVar77 = '\0';
                              goto LAB_013eec28;
                            }
                          } while (*(char *)pppppppuVar77 == '\x01');
                        }
                        ClearExclusiveLocal();
                        FUN_0164f86c(pppppppuVar77);
                      }
LAB_013eec28:
                      FUN_013f0f64(&local_78);
                      pppppppuVar77 = local_40;
                      if (ppppppuVar80 != (uint ******)0x0) {
                        ppppppuVar61 = local_340[4];
                        do {
                          pppppuVar32 = *ppppppuVar61;
                          bVar83 = (bool)hasExclusiveAccess(ppppppuVar61);
                        } while (!bVar83);
                        *ppppppuVar61 = (uint *****)((int)pppppuVar32 + 1);
                        if ((int)pppppuVar32 < 0) goto LAB_013efec4;
                        if (local_40 == local_48) {
                          FUN_013e6324(&local_48);
                        }
                        local_44[(int)pppppppuVar77 * 2] = ppppppuVar61;
                        (local_44 + (int)pppppppuVar77 * 2)[1] = ppppppuVar80;
                        local_40 = (uint *******)((int)pppppppuVar77 + 1);
                      }
                      break;
                    }
                    ClearExclusiveLocal();
LAB_013eea70:
                    local_1fc = (uint *******)CONCAT31(local_1fc._1_3_,1);
                  } while( true );
                }
              }
              pppppppuVar77 = local_340 + 6;
            } while (local_340 + 6 != pppppppuVar23);
            pppppppuVar52 = *(uint ********)(uVar73 + 0x14);
            if (uVar74 == 0) goto LAB_013ef70c;
            ppppppuVar61 = *(uint *******)(uVar73 + 0x10);
            *(undefined4 *)(uVar73 + 0x14) = 0;
            local_f8 = (uint *******)0x0;
            local_100 = (uint *******)0x0;
            local_c0 = (uint *******)0x0;
            local_c8 = (uint *******)0x0;
            local_90 = (uint *******)0x0;
            ppppppuVar80 = ppppppuVar61 + (int)pppppppuVar52 * 8;
            local_fc = (uint *******)&DAT_00000008;
            local_c4 = (uint *******)&DAT_00000008;
            local_a0 = (uint *******)ppppppuVar61;
            local_9c = (uint *******)ppppppuVar80;
            local_98 = (uint *******)puVar36;
            local_94 = pppppppuVar52;
            if (pppppppuVar52 != (uint *******)0x0) {
              local_340 = (uint *******)((int)pppppppuVar52 << 5);
              pppppppuVar77 = (uint *******)0x0;
              pppppppuVar52 = (uint *******)0x0;
              pppppppuVar23 = (uint *******)0x0;
              local_358 = (uint *******)&DAT_00000008;
              local_35c = (uint *******)&DAT_00000008;
              do {
                pcVar59 = (char *)((int)ppppppuVar61 + (int)pppppppuVar77);
                pppppppuVar35 = *(uint ********)(pcVar59 + 0x10);
                ppppppuVar47 = (uint ******)(pcVar59 + 0x20);
                if (pppppppuVar35 == (uint *******)&DAT_80000000) goto LAB_013eee4c;
                local_210 = *(uint ********)(pcVar59 + 8);
                local_20c = *(uint ********)(pcVar59 + 0xc);
                local_208 = pppppppuVar35;
                if (pppppppuVar43 < local_20c ||
                    (uint)((int)local_20c - (int)pppppppuVar43) < (uint)(local_350 <= local_210)) {
                  local_218 = *(uint ********)pcVar59;
                  local_214 = *(uint ********)(pcVar59 + 4);
                  local_204 = *(uint ********)(pcVar59 + 0x14);
                  local_200 = *(uint ********)(pcVar59 + 0x18);
                  local_1fc = *(uint ********)(pcVar59 + 0x1c);
                  if (pppppppuVar23 == local_100) {
                    FUN_0140bd5c(&local_100);
                    local_35c = local_fc;
                  }
                  pppppppuVar35 = local_35c + (int)pppppppuVar23 * 8;
                  pppppppuVar23 = (uint *******)((int)pppppppuVar23 + 1);
                  *pppppppuVar35 = (uint ******)local_218;
                  pppppppuVar35[1] = (uint ******)local_214;
                  pppppppuVar35[2] = (uint ******)local_210;
                  pppppppuVar35[3] = (uint ******)local_20c;
                  pppppppuVar35[4] = (uint ******)local_208;
                  pppppppuVar35[5] = (uint ******)local_204;
                  pppppppuVar35[6] = (uint ******)local_200;
                  pppppppuVar35[7] = (uint ******)local_1fc;
                  local_f8 = pppppppuVar23;
                }
                else {
                  local_218 = *(uint ********)pcVar59;
                  local_214 = *(uint ********)(pcVar59 + 4);
                  local_204 = *(uint ********)(pcVar59 + 0x14);
                  local_200 = *(uint ********)(pcVar59 + 0x18);
                  local_1fc = *(uint ********)(pcVar59 + 0x1c);
                  if (pppppppuVar52 == local_c8) {
                    FUN_0140bd5c(&local_c8);
                    local_358 = local_c4;
                  }
                  pppppppuVar35 = local_358 + (int)pppppppuVar52 * 8;
                  pppppppuVar52 = (uint *******)((int)pppppppuVar52 + 1);
                  *pppppppuVar35 = (uint ******)local_218;
                  pppppppuVar35[1] = (uint ******)local_214;
                  pppppppuVar35[2] = (uint ******)local_210;
                  pppppppuVar35[3] = (uint ******)local_20c;
                  pppppppuVar35[4] = (uint ******)local_208;
                  pppppppuVar35[5] = (uint ******)local_204;
                  pppppppuVar35[6] = (uint ******)local_200;
                  pppppppuVar35[7] = (uint ******)local_1fc;
                  local_c0 = pppppppuVar52;
                }
                pppppppuVar77 = pppppppuVar77 + 8;
              } while (local_340 != pppppppuVar77);
              ppppppuVar47 = ppppppuVar80;
LAB_013eee4c:
              local_a0 = (uint *******)ppppppuVar47;
            }
            FUN_014096c4(&local_a0);
            local_78 = local_100;
            local_74 = local_fc;
            pppppppuStack_70 = local_f8;
            local_6c = local_c8;
            local_68 = local_c4;
            pppppppuStack_64 = local_c0;
            local_a0 = local_100;
            local_9c = local_fc;
            local_98 = local_f8;
            local_218 = local_c8;
            local_214 = local_c4;
            local_210 = local_c0;
            FUN_0140826c(pppppppuVar13,local_c4,local_c0);
            FUN_01408930(puVar36);
            *puVar36 = local_a0;
            *(uint ********)(uVar73 + 0x10) = local_9c;
            *(uint ********)(uVar73 + 0x14) = local_98;
            FUN_01408930(&local_218);
            goto LAB_013eeedc;
          }
          if (uVar74 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf3b0c);
          }
LAB_013ef70c:
          FUN_0140826c(pppppppuVar13,*(undefined4 *)(uVar73 + 0x10),pppppppuVar52);
          iVar68 = *(int *)(uVar73 + 0x14) + 1;
          *(undefined4 *)(uVar73 + 0x14) = 0;
          iVar19 = *(int *)(uVar73 + 0x10);
          while (iVar68 = iVar68 + -1, iVar68 != 0) {
            FUN_01406d64(iVar19);
            iVar19 = iVar19 + 0x20;
          }
LAB_013eeedc:
          FUN_01650a90(pcVar69);
          if (*pcVar69 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar83 = (bool)hasExclusiveAccess(pcVar69);
              if (bVar83) {
                *pcVar69 = '\0';
                goto LAB_013eef1c;
              }
            } while (*pcVar69 == '\x01');
          }
          ClearExclusiveLocal();
          FUN_0164f86c(pcVar69);
LAB_013eef1c:
          pppppppuVar43 = local_40;
          pppppppuVar52 = local_44;
          pppppppuVar23 = local_48;
          uVar73 = *puVar8;
          FUN_013f1d20(&local_d8);
          pppppppuVar77 = pppppppuVar52 + (int)pppppppuVar43 * 2;
          local_210 = pppppppuVar23;
          local_214 = pppppppuVar52;
          local_218 = pppppppuVar52;
          local_20c = pppppppuVar77;
          if (pppppppuVar43 != (uint *******)0x0) {
            do {
              ppppppuVar80 = *pppppppuVar52;
              pppppppuVar23 = pppppppuVar52 + 1;
              pppppppuVar52 = pppppppuVar52 + 2;
              local_214 = pppppppuVar52;
              FUN_013f1d70(puVar18,param_1[0x28],param_1[0x29],*pppppppuVar23,0);
              DataMemoryBarrier(0xb);
              do {
                pppppuVar32 = *ppppppuVar80;
                bVar83 = (bool)hasExclusiveAccess(ppppppuVar80);
              } while (!bVar83);
              *ppppppuVar80 = (uint *****)((int)pppppuVar32 + -1);
              if (pppppuVar32 == (uint *****)0x1) {
                DataMemoryBarrier(0xb);
                FUN_0140a97c(ppppppuVar80);
              }
            } while (pppppppuVar52 != pppppppuVar77);
          }
          FUN_0140344c(&local_218);
          if (uVar73 == 0) {
            *pppppppuVar9 = (uint ******)0x0;
          }
          DataMemoryBarrier(0xb);
          if ((char)param_1[0x4b] == '\0') {
            local_31c = 1;
          }
        }
      }
    }
  }
  if ((*param_1 & 1) == 0) goto LAB_013ef81c;
  uVar73 = *puVar63;
  uVar74 = param_1[3];
  if (uStack_32c < uVar74 || uVar74 - uStack_32c < (uint)(local_330 <= uVar73)) goto LAB_013ef81c;
  uVar22 = local_330 - uVar73;
  uVar73 = uStack_32c - (uVar74 + (local_330 < uVar73));
  if (param_7 != (uint *******)0x0) {
    uVar74 = 0;
    bVar83 = true;
    local_360 = 0;
    pppppppuVar23 = (uint *******)0x0;
LAB_013ef04c:
    if (local_360 <= uVar73 && (uint)(uVar22 <= uVar74) <= local_360 - uVar73) {
      bVar84 = false;
      while( true ) {
        piVar46 = (int *)param_1[0x59];
        if (piVar46 == (int *)0x0) {
          ppppppuVar61 = (uint ******)0x2;
          pppppppuVar52 = (uint *******)&local_c8;
          ppppppuVar80 = (uint ******)0x0;
        }
        else {
          iVar19 = *piVar46;
          pppppppuVar77 = *(uint ********)(iVar19 + 0x10);
          do {
            ppppppuVar80 = *pppppppuVar77;
            bVar84 = (bool)hasExclusiveAccess(pppppppuVar77);
          } while (!bVar84);
          *pppppppuVar77 = (uint ******)((int)ppppppuVar80 + 1);
          if ((int)ppppppuVar80 < 0) goto LAB_013efec4;
          local_350 = *(uint ********)(*piVar46 + 0xc);
          local_340 = *(uint ********)(*piVar46 + 8);
          DataMemoryBarrier(0xb);
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          local_c4 = (uint *******)0x0;
          bVar84 = *(uint *******)(iVar19 + 0x18) != (uint ******)0xffffffff ||
                   *(uint *******)(iVar19 + 0x1c) != (uint ******)0xffffffff;
          ppppppuVar80 = local_3b0;
          if (bVar84) {
            ppppppuVar80 = *(uint *******)(iVar19 + 0x1c);
          }
          local_c8 = (uint *******)(uint)bVar84;
          pppppppuVar52 = (uint *******)&local_100;
          ppppppuVar61 = local_3ac;
          if (bVar84) {
            ppppppuVar61 = *(uint *******)(iVar19 + 0x18);
          }
          bVar84 = *(short *)(iVar19 + 0x34) != *(short *)(iVar19 + 0x36);
          local_3b0 = ppppppuVar80;
          local_3ac = ppppppuVar61;
        }
        *pppppppuVar52 = ppppppuVar61;
        pppppppuVar35 = local_c8;
        pppppppuVar43 = local_100;
        pppppppuVar52[1] = ppppppuVar80;
        pppppppuVar52 = local_fc;
        if (pppppppuVar35 == (uint *******)0x2 && local_c4 == (uint *******)0x0) goto LAB_013ef81c;
        pppppppuVar23 = (uint *******)((int)pppppppuVar23 + 1);
        if ((!bVar84) && (((uint)pppppppuVar35 & 1) != 0)) break;
        FUN_013f12a4(param_1,pppppppuVar77 + 2,local_340,local_350,&DAT_00475c74,0xe,puVar12,
                     pppppppuVar9);
        DataMemoryBarrier(0xb);
        do {
          ppppppuVar80 = *pppppppuVar77;
          bVar83 = (bool)hasExclusiveAccess(pppppppuVar77);
        } while (!bVar83);
        *pppppppuVar77 = (uint ******)((int)ppppppuVar80 - 1);
        if (ppppppuVar80 == (uint ******)0x1) {
          DataMemoryBarrier(0xb);
          FUN_0140a97c(pppppppuVar77);
        }
        bVar83 = false;
        if (param_7 <= pppppppuVar23) goto LAB_013ef81c;
      }
      if (*puVar11 == 0) {
        pppppppuVar35 = (uint *******)0x0;
        local_68 = (uint *******)0x0;
        goto LAB_013ef26c;
      }
      FUN_0140b4bc(&local_78,puVar11,pppppppuVar77);
      if (local_68 == (uint *******)0x0) {
        pppppppuVar35 = (uint *******)0x0;
        goto LAB_013ef26c;
      }
      pppppppuVar35 = local_68 + 1;
      if (*(char *)pppppppuVar35 == '\0') {
        bVar84 = (bool)hasExclusiveAccess(pppppppuVar35);
        if (!bVar84) goto LAB_013ef254;
        *(char *)pppppppuVar35 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_013ef254:
        FUN_0164fba8(pppppppuVar35);
      }
      FUN_0165098c(pppppppuVar35);
LAB_013ef26c:
      uVar67 = param_1[0x1d] & 0x3f;
      uVar49 = (uint)local_340 >> uVar67 | (int)local_350 << (0x20 - uVar67 & 0xff);
      if (-1 < (int)(uVar67 - 0x20)) {
        uVar49 = (uint)local_350 >> (uVar67 - 0x20 & 0xff);
      }
      uVar67 = 0;
      if (param_1[0x1d] != 0x40) {
        uVar67 = uVar49;
      }
      if (param_1[0x17] <= uVar67) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar67,param_1[0x17],&DAT_01cf3dd8);
      }
      uVar49 = param_1[0x16];
      pppppppuVar53 = (uint *******)FUN_013f0d78();
      iVar19 = uVar49 + uVar67 * 8;
      local_48 = pppppppuVar53;
      puVar25 = (undefined4 *)FUN_0140b1c4(iVar19);
      piVar46 = (int *)(iVar19 + 4);
      puVar36 = puVar25;
LAB_013ef2ec:
      pppppppuVar30 = (uint *******)puVar36[1];
      pcVar69 = (char *)((int)pppppppuVar30 + -1);
      if ((char *)((uint)pppppppuVar30 ^ (uint)pcVar69) <= pcVar69) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00475d7a,0x36,&DAT_01cf35b0);
      }
      piVar37 = puVar36 + 5;
      cVar3 = FUN_0160a118((uint)pppppppuVar30 >> 1,piVar37,piVar46);
      if (cVar3 != '\x03') {
        puVar29 = (undefined4 *)
                  FUN_013f57f0(puVar36,&local_48,*puVar6,param_1[0x19],*puVar5,param_1[0x1b],cVar3);
        goto LAB_013ef4f0;
      }
      local_1fc = (uint *******)CONCAT31(local_1fc._1_3_,1);
      local_200 = (uint *******)0x0;
      local_210 = (uint *******)&local_48;
      local_20c = (uint *******)((uint)pcVar69 & (uint)local_340);
      local_218 = (uint *******)*puVar36;
      local_208 = local_218 + (int)local_20c;
      local_214 = pppppppuVar30;
      local_204 = local_20c;
LAB_013ef368:
      FUN_013f4d28(&local_a0,&local_218);
      pppppppuVar39 = local_94;
      pppppppuVar30 = local_9c;
      if (local_a0 != (uint *******)&DAT_00000001) goto LAB_013ef578;
      if (local_9c == (uint *******)0x0) goto LAB_013ef4c0;
      puVar29 = (undefined4 *)((uint)local_94 & 0xfffffff8);
      if (puVar29 == (undefined4 *)0x0) goto LAB_013ef578;
      pppppppuVar28 = (uint *******)*puVar29;
      if ((pppppppuVar28 != pppppppuVar77) &&
         (((((iVar68 = FUN_013cad2c(pppppppuVar28 + 2,pppppppuVar77 + 2), iVar68 == 0 ||
             (*(short *)(pppppppuVar28 + 0x14) != *(short *)(pppppppuVar77 + 0x14))) ||
            ((*(short *)(pppppppuVar28 + 0x14) == 0x24 &&
             (*(short *)((int)pppppppuVar28 + 0x52) != *(short *)((int)pppppppuVar77 + 0x52))))) ||
           ((uint)*(ushort *)(pppppppuVar28 + 0x13) != (uint)*(ushort *)(pppppppuVar77 + 0x13))) ||
          ((*(ushort *)(pppppppuVar28 + 0x13) - 5 < 2 &&
           (*(short *)((int)pppppppuVar28 + 0x4e) != *(short *)((int)pppppppuVar77 + 0x4e)))))))
      goto LAB_013ef368;
      if (((uint)pppppppuVar39 & 2) != 0) goto LAB_013ef578;
      pppppppuVar28 = *(uint ********)(*(int *)(puVar29[1] + 0x80) + 0x18);
      pppppppuVar40 = *(uint ********)(*(int *)(puVar29[1] + 0x80) + 0x1c);
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      if ((pppppppuVar28 == (uint *******)&DAT_ffffffff &&
           pppppppuVar40 == (uint *******)&DAT_ffffffff) ||
         (pppppppuVar28 != pppppppuVar43 || pppppppuVar40 != pppppppuVar52)) goto LAB_013ef578;
      if ((uint *******)*pppppppuVar30 == pppppppuVar39) {
        DataMemoryBarrier(0xb);
        bVar84 = (bool)hasExclusiveAccess(pppppppuVar30);
        if (bVar84) {
          *pppppppuVar30 = (uint ******)((uint)puVar29 | 2);
          DataMemoryBarrier(0xb);
          if (((uint)pppppppuVar39 & 0xfffffff8) != 0) goto LAB_013ef508;
LAB_013ef578:
          piVar46 = (int *)0x0;
          goto LAB_013ef57c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      local_1fc = (uint *******)CONCAT31(local_1fc._1_3_,1);
      goto LAB_013ef368;
    }
    goto LAB_013ef81c;
  }
LAB_013ef814:
  local_31c = 1;
LAB_013ef81c:
  if (param_6 < local_3c0) {
    if ((local_31c != 1) || (bVar83 = false, local_328 == uVar20 && local_324 == uVar21))
    goto LAB_013efa38;
  }
  else {
    uVar73 = FUN_01405df0(param_1[4],param_1[5]);
    bVar83 = true;
    if (uVar73 < 0x40) {
      uVar73 = FUN_01405df0(param_1[6],param_1[7]);
      bVar83 = 0x3f < uVar73;
      if (local_31c == 0) {
        bVar83 = true;
        if (uVar73 < 0x40) goto LAB_013efa38;
      }
      else if (uVar73 < 0x40) {
        if (local_328 == uVar20 && local_324 == uVar21) goto LAB_013efa38;
      }
      else {
      }
    }
  }
  if (param_5 == &DAT_3b9aca00) goto LAB_013e9750;
  FUN_019b0710(&local_218,&DAT_3b9aca00,*puVar7,param_1[9],param_1[10]);
  uVar20 = (uint)(ZEXT48(local_218) * 1000000000);
  lVar92 = ZEXT48(local_214) * 1000000000 + (ZEXT48(local_218) * 1000000000 >> 0x20);
  uVar21 = (uint)lVar92;
  uVar73 = (uint)((ulonglong)lVar92 >> 0x20);
  pcVar59 = (char *)(uVar20 + (int)local_210);
  bVar84 = CARRY4(uVar21,(uint)CARRY4(uVar20,(uint)local_210));
  uVar21 = uVar21 + CARRY4(uVar20,(uint)local_210);
  pcVar69 = (char *)0xfffffffe;
  if (pcVar59 < (char *)0xfffffffe) {
    pcVar69 = pcVar59;
  }
  if (uVar21 != 0xffffffff) {
    pcVar69 = pcVar59;
  }
  uVar20 = 0xffffffff;
  pcVar59 = (char *)0xfffffffe;
  if (-(uint)CARRY4(uVar73,(uint)bVar84) < (uint)(uVar73 + bVar84 == 0)) {
    uVar20 = uVar21;
    pcVar59 = pcVar69;
  }
  iVar19 = (int)pcVar59 - (int)local_44c;
  iVar68 = uVar20 - (local_450 + (local_44c > pcVar59));
  if (uVar20 <= local_450 && (uint)(local_44c <= pcVar59) <= uVar20 - local_450) {
    iVar19 = 0;
    iVar68 = 0;
  }
  lVar92 = FUN_01bf0ff0(iVar19,iVar68,&DAT_3b9aca00,0);
  uVar20 = (uint)((ulonglong)lVar92 >> 0x20);
  bVar84 = param_5 <= (undefined1 *)(iVar19 + (int)(uint *******)lVar92 * -1000000000);
  if (lVar92 != CONCAT44(param_4,param_3)) {
    bVar84 = param_4 < uVar20 || uVar20 - param_4 < (uint)(param_3 <= (uint *******)lVar92);
  }
  pppppppuVar77 = param_3;
  if (bVar84) goto LAB_013efa38;
  goto LAB_013e9750;
LAB_013ee038:
  cVar3 = '\0';
LAB_013ee03c:
  puVar29 = (undefined4 *)
            FUN_013f608c(puVar36,&local_100,param_1[0x44],param_1[0x45],param_1[0x46],param_1[0x47],
                         cVar3);
  if (puVar29 != (undefined4 *)0x0) {
    puVar36 = puVar29;
  }
  goto LAB_013edf38;
LAB_013ef4c0:
  puVar29 = (undefined4 *)
            FUN_013f57f0(puVar36,&local_48,*puVar6,param_1[0x19],*puVar5,param_1[0x1b],0);
LAB_013ef4f0:
  if (puVar29 != (undefined4 *)0x0) {
    puVar36 = puVar29;
  }
  goto LAB_013ef2ec;
LAB_013ef508:
  do {
    bVar84 = (bool)hasExclusiveAccess(piVar46);
  } while (!bVar84);
  *piVar46 = *piVar46 + -1;
  do {
    bVar84 = (bool)hasExclusiveAccess(piVar37);
  } while (!bVar84);
  *piVar37 = *piVar37 + 1;
  do {
    bVar84 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar84);
  *puVar10 = *puVar10 - 1;
  piVar46 = *(int **)(((uint)pppppppuVar39 & 0xfffffff8) + 4);
  do {
    iVar68 = *piVar46;
    bVar84 = (bool)hasExclusiveAccess(piVar46);
  } while (!bVar84);
  *piVar46 = iVar68 + 1;
  if (iVar68 < 0) {
LAB_013efbd0:
                    /* WARNING: Subroutine does not return */
    FUN_0197a954();
  }
  FUN_013f5018(pppppppuVar53);
LAB_013ef57c:
  FUN_0140b280(iVar19,pppppppuVar53,puVar25,puVar36);
  FUN_013f0f2c(pppppppuVar53);
  puVar81 = local_320;
  if (piVar46 == (int *)0x0) {
    FUN_013f12a4(param_1,pppppppuVar77 + 2,local_340,local_350,&DAT_00475c74,0xe,puVar12,
                 pppppppuVar9);
    bVar83 = false;
    bVar84 = true;
  }
  else {
    if (local_320 != (uint *)0x0) {
      FUN_013f10ac(local_320,pppppppuVar77,piVar46,3);
    }
    bVar84 = puVar81 == (uint *)0x0;
    bVar86 = 0xfffffffe < local_328;
    local_328 = local_328 + 1;
    bVar85 = CARRY4(local_324,(uint)bVar86);
    local_324 = local_324 + bVar86;
    if (bVar85) {
      local_328 = 0xffffffff;
      local_324 = 0xffffffff;
    }
    uVar49 = *(uint *)(piVar46[0x20] + 0x30);
    DataMemoryBarrier(0xb);
    FUN_013f1184(&DAT_00475c74,0xe,puVar12,pppppppuVar9,param_1[0x28],param_1[0x29],piVar46,
                 &local_338);
    bVar86 = CARRY4(uVar74,uVar49);
    uVar74 = uVar74 + uVar49;
    bVar85 = CARRY4(local_360,(uint)bVar86);
    local_360 = local_360 + bVar86;
    if (bVar85) {
      local_360 = 0xffffffff;
      uVar74 = 0xffffffff;
    }
  }
  FUN_013f1058(pppppppuVar35);
  FUN_013f0f64(&local_78);
  if (bVar84) {
    DataMemoryBarrier(0xb);
    do {
      ppppppuVar80 = *pppppppuVar77;
      bVar84 = (bool)hasExclusiveAccess(pppppppuVar77);
    } while (!bVar84);
    *pppppppuVar77 = (uint ******)((int)ppppppuVar80 - 1);
    if (ppppppuVar80 == (uint ******)0x1) {
      DataMemoryBarrier(0xb);
      FUN_0140a97c(pppppppuVar77);
    }
  }
  if (param_7 <= pppppppuVar23) goto LAB_013ef80c;
  goto LAB_013ef04c;
LAB_013ef80c:
  if (!bVar83) goto LAB_013ef81c;
  goto LAB_013ef814;
LAB_013efa38:
  DataMemoryBarrier(0xb);
  do {
    bVar83 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar83);
  *puVar4 = local_338;
  param_1[0x1f] = local_334;
  DataMemoryBarrier(0xb);
  do {
    bVar83 = (bool)hasExclusiveAccess(puVar42);
  } while (!bVar83);
  *puVar42 = local_330;
  param_1[0x21] = uStack_32c;
  ppppppuVar80 = (uint ******)FUN_013f0d78();
  local_218 = (uint *******)ppppppuVar80;
  FUN_0131a5fc(&local_218);
  FUN_013f0f2c(ppppppuVar80);
  FUN_01650a90(puVar64);
  if ((char)*puVar64 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar83 = (bool)hasExclusiveAccess(puVar64);
      if (bVar83) {
        *(char *)puVar64 = '\0';
        goto LAB_013efae0;
      }
    } while ((char)*puVar64 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(puVar64);
LAB_013efae0:
  uVar20 = (uint)local_31c;
  FUN_01650a90(puVar41);
  if ((char)*puVar41 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar83 = (bool)hasExclusiveAccess(puVar41);
      if (bVar83) {
        *(char *)puVar41 = '\0';
        return uVar20;
      }
    } while ((char)*puVar41 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(puVar41);
  return uVar20;
}

