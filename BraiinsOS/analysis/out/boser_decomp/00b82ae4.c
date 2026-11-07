// FUN_00b82ae4 @ 00b82ae4 size=1884 calls_out=17 calls_in=1
// strings: boser_buildroot::sessionopen/boser/boser-buildroot/src/session.rsevent open/boser/boser-buildroot/src/session.rs:130event open/boser/boser-buildroot/src/session.rs:113 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser_buildroot::sessionopen/boser/boser-buildroot/src/session.rsevent open/boser/boser-buildroot/src/session.rs:130event open/boser/boser-buildroot/src/session.rs:113 | boser_buildroot::sessionopen/boser/boser-buildroot/src/session.rsevent open/boser/boser-buildroot/src/session.rs:130event open/boser/boser-buildroot/src/session.rs:113

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b82ae4(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 ****ppppuVar6;
  int *piVar7;
  uint uVar8;
  int *unaff_r4;
  uint uVar9;
  int unaff_r5;
  int iVar10;
  uint *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  int *unaff_r6;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  int *unaff_r11;
  uint uVar17;
  int iVar18;
  bool bVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  longlong lVar22;
  undefined4 *****local_a8;
  undefined **local_a4;
  uint *local_a0;
  undefined4 *****local_9c;
  undefined **local_98;
  uint *local_94;
  undefined *local_90;
  undefined8 **local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined2 *local_74;
  undefined8 *local_70;
  undefined2 *local_6c;
  undefined4 *****local_68;
  undefined **local_64;
  uint *local_60;
  undefined4 *****pppppuStack_58;
  undefined **ppuStack_54;
  uint *puStack_50;
  undefined4 ****local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  char local_2c;
  
  if (*(char *)(param_2 + 3) != '\0') {
    if (*(char *)(param_2 + 3) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c13a68);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13a68);
  }
  uVar15 = 0x80000017;
  if (param_2[2] != 0) {
    unaff_r11 = (int *)*param_2;
    unaff_r4 = (int *)(param_2[1] + 0x20);
    iVar10 = param_2[2] * 0x60;
    do {
      unaff_r6 = unaff_r4 + 3;
      piVar7 = (int *)0x0;
      if (*unaff_r4 != -0x7fffffff) {
        piVar7 = unaff_r4;
      }
      uVar20 = FUN_012f2b0c(unaff_r6,piVar7);
      if (((int)((ulonglong)uVar20 >> 0x20) == 10) &&
         (iVar3 = thunk_FUN_01bed842((int)uVar20,&DAT_0051da27,10), iVar3 == 0)) {
        if ((DAT_01d50f88 < 2) &&
           (((DAT_01d4c380 - 1 < 2 ||
             ((DAT_01d4c380 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4c378), cVar2 != '\0')))) &&
            (iVar10 = FUN_01aaa278(DAT_01d4c378), iVar10 != 0)))) {
          puVar11 = (uint *)(DAT_01d4c378 + 0x1c);
          local_48 = (undefined4 ****)*puVar11;
          local_44 = *(uint *)(DAT_01d4c378 + 0x20);
          if (local_44 == 0) {
LAB_00b8322c:
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c13ab8);
          }
          local_40 = *(uint *)(DAT_01d4c378 + 0x24);
          local_3c = *(uint *)(DAT_01d4c378 + 0x28);
          local_38 = 0;
          piVar7 = (int *)0x0;
          if (*unaff_r4 != -0x7fffffff) {
            piVar7 = unaff_r4;
          }
          local_88 = FUN_012f2b0c(unaff_r6,piVar7);
          local_80 = FUN_012f2b0c(unaff_r4 + 6,piVar7);
          local_8c = &local_78;
          local_98 = &local_90;
          local_9c = &local_48;
          local_a4 = (undefined **)&DAT_00000001;
          local_70 = &local_80;
          local_a8 = &local_9c;
          local_78 = &local_88;
          local_90 = &DAT_005ab850;
          local_94 = (uint *)&DAT_01d2ea4c;
          local_6c = &DAT_0132b6a0;
          local_74 = &DAT_0132b6a0;
          local_a0 = puVar11;
          FUN_01aaaecc(DAT_01d4c378,&local_a8);
          iVar10 = DAT_01d4c378;
          if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
            local_64 = *(undefined ***)(DAT_01d4c378 + 0x14);
            local_60 = *(uint **)(DAT_01d4c378 + 0x18);
            local_68 = (undefined4 *****)&SUB_00000004;
            DataMemoryBarrier(0xb);
            puVar12 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar12 = &DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar3 = (*(code *)puVar12[3])(pcVar1);
            if (iVar3 != 0) {
              pppppuStack_58 = local_68;
              ppuStack_54 = local_64;
              puStack_50 = local_60;
              FUN_01aaa328(iVar10,pcVar1,puVar12[4],&pppppuStack_58,&local_a8);
            }
          }
        }
        else {
          iVar10 = DAT_01d4c378;
          local_88 = CONCAT44(local_88._4_4_,(undefined4)local_88);
          local_80 = CONCAT44(local_80._4_4_,(undefined4)local_80);
          if ((DAT_01d51ae9 == '\0') &&
             (local_88 = CONCAT44(local_88._4_4_,(undefined4)local_88),
             local_80 = CONCAT44(local_80._4_4_,(undefined4)local_80), 3 < DAT_01d51b00)) {
            local_a4 = *(undefined ***)(DAT_01d4c378 + 0x14);
            local_a0 = *(uint **)(DAT_01d4c378 + 0x18);
            local_a8 = (undefined4 *****)&SUB_00000004;
            DataMemoryBarrier(0xb);
            puVar12 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar12 = &DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar3 = (*(code *)puVar12[3])();
            if (iVar3 != 0) {
              puVar11 = (uint *)(DAT_01d4c378 + 0x1c);
              local_48 = (undefined4 ****)*puVar11;
              local_44 = *(uint *)(DAT_01d4c378 + 0x20);
              if (local_44 == 0) goto LAB_00b8322c;
              local_40 = *(uint *)(DAT_01d4c378 + 0x24);
              local_3c = *(uint *)(DAT_01d4c378 + 0x28);
              local_38 = 0;
              piVar7 = (int *)0x0;
              if (*unaff_r4 != -0x7fffffff) {
                piVar7 = unaff_r4;
              }
              local_88 = FUN_012f2b0c(unaff_r6,piVar7);
              local_80 = FUN_012f2b0c(unaff_r4 + 6,piVar7);
              local_8c = &local_78;
              local_64 = &local_90;
              local_68 = &local_48;
              local_9c = &local_68;
              local_98 = (undefined **)&DAT_00000001;
              local_70 = &local_80;
              local_60 = (uint *)&DAT_01d2ea4c;
              local_78 = &local_88;
              local_90 = &DAT_005ab850;
              local_6c = &DAT_0132b6a0;
              local_74 = &DAT_0132b6a0;
              pppppuStack_58 = local_a8;
              ppuStack_54 = local_a4;
              puStack_50 = local_a0;
              local_94 = puVar11;
              FUN_01aaa328(iVar10,pcVar1,puVar12[4],&pppppuStack_58,&local_9c);
            }
          }
        }
        uVar20 = FUN_00b81df8(unaff_r11);
        iVar10 = (int)uVar20;
        piVar7 = (int *)0x0;
        if (*unaff_r4 != -0x7fffffff) {
          piVar7 = unaff_r4;
        }
        uVar21 = FUN_012f2b0c(unaff_r4 + 6,piVar7);
        iVar3 = (int)((ulonglong)uVar21 >> 0x20);
        if (*(int *)(iVar10 + 0x14) == 0) goto LAB_00b8316c;
        local_48 = *(undefined4 *****)(iVar10 + 0x18);
        local_44 = *(uint *)(iVar10 + 0x1c);
        local_30 = &DAT_01d519f0;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        local_40 = 0;
        local_2c = '\0';
        FUN_00b8c814(&local_48,(int)uVar21,iVar3);
        if (local_2c == '\0') {
          ppppuVar6 = local_48;
        }
        else {
          ppppuVar6 = (undefined4 ****)
                      ((local_44 ^ local_3c) * (local_30[1] ^ local_34) ^
                       ((uint)local_48 ^ local_40) * (*local_30 ^ local_38) ^
                      (uint)((ulonglong)(local_44 ^ local_3c) * (ulonglong)(*local_30 ^ local_38) >>
                            0x20) ^
                      (uint)((ulonglong)((uint)local_48 ^ local_40) *
                             (ulonglong)(local_30[1] ^ local_34) >> 0x20));
        }
        uVar13 = (uint)ppppuVar6 >> 0x19;
        iVar14 = *(int *)(iVar10 + 8);
        uVar8 = *(uint *)(iVar10 + 0xc);
        iVar18 = 0;
        goto LAB_00b83074;
      }
      unaff_r4 = unaff_r4 + 0x18;
      iVar10 = iVar10 + -0x60;
      unaff_r5 = 0;
    } while (iVar10 != 0);
  }
LAB_00b82b6c:
  *(char *)(param_1 + 4) = (char)unaff_r4;
  *param_1 = uVar15;
  param_1[1] = unaff_r6;
  param_1[2] = unaff_r5;
  param_1[3] = unaff_r11;
  *(undefined1 *)(param_2 + 3) = 1;
  return;
LAB_00b83074:
  uVar16 = uVar8 & (uint)ppppuVar6;
  uVar9 = *(uint *)(iVar14 + uVar16);
  uVar4 = uVar9 ^ uVar13 * 0x1010101;
  for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
    uVar17 = uVar16 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                     (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar8;
    iVar5 = *(int *)(iVar14 + -8 + uVar17 * -8);
    if (iVar3 == *(int *)(iVar5 + 8)) {
      iVar5 = thunk_FUN_01bed842((int)uVar21,*(undefined4 *)(iVar5 + 4),iVar3);
      if (iVar5 == 0) {
        puVar11 = *(uint **)(iVar14 + uVar17 * -8 + -4);
        lVar22 = FUN_012f2b0c(unaff_r4 + 6,piVar7);
        unaff_r11 = (int *)((ulonglong)lVar22 >> 0x20);
        if (lVar22 < 0) {
          uVar15 = 0;
LAB_00b8314c:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar15,unaff_r11);
        }
        if (unaff_r11 == (int *)0x0) {
          unaff_r5 = 1;
          unaff_r6 = (int *)0x0;
        }
        else {
          uVar15 = 1;
          unaff_r5 = FUN_01298504(unaff_r11,1);
          if (unaff_r5 == 0) goto LAB_00b8314c;
          unaff_r6 = unaff_r11;
        }
        FUN_01bed4e2(unaff_r5,(int)lVar22,unaff_r11);
        uVar8 = *puVar11;
        uVar13 = puVar11[1];
        uVar21 = FUN_00b81808();
        iVar3 = (int)((ulonglong)uVar21 >> 0x20);
        bVar19 = (uint)uVar21 < uVar8;
        unaff_r4 = (int *)0x0;
        if ((int)(iVar3 - (uVar13 + bVar19)) < 0 !=
            (SBORROW4(iVar3,uVar13) != SBORROW4(iVar3 - uVar13,(uint)bVar19))) {
          unaff_r4 = (int *)&DAT_00000001;
        }
        goto LAB_00b831e0;
      }
    }
  }
  if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) goto LAB_00b8316c;
  iVar18 = iVar18 + 4;
  ppppuVar6 = (undefined4 ****)(iVar18 + uVar16);
  goto LAB_00b83074;
LAB_00b8316c:
  unaff_r11 = (int *)0x0;
  unaff_r6 = (int *)0x0;
  unaff_r5 = 1;
  unaff_r4 = (int *)0x0;
LAB_00b831e0:
  FUN_00a97e8c(iVar10,(uint)((ulonglong)uVar20 >> 0x20) & 1);
  uVar15 = 0x8000001a;
  goto LAB_00b82b6c;
}

