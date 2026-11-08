// FUN_01820f1c @ 01820f1c size=3080 calls_out=23 calls_in=0
// strings: overflow when adding duration to instant | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

bool FUN_01820f1c(uint *param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint *****pppppuVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint *puVar21;
  undefined4 uVar22;
  uint uVar23;
  uint *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  bool bVar27;
  undefined8 uVar28;
  undefined *local_9c;
  int local_98;
  undefined1 local_94;
  undefined *local_90;
  undefined4 local_8c;
  undefined4 *****local_88;
  uint *****local_84;
  uint *****local_80;
  undefined4 *****local_7c;
  undefined4 local_78;
  uint *local_74;
  undefined4 *****local_70;
  uint *****local_6c;
  uint *****local_68;
  uint *****local_64;
  undefined **local_60;
  uint *local_5c;
  uint ****local_58;
  uint local_54;
  int local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 *****local_40;
  uint *****local_3c;
  uint *****local_38;
  undefined4 *****local_30;
  uint *****local_2c;
  uint *****local_28;
  
  puVar21 = param_1 + 8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x15]) {
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d1de64);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d1de64);
  case '\x03':
    goto switchD_01820f4c_caseD_3;
  }
  *(undefined1 *)((int)param_1 + 0x55) = 1;
  *puVar21 = *param_1;
  param_1[9] = param_1[1];
  param_1[10] = param_1[2];
  param_1[0xb] = param_1[3];
  param_1[0xc] = param_1[4];
  param_1[0xd] = param_1[5];
  param_1[0xe] = param_1[6];
  param_1[0xf] = param_1[7];
  (**(code **)(param_1[0xd] + 0x14))
            (&local_58,param_1[0xc] + (*(int *)(param_1[0xd] + 8) - 1U & 0xfffffff8) + 8);
  uVar17 = param_1[9];
  uVar8 = (int)local_58 + *puVar21;
  uVar4 = local_54 + uVar17 + (uint)CARRY4((uint)local_58,*puVar21);
  if ((int)uVar17 < 0 != (int)((local_54 ^ uVar4) & ~(local_54 ^ uVar17)) < 0) {
LAB_01821010:
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281d4);
  }
  puVar9 = (undefined1 *)(param_1[10] + local_50);
  if (&DAT_3b9aca00 <= puVar9) {
    bVar27 = 0xfffffffe < uVar8;
    uVar8 = uVar8 + 1;
    uVar17 = uVar4 + bVar27;
    if ((int)((uVar4 ^ uVar17) & ~uVar4) < 0) goto LAB_01821010;
    puVar9 = puVar9 + -1000000000;
    uVar4 = uVar17;
  }
  iVar14 = *(int *)(param_1[0xd] + 8);
  uVar28 = (**(code **)(param_1[0xd] + 0x10))
                     (param_1[0xc] + (iVar14 - 1U & 0xfffffff8) + 8,iVar14,uVar8,uVar4,puVar9);
  *(undefined1 *)((int)param_1 + 0x55) = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar28;
  param_1[0x14] = param_1[0xe];
  do {
    param_1[0x12] = (uint)(param_1 + 0x14);
    param_1[0x13] = (uint)(param_1 + 0x10);
switchD_01820f4c_caseD_3:
    uVar4 = FUN_01821e80(param_1 + 0x12,param_2);
    if (uVar4 == 2) {
      uVar3 = 3;
      goto LAB_01821a64;
    }
    if ((uVar4 & 1) == 0) {
      if ((DAT_01d50f88 == 0) &&
         (((DAT_01d4fa90 - 1 < 2 ||
           ((DAT_01d4fa90 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4fa88), cVar2 != '\0')))) &&
          (iVar14 = FUN_01aaa278(DAT_01d4fa88), iVar14 != 0)))) {
        if (*(uint *)(DAT_01d4fa88 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1de74);
        }
        local_60 = &local_9c;
        local_50 = *(int *)(DAT_01d4fa88 + 0x24);
        uStack_4c = *(undefined4 *)(DAT_01d4fa88 + 0x28);
        local_74 = (uint *)(DAT_01d4fa88 + 0x1c);
        local_58 = (uint ****)*local_74;
        local_64 = &local_58;
        local_7c = &local_64;
        local_48 = 0;
        local_78 = 1;
        local_5c = (uint *)&DAT_01d2ea4c;
        local_98 = 0x49;
        local_9c = &DAT_0050c690;
        local_54 = *(uint *)(DAT_01d4fa88 + 0x20);
        FUN_01aaaecc(DAT_01d4fa88,&local_7c);
        iVar14 = DAT_01d4fa88;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_2c = *(uint ******)(DAT_01d4fa88 + 0x14);
          local_28 = *(uint ******)(DAT_01d4fa88 + 0x18);
          local_30 = (undefined4 *****)&DAT_00000005;
          DataMemoryBarrier(0xb);
          puVar15 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar15 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar16 = (*(code *)puVar15[3])(pcVar1,&local_30);
          if (iVar16 != 0) {
            local_40 = local_30;
            local_3c = local_2c;
            local_38 = local_28;
            FUN_01aaa328(iVar14,pcVar1,puVar15[4],&local_40,&local_7c);
          }
        }
      }
      else {
        iVar14 = DAT_01d4fa88;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_6c = *(uint ******)(DAT_01d4fa88 + 0x14);
          local_68 = *(uint ******)(DAT_01d4fa88 + 0x18);
          local_70 = (undefined4 *****)&DAT_00000005;
          DataMemoryBarrier(0xb);
          puVar15 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar15 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar16 = (*(code *)puVar15[3])(pcVar1,&local_70);
          if (iVar16 != 0) {
            if (*(uint *)(DAT_01d4fa88 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1de74);
            }
            local_2c = (uint *****)&local_7c;
            local_50 = *(int *)(DAT_01d4fa88 + 0x24);
            uStack_4c = *(undefined4 *)(DAT_01d4fa88 + 0x28);
            local_30 = &local_58;
            local_64 = (uint *****)&local_30;
            local_48 = 0;
            local_60 = (undefined **)&DAT_00000001;
            local_28 = (uint *****)&DAT_01d2ea4c;
            local_78 = 0x49;
            local_7c = (undefined4 *****)&DAT_0050c690;
            local_40 = local_70;
            local_3c = local_6c;
            local_38 = local_68;
            local_5c = (uint *)(DAT_01d4fa88 + 0x1c);
            local_58 = *(uint *****)(DAT_01d4fa88 + 0x1c);
            local_54 = *(uint *)(DAT_01d4fa88 + 0x20);
            FUN_01aaa328(iVar14,pcVar1,puVar15[4],&local_40,&local_64);
          }
        }
      }
      FUN_0172e418(param_1 + 0x14);
      FUN_01139b38(param_1[0x10],param_1[0x11]);
      piVar5 = (int *)param_1[0xc];
      DataMemoryBarrier(0xb);
      do {
        iVar14 = *piVar5;
        bVar27 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar27);
      *piVar5 = iVar14 + -1;
      if (iVar14 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(param_1[0xc],param_1[0xd]);
      }
      if (1 < param_1[0xf] + 1) {
        piVar5 = (int *)(param_1[0xf] + 4);
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *piVar5;
          bVar27 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar27);
        *piVar5 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          thunk_FUN_01be4678();
        }
      }
      *(undefined1 *)((int)param_1 + 0x55) = 0;
      uVar3 = 1;
LAB_01821a64:
      *(undefined1 *)(param_1 + 0x15) = uVar3;
      return uVar4 == 2;
    }
    if ((param_1[0xf] != 0) && (piVar5 = (int *)FUN_01785780(), piVar5 != (int *)0x0)) {
      FUN_01933ff0(&local_9c,piVar5 + 2);
      uVar3 = local_94;
      iVar14 = local_98;
      if (local_9c == (undefined *)0x0) {
        if (((DAT_01d50f88 == 0) &&
            ((DAT_01d4fa9c - 1 < 2 ||
             ((DAT_01d4fa9c != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4fa94), cVar2 != '\0')))))) &&
           (iVar16 = FUN_01aaa278(DAT_01d4fa94), iVar16 != 0)) {
          if (*(uint *)(DAT_01d4fa94 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1de84);
          }
          local_60 = &local_90;
          local_50 = *(int *)(DAT_01d4fa94 + 0x24);
          uStack_4c = *(undefined4 *)(DAT_01d4fa94 + 0x28);
          local_74 = (uint *)(DAT_01d4fa94 + 0x1c);
          local_58 = (uint ****)*local_74;
          local_64 = &local_58;
          local_7c = &local_64;
          local_48 = 0;
          local_78 = 1;
          local_5c = (uint *)&DAT_01d2ea4c;
          local_8c = 0x45;
          local_90 = &DAT_0050c6b4;
          local_54 = *(uint *)(DAT_01d4fa94 + 0x20);
          FUN_01aaaecc(DAT_01d4fa94,&local_7c);
          iVar16 = DAT_01d4fa94;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_2c = *(uint ******)(DAT_01d4fa94 + 0x14);
            local_28 = *(uint ******)(DAT_01d4fa94 + 0x18);
            local_30 = (undefined4 *****)&DAT_00000005;
            DataMemoryBarrier(0xb);
            puVar15 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar15 = &DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar6 = (*(code *)puVar15[3])(pcVar1,&local_30);
            if (iVar6 != 0) {
              local_40 = local_30;
              local_3c = local_2c;
              local_38 = local_28;
              FUN_01aaa328(iVar16,pcVar1,puVar15[4],&local_40,&local_7c);
            }
          }
        }
        else {
          iVar16 = DAT_01d4fa94;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_84 = *(uint ******)(DAT_01d4fa94 + 0x14);
            local_80 = *(uint ******)(DAT_01d4fa94 + 0x18);
            local_88 = (undefined4 *****)&DAT_00000005;
            DataMemoryBarrier(0xb);
            puVar15 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar15 = &DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar6 = (*(code *)puVar15[3])(pcVar1,&local_88);
            if (iVar6 != 0) {
              if (*(uint *)(DAT_01d4fa94 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1de84);
              }
              local_2c = (uint *****)&local_7c;
              local_50 = *(int *)(DAT_01d4fa94 + 0x24);
              uStack_4c = *(undefined4 *)(DAT_01d4fa94 + 0x28);
              local_30 = &local_58;
              local_64 = (uint *****)&local_30;
              local_48 = 0;
              local_60 = (undefined **)&DAT_00000001;
              local_28 = (uint *****)&DAT_01d2ea4c;
              local_78 = 0x45;
              local_7c = (undefined4 *****)&DAT_0050c6b4;
              local_40 = local_88;
              local_3c = local_84;
              local_38 = local_80;
              local_5c = (uint *)(DAT_01d4fa94 + 0x1c);
              local_58 = *(uint *****)(DAT_01d4fa94 + 0x1c);
              local_54 = *(uint *)(DAT_01d4fa94 + 0x20);
              FUN_01aaa328(iVar16,pcVar1,puVar15[4],&local_40,&local_64);
            }
          }
        }
        if (*(uint ******)(iVar14 + 0x10) == (uint *****)&DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("interval assumes timeout",0x18,&DAT_01d20d0c);
        }
        local_40 = *(undefined4 ******)(iVar14 + 8);
        local_3c = *(uint ******)(iVar14 + 0xc);
        local_38 = *(uint ******)(iVar14 + 0x10);
        FUN_0170bbb4(&local_58,*(undefined4 *)(iVar14 + 0x80),*(undefined4 *)(iVar14 + 0x84));
        iVar16 = *(int *)(iVar14 + 0x44);
        if (iVar16 != 0) {
          puVar24 = *(uint **)(iVar14 + 0x38);
          puVar10 = puVar24 + 1;
          uVar4 = ~*puVar24 & 0x80808080;
LAB_01821450:
          puVar11 = puVar10;
          if (uVar4 == 0) {
            do {
              puVar10 = puVar11 + 1;
              uVar4 = *puVar11;
              puVar24 = puVar24 + -0x24;
              puVar11 = puVar10;
            } while ((uVar4 & 0x80808080) == 0x80808080);
            uVar4 = uVar4 & 0x80808080 ^ 0x80808080;
          }
          puVar11 = puVar24 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                             (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) * -9
          ;
          pppppuVar7 = (uint *****)(puVar11 + -9);
          local_28 = (uint *****)&local_40;
          local_2c = &local_58;
          local_30 = &local_64;
          uVar8 = puVar11[-1];
          local_64 = pppppuVar7;
          if (uVar8 != 0) {
            puVar25 = (undefined4 *)puVar11[-2];
            uVar23 = 1;
            uVar17 = 0;
            puVar26 = puVar25;
            puVar15 = puVar25;
LAB_018214e8:
            puVar15 = puVar15 + 0xc;
            iVar6 = FUN_0187ad98(&local_30,puVar26);
            uVar18 = uVar17 + 1;
            if (iVar6 != 0) break;
            FUN_0187b4cc(puVar26);
            while (uVar18 < uVar8) {
              iVar6 = FUN_0187ad98(&local_30,puVar15);
              if (iVar6 == 0) {
                FUN_0187b4cc(puVar15);
              }
              else {
                puVar26 = puVar25 + uVar17 * 0xc;
                uVar12 = puVar15[1];
                uVar13 = puVar15[2];
                uVar19 = puVar15[3];
                uVar20 = puVar15[4];
                uVar22 = puVar15[5];
                *puVar26 = *puVar15;
                puVar26[1] = uVar12;
                puVar26[2] = uVar13;
                puVar26[3] = uVar19;
                puVar26[4] = uVar20;
                puVar26[5] = uVar22;
                uVar12 = puVar15[7];
                uVar13 = puVar15[8];
                uVar19 = puVar15[9];
                uVar20 = puVar15[10];
                uVar22 = puVar15[0xb];
                puVar26[6] = puVar15[6];
                puVar26[7] = uVar12;
                puVar26[8] = uVar13;
                puVar26[9] = uVar19;
                puVar26[10] = uVar20;
                puVar26[0xb] = uVar22;
                uVar17 = uVar17 + 1;
              }
              puVar15 = puVar15 + 0xc;
              uVar23 = uVar23 + 1;
              uVar18 = uVar23;
            }
            puVar11[-1] = uVar17;
            goto LAB_01821528;
          }
          goto LAB_01821534;
        }
      }
LAB_018215fc:
      FUN_00a97e8c(iVar14,uVar3);
      DataMemoryBarrier(0xb);
      do {
        iVar14 = *piVar5;
        bVar27 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar27);
      *piVar5 = iVar14 + -1;
      if (iVar14 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01852970();
      }
    }
    (**(code **)(param_1[0xd] + 0x14))
              (&local_58,param_1[0xc] + (*(int *)(param_1[0xd] + 8) - 1U & 0xfffffff8) + 8);
    uVar17 = param_1[9];
    uVar8 = (int)local_58 + *puVar21;
    uVar4 = local_54 + uVar17 + (uint)CARRY4((uint)local_58,*puVar21);
    if ((int)uVar17 < 0 != (int)((local_54 ^ uVar4) & ~(local_54 ^ uVar17)) < 0) {
LAB_018216c0:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281d4);
    }
    puVar9 = (undefined1 *)(param_1[10] + local_50);
    if (&DAT_3b9aca00 <= puVar9) {
      bVar27 = 0xfffffffe < uVar8;
      uVar8 = uVar8 + 1;
      uVar17 = uVar4 + bVar27;
      if ((int)((uVar4 ^ uVar17) & ~uVar4) < 0) goto LAB_018216c0;
      puVar9 = puVar9 + -1000000000;
      uVar4 = uVar17;
    }
    FUN_01744fa8(param_1 + 0xc,param_1 + 0x10,uVar8,uVar4,puVar9);
  } while( true );
  uVar23 = uVar23 + 1;
  puVar26 = puVar26 + 0xc;
  uVar17 = uVar18;
  if (uVar8 == uVar18) goto code_r0x01821520;
  goto LAB_018214e8;
code_r0x01821520:
  uVar17 = puVar11[-1];
LAB_01821528:
  if (uVar17 == 0) {
LAB_01821534:
    FUN_009440d4((undefined4 *)(iVar14 + 0x38),puVar11);
    FUN_0181d09c(pppppuVar7);
  }
  iVar16 = iVar16 + -1;
  uVar4 = uVar4 - 1 & uVar4;
  if (iVar16 == 0) goto LAB_018215fc;
  goto LAB_01821450;
}

