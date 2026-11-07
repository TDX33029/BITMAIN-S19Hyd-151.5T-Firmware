// FUN_008cc538 @ 008cc538 size=4280 calls_out=39 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING: Removing unreachable block (ram,0x008cc9c8) */
/* WARNING: Removing unreachable block (ram,0x008cce2c) */
/* WARNING: Removing unreachable block (ram,0x008cd354) */

int FUN_008cc538(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined *puVar2;
  code ******ppppppcVar3;
  code *******pppppppcVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  code *******unaff_r5;
  undefined4 uVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  code *******pppppppcVar20;
  code *****pppppcVar21;
  uint uVar22;
  code *******pppppppcVar23;
  int iVar24;
  undefined1 *puVar25;
  bool bVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  int *local_c8;
  int *local_c4;
  int *local_bc;
  code ******local_b8;
  code *******local_b4;
  code *******local_b0;
  code *****local_ac;
  code *******local_a8;
  code *******local_a4;
  code *******local_a0;
  code *local_9c;
  code *******local_98;
  code *******local_94;
  code ******ppppppcStack_90;
  code ******ppppppcStack_8c;
  code *******local_88;
  undefined8 *local_84;
  undefined8 local_80;
  code *******local_78;
  code *local_74;
  code *******local_70;
  code *******local_6c;
  code ******local_68;
  code ******local_64;
  code *******local_60;
  code *local_5c;
  code *******local_54;
  code *******local_50;
  code *******local_4c;
  code *******local_48;
  code *******local_44;
  code ******local_40;
  code *******local_38;
  code *******local_34;
  code ******local_30;
  code ******local_2c;
  undefined4 local_28;
  
  if (*param_1 == 1) {
    uVar6 = FUN_01657fc4(param_1 + 2,*param_2);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
    iVar19 = param_1[0x48];
    iVar16 = param_1[0x49];
    iVar13 = param_1[0x4a];
    if (*param_1 == 0) {
      if ((char)param_1[0x40] == '\x03') {
        FUN_008cda38(param_1 + 4);
      }
    }
    else {
      FUN_00a07b4c(param_1 + 2);
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
    *param_1 = 0;
    param_1[1] = iVar19;
    param_1[2] = iVar16;
    param_1[3] = iVar13;
    iVar13 = FUN_008cc538(param_1,param_2);
    return iVar13;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x40]) {
  case '\0':
    iVar11 = param_1[3];
    iVar19 = param_1[1];
    iVar13 = *(int *)param_1[2];
    iVar16 = ((int *)param_1[2])[1];
    uVar14 = *(undefined4 *)(iVar11 + 4);
    iVar17 = *(int *)(iVar11 + 8);
    iVar24 = *(int *)(iVar11 + 0xc);
    iVar11 = *(int *)(iVar11 + 0x10);
    if (iVar17 == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = thunk_FUN_016d4a50(iVar17);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar17);
      }
    }
    FUN_016dd1aa(iVar7,uVar14,iVar17);
    param_1[4] = iVar13;
    param_1[10] = iVar11;
    param_1[5] = iVar16;
    param_1[6] = iVar17;
    param_1[7] = iVar7;
    param_1[8] = iVar17;
    param_1[9] = iVar24;
    param_1[0xb] = iVar19;
    *(undefined1 *)(param_1 + 0x19) = 0;
LAB_008cc694:
    param_1[0xe] = iVar16;
    param_1[0xc] = iVar19;
    param_1[0xd] = iVar13;
    iVar13 = 0;
    param_1[0xf] = param_1[6];
    param_1[0x10] = param_1[7];
    param_1[0x11] = param_1[8];
    param_1[0x12] = param_1[9];
    param_1[0x13] = param_1[10];
    iVar16 = param_1[0x11];
    if (iVar16 < 0) {
LAB_008cc6c4:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(iVar13,iVar16);
    }
    iVar11 = param_1[0x10];
    iVar19 = param_1[0x12];
    iVar17 = param_1[0x13];
    if (iVar16 == 0) {
      iVar24 = 1;
    }
    else {
      iVar24 = thunk_FUN_016d4a50(iVar16);
      iVar13 = iVar16;
      if (iVar24 == 0) {
        iVar13 = 1;
        goto LAB_008cc6c4;
      }
    }
    param_1[0x14] = iVar13;
    param_1[0x15] = iVar24;
    FUN_016dd1aa(iVar24,iVar11,iVar16);
    param_1[0x16] = iVar16;
    param_1[0x17] = iVar19;
    param_1[0x18] = iVar17;
    uVar27 = FUN_007143c8();
    piVar8 = (int *)uVar27;
    bVar1 = *(byte *)(piVar8 + 0x14);
    if ((((uVar27 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar13 = FUN_015bf3f8(), iVar13 == 0)) {
      *(undefined1 *)(piVar8 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar8;
      bVar26 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar26);
    *piVar8 = 0;
    if (iVar13 == 2) {
      FUN_016d6968(0xf0,piVar8,0x81,1);
    }
    iVar24 = param_1[0x16];
    iVar16 = param_1[0xc];
    iVar13 = param_1[0xd];
    iVar19 = param_1[0xe];
    iVar17 = param_1[0x15];
    iVar7 = param_1[0x18];
    iVar11 = param_1[0x17];
    *(undefined1 *)((int)param_1 + 0x65) =
         *(undefined1 *)(*(int *)(&DAT_018b0474 + (uint)bVar1 * 4) + 5);
    if (iVar24 == 0) {
      iVar9 = 1;
    }
    else {
      iVar9 = thunk_FUN_016d4a50(iVar24);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar24);
      }
    }
    FUN_016dd1aa(iVar9,iVar17,iVar24);
    param_1[0x1a] = iVar13;
    param_1[0x1f] = iVar11;
    param_1[0x20] = iVar7;
    param_1[0x1b] = iVar19;
    param_1[0x1c] = iVar24;
    param_1[0x1d] = iVar9;
    param_1[0x1e] = iVar24;
    param_1[0x21] = iVar16;
    *(undefined1 *)(param_1 + 0x30) = 0;
LAB_008cc868:
    param_1[0x22] = iVar16;
    param_1[0x23] = iVar13;
    param_1[0x24] = iVar19;
    iVar13 = 0;
    param_1[0x25] = param_1[0x1c];
    param_1[0x26] = param_1[0x1d];
    param_1[0x27] = param_1[0x1e];
    param_1[0x28] = param_1[0x1f];
    param_1[0x29] = param_1[0x20];
    iVar16 = param_1[0x27];
    if (iVar16 < 0) {
LAB_008cc898:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(iVar13,iVar16);
    }
    iVar19 = param_1[0x26];
    iVar11 = param_1[0x28];
    iVar17 = param_1[0x29];
    if (iVar16 == 0) {
      iVar24 = 1;
    }
    else {
      iVar24 = thunk_FUN_016d4a50(iVar16);
      iVar13 = iVar16;
      if (iVar24 == 0) {
        iVar13 = 1;
        goto LAB_008cc898;
      }
    }
    param_1[0x2a] = iVar13;
    param_1[0x2b] = iVar24;
    FUN_016dd1aa(iVar24,iVar19,iVar16);
    *(undefined1 *)(param_1 + 0x3f) = 0;
    param_1[0x2c] = iVar16;
    param_1[0x2d] = iVar11;
    param_1[0x2e] = iVar17;
    param_1[0x31] = param_1[0x22] + 0xc;
switchD_008cc718_caseD_3:
    unaff_r5 = (code *******)(param_1 + 0x31);
    iVar13 = FUN_007d67b8(unaff_r5,param_2);
    if (iVar13 == 0) {
      *(undefined1 *)(param_1 + 0x30) = 3;
    }
    else {
      param_1[0x2f] = iVar13;
      if ((char)param_1[0x3f] == '\x03') {
        cVar5 = (char)param_1[0x3e];
        bVar26 = cVar5 == '\x03';
        if (bVar26) {
          cVar5 = (char)param_1[0x35];
        }
        if (bVar26 && cVar5 == '\x04') {
          FUN_0163c790(param_1 + 0x36);
          if (param_1[0x37] != 0) {
            (**(code **)(param_1[0x37] + 0xc))(param_1[0x38]);
          }
        }
      }
      if (param_1[0x23] == 1) {
        uVar6 = *(int *)param_1[0x22] * param_1[0x24];
        if (0xff < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_0034b2fb,0x2e,&local_80,&DAT_0186b108,&DAT_0186afe8);
        }
      }
      else {
        uVar6 = (uint)*(byte *)((int *)param_1[0x22] + 1);
      }
      unaff_r5 = *(code ********)(*(int *)(param_1[0x2f] + 0x20) + 0x14);
      uVar28 = (*(code *)unaff_r5)(*(undefined4 *)(param_1[0x2f] + 0x1c),param_1[0x23],uVar6,
                                   param_1[0x2d],param_1[0x2e],param_1[0x2b],param_1[0x2c]);
      *(undefined8 *)(param_1 + 0x31) = uVar28;
LAB_008cca04:
      local_c8 = param_1 + 0x1a;
      uVar27 = (**(code **)((int)((ulonglong)uVar28 >> 0x20) + 0xc))((int)uVar28,param_2);
      pppppppcVar23 = (code *******)(uVar27 >> 0x20);
      if ((uVar27 & 1) == 0) {
        iVar13 = param_1[0x31];
        puVar15 = (undefined4 *)param_1[0x32];
        pcVar10 = (code *)*puVar15;
        if (pcVar10 != (code *)0x0) {
          (*pcVar10)(iVar13);
        }
        if (puVar15[1] != 0) {
          thunk_FUN_016d3fb4(iVar13);
        }
        unaff_r5 = (code *******)param_1[0x2f];
        if (*(code *)unaff_r5 == (code)0x0) {
          bVar26 = (bool)hasExclusiveAccess(unaff_r5);
          if (!bVar26) goto LAB_008ccd5c;
          *(code *)unaff_r5 = (code)0x1;
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_008ccd5c:
          FUN_01280da8(unaff_r5);
        }
        FUN_0128236c(unaff_r5);
        FUN_0163af68(unaff_r5,1,unaff_r5);
        if (param_1[0x2a] != 0) {
          thunk_FUN_016d3fb4(param_1[0x2b]);
        }
        if (param_1[0x25] != 0) {
          thunk_FUN_016d3fb4(param_1[0x26]);
        }
        *(undefined1 *)(param_1 + 0x30) = 1;
        if ((uVar27 & 1) == 0) {
          FUN_00815de4(local_c8);
          if (pppppppcVar23 == (code *******)0x0) {
            param_1[0x1a] = param_1[0xd];
            *(undefined1 *)(param_1 + 0x25) = 0;
            param_1[0x1b] = param_1[0xe];
            param_1[0x1c] = param_1[0xc];
            param_1[0x1d] = param_1[0x17];
            param_1[0x1e] = param_1[0x18];
            goto switchD_008cc618_caseD_4;
          }
          goto LAB_008cd300;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x30) = 4;
      }
    }
    local_bc = param_1 + 0x19;
    *(undefined1 *)local_bc = 3;
LAB_008cd340:
    bVar26 = true;
    *(undefined1 *)(param_1 + 0x40) = 3;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01864e0c);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01864e0c);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x19]) {
    case '\0':
      iVar13 = param_1[4];
      iVar16 = param_1[5];
      iVar19 = param_1[0xb];
      goto LAB_008cc694;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01864dbc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01864dbc);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x30]) {
      case '\0':
        iVar13 = param_1[0x1a];
        iVar19 = param_1[0x1b];
        iVar16 = param_1[0x21];
        goto LAB_008cc868;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01864dac);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01864dac);
      case '\x03':
        goto switchD_008cc718_caseD_3;
      case '\x04':
        uVar28 = *(undefined8 *)(param_1 + 0x31);
      }
      goto LAB_008cca04;
    }
switchD_008cc618_caseD_4:
    local_bc = param_1 + 0x19;
    unaff_r5 = (code *******)(param_1 + 0x1a);
    FUN_008cdaf8(&local_80,unaff_r5,param_2);
    pppppppcVar20 = local_78;
    pppppppcVar4 = (code *******)local_80._4_4_;
    ppppppcVar3 = (code ******)local_80;
    if ((code ******)local_80 == (code ******)0x80000001) {
      *(undefined1 *)local_bc = 4;
      goto LAB_008cd340;
    }
    FUN_008c89dc(unaff_r5);
    if (ppppppcVar3 == (code ******)&DAT_80000000) {
      local_88 = pppppppcVar4;
      pppppppcVar23 = pppppppcVar4;
      if (*(char *)((int)param_1 + 0x65) != '\0') {
        if ((DAT_018d9130 < 4) &&
           (((DAT_018d9878 - 1 < 2 ||
             ((DAT_018d9878 != 0 && (cVar5 = FUN_0169ac90(&DAT_018d9870), cVar5 != '\0')))) &&
            (iVar13 = FUN_016949d8(DAT_018d9870), iVar13 != 0)))) {
          local_40 = (code ******)(DAT_018d9870 + 0x1c);
          local_80._0_4_ = (code ******)*local_40;
          local_80._4_4_ = *(code **)(DAT_018d9870 + 0x20);
          if ((code *******)local_80._4_4_ == (code *******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01864ddc);
          }
          local_78 = *(code ********)(DAT_018d9870 + 0x24);
          local_74 = *(code **)(DAT_018d9870 + 0x28);
          local_34 = (code *******)&local_54;
          local_44 = (code *******)&DAT_00000001;
          local_50 = (code *******)&local_a8;
          local_a0 = (code *******)&local_88;
          local_a8 = (code *******)(param_1 + 0x17);
          local_48 = (code *******)&local_38;
          local_70 = (code *******)0x0;
          local_30 = (code ******)&DAT_018abb78;
          local_54 = (code *******)&DAT_00345cba;
          local_9c = FUN_00604528;
          local_a4 = (code *******)FUN_00facd88;
          local_38 = (code *******)&local_80;
          FUN_008ce4cc(&local_48);
        }
        pppppppcVar23 = (code *******)0x0;
        (*(code *)**local_88)();
      }
LAB_008cd300:
      if (param_1[0x14] != 0) {
        thunk_FUN_016d3fb4(param_1[0x15]);
      }
      iVar13 = param_1[0xf];
    }
    else {
      iVar13 = 0;
      local_b0 = pppppppcVar20;
      local_b4 = pppppppcVar4;
      local_b8 = ppppppcVar3;
      local_ac = (code *****)0x0;
      if (pppppppcVar20 != (code *******)0x0) {
        iVar16 = param_1[0x16];
        pppppcVar21 = (code *****)0x0;
        do {
          if ((*(int *)((int)pppppppcVar4 + iVar13 + 8) != iVar16) ||
             (iVar19 = thunk_FUN_016dd50a(*(undefined4 *)((int)pppppppcVar4 + iVar13 + 4),
                                          param_1[0x15],iVar16), iVar19 != 0)) {
            pppppcVar21 = (code *****)((int)pppppcVar21 + 1);
            local_ac = pppppcVar21;
          }
          iVar13 = iVar13 + 0x10;
        } while ((int)pppppppcVar20 * 0x10 != iVar13);
        if (0 < (int)pppppcVar21) {
          FUN_008cf98c(&local_38);
          local_70 = local_38;
          local_6c = local_34;
          local_68 = local_30;
          local_64 = local_2c;
          local_80._4_4_ = (code *)0x0;
          local_78 = (code *******)0x0;
          local_74 = (code *)0x0;
          local_80._0_4_ = (code ******)&DAT_005674cc;
          FUN_008d4048(&local_80,pppppppcVar4,pppppppcVar4 + (int)pppppppcVar20 * 4);
          local_a8 = (code *******)(code ******)local_80;
          local_a4 = (code *******)local_80._4_4_;
          local_a0 = local_78;
          local_9c = local_74;
          local_98 = local_70;
          local_94 = local_6c;
          ppppppcStack_90 = local_68;
          ppppppcStack_8c = local_64;
          if (*(char *)((int)param_1 + 0x65) == '\0') {
            local_64 = (code ******)FUN_008cfd78;
            local_68 = (code ******)(param_1 + 0x14);
            local_70 = (code *******)(param_1 + 0xd);
            local_78 = (code *******)(param_1 + 0x17);
            local_80._0_4_ = &local_ac;
            local_5c = FUN_008d37f4;
            local_6c = (code *******)&LAB_009d4d9c;
            local_74 = FUN_00facd88;
            local_80._4_4_ = FUN_00fac2b8;
            local_60 = (code *******)&local_a8;
            FUN_00600d2c(&local_38,&DAT_00345be2,&local_80);
            local_48 = local_38;
            local_44 = local_34;
            local_40 = local_30;
            pppppppcVar23 = (code *******)FUN_008c8bc8(&local_48);
            FUN_008d56e8(&local_a8);
            FUN_008cfec4(pppppppcVar4,pppppppcVar20);
            if (ppppppcVar3 != (code ******)0x0) {
              thunk_FUN_016d3fb4(pppppppcVar4);
            }
            goto LAB_008cd300;
          }
          if (((DAT_018d9130 < 4) &&
              ((DAT_018d9884 - 1 < 2 ||
               ((DAT_018d9884 != 0 && (cVar5 = FUN_0169ac90(&DAT_018d987c), cVar5 != '\0')))))) &&
             (iVar13 = FUN_016949d8(DAT_018d987c), iVar13 != 0)) {
            local_4c = (code *******)(DAT_018d987c + 0x1c);
            local_38 = (code *******)*local_4c;
            local_34 = *(code ********)(DAT_018d987c + 0x20);
            if (local_34 == (code *******)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01864dcc);
            }
            local_30 = *(code *******)(DAT_018d987c + 0x24);
            local_2c = *(code *******)(DAT_018d987c + 0x28);
            local_28 = 0;
            local_88 = (code *******)&DAT_00345c41;
            local_5c = FUN_008d37f4;
            local_64 = (code ******)FUN_008cfd78;
            local_68 = (code ******)(param_1 + 0x14);
            local_6c = (code *******)&LAB_009d4d9c;
            local_70 = (code *******)(param_1 + 0xd);
            local_74 = FUN_00facd88;
            local_78 = (code *******)(param_1 + 0x17);
            local_80._4_4_ = FUN_00fac2b8;
            local_80._0_4_ = &local_ac;
            local_40 = (code ******)&DAT_018abb78;
            local_44 = (code *******)&local_88;
            local_48 = (code *******)&local_38;
            local_50 = (code *******)&DAT_00000001;
            local_54 = (code *******)&local_48;
            local_84 = &local_80;
            local_60 = (code *******)&local_a8;
            FUN_008ce3fc(&local_54);
          }
          FUN_008d56e8(&local_a8);
        }
        pppppppcVar23 = pppppppcVar4 + 1;
        do {
          if (pppppppcVar23[-1] != (code ******)0x0) {
            thunk_FUN_016d3fb4(*pppppppcVar23);
          }
          pppppppcVar23 = pppppppcVar23 + 4;
          pppppppcVar20 = (code *******)((int)pppppppcVar20 + -1);
        } while (pppppppcVar20 != (code *******)0x0);
      }
      if (ppppppcVar3 != (code ******)0x0) {
        thunk_FUN_016d3fb4(pppppppcVar4);
      }
      if (param_1[0x14] != 0) {
        thunk_FUN_016d3fb4(param_1[0x15]);
      }
      iVar13 = param_1[0xf];
      pppppppcVar23 = (code *******)0x0;
    }
    if (iVar13 != 0) {
      thunk_FUN_016d3fb4(param_1[0x10]);
    }
    local_bc = param_1 + 0x19;
    local_c4 = param_1 + 4;
    *(undefined1 *)local_bc = 1;
    FUN_008cda38(local_c4);
    bVar26 = false;
    unaff_r5 = (code *******)0x0;
    if (pppppppcVar23 != (code *******)0x0) {
      iVar16 = param_1[1];
      iVar13 = param_1[3];
      local_88 = pppppppcVar23;
      if ((DAT_018d9130 < 4) && (DAT_018d989c != '\0')) {
        if (DAT_018d989c == '\x01') {
LAB_008ccae0:
          DataMemoryBarrier(0xb);
          pcVar12 = s_SetGloba_00414c05;
          puVar2 = &DAT_018ae394;
          if (DAT_018dd984 == 2) {
            pcVar12 = DAT_018daa74;
            puVar2 = DAT_018daa78;
            if (DAT_018daa70 != 0) {
              pcVar12 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
          }
          iVar19 = (**(code **)(puVar2 + 0x14))(pcVar12,DAT_018d9894);
          if (iVar19 == 0) goto LAB_008ccc9c;
        }
        else if (DAT_018d989c != '\x02') {
          cVar5 = FUN_0169ac90(&DAT_018d9894);
          if (cVar5 == '\0') goto LAB_008ccc9c;
          if (cVar5 != '\x02') goto LAB_008ccae0;
        }
        if (DAT_018d9894[8] == (code ******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01864e1c);
        }
        local_a0 = (code *******)(iVar13 + 0xc);
        local_34 = (code *******)DAT_018d9894[8];
        local_30 = DAT_018d9894[9];
        local_2c = DAT_018d9894[10];
        local_4c = DAT_018d9894 + 7;
        local_38 = (code *******)*local_4c;
        local_98 = (code *******)&local_88;
        local_b4 = (code *******)&local_a8;
        local_28 = 0;
        local_b8 = (code ******)&DAT_0058a917;
        local_54 = (code *******)&local_48;
        local_9c = (code *)&LAB_00fac484;
        local_a8 = (code *******)(iVar16 + 8);
        local_94 = (code *******)FUN_00604528;
        local_a4 = (code *******)&DAT_00f5c97c;
        local_70 = (code *******)&local_54;
        local_40 = (code ******)&DAT_018abb78;
        local_44 = &local_b8;
        local_48 = (code *******)&local_38;
        local_50 = (code *******)&DAT_00000001;
        local_80._4_4_ = (code *)0x0;
        local_80._0_4_ = (code ******)&DAT_00000001;
        DataMemoryBarrier(0xb);
        pcVar12 = s_SetGloba_00414c05;
        puVar2 = &DAT_018ae394;
        if (DAT_018dd984 == 2) {
          pcVar12 = DAT_018daa74;
          puVar2 = DAT_018daa78;
          if (DAT_018daa70 != 0) {
            pcVar12 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
        }
        local_6c = DAT_018d9894;
        iVar13 = (**(code **)(puVar2 + 0x28))(pcVar12,&local_80);
        if (iVar13 != 0) {
          (**(code **)(puVar2 + 0x2c))(pcVar12,&local_80);
        }
      }
LAB_008ccc9c:
      unaff_r5 = local_88;
    }
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  iVar13 = 1;
  if (!bVar26) {
    if (unaff_r5 == (code *******)0x0) {
      return 0;
    }
    local_a8 = unaff_r5;
    iVar19 = (*(code *)param_1[0x4b])(&local_a8);
    iVar13 = 0;
    iVar16 = 0;
    if (iVar19 != 0) {
      iVar16 = param_1[0x46];
    }
    if (iVar19 != 0 && iVar16 != 0) {
      iVar13 = param_1[0x44];
      uVar18 = param_1[0x42];
      uVar6 = param_1[0x43];
      param_1[0x46] = iVar16 + -1;
      FUN_0165a798(&local_80);
      uVar22 = (int)(code ******)local_80 + uVar18;
      pcVar10 = (code *)((int)local_80._4_4_ + CARRY4((uint)(code ******)local_80,uVar18) + uVar6);
      if ((int)uVar6 < 0 !=
          (int)(((uint)local_80._4_4_ ^ (uint)pcVar10) & ~((uint)local_80._4_4_ ^ uVar6)) < 0) {
LAB_008cd1c8:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
      }
      puVar25 = (undefined1 *)(iVar13 + (int)local_78);
      if (&DAT_3b9aca00 <= puVar25) {
        bVar26 = 0xfffffffe < uVar22;
        uVar22 = uVar22 + 1;
        if ((int)(((uint)pcVar10 ^ (uint)(pcVar10 + bVar26)) & ~(uint)pcVar10) < 0)
        goto LAB_008cd1c8;
        puVar25 = puVar25 + -1000000000;
        pcVar10 = pcVar10 + bVar26;
      }
      local_80 = FUN_0164ec90(&DAT_01864d8c);
      iVar19 = (int)(local_80 >> 0x20);
      iVar13 = (int)local_80;
      iVar16 = 0x180;
      if ((local_80 & 1) != 0) {
        iVar16 = 0xb8;
      }
      if (*(undefined1 **)(iVar19 + iVar16 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                     ,0x73,&DAT_01864d8c);
      }
      if (*param_1 == 0) {
        if ((char)param_1[0x40] == '\x03') {
          FUN_008cda38(param_1 + 4);
        }
      }
      else {
        FUN_00a07b4c(param_1 + 2);
      }
      param_1[0xe] = iVar13;
      *param_1 = 1;
      param_1[0x10] = uVar22;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0xf] = iVar19;
      *(undefined1 *)(param_1 + 0x14) = 0;
      param_1[0x12] = (int)puVar25;
      param_1[0x11] = (int)pcVar10;
      iVar16 = FUN_008cc538(param_1,param_2);
      (*(code *)**unaff_r5)(unaff_r5);
      iVar13 = 0;
      if (iVar16 != 2) {
        iVar13 = iVar16;
      }
      return iVar13;
    }
  }
  return iVar13;
}

