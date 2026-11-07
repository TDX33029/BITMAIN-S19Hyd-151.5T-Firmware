// FUN_011f5c7c @ 011f5c7c size=3652 calls_out=32 calls_in=1
// strings: Checked upgrade image using 'sysupgrade -T' command; result: image is valid. | Checked upgrade image using 'sysupgrade -T' command; result: image is invalid. | boser_unix::upgradeopen/boser/boser-unix/src/upgrade.rsevent open/boser/boser-unix/src/upgrade.rs:309event open/boser/boser-unix/src/upgrade.rs:234event open/boser/boser-unix/src/upgrade.rs:229event open/boser/boser-unix/src/upgrade.rs:214event open/boser/boser-unix/src/upgrade.rs:223BUG: sysupgrade script returned with 0 status code and synchronization was not performedevent open/boser/boser-unix/src/upgrade.rs:290event open/boser/boser-unix/src/upgrade.rs:288 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | Checked upgrade image using 'sysupgrade -T' command; result: image is valid.

void FUN_011f5c7c(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 ****ppppuVar7;
  int iVar8;
  int *piVar9;
  undefined4 ****ppppuVar10;
  int iVar11;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  code *pcVar18;
  uint uVar19;
  undefined1 *puVar20;
  int iVar21;
  int iVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int *local_208;
  int *local_1f4;
  undefined4 ****local_1e0;
  code *local_1dc;
  undefined4 ***local_1d8;
  int local_1d4;
  undefined4 ***local_1d0;
  int iStack_1cc;
  uint *local_1c8;
  int local_1c4;
  undefined4 local_1b8;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  uint *local_190;
  int local_18c;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 ****local_f8;
  undefined4 ****local_f4;
  uint *local_f0;
  undefined4 ****local_e8;
  undefined4 ****local_e4;
  uint *local_e0;
  undefined4 ***local_d8;
  undefined4 ***local_d4;
  undefined4 ***local_d0;
  undefined4 ****local_cc;
  undefined4 ***local_c8;
  undefined1 *local_c4;
  undefined4 ****local_c0;
  undefined4 ****local_bc;
  undefined4 ***local_b8;
  int local_b4;
  undefined4 ****local_5c;
  undefined1 local_58;
  undefined2 uStack_57;
  undefined1 uStack_55;
  uint *local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 ****local_40;
  undefined4 ****local_3c;
  uint *local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar6 = (undefined4 *)((uint)&local_1e0 | 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[2]) {
  case '\0':
    piVar9 = param_2 + 0x38;
    FUN_019af4c4(piVar9,&DAT_005676f8,0x10);
    *(undefined1 *)(param_2 + 0x57) = 0;
    FUN_019af384(piVar9,"-T",2);
    FUN_019af384(piVar9,*param_2,param_2[1]);
    FUN_019b46e0(&local_5c,piVar9);
    ppppuVar7 = (undefined4 ****)CONCAT13(uStack_55,CONCAT21(uStack_57,local_58));
    if (local_5c == (undefined4 ****)0x2) {
      local_c0 = (undefined4 ****)&DAT_00000003;
      local_b8 = (undefined4 ***)local_54;
      local_bc = ppppuVar7;
    }
    else {
      local_34 = local_50;
      uStack_30 = uStack_4c;
      uStack_2c = uStack_48;
      uStack_28 = uStack_44;
      local_38 = local_54;
      local_40 = local_5c;
      local_3c = ppppuVar7;
      FUN_019eab18(&local_c0,(char)param_2[0x57]);
    }
    FUN_01bed4e2(&local_1e0,&local_c0,0x60);
    FUN_01bed4e2(param_2 + 3,&local_1e0,0xd0);
    *(undefined1 *)(param_2 + 0x37) = 0;
switchD_011f5d6c_caseD_0:
    ppppuVar7 = (undefined4 ****)param_2[4];
    ppppuVar10 = (undefined4 ****)param_2[5];
    if (param_2[3] != 3) {
      param_2[0x1c] = (int)ppppuVar7;
      param_2[0x1d] = (int)ppppuVar10;
      piVar9 = param_2 + 0x1b;
      *piVar9 = param_2[3];
      FUN_01bed4e2(param_2 + 0x1e,param_2 + 6,0x54);
      local_c0 = (undefined4 ****)*piVar9;
      local_bc = (undefined4 ****)param_2[0x1c];
      local_b8 = (undefined4 ***)param_2[0x1d];
      local_b4 = param_2[0x1e];
      *piVar9 = 2;
      if (local_c0 != (undefined4 ****)0x2) {
        FUN_007372d8(&local_c0);
      }
      local_c0 = (undefined4 ****)param_2[0x1f];
      local_bc = (undefined4 ****)param_2[0x20];
      local_b8 = (undefined4 ***)param_2[0x21];
      local_b4 = param_2[0x22];
      param_2[0x1f] = 2;
      if (local_c0 != (undefined4 ****)0x2) {
        FUN_007372d8(&local_c0);
      }
      local_c0 = (undefined4 ****)param_2[0x23];
      local_bc = (undefined4 ****)param_2[0x24];
      local_b8 = (undefined4 ***)param_2[0x25];
      local_b4 = param_2[0x26];
      param_2[0x23] = 2;
      if (local_c0 != (undefined4 ****)0x2) {
        FUN_007372d8(&local_c0);
      }
      *(undefined1 *)(param_2 + 0x36) = 0;
      param_2[0x33] = (int)piVar9;
      goto switchD_011f5d6c_caseD_3;
    }
    uVar17 = (uint)ppppuVar7 >> 8 | (int)ppppuVar10 << 0x18;
LAB_011f5f7c:
    local_1f4 = param_2 + 3;
    uVar19 = (uint)ppppuVar10 >> 8;
    uVar13 = (uint)ppppuVar7 & 0xff;
    *(undefined1 *)(param_2 + 0x37) = 1;
    if (uVar13 != 5) {
      FUN_011f6f10(local_1f4);
      if (uVar13 == 4) {
        iVar11 = uVar19 - (0xffffff >= uVar17);
        if (uVar19 != 0 || uVar19 < (0xffffff < uVar17)) {
          FUN_010a7c94(param_2 + 0x38,iVar11,uVar17 - 0x1000000);
          if ((DAT_01d50f88 < 3) &&
             (((DAT_01d4ca18 - 1 < 2 ||
               ((DAT_01d4ca18 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4ca10), cVar5 != '\0')))) &&
              (iVar11 = FUN_01aaa278(DAT_01d4ca10), iVar11 != 0)))) {
            local_1e0 = *(undefined4 *****)(DAT_01d4ca10 + 0x1c);
            local_1dc = *(code **)(DAT_01d4ca10 + 0x20);
            if (local_1dc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c231e0);
            }
            local_bc = &local_5c;
            local_1d8 = *(undefined4 ****)(DAT_01d4ca10 + 0x24);
            local_1d4 = *(int *)(DAT_01d4ca10 + 0x28);
            local_c0 = &local_1e0;
            local_40 = &local_c0;
            local_3c = (undefined4 ****)&DAT_00000001;
            local_1d0 = (undefined4 ***)0x0;
            local_b8 = (undefined4 ***)&DAT_01d2ea4c;
            local_58 = 0x9d;
            uStack_57 = 0;
            uStack_55 = 0;
            local_5c = (undefined4 ****)0x401f03;
            local_38 = (uint *)(DAT_01d4ca10 + 0x1c);
            FUN_011f7148(&local_40);
          }
          else {
            iVar11 = DAT_01d4ca10;
            if ((DAT_01d51ae9 == 0) && (2 < DAT_01d51b00)) {
              local_f4 = *(undefined4 *****)(DAT_01d4ca10 + 0x14);
              local_f0 = *(uint **)(DAT_01d4ca10 + 0x18);
              local_f8 = (undefined4 ****)&DAT_00000003;
              DataMemoryBarrier(0xb);
              puVar15 = DAT_01d4edc8;
              pcVar3 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar15 = &DAT_01cfc5e0;
                pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar8 = (*(code *)puVar15[3])(pcVar3,&local_f8);
              if (iVar8 != 0) {
                local_54 = (uint *)(DAT_01d4ca10 + 0x1c);
                local_1e0 = (undefined4 ****)*local_54;
                local_1dc = *(code **)(DAT_01d4ca10 + 0x20);
                if (local_1dc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c231e0);
                }
                local_40 = &local_1e0;
                local_5c = &local_40;
                local_1d8 = *(undefined4 ****)(DAT_01d4ca10 + 0x24);
                local_1d4 = *(int *)(DAT_01d4ca10 + 0x28);
                local_3c = &local_c8;
                local_1d0 = (undefined4 ***)0x0;
                local_58 = 1;
                uStack_57 = 0;
                uStack_55 = 0;
                local_38 = (uint *)&DAT_01d2ea4c;
                local_c4 = (undefined1 *)0x9d;
                local_c8 = (undefined4 ***)0x401f03;
                local_c0 = local_f8;
                local_bc = local_f4;
                local_b8 = (undefined4 ***)local_f0;
                FUN_01aaa328(iVar11,pcVar3,puVar15[4],&local_c0,&local_5c);
              }
            }
          }
          if (((DAT_01d50f88 < 3) &&
              ((DAT_01d4ca0c - 1 < 2 ||
               ((DAT_01d4ca0c != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4ca04), cVar5 != '\0')))))) &&
             (iVar11 = FUN_01aaa278(DAT_01d4ca04), iVar11 != 0)) {
            if (*(int *)(DAT_01d4ca04 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c231f0);
            }
            local_1d8 = *(undefined4 ****)(DAT_01d4ca04 + 0x24);
            local_1d4 = *(int *)(DAT_01d4ca04 + 0x28);
            local_1d0 = (undefined4 ***)0x0;
            local_3c = (undefined4 ****)&DAT_00000001;
            local_40 = &local_c0;
            local_c8 = (undefined4 ***)*param_2;
            local_c4 = (undefined1 *)param_2[1];
            local_bc = &local_d0;
            local_c0 = &local_1e0;
            local_cc = &local_5c;
            local_5c = &local_c8;
            local_b8 = (undefined4 ***)&DAT_01d2ea4c;
            local_d0 = (undefined4 ***)&DAT_00592ae8;
            local_58 = 0x8c;
            uStack_57 = 0x9ba7;
            uStack_55 = 1;
            local_1e0 = (undefined4 ****)*(undefined4 ****)(DAT_01d4ca04 + 0x1c);
            local_1dc = (code *)*(int *)(DAT_01d4ca04 + 0x20);
            local_38 = (uint *)(DAT_01d4ca04 + 0x1c);
            FUN_011f7240(&local_40);
          }
          else {
            iVar11 = DAT_01d4ca04;
            if ((DAT_01d51ae9 == 0) && (2 < DAT_01d51b00)) {
              local_e4 = *(undefined4 *****)(DAT_01d4ca04 + 0x14);
              local_e0 = *(uint **)(DAT_01d4ca04 + 0x18);
              local_e8 = (undefined4 ****)&DAT_00000003;
              DataMemoryBarrier(0xb);
              puVar15 = DAT_01d4edc8;
              pcVar3 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar15 = &DAT_01cfc5e0;
                pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar8 = (*(code *)puVar15[3])(pcVar3,&local_e8);
              if (iVar8 != 0) {
                if (*(int *)(DAT_01d4ca04 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c231f0);
                }
                local_1d8 = *(undefined4 ****)(DAT_01d4ca04 + 0x24);
                local_1d4 = *(int *)(DAT_01d4ca04 + 0x28);
                local_d0 = (undefined4 ***)*param_2;
                local_cc = (undefined4 ****)param_2[1];
                local_3c = &local_d8;
                local_40 = &local_1e0;
                local_d4 = &local_c8;
                local_c8 = &local_d0;
                local_58 = 1;
                uStack_57 = 0;
                uStack_55 = 0;
                local_5c = &local_40;
                local_1d0 = (undefined4 ***)0x0;
                local_38 = (uint *)&DAT_01d2ea4c;
                local_d8 = (undefined4 ***)&DAT_00592ae8;
                local_c4 = &LAB_019ba78c;
                local_c0 = local_e8;
                local_bc = local_e4;
                local_b8 = (undefined4 ***)local_e0;
                local_1e0 = (undefined4 ****)*(undefined4 ****)(DAT_01d4ca04 + 0x1c);
                local_1dc = (code *)*(int *)(DAT_01d4ca04 + 0x20);
                local_54 = (uint *)(DAT_01d4ca04 + 0x1c);
                FUN_01aaa328(iVar11,pcVar3,puVar15[4],&local_c0,&local_5c);
              }
            }
          }
          param_2[3] = (int)param_2;
          *(undefined1 *)(param_2 + 10) = 0;
          piVar9 = param_2;
          goto LAB_011f6648;
        }
        FUN_010a7c94(param_2 + 0x38,iVar11,uVar17 - 0x1000000);
        uVar14 = extraout_r1;
        if (DAT_01d50f88 < 3) {
          if (DAT_01d4ca00 - 1 < 2) {
LAB_011f5ff8:
            uVar23 = FUN_01aaa278(DAT_01d4c9f8);
            uVar14 = (undefined4)((ulonglong)uVar23 >> 0x20);
            if ((int)uVar23 != 0) {
              local_1e0 = *(undefined4 *****)(DAT_01d4c9f8 + 0x1c);
              local_1dc = *(code **)(DAT_01d4c9f8 + 0x20);
              if (local_1dc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c23200);
              }
              local_bc = &local_5c;
              local_1d8 = *(undefined4 ****)(DAT_01d4c9f8 + 0x24);
              local_1d4 = *(undefined4 *)(DAT_01d4c9f8 + 0x28);
              local_40 = &local_c0;
              local_3c = (undefined4 ****)0x1;
              local_1d0 = (undefined4 ***)0x0;
              local_b8 = (undefined4 ***)&DAT_01d2ea4c;
              local_58 = 0x99;
              uStack_57 = 0;
              uStack_55 = 0;
              local_5c = (undefined4 ****)0x401f51;
              local_c0 = &local_1e0;
              local_38 = (undefined4 *)(DAT_01d4c9f8 + 0x1c);
              uVar24 = FUN_011f7338(&local_40);
              puVar20 = &DAT_80000016;
              goto LAB_011f6948;
            }
          }
          else {
            uVar14 = 0;
            if (DAT_01d4ca00 != 0) {
              cVar5 = FUN_01aaafa8(&DAT_01d4c9f8);
              if (cVar5 != '\0') goto LAB_011f5ff8;
              uVar14 = 0;
            }
          }
        }
        iVar11 = DAT_01d4c9f8;
        puVar20 = &DAT_80000016;
        uVar24 = CONCAT44(uVar14,(uint)DAT_01d51ae9);
        if ((DAT_01d51ae9 == 0) && (uVar24 = CONCAT44(uVar14,DAT_01d51b00), 2 < DAT_01d51b00)) {
          local_100 = *(undefined4 *)(DAT_01d4c9f8 + 0x14);
          local_fc = *(undefined4 *)(DAT_01d4c9f8 + 0x18);
          local_104 = 3;
          DataMemoryBarrier(0xb);
          puVar6 = DAT_01d4edc8;
          pcVar3 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar6 = &DAT_01cfc5e0;
            pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          uVar25 = (*(code *)puVar6[3])(pcVar3,&local_104);
          uVar24 = uVar25 & 0xffffffff00000000;
          if ((int)uVar25 != 0) {
            local_1e0 = *(undefined4 *****)(DAT_01d4c9f8 + 0x1c);
            local_1dc = *(code **)(DAT_01d4c9f8 + 0x20);
            if (local_1dc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c23200);
            }
            local_bc = &local_5c;
            local_1d8 = *(undefined4 ****)(DAT_01d4c9f8 + 0x24);
            local_1d4 = *(undefined4 *)(DAT_01d4c9f8 + 0x28);
            local_40 = &local_c0;
            local_1d0 = (undefined4 ***)0x0;
            local_3c = (undefined4 ****)0x1;
            local_b8 = (undefined4 ***)&DAT_01d2ea4c;
            local_58 = 0x99;
            uStack_57 = 0;
            uStack_55 = 0;
            local_5c = (undefined4 ****)0x401f51;
            local_c0 = &local_1e0;
            local_38 = (undefined4 *)(DAT_01d4c9f8 + 0x1c);
            uVar24 = FUN_01aaa328(iVar11,pcVar3,puVar6[4],&local_104,&local_40);
          }
        }
      }
      else {
        FUN_010a7c94(param_2 + 0x38);
        uVar24 = CONCAT44(uVar17 >> 0x18 | uVar19 << 8,uVar13 | uVar17 << 8);
        puVar20 = (undefined1 *)0x80000002;
      }
LAB_011f6948:
      *(ulonglong *)(param_1 + 1) = uVar24;
      uVar4 = 1;
      *param_1 = puVar20;
      goto LAB_011f6958;
    }
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c231d0);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c231d0);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x37]) {
    case '\0':
      goto switchD_011f5d6c_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c230f0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c230f0);
    }
switchD_011f5d6c_caseD_3:
    FUN_011f6ff0(&local_c0,param_2 + 0x33,param_3);
    ppppuVar10 = local_bc;
    ppppuVar7 = local_c0;
    if ((char)local_c0 != '\x05') {
      FUN_011f6f44(param_2 + 0x1b);
      uVar17 = (uint)ppppuVar7 >> 8 | (int)ppppuVar10 << 0x18;
      goto LAB_011f5f7c;
    }
    *(undefined1 *)(param_2 + 0x37) = 3;
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[10]) {
    case '\0':
      piVar9 = (int *)param_2[3];
LAB_011f6648:
      param_2[4] = (int)piVar9;
      FUN_019afae4(&local_40,*piVar9,piVar9[1]);
      param_2[5] = (int)local_40;
      param_2[6] = (int)local_3c;
      param_2[7] = (int)local_38;
      *(undefined1 *)(param_2 + 9) = 0;
switchD_011f5dd8_caseD_0:
      iVar11 = param_2[6];
      iVar16 = param_2[5];
      iVar22 = param_2[7];
      uVar24 = FUN_019ef7f4(&DAT_01c230d0);
      iVar8 = (int)(uVar24 >> 0x20);
      iVar12 = 0x218;
      if ((uVar24 & 1) != 0) {
        iVar12 = 0x148;
      }
      uVar14 = *(undefined4 *)(iVar8 + iVar12);
      do {
        do {
          iVar12 = DAT_01d50474;
          uVar17 = DAT_01d50470;
          uVar13 = DAT_01d50470 + 1;
          iVar21 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
          bVar1 = (bool)hasExclusiveAccess(0x1d50470);
        } while (!bVar1);
        bVar1 = DAT_01d50470 == 0;
        bVar2 = DAT_01d50474 == 0;
        DAT_01d50470 = uVar13;
        DAT_01d50474 = iVar21;
      } while (bVar1 && bVar2);
      local_1c4 = 0x200;
      if ((uVar24 & 1) != 0) {
        local_1c4 = 0x138;
      }
      local_1c4 = iVar8 + local_1c4;
      local_1c8 = *(uint **)(local_1c4 + 8);
      if (local_1c8 != (uint *)0x0) {
        do {
          uVar13 = *local_1c8;
          bVar1 = (bool)hasExclusiveAccess(local_1c8);
        } while (!bVar1);
        *local_1c8 = uVar13 + 1;
        if ((int)uVar13 < 0) {
LAB_011f6748:
                    /* WARNING: Does not return */
          pcVar18 = (code *)software_udf(0xfdee,0x11f6748);
          (*pcVar18)();
        }
        local_1c4 = *(int *)(local_1c4 + 0xc);
        do {
          uVar13 = *local_1c8;
          bVar1 = (bool)hasExclusiveAccess(local_1c8);
        } while (!bVar1);
        *local_1c8 = uVar13 + 1;
        if (0x7fffffff < uVar13) goto LAB_011f6748;
      }
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[4] = uVar17;
      puVar6[5] = iVar12;
      local_1e0 = (undefined4 ****)0xcc;
      local_1b8 = 0;
      local_1dc = (code *)0x0;
      local_198 = 0;
      local_19c = 0;
      local_1a0 = 0;
      local_1d8 = (undefined4 ***)&PTR_LAB_01c229a8;
      local_5c = (undefined4 ****)0x0;
      local_1b0 = iVar16;
      local_1ac = iVar11;
      local_1a8 = iVar22;
      local_190 = local_1c8;
      local_18c = local_1c4;
      iVar11 = FUN_01be5878(&local_5c,0x20,0x60);
      ppppuVar7 = local_5c;
      if ((iVar11 != 0) || (local_5c == (undefined4 ****)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(0x20,0x60);
      }
      FUN_01bed4e2(local_5c,&local_1e0,0x60);
      FUN_019f02d4(&local_1e0,uVar14,ppppuVar7,1,uVar24);
      if (((uint)local_1e0 & 0xfe) != 4) {
        local_58 = SUB41(local_1dc,0);
        uStack_55 = (undefined1)((uint)local_1dc >> 0x18);
        local_5c = local_1e0;
        uStack_57 = (undefined2)((uint)local_1dc >> 8);
        local_1dc = FUN_019a7d7c;
        local_1e0 = &local_5c;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005ab28b,&local_1e0,&DAT_01c230d0);
      }
      FUN_009298dc((int)uVar24,iVar8);
      param_2[8] = (int)ppppuVar7;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c230c0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c230c0);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[9]) {
      case '\0':
        goto switchD_011f5dd8_caseD_0;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c230e0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c230e0);
      case '\x03':
        ppppuVar7 = (undefined4 ****)param_2[8];
      }
    }
    local_208 = param_2 + 5;
    FUN_014b4c40(&local_1e0,ppppuVar7,*param_3);
    if (((uint)local_1e0 & 1) == 0) {
      local_c0 = (undefined4 ****)local_1d8;
      local_bc = (undefined4 ****)local_1d4;
      local_b8 = local_1d0;
      local_b4 = iStack_1cc;
      piVar9 = (int *)param_2[8];
      if (*piVar9 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(piVar9);
        if (!bVar1) goto LAB_011f68a0;
        *piVar9 = 0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_011f68a0:
        (**(code **)(piVar9[2] + 0x10))();
      }
      if (local_c0 == (undefined4 ****)0x0 && local_bc == (undefined4 ****)0x0) {
        ppppuVar7 = (undefined4 ****)local_b8;
        pcVar18 = (code *)local_b4;
      }
      else {
        FUN_019a18a8(&local_1e0,0x28,"background task failed",0x16);
        pcVar18 = local_1dc;
        ppppuVar7 = local_1e0;
        FUN_011f7430(&local_c0);
      }
      *(undefined1 *)(param_2 + 9) = 1;
      if (((uint)ppppuVar7 & 0xff) != 5) {
        FUN_00b71be0(local_208);
        uVar24 = CONCAT44(extraout_r1_00,1);
        puVar20 = &DAT_80000008;
        *(undefined1 *)(param_2 + 10) = 1;
        if (((uint)ppppuVar7 & 0xff) != 4) {
          uVar24 = FUN_0069263c(ppppuVar7,pcVar18);
        }
        goto LAB_011f6948;
      }
    }
    else {
      *(undefined1 *)(param_2 + 9) = 3;
    }
    *(undefined1 *)(param_2 + 10) = 3;
    *param_1 = 0x80000017;
    uVar4 = 4;
    goto LAB_011f6958;
  }
  *param_1 = 0x80000017;
  uVar4 = 3;
LAB_011f6958:
  *(undefined1 *)(param_2 + 2) = uVar4;
  return;
}

