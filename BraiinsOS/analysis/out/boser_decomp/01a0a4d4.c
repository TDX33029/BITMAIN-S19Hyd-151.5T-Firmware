// FUN_01a0a4d4 @ 01a0a4d4 size=5664 calls_out=36 calls_in=0
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined4 FUN_01a0a4d4(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  uint ****ppppuVar4;
  char cVar5;
  undefined4 *puVar6;
  uint ***pppuVar7;
  int iVar8;
  uint ****ppppuVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined1 uVar13;
  uint ****unaff_r4;
  uint uVar14;
  undefined4 uVar15;
  uint ****ppppuVar16;
  int *piVar17;
  uint ****ppppuVar18;
  int *piVar19;
  byte bVar20;
  bool bVar21;
  undefined8 uVar22;
  uint ***local_3b4;
  uint ***local_3b0;
  uint ***local_394;
  uint ****local_38c;
  uint ***local_384;
  uint ****local_380;
  uint ****local_37c;
  uint ***local_378;
  uint ***local_374;
  uint ****local_370;
  uint ****local_36c;
  uint ****local_368;
  uint ***local_360;
  uint ****local_35c;
  uint ****local_358;
  uint ****local_354;
  uint ****local_350;
  uint local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  uint ****local_338;
  uint ****local_334;
  uint ****local_330;
  uint ****local_328;
  uint ****local_324;
  uint ****local_320;
  uint ****local_318;
  uint ****local_314;
  uint ****local_310;
  uint ****local_30c;
  uint ****local_308;
  uint ****local_304;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined1 local_2d4;
  uint ****local_2a0;
  uint ****local_29c;
  uint ****local_298;
  uint ****local_230;
  uint ****local_22c;
  uint ****local_228;
  uint ***local_224;
  uint ***local_1c0;
  uint ****local_1bc;
  uint ****local_1b8;
  uint ***local_1b4;
  undefined4 local_1b0;
  int *local_1a8;
  undefined4 local_198;
  undefined1 auStack_194 [108];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  int *local_118;
  uint ***local_114;
  uint ****local_100;
  uint ****local_fc;
  undefined4 *local_f8;
  uint ****local_90;
  uint ****local_8c;
  undefined4 *local_88;
  
  puVar6 = (undefined4 *)((uint)&local_1c0 | 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x5e)) {
  case 0:
    param_1[2] = param_1[10];
    param_1[0xc] = param_1[0x15];
    param_1[0xd] = param_1[0x16];
    unaff_r4 = (uint ****)param_1[8];
    *(undefined2 *)(param_1 + 0x17) = 0;
    *param_1 = unaff_r4;
    param_1[1] = param_1[9];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d29c60);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d29c60);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x1f)) {
    case 0:
      puVar12 = (undefined4 *)param_1[0x18];
      goto LAB_01a0b3f0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d29fe0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d29fe0);
    case 3:
      goto switchD_01a0a5a0_caseD_3;
    }
  case 4:
    goto switchD_01a0a510_caseD_4;
  case 5:
    uVar22 = *(undefined8 *)(param_1 + 0x18);
    goto LAB_01a0b868;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x26)) {
    case 0:
      puVar12 = (undefined4 *)param_1[0x1b];
      goto LAB_01a0ba18;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2b400);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2b400);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x25)) {
      case 0:
        puVar12 = (undefined4 *)param_1[0x1c];
        goto LAB_01a0ba28;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b410);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b410);
      case 3:
        goto switchD_01a0a5d4_caseD_3;
      }
    }
  case 7:
    uVar22 = *(undefined8 *)(param_1 + 0x18);
    goto LAB_01a0a6f4;
  }
LAB_01a0b3dc:
  do {
    *(undefined1 *)(param_1 + 0x1f) = 0;
    param_1[0x18] = param_1;
    puVar12 = param_1;
LAB_01a0b3f0:
    param_1[0x19] = puVar12;
    FUN_01bed93e(param_1 + 0x1a,0,0x11);
switchD_01a0a5a0_caseD_3:
    uVar15 = *param_2;
    uVar10 = FUN_019ec670(uVar15);
    uVar14 = 0;
    if ((uVar10 & 0xff) != 2) {
      unaff_r4 = (uint ****)((uVar10 & 0xffffff) >> 0x10);
      uVar14 = (uVar10 & 0xffffff) >> 8;
      if ((uVar10 & 1) == 0) goto LAB_01a0b43c;
LAB_01a0be3c:
      uVar15 = 1;
      uVar13 = 3;
      *(undefined1 *)(param_1 + 0x1f) = 3;
      goto LAB_01a0b3bc;
    }
LAB_01a0b43c:
    FUN_01a173e8(&local_1c0,param_1[0x19],param_1 + 0x1a,uVar15);
    if (local_1c0 == (uint ***)&DAT_00000003 && local_1bc == (uint ****)0x0) {
      local_37c = (uint ****)0x0;
      local_384 = local_1b8[9];
      local_380 = (uint ****)0x0;
      bVar20 = local_384 == (uint ***)0x5;
      if (!(bool)bVar20) {
        local_394 = local_1b8[5];
        local_37c = (uint ****)local_1b8[6];
        local_380 = (uint ****)local_1b8[7];
        local_38c = (uint ****)local_1b8[8];
      }
      FUN_01a189d0();
    }
    else {
      bVar20 = 2;
      if (local_1c0 != (uint ***)0x0) {
        if (local_1c0 == (uint ***)&DAT_00000001) {
          bVar20 = 1;
          local_37c = (uint ****)0x0;
          local_380 = (uint ****)0x0;
        }
        else {
          bVar20 = 1;
          local_38c = local_1b8;
          local_384 = local_1b4;
          local_380 = (uint ****)0x0;
          local_37c = (uint ****)&DAT_00000001;
        }
      }
    }
    if (bVar20 != 2) {
      uVar14 = 0;
      local_378 = local_394;
      local_370 = local_38c;
      local_374 = local_384;
      local_368 = local_37c;
      local_36c = local_380;
    }
    FUN_019edbc4(uVar14,unaff_r4);
    if (bVar20 == 2) goto LAB_01a0be3c;
    FUN_009cdcac(param_1 + 0x19);
    *(undefined1 *)(param_1 + 0x1f) = 1;
    if ((bVar20 & 1) == 0) {
      param_1[4] = local_378;
      param_1[7] = local_370;
      *(undefined1 *)(param_1 + 0x23) = 0;
      param_1[5] = local_368;
      param_1[6] = local_36c;
      param_1[0xe] = local_374;
      param_1[0x18] = param_1[0xd] + 8;
switchD_01a0a510_caseD_4:
      FUN_006177f4(&local_348,param_1 + 0x18,param_2);
      if (local_348 == 0) {
        uVar15 = 1;
        uVar13 = 4;
        goto LAB_01a0b3bc;
      }
      param_1[0xf] = local_348;
      param_1[0x10] = uStack_344;
      param_1[0x11] = uStack_340;
      cVar5 = *(char *)(param_1 + 0x23);
      bVar21 = cVar5 == '\x03';
      if (bVar21) {
        cVar5 = *(char *)(param_1 + 0x22);
      }
      if (bVar21 && cVar5 == '\x03') {
        FUN_0193c3cc(param_1 + 0x1a);
      }
      local_1c0 = (uint ***)param_1[4];
      local_1bc = (uint ****)param_1[5];
      local_1b8 = (uint ****)param_1[6];
      local_1b4 = (uint ***)param_1[7];
      uVar22 = (**(code **)(((undefined4 *)param_1[0x11])[1] + 0x24))
                         (*(undefined4 *)param_1[0x11],&local_1c0,param_1[0xe]);
      *(undefined8 *)(param_1 + 0x18) = uVar22;
LAB_01a0b868:
      (**(code **)((int)((ulonglong)uVar22 >> 0x20) + 0xc))(&local_1c0,(int)uVar22,param_2);
      ppppuVar4 = local_1b8;
      unaff_r4 = local_1bc;
      pppuVar7 = local_1c0;
      if (local_1c0 == (uint ***)&DAT_80000001) {
        uVar15 = 1;
        uVar13 = 5;
        goto LAB_01a0b3bc;
      }
      *(undefined1 *)((int)param_1 + 0x5d) = 1;
      FUN_01139b38(param_1[0x18],param_1[0x19]);
      if (pppuVar7 == (uint ***)&DAT_80000000) {
        if (((DAT_01d50f88 < 5) &&
            ((DAT_01d50600 - 1 < 2 ||
             ((DAT_01d50600 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d505f8), cVar5 != '\0')))))) &&
           (iVar8 = FUN_01aaa278(DAT_01d505f8), iVar8 != 0)) {
          if (*(uint *****)(DAT_01d505f8 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29ca0);
          }
          local_8c = (uint ****)&local_318;
          local_1b8 = *(uint *****)(DAT_01d505f8 + 0x24);
          local_1b4 = *(uint ****)(DAT_01d505f8 + 0x28);
          local_f8 = (undefined4 *)(DAT_01d505f8 + 0x1c);
          local_1c0 = (uint ***)*local_f8;
          local_100 = (uint ****)&local_90;
          unaff_r4 = (uint ****)0x0;
          local_1b0 = 0;
          local_fc = (uint ****)&DAT_00000001;
          local_314 = (uint ****)&local_230;
          local_228 = (uint ****)(param_1 + 0xe);
          local_230 = (uint ****)(param_1 + 4);
          local_88 = (undefined4 *)&DAT_01d2ea4c;
          local_318 = (uint ****)&DAT_005aeecf;
          local_224 = (uint ***)FUN_01a0c234;
          local_22c = (uint ****)FUN_005fd794;
          local_1bc = *(uint *****)(DAT_01d505f8 + 0x20);
          local_90 = &local_1c0;
          FUN_01aaaecc(DAT_01d505f8,&local_100);
          iVar8 = DAT_01d505f8;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_30c = *(uint *****)(DAT_01d505f8 + 0x14);
            local_308 = *(uint *****)(DAT_01d505f8 + 0x18);
            local_310 = (uint ****)&DAT_00000001;
            DataMemoryBarrier(0xb);
            puVar12 = DAT_01d4edc8;
            pcVar3 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar12 = &DAT_01cfc5e0;
              pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar11 = (*(code *)puVar12[3])(pcVar3,&local_310);
            ppppuVar4 = local_308;
            if (iVar11 != 0) {
              local_2a0 = local_310;
              local_29c = local_30c;
              local_298 = local_308;
              FUN_01aaa328(iVar8,pcVar3,puVar12[4],&local_2a0,&local_100);
              unaff_r4 = ppppuVar4;
            }
          }
        }
        else {
          iVar8 = DAT_01d505f8;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_334 = *(uint *****)(DAT_01d505f8 + 0x14);
            local_330 = *(uint *****)(DAT_01d505f8 + 0x18);
            local_338 = (uint ****)&DAT_00000001;
            DataMemoryBarrier(0xb);
            puVar12 = DAT_01d4edc8;
            pcVar3 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar12 = &DAT_01cfc5e0;
              pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar11 = (*(code *)puVar12[3])(pcVar3,&local_338);
            unaff_r4 = (uint ****)&local_338;
            if (iVar11 != 0) {
              if (*(uint *****)(DAT_01d505f8 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29ca0);
              }
              local_1b8 = *(uint *****)(DAT_01d505f8 + 0x24);
              local_30c = (uint ****)&local_100;
              local_1b4 = *(uint ****)(DAT_01d505f8 + 0x28);
              local_90 = (uint ****)&local_310;
              local_8c = (uint ****)&DAT_00000001;
              local_fc = (uint ****)&local_230;
              local_1b0 = 0;
              local_308 = (uint ****)&DAT_01d2ea4c;
              local_100 = (uint ****)&DAT_005aeecf;
              local_228 = (uint ****)(param_1 + 0xe);
              local_224 = (uint ***)FUN_01a0c234;
              local_22c = (uint ****)FUN_005fd794;
              local_230 = (uint ****)(param_1 + 4);
              local_2a0 = local_338;
              local_29c = local_334;
              local_298 = local_330;
              local_310 = &local_1c0;
              local_1c0 = *(uint ****)(DAT_01d505f8 + 0x1c);
              local_1bc = *(uint *****)(DAT_01d505f8 + 0x20);
              local_88 = (undefined4 *)(DAT_01d505f8 + 0x1c);
              FUN_01aaa328(iVar8,pcVar3,puVar12[4],&local_2a0,&local_90);
            }
          }
        }
        *(undefined1 *)((int)param_1 + 0x5d) = 0;
        FUN_019f8c54(param_1[0xf],param_1[0x10]);
      }
      else {
        *(char *)((int)param_1 + 0x67) = (char)((uint)unaff_r4 >> 0x18);
        *(short *)((int)param_1 + 0x65) = (short)((uint)unaff_r4 >> 8);
        *(undefined1 *)(param_1 + 0x26) = 0;
        *(undefined2 *)(param_1 + 0x17) = 1;
        puVar12 = (undefined4 *)(param_1[0xc] + 8);
        param_1[0x1a] = ppppuVar4;
        *(char *)(param_1 + 0x19) = (char)unaff_r4;
        param_1[0x18] = pppuVar7;
        param_1[0x1b] = puVar12;
LAB_01a0ba18:
        *(undefined1 *)(param_1 + 0x25) = 0;
        param_1[0x1c] = puVar12;
LAB_01a0ba28:
        uVar15 = *puVar12;
        param_1[0x1d] = puVar12 + 1;
        *(undefined1 *)(param_1 + 0x24) = 0;
        param_1[0x20] = 0;
        param_1[0x21] = 0;
        param_1[0x22] = uVar15;
        param_1[0x23] = uVar15;
        param_1[0x1e] = 0;
switchD_01a0a5d4_caseD_3:
        uVar14 = FUN_019f9bc4(param_1 + 0x1d,param_2);
        if ((uint ****)(uVar14 & 0xff) == (uint ****)0x2) {
          uVar15 = 1;
          *(undefined1 *)(param_1 + 0x25) = 3;
          uVar13 = 6;
          *(undefined1 *)(param_1 + 0x26) = 3;
          goto LAB_01a0b3bc;
        }
        FUN_0193c3cc(param_1 + 0x1d);
        if ((uVar14 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b420);
        }
        puVar12 = (undefined4 *)param_1[0x1c];
        iVar8 = param_1[0x19];
        iVar11 = param_1[0x1a];
        uVar15 = *puVar12;
        *(undefined1 *)(param_1 + 0x26) = 1;
        *(undefined1 *)(param_1 + 0x25) = 1;
        *(undefined1 *)(param_1 + 0x17) = 0;
        param_1[0x12] = puVar12 + 1;
        param_1[0x13] = uVar15;
        param_1[0x14] = puVar12 + 6;
        param_1[0x1a] = iVar8;
        param_1[0x1b] = iVar8;
        param_1[0x1c] = param_1[0x18];
        param_1[0x1d] = iVar8 + iVar11 * 0x10;
        unaff_r4 = (uint ****)(uVar14 & 0xff);
        while (iVar8 = param_1[0x1b], iVar8 != param_1[0x1d]) {
          param_1[0x1b] = iVar8 + 0x10;
          FUN_01bed864(param_1 + 0x1e,iVar8,0x10);
          local_1c0 = (uint ***)param_1[0x1e];
          local_1bc = (uint ****)param_1[0x1f];
          local_1b8 = (uint ****)param_1[0x20];
          local_1b4 = (uint ***)param_1[0x21];
          uVar22 = (**(code **)(((undefined4 *)param_1[0x14])[1] + 0x10))
                             (*(undefined4 *)param_1[0x14]);
          *(undefined8 *)(param_1 + 0x18) = uVar22;
LAB_01a0a6f4:
          (**(code **)((int)((ulonglong)uVar22 >> 0x20) + 0xc))(&local_1c0,(int)uVar22,param_2);
          ppppuVar4 = local_1bc;
          pppuVar7 = local_1c0;
          unaff_r4 = (uint ****)((uint)local_1c0 & 0xff);
          if (unaff_r4 == (uint ****)0x2) {
            uVar15 = 1;
            uVar13 = 7;
            goto LAB_01a0b3bc;
          }
          FUN_01139b38(param_1[0x18],param_1[0x19]);
          if ((((uint)pppuVar7 & 1) == 0) && (ppppuVar4 != (uint ****)0x0)) {
            do {
              pppuVar7 = *ppppuVar4;
              bVar21 = (bool)hasExclusiveAccess(ppppuVar4);
            } while (!bVar21);
            *ppppuVar4 = (uint ***)((int)pppuVar7 + 1);
            if ((int)pppuVar7 < 0) goto LAB_01a0b3cc;
            local_308 = (uint ****)param_1[0xe];
            do {
              do {
                local_318 = DAT_01d50470;
                local_314 = DAT_01d50474;
                ppppuVar16 = (uint ****)((int)DAT_01d50470 + 1);
                ppppuVar18 = (uint ****)
                             ((int)DAT_01d50474 + (uint)((uint ****)0xfffffffe < DAT_01d50470));
                bVar21 = (bool)hasExclusiveAccess(0x1d50470);
              } while (!bVar21);
              bVar21 = DAT_01d50470 == (uint ****)0x0;
              bVar2 = DAT_01d50474 == (uint ****)0x0;
              DAT_01d50470 = ppppuVar16;
              DAT_01d50474 = ppppuVar18;
            } while (bVar21 && bVar2);
            local_300 = param_1[4];
            uStack_2fc = param_1[5];
            uStack_2f8 = param_1[6];
            uStack_2f4 = param_1[7];
            local_2f0 = param_1[0x1e];
            uStack_2ec = param_1[0x1f];
            uStack_2e8 = param_1[0x20];
            uStack_2e4 = param_1[0x21];
            local_2d4 = 0;
            local_30c = &local_360;
            local_304 = ppppuVar4;
            iVar8 = thunk_FUN_01bee35a();
            unaff_r4 = (uint ****)(iVar8 + 0x20);
            local_310 = (uint ****)&local_318;
            if (*(char *)(iVar8 + 0x58) != '\x01') {
              if (*(char *)(iVar8 + 0x58) == '\x02') {
                uVar13 = 1;
                FUN_01a00bdc(&local_308);
                goto LAB_01a0a7fc;
              }
              FUN_019a2bcc(unaff_r4,&LAB_019efb68);
              *(undefined1 *)(iVar8 + 0x58) = 1;
            }
            FUN_01bed4e2(&local_2a0,&local_310,0x70);
            if ((uint ***)0x7ffffffe < *unaff_r4) {
                    /* WARNING: Subroutine does not return */
              FUN_0130701c(&DAT_01d2e14c);
            }
            *unaff_r4 = (uint ***)((int)*unaff_r4 + 1);
            uVar14 = *(uint *)(iVar8 + 0x24);
            FUN_01bed4e2(&local_230,&local_310,0x70);
            if (uVar14 == 2) {
              FUN_01a00bdc(&local_228);
              *unaff_r4 = (uint ***)((int)*unaff_r4 - 1);
              uVar13 = 0;
LAB_01a0a7fc:
              local_1c0 = (uint ***)CONCAT31(local_1c0._1_3_,uVar13);
                    /* WARNING: Subroutine does not return */
              FUN_0068d4ec(&local_1c0,&DAT_01d29c70);
            }
            pppuVar7 = *local_230;
            ppppuVar16 = (uint ****)local_230[1];
            if ((uVar14 & 1) == 0) {
              piVar19 = *(int **)(iVar8 + 0x28);
              do {
                iVar11 = *piVar19;
                bVar21 = (bool)hasExclusiveAccess(piVar19);
              } while (!bVar21);
              *piVar19 = iVar11 + 1;
              if (iVar11 < 0) goto LAB_01a0b3cc;
              piVar17 = (int *)piVar19[0x82];
              local_3b0 = (uint ***)(piVar19 + 0x40);
              if (piVar17 != (int *)0x0) {
                do {
                  iVar11 = *piVar17;
                  bVar21 = (bool)hasExclusiveAccess(piVar17);
                } while (!bVar21);
                *piVar17 = iVar11 + 1;
                if (iVar11 < 0) goto LAB_01a0b3cc;
                local_3b4 = (uint ***)piVar19[0x83];
              }
              FUN_01bed4e2((uint)&local_90 | 4,&local_308,0x68);
              FUN_01bed4e2(&local_100,&local_90,0x6c);
              local_198 = 0;
              FUN_01bed4e2(auStack_194,&local_100,0x6c);
              local_1b8 = (uint ****)&PTR_LAB_01d2a400;
              local_1c0 = (uint ***)0xcc;
              local_114 = local_3b4;
              puVar6[4] = pppuVar7;
              puVar6[5] = ppppuVar16;
              *puVar6 = 0;
              puVar6[1] = 0;
              local_1bc = (uint ****)0x0;
              local_120 = 0;
              local_124 = 0;
              local_128 = 0;
              local_90 = (uint ****)0x0;
              local_1a8 = piVar19;
              local_118 = piVar17;
              iVar11 = FUN_01be5878(&local_90,0x20,0xc0);
              ppppuVar18 = local_90;
              if ((iVar11 != 0) || (local_90 == (uint ****)0x0)) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(0x20,0xc0);
              }
              FUN_01bed4e2(local_90,&local_1c0,0xc0);
              iVar11 = FUN_01a2cc10(local_3b0,ppppuVar18,ppppuVar18);
              local_1c0 = pppuVar7;
              local_1bc = ppppuVar16;
              if (piVar19[0x80] != 0) {
                (**(code **)(piVar19[0x81] + 0x14))
                          (piVar19[0x80] + (*(int *)(piVar19[0x81] + 8) - 1U & 0xfffffff8) + 8,
                           &local_1c0);
              }
              if (iVar11 != 0) {
                FUN_019dc904(*(undefined4 *)(iVar8 + 0x28),iVar11);
              }
            }
            else {
              piVar19 = *(int **)(iVar8 + 0x28);
              local_3b4 = (uint ***)(piVar19 + 2);
              do {
                iVar8 = *piVar19;
                bVar21 = (bool)hasExclusiveAccess(piVar19);
              } while (!bVar21);
              *piVar19 = iVar8 + 1;
              if (iVar8 < 0) {
LAB_01a0b3cc:
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xfdee,0x1a0b3cc);
                (*pcVar1)();
              }
              piVar17 = (int *)piVar19[0x50];
              if (piVar17 != (int *)0x0) {
                do {
                  iVar8 = *piVar17;
                  bVar21 = (bool)hasExclusiveAccess(piVar17);
                } while (!bVar21);
                *piVar17 = iVar8 + 1;
                if (iVar8 < 0) goto LAB_01a0b3cc;
                local_3b0 = (uint ***)piVar19[0x51];
              }
              FUN_01bed4e2((uint)&local_90 | 4,&local_308,0x68);
              FUN_01bed4e2(&local_100,&local_90,0x6c);
              local_198 = 0;
              FUN_01bed4e2(auStack_194,&local_100,0x6c);
              local_1b8 = (uint ****)&PTR_LAB_01d2a2c0;
              local_1c0 = (uint ***)0xcc;
              puVar6[4] = pppuVar7;
              puVar6[5] = ppppuVar16;
              local_114 = local_3b0;
              *puVar6 = 0;
              puVar6[1] = 0;
              local_1bc = (uint ****)0x0;
              local_120 = 0;
              local_124 = 0;
              local_128 = 0;
              local_90 = (uint ****)0x0;
              local_1a8 = piVar19;
              local_118 = piVar17;
              iVar8 = FUN_01be5878(&local_90,0x20,0xc0);
              ppppuVar18 = local_90;
              if ((iVar8 != 0) || (local_90 == (uint ****)0x0)) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(0x20,0xc0);
              }
              FUN_01bed4e2(local_90,&local_1c0,0xc0);
              ppppuVar9 = (uint ****)FUN_01a2ce94(piVar19 + 0x14,ppppuVar18,ppppuVar18);
              local_1c0 = pppuVar7;
              local_1bc = ppppuVar16;
              if (piVar19[0x4e] != 0) {
                (**(code **)(piVar19[0x4f] + 0x14))
                          (piVar19[0x4e] + (*(int *)(piVar19[0x4f] + 8) - 1U & 0xfffffff8) + 8,
                           &local_1c0);
              }
              if (ppppuVar9 != (uint ****)0x0) {
                local_90 = (uint ****)((uint)local_90 & 0xffffff00);
                local_1c0 = local_3b4;
                local_1bc = ppppuVar9;
                local_1b8 = (uint ****)&local_90;
                FUN_019ee860(&local_1c0);
              }
            }
            *unaff_r4 = (uint ***)((int)*unaff_r4 - 1);
            if (*ppppuVar18 == (uint ***)0xcc) {
              DataMemoryBarrier(0xb);
              bVar21 = (bool)hasExclusiveAccess(ppppuVar18);
              if (!bVar21) goto LAB_01a0af18;
              *ppppuVar18 = (uint ***)0x84;
            }
            else {
              ClearExclusiveLocal();
LAB_01a0af18:
              (*(code *)ppppuVar18[2][4])(ppppuVar18);
            }
            DataMemoryBarrier(0xb);
            do {
              pppuVar7 = *ppppuVar4;
              bVar21 = (bool)hasExclusiveAccess(ppppuVar4);
            } while (!bVar21);
            *ppppuVar4 = (uint ***)((int)pppuVar7 - 1);
            if (pppuVar7 == (uint ***)0x1) {
              DataMemoryBarrier(0xb);
              FUN_01a38404(ppppuVar4);
            }
          }
          else if ((DAT_01d50f88 < 5) &&
                  (((DAT_01d50618 - 1 < 2 ||
                    ((DAT_01d50618 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d50610), cVar5 != '\0'))))
                   && (iVar8 = FUN_01aaa278(DAT_01d50610), iVar8 != 0)))) {
            if (*(uint *****)(DAT_01d50610 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29c80);
            }
            local_30c = (uint ****)&local_318;
            local_1b8 = *(uint *****)(DAT_01d50610 + 0x24);
            local_1b4 = *(uint ****)(DAT_01d50610 + 0x28);
            local_88 = (undefined4 *)(DAT_01d50610 + 0x1c);
            local_1c0 = (uint ***)*local_88;
            local_90 = (uint ****)&local_310;
            unaff_r4 = (uint ****)0x0;
            local_1b0 = 0;
            local_8c = (uint ****)&DAT_00000001;
            local_314 = (uint ****)&local_100;
            local_100 = (uint ****)(param_1 + 0x1e);
            local_308 = (uint ****)&DAT_01d2ea4c;
            local_318 = (uint ****)&DAT_005b5c55;
            local_fc = (uint ****)FUN_005fd794;
            local_310 = &local_1c0;
            local_1bc = *(uint *****)(DAT_01d50610 + 0x20);
            FUN_01aaaecc(DAT_01d50610,&local_90);
            iVar8 = DAT_01d50610;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_29c = *(uint *****)(DAT_01d50610 + 0x14);
              local_298 = *(uint *****)(DAT_01d50610 + 0x18);
              local_2a0 = (uint ****)&DAT_00000001;
              DataMemoryBarrier(0xb);
              puVar12 = DAT_01d4edc8;
              pcVar3 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar12 = &DAT_01cfc5e0;
                pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar11 = (*(code *)puVar12[3])(pcVar3,&local_2a0);
              ppppuVar4 = local_298;
              if (iVar11 != 0) {
                local_230 = local_2a0;
                local_22c = local_29c;
                local_228 = local_298;
                FUN_01aaa328(iVar8,pcVar3,puVar12[4],&local_230,&local_90);
                unaff_r4 = ppppuVar4;
              }
            }
          }
          else {
            iVar8 = DAT_01d50610;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_324 = *(uint *****)(DAT_01d50610 + 0x14);
              local_320 = *(uint *****)(DAT_01d50610 + 0x18);
              local_328 = (uint ****)&DAT_00000001;
              DataMemoryBarrier(0xb);
              puVar12 = DAT_01d4edc8;
              pcVar3 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar12 = &DAT_01cfc5e0;
                pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar11 = (*(code *)puVar12[3])(pcVar3,&local_328);
              ppppuVar4 = local_320;
              if (iVar11 != 0) {
                if (*(uint *****)(DAT_01d50610 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29c80);
                }
                local_29c = (uint ****)&local_100;
                local_1b8 = *(uint *****)(DAT_01d50610 + 0x24);
                local_1b4 = *(uint ****)(DAT_01d50610 + 0x28);
                local_310 = (uint ****)&local_2a0;
                local_30c = (uint ****)&DAT_00000001;
                local_fc = (uint ****)&local_90;
                local_1b0 = 0;
                local_298 = (uint ****)&DAT_01d2ea4c;
                local_8c = (uint ****)FUN_005fd794;
                local_100 = (uint ****)&DAT_005b5c55;
                local_90 = (uint ****)(param_1 + 0x1e);
                local_230 = local_328;
                local_22c = local_324;
                local_228 = local_320;
                local_308 = (uint ****)(DAT_01d50610 + 0x1c);
                local_2a0 = &local_1c0;
                local_1c0 = *(uint ****)(DAT_01d50610 + 0x1c);
                local_1bc = *(uint *****)(DAT_01d50610 + 0x20);
                FUN_01aaa328(iVar8,pcVar3,puVar12[4],&local_230,&local_310);
                unaff_r4 = ppppuVar4;
              }
            }
          }
        }
        FUN_0134c054(param_1[0x1c],param_1[0x1a],1,0x10);
        FUN_019f8c54(param_1[0x12],param_1[0x13]);
        *(undefined2 *)(param_1 + 0x17) = 0;
        FUN_019f8c54(param_1[0xf],param_1[0x10]);
      }
      goto LAB_01a0b3dc;
    }
    local_230 = local_368;
    local_22c = local_36c;
    local_228 = local_370;
    local_224 = local_374;
    if (((DAT_01d50f88 < 5) &&
        ((DAT_01d5060c - 1 < 2 ||
         ((DAT_01d5060c != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d50604), cVar5 != '\0')))))) &&
       (iVar8 = FUN_01aaa278(DAT_01d50604), iVar8 != 0)) {
      if (*(uint *****)(DAT_01d50604 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29c90);
      }
      local_8c = &local_360;
      local_1b8 = *(uint *****)(DAT_01d50604 + 0x24);
      local_1b4 = *(uint ****)(DAT_01d50604 + 0x28);
      local_f8 = (undefined4 *)(DAT_01d50604 + 0x1c);
      local_1c0 = (uint ***)*local_f8;
      local_100 = (uint ****)&local_90;
      unaff_r4 = (uint ****)0x0;
      local_1b0 = 0;
      local_fc = (uint ****)&DAT_00000001;
      local_35c = (uint ****)&local_318;
      local_318 = (uint ****)&local_230;
      local_88 = (undefined4 *)&DAT_01d2ea4c;
      local_360 = (uint ***)&DAT_005939a7;
      local_314 = (uint ****)&LAB_01a03334;
      local_1bc = *(uint *****)(DAT_01d50604 + 0x20);
      local_90 = &local_1c0;
      FUN_01aaaecc(DAT_01d50604,&local_100);
      iVar8 = DAT_01d50604;
      if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
        local_30c = *(uint *****)(DAT_01d50604 + 0x14);
        local_308 = *(uint *****)(DAT_01d50604 + 0x18);
        local_310 = (uint ****)&DAT_00000001;
        DataMemoryBarrier(0xb);
        puVar12 = DAT_01d4edc8;
        pcVar3 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar12 = &DAT_01cfc5e0;
          pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar11 = (*(code *)puVar12[3])(pcVar3,&local_310);
        ppppuVar4 = local_308;
        if (iVar11 != 0) {
          local_2a0 = local_310;
          local_29c = local_30c;
          local_298 = local_308;
          FUN_01aaa328(iVar8,pcVar3,puVar12[4],&local_2a0,&local_100);
          unaff_r4 = ppppuVar4;
        }
      }
    }
    else {
      iVar8 = DAT_01d50604;
      if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
        local_354 = *(uint *****)(DAT_01d50604 + 0x14);
        local_350 = *(uint *****)(DAT_01d50604 + 0x18);
        local_358 = (uint ****)&DAT_00000001;
        DataMemoryBarrier(0xb);
        puVar12 = DAT_01d4edc8;
        pcVar3 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar12 = &DAT_01cfc5e0;
          pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar11 = (*(code *)puVar12[3])(pcVar3,&local_358);
        ppppuVar4 = local_350;
        if (iVar11 != 0) {
          if (*(uint *****)(DAT_01d50604 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29c90);
          }
          local_90 = (uint ****)&local_310;
          local_1b8 = *(uint *****)(DAT_01d50604 + 0x24);
          local_1b4 = *(uint ****)(DAT_01d50604 + 0x28);
          local_30c = (uint ****)&local_318;
          local_1b0 = 0;
          local_8c = (uint ****)&DAT_00000001;
          local_314 = (uint ****)&local_100;
          local_308 = (uint ****)&DAT_01d2ea4c;
          local_318 = (uint ****)&DAT_005939a7;
          local_fc = (uint ****)&LAB_01a03334;
          local_100 = (uint ****)&local_230;
          local_2a0 = local_358;
          local_29c = local_354;
          local_298 = local_350;
          local_310 = &local_1c0;
          local_1c0 = *(uint ****)(DAT_01d50604 + 0x1c);
          local_1bc = *(uint *****)(DAT_01d50604 + 0x20);
          local_88 = (undefined4 *)(DAT_01d50604 + 0x1c);
          FUN_01aaa328(iVar8,pcVar3,puVar12[4],&local_2a0,&local_90);
          unaff_r4 = ppppuVar4;
        }
      }
    }
    if (local_368 == (uint ****)0x0 && local_36c == (uint ****)0x0) {
      piVar19 = (int *)param_1[0xd];
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar19;
        bVar21 = (bool)hasExclusiveAccess(piVar19);
      } while (!bVar21);
      *piVar19 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38404(param_1[0xd]);
      }
      FUN_019fc9e4(param_1);
      piVar19 = (int *)param_1[0xc];
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar19;
        bVar21 = (bool)hasExclusiveAccess(piVar19);
      } while (!bVar21);
      *piVar19 = iVar8 + -1;
      uVar15 = 0;
      uVar13 = 1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38404(param_1[0xc]);
      }
LAB_01a0b3bc:
      *(undefined1 *)((int)param_1 + 0x5e) = uVar13;
      return uVar15;
    }
  } while( true );
}

