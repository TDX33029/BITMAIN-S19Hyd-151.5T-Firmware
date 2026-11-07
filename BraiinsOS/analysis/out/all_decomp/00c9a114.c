// FUN_00c9a114 @ 00c9a114 size=8960 calls_out=37 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

undefined4 FUN_00c9a114(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint ****ppppuVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 uVar12;
  int iVar13;
  uint ****ppppuVar14;
  uint *****pppppuVar15;
  uint uVar16;
  uint *****pppppuVar17;
  uint ***pppuVar18;
  int iVar19;
  uint ***pppuVar20;
  uint *puVar21;
  undefined4 uVar22;
  int *piVar23;
  uint uVar24;
  byte bVar25;
  int *piVar26;
  int iVar27;
  uint *****pppppuVar28;
  undefined *puVar29;
  undefined4 uVar30;
  uint *****pppppuVar31;
  byte *pbVar32;
  char *pcVar33;
  bool bVar34;
  float fVar35;
  float fVar36;
  ulonglong uVar37;
  undefined8 uVar38;
  int local_288;
  int local_280;
  uint *****local_27c;
  uint *****local_278;
  uint *****local_270;
  uint *****local_26c;
  uint ****local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  uint *****local_25c;
  uint *****local_258;
  uint *****local_254;
  uint *****local_250;
  uint *****local_248;
  uint *****local_244;
  uint *****local_240;
  uint local_23c;
  uint *****local_238;
  int local_234;
  uint *****local_ac;
  uint *****local_a8;
  undefined4 *local_a4;
  uint *****local_a0;
  uint *****local_9c;
  uint *****local_98;
  uint *****local_94;
  uint *****local_90;
  uint *****local_8c;
  undefined *local_88;
  undefined4 local_84;
  undefined4 local_80;
  uint *****local_40;
  uint *****local_3c;
  uint *****local_38;
  
  uVar7 = (&switchD_00c9a13c::switchdataD_00c9a140)[*(byte *)(param_1 + 0x364)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_1 + 0x364)) {
  case 0:
    *(undefined1 *)(param_1 + 0x365) = 1;
    FUN_016dd1aa(param_1 + 0x198,param_1,0x198);
    *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(param_1 + 0x350);
    FUN_015f3b0c(&local_248,1);
    *(undefined4 *)(param_1 + 0x330) = 1;
    *(undefined4 *)(param_1 + 0x334) = 0;
    *(uint ******)(param_1 + 0x340) = local_248;
    *(uint ******)(param_1 + 0x344) = local_244;
    *(undefined4 *)(param_1 + 0x338) = 0;
    *(uint ******)(param_1 + 0x348) = local_240;
LAB_00c9bbe4:
    do {
      pbVar32 = (byte *)(param_1 + 0x368);
      *pbVar32 = 0;
      iVar13 = param_1 + 0x370;
      *(undefined1 *)(param_1 + 0x3c8) = 0;
      uVar7 = param_1 + 0x330;
      *(byte **)(param_1 + 0x3d8) = pbVar32;
      *(int *)(param_1 + 0x3d0) = param_1 + 0x354;
      *(uint *)(param_1 + 0x3c0) = uVar7;
      *(int *)(param_1 + 0x3dc) = iVar13;
LAB_00c9a84c:
      uVar38 = thunk_FUN_016de0ee(uVar7,0x40);
      iVar27 = (int)uVar38 + (int)((ulonglong)uVar38 >> 0x20);
      if (*(char *)(iVar27 + 0x38) != '\x01') {
        if (*(char *)(iVar27 + 0x38) == '\x02') {
                    /* WARNING: Subroutine does not return */
          FUN_015f853c(&DAT_018ae900);
        }
        FUN_015e8e6c(iVar27,FUN_00bacf28);
        *(undefined1 *)(iVar27 + 0x38) = 1;
      }
      cVar6 = *(char *)(iVar27 + 0x30);
      bVar34 = cVar6 == '\x01';
      if (bVar34) {
        cVar6 = *(char *)(iVar27 + 0x31);
      }
      if (bVar34 && cVar6 == '\0') {
        FUN_016455a4(*param_2,param_2[1]);
LAB_00c9b6fc:
        uVar9 = 1;
        uVar12 = 3;
        goto LAB_00c9a764;
      }
      if ((*(uint *)(iVar27 + 0x24) & 1) == 0) {
        uVar38 = FUN_0164e918();
        if ((uint)uVar38 < 2) {
          uVar38 = CONCAT44((int)((ulonglong)uVar38 >> 0x20),1);
        }
      }
      else {
        uVar38 = CONCAT44(*(undefined4 *)(iVar27 + 0x28),*(undefined4 *)(iVar27 + 0x2c));
      }
      uVar7 = (uint)((ulonglong)uVar38 >> 0x20);
      uVar16 = (uint)uVar38;
      uVar7 = uVar7 ^ uVar7 << 0x11;
      *(uint *)(iVar27 + 0x28) = uVar16;
      *(undefined4 *)(iVar27 + 0x24) = 1;
      uVar7 = uVar16 >> 0x10 ^ uVar7 >> 7 ^ uVar16 ^ uVar7;
      *(uint *)(iVar27 + 0x2c) = uVar7;
      bVar25 = *pbVar32;
      uVar10 = (uint)bVar25;
      if ((int)(uVar7 + uVar16) < 0) {
        uVar7 = (uVar10 & 2) >> 1;
        if ((bVar25 & 2) == 0) {
          FUN_00cf4aac(&local_248,*(undefined4 *)(iVar13 + 0x60),param_2);
          if ((char)local_248 == '\a') {
            uVar10 = (uint)*pbVar32;
            goto LAB_00c9a92c;
          }
LAB_00c9ac34:
          iVar27 = 1;
          local_278 = local_248;
          bVar25 = 2;
          local_26c = local_244;
          local_270 = local_240;
        }
        else {
LAB_00c9a92c:
          if ((uVar10 & 1) != 0) goto LAB_00c9ac58;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)(iVar13 + 0x58)) {
          case 0:
            iVar27 = *(int *)(iVar13 + 0x50);
            *(int *)(iVar13 + 0x54) = iVar27;
            pppppuVar31 = *(uint ******)(iVar27 + 0x10);
            pppppuVar28 = *(uint ******)(iVar27 + 0x14);
            puVar29 = *(undefined **)(iVar27 + 0x18);
            FUN_015f3b0c(&local_248,1);
            local_40 = local_248;
            local_3c = local_244;
            local_38 = local_240;
            local_90 = pppppuVar31;
            local_8c = pppppuVar28;
            local_88 = puVar29;
            FUN_015f3c24(&local_248,&local_40,&local_90);
            puVar8 = *(undefined4 **)(iVar13 + 0x54);
            pppppuVar15 = (uint *****)*puVar8;
            uVar10 = puVar8[1];
            pppppuVar28 = local_238;
            uVar7 = local_23c;
            pppppuVar31 = local_240;
            if (((uint)local_248 & 1) != 0) {
              pppppuVar31 = (uint *****)0x0;
              uVar7 = 0;
              pppppuVar28 = (uint *****)0x0;
            }
            if (uVar7 < uVar10 || uVar10 - uVar7 < (uint)(pppppuVar31 <= pppppuVar15)) {
              uVar16 = (int)pppppuVar15 - (int)pppppuVar31;
              pppppuVar17 = (uint *****)puVar8[2];
              uVar10 = uVar10 - (uVar7 + (pppppuVar15 < pppppuVar31));
              if (pppppuVar17 < pppppuVar28) {
                if (uVar16 == 0 && uVar10 == 0) goto LAB_00c9ac84;
                bVar34 = uVar16 == 0;
                uVar16 = uVar16 - 1;
                pppppuVar17 = pppppuVar17 + 250000000;
                uVar10 = uVar10 - bVar34;
              }
              uVar7 = (int)pppppuVar17 - (int)pppppuVar28;
              if (999999999 < uVar7) {
                if ((uVar16 & uVar10) == 0xffffffff) {
LAB_00c9c59c:
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74b8(&DAT_00414854,0x19,&DAT_018aded0);
                }
                bVar34 = 0xfffffffe < uVar16;
                uVar16 = uVar16 + 1;
                uVar7 = uVar7 + 0xc4653600;
                uVar10 = uVar10 + bVar34;
              }
              FUN_01656eb8(&local_248,&DAT_01876f7c,uVar16,uVar10,uVar7,&DAT_01876f7c);
              FUN_016dd1aa(&local_90,&local_248,0x50);
              FUN_016dd1aa(iVar13,&local_90,0x50);
              goto switchD_00c9a940_caseD_3;
            }
LAB_00c9ac84:
            pppppuVar31 = (uint *****)puVar8[4];
            pppppuVar28 = (uint *****)puVar8[5];
            puVar29 = (undefined *)puVar8[6];
            FUN_015f3b0c(&local_248,1);
            local_40 = local_248;
            local_3c = local_244;
            local_38 = local_240;
            local_90 = pppppuVar31;
            local_8c = pppppuVar28;
            local_88 = puVar29;
            FUN_015f3c24(&local_248,&local_40,&local_90);
            puVar8 = *(undefined4 **)(iVar13 + 0x54);
            pppppuVar31 = (uint *****)*puVar8;
            bVar34 = ((uint)local_248 & 1) != 0;
            uVar7 = local_23c;
            if (bVar34) {
              uVar7 = 0;
            }
            uVar10 = puVar8[1];
            pppppuVar15 = local_240;
            pppppuVar28 = local_238;
            if (bVar34) {
              pppppuVar28 = (uint *****)0x0;
              pppppuVar15 = (uint *****)0x0;
            }
            local_26c = (uint *****)0x0;
            local_270 = (uint *****)0x0;
            local_27c = (uint *****)0x0;
            if (uVar10 < uVar7 || uVar7 - uVar10 < (uint)(pppppuVar31 <= pppppuVar15)) {
              pppppuVar17 = (uint *****)((int)pppppuVar15 - (int)pppppuVar31);
              pppppuVar31 = (uint *****)(uVar7 - (uVar10 + (pppppuVar15 < pppppuVar31)));
              if (pppppuVar28 < (uint *****)puVar8[2]) {
                local_26c = (uint *****)0x0;
                local_270 = (uint *****)0x0;
                local_27c = (uint *****)0x0;
                if (pppppuVar17 == (uint *****)0x0 && pppppuVar31 == (uint *****)0x0)
                goto LAB_00c9ad9c;
                bVar34 = pppppuVar17 == (uint *****)0x0;
                pppppuVar17 = (uint *****)((int)pppppuVar17 + -1);
                pppppuVar28 = pppppuVar28 + 250000000;
                pppppuVar31 = (uint *****)((int)pppppuVar31 - (uint)bVar34);
              }
              local_27c = (uint *****)((int)pppppuVar28 - (int)puVar8[2]);
              if (local_27c < (uint *****)0x3b9aca00) {
                local_270 = pppppuVar31;
                local_26c = pppppuVar17;
              }
              else {
                if (((uint)pppppuVar17 & (uint)pppppuVar31) == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74b8(&DAT_00414854,0x19,&DAT_018aded0);
                }
                local_27c = local_27c + -250000000;
                local_26c = (uint *****)((int)pppppuVar17 + 1);
                local_270 = (uint *****)
                            ((int)pppppuVar31 + (uint)((uint *****)0xfffffffe < pppppuVar17));
              }
            }
LAB_00c9ad9c:
            bVar25 = 1;
            FUN_015f3b0c(&local_248,1);
            iVar19 = *(int *)(iVar13 + 0x54);
            iVar27 = 0;
            *(uint ******)(iVar19 + 0x10) = local_248;
            *(uint ******)(iVar19 + 0x14) = local_244;
            *(uint ******)(iVar19 + 0x18) = local_240;
            *(undefined1 *)(iVar13 + 0x58) = 1;
            break;
          case 1:
switchD_00c9a940_caseD_1:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7ca0(&DAT_01876f8c);
          case 2:
switchD_00c9a940_caseD_2:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7cc0(&DAT_01876f8c);
          case 3:
switchD_00c9a940_caseD_3:
            iVar27 = FUN_01657fc4(iVar13,param_2);
            if (iVar27 == 0) goto LAB_00c9ac74;
            uVar9 = 1;
            uVar12 = 3;
            *(undefined1 *)(iVar13 + 0x58) = 3;
            goto LAB_00c9a764;
          }
        }
        *pbVar32 = *pbVar32 | bVar25;
        cVar6 = *(char *)(param_1 + 0x3c8);
      }
      else {
        uVar7 = uVar10 & 1;
        if ((bVar25 & 1) == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)(iVar13 + 0x58)) {
          case 0:
            iVar27 = *(int *)(iVar13 + 0x50);
            *(int *)(iVar13 + 0x54) = iVar27;
            pppppuVar31 = *(uint ******)(iVar27 + 0x10);
            pppppuVar28 = *(uint ******)(iVar27 + 0x14);
            puVar29 = *(undefined **)(iVar27 + 0x18);
            FUN_015f3b0c(&local_248,1);
            local_40 = local_248;
            local_3c = local_244;
            local_38 = local_240;
            local_90 = pppppuVar31;
            local_8c = pppppuVar28;
            local_88 = puVar29;
            FUN_015f3c24(&local_248,&local_40,&local_90);
            puVar8 = *(undefined4 **)(iVar13 + 0x54);
            pppppuVar15 = (uint *****)*puVar8;
            uVar16 = puVar8[1];
            pppppuVar28 = local_238;
            uVar10 = local_23c;
            pppppuVar31 = local_240;
            if (((uint)local_248 & 1) != 0) {
              pppppuVar31 = (uint *****)0x0;
              uVar10 = 0;
              pppppuVar28 = (uint *****)0x0;
            }
            if (uVar10 < uVar16 || uVar16 - uVar10 < (uint)(pppppuVar31 <= pppppuVar15)) {
              uVar24 = (int)pppppuVar15 - (int)pppppuVar31;
              pppppuVar17 = (uint *****)puVar8[2];
              uVar16 = uVar16 - (uVar10 + (pppppuVar15 < pppppuVar31));
              if (pppppuVar17 < pppppuVar28) {
                if (uVar24 == 0 && uVar16 == 0) goto LAB_00c9ac84;
                bVar34 = uVar24 == 0;
                uVar24 = uVar24 - 1;
                pppppuVar17 = pppppuVar17 + 250000000;
                uVar16 = uVar16 - bVar34;
              }
              uVar10 = (int)pppppuVar17 - (int)pppppuVar28;
              if (999999999 < uVar10) {
                if ((uVar24 & uVar16) == 0xffffffff) goto LAB_00c9c59c;
                bVar34 = 0xfffffffe < uVar24;
                uVar24 = uVar24 + 1;
                uVar10 = uVar10 + 0xc4653600;
                uVar16 = uVar16 + bVar34;
              }
              FUN_01656eb8(&local_248,&DAT_01876f7c,uVar24,uVar16,uVar10,&DAT_01876f7c);
              FUN_016dd1aa(&local_90,&local_248,0x50);
              FUN_016dd1aa(iVar13,&local_90,0x50);
              goto switchD_00c9aab0_caseD_3;
            }
            goto LAB_00c9ac84;
          case 1:
            goto switchD_00c9a940_caseD_1;
          case 2:
            goto switchD_00c9a940_caseD_2;
          case 3:
switchD_00c9aab0_caseD_3:
            iVar27 = FUN_01657fc4(iVar13,param_2);
            if (iVar27 != 0) {
              *(undefined1 *)(iVar13 + 0x58) = 3;
              uVar10 = (uint)*pbVar32;
              goto LAB_00c9ac10;
            }
          }
LAB_00c9ac74:
          FUN_00a07b4c(iVar13);
          puVar8 = *(undefined4 **)(iVar13 + 0x54);
          goto LAB_00c9ac84;
        }
LAB_00c9ac10:
        if ((uVar10 & 2) == 0) {
          FUN_00cf4aac(&local_248,*(undefined4 *)(iVar13 + 0x60),param_2);
          if ((char)local_248 != '\a') goto LAB_00c9ac34;
          goto LAB_00c9b6fc;
        }
LAB_00c9ac58:
        iVar27 = 2;
        if (uVar7 != 1) goto LAB_00c9b6fc;
        cVar6 = *(char *)(param_1 + 0x3c8);
      }
      if (cVar6 == '\x03') {
        FUN_00a07b4c(param_1 + 0x370);
      }
      if (iVar27 != 0) {
        if (iVar27 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478("all branches are disabled and there is no else branch",0x6b,&DAT_018759b8);
        }
        if (((uint)local_278 & 0xff) == 6) {
          uVar9 = 0x80000001;
        }
        else {
          uVar9 = 0x80000000;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((uint)local_278 & 0xff) {
          case 0:
            local_25c = local_26c;
            uVar10 = FUN_00c4fb58(*(undefined4 *)(param_1 + 0x2d8),*(undefined4 *)(param_1 + 0x2dc),
                                  *(undefined4 *)(param_1 + 0x2e0),*(undefined4 *)(param_1 + 0x2e4),
                                  local_26c);
            piVar26 = (int *)(param_1 + 0x2c8);
            local_288 = 0;
            uVar7 = uVar10;
            do {
              uVar7 = *(uint *)(param_1 + 0x2cc) & uVar7;
              uVar24 = *(uint *)(*piVar26 + uVar7);
              uVar16 = uVar24 ^ (uVar10 >> 0x19) * 0x1010101;
              uVar16 = ~uVar16 & 0x80808080 & uVar16 + 0xfefefeff;
              while (uVar16 != 0) {
                uVar11 = uVar16 >> 8;
                uVar3 = uVar16 >> 0x10;
                uVar4 = uVar16 >> 0x18;
                uVar5 = uVar16 << 0x18;
                uVar16 = uVar16 - 1 & uVar16;
                if (*(uint ******)
                     (*piVar26 + -0xd8 +
                     (uVar7 + ((uint)LZCOUNT(uVar5 | (uVar11 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 |
                                             uVar4) >> 3) & *(uint *)(param_1 + 0x2cc)) * -0xd8) ==
                    local_26c) {
                  if ((3 < DAT_018d9130) || (DAT_018d9ea8 == '\0')) goto LAB_00c9bbe4;
                  if (DAT_018d9ea8 == '\x01') {
LAB_00c9b47c:
                    DataMemoryBarrier(0xb);
                    puVar29 = &DAT_018ae394;
                    pcVar33 = s_SetGloba_00414c05;
                    if ((DAT_018dd984 == 2) &&
                       (pcVar33 = DAT_018daa74, puVar29 = DAT_018daa78, DAT_018daa70 != 0)) {
                      pcVar33 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                    }
                    iVar13 = (**(code **)(puVar29 + 0x14))(pcVar33,DAT_018d9ea0);
                    if (iVar13 == 0) goto LAB_00c9bbe4;
                  }
                  else if (DAT_018d9ea8 != '\x02') {
                    cVar6 = FUN_0169ac90(&DAT_018d9ea0);
                    if (cVar6 == '\0') goto LAB_00c9bbe4;
                    if (cVar6 != '\x02') goto LAB_00c9b47c;
                  }
                  if (*(uint ******)(DAT_018d9ea0 + 0x20) == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01875968);
                  }
                  local_3c = (uint *****)&local_98;
                  local_a4 = (undefined4 *)(DAT_018d9ea0 + 0x1c);
                  local_90 = (uint *****)*local_a4;
                  local_40 = (uint *****)&local_90;
                  local_88 = *(undefined **)(DAT_018d9ea0 + 0x24);
                  local_84 = *(undefined4 *)(DAT_018d9ea0 + 0x28);
                  local_ac = (uint *****)&local_40;
                  local_94 = (uint *****)&local_258;
                  local_80 = 0;
                  puVar29 = &DAT_018ae394;
                  local_a8 = (uint *****)&DAT_00000001;
                  local_38 = (uint *****)&DAT_018abb78;
                  local_254 = (uint *****)&DAT_00f5c97c;
                  local_98 = (uint *****)&DAT_00578d47;
                  local_258 = (uint *****)&local_25c;
                  local_244 = (uint *****)0x0;
                  local_248 = (uint *****)&DAT_00000001;
                  local_238 = (uint *****)&local_ac;
                  DataMemoryBarrier(0xb);
                  pcVar33 = s_SetGloba_00414c05;
                  if ((DAT_018dd984 == 2) &&
                     (pcVar33 = DAT_018daa74, puVar29 = DAT_018daa78, DAT_018daa70 != 0)) {
                    pcVar33 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                  }
                  local_234 = DAT_018d9ea0;
                  local_8c = *(uint ******)(DAT_018d9ea0 + 0x20);
                  iVar13 = (**(code **)(puVar29 + 0x28))(pcVar33,&local_248);
                  if (iVar13 != 0) {
                    (**(code **)(puVar29 + 0x2c))(pcVar33,&local_248);
                  }
                  goto LAB_00c9bbe4;
                }
              }
              if ((uVar24 & 0x80808080 & uVar24 << 1) != 0) goto LAB_00c9c338;
              local_288 = local_288 + 4;
              uVar7 = uVar7 + local_288;
            } while( true );
          case 1:
            local_a0 = local_26c;
            if (*(int *)(param_1 + 0x2d4) != 0) {
              uVar10 = FUN_00c4fb58(*(undefined4 *)(param_1 + 0x2d8),
                                    *(undefined4 *)(param_1 + 0x2dc),
                                    *(undefined4 *)(param_1 + 0x2e0),
                                    *(undefined4 *)(param_1 + 0x2e4),local_26c);
              uVar7 = uVar10 >> 0x19;
              iVar13 = *(int *)(param_1 + 0x2c8);
              local_280 = 0;
LAB_00c9b214:
              uVar10 = *(uint *)(param_1 + 0x2cc) & uVar10;
              uVar16 = *(uint *)(iVar13 + uVar10);
              uVar24 = uVar16 ^ uVar7 * 0x1010101;
              uVar24 = ~uVar24 & 0x80808080 & uVar24 + 0xfefefeff;
              do {
                if (uVar24 == 0) goto LAB_00c9b274;
                uVar11 = uVar24 >> 8;
                uVar3 = uVar24 >> 0x10;
                uVar4 = uVar24 >> 0x18;
                uVar5 = uVar24 << 0x18;
                uVar24 = uVar24 - 1 & uVar24;
                uVar11 = uVar10 + ((uint)LZCOUNT(uVar5 | (uVar11 & 0xff) << 0x10 |
                                                 (uVar3 & 0xff) << 8 | uVar4) >> 3) &
                         *(uint *)(param_1 + 0x2cc);
              } while (*(uint ******)(iVar13 + -0xd8 + uVar11 * -0xd8) != local_26c);
              FUN_015f3b0c(&local_248,1);
              iVar13 = uVar11 * -0xd8 + iVar13;
              uVar9 = 2;
              uVar7 = *(uint *)(iVar13 + -0x70);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch((uint)local_278 >> 8 & 0xff) {
              case 0:
                uVar9 = 3;
                uVar22 = 0;
                if (uVar7 == 2) {
LAB_00c9c0c4:
                  *(undefined4 *)(iVar13 + -0x70) = uVar22;
                  *(undefined **)(iVar13 + -0x6c) = &DAT_0034963f;
                  *(uint ******)(iVar13 + -0x68) = local_248;
                  *(uint ******)(iVar13 + -100) = local_244;
                  *(uint ******)(iVar13 + -0x60) = local_240;
                  goto LAB_00c9bbe4;
                }
                break;
              case 1:
                uVar9 = 3;
                uVar22 = 1;
                if (uVar7 < 2) goto LAB_00c9c0c4;
                break;
              case 2:
                uVar9 = 3;
                uVar22 = 0;
                if (uVar7 == 0) goto LAB_00c9c0c4;
              }
              *(undefined4 *)(iVar13 + -0x70) = uVar9;
              *(undefined **)(iVar13 + -0x6c) = &DAT_0034963f;
              *(undefined4 *)(iVar13 + -0x68) = 0x14;
              *(undefined4 *)(iVar13 + -100) = 0;
              *(uint ******)(iVar13 + -0x60) = local_240;
              FUN_015f3b0c(&local_248,1);
              pppppuVar15 = local_240;
              pppppuVar28 = local_244;
              pppppuVar31 = local_248;
              piVar26 = *(int **)(iVar13 + -0x38);
              if (piVar26 != (int *)0x0) {
                DataMemoryBarrier(0xb);
                do {
                  iVar27 = *piVar26;
                  bVar34 = (bool)hasExclusiveAccess(piVar26);
                } while (!bVar34);
                *piVar26 = iVar27 + -1;
                if (iVar27 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_009ba06c(*(undefined4 *)(iVar13 + -0x38));
                }
              }
              *(undefined4 *)(iVar13 + -0x38) = 0;
              *(uint ******)(iVar13 + -0x48) = pppppuVar31;
              *(uint ******)(iVar13 + -0x44) = pppppuVar28;
              *(uint ******)(iVar13 + -0x40) = pppppuVar15;
              goto LAB_00c9bbe4;
            }
LAB_00c9b714:
            if ((DAT_018d9130 < 4) && (DAT_018d9eb4 != '\0')) {
              if (DAT_018d9eb4 == '\x01') {
LAB_00c9b76c:
                puVar29 = &DAT_018ae394;
                DataMemoryBarrier(0xb);
                pcVar33 = s_SetGloba_00414c05;
                if ((DAT_018dd984 == 2) &&
                   (pcVar33 = DAT_018daa74, puVar29 = DAT_018daa78, DAT_018daa70 != 0)) {
                  pcVar33 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                }
                iVar13 = (**(code **)(puVar29 + 0x14))(pcVar33,DAT_018d9eac);
                if (iVar13 == 0) goto LAB_00c9bbe4;
              }
              else if (DAT_018d9eb4 != '\x02') {
                cVar6 = FUN_0169ac90(&DAT_018d9eac);
                if (cVar6 == '\0') goto LAB_00c9bbe4;
                if (cVar6 != '\x02') goto LAB_00c9b76c;
              }
              if (*(uint ******)(DAT_018d9eac + 0x20) == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01875978);
              }
              local_3c = (uint *****)&local_98;
              local_a4 = (undefined4 *)(DAT_018d9eac + 0x1c);
              local_90 = (uint *****)*local_a4;
              local_40 = (uint *****)&local_90;
              local_88 = *(undefined **)(DAT_018d9eac + 0x24);
              local_84 = *(undefined4 *)(DAT_018d9eac + 0x28);
              local_ac = (uint *****)&local_40;
              local_94 = (uint *****)&local_258;
              local_80 = 0;
              puVar29 = &DAT_018ae394;
              local_a8 = (uint *****)&DAT_00000001;
              local_38 = (uint *****)&DAT_018abb78;
              local_98 = (uint *****)&DAT_005721d2;
              local_244 = (uint *****)0x0;
              local_254 = (uint *****)&DAT_00f5c97c;
              local_258 = (uint *****)&local_a0;
              local_248 = (uint *****)&DAT_00000001;
              local_238 = (uint *****)&local_ac;
              DataMemoryBarrier(0xb);
              pcVar33 = s_SetGloba_00414c05;
              if ((DAT_018dd984 == 2) &&
                 (pcVar33 = DAT_018daa74, puVar29 = DAT_018daa78, DAT_018daa70 != 0)) {
                pcVar33 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
              }
              local_234 = DAT_018d9eac;
              local_8c = *(uint ******)(DAT_018d9eac + 0x20);
              iVar13 = (**(code **)(puVar29 + 0x28))(pcVar33,&local_248);
              if (iVar13 != 0) {
                (**(code **)(puVar29 + 0x2c))(pcVar33,&local_248);
              }
            }
            goto LAB_00c9bbe4;
          case 2:
            local_a0 = local_26c;
            if (*(int *)(param_1 + 0x2d4) != 0) {
              uVar10 = FUN_00c4fb58(*(undefined4 *)(param_1 + 0x2d8),
                                    *(undefined4 *)(param_1 + 0x2dc),
                                    *(undefined4 *)(param_1 + 0x2e0),
                                    *(undefined4 *)(param_1 + 0x2e4),local_26c);
              uVar7 = uVar10 >> 0x19;
              iVar13 = *(int *)(param_1 + 0x2c8);
              local_280 = 0;
              while( true ) {
                uVar10 = *(uint *)(param_1 + 0x2cc) & uVar10;
                uVar16 = *(uint *)(iVar13 + uVar10);
                uVar24 = uVar16 ^ uVar7 * 0x1010101;
                uVar24 = ~uVar24 & 0x80808080 & uVar24 + 0xfefefeff;
                while (uVar24 != 0) {
                  uVar11 = uVar24 >> 8;
                  uVar3 = uVar24 >> 0x10;
                  uVar4 = uVar24 >> 0x18;
                  uVar5 = uVar24 << 0x18;
                  uVar24 = uVar24 - 1 & uVar24;
                  uVar11 = uVar10 + ((uint)LZCOUNT(uVar5 | (uVar11 & 0xff) << 0x10 |
                                                   (uVar3 & 0xff) << 8 | uVar4) >> 3) &
                           *(uint *)(param_1 + 0x2cc);
                  if (*(uint ******)(iVar13 + -0xd8 + uVar11 * -0xd8) == local_26c) {
                    FUN_015f3b0c(&local_248,1);
                    pppppuVar15 = local_240;
                    pppppuVar28 = local_244;
                    pppppuVar31 = local_248;
                    iVar13 = uVar11 * -0xd8 + iVar13;
                    if (((uint)local_278 >> 8 & 1) != 0) {
                      ppppuVar14 = local_270[3];
                      iVar27 = (int)local_270[4] * 0x30;
                      goto LAB_00c9b68c;
                    }
                    ppppuVar14 = local_270[3];
                    iVar27 = (int)local_270[4] * 0x30;
                    goto LAB_00c9bad8;
                  }
                }
                if ((uVar16 & 0x80808080 & uVar16 << 1) != 0) break;
                local_280 = local_280 + 4;
                uVar10 = uVar10 + local_280;
              }
            }
            if ((DAT_018d9130 < 4) && (DAT_018d9ec0 != '\0')) {
              if (DAT_018d9ec0 == '\x01') {
LAB_00c9b948:
                DataMemoryBarrier(0xb);
                puVar29 = &DAT_018ae394;
                pcVar33 = s_SetGloba_00414c05;
                if ((DAT_018dd984 == 2) &&
                   (pcVar33 = DAT_018daa74, puVar29 = DAT_018daa78, DAT_018daa70 != 0)) {
                  pcVar33 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                }
                iVar13 = (**(code **)(puVar29 + 0x14))(pcVar33,DAT_018d9eb8);
                if (iVar13 == 0) goto LAB_00c9c548;
              }
              else if (DAT_018d9ec0 != '\x02') {
                cVar6 = FUN_0169ac90(&DAT_018d9eb8);
                if (cVar6 == '\0') goto LAB_00c9c548;
                if (cVar6 != '\x02') goto LAB_00c9b948;
              }
              if (*(uint ******)(DAT_018d9eb8 + 0x20) == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01875988);
              }
              local_88 = *(undefined **)(DAT_018d9eb8 + 0x24);
              local_84 = *(undefined4 *)(DAT_018d9eb8 + 0x28);
              local_a4 = (undefined4 *)(DAT_018d9eb8 + 0x1c);
              local_90 = (uint *****)*local_a4;
              local_3c = (uint *****)&local_98;
              local_40 = (uint *****)&local_90;
              local_ac = (uint *****)&local_40;
              local_94 = (uint *****)&local_258;
              local_80 = 0;
              puVar29 = &DAT_018ae394;
              local_a8 = (uint *****)&DAT_00000001;
              local_38 = (uint *****)&DAT_018abb78;
              local_248 = (uint *****)&DAT_00000001;
              local_238 = (uint *****)&local_ac;
              local_98 = (uint *****)&DAT_0057f2ad;
              local_258 = (uint *****)&local_a0;
              local_254 = (uint *****)&DAT_00f5c97c;
              local_244 = (uint *****)0x0;
              DataMemoryBarrier(0xb);
              pcVar33 = s_SetGloba_00414c05;
              if ((DAT_018dd984 == 2) &&
                 (pcVar33 = DAT_018daa74, puVar29 = DAT_018daa78, DAT_018daa70 != 0)) {
                pcVar33 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
              }
              local_234 = DAT_018d9eb8;
              local_8c = *(uint ******)(DAT_018d9eb8 + 0x20);
              iVar13 = (**(code **)(puVar29 + 0x28))(pcVar33,&local_248);
              if (iVar13 != 0) {
                (**(code **)(puVar29 + 0x2c))(pcVar33,&local_248);
              }
            }
LAB_00c9c548:
            DataMemoryBarrier(0xb);
            do {
              ppppuVar14 = *local_270;
              bVar34 = (bool)hasExclusiveAccess(local_270);
            } while (!bVar34);
            *local_270 = (uint ****)((int)ppppuVar14 + -1);
LAB_00c9c560:
            if (ppppuVar14 == (uint ****)0x1) {
              DataMemoryBarrier(0xb);
              FUN_009ba06c(local_270);
            }
            goto LAB_00c9bbe4;
          case 3:
            FUN_015f3b0c(&local_248,1);
            pppppuVar15 = local_240;
            pppppuVar28 = local_244;
            pppppuVar31 = local_248;
            piVar26 = *(int **)(param_1 + 0x248);
            if (piVar26 != (int *)0x0) {
              DataMemoryBarrier(0xb);
              do {
                iVar13 = *piVar26;
                bVar34 = (bool)hasExclusiveAccess(piVar26);
              } while (!bVar34);
              *piVar26 = iVar13 + -1;
              if (iVar13 == 1) {
                DataMemoryBarrier(0xb);
                FUN_009ba06c(*(undefined4 *)(param_1 + 0x248));
              }
            }
            *(uint ******)(param_1 + 0x248) = local_26c;
            *(uint ******)(param_1 + 0x240) = pppppuVar15;
            *(uint ******)(param_1 + 0x238) = pppppuVar31;
            *(uint ******)(param_1 + 0x23c) = pppppuVar28;
            goto LAB_00c9bbe4;
          case 4:
            FUN_015f3b0c(&local_248,1);
            pppppuVar15 = local_240;
            pppppuVar28 = local_244;
            pppppuVar31 = local_248;
            piVar26 = *(int **)(param_1 + 0x270);
            if (piVar26 != (int *)0x0) {
              DataMemoryBarrier(0xb);
              do {
                iVar13 = *piVar26;
                bVar34 = (bool)hasExclusiveAccess(piVar26);
              } while (!bVar34);
              *piVar26 = iVar13 + -1;
              if (iVar13 == 1) {
                DataMemoryBarrier(0xb);
                FUN_009ba06c(*(undefined4 *)(param_1 + 0x270));
              }
            }
            *(uint ******)(param_1 + 0x270) = local_26c;
            *(uint ******)(param_1 + 0x268) = pppppuVar15;
            *(uint ******)(param_1 + 0x260) = pppppuVar31;
            *(uint ******)(param_1 + 0x264) = pppppuVar28;
            goto LAB_00c9bbe4;
          }
        }
        *(undefined4 *)(param_1 + 0x358) = uVar9;
        goto LAB_00c9bd94;
      }
      bVar34 = (uint)(local_26c < (uint *****)0x3) <= (uint)-(int)local_270;
      if (local_26c == (uint *****)&SUB_00000002 && local_270 == (uint *****)0x0) {
        bVar34 = local_27c != (uint *****)0x0;
      }
      local_40 = local_26c;
      local_3c = local_270;
      local_38 = local_27c;
      if (((bVar34) && (DAT_018d9130 < 4)) && (DAT_018d9e9c != '\0')) {
        if (DAT_018d9e9c == '\x01') {
LAB_00c9afc0:
          DataMemoryBarrier(0xb);
          puVar29 = &DAT_018ae394;
          pcVar33 = s_SetGloba_00414c05;
          if ((DAT_018dd984 == 2) &&
             (pcVar33 = DAT_018daa74, puVar29 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar33 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar13 = (**(code **)(puVar29 + 0x14))(pcVar33,DAT_018d9e94);
          if (iVar13 == 0) goto LAB_00c9bba8;
        }
        else if (DAT_018d9e9c != '\x02') {
          cVar6 = FUN_0169ac90(&DAT_018d9e94);
          if (cVar6 == '\0') goto LAB_00c9bba8;
          if (cVar6 != '\x02') goto LAB_00c9afc0;
        }
        if (*(uint ******)(DAT_018d9e94 + 0x20) == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01875958);
        }
        local_a8 = (uint *****)&local_a0;
        local_250 = (uint *****)(DAT_018d9e94 + 0x1c);
        local_90 = (uint *****)*local_250;
        local_ac = (uint *****)&local_90;
        local_88 = *(undefined **)(DAT_018d9e94 + 0x24);
        local_84 = *(undefined4 *)(DAT_018d9e94 + 0x28);
        local_258 = (uint *****)&local_ac;
        local_9c = (uint *****)&local_98;
        local_80 = 0;
        puVar29 = &DAT_018ae394;
        local_254 = (uint *****)&DAT_00000001;
        local_a4 = (undefined4 *)&DAT_018abb78;
        local_a0 = (uint *****)&DAT_00584581;
        local_244 = (uint *****)0x0;
        local_94 = (uint *****)FUN_00fb8184;
        local_98 = (uint *****)&local_40;
        local_248 = (uint *****)&DAT_00000001;
        local_238 = (uint *****)&local_258;
        DataMemoryBarrier(0xb);
        pcVar33 = s_SetGloba_00414c05;
        if ((DAT_018dd984 == 2) &&
           (pcVar33 = DAT_018daa74, puVar29 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar33 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        local_234 = DAT_018d9e94;
        local_8c = *(uint ******)(DAT_018d9e94 + 0x20);
        iVar13 = (**(code **)(puVar29 + 0x28))(pcVar33,&local_248);
        if (iVar13 != 0) {
          (**(code **)(puVar29 + 0x2c))(pcVar33,&local_248);
        }
      }
LAB_00c9bba8:
      FUN_015f3b0c(&local_248,1);
      iVar13 = param_1 + 0x198;
      FUN_009a2010(&local_268,iVar13,local_248,local_244,local_240);
    } while (local_268 == (uint ****)0x80000002);
    *(uint *****)(param_1 + 0x358) = local_268;
    *(undefined4 *)(param_1 + 0x35c) = uStack_264;
    *(undefined4 *)(param_1 + 0x360) = uStack_260;
    if (*(int *)(param_1 + 0x358) < 0) {
LAB_00c9bd94:
      if ((DAT_018d9130 < 3) && (DAT_018d9ed8 != '\0')) {
        if (DAT_018d9ed8 == '\x01') {
LAB_00c9bde8:
          DataMemoryBarrier(0xb);
          puVar29 = &DAT_018ae394;
          pcVar33 = s_SetGloba_00414c05;
          if ((DAT_018dd984 == 2) &&
             (pcVar33 = DAT_018daa74, puVar29 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar33 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar13 = (**(code **)(puVar29 + 0x14))(pcVar33,DAT_018d9ed0);
          if (iVar13 == 0) goto LAB_00c9bf94;
        }
        else if (DAT_018d9ed8 != '\x02') {
          cVar6 = FUN_0169ac90(&DAT_018d9ed0);
          if (cVar6 == '\0') goto LAB_00c9bf94;
          if (cVar6 != '\x02') goto LAB_00c9bde8;
        }
        if (*(uint ******)(DAT_018d9ed0 + 0x20) == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018759a8);
        }
        local_3c = (uint *****)&local_258;
        local_88 = *(undefined **)(DAT_018d9ed0 + 0x24);
        local_84 = *(undefined4 *)(DAT_018d9ed0 + 0x28);
        local_a4 = (undefined4 *)(DAT_018d9ed0 + 0x1c);
        local_90 = (uint *****)*local_a4;
        local_40 = (uint *****)&local_90;
        local_ac = (uint *****)&local_40;
        local_80 = 0;
        local_244 = (uint *****)0x0;
        local_238 = (uint *****)&local_ac;
        local_a8 = (uint *****)&DAT_00000001;
        local_38 = (uint *****)&DAT_018abb78;
        local_254 = (uint *****)&DAT_00000021;
        local_258 = (uint *****)&DAT_005655b0;
        local_248 = (uint *****)&DAT_00000001;
        DataMemoryBarrier(0xb);
        pcVar33 = s_SetGloba_00414c05;
        puVar29 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar33 = DAT_018daa74, puVar29 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar33 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        local_234 = DAT_018d9ed0;
        local_8c = *(uint ******)(DAT_018d9ed0 + 0x20);
        iVar13 = (**(code **)(puVar29 + 0x28))(pcVar33,&local_248);
        if (iVar13 != 0) {
          (**(code **)(puVar29 + 0x2c))(pcVar33,&local_248);
        }
      }
LAB_00c9bf94:
      fVar36 = *(float *)(param_1 + 0x2f0) * (1.0 - *(float *)(param_1 + 0x2f4)) +
               *(float *)(param_1 + 0x2f4) * 0.0;
      fVar35 = fVar36;
      if (fVar36 < 0.0) {
        fVar35 = 0.0;
      }
      if (100.0 < fVar35) {
        fVar35 = 100.0;
      }
      fVar35 = (float)FUN_016d6208(fVar35,DAT_018dd947);
      uVar7 = (uint)(0.0 < fVar35) * (int)fVar35;
      *(float *)(param_1 + 0x2f0) = fVar36;
      if (100 < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(1,1,&DAT_01875a48);
      }
      (**(code **)(*(int *)(param_1 + 0x2ec) + 0x10))(*(undefined4 *)(param_1 + 0x2e8),0,uVar7);
      *(undefined4 *)(param_1 + 0x31c) = 0;
      *(uint *)(param_1 + 800) = uVar7;
      goto LAB_00c9a4d8;
    }
    pppppuVar31 = (uint *****)(param_1 + 0x368);
    *pppppuVar31 = local_268;
    *(undefined4 *)(param_1 + 0x36c) = uStack_264;
    *(undefined4 *)(param_1 + 0x370) = uStack_260;
    if ((DAT_018d9130 < 5) && (DAT_018d9ecc != '\0')) {
      if (DAT_018d9ecc == '\x01') {
LAB_00c9bc98:
        DataMemoryBarrier(0xb);
        puVar29 = &DAT_018ae394;
        pcVar33 = s_SetGloba_00414c05;
        if ((DAT_018dd984 == 2) &&
           (pcVar33 = DAT_018daa74, puVar29 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar33 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar27 = (**(code **)(puVar29 + 0x14))(pcVar33,DAT_018d9ec4);
        if (iVar27 == 0) goto LAB_00c9c214;
      }
      else if (DAT_018d9ecc != '\x02') {
        cVar6 = FUN_0169ac90(&DAT_018d9ec4);
        if (cVar6 == '\0') goto LAB_00c9c214;
        if (cVar6 != '\x02') goto LAB_00c9bc98;
      }
      if (*(uint ******)(DAT_018d9ec4 + 0x20) == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01875998);
      }
      local_240 = *(uint ******)(DAT_018d9ec4 + 0x24);
      local_8c = (uint *****)&local_258;
      local_23c = *(uint *)(DAT_018d9ec4 + 0x28);
      local_40 = (uint *****)&local_90;
      local_3c = (uint *****)&DAT_00000001;
      local_254 = (uint *****)&local_ac;
      local_238 = (uint *****)0x0;
      local_88 = &DAT_018abb78;
      local_258 = (uint *****)&DAT_0056beff;
      local_a8 = (uint *****)&DAT_006043a8;
      local_248 = *(uint ******)(DAT_018d9ec4 + 0x1c);
      local_244 = *(uint ******)(DAT_018d9ec4 + 0x20);
      local_ac = pppppuVar31;
      local_90 = (uint *****)&local_248;
      local_38 = (uint *****)(DAT_018d9ec4 + 0x1c);
      FUN_00c9cab0(&local_40);
    }
LAB_00c9c214:
    fVar36 = *(float *)(param_1 + 0x2f0) * (1.0 - *(float *)(param_1 + 0x2f4)) +
             *(float *)(param_1 + 0x2f4) * 100.0;
    fVar35 = fVar36;
    if (fVar36 < 0.0) {
      fVar35 = 0.0;
    }
    if (100.0 < fVar35) {
      fVar35 = 100.0;
    }
    fVar35 = (float)FUN_016d6208(fVar35,DAT_018dd947);
    uVar7 = (uint)(0.0 < fVar35) * (int)fVar35;
    *(float *)(param_1 + 0x2f0) = fVar36;
    if (100 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(1,1,&DAT_01875a48);
    }
    (**(code **)(*(int *)(param_1 + 0x2ec) + 0x10))(*(undefined4 *)(param_1 + 0x2e8),100,uVar7);
    *(undefined4 *)(param_1 + 0x31c) = 100;
    *(uint *)(param_1 + 800) = uVar7;
    local_8c = (uint *****)&DAT_006043a8;
    local_90 = pppppuVar31;
    FUN_00600d2c(&local_248,&DAT_00588e30,&local_90);
    *(uint ******)(param_1 + 0x374) = local_248;
    local_258 = local_248;
    local_254 = local_244;
    local_250 = local_240;
    *(uint ******)(param_1 + 0x378) = local_244;
    *(uint ******)(param_1 + 0x37c) = local_240;
    *(int *)(param_1 + 0x380) = iVar13;
    *(undefined1 *)(param_1 + 0x3b0) = 0;
LAB_00c9a1dc:
    *(uint *****)(param_1 + 900) = *(uint *****)(param_1 + 0x374);
    *(undefined1 *)(param_1 + 0x3b1) = 1;
    *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_1 + 0x378);
    *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x37c);
    if ((DAT_018d9130 < 3) && (DAT_018d9e90 != '\0')) {
      puVar29 = &DAT_018ae394;
      pcVar33 = s_SetGloba_00414c05;
      if (DAT_018d9e90 == '\x01') {
LAB_00c9a274:
        DataMemoryBarrier(0xb);
        if ((DAT_018dd984 == 2) &&
           (pcVar33 = DAT_018daa74, puVar29 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar33 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar27 = (**(code **)(puVar29 + 0x14))(pcVar33,DAT_018d9e88);
        if (iVar27 == 0) goto LAB_00c9a410;
      }
      else if (DAT_018d9e90 != '\x02') {
        cVar6 = FUN_0169ac90(&DAT_018d9e88);
        if (cVar6 == '\0') goto LAB_00c9a410;
        if (cVar6 != '\x02') goto LAB_00c9a274;
      }
      if (*(uint ******)(DAT_018d9e88 + 0x20) == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01875918);
      }
      local_40 = (uint *****)&local_90;
      local_ac = (uint *****)&local_40;
      local_88 = *(undefined **)(DAT_018d9e88 + 0x24);
      local_3c = (uint *****)&local_a0;
      local_84 = *(undefined4 *)(DAT_018d9e88 + 0x28);
      local_a4 = (undefined4 *)(DAT_018d9e88 + 0x1c);
      local_90 = (uint *****)*local_a4;
      local_80 = 0;
      local_a8 = (uint *****)&DAT_00000001;
      local_38 = (uint *****)&DAT_018abb78;
      local_9c = (uint *****)&local_98;
      local_a0 = (uint *****)&DAT_0057dc69;
      local_248 = (uint *****)&DAT_00000001;
      local_238 = (uint *****)&local_ac;
      local_94 = (uint *****)&DAT_006043a8;
      local_244 = (uint *****)0x0;
      DataMemoryBarrier(0xb);
      pcVar33 = s_SetGloba_00414c05;
      puVar29 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar33 = DAT_018daa74, puVar29 = DAT_018daa78, DAT_018daa70 != 0)
         ) {
        pcVar33 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      local_234 = DAT_018d9e88;
      local_98 = (uint *****)(param_1 + 900);
      local_8c = *(uint ******)(DAT_018d9e88 + 0x20);
      iVar27 = (**(code **)(puVar29 + 0x28))(pcVar33,&local_248);
      if (iVar27 != 0) {
        (**(code **)(puVar29 + 0x2c))(pcVar33,&local_248);
      }
    }
LAB_00c9a410:
    piVar26 = *(int **)(iVar13 + 0x180);
    do {
      iVar13 = *piVar26;
      bVar34 = (bool)hasExclusiveAccess(piVar26);
    } while (!bVar34);
    *piVar26 = iVar13 + 1;
    if (iVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xc9c734);
      (*pcVar1)();
    }
    uVar9 = *(undefined4 *)(param_1 + 900);
    uVar30 = *(undefined4 *)(param_1 + 0x388);
    uVar22 = *(undefined4 *)(param_1 + 0x38c);
    *(undefined1 *)(param_1 + 0x3b1) = 0;
    puVar8 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x14);
    }
    puVar8[4] = uVar22;
    puVar8[1] = 1;
    puVar8[2] = uVar9;
    puVar8[3] = uVar30;
    *puVar8 = 1;
    *(undefined1 *)(param_1 + 0x3a0) = 0;
    *(int **)(param_1 + 0x398) = piVar26;
    *(undefined1 *)(param_1 + 0x394) = 1;
    *(undefined4 **)(param_1 + 0x390) = puVar8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01875948);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01875948);
  case 3:
    pbVar32 = *(byte **)(param_1 + 0x3d8);
    iVar13 = *(int *)(param_1 + 0x3dc);
    goto LAB_00c9a84c;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x3b0)) {
    case 0:
      iVar13 = *(int *)(param_1 + 0x380);
      goto LAB_00c9a1dc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01875928);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01875928);
    }
    break;
  case 5:
    iVar13 = *(int *)(param_1 + 0x368);
    goto LAB_00c9a688;
  }
  uVar37 = FUN_00c9cbd8(param_1 + 0x390,param_2);
  ppppuVar14 = (uint ****)(uVar37 >> 0x20);
  if ((uVar37 & 1) != 0) {
    uVar12 = 4;
    *(undefined1 *)(param_1 + 0x3b0) = 3;
    uVar9 = 1;
LAB_00c9a764:
    *(undefined1 *)(param_1 + 0x364) = uVar12;
    return uVar9;
  }
  FUN_00654988(param_1 + 0x390);
  if (ppppuVar14 != (uint ****)0x0) {
    local_248 = (uint *****)ppppuVar14;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: halt failed",0x10,&local_248,&DAT_01876100,&DAT_01875938);
  }
  *(undefined2 *)(param_1 + 0x3b0) = 1;
  if (*(int *)(param_1 + 0x368) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x36c));
  }
LAB_00c9a4d8:
  *(undefined1 *)(param_1 + 0x365) = 0;
  FUN_016dd1aa(&local_248,param_1 + 0x198,0x198);
  FUN_00ad50e8(&local_248);
switchD_00c9a6c4_caseD_5:
  iVar13 = param_1 + 0x354;
  *(int *)(param_1 + 0x368) = iVar13;
LAB_00c9a688:
  FUN_00cf4aac(&local_248,iVar13,param_2);
  if (((uint)local_248 & 0xff) == 7) {
    uVar9 = 1;
    uVar12 = 5;
    goto LAB_00c9a764;
  }
  local_90 = local_244;
  local_40 = local_240;
  switch((uint)local_248 & 0xff) {
  case 2:
    DataMemoryBarrier(0xb);
    do {
      ppppuVar14 = *local_240;
      bVar34 = (bool)hasExclusiveAccess(local_240);
    } while (!bVar34);
    *local_240 = (uint ****)((int)ppppuVar14 + -1);
    pppppuVar31 = (uint *****)&local_40;
    goto joined_r0x00c9a740;
  case 3:
    DataMemoryBarrier(0xb);
    do {
      ppppuVar14 = *local_244;
      bVar34 = (bool)hasExclusiveAccess(local_244);
    } while (!bVar34);
    *local_244 = (uint ****)((int)ppppuVar14 + -1);
    break;
  case 4:
    DataMemoryBarrier(0xb);
    do {
      ppppuVar14 = *local_244;
      bVar34 = (bool)hasExclusiveAccess(local_244);
    } while (!bVar34);
    *local_244 = (uint ****)((int)ppppuVar14 + -1);
    break;
  default:
    goto switchD_00c9a6c4_caseD_5;
  case 6:
    goto switchD_00c9a6c4_caseD_6;
  }
  pppppuVar31 = (uint *****)&local_90;
joined_r0x00c9a740:
  if (ppppuVar14 == (uint ****)0x1) {
    DataMemoryBarrier(0xb);
    FUN_009ba06c(*pppppuVar31);
  }
  goto switchD_00c9a6c4_caseD_5;
LAB_00c9bad8:
  if (iVar27 != 0) goto code_r0x00c9bae0;
  DataMemoryBarrier(0xb);
  do {
    ppppuVar14 = *local_270;
    bVar34 = (bool)hasExclusiveAccess(local_270);
  } while (!bVar34);
  *local_270 = (uint ****)((int)ppppuVar14 + -1);
  goto LAB_00c9c560;
code_r0x00c9bae0:
  pppuVar18 = *ppppuVar14;
  ppppuVar2 = ppppuVar14 + 1;
  iVar27 = iVar27 + -0x30;
  ppppuVar14 = ppppuVar14 + 0xc;
  pppuVar20 = *ppppuVar2;
  if (pppuVar18 < (uint ***)0x2) {
    pppuVar20 = pppuVar18;
  }
  if (pppuVar20 == (uint ***)0x1) goto code_r0x00c9bafc;
  goto LAB_00c9bad8;
code_r0x00c9bafc:
  piVar26 = *(int **)(iVar13 + -0x10);
  if (piVar26 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar27 = *piVar26;
      bVar34 = (bool)hasExclusiveAccess(piVar26);
    } while (!bVar34);
    *piVar26 = iVar27 + -1;
    if (iVar27 == 1) {
      DataMemoryBarrier(0xb);
      FUN_009ba06c(*(undefined4 *)(iVar13 + -0x10));
    }
  }
  *(uint ******)(iVar13 + -0x10) = local_270;
  *(uint ******)(iVar13 + -0x20) = pppppuVar31;
  *(uint ******)(iVar13 + -0x1c) = pppppuVar28;
  *(uint ******)(iVar13 + -0x18) = pppppuVar15;
  goto LAB_00c9bbe4;
LAB_00c9b68c:
  if (iVar27 != 0) goto code_r0x00c9b694;
  DataMemoryBarrier(0xb);
  do {
    ppppuVar14 = *local_270;
    bVar34 = (bool)hasExclusiveAccess(local_270);
  } while (!bVar34);
  *local_270 = (uint ****)((int)ppppuVar14 + -1);
  if (ppppuVar14 == (uint ****)0x1) {
    DataMemoryBarrier(0xb);
    FUN_009ba06c(local_270);
  }
  goto LAB_00c9c058;
code_r0x00c9b694:
  pppuVar18 = *ppppuVar14;
  ppppuVar2 = ppppuVar14 + 1;
  iVar27 = iVar27 + -0x30;
  ppppuVar14 = ppppuVar14 + 0xc;
  pppuVar20 = *ppppuVar2;
  if (pppuVar18 < (uint ***)0x2) {
    pppuVar20 = pppuVar18;
  }
  if (pppuVar20 == (uint ***)0x1) goto code_r0x00c9b6b0;
  goto LAB_00c9b68c;
code_r0x00c9b6b0:
  piVar26 = *(int **)(iVar13 + -0x38);
  if (piVar26 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar27 = *piVar26;
      bVar34 = (bool)hasExclusiveAccess(piVar26);
    } while (!bVar34);
    *piVar26 = iVar27 + -1;
    if (iVar27 == 1) {
      DataMemoryBarrier(0xb);
      FUN_009ba06c(*(undefined4 *)(iVar13 + -0x38));
    }
  }
  *(uint ******)(iVar13 + -0x38) = local_270;
  *(uint ******)(iVar13 + -0x48) = pppppuVar31;
  *(uint ******)(iVar13 + -0x44) = pppppuVar28;
  *(uint ******)(iVar13 + -0x40) = pppppuVar15;
LAB_00c9c058:
  if (*(uint *)(iVar13 + -0x70) < 2) {
    *(uint ******)(iVar13 + -0x60) = pppppuVar15;
    *(undefined4 *)(iVar13 + -0x70) = 1;
    *(undefined4 *)(iVar13 + -0x68) = pppppuVar31;
    *(uint ******)(iVar13 + -100) = pppppuVar28;
    *(undefined **)(iVar13 + -0x6c) = &DAT_0034963f;
  }
  else {
    *(uint ******)(iVar13 + -0x60) = pppppuVar15;
    *(undefined4 *)(iVar13 + -0x68) = 0x14;
    *(undefined4 *)(iVar13 + -100) = 0;
    *(undefined4 *)(iVar13 + -0x70) = 3;
    *(undefined **)(iVar13 + -0x6c) = &DAT_0034963f;
    FUN_015f3b0c(&local_248,1);
    pppppuVar15 = local_240;
    pppppuVar28 = local_244;
    pppppuVar31 = local_248;
    piVar26 = *(int **)(iVar13 + -0x38);
    if (piVar26 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar27 = *piVar26;
        bVar34 = (bool)hasExclusiveAccess(piVar26);
      } while (!bVar34);
      *piVar26 = iVar27 + -1;
      if (iVar27 == 1) {
        DataMemoryBarrier(0xb);
        FUN_009ba06c(*(undefined4 *)(iVar13 + -0x38));
      }
    }
    *(undefined4 *)(iVar13 + -0x38) = 0;
    *(uint ******)(iVar13 + -0x48) = pppppuVar31;
    *(uint ******)(iVar13 + -0x44) = pppppuVar28;
    *(uint ******)(iVar13 + -0x40) = pppppuVar15;
  }
  goto LAB_00c9bbe4;
LAB_00c9b274:
  if ((uVar16 & 0x80808080 & uVar16 << 1) != 0) goto LAB_00c9b714;
  local_280 = local_280 + 4;
  uVar10 = uVar10 + local_280;
  goto LAB_00c9b214;
LAB_00c9c338:
  if (*(int *)(param_1 + 0x2d0) == 0) {
    FUN_00c5c8f0(piVar26,(undefined4 *)(param_1 + 0x2d8));
  }
  FUN_015f3b0c(&local_248,1);
  pppppuVar15 = local_240;
  pppppuVar28 = local_244;
  pppppuVar31 = local_248;
  FUN_015f3b0c(&local_248,1);
  uVar7 = *(uint *)(param_1 + 0x2cc);
  puVar21 = (uint *)*piVar26;
  uVar24 = uVar7 & uVar10;
  uVar16 = *(uint *)((int)puVar21 + uVar24) & 0x80808080;
  if (uVar16 == 0) {
    iVar13 = 4;
    do {
      uVar24 = uVar24 + iVar13;
      iVar13 = iVar13 + 4;
      uVar24 = uVar24 & uVar7;
      uVar16 = *(uint *)((int)puVar21 + uVar24) & 0x80808080;
    } while (uVar16 == 0);
  }
  uVar16 = uVar24 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                   (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) & uVar7;
  uVar24 = (uint)*(char *)((int)puVar21 + uVar16);
  if (-1 < (int)uVar24) {
    uVar16 = *puVar21 & 0x80808080;
    uVar16 = LZCOUNT((*puVar21 & 0x80) << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                     (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18);
    uVar24 = (uint)*(byte *)((int)puVar21 + (uVar16 >> 3));
    uVar16 = uVar16 >> 3;
  }
  bVar25 = (byte)(uVar10 >> 0x19);
  *(byte *)((int)puVar21 + uVar16) = bVar25;
  *(uint *)(param_1 + 0x2d0) = *(int *)(param_1 + 0x2d0) - (uVar24 & 1);
  *(byte *)((int)puVar21 + (uVar16 - 4 & uVar7) + 4) = bVar25;
  puVar21[uVar16 * -0x36 + -0xc] = 0x1e;
  puVar21[uVar16 * -0x36 + -0x16] = 0x1e;
  puVar21[uVar16 * -0x36 + -0x24] = 1;
  puVar21[uVar16 * -0x36 + -0x30] = 1;
  puVar21[uVar16 * -0x36 + -0x11] = (uint)pppppuVar28;
  puVar21[uVar16 * -0x36 + -6] = (uint)local_240;
  puVar21[uVar16 * -0x36 + -0x12] = (uint)pppppuVar31;
  puVar21[uVar16 * -0x36 + -0x10] = (uint)pppppuVar15;
  puVar21[uVar16 * -0x36 + -0x1c] = 2;
  puVar21[uVar16 * -0x36 + -7] = (uint)local_244;
  puVar21[uVar16 * -0x36 + -8] = (uint)local_248;
  puVar21[uVar16 * -0x36 + -0xb] = 0;
  puVar21[uVar16 * -0x36 + -0x15] = 0;
  puVar21[uVar16 * -0x36 + -0x23] = 0;
  puVar21[uVar16 * -0x36 + -0x2f] = 0;
  puVar21[uVar16 * -0x36 + -2] = (uint)local_26c;
  puVar21[uVar16 * -0x36 + -4] = 0;
  puVar21[uVar16 * -0x36 + -10] = 0;
  puVar21[uVar16 * -0x36 + -0xe] = 0;
  puVar21[uVar16 * -0x36 + -0x14] = 0;
  puVar21[uVar16 * -0x36 + -0x20] = 0x3f67dd81;
  puVar21[uVar16 * -0x36 + -0x1f] = 7;
  puVar21[uVar16 * -0x36 + -0x1e] = 0;
  puVar21[uVar16 * -0x36 + -0x22] = 0;
  puVar21[uVar16 * -0x36 + -0x26] = 0;
  puVar21[uVar16 * -0x36 + -0x28] = 0;
  puVar21[uVar16 * -0x36 + -0x2c] = 0x3f67dd81;
  puVar21[uVar16 * -0x36 + -0x2b] = 7;
  puVar21[uVar16 * -0x36 + -0x2a] = 0;
  puVar21[uVar16 * -0x36 + -0x2e] = 0;
  puVar21[uVar16 * -0x36 + -0x32] = 0;
  puVar21[uVar16 * -0x36 + -0x34] = 0;
  puVar21[uVar16 * -0x36 + -0x36] = (uint)local_26c;
  *(int *)(param_1 + 0x2d4) = *(int *)(param_1 + 0x2d4) + 1;
  goto LAB_00c9bbe4;
switchD_00c9a6c4_caseD_6:
  piVar23 = (int *)(param_1 + 0x354);
  FUN_00d0b738(piVar23);
  piVar26 = (int *)*piVar23;
  if (piVar26 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar26;
      bVar34 = (bool)hasExclusiveAccess(piVar26);
    } while (!bVar34);
    *piVar26 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f23b4(*piVar23);
    }
  }
  uVar9 = 0;
  uVar12 = 1;
  *(undefined1 *)(param_1 + 0x365) = 0;
  goto LAB_00c9a764;
}

