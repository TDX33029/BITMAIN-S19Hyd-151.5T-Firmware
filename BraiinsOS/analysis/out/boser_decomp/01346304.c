// FUN_01346304 @ 01346304 size=3740 calls_out=22 calls_in=2
// strings: 

void FUN_01346304(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  ushort uVar1;
  undefined4 ****ppppuVar2;
  short *psVar3;
  char *pcVar4;
  ushort **ppuVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 ****ppppuVar11;
  byte bVar12;
  undefined4 *puVar13;
  undefined *puVar14;
  undefined4 ****ppppuVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 ****ppppuVar18;
  ushort *puVar19;
  byte *pbVar20;
  bool bVar21;
  longlong lVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  undefined4 ****local_dc;
  undefined4 ****local_d8;
  undefined4 ****local_d4;
  undefined1 local_cc;
  undefined4 ****local_c0;
  ushort **local_bc;
  undefined4 ****local_b8;
  int local_b0;
  short *local_ac;
  uint local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  undefined2 local_74;
  undefined1 local_72;
  ushort local_70 [11];
  undefined1 local_5a;
  undefined1 local_59;
  undefined4 local_58;
  undefined4 ****local_54;
  undefined4 ****local_50;
  code *local_4c;
  ushort **local_48;
  code *local_44;
  ushort **local_40;
  code *local_3c;
  ushort *local_38;
  ushort *local_34;
  int local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  ppppuVar15 = (undefined4 ****)param_2[1];
  uVar17 = 0;
  if ((int)ppppuVar15 < 0) {
LAB_01346320:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar17,ppppuVar15);
  }
  uVar16 = *param_2;
  if (ppppuVar15 == (undefined4 ****)0x0) {
    local_bc = (ushort **)&DAT_00000001;
    local_c0 = (undefined4 ****)0x0;
  }
  else {
    uVar17 = 1;
    local_bc = (ushort **)FUN_01298504(ppppuVar15,1);
    local_c0 = ppppuVar15;
    if (local_bc == (ushort **)0x0) goto LAB_01346320;
  }
  puVar13 = (undefined4 *)param_2[2];
  local_b8 = (undefined4 ****)0x0;
  lVar22 = FUN_013437d0(uVar16,ppppuVar15,*puVar13,puVar13[1]);
  iVar10 = (int)((ulonglong)lVar22 >> 0x20);
  pcVar4 = (char *)lVar22;
  if (lVar22 < 0) {
    uVar17 = 0;
LAB_013463a0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar17,iVar10);
  }
  if (iVar10 == 0) {
    local_ac = (short *)&DAT_00000001;
    local_b0 = 0;
  }
  else {
    uVar17 = 1;
    local_ac = (short *)FUN_01298504(iVar10,1);
    if (local_ac == (short *)0x0) goto LAB_013463a0;
    local_b0 = iVar10;
  }
  local_a8 = 0;
  if ((puVar13[2] == 0 || iVar10 == 0) || (*pcVar4 != '/')) {
    FUN_01347274(&local_b0,pcVar4,iVar10,0);
  }
  else {
    FUN_01347274(&local_c0,pcVar4,iVar10,0);
    local_54 = local_b8;
    local_58 = local_bc;
    FUN_01343b30(&local_b0,0,&local_58,1);
    local_b8 = (undefined4 ****)0x0;
  }
  uVar23 = FUN_013437a4(param_2);
  uVar6 = (uint)((ulonglong)uVar23 >> 0x20);
  if ((int)uVar23 == 0) {
    local_d4 = (undefined4 ****)0x0;
  }
  else {
    if ((uint)((int)local_c0 - (int)local_b8) < uVar6) {
      FUN_006520b4(&local_c0,local_b8,uVar6,1,1);
    }
    FUN_01bed4e2((byte *)((int)local_bc + (int)local_b8),(int)uVar23,uVar6);
    ppppuVar11 = (undefined4 ****)((int)local_b8 + uVar6);
    ppuVar5 = local_bc;
    ppppuVar15 = ppppuVar11;
    if (ppppuVar11 == (undefined4 ****)0x0) {
      local_d4 = (undefined4 ****)0x0;
    }
    else {
      do {
        bVar12 = *(byte *)ppuVar5;
        if (bVar12 - 0x41 < 0x1a) {
          bVar12 = bVar12 | 0x20;
        }
        *(byte *)ppuVar5 = bVar12;
        ppppuVar15 = (undefined4 ****)((int)ppppuVar15 + -1);
        ppuVar5 = (ushort **)((int)ppuVar5 + 1);
      } while (ppppuVar15 != (undefined4 ****)0x0);
      local_d4 = ppppuVar11;
    }
    local_b8 = local_d4;
    if (local_c0 == local_d4) {
      local_b8 = ppppuVar11;
      FUN_006520b4(&local_c0,local_d4,1,1,1);
    }
    *(byte *)((int)local_bc + (int)local_b8) = 0x3a;
    local_b8 = (undefined4 ****)((int)local_d4 + 1);
  }
  FUN_0134392c(&local_a0,param_2);
  if ((char)local_90 == '\x04') {
    local_cc = 4;
    goto LAB_01346c78;
  }
  local_88 = local_a0;
  uStack_84 = uStack_9c;
  uStack_80 = uStack_98;
  uStack_7c = uStack_94;
  local_78 = local_90;
  if ((uint)((int)local_c0 - (int)local_b8) < 2) {
    FUN_006520b4(&local_c0,local_b8,2,1,1);
  }
  ((byte *)((int)local_bc + (int)local_b8))[0] = 0x2f;
  ((byte *)((int)local_bc + (int)local_b8))[1] = 0x2f;
  local_b8 = (undefined4 ****)((int)local_b8 + 2);
  uVar23 = FUN_013459e4(&local_a0);
  if ((int)uVar23 != 0) {
    FUN_01347274(&local_c0,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0);
    ppppuVar15 = local_b8;
    if (local_c0 == local_b8) {
      FUN_006520b4(&local_c0,local_b8,1,1,1);
    }
    *(byte *)((int)local_bc + (int)local_b8) = 0x40;
    local_b8 = (undefined4 ****)((int)ppppuVar15 + 1);
  }
  local_d8 = local_b8;
  local_cc = (undefined1)local_78;
  local_74 = local_90._1_2_;
  local_72 = local_90._3_1_;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(local_78 & 0xff) {
  case 0:
    uVar23 = FUN_0134595c(&local_a0);
    ppppuVar15 = (undefined4 ****)((ulonglong)uVar23 >> 0x20);
    if ((undefined4 ****)((int)local_c0 - (int)local_b8) < ppppuVar15) {
      FUN_006520b4(&local_c0,local_b8,ppppuVar15,1,1);
    }
    FUN_01bed4e2((byte *)((int)local_bc + (int)local_b8),(int)uVar23,ppppuVar15);
    local_b8 = (undefined4 ****)((int)local_b8 + (int)ppppuVar15);
    goto LAB_01346bac;
  case 1:
    if (local_c0 == local_b8) {
      FUN_006520b4(&local_c0,local_b8,1,1,1);
    }
    *(byte *)((int)local_bc + (int)local_b8) = 0x5b;
    local_b8 = (undefined4 ****)((int)local_d8 + 1);
    uVar23 = FUN_0134595c(&local_a0);
    iVar10 = (int)((ulonglong)uVar23 >> 0x20);
    if (iVar10 == 0) {
      ppppuVar15 = (undefined4 ****)0x0;
      ppppuVar18 = (undefined4 ****)&DAT_00000001;
      ppppuVar11 = (undefined4 ****)0x0;
      puVar14 = &DAT_01ce6bf4;
      goto LAB_013471a8;
    }
    local_30 = iVar10 + -1;
    local_34 = (ushort *)((int)uVar23 + 1);
    local_2c = 0;
    FUN_01345690(&local_58,&local_34);
    if ((short)local_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01ce6b3c);
    }
    FUN_01bed4e2(local_70,(int)&local_58 + 2,0x10);
    local_70[0] = local_70[1] | local_70[0];
    uVar1 = local_70[0];
    if (local_70[0] == 0) {
      local_70[1] = local_70[3];
      uVar1 = local_70[2];
    }
    if (local_70[0] != 0 || (local_70[1] != 0 || uVar1 != 0)) {
LAB_01346824:
      puVar19 = (ushort *)((uint)local_70 | 2);
      uVar7 = 0;
      ppppuVar11 = (undefined4 ****)0x0;
      uVar6 = 0;
      ppppuVar15 = (undefined4 ****)0x0;
      ppppuVar18 = (undefined4 ****)0x0;
      iVar10 = 0;
      do {
        if (*(short *)((int)local_70 + iVar10) == 0) {
          bVar21 = uVar7 == 0;
          uVar7 = uVar7 + 1;
          if (bVar21) {
            ppppuVar11 = ppppuVar18;
          }
          if (uVar6 < uVar7) {
            uVar6 = uVar7;
            ppppuVar15 = ppppuVar11;
          }
        }
        else {
          ppppuVar11 = (undefined4 ****)0x0;
          uVar7 = 0;
        }
        iVar10 = iVar10 + 2;
        ppppuVar18 = (undefined4 ****)((int)ppppuVar18 + 1);
      } while (iVar10 != 0x10);
      if (uVar6 < 2) {
        local_58 = &local_38;
        local_54 = (undefined4 ****)&LAB_0161d654;
        local_38 = local_70;
        iVar10 = FUN_012fa178(&local_c0,&DAT_01ce6b7c,&DAT_00590e5f,&local_58);
        if (iVar10 != 0) {
LAB_01347144:
          puVar14 = &DAT_01ce6ba4;
LAB_01346f0c:
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&uStack_25,&DAT_01ce6c24,puVar14);
        }
        ppppuVar15 = &local_c0;
        iVar10 = 2;
        do {
          local_34 = (ushort *)((int)local_70 + iVar10);
          local_58 = &local_34;
          local_54 = (undefined4 ****)&LAB_0161d654;
          iVar8 = FUN_012fa178(ppppuVar15,&DAT_01ce6b7c,&DAT_005bdcec,&local_58);
          if (iVar8 != 0) goto LAB_01346f04;
          iVar10 = iVar10 + 2;
        } while (iVar10 != 0x10);
      }
      else {
        if (&DAT_00000008 < ppppuVar15) {
          ppppuVar11 = (undefined4 ****)&DAT_00000008;
          ppppuVar18 = (undefined4 ****)0x0;
          puVar14 = &DAT_01ce6bd4;
          goto LAB_013471a8;
        }
        if (ppppuVar15 != (undefined4 ****)0x0) {
          local_54 = (undefined4 ****)&LAB_0161d654;
          local_58 = &local_38;
          local_38 = local_70;
          iVar10 = FUN_012fa178(&local_c0,&DAT_01ce6b7c,&DAT_00590e5f,&local_58);
          if (iVar10 != 0) goto LAB_01347144;
          if (ppppuVar15 != (undefined4 ****)&DAT_00000001) {
            iVar10 = (int)ppppuVar15 * 2 + -2;
            do {
              local_54 = (undefined4 ****)&LAB_0161d654;
              local_58 = &local_34;
              local_34 = puVar19;
              iVar8 = FUN_012fa178(&local_c0,&DAT_01ce6b7c,&DAT_005bdcec,&local_58);
              if (iVar8 != 0) goto LAB_01346f04;
              puVar19 = puVar19 + 1;
              iVar10 = iVar10 + -2;
            } while (iVar10 != 0);
          }
        }
        if ((uint)((int)local_c0 - (int)local_b8) < 2) {
          FUN_006520b4(&local_c0,local_b8,2,1,1);
        }
        ppppuVar18 = (undefined4 ****)(uVar6 + (int)ppppuVar15);
        ((byte *)((int)local_bc + (int)local_b8))[0] = 0x3a;
        ((byte *)((int)local_bc + (int)local_b8))[1] = 0x3a;
        local_b8 = (undefined4 ****)((int)local_b8 + 2);
        if (&DAT_00000008 < ppppuVar18) {
          ppppuVar15 = (undefined4 ****)&DAT_00000008;
          ppppuVar11 = (undefined4 ****)&DAT_00000008;
          puVar14 = &DAT_01ce6be4;
LAB_013471a8:
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(ppppuVar18,ppppuVar15,ppppuVar11,puVar14);
        }
        if (ppppuVar18 != (undefined4 ****)&DAT_00000008) {
          local_38 = local_70 + (int)ppppuVar18;
          local_58 = &local_38;
          local_54 = (undefined4 ****)&LAB_0161d654;
          iVar10 = FUN_012fa178(&local_c0,&DAT_01ce6b7c,&DAT_00590e5f,&local_58);
          if (iVar10 != 0) goto LAB_01347144;
          if (ppppuVar18 != (undefined4 ****)&DAT_00000007) {
            iVar10 = (int)ppppuVar18 * 2;
            ppppuVar15 = &local_c0;
            do {
              local_34 = (ushort *)(((uint)local_70 | 2) + iVar10);
              local_58 = &local_34;
              local_54 = (undefined4 ****)&LAB_0161d654;
              iVar8 = FUN_012fa178(ppppuVar15,&DAT_01ce6b7c,&DAT_005bdcec,&local_58);
              if (iVar8 != 0) goto LAB_01346f04;
              iVar10 = iVar10 + 2;
            } while (iVar10 != 0xe);
          }
        }
      }
    }
    else {
      bVar21 = local_70[4] == 0;
      if (bVar21) {
        local_70[1] = 0xffff;
        local_70[4] = local_70[5];
      }
      if (!bVar21 || local_70[4] != local_70[1]) goto LAB_01346824;
      ppppuVar15 = (undefined4 ****)
                   (((uint)local_70[6] << 0x18 | (uint)(local_70[6] >> 8) << 0x10) >> 0x10);
      local_59 = (undefined1)local_70[6];
      local_5a = (undefined1)(local_70[6] >> 8);
      local_34 = (ushort *)CONCAT31(local_34._1_3_,(char)local_70[7]);
      local_40 = &local_34;
      local_48 = &local_38;
      local_50 = (undefined4 ****)&local_59;
      local_58 = (ushort **)&local_5a;
      local_38 = (ushort *)CONCAT31(local_38._1_3_,(char)(local_70[7] >> 8));
      local_3c = FUN_012fcc70;
      local_44 = FUN_012fcc70;
      local_4c = FUN_012fcc70;
      local_54 = (undefined4 ****)FUN_012fcc70;
      iVar10 = FUN_012fa178(&local_c0,&DAT_01ce6b7c,&DAT_005b035a,&local_58);
      if (iVar10 != 0) {
        puVar14 = &DAT_01ce6bc4;
        goto LAB_01346f0c;
      }
    }
    ppppuVar11 = local_b8;
    if (local_c0 == local_b8) {
      FUN_006520b4(&local_c0,local_b8,1,1,1);
    }
    *(byte *)((int)local_bc + (int)local_b8) = 0x5d;
    local_b8 = (undefined4 ****)((int)ppppuVar11 + 1);
LAB_01346bac:
    break;
  case 2:
    uVar23 = FUN_0134595c(&local_a0);
    uVar6 = (uint)((ulonglong)uVar23 >> 0x20);
    if ((uint)((int)local_c0 - (int)local_b8) < uVar6) {
      FUN_006520b4(&local_c0,local_b8,uVar6,1,1);
    }
    FUN_01bed4e2((byte *)((int)local_bc + (int)local_b8),(int)uVar23,uVar6);
    local_b8 = (undefined4 ****)((int)local_b8 + uVar6);
    if (local_d8 != (undefined4 ****)0x0) {
      if (local_d8 < local_b8) {
        if ((char)*(byte *)((int)local_bc + (int)local_d8) < -0x40) goto LAB_013466c8;
      }
      else if (local_b8 != local_d8) {
LAB_013466c8:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(local_bc,local_b8,local_d8,local_b8,&DAT_01ce6c04);
      }
    }
    local_cc = 2;
    ppppuVar15 = local_d8;
    if (local_b8 != local_d8) {
      iVar10 = (int)local_b8 - (int)local_d8;
      pbVar9 = (byte *)((int)local_bc + (int)local_d8);
      do {
        bVar12 = *pbVar9;
        if (bVar12 - 0x41 < 0x1a) {
          bVar12 = bVar12 | 0x20;
        }
        *pbVar9 = bVar12;
        iVar10 = iVar10 + -1;
        pbVar9 = pbVar9 + 1;
      } while (iVar10 != 0);
    }
    break;
  case 3:
    uVar23 = FUN_0134595c(&local_a0);
    iVar10 = (int)((ulonglong)uVar23 >> 0x20);
    FUN_01347274(&local_c0,(int)uVar23,iVar10,1);
    ppppuVar15 = local_b8;
    local_cc = 3;
    if (local_b8 < (undefined4 ****)(iVar10 + (int)local_d8)) {
      if (local_b8 < local_d8) {
        puVar14 = &DAT_01ce6c14;
        ppppuVar11 = local_b8;
        ppppuVar18 = local_d8;
        goto LAB_013471a8;
      }
      local_50 = (undefined4 ****)0x0;
      local_54 = (undefined4 ****)((int)local_b8 - (int)local_d8);
      local_58 = (ushort **)((int)local_bc + (int)local_d8);
      uVar6 = FUN_013449ac(&local_58);
      local_cc = 0;
      if (local_50 < local_54) {
        local_cc = 3;
      }
      if ((uVar6 & 1) == 0) {
        local_cc = 3;
      }
    }
  }
  local_dc = local_b8;
  local_a4 = local_74;
  local_a2 = local_72;
  uVar23 = FUN_013458f0(&local_88);
  ppppuVar11 = (undefined4 ****)((ulonglong)uVar23 >> 0x20);
  pbVar9 = (byte *)uVar23;
  if (pbVar9 != (byte *)0x0) {
    ppppuVar15 = ppppuVar11;
  }
  if (pbVar9 == (byte *)0x0 || ppppuVar11 == (undefined4 ****)0x0) goto LAB_01346c78;
  iVar10 = FUN_013437a4(param_2);
  if (iVar10 != 0) {
    uVar24 = (*param_3)();
    if ((uVar24 & 1) != 0 && ppppuVar15 != (undefined4 ****)0x0) {
      if (ppppuVar15 == (undefined4 ****)&DAT_00000001) {
        bVar12 = *pbVar9;
        if ((bVar12 == 0x2b) || (bVar12 == 0x2d)) goto LAB_01346c18;
      }
      else {
        bVar12 = *pbVar9;
      }
      ppppuVar11 = ppppuVar15;
      pbVar20 = pbVar9;
      if (bVar12 == 0x2b) {
        pbVar20 = pbVar9 + 1;
        ppppuVar11 = (undefined4 ****)((int)ppppuVar15 + -1);
      }
      uVar6 = 0;
      if (&SUB_00000004 < ppppuVar11) {
        do {
          if (ppppuVar11 == (undefined4 ****)0x0) goto LAB_01346ea4;
          uVar6 = (uVar6 & 0xffff) * 4 + (uVar6 & 0xffff);
          if (uVar6 >> 0xf != 0) break;
          if (9 < *pbVar20 - 0x30) break;
          ppppuVar11 = (undefined4 ****)((int)ppppuVar11 + -1);
          uVar6 = (uVar6 * 2 & 0xffff) + (*pbVar20 - 0x30 & 0xffff);
          pbVar20 = pbVar20 + 1;
        } while (uVar6 >> 0x10 == 0);
      }
      else {
        for (; ppppuVar11 != (undefined4 ****)0x0;
            ppppuVar11 = (undefined4 ****)((int)ppppuVar11 + -1)) {
          bVar12 = *pbVar20;
          if (9 < bVar12 - 0x30) goto LAB_01346c18;
          pbVar20 = pbVar20 + 1;
          uVar6 = (bVar12 - 0x30) + uVar6 * 10;
        }
LAB_01346ea4:
        if ((uVar6 & 0xffff) == ((uint)(uVar24 >> 0x20) & 0xffff)) goto LAB_01346c78;
      }
    }
  }
LAB_01346c18:
  ppppuVar11 = local_b8;
  if (local_c0 == local_b8) {
    FUN_006520b4(&local_c0,local_b8,1,1,1);
  }
  *(byte *)((int)local_bc + (int)local_b8) = 0x3a;
  local_b8 = (undefined4 ****)((int)ppppuVar11 + 1);
  if ((undefined4 ****)((int)local_c0 - (int)local_b8) < ppppuVar15) {
    FUN_006520b4(&local_c0,local_b8,ppppuVar15,1,1);
  }
  FUN_01bed4e2((byte *)((int)local_bc + (int)local_b8),pbVar9,ppppuVar15);
  local_b8 = (undefined4 ****)((int)local_b8 + (int)ppppuVar15);
LAB_01346c78:
  uVar6 = local_a8;
  ppppuVar15 = local_b8;
  if ((((puVar13[2] != 0) && (*(char *)(puVar13 + 6) == '\x04')) && (1 < local_a8)) &&
     (*local_ac == 0x2f2f)) {
    if ((uint)((int)local_c0 - (int)local_b8) < 2) {
      FUN_006520b4(&local_c0,local_b8,2,1,1);
    }
    ((byte *)((int)local_bc + (int)local_b8))[0] = 0x2f;
    ((byte *)((int)local_bc + (int)local_b8))[1] = 0x2e;
    local_b8 = (undefined4 ****)((int)local_b8 + 2);
  }
  psVar3 = local_ac;
  if ((uint)((int)local_c0 - (int)local_b8) < uVar6) {
    FUN_006520b4(&local_c0,local_b8,uVar6,1,1);
  }
  FUN_01bed4e2((byte *)((int)local_bc + (int)local_b8),psVar3,uVar6);
  ppppuVar18 = (undefined4 ****)((int)local_b8 + uVar6);
  local_b8 = ppppuVar18;
  uVar23 = FUN_013438b8(param_2);
  ppppuVar11 = local_b8;
  if ((int)uVar23 == 0) {
    ppppuVar11 = (undefined4 ****)0x0;
  }
  else {
    if (local_c0 == local_b8) {
      FUN_006520b4(&local_c0,local_b8,1,1,1);
    }
    *(byte *)((int)local_bc + (int)local_b8) = 0x3f;
    local_b8 = (undefined4 ****)((int)ppppuVar11 + 1);
    FUN_01347274(&local_c0,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0);
    ppppuVar11 = local_b8;
  }
  uVar23 = FUN_013438ec(param_2);
  ppppuVar2 = local_b8;
  if ((int)uVar23 != 0) {
    if (local_c0 == local_b8) {
      FUN_006520b4(&local_c0,local_b8,1,1,1);
    }
    *(byte *)((int)local_bc + (int)local_b8) = 0x23;
    local_b8 = (undefined4 ****)((int)ppppuVar2 + 1);
    FUN_01347274(&local_c0,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0);
  }
  *param_1 = local_c0;
  param_1[1] = local_bc;
  param_1[2] = local_b8;
  *(undefined1 *)(param_1 + 9) = local_cc;
  param_1[5] = local_d4;
  param_1[7] = local_d8;
  *(undefined2 *)((int)param_1 + 0x25) = local_a4;
  param_1[3] = ppppuVar15;
  param_1[4] = ppppuVar18;
  param_1[6] = ppppuVar11;
  param_1[8] = local_dc;
  *(undefined1 *)((int)param_1 + 0x27) = local_a2;
  FUN_0134bd64(local_b0,psVar3);
  return;
LAB_01346f04:
  puVar14 = &DAT_01ce6bb4;
  goto LAB_01346f0c;
}

