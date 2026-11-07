// FUN_00cb34b8 @ 00cb34b8 size=2620 calls_out=15 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x00cb389c) */

void FUN_00cb34b8(uint *param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  undefined *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  byte unaff_r10;
  char cVar24;
  undefined4 *unaff_r11;
  undefined1 uVar25;
  int *piVar26;
  bool bVar27;
  undefined8 uVar28;
  undefined4 *local_e0;
  byte local_dc;
  undefined4 *local_d8;
  int *local_d0;
  int local_a0;
  int iStack_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  puVar23 = (undefined4 *)&DAT_018dd940;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 10)) {
  case 0:
    uVar25 = *(undefined1 *)((int)param_2 + 0xb);
    piVar26 = (int *)param_2[1];
    *(undefined1 *)((int)param_2 + 9) = 0;
    *param_2 = (int)piVar26;
    *(undefined1 *)(param_2 + 2) = uVar25;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01875ab8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01875ab8);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2d]) {
    case '\0':
      piVar26 = (int *)param_2[0x2c];
      goto LAB_00cb3e14;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187ab10);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187ab10);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x2b]) {
      case '\0':
        piVar26 = (int *)param_2[0x1c];
        goto LAB_00cb3e4c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187ab20);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187ab20);
      }
    }
    unaff_r10 = local_dc;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x22]) {
    case '\0':
      piVar26 = (int *)param_2[0x1e];
      uVar4 = param_2[0x1f];
      goto LAB_00cb3e70;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187ab00);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187ab00);
    case '\x03':
      uVar4 = param_2[0x21];
      iVar6 = *(int *)param_2[0x20];
      if (*(uint *)(iVar6 + 0x94) < uVar4) goto LAB_00cb3e88;
      goto LAB_00cb3608;
    case '\x04':
      goto switchD_00cb35cc_caseD_4;
    }
  case 4:
    uVar4 = (&switchD_00cb355c::switchdataD_00cb3560)[*(byte *)(param_2 + 5)];
    local_e0 = unaff_r11;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_2 + 5)) {
    case 0:
      piVar26 = (int *)param_2[3];
      param_2[4] = (int)piVar26;
      goto LAB_00cb3b94;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018a6a6c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018a6a6c);
    case 3:
      piVar26 = (int *)param_2[4];
      goto LAB_00cb3b94;
    }
  }
  do {
    iVar6 = *piVar26;
    iVar11 = piVar26[1];
    iVar16 = piVar26[2];
    iVar18 = piVar26[3];
    iVar20 = piVar26[4];
    iVar7 = piVar26[5];
    iVar12 = piVar26[6];
    iVar17 = piVar26[7];
    iVar19 = piVar26[8];
    iVar21 = piVar26[9];
    *piVar26 = 7;
    local_a0 = CONCAT31(local_a0._1_3_,uVar25);
    *(undefined1 *)((int)param_2 + 9) = 1;
    *(undefined1 *)((int)param_2 + 9) = 0;
    param_2[4] = iVar6;
    param_2[5] = iVar11;
    param_2[6] = iVar16;
    param_2[7] = iVar18;
    param_2[8] = iVar20;
    param_2[9] = iVar7;
    param_2[10] = iVar12;
    param_2[0xb] = iVar17;
    param_2[0xc] = iVar19;
    param_2[0xd] = iVar21;
    param_2[0xe] = local_a0;
    param_2[0xf] = iStack_9c;
    *(undefined1 *)(param_2 + 0x2d) = 0;
    piVar26 = (int *)(*param_2 + 0x30);
    param_2[0x2c] = (int)piVar26;
LAB_00cb3e14:
    *(undefined1 *)((int)param_2 + 0xb5) = 1;
    param_2[0x10] = param_2[4];
    param_2[0x11] = param_2[5];
    param_2[0x12] = param_2[6];
    param_2[0x13] = param_2[7];
    param_2[0x14] = param_2[8];
    param_2[0x15] = param_2[9];
    param_2[0x16] = param_2[10];
    param_2[0x17] = param_2[0xb];
    param_2[0x18] = param_2[0xc];
    param_2[0x19] = param_2[0xd];
    param_2[0x1a] = param_2[0xe];
    param_2[0x1b] = param_2[0xf];
    param_2[0x1c] = (int)piVar26;
    *(undefined1 *)(param_2 + 0x2b) = 0;
LAB_00cb3e4c:
    param_2[0x1e] = (int)piVar26;
    uVar4 = 1;
    param_2[0x1f] = 1;
    param_2[0x1d] = (int)piVar26;
    *(undefined1 *)(param_2 + 0x22) = 0;
LAB_00cb3e70:
    param_2[0x20] = (int)piVar26;
    param_2[0x21] = uVar4;
    iVar6 = *piVar26;
    if (*(uint *)(iVar6 + 0x94) < uVar4) {
LAB_00cb3e88:
      *(undefined1 *)(param_2 + 0x22) = 1;
LAB_00cb3e90:
      iVar6 = param_2[0x10];
      local_d8 = (undefined4 *)param_2[0x11];
      local_e0 = (undefined4 *)param_2[0x13];
      unaff_r10 = *(byte *)(param_2 + 0x12);
      *(undefined1 *)(param_2 + 0x2b) = 1;
      *(undefined2 *)(param_2 + 0x2d) = 1;
      if (iVar6 == 9) {
LAB_00cb3f30:
        *param_1 = 0x80000003;
        *(undefined1 *)((int)param_2 + 10) = 3;
        return;
      }
    }
    else {
LAB_00cb3608:
      *(undefined1 *)(param_2 + 0x2a) = 0;
      param_2[0x26] = 0;
      param_2[0x27] = 0;
      param_2[0x28] = uVar4;
      param_2[0x29] = uVar4;
      param_2[0x23] = iVar6 + 0x80;
      param_2[0x24] = 0;
      unaff_r10 = local_dc;
switchD_00cb35cc_caseD_4:
      bVar2 = FUN_0163c8bc(param_2 + 0x23,param_3);
      if (bVar2 == 2) {
        *(undefined1 *)(param_2 + 0x22) = 4;
        *(undefined1 *)(param_2 + 0x2b) = 3;
        *(undefined1 *)(param_2 + 0x2d) = 3;
        goto LAB_00cb3f30;
      }
      FUN_0163c790(param_2 + 0x23);
      if (param_2[0x24] != 0) {
        (**(code **)(param_2[0x24] + 0xc))(param_2[0x25]);
      }
      *(undefined1 *)(param_2 + 0x22) = 1;
      if ((bVar2 & 1) != 0) goto LAB_00cb3e90;
      *(undefined1 *)(param_2 + 0x2b) = 1;
      *(undefined1 *)((int)param_2 + 0xb5) = 0;
      local_58 = param_2[0x10];
      local_54 = param_2[0x11];
      local_50 = param_2[0x12];
      local_4c = param_2[0x13];
      uStack_48 = param_2[0x14];
      uStack_44 = param_2[0x15];
      local_40 = param_2[0x16];
      uStack_3c = param_2[0x17];
      uStack_38 = param_2[0x18];
      uStack_34 = param_2[0x19];
      uStack_30 = param_2[0x1a];
      uStack_2c = param_2[0x1b];
      iVar6 = *(int *)param_2[0x1d];
      puVar5 = (uint *)(iVar6 + 0x24);
      piVar26 = (int *)(iVar6 + 0x20);
      do {
        uVar4 = *puVar5;
        bVar27 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar27);
      *puVar5 = uVar4 + 1;
      DataMemoryBarrier(0xb);
      uVar10 = uVar4 & 0xfffffff0;
      iVar7 = *piVar26;
      DataMemoryBarrier(0xb);
      if (uVar10 != *(uint *)(iVar7 + 0x300)) {
        bVar27 = (uVar4 & 0xf) < uVar10 - *(uint *)(iVar7 + 0x300) >> 4;
        iVar11 = iVar7;
        do {
          DataMemoryBarrier(0xb);
          iVar7 = *(int *)(iVar11 + 0x304);
          if (*(int *)(iVar11 + 0x304) == 0) {
            iVar12 = *(int *)(iVar11 + 0x300);
            iVar7 = thunk_FUN_016d4a50(0x310);
            if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x310);
            }
            piVar13 = (int *)(iVar11 + 0x304);
            *(int *)(iVar7 + 0x300) = iVar12 + 0x10;
            *(undefined4 *)(iVar7 + 0x304) = 0;
            *(undefined4 *)(iVar7 + 0x308) = 0;
            *(undefined4 *)(iVar7 + 0x30c) = 0;
            iVar12 = *piVar13;
            if (iVar12 == 0) {
              DataMemoryBarrier(0xb);
              do {
                bVar1 = (bool)hasExclusiveAccess(piVar13);
                if (bVar1) {
                  *piVar13 = iVar7;
                  DataMemoryBarrier(0xb);
                  goto LAB_00cb3840;
                }
                iVar12 = *piVar13;
              } while (iVar12 == 0);
            }
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
            piVar13 = (int *)(iVar12 + 0x304);
            *(int *)(iVar7 + 0x300) = *(int *)(iVar12 + 0x300) + 0x10;
            iVar16 = *piVar13;
            if (iVar16 == 0) {
              DataMemoryBarrier(0xb);
              do {
                bVar1 = (bool)hasExclusiveAccess(piVar13);
                if (bVar1) {
                  *piVar13 = iVar7;
                  bVar1 = true;
                  goto LAB_00cb37e8;
                }
                iVar16 = *piVar13;
              } while (iVar16 == 0);
            }
LAB_00cb37e0:
            do {
              bVar1 = false;
              ClearExclusiveLocal();
LAB_00cb37e8:
              while( true ) {
                DataMemoryBarrier(0xb);
                if (bVar1) {
                  iVar7 = iVar12;
                  goto LAB_00cb3840;
                }
                HintYield();
                *(int *)(iVar7 + 0x300) = *(int *)(iVar16 + 0x300) + 0x10;
                piVar13 = (int *)(iVar16 + 0x304);
                iVar16 = *piVar13;
                if (iVar16 != 0) break;
                DataMemoryBarrier(0xb);
                while (bVar1 = (bool)hasExclusiveAccess(piVar13), !bVar1) {
                  iVar16 = *piVar13;
                  if (iVar16 != 0) goto LAB_00cb37e0;
                }
                *piVar13 = iVar7;
                bVar1 = true;
              }
            } while( true );
          }
LAB_00cb3840:
          DataMemoryBarrier(0xb);
          if ((bool)(bVar27 & (~*(uint *)(iVar11 + 0x308) & 0xffff) == 0)) {
            if (*piVar26 == iVar11) {
              DataMemoryBarrier(0xb);
LAB_00cb3870:
              bVar27 = (bool)hasExclusiveAccess(piVar26);
              if (!bVar27) goto code_r0x00cb387c;
              *piVar26 = iVar7;
              puVar9 = (uint *)(iVar11 + 0x308);
              DataMemoryBarrier(0xb);
              do {
                uVar14 = *puVar5;
                bVar27 = (bool)hasExclusiveAccess(puVar5);
              } while (!bVar27);
              *puVar5 = uVar14;
              *(uint *)(iVar11 + 0x30c) = uVar14;
              DataMemoryBarrier(0xb);
              do {
                bVar27 = (bool)hasExclusiveAccess(puVar9);
              } while (!bVar27);
              *puVar9 = *puVar9 | 0x10000;
              bVar27 = true;
              goto LAB_00cb371c;
            }
LAB_00cb3888:
            ClearExclusiveLocal();
            bVar27 = false;
          }
          else {
            bVar27 = false;
          }
LAB_00cb371c:
          HintYield();
          iVar11 = iVar7;
        } while (*(uint *)(iVar7 + 0x300) != uVar10);
      }
      puVar9 = (uint *)(iVar7 + (uVar4 & 0xf) * 0x30);
      puVar5 = (uint *)(iVar7 + 0x308);
      *puVar9 = local_58;
      puVar9[1] = local_54;
      puVar9[2] = local_50;
      puVar9[3] = local_4c;
      puVar9[4] = uStack_48;
      puVar9[5] = uStack_44;
      puVar9[6] = local_40;
      puVar9[7] = uStack_3c;
      puVar9[8] = uStack_38;
      puVar9[9] = uStack_34;
      puVar9[10] = uStack_30;
      puVar9[0xb] = uStack_2c;
      DataMemoryBarrier(0xb);
      do {
        bVar27 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar27);
      *puVar5 = *puVar5 | 1 << (uVar4 & 0xf);
      DataMemoryBarrier(0xb);
      puVar5 = (uint *)(iVar6 + 0x48);
      do {
        uVar4 = *puVar5;
        bVar27 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar27);
      *puVar5 = uVar4 | 2;
      DataMemoryBarrier(0xb);
      if (uVar4 == 0) {
        iVar7 = *(int *)(iVar6 + 0x40);
        *(undefined4 *)(iVar6 + 0x40) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar27 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar27);
        *puVar5 = 0;
        if (iVar7 != 0) {
          (**(code **)(iVar7 + 4))(*(undefined4 *)(iVar6 + 0x44));
        }
      }
      iVar6 = 8;
      *(undefined2 *)(param_2 + 0x2d) = 1;
    }
    local_d0 = param_2 + 4;
    FUN_00c8b2cc(local_d0);
    if (iVar6 == 0) {
      cVar24 = unaff_r10 - 4;
      if (unaff_r10 < 4) {
        cVar24 = '\x04';
      }
      puVar23 = local_e0;
      if ((cVar24 == '\x05') || ((cVar24 == '\x04' && (unaff_r10 == 3)))) goto LAB_00cb3f04;
    }
    else {
      puVar23 = local_d8;
      if (iVar6 == 2) {
LAB_00cb3f04:
        (**(code **)*puVar23)();
      }
    }
    piVar26 = (int *)(*param_2 + 0x34);
    uVar4 = 0;
    *(undefined1 *)(param_2 + 5) = 0;
    param_2[3] = (int)piVar26;
    param_2[4] = (int)piVar26;
    puVar23 = local_d8;
LAB_00cb3b94:
    piVar13 = param_2 + 5;
    uVar28 = thunk_FUN_016de0ee(uVar4,0x40);
    iVar6 = (int)uVar28 + (int)((ulonglong)uVar28 >> 0x20);
    puVar22 = (undefined4 *)*param_3;
    if (*(char *)(iVar6 + 0x38) == '\x01') {
LAB_00cb3bf4:
      cVar24 = *(char *)(iVar6 + 0x31);
      cVar8 = *(char *)(iVar6 + 0x30);
      cVar3 = cVar24;
      if (cVar8 != '\x01') {
LAB_00cb3c20:
        *(char *)(iVar6 + 0x31) = cVar3;
        goto LAB_00cb3c24;
      }
      if (cVar24 != '\0') {
        cVar3 = cVar24 + -1;
        goto LAB_00cb3c20;
      }
      FUN_016455a4(*puVar22,puVar22[1]);
      goto LAB_00cb4024;
    }
    cVar8 = '\0';
    cVar24 = '\0';
    if (*(char *)(iVar6 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar6,FUN_00bacf28);
      *(undefined1 *)(iVar6 + 0x38) = 1;
      goto LAB_00cb3bf4;
    }
LAB_00cb3c24:
    iVar7 = *piVar26;
    FUN_00c73e94(&local_58,iVar7 + 0x70,iVar7 + 0x20);
    if (local_58 == 0x80000002) {
      uVar4 = 0x80000002;
      DataMemoryBarrier(0xb);
      if (1 < *(uint *)(iVar7 + 0x80)) {
        puVar15 = &DAT_018ac108;
LAB_00cb4054:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00412a7f,0x30,puVar15);
      }
    }
    else {
      if (local_58 == 0x80000003) {
        FUN_0163e1c0(iVar7 + 0x40,puVar22);
        FUN_00c73e94(&local_58,iVar7 + 0x70,iVar7 + 0x20);
        if (local_58 == 0x80000002) {
          uVar4 = 0x80000002;
          DataMemoryBarrier(0xb);
          if (1 < *(uint *)(iVar7 + 0x80)) {
            puVar15 = &DAT_018ac0f8;
            goto LAB_00cb4054;
          }
          goto LAB_00cb3d1c;
        }
        if (local_58 == 0x80000003) {
          if ((*(char *)(iVar7 + 0x7c) != '\x01') ||
             (DataMemoryBarrier(0xb), 1 < *(uint *)(iVar7 + 0x80))) {
            if (cVar8 != '\0') {
              if (*(char *)(iVar6 + 0x38) != '\x01') {
                if (*(char *)(iVar6 + 0x38) == '\x02') goto LAB_00cb4024;
                FUN_015e8e6c(iVar6,FUN_01655ec4);
                *(undefined1 *)(iVar6 + 0x38) = 1;
              }
              *(char *)(iVar6 + 0x31) = cVar24;
              *(undefined1 *)(iVar6 + 0x30) = 1;
            }
LAB_00cb4024:
            *(undefined1 *)piVar13 = 3;
            goto LAB_00cb402c;
          }
          *(undefined1 *)piVar13 = 1;
          uVar4 = 0x80000002;
          goto LAB_00cb3f7c;
        }
        puVar5 = (uint *)(iVar7 + 0x80);
        DataMemoryBarrier(0xb);
        do {
          uVar4 = *puVar5;
          bVar27 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar27);
        *puVar5 = uVar4 - 2;
      }
      else {
        puVar5 = (uint *)(iVar7 + 0x80);
        DataMemoryBarrier(0xb);
        do {
          uVar4 = *puVar5;
          bVar27 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar27);
        *puVar5 = uVar4 - 2;
      }
      if (uVar4 < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_015bef44();
      }
      local_88 = local_54;
      uStack_84 = local_50;
      uStack_80 = local_4c;
      uVar4 = local_58;
    }
LAB_00cb3d1c:
    uVar25 = 1;
    if (uVar4 == 0x80000003) {
      uVar25 = 3;
    }
    *(undefined1 *)piVar13 = uVar25;
    if (uVar4 == 0x80000003) {
LAB_00cb402c:
      *param_1 = 0x80000003;
      *(undefined1 *)((int)param_2 + 10) = 4;
      return;
    }
    local_78 = local_88;
    uStack_74 = uStack_84;
    uStack_70 = uStack_80;
    if (uVar4 == 0x80000002) {
      uVar4 = 0x80000002;
      goto LAB_00cb3f7c;
    }
    local_94 = local_88;
    local_90 = uStack_84;
    local_8c = uStack_80;
    uVar10 = uVar4;
    if (-1 < (int)uVar4) {
      uVar10 = 2;
    }
    if ((uVar10 & 0xff) != (uint)*(byte *)(param_2 + 2)) {
      *(char *)(*param_2 + 0x38) = (char)uVar10;
      local_68 = local_88;
      local_64 = uStack_84;
      local_60 = uStack_80;
LAB_00cb3f7c:
      *(undefined1 *)((int)param_2 + 9) = 0;
      *param_1 = uVar4;
      param_1[1] = local_68;
      param_1[2] = local_64;
      param_1[3] = local_60;
      *(undefined1 *)((int)param_2 + 10) = 1;
      return;
    }
    local_98 = uVar4;
    FUN_00ac6f0c(&local_98);
    piVar26 = (int *)*param_2;
    uVar25 = (undefined1)param_2[2];
    *(undefined1 *)((int)param_2 + 9) = 0;
    local_d8 = puVar23;
    local_dc = unaff_r10;
  } while( true );
code_r0x00cb387c:
  if (*piVar26 != iVar11) goto LAB_00cb3888;
  goto LAB_00cb3870;
}

