// FUN_00d46b70 @ 00d46b70 size=2008 calls_out=10 calls_in=0
// strings: <Missing voltage>

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00d46bd8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00d46b70(uint param_1,uint *param_2)

{
  ushort uVar1;
  undefined **ppuVar2;
  undefined8 **ppuVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  uint **ppuVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint *extraout_r12;
  uint *puVar21;
  int iVar22;
  bool bVar23;
  undefined8 in_d0;
  int local_f4;
  int local_f0;
  undefined4 local_ec;
  uint *local_e8;
  uint *local_e4;
  undefined *local_e0;
  int local_d8;
  int local_d4;
  undefined4 local_d0;
  uint local_cc;
  undefined2 *local_c8;
  uint local_c4;
  uint *local_c0;
  uint *local_bc;
  undefined *local_b8;
  undefined4 *local_b4;
  undefined8 *local_b0;
  undefined4 *local_ac;
  uint *local_a8;
  undefined4 *local_a4;
  undefined *local_a0;
  undefined4 *local_9c;
  undefined8 *local_98;
  undefined4 *local_94;
  undefined *local_90;
  undefined4 *local_8c;
  uint *local_88;
  undefined4 *local_84;
  undefined *local_80;
  undefined4 *local_7c;
  uint *local_78;
  undefined4 *local_74;
  undefined *local_70;
  undefined4 *local_6c;
  int *local_68;
  undefined4 *local_64;
  undefined *local_60;
  undefined4 *local_5c;
  uint **local_58;
  undefined4 *local_54;
  undefined *local_50;
  undefined4 *local_4c;
  int *local_48;
  undefined4 *local_44;
  undefined *local_40;
  undefined4 *local_3c;
  undefined *local_38;
  undefined4 *local_34;
  undefined8 local_30;
  uint local_28;
  
  uVar19 = param_2[0x34];
  puVar20 = (undefined4 *)param_2[0x33];
  iVar22 = uVar19 * 0x30;
  if (uVar19 == 0) {
    if ((*param_2 & 1) != 0) goto LAB_00d46c04;
    iVar14 = thunk_FUN_016d4a50(0x11);
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x11);
    }
    FUN_016dd1aa(iVar14,"<Missing voltage>",0x11);
    local_ec = 0x11;
    local_f4 = 0x11;
    local_f0 = iVar14;
LAB_00d46d54:
    uVar5 = param_1;
    if (param_2[0x22] != 0) {
LAB_00d46d60:
      if (uVar19 == 0) {
        uVar5 = param_2[0x23];
      }
      goto LAB_00d46d6c;
    }
    puVar7 = (uint *)thunk_FUN_016d4a50(0x13);
    if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x13);
    }
    FUN_016dd1aa(puVar7,&DAT_00356fd0,0x13);
    local_e0 = (undefined *)0x13;
    local_e8 = (uint *)&DAT_00000013;
    local_e4 = puVar7;
  }
  else {
    in_d0 = *(undefined8 *)(puVar20 + 6);
    if (uVar19 != 1) {
      puVar11 = (undefined8 *)(puVar20 + 0x12);
      iVar14 = (iVar22 - 0x30U >> 4) * -0x55555555;
      do {
        FUN_016d5578((int)in_d0,(int)((ulonglong)in_d0 >> 0x20),(int)*puVar11);
        puVar11 = puVar11 + 6;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    if ((*param_2 & 1) != 0) {
LAB_00d46c04:
      if (uVar19 == 0) {
        in_d0 = *(undefined8 *)(param_2 + 2);
      }
    }
    local_bc = (uint *)&LAB_00fb1f30;
    local_c0 = (uint *)&local_30;
    local_30 = in_d0;
    FUN_00600d2c(&local_f4,&DAT_00356fe3,&local_c0);
    if (uVar19 == 0) goto LAB_00d46d54;
    iVar14 = puVar20[10];
    if (iVar14 == 0) {
LAB_00d473c8:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0034ae54,0x2d,&DAT_0186ac88);
    }
    iVar8 = 0;
    uVar5 = 0;
    puVar7 = (uint *)puVar20[9];
    iVar16 = iVar14;
    do {
      bVar23 = CARRY4(uVar5,*puVar7);
      uVar5 = uVar5 + *puVar7;
      iVar8 = iVar8 + (uint)bVar23;
      iVar16 = iVar16 + -1;
      puVar7 = puVar7 + 1;
    } while (iVar16 != 0);
    iVar16 = 0;
    uVar5 = FUN_01846088(uVar5,iVar8,iVar14,0);
    if (uVar19 != 1) {
      do {
        iVar14 = puVar20[iVar16 * 0xc + 0x16];
        if (iVar14 == 0) goto LAB_00d473c8;
        uVar6 = 0;
        iVar9 = 0;
        puVar7 = (uint *)puVar20[iVar16 * 0xc + 0x15];
        iVar8 = iVar14;
        do {
          bVar23 = CARRY4(uVar6,*puVar7);
          uVar6 = uVar6 + *puVar7;
          iVar9 = iVar9 + (uint)bVar23;
          iVar8 = iVar8 + -1;
          puVar7 = puVar7 + 1;
        } while (iVar8 != 0);
        uVar6 = FUN_01846088(uVar6,iVar9,iVar14,0);
        iVar16 = iVar16 + 1;
        if (uVar5 <= uVar6) {
          uVar5 = uVar6;
        }
      } while (iVar16 != (iVar22 - 0x30U >> 4) * -0x55555555);
    }
    if (param_2[0x22] == 1) goto LAB_00d46d60;
LAB_00d46d6c:
    local_30 = CONCAT44(&LAB_00fac484,&local_cc);
    local_cc = uVar5 / 1000000;
    FUN_00600d2c(&local_c0,&DAT_00356f84,&local_30);
    bVar23 = uVar19 == 0;
    local_e8 = local_c0;
    local_e4 = local_bc;
    local_e0 = local_b8;
    puVar7 = local_c0;
    puVar21 = extraout_r12;
    if (!bVar23) {
      puVar7 = (uint *)*puVar20;
      puVar21 = (uint *)puVar20[1];
      bVar23 = puVar7 == (uint *)&DAT_00000005 && puVar21 == (uint *)0x0;
    }
    if (!bVar23) {
      puVar11 = (undefined8 *)puVar20[4];
      puVar10 = (undefined *)puVar20[2];
      puVar13 = (undefined *)puVar20[3];
      if (uVar19 == 1) goto LAB_00d46f5c;
      iVar22 = (iVar22 - 0x30U >> 4) * -0x55555555;
      do {
        local_c0 = puVar7;
        local_bc = puVar21;
        cVar4 = FUN_010e1310(&local_a8,&local_c0);
        if (cVar4 < '\0') {
          ppuVar18 = &local_c0;
          ppuVar2 = &local_b8;
          ppuVar3 = &local_b0;
        }
        else {
          ppuVar18 = &local_a8;
          ppuVar2 = &local_a0;
          ppuVar3 = &local_98;
        }
        iVar22 = iVar22 + -1;
        puVar7 = *ppuVar18;
        puVar21 = ppuVar18[1];
        puVar10 = *ppuVar2;
        puVar13 = ppuVar2[1];
        puVar11 = *ppuVar3;
      } while (iVar22 != 0);
      if (puVar7 != (uint *)&DAT_00000005 || puVar21 != (uint *)0x0) goto LAB_00d46f5c;
    }
  }
  puVar7 = (uint *)param_2[4];
  if (puVar7 != (uint *)&DAT_00000005 || param_2[5] != 0) {
    puVar10 = (undefined *)param_2[6];
    puVar13 = (undefined *)param_2[7];
    puVar11 = (undefined8 *)param_2[8];
LAB_00d46f5c:
                    /* WARNING: Could not recover jumptable at 0x00d46f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00d46f68 + *(int *)(&DAT_00d46f68 + (int)puVar7 * 4)))
              (puVar7,puVar10,puVar11,puVar13);
    return;
  }
  iVar22 = thunk_FUN_016d4a50(0x12);
  if (iVar22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x12);
  }
  FUN_016dd1aa(iVar22,&DAT_00356f98,0x12);
  local_d0 = 0x12;
  local_d8 = 0x12;
  uVar19 = param_2[0x3f];
  local_d4 = iVar22;
  if (uVar19 != 0) {
    uVar5 = param_2[0x40];
    do {
      uVar1 = *(ushort *)(uVar19 + 0x10e);
      iVar14 = uVar19 + 4;
      uVar6 = 0xffffffff;
      iVar22 = (uint)uVar1 * 0xc;
      do {
        if (iVar22 == 0) {
          uVar6 = (uint)uVar1;
          goto LAB_00d470b8;
        }
        uVar15 = *(uint *)(iVar14 + 8);
        uVar12 = uVar15;
        if (5 < uVar15) {
          uVar12 = 6;
        }
        iVar16 = FUN_016dd50a(&DAT_003588c0,*(undefined4 *)(iVar14 + 4),uVar12);
        if (iVar16 == 0) {
          iVar16 = 6 - uVar15;
        }
        iVar22 = iVar22 + -0xc;
        uVar6 = uVar6 + 1;
        iVar14 = iVar14 + 0xc;
      } while ((char)((0 < iVar16) - (iVar16 < 0)) == '\x01');
      if (0 < iVar16 == iVar16 < 0) {
        iVar22 = uVar19 + uVar6 * 0xc;
        uVar19 = *(uint *)(iVar22 + 0x90);
        if ((int)uVar19 < 0) {
          uVar17 = 0;
          goto LAB_00d470ec;
        }
        uVar17 = *(undefined4 *)(iVar22 + 0x8c);
        if (uVar19 == 0) {
          local_c8 = (undefined2 *)&DAT_00000001;
          uVar5 = 0;
        }
        else {
          local_c8 = (undefined2 *)thunk_FUN_016d4a50(uVar19);
          if (local_c8 == (undefined2 *)0x0) {
            uVar17 = 1;
            goto LAB_00d470ec;
          }
          uVar5 = uVar19;
        }
        FUN_016dd1aa(local_c8,uVar17,uVar19);
        goto LAB_00d47170;
      }
LAB_00d470b8:
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      uVar19 = *(uint *)(uVar19 + uVar6 * 4 + 0x110);
    } while( true );
  }
  uVar19 = 3;
  local_c8 = (undefined2 *)thunk_FUN_016d4a50(3);
  uVar5 = 3;
  if (local_c8 == (undefined2 *)0x0) {
    uVar19 = 3;
    uVar17 = 1;
LAB_00d470ec:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar17,uVar19);
  }
  *(undefined1 *)(local_c8 + 1) = 0x41;
  *local_c8 = 0x2f4e;
LAB_00d47170:
  local_cc = uVar5;
  local_c4 = uVar19;
  if (param_2[0x38] == 0x80000000) {
    puVar20 = (undefined4 *)thunk_FUN_016d4a50(0xd);
    uVar5 = 0xd;
    if (puVar20 == (undefined4 *)0x0) {
      uVar5 = 0xd;
LAB_00d47404:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar5);
    }
    *(undefined1 *)(puVar20 + 3) = 0x3e;
    puVar20[2] = 0x4e2f5320;
    puVar20[1] = 0x676e6973;
    *puVar20 = 0x73694d3c;
  }
  else {
    uVar19 = param_2[0x39];
    uVar5 = param_2[0x3a];
    if (uVar5 == 0) {
      puVar20 = (undefined4 *)&DAT_00000001;
    }
    else {
      puVar20 = (undefined4 *)thunk_FUN_016d4a50(uVar5);
      if (puVar20 == (undefined4 *)0x0) goto LAB_00d47404;
    }
    FUN_016dd1aa(puVar20,uVar19,uVar5);
  }
  local_48 = &local_d8;
  local_58 = &local_e8;
  local_50 = &DAT_0187770c;
  local_68 = &local_f4;
  local_78 = param_2 + 0x2c;
  local_60 = &DAT_0187773c;
  local_88 = param_2 + 0x2f;
  local_70 = &DAT_01877734;
  local_80 = &DAT_0187772c;
  local_98 = &local_30;
  local_34 = &DAT_0157d360;
  local_38 = &DAT_0056a308;
  local_3c = &DAT_0157d360;
  local_40 = &DAT_0056a308;
  local_44 = &DAT_006043a8;
  local_4c = &DAT_0157d360;
  local_54 = &DAT_006043a8;
  local_5c = &DAT_0157d360;
  local_64 = &DAT_006043a8;
  local_6c = &DAT_0157d360;
  local_74 = &DAT_006043a8;
  local_7c = &DAT_0157d360;
  local_84 = &DAT_006043a8;
  local_8c = &DAT_0157d360;
  local_90 = &DAT_01877724;
  local_94 = &DAT_006043a8;
  local_a4 = &DAT_006043a8;
  local_a8 = &local_cc;
  local_9c = &DAT_0157d360;
  local_a0 = &DAT_0187771c;
  local_ac = &DAT_0157d360;
  local_b0 = (undefined8 *)&DAT_01877714;
  local_b4 = &DAT_0157d360;
  local_b8 = &DAT_0056a308;
  local_bc = &DAT_0157d360;
  local_c0 = (uint *)&DAT_0056a308;
  local_28 = uVar5;
  local_30._0_4_ = uVar5;
  local_30._4_4_ = puVar20;
  FUN_00600d2c(param_1,&DAT_00356ece,&local_c0);
  if ((uint)local_30 != 0) {
    thunk_FUN_016d3fb4(local_30._4_4_);
  }
  if (local_cc != 0) {
    thunk_FUN_016d3fb4(local_c8);
  }
  if (local_d8 != 0) {
    thunk_FUN_016d3fb4(local_d4);
  }
  if (local_e8 != (uint *)0x0) {
    thunk_FUN_016d3fb4(local_e4);
  }
  if (local_f4 != 0) {
    thunk_FUN_016d3fb4(local_f0);
  }
  return;
}

