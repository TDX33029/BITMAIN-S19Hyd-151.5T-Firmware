// FUN_0194ab28 @ 0194ab28 size=11700 calls_out=42 calls_in=0
// strings: Could not subscribe to ticker starter | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | Could not subscribe to ticker starter | InvalidParamSegmentInvalidParamInvalidCatchAll | FieldSet corrupted (this is a bug)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0194ab28(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  char *pcVar2;
  int *******pppppppiVar3;
  int *******pppppppiVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  undefined4 *puVar10;
  int *******pppppppiVar11;
  int *******pppppppiVar12;
  uint uVar13;
  code *pcVar14;
  code *pcVar15;
  int *******pppppppiVar16;
  int iVar17;
  int *piVar18;
  int ******ppppppiVar19;
  int ******extraout_r1;
  byte *pbVar20;
  int ******ppppppiVar21;
  int *******pppppppiVar22;
  uint uVar23;
  uint uVar24;
  int *******pppppppiVar25;
  int ******ppppppiVar26;
  int *******pppppppiVar27;
  byte *pbVar28;
  undefined1 uVar29;
  int ****ppppiVar30;
  uint uVar31;
  uint uVar32;
  undefined4 *puVar33;
  int ****ppppiVar34;
  uint uVar35;
  int ******ppppppiVar36;
  uint uVar37;
  uint uVar38;
  code *pcVar39;
  int *******pppppppiVar40;
  int *******pppppppiVar41;
  code *pcVar42;
  uint uVar43;
  int *piVar44;
  undefined1 *puVar45;
  int *piVar46;
  bool bVar47;
  undefined8 uVar48;
  int *******local_19a8;
  int *******local_19a4;
  int *******local_1998;
  int *******local_1980;
  int *******local_1958;
  int *******local_1954;
  int *******local_1950;
  int local_1948;
  int iStack_1944;
  int iStack_1940;
  int *******local_1938;
  int *******local_1934;
  int *******local_1930;
  int *******local_1928;
  int *******local_1924;
  int *******local_1920;
  int *******pppppppiStack_191c;
  int *******local_1918;
  int *******pppppppiStack_1914;
  int *******pppppppiStack_1910;
  int *******pppppppiStack_190c;
  int local_17d4;
  int iStack_17d0;
  int iStack_17cc;
  int *******local_17c8;
  int *******pppppppiStack_17c4;
  int *******pppppppiStack_17c0;
  int *******pppppppiStack_17bc;
  int *******local_17b8;
  int *******pppppppiStack_17b4;
  int *******pppppppiStack_17b0;
  int *******pppppppiStack_17ac;
  int ******local_1674;
  int iStack_1670;
  int iStack_166c;
  int ******local_1668;
  int *******local_1664;
  int *******local_1660;
  int *******local_165c;
  int *******local_1658;
  int *******local_1654;
  int *******local_1650;
  int *******pppppppiStack_164c;
  int *******local_1648;
  uint local_1644;
  int *local_1510;
  undefined1 local_150b;
  int *******local_14d8;
  int ******local_14d4;
  int ******local_1208;
  int ******local_1204;
  int *******local_1200;
  int *******local_11fc;
  int *******local_11f8;
  int *******local_11f4;
  int *******local_11f0;
  int *******pppppppiStack_11ec;
  int *******pppppppiStack_11e8;
  uint uStack_11e4;
  int *******local_da0;
  int *******local_d9c;
  int *******local_d98;
  int *******local_d94;
  int *******local_d90;
  int *******pppppppiStack_d8c;
  int *******pppppppiStack_d88;
  uint local_d84;
  undefined4 *local_c18;
  undefined4 *local_948;
  int *******local_940;
  int *******local_93c;
  int *******local_938;
  int *******local_934;
  int *******local_930;
  undefined *local_92c;
  int *local_928;
  undefined4 local_918;
  int *******local_914;
  code *pcStack_910;
  int *******pppppppiStack_90c;
  undefined4 local_908;
  undefined4 uStack_904;
  undefined4 uStack_900;
  undefined4 uStack_8fc;
  undefined4 local_8f8;
  undefined4 local_8f4;
  undefined4 local_8f0;
  int *local_8e8;
  int *******local_8e4;
  undefined4 local_788;
  undefined4 local_784;
  undefined4 local_780;
  int *local_778;
  int *******local_774;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  int *local_4a8;
  int *******local_4a4;
  int *******local_4a0;
  code *local_49c;
  int *******local_498;
  undefined4 local_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined1 local_41 [29];
  
  puVar6 = (undefined4 *)((uint)&local_940 | 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0xe]) {
  case '\0':
    iVar8 = param_1[2];
    *(undefined1 *)((int)param_1 + 0x39) = 1;
    if (*(char *)(iVar8 + 8) == '\0') {
      if (*param_1 != 0) {
        *(undefined1 *)((int)param_1 + 0x39) = 0;
        param_1[0xf] = param_1[1];
        goto switchD_0194ab68_caseD_3;
      }
LAB_0194ad10:
      if (*(char *)(iVar8 + 8) == '\0') {
        while (*(char *)(iVar8 + 8) == '\0') {
          FUN_019e6e74(&local_940,&DAT_01d25ea4,0,0,100000000,&DAT_01d25ea4);
          FUN_01bed4e2(&local_da0,&local_940,0x50);
          FUN_01bed4e2(param_1 + 0x10,&local_da0,0x50);
switchD_0194ab68_caseD_4:
          iVar8 = FUN_019e84a0(param_1 + 0x10,*param_2);
          if (iVar8 != 0) {
            uVar7 = 1;
            uVar29 = 4;
            goto LAB_0194e6d4;
          }
          FUN_01431b40(param_1 + 0x10);
          iVar8 = param_1[2];
        }
      }
    }
    while (*(char *)(param_1[3] + 8) == '\0') {
      FUN_019e6e74(&local_940,&DAT_01d25ec4,0,0,500000000,&DAT_01d25ec4);
      FUN_01bed4e2(&local_da0,&local_940,0x50);
      FUN_01bed4e2(param_1 + 0x10,&local_da0,0x50);
switchD_0194ab68_caseD_5:
      iVar8 = FUN_019e84a0(param_1 + 0x10,*param_2);
      if (iVar8 != 0) {
        uVar7 = 1;
        uVar29 = 5;
        goto LAB_0194e6d4;
      }
      FUN_01431b40(param_1 + 0x10);
      FUN_0128e808(param_1 + 8);
      *(undefined1 *)(param_1 + 0x1a) = 0;
      param_1[0xf] = param_1[4] + 8;
switchD_0194ab68_caseD_6:
      FUN_006177f4(&local_1948,param_1 + 0xf,param_2);
      if (local_1948 == 0) {
        uVar7 = 1;
        uVar29 = 6;
        goto LAB_0194e6d4;
      }
      param_1[0xb] = local_1948;
      param_1[0xc] = iStack_1944;
      param_1[0xd] = iStack_1940;
      cVar5 = (char)param_1[0x1a];
      bVar47 = cVar5 == '\x03';
      if (bVar47) {
        cVar5 = (char)param_1[0x19];
      }
      if (bVar47 && cVar5 == '\x03') {
        FUN_0193c3cc(param_1 + 0x11);
      }
      uVar48 = (**(code **)(((undefined4 *)param_1[0xd])[1] + 0x24))(*(undefined4 *)param_1[0xd]);
      *(undefined8 *)(param_1 + 0xf) = uVar48;
LAB_0194b080:
      (**(code **)((int)((ulonglong)uVar48 >> 0x20) + 0xc))(&local_940,(int)uVar48,param_2);
      pppppppiVar22 = local_938;
      pppppppiVar4 = local_93c;
      pppppppiVar3 = local_940;
      if (local_940 == (int *******)&DAT_80000001) {
        uVar7 = 1;
        uVar29 = 7;
        goto LAB_0194e6d4;
      }
      FUN_01139b38(param_1[0xf],param_1[0x10]);
      uVar7 = FUN_019f8c54(param_1[0xb],param_1[0xc]);
      if (pppppppiVar3 == (int *******)&DAT_80000000) {
        local_41[0] = SUB41(pppppppiVar4,0);
        if (((DAT_01d50f88 < 5) &&
            ((DAT_01d50654 - 1 < 2 ||
             ((DAT_01d50654 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d5064c), cVar5 != '\0')))))) &&
           (iVar8 = FUN_01aaa278(DAT_01d5064c), iVar8 != 0)) {
          if (*(int ********)(DAT_01d5064c + 0x20) == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25eb4);
          }
          local_165c = &local_1668;
          local_938 = *(int ********)(DAT_01d5064c + 0x24);
          local_934 = *(int ********)(DAT_01d5064c + 0x28);
          local_498 = (int *******)(DAT_01d5064c + 0x1c);
          local_940 = (int *******)*local_498;
          local_4a0 = (int *******)&local_1660;
          local_1660 = (int *******)&local_940;
          local_1668 = (int ******)&DAT_0058eaec;
          local_930 = (int *******)0x0;
          local_49c = (code *)0x1;
          local_1664 = (int *******)&local_1928;
          local_1928 = (int *******)local_41;
          local_1658 = (int *******)&DAT_01d2ea4c;
          local_1924 = (int *******)FUN_01941074;
          local_93c = *(int ********)(DAT_01d5064c + 0x20);
          FUN_01aaaecc(DAT_01d5064c,&local_4a0);
          iVar8 = DAT_01d5064c;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_11fc = *(int ********)(DAT_01d5064c + 0x14);
            local_11f8 = *(int ********)(DAT_01d5064c + 0x18);
            local_1200 = (int *******)&DAT_00000001;
            DataMemoryBarrier(0xb);
            puVar33 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar33 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar17 = (*(code *)puVar33[3])(pcVar2,&local_1200);
            if (iVar17 != 0) {
              local_da0 = local_1200;
              local_d9c = local_11fc;
              local_d98 = local_11f8;
              FUN_01aaa328(iVar8,pcVar2,puVar33[4],&local_da0,&local_4a0);
            }
          }
        }
        else {
          iVar8 = DAT_01d5064c;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_1934 = *(int ********)(DAT_01d5064c + 0x14);
            local_1930 = *(int ********)(DAT_01d5064c + 0x18);
            local_1938 = (int *******)&DAT_00000001;
            DataMemoryBarrier(0xb);
            puVar33 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar33 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar17 = (*(code *)puVar33[3])(pcVar2,&local_1938);
            if (iVar17 != 0) {
              if (*(int ********)(DAT_01d5064c + 0x20) == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25eb4);
              }
              local_938 = *(int ********)(DAT_01d5064c + 0x24);
              local_934 = *(int ********)(DAT_01d5064c + 0x28);
              local_11fc = (int *******)&local_1928;
              local_1200 = (int *******)&local_940;
              local_165c = (int *******)&DAT_00000001;
              local_1660 = (int *******)&local_1200;
              local_1924 = (int *******)&local_4a0;
              local_930 = (int *******)0x0;
              local_4a0 = (int *******)local_41;
              local_11f8 = (int *******)&DAT_01d2ea4c;
              local_1928 = (int *******)&DAT_0058eaec;
              local_49c = FUN_01941074;
              local_da0 = local_1938;
              local_d9c = local_1934;
              local_d98 = local_1930;
              local_1658 = (int *******)(DAT_01d5064c + 0x1c);
              local_940 = *(int ********)(DAT_01d5064c + 0x1c);
              local_93c = *(int ********)(DAT_01d5064c + 0x20);
              FUN_01aaa328(iVar8,pcVar2,puVar33[4],&local_da0,&local_1660);
            }
          }
        }
      }
      else {
        uVar48 = thunk_FUN_01bee35a(uVar7,0x20);
        puVar9 = (uint *)((int)uVar48 + (int)((ulonglong)uVar48 >> 0x20));
        puVar33 = puVar6 + 4;
        puVar10 = (undefined4 *)((uint)&local_4a0 | 4);
        pppppppiVar41 = pppppppiVar4;
LAB_0194b254:
        pppppppiVar11 = pppppppiVar41;
        if (pppppppiVar11 != pppppppiVar4 + (int)pppppppiVar22 * 0xe) {
          pppppppiVar41 = pppppppiVar11 + 0xe;
          if ((((uint)*pppppppiVar11 & 1) != 0) &&
             (pppppppiVar11[10] == (int ******)0x0 && pppppppiVar11[0xb] == (int ******)0x0)) {
            ppppppiVar19 = pppppppiVar11[2];
            ppppppiVar21 = pppppppiVar11[3];
            ppppppiVar26 = pppppppiVar11[4];
            ppppppiVar36 = pppppppiVar11[5];
            pppppppiStack_164c =
                 (int *******)
                 ((int)ppppppiVar36 << 0x18 | ((uint)ppppppiVar36 >> 8 & 0xff) << 0x10 |
                  ((uint)ppppppiVar36 >> 0x10 & 0xff) << 8 | (uint)ppppppiVar36 >> 0x18);
            local_1648 = (int *******)
                         ((int)ppppppiVar26 << 0x18 | ((uint)ppppppiVar26 >> 8 & 0xff) << 0x10 |
                          ((uint)ppppppiVar26 >> 0x10 & 0xff) << 8 | (uint)ppppppiVar26 >> 0x18);
            pppppppiVar11 = (int *******)param_1[5];
            local_1650 = (int *******)
                         ((int)ppppppiVar19 << 0x18 | ((uint)ppppppiVar19 >> 8 & 0xff) << 0x10 |
                          ((uint)ppppppiVar19 >> 0x10 & 0xff) << 8 | (uint)ppppppiVar19 >> 0x18);
            local_1654 = (int *******)
                         ((int)ppppppiVar21 << 0x18 | ((uint)ppppppiVar21 >> 8 & 0xff) << 0x10 |
                          ((uint)ppppppiVar21 >> 0x10 & 0xff) << 8 | (uint)ppppppiVar21 >> 0x18);
            do {
              ppppppiVar19 = *pppppppiVar11;
              bVar47 = (bool)hasExclusiveAccess(pppppppiVar11);
            } while (!bVar47);
            *pppppppiVar11 = (int ******)((int)ppppppiVar19 + 1);
            if ((int)ppppppiVar19 < 0) goto LAB_0194d774;
            pppppppiVar40 = pppppppiVar11 + 0x11;
            do {
              bVar47 = (bool)hasExclusiveAccess(pppppppiVar40);
            } while (!bVar47);
            *pppppppiVar40 = (int ******)((int)*pppppppiVar40 + 1);
            do {
              do {
                local_1928 = (int *******)DAT_01d50470;
                local_1924 = (int *******)DAT_01d50474;
                ppppiVar30 = (int ****)((int)DAT_01d50470 + 1);
                ppppiVar34 = (int ****)
                             ((int)DAT_01d50474 + (uint)((int ****)0xfffffffe < DAT_01d50470));
                bVar47 = (bool)hasExclusiveAccess(0x1d50470);
              } while (!bVar47);
              bVar47 = DAT_01d50470 == (int ****)0x0;
              bVar1 = DAT_01d50474 == (int ****)0x0;
              DAT_01d50470 = ppppiVar30;
              DAT_01d50474 = ppppiVar34;
            } while (bVar47 && bVar1);
            local_1644 = local_1644 & 0xffffff00;
            local_165c = (int *******)local_41;
            local_1660 = (int *******)&local_1928;
            local_1658 = pppppppiVar11;
            if ((char)puVar9[0xe] != '\x01') {
              if ((char)puVar9[0xe] == '\x02') {
                uVar29 = 1;
                FUN_0193c71c(&local_1658);
                goto LAB_0194b774;
              }
              FUN_019a2bcc(puVar9,&LAB_019efb68);
              *(undefined1 *)(puVar9 + 0xe) = 1;
            }
            local_1200 = local_1660;
            local_11fc = local_165c;
            local_11f8 = local_1658;
            local_11f4 = local_1654;
            local_11f0 = local_1650;
            pppppppiStack_11ec = pppppppiStack_164c;
            pppppppiStack_11e8 = local_1648;
            uStack_11e4 = local_1644;
            uVar43 = *puVar9;
            if (0x7ffffffe < uVar43) {
                    /* WARNING: Subroutine does not return */
              FUN_0130701c(&DAT_01d2e14c);
            }
            *puVar9 = uVar43 + 1;
            local_da0 = local_1660;
            local_d9c = local_165c;
            local_d98 = local_1658;
            local_d94 = local_1654;
            local_d90 = local_1650;
            pppppppiStack_d8c = pppppppiStack_164c;
            pppppppiStack_d88 = local_1648;
            local_d84 = local_1644;
            uVar31 = local_d84;
            if (puVar9[1] == 2) {
              local_d84._0_1_ = (char)local_1644;
              bVar47 = (char)local_d84 == '\0';
              local_d84 = uVar31;
              if (bVar47) {
                FUN_0193c71c(&local_d98);
                uVar43 = *puVar9 - 1;
              }
              uVar29 = 0;
              *puVar9 = uVar43;
LAB_0194b774:
              local_940 = (int *******)CONCAT31(local_940._1_3_,uVar29);
                    /* WARNING: Subroutine does not return */
              FUN_0068d4ec(&local_940,&DAT_01d25f14);
            }
            pppppppiVar40 = (int *******)*local_1660;
            pppppppiVar11 = (int *******)local_1660[1];
            if ((puVar9[1] & 1) == 0) {
              piVar18 = (int *)puVar9[2];
              do {
                iVar8 = *piVar18;
                bVar47 = (bool)hasExclusiveAccess(piVar18);
              } while (!bVar47);
              *piVar18 = iVar8 + 1;
              if (iVar8 < 0) goto LAB_0194d774;
              piVar46 = (int *)piVar18[0x82];
              if (piVar46 != (int *)0x0) {
                do {
                  iVar8 = *piVar46;
                  bVar47 = (bool)hasExclusiveAccess(piVar46);
                } while (!bVar47);
                *piVar46 = iVar8 + 1;
                if (iVar8 < 0) goto LAB_0194d774;
                local_1998 = (int *******)piVar18[0x83];
              }
              *puVar10 = local_1658;
              puVar10[1] = local_1654;
              puVar10[2] = local_1650;
              puVar10[3] = pppppppiStack_164c;
              puVar10[4] = local_1648;
              puVar10[5] = local_1644;
              local_914 = local_4a0;
              pcStack_910 = local_49c;
              pppppppiStack_90c = local_498;
              local_908 = local_494;
              uStack_904 = uStack_490;
              uStack_900 = uStack_48c;
              uStack_8fc = uStack_488;
              *puVar6 = 0;
              puVar6[1] = 0;
              *puVar33 = pppppppiVar40;
              puVar6[5] = pppppppiVar11;
              local_918 = 0;
              local_940 = (int *******)&DAT_000000cc;
              local_93c = (int *******)0x0;
              local_938 = (int *******)&PTR_LAB_01d26224;
              local_8e4 = local_1998;
              local_8f8 = 0;
              local_8f4 = 0;
              local_8f0 = 0;
              local_4a0 = (int *******)0x0;
              local_928 = piVar18;
              local_8e8 = piVar46;
              iVar8 = FUN_01be5878(&local_4a0,0x20,0x60);
              pppppppiVar27 = local_4a0;
              if ((iVar8 != 0) || (local_4a0 == (int *******)0x0)) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(0x20,0x60);
              }
              FUN_01bed4e2(local_4a0,&local_940,0x60);
              iVar8 = FUN_01a2cc10(piVar18 + 0x40,pppppppiVar27,pppppppiVar27);
              local_940 = pppppppiVar40;
              local_93c = pppppppiVar11;
              if (piVar18[0x80] != 0) {
                (**(code **)(piVar18[0x81] + 0x14))
                          (piVar18[0x80] + (*(int *)(piVar18[0x81] + 8) - 1U & 0xfffffff8) + 8,
                           &local_940);
              }
              if (iVar8 != 0) {
                FUN_019dc904(puVar9[2],iVar8);
              }
            }
            else {
              piVar18 = (int *)puVar9[2];
              do {
                iVar8 = *piVar18;
                bVar47 = (bool)hasExclusiveAccess(piVar18);
              } while (!bVar47);
              *piVar18 = iVar8 + 1;
              if (iVar8 < 0) goto LAB_0194d774;
              piVar46 = (int *)piVar18[0x50];
              if (piVar46 != (int *)0x0) {
                do {
                  iVar8 = *piVar46;
                  bVar47 = (bool)hasExclusiveAccess(piVar46);
                } while (!bVar47);
                *piVar46 = iVar8 + 1;
                if (iVar8 < 0) goto LAB_0194d774;
                local_1998 = (int *******)piVar18[0x51];
              }
              *puVar10 = local_1658;
              puVar10[1] = local_1654;
              puVar10[2] = local_1650;
              puVar10[3] = pppppppiStack_164c;
              puVar10[4] = local_1648;
              puVar10[5] = local_1644;
              local_914 = local_4a0;
              pcStack_910 = local_49c;
              pppppppiStack_90c = local_498;
              local_908 = local_494;
              uStack_904 = uStack_490;
              uStack_900 = uStack_48c;
              uStack_8fc = uStack_488;
              *puVar6 = 0;
              puVar6[1] = 0;
              *puVar33 = pppppppiVar40;
              puVar6[5] = pppppppiVar11;
              local_918 = 0;
              local_940 = (int *******)&DAT_000000cc;
              local_93c = (int *******)0x0;
              local_938 = (int *******)&PTR_LAB_01d25ff4;
              local_8e4 = local_1998;
              local_8f8 = 0;
              local_8f4 = 0;
              local_8f0 = 0;
              local_4a0 = (int *******)0x0;
              local_928 = piVar18;
              local_8e8 = piVar46;
              iVar8 = FUN_01be5878(&local_4a0,0x20,0x60);
              pppppppiVar27 = local_4a0;
              if ((iVar8 != 0) || (local_4a0 == (int *******)0x0)) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(0x20,0x60);
              }
              FUN_01bed4e2(local_4a0,&local_940,0x60);
              pppppppiVar12 = (int *******)FUN_01a2ce94(piVar18 + 0x14,pppppppiVar27,pppppppiVar27);
              local_940 = pppppppiVar40;
              local_93c = pppppppiVar11;
              if (piVar18[0x4e] != 0) {
                (**(code **)(piVar18[0x4f] + 0x14))
                          (piVar18[0x4e] + (*(int *)(piVar18[0x4f] + 8) - 1U & 0xfffffff8) + 8,
                           &local_940);
              }
              if (pppppppiVar12 != (int *******)0x0) {
                local_4a0 = (int *******)((uint)local_4a0 & 0xffffff00);
                local_938 = (int *******)&local_4a0;
                local_940 = (int *******)(piVar18 + 2);
                local_93c = pppppppiVar12;
                FUN_019ee860(&local_940);
              }
            }
            *puVar9 = *puVar9 - 1;
            if (*pppppppiVar27 == (int ******)&DAT_000000cc) {
              DataMemoryBarrier(0xb);
              bVar47 = (bool)hasExclusiveAccess(pppppppiVar27);
              if (bVar47) {
                *pppppppiVar27 = (int ******)&DAT_00000084;
                goto LAB_0194b254;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            (*(code *)pppppppiVar27[2][4])(pppppppiVar27);
          }
          goto LAB_0194b254;
        }
        pppppppiVar41 = (int *******)0x0;
        if (pppppppiVar22 != (int *******)0x0) {
          pppppppiVar11 = pppppppiVar4;
          do {
            pppppppiVar40 = pppppppiVar11 + 0xe;
            pppppppiVar27 = (int *******)((int)pppppppiVar41 + 1);
            if (pppppppiVar11[10] == (int ******)0x0 && pppppppiVar11[0xb] == (int ******)0x0) {
              if (pppppppiVar27 < pppppppiVar22) {
                puVar45 = (undefined1 *)((int)pppppppiVar22 + (-1 - (int)pppppppiVar41));
                pppppppiVar22 = pppppppiVar41;
                do {
                  pppppppiVar41 = pppppppiVar22;
                  if (pppppppiVar40[10] != (int ******)0x0 || pppppppiVar40[0xb] != (int ******)0x0)
                  {
                    pppppppiVar41 = (int *******)((int)pppppppiVar22 + 1);
                    pppppppiVar22 = pppppppiVar4 + (int)pppppppiVar22 * 0xe;
                    ppppppiVar19 = pppppppiVar40[1];
                    ppppppiVar21 = pppppppiVar40[2];
                    ppppppiVar26 = pppppppiVar40[3];
                    *pppppppiVar22 = *pppppppiVar40;
                    pppppppiVar22[1] = ppppppiVar19;
                    pppppppiVar22[2] = ppppppiVar21;
                    pppppppiVar22[3] = ppppppiVar26;
                    ppppppiVar19 = pppppppiVar40[5];
                    ppppppiVar21 = pppppppiVar40[6];
                    ppppppiVar26 = pppppppiVar40[7];
                    ppppppiVar36 = pppppppiVar40[8];
                    pppppppiVar22[4] = pppppppiVar40[4];
                    pppppppiVar22[5] = ppppppiVar19;
                    pppppppiVar22[6] = ppppppiVar21;
                    pppppppiVar22[7] = ppppppiVar26;
                    pppppppiVar22[8] = ppppppiVar36;
                    ppppppiVar19 = pppppppiVar40[10];
                    ppppppiVar21 = pppppppiVar40[0xb];
                    ppppppiVar26 = pppppppiVar40[0xc];
                    ppppppiVar36 = pppppppiVar40[0xd];
                    pppppppiVar22[9] = pppppppiVar40[9];
                    pppppppiVar22[10] = ppppppiVar19;
                    pppppppiVar22[0xb] = ppppppiVar21;
                    pppppppiVar22[0xc] = ppppppiVar26;
                    pppppppiVar22[0xd] = ppppppiVar36;
                  }
                  pppppppiVar40 = pppppppiVar40 + 0xe;
                  puVar45 = puVar45 + -1;
                  pppppppiVar22 = pppppppiVar41;
                } while (puVar45 != (undefined1 *)0x0);
              }
              goto LAB_0194b7d8;
            }
            pppppppiVar41 = pppppppiVar27;
            pppppppiVar11 = pppppppiVar40;
          } while (pppppppiVar22 != pppppppiVar27);
          pppppppiVar41 = pppppppiVar22;
        }
LAB_0194b7d8:
        pppppppiVar22 = (int *******)0x0;
        local_4a0 = (int *******)0x0;
        local_49c = (code *)0x1;
        local_498 = (int *******)0x0;
        local_1920 = (int *******)0x0;
        piVar18 = param_1 + 8;
        local_1924 = (int *******)&DAT_00000001;
        local_1928 = (int *******)0x0;
        if (pppppppiVar41 != (int *******)0x0) {
          pppppppiVar22 = (int *******)0x0;
          local_1980 = (int *******)&DAT_00000001;
          pppppppiVar11 = pppppppiVar4;
          do {
            ppppppiVar19 = pppppppiVar11[0xb];
            if (pppppppiVar11[10] == (int ******)0x0 && ppppppiVar19 == (int ******)0x0) {
              local_1660 = (int *******)0x0;
            }
            else {
              FUN_01a2b1e0(&local_1660,ppppppiVar19,pppppppiVar11[10],ppppppiVar19);
              ppppppiVar19 = extraout_r1;
            }
            if (((uint)pppppppiVar11[6] & 1) == 0) {
              local_1200 = (int *******)0x0;
            }
            else {
              FUN_01a2b1e0(&local_1200,ppppppiVar19,pppppppiVar11[8],pppppppiVar11[9]);
            }
            ppppppiVar19 = pppppppiVar11[0xc];
            if ((int ******)0x2 < ppppppiVar19) {
                    /* WARNING: Subroutine does not return */
              FUN_013073dc(&DAT_00533467,0x2b,local_41,&DAT_01d27120,&DAT_01d27100);
            }
            if (((uint)*pppppppiVar11 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01d27110);
            }
            ppppppiVar21 = pppppppiVar11[2];
            ppppppiVar36 = pppppppiVar11[3];
            ppppppiVar26 = pppppppiVar11[4];
            uVar37 = (int)ppppppiVar26 << 0x18 | ((uint)ppppppiVar26 >> 8 & 0xff) << 0x10 |
                     ((uint)ppppppiVar26 >> 0x10 & 0xff) << 8 | (uint)ppppppiVar26 >> 0x18;
            ppppppiVar26 = pppppppiVar11[5];
            uVar43 = (int)ppppppiVar21 << 0x18 | ((uint)ppppppiVar21 >> 8 & 0xff) << 0x10 |
                     ((uint)ppppppiVar21 >> 0x10 & 0xff) << 8 | (uint)ppppppiVar21 >> 0x18;
            uVar38 = (int)ppppppiVar26 << 0x18 | ((uint)ppppppiVar26 >> 8 & 0xff) << 0x10 |
                     ((uint)ppppppiVar26 >> 0x10 & 0xff) << 8 | (uint)ppppppiVar26 >> 0x18;
            uVar31 = (int)ppppppiVar36 << 0x18 | ((uint)ppppppiVar36 >> 8 & 0xff) << 0x10 |
                     ((uint)ppppppiVar36 >> 0x10 & 0xff) << 8 | (uint)ppppppiVar36 >> 0x18;
            if (local_1200 == (int *******)0x0) {
              if (local_1660 != (int *******)0x0) {
                pppppppiVar40 = (int *******)*piVar18;
                if (pppppppiVar40 == local_1660) {
                  pppppppiVar40 = (int *******)param_1[9];
                  uVar23 = (uint)(pppppppiVar40 < local_165c);
                  uVar32 = (uint)(pppppppiVar40 >= local_165c && pppppppiVar40 != local_165c);
                  if (pppppppiVar40 == local_165c) {
                    pppppppiVar40 = (int *******)param_1[10];
                    uVar32 = 0;
                    uVar23 = (uint)(pppppppiVar40 < local_1658);
                    if (pppppppiVar40 >= local_1658 && pppppppiVar40 != local_1658) {
                      uVar32 = 1;
                    }
                  }
                  iVar8 = uVar32 - uVar23;
                }
                else {
                  iVar8 = (uint)((int)local_1660 < (int)pppppppiVar40) -
                          (uint)((int)pppppppiVar40 < (int)local_1660);
                }
                if (ppppppiVar19 == (int ******)0x0) {
                  if (iVar8 != 1) goto LAB_0194ba40;
LAB_0194ba68:
                  local_da0 = (int *******)*piVar18;
                  local_d9c = (int *******)param_1[9];
                  local_d98 = (int *******)param_1[10];
                  FUN_0128fa50(&local_940,&local_da0,&local_1660);
                  uVar23 = (uint)((int)local_93c < 0 && 0 < (int)local_938);
                  pbVar20 = (byte *)((int)local_93c + (uint)CARRY4((uint)local_940,uVar23));
                  bVar47 = 0x15180 < (int)local_940 + uVar23;
                  if (-(int)(pbVar20 + bVar47) < 0 ==
                      (SBORROW4(0,(int)pbVar20) != SBORROW4(-(int)pbVar20,(uint)bVar47))) {
LAB_0194bad4:
                    if (pppppppiVar22 == local_1928) {
                      FUN_0195b4d8(&local_1928);
                      local_1980 = local_1924;
                    }
                    local_1920 = (int *******)((int)pppppppiVar22 + 1);
                    pbVar20 = (byte *)((int)local_1980 + (int)pppppppiVar22 * 0x22);
                    *pbVar20 = 1;
                    pbVar20[0x11] = 0;
                    *(uint *)(pbVar20 + 0xd) = uVar37;
                    *(uint *)(pbVar20 + 9) = uVar38;
                    *(uint *)(pbVar20 + 5) = uVar43;
                    *(uint *)(pbVar20 + 1) = uVar31;
                    pppppppiVar22 = local_1920;
                  }
                  else {
LAB_0194bc40:
                    pppppppiVar40 = local_498;
                    if (local_498 == local_4a0) {
                      FUN_0195b4d8(&local_4a0);
                    }
                    pcVar14 = local_49c + (int)pppppppiVar40 * 0x22;
                    *pcVar14 = (code)0x0;
                    *(uint *)(pcVar14 + 0x1e) = uVar37;
                    *(uint *)(pcVar14 + 0x1a) = uVar38;
                    *(uint *)(pcVar14 + 0x16) = uVar43;
                    *(uint *)(pcVar14 + 0x12) = uVar31;
                    pcVar14[0x11] = (code)0x1;
                    local_498 = (int *******)((int)pppppppiVar40 + 1);
                  }
                }
                else {
                  if (iVar8 == 1) goto LAB_0194bad4;
LAB_0194ba40:
                  if (iVar8 == 0) goto LAB_0194ba48;
                }
              }
            }
            else if (local_1660 != (int *******)0x0) {
              bVar47 = (int)local_1660 <= *piVar18;
              if ((((int *******)*piVar18 == local_1660) &&
                  (bVar47 = local_165c <= (int *******)param_1[9],
                  (int *******)param_1[9] == local_165c)) &&
                 (bVar47 = false, local_1658 <= (int *******)param_1[10])) {
                bVar47 = true;
              }
              uVar23 = (uint)((int)local_1200 < (int)local_1660);
              uVar32 = (uint)(local_1200 != local_1660 && (int)local_1660 <= (int)local_1200);
              if (local_1200 == local_1660) {
                uVar23 = (uint)(local_11fc < local_165c);
                uVar32 = (uint)(local_11fc >= local_165c && local_11fc != local_165c);
                if (local_11fc == local_165c) {
                  uVar32 = 0;
                  uVar23 = (uint)(local_11f8 < local_1658);
                  if (local_11f8 >= local_1658 && local_11f8 != local_1658) {
                    uVar32 = 1;
                  }
                }
              }
              iVar8 = uVar32 - uVar23;
              if (bVar47) {
                if (iVar8 != -1) goto LAB_0194ba40;
LAB_0194ba48:
                if (1U >> ((uint)ppppppiVar19 & 0xff) != 0) {
                  if (local_1200 == (int *******)0x0 || local_1660 == (int *******)0x0) {
                    if (local_1200 == (int *******)0x0) goto LAB_0194ba68;
                  }
                  else {
                    FUN_0128fa50(&local_940,&local_1660,&local_1200);
                    pppppppiVar12 = local_938;
                    pppppppiVar27 = local_93c;
                    pppppppiVar40 = local_940;
                    local_da0 = (int *******)*piVar18;
                    local_d9c = (int *******)param_1[9];
                    local_d98 = (int *******)param_1[10];
                    FUN_0128fa50(&local_940,&local_da0,&local_1660);
                    uVar32 = (uint)((int)pppppppiVar27 < 0 && 0 < (int)pppppppiVar12);
                    pbVar20 = (byte *)((int)pppppppiVar27 + (uint)CARRY4((uint)pppppppiVar40,uVar32)
                                      );
                    uVar23 = (int)pbVar20 >> 0x1f;
                    uVar32 = (int)pppppppiVar40 + uVar32 ^ uVar23;
                    uVar13 = uVar32 - uVar23;
                    uVar35 = (uint)((int)local_93c < 0 && 0 < (int)local_938);
                    uVar24 = (int)local_940 + uVar35;
                    pbVar28 = (byte *)((int)local_93c + (uint)CARRY4((uint)local_940,uVar35));
                    if (((int)(uint)(uVar24 == 0) <= (int)pbVar28) &&
                       (uVar23 = (((uint)pbVar20 ^ uVar23) - (uVar23 + (uVar32 < uVar23))) * 2 |
                                 uVar13 >> 0x1f, bVar47 = uVar13 * 2 < uVar24,
                       (int)(uVar23 - (int)(pbVar28 + bVar47)) < 0 !=
                       (SBORROW4(uVar23,(int)pbVar28) !=
                       SBORROW4(uVar23 - (int)pbVar28,(uint)bVar47)))) goto LAB_0194bc40;
                  }
                }
                goto LAB_0194bad4;
              }
            }
            pppppppiVar11 = pppppppiVar11 + 0xe;
            pppppppiVar41 = (int *******)((int)pppppppiVar41 + -1);
          } while (pppppppiVar41 != (int *******)0x0);
        }
        pcVar14 = local_49c;
        pppppppiVar40 = local_4a0;
        pppppppiVar11 = local_1924;
        pppppppiVar41 = local_1928;
        pcVar39 = local_49c + (int)local_498 * 0x22;
        pppppppiVar22 = (int *******)((int)local_1924 + (int)pppppppiVar22 * 0x22);
        pcVar42 = local_49c;
        while (pcVar42 != pcVar39) {
          pcVar15 = pcVar42;
          while (pcVar42 = pcVar15 + 0x22, ((byte)pcVar15[0x11] & 1) == 0) {
            pcVar15 = pcVar42;
            if (pcVar42 == pcVar39) goto LAB_0194c454;
          }
          FUN_01bed4e2(&local_940,pcVar15 + 0x12,0x10);
          local_1928 = local_940;
          local_1924 = local_93c;
          local_1920 = local_938;
          pppppppiStack_191c = local_934;
          piVar46 = (int *)param_1[4];
          do {
            iVar8 = *piVar46;
            bVar47 = (bool)hasExclusiveAccess(piVar46);
          } while (!bVar47);
          *piVar46 = iVar8 + 1;
          if (iVar8 < 0) goto LAB_0194d774;
          local_1918 = local_940;
          pppppppiStack_1914 = local_93c;
          pppppppiStack_1910 = local_938;
          pppppppiStack_190c = local_934;
          local_17d4 = *piVar18;
          iStack_17d0 = param_1[9];
          iStack_17cc = param_1[10];
          do {
            do {
              local_1668 = (int ******)DAT_01d50470;
              local_1664 = (int *******)DAT_01d50474;
              ppppiVar30 = (int ****)((int)DAT_01d50470 + 1);
              ppppiVar34 = (int ****)
                           ((int)DAT_01d50474 + (uint)((int ****)0xfffffffe < DAT_01d50470));
              bVar47 = (bool)hasExclusiveAccess(0x1d50470);
            } while (!bVar47);
            bVar47 = DAT_01d50470 == (int ****)0x0;
            bVar1 = DAT_01d50474 == (int ****)0x0;
            DAT_01d50470 = ppppiVar30;
            DAT_01d50474 = ppppiVar34;
          } while (bVar47 && bVar1);
          FUN_01bed4e2(&local_1660,&local_1918,0x150);
          local_1204 = (int ******)local_41;
          local_1208 = (int ******)&local_1668;
          local_150b = 0;
          local_1510 = piVar46;
          if ((char)puVar9[0xe] != '\x01') {
            if ((char)puVar9[0xe] == '\x02') {
              uVar29 = 1;
              FUN_0194f908(&local_1660);
              goto LAB_0194d3f4;
            }
            FUN_019a2bcc(puVar9,&LAB_019efb68);
            *(undefined1 *)(puVar9 + 0xe) = 1;
          }
          FUN_01bed4e2(&local_1200,&local_1660,0x460);
          if (0x7ffffffe < *puVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_0130701c(&DAT_01d2e14c);
          }
          *puVar9 = *puVar9 + 1;
          uVar43 = puVar9[1];
          FUN_01bed4e2(&local_da0,&local_1660,0x460);
          if (uVar43 == 2) {
            FUN_0194f908(&local_da0);
            uVar29 = 0;
            *puVar9 = *puVar9 - 1;
LAB_0194d3f4:
            local_940 = (int *******)CONCAT31(local_940._1_3_,uVar29);
                    /* WARNING: Subroutine does not return */
            FUN_0068d4ec(&local_940,&DAT_01d25f04);
          }
          pppppppiVar12 = (int *******)*local_948;
          pppppppiVar27 = (int *******)local_948[1];
          if ((uVar43 & 1) == 0) {
            piVar46 = (int *)puVar9[2];
            do {
              iVar8 = *piVar46;
              bVar47 = (bool)hasExclusiveAccess(piVar46);
            } while (!bVar47);
            *piVar46 = iVar8 + 1;
            if (iVar8 < 0) goto LAB_0194d774;
            piVar44 = (int *)piVar46[0x82];
            if (piVar44 != (int *)0x0) {
              do {
                iVar8 = *piVar44;
                bVar47 = (bool)hasExclusiveAccess(piVar44);
              } while (!bVar47);
              *piVar44 = iVar8 + 1;
              if (iVar8 < 0) goto LAB_0194d774;
              local_19a4 = (int *******)piVar46[0x83];
            }
            FUN_01bed4e2(puVar10,&local_1660,0x458);
            FUN_01bed4e2(&local_914,&local_4a0,0x45c);
            *puVar6 = 0;
            puVar6[1] = 0;
            *puVar33 = pppppppiVar12;
            puVar6[5] = pppppppiVar27;
            local_918 = 0;
            local_940 = (int *******)&DAT_000000cc;
            local_93c = (int *******)0x0;
            local_4b8 = 0;
            local_938 = (int *******)&PTR_LAB_01d260bc;
            local_4a4 = local_19a4;
            local_4b4 = 0;
            local_4b0 = 0;
            local_4a0 = (int *******)0x0;
            local_928 = piVar46;
            local_4a8 = piVar44;
            iVar8 = FUN_01be5878(&local_4a0,0x20,0x4a0);
            pppppppiVar25 = local_4a0;
            if ((iVar8 != 0) || (local_4a0 == (int *******)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(0x20,0x4a0);
            }
            FUN_01bed4e2(local_4a0,&local_940,0x4a0);
            iVar8 = FUN_01a2cc10(piVar46 + 0x40,pppppppiVar25,pppppppiVar25);
            local_940 = pppppppiVar12;
            local_93c = pppppppiVar27;
            if (piVar46[0x80] != 0) {
              (**(code **)(piVar46[0x81] + 0x14))
                        (piVar46[0x80] + (*(int *)(piVar46[0x81] + 8) - 1U & 0xfffffff8) + 8,
                         &local_940);
            }
            if (iVar8 != 0) {
              FUN_019dc904(puVar9[2],iVar8);
            }
          }
          else {
            piVar46 = (int *)puVar9[2];
            local_19a8 = (int *******)(piVar46 + 2);
            do {
              iVar8 = *piVar46;
              bVar47 = (bool)hasExclusiveAccess(piVar46);
            } while (!bVar47);
            *piVar46 = iVar8 + 1;
            if (iVar8 < 0) goto LAB_0194d774;
            piVar44 = (int *)piVar46[0x50];
            if (piVar44 != (int *)0x0) {
              do {
                iVar8 = *piVar44;
                bVar47 = (bool)hasExclusiveAccess(piVar44);
              } while (!bVar47);
              *piVar44 = iVar8 + 1;
              if (iVar8 < 0) goto LAB_0194d774;
              local_19a4 = (int *******)piVar46[0x51];
            }
            FUN_01bed4e2(puVar10,&local_1660,0x458);
            FUN_01bed4e2(&local_914,&local_4a0,0x45c);
            *puVar6 = 0;
            puVar6[1] = 0;
            *puVar33 = pppppppiVar12;
            puVar6[5] = pppppppiVar27;
            local_918 = 0;
            local_940 = (int *******)&DAT_000000cc;
            local_93c = (int *******)0x0;
            local_4b8 = 0;
            local_938 = (int *******)&PTR_LAB_01d2615c;
            local_4a4 = local_19a4;
            local_4b4 = 0;
            local_4b0 = 0;
            local_4a0 = (int *******)0x0;
            local_928 = piVar46;
            local_4a8 = piVar44;
            iVar8 = FUN_01be5878(&local_4a0,0x20,0x4a0);
            pppppppiVar25 = local_4a0;
            if ((iVar8 != 0) || (local_4a0 == (int *******)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(0x20,0x4a0);
            }
            FUN_01bed4e2(local_4a0,&local_940,0x4a0);
            pppppppiVar16 = (int *******)FUN_01a2ce94(piVar46 + 0x14,pppppppiVar25,pppppppiVar25);
            local_940 = pppppppiVar12;
            local_93c = pppppppiVar27;
            if (piVar46[0x4e] != 0) {
              (**(code **)(piVar46[0x4f] + 0x14))
                        (piVar46[0x4e] + (*(int *)(piVar46[0x4f] + 8) - 1U & 0xfffffff8) + 8,
                         &local_940);
            }
            if (pppppppiVar16 != (int *******)0x0) {
              local_4a0 = (int *******)((uint)local_4a0 & 0xffffff00);
              local_938 = (int *******)&local_4a0;
              local_940 = local_19a8;
              local_93c = pppppppiVar16;
              FUN_019ee860(&local_940);
            }
          }
          *puVar9 = *puVar9 - 1;
          if (*pppppppiVar25 == (int ******)&DAT_000000cc) {
            DataMemoryBarrier(0xb);
            bVar47 = (bool)hasExclusiveAccess(pppppppiVar25);
            if (!bVar47) goto LAB_0194c430;
            *pppppppiVar25 = (int ******)&DAT_00000084;
          }
          else {
            ClearExclusiveLocal();
LAB_0194c430:
            (*(code *)pppppppiVar25[2][4])(pppppppiVar25);
          }
        }
LAB_0194c454:
        FUN_0132b958(pppppppiVar40,pcVar14,1,0x22);
        local_1998 = &local_1674;
        pppppppiVar40 = pppppppiVar11;
        while( true ) {
          pppppppiVar27 = pppppppiVar40;
          if (pppppppiVar40 == pppppppiVar22) break;
          while( true ) {
            pppppppiVar40 = (int *******)((int)pppppppiVar27 + 0x22);
            ppppppiVar19 = *pppppppiVar27;
            FUN_01bed4e2(&local_940,(byte *)((int)pppppppiVar27 + 1),0x10);
            local_da0 = local_940;
            local_d9c = local_93c;
            local_d98 = local_938;
            local_d94 = local_934;
            if (((uint)ppppppiVar19 & 1) != 0) break;
            pppppppiVar27 = pppppppiVar40;
            if (pppppppiVar40 == pppppppiVar22) goto LAB_0194d3ac;
          }
          local_1200 = local_940;
          local_11fc = local_93c;
          local_11f8 = local_938;
          local_11f4 = local_934;
          local_17c8 = local_940;
          pppppppiStack_17c4 = local_93c;
          pppppppiStack_17c0 = local_938;
          pppppppiStack_17bc = local_934;
          pppppppiVar27 = (int *******)param_1[6];
          do {
            ppppppiVar19 = *pppppppiVar27;
            bVar47 = (bool)hasExclusiveAccess(pppppppiVar27);
          } while (!bVar47);
          *pppppppiVar27 = (int ******)((int)ppppppiVar19 + 1);
          if ((int)ppppppiVar19 < 0) {
LAB_0194d774:
                    /* WARNING: Does not return */
            pcVar14 = (code *)software_udf(0xfdee,0x194d774);
            (*pcVar14)();
          }
          pppppppiVar12 = pppppppiVar27 + 0x11;
          do {
            bVar47 = (bool)hasExclusiveAccess(pppppppiVar12);
          } while (!bVar47);
          *pppppppiVar12 = (int ******)((int)*pppppppiVar12 + 1);
          do {
            do {
              local_1928 = (int *******)DAT_01d50470;
              local_1924 = (int *******)DAT_01d50474;
              ppppiVar30 = (int ****)((int)DAT_01d50470 + 1);
              ppppiVar34 = (int ****)
                           ((int)DAT_01d50474 + (uint)((int ****)0xfffffffe < DAT_01d50470));
              bVar47 = (bool)hasExclusiveAccess(0x1d50470);
            } while (!bVar47);
            bVar47 = DAT_01d50470 == (int ****)0x0;
            bVar1 = DAT_01d50474 == (int ****)0x0;
            DAT_01d50470 = ppppiVar30;
            DAT_01d50474 = ppppiVar34;
          } while (bVar47 && bVar1);
          local_165c = (int *******)local_41;
          local_1654 = local_940;
          local_1650 = local_93c;
          pppppppiStack_164c = local_938;
          local_1648 = local_934;
          local_1660 = (int *******)&local_1928;
          local_1644 = local_1644 & 0xffffff00;
          local_1658 = pppppppiVar27;
          if ((char)puVar9[0xe] != '\x01') {
            if ((char)puVar9[0xe] == '\x02') {
              uVar29 = 1;
              FUN_0193c71c(&local_1658);
              goto LAB_0194d4e0;
            }
            FUN_019a2bcc(puVar9,&LAB_019efb68);
            *(undefined1 *)(puVar9 + 0xe) = 1;
          }
          local_1200 = local_1660;
          local_11fc = local_165c;
          local_11f8 = local_1658;
          local_11f4 = local_1654;
          local_11f0 = local_1650;
          pppppppiStack_11ec = pppppppiStack_164c;
          pppppppiStack_11e8 = local_1648;
          uStack_11e4 = local_1644;
          pppppppiVar27 = (int *******)*puVar9;
          if ((int *******)0x7ffffffe < pppppppiVar27) {
                    /* WARNING: Subroutine does not return */
            FUN_0130701c(&DAT_01d2e14c);
          }
          *puVar9 = (uint)((int)pppppppiVar27 + 1);
          local_da0 = local_1660;
          local_d9c = local_165c;
          local_d98 = local_1658;
          local_d94 = local_1654;
          local_d90 = local_1650;
          pppppppiStack_d8c = pppppppiStack_164c;
          pppppppiStack_d88 = local_1648;
          local_d84 = local_1644;
          uVar43 = local_d84;
          if (puVar9[1] == 2) {
            local_d84._0_1_ = (char)local_1644;
            bVar47 = (char)local_d84 == '\0';
            local_d84 = uVar43;
            if (bVar47) {
              FUN_0193c71c(&local_d98);
              pppppppiVar27 = (int *******)(*puVar9 - 1);
            }
            uVar29 = 0;
            *puVar9 = (uint)pppppppiVar27;
LAB_0194d4e0:
            local_940 = (int *******)CONCAT31(local_940._1_3_,uVar29);
                    /* WARNING: Subroutine does not return */
            FUN_0068d4ec(&local_940,&DAT_01d25ed4);
          }
          pppppppiVar12 = (int *******)*local_1660;
          pppppppiVar25 = (int *******)local_1660[1];
          if ((puVar9[1] & 1) == 0) {
            piVar46 = (int *)puVar9[2];
            do {
              iVar8 = *piVar46;
              bVar47 = (bool)hasExclusiveAccess(piVar46);
            } while (!bVar47);
            *piVar46 = iVar8 + 1;
            if (iVar8 < 0) goto LAB_0194d774;
            piVar44 = (int *)piVar46[0x82];
            if (piVar44 != (int *)0x0) {
              do {
                iVar8 = *piVar44;
                bVar47 = (bool)hasExclusiveAccess(piVar44);
              } while (!bVar47);
              *piVar44 = iVar8 + 1;
              if (iVar8 < 0) goto LAB_0194d774;
              pppppppiVar27 = (int *******)piVar46[0x83];
            }
            *puVar10 = local_1658;
            puVar10[1] = local_1654;
            puVar10[2] = local_1650;
            puVar10[3] = pppppppiStack_164c;
            puVar10[4] = local_1648;
            puVar10[5] = local_1644;
            local_914 = local_4a0;
            pcStack_910 = local_49c;
            pppppppiStack_90c = local_498;
            local_908 = local_494;
            uStack_904 = uStack_490;
            uStack_900 = uStack_48c;
            uStack_8fc = uStack_488;
            *puVar6 = 0;
            puVar6[1] = 0;
            *puVar33 = pppppppiVar12;
            puVar6[5] = pppppppiVar25;
            local_918 = 0;
            local_940 = (int *******)&DAT_000000cc;
            local_93c = (int *******)0x0;
            local_8f8 = 0;
            local_938 = (int *******)&PTR_LAB_01d2610c;
            local_8f4 = 0;
            local_8f0 = 0;
            local_4a0 = (int *******)0x0;
            local_928 = piVar46;
            local_8e8 = piVar44;
            local_8e4 = pppppppiVar27;
            iVar8 = FUN_01be5878(&local_4a0,0x20,0x60);
            pppppppiVar27 = local_4a0;
            if ((iVar8 != 0) || (local_4a0 == (int *******)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(0x20,0x60);
            }
            FUN_01bed4e2(local_4a0,&local_940,0x60);
            iVar8 = FUN_01a2cc10(piVar46 + 0x40,pppppppiVar27,pppppppiVar27);
            local_940 = pppppppiVar12;
            local_93c = pppppppiVar25;
            if (piVar46[0x80] != 0) {
              (**(code **)(piVar46[0x81] + 0x14))
                        (piVar46[0x80] + (*(int *)(piVar46[0x81] + 8) - 1U & 0xfffffff8) + 8,
                         &local_940);
            }
            if (iVar8 != 0) {
              FUN_019dc904(puVar9[2],iVar8);
            }
          }
          else {
            piVar46 = (int *)puVar9[2];
            do {
              iVar8 = *piVar46;
              bVar47 = (bool)hasExclusiveAccess(piVar46);
            } while (!bVar47);
            *piVar46 = iVar8 + 1;
            if (iVar8 < 0) goto LAB_0194d774;
            piVar44 = (int *)piVar46[0x50];
            if (piVar44 != (int *)0x0) {
              do {
                iVar8 = *piVar44;
                bVar47 = (bool)hasExclusiveAccess(piVar44);
              } while (!bVar47);
              *piVar44 = iVar8 + 1;
              if (iVar8 < 0) goto LAB_0194d774;
              local_19a8 = (int *******)piVar46[0x51];
            }
            *puVar10 = local_1658;
            puVar10[1] = local_1654;
            puVar10[2] = local_1650;
            puVar10[3] = pppppppiStack_164c;
            puVar10[4] = local_1648;
            puVar10[5] = local_1644;
            local_914 = local_4a0;
            pcStack_910 = local_49c;
            pppppppiStack_90c = local_498;
            local_908 = local_494;
            uStack_904 = uStack_490;
            uStack_900 = uStack_48c;
            uStack_8fc = uStack_488;
            *puVar6 = 0;
            puVar6[1] = 0;
            local_918 = 0;
            *puVar33 = pppppppiVar12;
            puVar6[5] = pppppppiVar25;
            local_940 = (int *******)&DAT_000000cc;
            local_93c = (int *******)0x0;
            local_938 = (int *******)&PTR_LAB_01d261ac;
            local_8e4 = local_19a8;
            local_8f8 = 0;
            local_8f4 = 0;
            local_8f0 = 0;
            local_4a0 = (int *******)0x0;
            local_928 = piVar46;
            local_8e8 = piVar44;
            iVar8 = FUN_01be5878(&local_4a0,0x20,0x60);
            pppppppiVar27 = local_4a0;
            if ((iVar8 != 0) || (local_4a0 == (int *******)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(0x20,0x60);
            }
            FUN_01bed4e2(local_4a0,&local_940,0x60);
            pppppppiVar16 = (int *******)FUN_01a2ce94(piVar46 + 0x14,pppppppiVar27,pppppppiVar27);
            local_940 = pppppppiVar12;
            local_93c = pppppppiVar25;
            if (piVar46[0x4e] != 0) {
              (**(code **)(piVar46[0x4f] + 0x14))
                        (piVar46[0x4e] + (*(int *)(piVar46[0x4f] + 8) - 1U & 0xfffffff8) + 8,
                         &local_940);
            }
            if (pppppppiVar16 != (int *******)0x0) {
              local_4a0 = (int *******)((uint)local_4a0 & 0xffffff00);
              local_938 = (int *******)&local_4a0;
              local_940 = (int *******)(piVar46 + 2);
              local_93c = pppppppiVar16;
              FUN_019ee860(&local_940);
            }
          }
          *puVar9 = *puVar9 - 1;
          if (*pppppppiVar27 == (int ******)&DAT_000000cc) {
            DataMemoryBarrier(0xb);
            bVar47 = (bool)hasExclusiveAccess(pppppppiVar27);
            if (!bVar47) goto LAB_0194c9e4;
            *pppppppiVar27 = (int ******)&DAT_00000084;
          }
          else {
            ClearExclusiveLocal();
LAB_0194c9e4:
            (*(code *)pppppppiVar27[2][4])(pppppppiVar27);
          }
          pppppppiVar27 = (int *******)param_1[7];
          do {
            ppppppiVar19 = *pppppppiVar27;
            bVar47 = (bool)hasExclusiveAccess(pppppppiVar27);
          } while (!bVar47);
          *pppppppiVar27 = (int ******)((int)ppppppiVar19 + 1);
          if ((int)ppppppiVar19 < 0) goto LAB_0194d774;
          pppppppiVar12 = pppppppiVar27 + 0x11;
          do {
            bVar47 = (bool)hasExclusiveAccess(pppppppiVar12);
          } while (!bVar47);
          *pppppppiVar12 = (int ******)((int)*pppppppiVar12 + 1);
          do {
            do {
              local_1928 = (int *******)DAT_01d50470;
              local_1924 = (int *******)DAT_01d50474;
              ppppiVar30 = (int ****)((int)DAT_01d50470 + 1);
              ppppiVar34 = (int ****)
                           ((int)DAT_01d50474 + (uint)((int ****)0xfffffffe < DAT_01d50470));
              bVar47 = (bool)hasExclusiveAccess(0x1d50470);
            } while (!bVar47);
            bVar47 = DAT_01d50470 == (int ****)0x0;
            bVar1 = DAT_01d50474 == (int ****)0x0;
            DAT_01d50470 = ppppiVar30;
            DAT_01d50474 = ppppiVar34;
          } while (bVar47 && bVar1);
          local_165c = (int *******)local_41;
          local_1654 = local_17c8;
          local_1650 = pppppppiStack_17c4;
          pppppppiStack_164c = pppppppiStack_17c0;
          local_1648 = pppppppiStack_17bc;
          local_1660 = (int *******)&local_1928;
          local_1644 = local_1644 & 0xffffff00;
          local_1658 = pppppppiVar27;
          if ((char)puVar9[0xe] != '\x01') {
            if ((char)puVar9[0xe] == '\x02') {
              uVar29 = 1;
              FUN_0193c71c(&local_1658);
              goto LAB_0194d510;
            }
            FUN_019a2bcc(puVar9,&LAB_019efb68);
            *(undefined1 *)(puVar9 + 0xe) = 1;
          }
          local_1200 = local_1660;
          local_11fc = local_165c;
          local_11f8 = local_1658;
          local_11f4 = local_1654;
          local_11f0 = local_1650;
          pppppppiStack_11ec = pppppppiStack_164c;
          pppppppiStack_11e8 = local_1648;
          uStack_11e4 = local_1644;
          pppppppiVar27 = (int *******)*puVar9;
          if ((int *******)0x7ffffffe < pppppppiVar27) {
                    /* WARNING: Subroutine does not return */
            FUN_0130701c(&DAT_01d2e14c);
          }
          *puVar9 = (uint)((int)pppppppiVar27 + 1);
          local_da0 = local_1660;
          local_d9c = local_165c;
          local_d98 = local_1658;
          local_d94 = local_1654;
          local_d90 = local_1650;
          pppppppiStack_d8c = pppppppiStack_164c;
          pppppppiStack_d88 = local_1648;
          local_d84 = local_1644;
          uVar43 = local_d84;
          if (puVar9[1] == 2) {
            local_d84._0_1_ = (char)local_1644;
            bVar47 = (char)local_d84 == '\0';
            local_d84 = uVar43;
            if (bVar47) {
              FUN_0193c71c(&local_d98);
              pppppppiVar27 = (int *******)(*puVar9 - 1);
            }
            uVar29 = 0;
            *puVar9 = (uint)pppppppiVar27;
LAB_0194d510:
            local_940 = (int *******)CONCAT31(local_940._1_3_,uVar29);
                    /* WARNING: Subroutine does not return */
            FUN_0068d4ec(&local_940,&DAT_01d25ee4);
          }
          pppppppiVar12 = (int *******)*local_1660;
          pppppppiVar25 = (int *******)local_1660[1];
          if ((puVar9[1] & 1) == 0) {
            piVar46 = (int *)puVar9[2];
            do {
              iVar8 = *piVar46;
              bVar47 = (bool)hasExclusiveAccess(piVar46);
            } while (!bVar47);
            *piVar46 = iVar8 + 1;
            if (iVar8 < 0) goto LAB_0194d774;
            piVar44 = (int *)piVar46[0x82];
            if (piVar44 != (int *)0x0) {
              do {
                iVar8 = *piVar44;
                bVar47 = (bool)hasExclusiveAccess(piVar44);
              } while (!bVar47);
              *piVar44 = iVar8 + 1;
              if (iVar8 < 0) goto LAB_0194d774;
              pppppppiVar27 = (int *******)piVar46[0x83];
            }
            *puVar10 = local_1658;
            puVar10[1] = local_1654;
            puVar10[2] = local_1650;
            puVar10[3] = pppppppiStack_164c;
            puVar10[4] = local_1648;
            puVar10[5] = local_1644;
            local_914 = local_4a0;
            pcStack_910 = local_49c;
            pppppppiStack_90c = local_498;
            local_908 = local_494;
            uStack_904 = uStack_490;
            uStack_900 = uStack_48c;
            uStack_8fc = uStack_488;
            *puVar6 = 0;
            puVar6[1] = 0;
            *puVar33 = pppppppiVar12;
            puVar6[5] = pppppppiVar25;
            local_918 = 0;
            local_940 = (int *******)&DAT_000000cc;
            local_93c = (int *******)0x0;
            local_8f8 = 0;
            local_938 = (int *******)&PTR_LAB_01d261fc;
            local_8f4 = 0;
            local_8f0 = 0;
            local_4a0 = (int *******)0x0;
            local_928 = piVar46;
            local_8e8 = piVar44;
            local_8e4 = pppppppiVar27;
            iVar8 = FUN_01be5878(&local_4a0,0x20,0x60);
            pppppppiVar27 = local_4a0;
            if ((iVar8 != 0) || (local_4a0 == (int *******)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(0x20,0x60);
            }
            FUN_01bed4e2(local_4a0,&local_940,0x60);
            iVar8 = FUN_01a2cc10(piVar46 + 0x40,pppppppiVar27,pppppppiVar27);
            local_940 = pppppppiVar12;
            local_93c = pppppppiVar25;
            if (piVar46[0x80] != 0) {
              (**(code **)(piVar46[0x81] + 0x14))
                        (piVar46[0x80] + (*(int *)(piVar46[0x81] + 8) - 1U & 0xfffffff8) + 8,
                         &local_940);
            }
            if (iVar8 != 0) {
              FUN_019dc904(puVar9[2],iVar8);
            }
          }
          else {
            piVar46 = (int *)puVar9[2];
            do {
              iVar8 = *piVar46;
              bVar47 = (bool)hasExclusiveAccess(piVar46);
            } while (!bVar47);
            *piVar46 = iVar8 + 1;
            if (iVar8 < 0) goto LAB_0194d774;
            piVar44 = (int *)piVar46[0x50];
            if (piVar44 != (int *)0x0) {
              do {
                iVar8 = *piVar44;
                bVar47 = (bool)hasExclusiveAccess(piVar44);
              } while (!bVar47);
              *piVar44 = iVar8 + 1;
              if (iVar8 < 0) goto LAB_0194d774;
              local_19a8 = (int *******)piVar46[0x51];
            }
            *puVar10 = local_1658;
            puVar10[1] = local_1654;
            puVar10[2] = local_1650;
            puVar10[3] = pppppppiStack_164c;
            puVar10[4] = local_1648;
            puVar10[5] = local_1644;
            local_914 = local_4a0;
            pcStack_910 = local_49c;
            pppppppiStack_90c = local_498;
            local_908 = local_494;
            uStack_904 = uStack_490;
            uStack_900 = uStack_48c;
            uStack_8fc = uStack_488;
            *puVar6 = 0;
            puVar6[1] = 0;
            local_918 = 0;
            *puVar33 = pppppppiVar12;
            puVar6[5] = pppppppiVar25;
            local_940 = (int *******)&DAT_000000cc;
            local_93c = (int *******)0x0;
            local_938 = (int *******)&PTR_LAB_01d2606c;
            local_8e4 = local_19a8;
            local_8f8 = 0;
            local_8f4 = 0;
            local_8f0 = 0;
            local_4a0 = (int *******)0x0;
            local_928 = piVar46;
            local_8e8 = piVar44;
            iVar8 = FUN_01be5878(&local_4a0,0x20,0x60);
            pppppppiVar27 = local_4a0;
            if ((iVar8 != 0) || (local_4a0 == (int *******)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(0x20,0x60);
            }
            FUN_01bed4e2(local_4a0,&local_940,0x60);
            pppppppiVar16 = (int *******)FUN_01a2ce94(piVar46 + 0x14,pppppppiVar27,pppppppiVar27);
            local_940 = pppppppiVar12;
            local_93c = pppppppiVar25;
            if (piVar46[0x4e] != 0) {
              (**(code **)(piVar46[0x4f] + 0x14))
                        (piVar46[0x4e] + (*(int *)(piVar46[0x4f] + 8) - 1U & 0xfffffff8) + 8,
                         &local_940);
            }
            if (pppppppiVar16 != (int *******)0x0) {
              local_4a0 = (int *******)((uint)local_4a0 & 0xffffff00);
              local_938 = (int *******)&local_4a0;
              local_940 = (int *******)(piVar46 + 2);
              local_93c = pppppppiVar16;
              FUN_019ee860(&local_940);
            }
          }
          pppppppiVar12 = (int *******)&local_17b8;
          *puVar9 = *puVar9 - 1;
          if (*pppppppiVar27 == (int ******)&DAT_000000cc) {
            DataMemoryBarrier(0xb);
            bVar47 = (bool)hasExclusiveAccess(pppppppiVar27);
            if (!bVar47) goto LAB_0194cee4;
            *pppppppiVar27 = (int ******)&DAT_00000084;
          }
          else {
            ClearExclusiveLocal();
LAB_0194cee4:
            (*(code *)pppppppiVar27[2][4])(pppppppiVar27);
          }
          pppppppiVar27 = pppppppiStack_17c0;
          piVar46 = (int *)param_1[4];
          do {
            iVar8 = *piVar46;
            bVar47 = (bool)hasExclusiveAccess(piVar46);
          } while (!bVar47);
          *piVar46 = iVar8 + 1;
          if (iVar8 < 0) goto LAB_0194d774;
          local_17b8 = local_17c8;
          pppppppiStack_17b4 = pppppppiStack_17c4;
          pppppppiStack_17b0 = pppppppiStack_17c0;
          pppppppiStack_17ac = pppppppiStack_17bc;
          local_1674 = (int ******)*piVar18;
          iStack_1670 = param_1[9];
          iStack_166c = param_1[10];
          do {
            do {
              local_1928 = (int *******)DAT_01d50470;
              local_1924 = (int *******)DAT_01d50474;
              ppppiVar30 = (int ****)((int)DAT_01d50470 + 1);
              ppppiVar34 = (int ****)
                           ((int)DAT_01d50474 + (uint)((int ****)0xfffffffe < DAT_01d50470));
              bVar47 = (bool)hasExclusiveAccess(0x1d50470);
            } while (!bVar47);
            bVar47 = DAT_01d50470 == (int ****)0x0;
            bVar1 = DAT_01d50474 == (int ****)0x0;
            DAT_01d50470 = ppppiVar30;
            DAT_01d50474 = ppppiVar34;
          } while (bVar47 && bVar1);
          FUN_01bed4e2(&local_1660,pppppppiVar12,0x150);
          local_14d4 = (int ******)local_41;
          local_14d8 = (int *******)&local_1928;
          local_150b = 0;
          local_1510 = piVar46;
          if ((char)puVar9[0xe] != '\x01') {
            if ((char)puVar9[0xe] == '\x02') {
              uVar29 = 1;
              FUN_0193f6f4(&local_1660);
              goto LAB_0194d53c;
            }
            FUN_019a2bcc(puVar9,&LAB_019efb68);
            *(undefined1 *)(puVar9 + 0xe) = 1;
          }
          FUN_01bed4e2(&local_1200,&local_1660,400);
          if (0x7ffffffe < *puVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_0130701c(&DAT_01d2e14c);
          }
          *puVar9 = *puVar9 + 1;
          uVar43 = puVar9[1];
          FUN_01bed4e2(&local_da0,&local_1660,400);
          if (uVar43 == 2) {
            FUN_0193f6f4(&local_da0);
            uVar29 = 0;
            *puVar9 = *puVar9 - 1;
LAB_0194d53c:
            local_940 = (int *******)CONCAT31(local_940._1_3_,uVar29);
                    /* WARNING: Subroutine does not return */
            FUN_0068d4ec(&local_940,&DAT_01d25ef4);
          }
          pppppppiVar25 = (int *******)*local_c18;
          local_19a4 = (int *******)local_c18[1];
          if ((uVar43 & 1) == 0) {
            piVar46 = (int *)puVar9[2];
            do {
              iVar8 = *piVar46;
              bVar47 = (bool)hasExclusiveAccess(piVar46);
            } while (!bVar47);
            *piVar46 = iVar8 + 1;
            if (iVar8 < 0) goto LAB_0194d774;
            piVar44 = (int *)piVar46[0x82];
            if (piVar44 != (int *)0x0) {
              do {
                iVar8 = *piVar44;
                bVar47 = (bool)hasExclusiveAccess(piVar44);
              } while (!bVar47);
              *piVar44 = iVar8 + 1;
              if (iVar8 < 0) goto LAB_0194d774;
              pppppppiVar12 = (int *******)piVar46[0x83];
            }
            FUN_01bed4e2(puVar10,&local_1660,0x188);
            FUN_01bed4e2(&local_914,&local_4a0,0x18c);
            *puVar6 = 0;
            puVar6[1] = 0;
            local_918 = 0;
            local_93c = (int *******)0x0;
            *puVar33 = pppppppiVar25;
            puVar6[5] = local_19a4;
            local_940 = (int *******)&DAT_000000cc;
            local_788 = 0;
            local_938 = (int *******)&PTR_LAB_01d26134;
            local_784 = 0;
            local_780 = 0;
            local_4a0 = (int *******)0x0;
            local_928 = piVar46;
            local_778 = piVar44;
            local_774 = pppppppiVar12;
            iVar8 = FUN_01be5878(&local_4a0,0x20,0x1e0);
            pppppppiVar27 = local_4a0;
            if ((iVar8 != 0) || (local_4a0 == (int *******)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(0x20,0x1e0);
            }
            FUN_01bed4e2(local_4a0,&local_940,0x1e0);
            iVar8 = FUN_01a2cc10(piVar46 + 0x40,pppppppiVar27,pppppppiVar27);
            local_940 = pppppppiVar25;
            local_93c = local_19a4;
            if (piVar46[0x80] != 0) {
              (**(code **)(piVar46[0x81] + 0x14))
                        (piVar46[0x80] + (*(int *)(piVar46[0x81] + 8) - 1U & 0xfffffff8) + 8,
                         &local_940);
            }
            if (iVar8 != 0) {
              FUN_019dc904(puVar9[2],iVar8);
            }
          }
          else {
            piVar46 = (int *)puVar9[2];
            local_19a8 = (int *******)(piVar46 + 2);
            do {
              iVar8 = *piVar46;
              bVar47 = (bool)hasExclusiveAccess(piVar46);
            } while (!bVar47);
            *piVar46 = iVar8 + 1;
            if (iVar8 < 0) goto LAB_0194d774;
            piVar44 = (int *)piVar46[0x50];
            if (piVar44 != (int *)0x0) {
              do {
                iVar8 = *piVar44;
                bVar47 = (bool)hasExclusiveAccess(piVar44);
              } while (!bVar47);
              *piVar44 = iVar8 + 1;
              if (iVar8 < 0) goto LAB_0194d774;
              pppppppiVar27 = (int *******)piVar46[0x51];
            }
            FUN_01bed4e2(puVar10,&local_1660,0x188);
            FUN_01bed4e2(&local_914,&local_4a0,0x18c);
            *puVar6 = 0;
            puVar6[1] = 0;
            local_918 = 0;
            local_93c = (int *******)0x0;
            *puVar33 = pppppppiVar25;
            puVar6[5] = local_19a4;
            local_940 = (int *******)&DAT_000000cc;
            local_788 = 0;
            local_938 = (int *******)&PTR_LAB_01d2601c;
            local_784 = 0;
            local_780 = 0;
            local_4a0 = (int *******)0x0;
            local_928 = piVar46;
            local_778 = piVar44;
            local_774 = pppppppiVar27;
            iVar8 = FUN_01be5878(&local_4a0,0x20,0x1e0);
            pppppppiVar27 = local_4a0;
            if ((iVar8 != 0) || (local_4a0 == (int *******)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(0x20,0x1e0);
            }
            FUN_01bed4e2(local_4a0,&local_940,0x1e0);
            pppppppiVar12 = (int *******)FUN_01a2ce94(piVar46 + 0x14,pppppppiVar27,pppppppiVar27);
            local_940 = pppppppiVar25;
            local_93c = local_19a4;
            if (piVar46[0x4e] != 0) {
              (**(code **)(piVar46[0x4f] + 0x14))
                        (piVar46[0x4e] + (*(int *)(piVar46[0x4f] + 8) - 1U & 0xfffffff8) + 8,
                         &local_940);
            }
            if (pppppppiVar12 != (int *******)0x0) {
              local_4a0 = (int *******)((uint)local_4a0 & 0xffffff00);
              local_938 = (int *******)&local_4a0;
              local_940 = local_19a8;
              local_93c = pppppppiVar12;
              FUN_019ee860(&local_940);
            }
          }
          *puVar9 = *puVar9 - 1;
          if (*pppppppiVar27 == (int ******)&DAT_000000cc) {
            DataMemoryBarrier(0xb);
            bVar47 = (bool)hasExclusiveAccess(pppppppiVar27);
            if (!bVar47) goto LAB_0194d398;
            *pppppppiVar27 = (int ******)&DAT_00000084;
          }
          else {
            ClearExclusiveLocal();
LAB_0194d398:
            (*(code *)pppppppiVar27[2][4])(pppppppiVar27);
          }
        }
LAB_0194d3ac:
        FUN_0132b958(pppppppiVar41,pppppppiVar11,1,0x22);
        FUN_0134c054(pppppppiVar3,pppppppiVar4,8,0x38);
      }
    }
    piVar18 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar18;
      bVar47 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar47);
    *piVar18 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[2]);
    }
    if ((*param_1 == 1) && (*(char *)((int)param_1 + 0x39) != '\0')) {
      FUN_0193da30(param_1 + 1);
    }
    piVar18 = (int *)param_1[3];
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar18;
      bVar47 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar47);
    *piVar18 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[3]);
    }
    piVar18 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar18;
      bVar47 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar47);
    *piVar18 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(param_1[4]);
    }
    FUN_0193c71c(param_1 + 5);
    FUN_0193c71c(param_1 + 6);
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d25e74);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d25e74);
  case '\x03':
switchD_0194ab68_caseD_3:
    cVar5 = FUN_0195e1d8(param_1 + 0xf,*param_2);
    if (cVar5 == '\x03') {
      uVar7 = 1;
      uVar29 = 3;
      goto LAB_0194e6d4;
    }
    FUN_0193da30(param_1 + 0xf);
    if (cVar5 != '\x02') {
      iVar8 = param_1[2];
      goto LAB_0194ad10;
    }
    if ((DAT_01d50f88 < 5) &&
       (((DAT_01d50648 - 1 < 2 ||
         ((DAT_01d50648 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d50640), cVar5 != '\0')))) &&
        (iVar8 = FUN_01aaa278(DAT_01d50640), iVar8 != 0)))) {
      local_1658 = (int *******)(DAT_01d50640 + 0x1c);
      local_1200 = (int *******)*local_1658;
      local_11fc = *(int ********)(DAT_01d50640 + 0x20);
      if (local_11fc == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25e84);
      }
      local_11f8 = *(int ********)(DAT_01d50640 + 0x24);
      local_11f4 = *(int ********)(DAT_01d50640 + 0x28);
      local_11f0 = (int *******)0x0;
      local_4a0 = (int *******)0x523dd4;
      local_49c = (code *)0x4b;
      if (local_11fc == (int *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25e84);
      }
      local_93c = (int *******)&local_4a0;
      local_165c = (int *******)0x2;
      local_940 = (int *******)&local_1200;
      local_930 = (int *******)&local_1928;
      local_934 = (int *******)&local_da0;
      local_d90 = (int *******)&DAT_00000001;
      local_938 = (int *******)&DAT_01d2ea4c;
      local_92c = &DAT_01d25e94;
      local_1928 = (int *******)local_41;
      local_1660 = (int *******)&local_940;
      local_da0 = local_1200;
      local_d9c = local_11fc;
      local_d98 = local_11f8;
      local_d94 = local_11f4;
      FUN_0194e700(&local_1660);
    }
    else {
      iVar8 = DAT_01d50640;
      if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
        local_1954 = *(int ********)(DAT_01d50640 + 0x14);
        local_1950 = *(int ********)(DAT_01d50640 + 0x18);
        local_1958 = (int *******)&DAT_00000001;
        DataMemoryBarrier(0xb);
        puVar6 = DAT_01d4edc8;
        pcVar2 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar6 = &DAT_01cfc5e0;
          pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar17 = (*(code *)puVar6[3])(pcVar2,&local_1958);
        if (iVar17 != 0) {
          local_498 = (int *******)(DAT_01d50640 + 0x1c);
          local_1200 = (int *******)*local_498;
          local_11fc = *(int ********)(DAT_01d50640 + 0x20);
          if (local_11fc == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25e84);
          }
          local_11f8 = *(int ********)(DAT_01d50640 + 0x24);
          local_11f4 = *(int ********)(DAT_01d50640 + 0x28);
          local_11f0 = (int *******)0x0;
          local_1924 = (int *******)&DAT_0000004b;
          local_1928 = (int *******)0x523dd4;
          if (local_11fc == (int *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25e84);
          }
          local_93c = (int *******)&local_1928;
          local_940 = (int *******)&local_1200;
          local_d90 = (int *******)&DAT_00000001;
          local_49c = (code *)0x2;
          local_92c = &DAT_01d25e94;
          local_938 = (int *******)&DAT_01d2ea4c;
          local_934 = (int *******)&local_da0;
          local_930 = &local_1668;
          local_1668 = (int ******)local_41;
          local_1660 = local_1958;
          local_165c = local_1954;
          local_1658 = local_1950;
          local_da0 = local_1200;
          local_d9c = local_11fc;
          local_d98 = local_11f8;
          local_d94 = local_11f4;
          local_4a0 = (int *******)&local_940;
          FUN_01aaa328(iVar8,pcVar2,puVar6[4],&local_1660,&local_4a0);
        }
      }
    }
    piVar18 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar18;
      bVar47 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar47);
    *piVar18 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[2]);
    }
    piVar18 = (int *)param_1[3];
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar18;
      bVar47 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar47);
    *piVar18 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[3]);
    }
    piVar18 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar18;
      bVar47 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar47);
    *piVar18 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(param_1[4]);
    }
    FUN_0193c71c(param_1 + 5);
    FUN_0193c71c(param_1 + 6);
    break;
  case '\x04':
    goto switchD_0194ab68_caseD_4;
  case '\x05':
    goto switchD_0194ab68_caseD_5;
  case '\x06':
    goto switchD_0194ab68_caseD_6;
  case '\a':
    uVar48 = *(undefined8 *)(param_1 + 0xf);
    goto LAB_0194b080;
  }
  FUN_0193c71c(param_1 + 7);
  uVar7 = 0;
  uVar29 = 1;
LAB_0194e6d4:
  *(undefined1 *)(param_1 + 0xe) = uVar29;
  return uVar7;
}

