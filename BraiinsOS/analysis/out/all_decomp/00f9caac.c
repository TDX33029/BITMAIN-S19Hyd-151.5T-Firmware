// FUN_00f9caac @ 00f9caac size=2104 calls_out=11 calls_in=2
// strings: 

void FUN_00f9caac(undefined4 *param_1,int param_2,int param_3,uint param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined4 ****ppppuVar3;
  undefined4 ****ppppuVar4;
  char *pcVar5;
  undefined4 *****extraout_r2;
  undefined4 *****extraout_r2_00;
  undefined4 *****extraout_r2_01;
  undefined4 *****extraout_r2_02;
  undefined4 *****extraout_r2_03;
  undefined4 *****extraout_r2_04;
  undefined4 *****extraout_r2_05;
  undefined4 *****pppppuVar6;
  undefined4 *****extraout_r2_06;
  undefined4 *****extraout_r2_07;
  int iVar7;
  undefined4 ****ppppuVar8;
  undefined4 *****unaff_r5;
  int iVar9;
  uint uVar10;
  undefined4 *****pppppuVar11;
  undefined4 ***pppuVar12;
  undefined4 ****ppppuVar13;
  undefined4 ***pppuVar14;
  int iVar15;
  undefined4 *****pppppuVar16;
  bool bVar17;
  bool bVar18;
  undefined4 *****local_88;
  undefined4 *****local_80;
  undefined4 *****local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 *****local_68;
  undefined4 ****local_64;
  undefined4 *****local_60;
  undefined4 *local_5c;
  undefined4 ****local_58;
  int local_54;
  undefined4 ****local_50;
  undefined4 *****local_48;
  undefined4 ****local_44;
  undefined4 *****local_40;
  undefined4 *****local_38;
  undefined4 ****local_34;
  undefined4 *****local_30;
  undefined4 ****local_28;
  
  local_7c = (undefined4 *****)(param_3 + 0x38);
  pppppuVar16 = *(undefined4 ******)(param_2 + 0xc);
  iVar7 = 0;
  local_70 = 0;
  local_74 = 1;
  local_78 = 0;
  if ((*(uint *)(param_2 + 8) & 1) == 0) {
    puVar2 = *(undefined1 **)(param_2 + 0x120);
    bVar17 = puVar2 == (undefined1 *)0x0;
    if (bVar17) {
      puVar2 = *(undefined1 **)(param_2 + 0x34);
    }
    if (!bVar17 || puVar2 != &DAT_00110000) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_0035e2fc,99,&DAT_018808c4);
    }
    pppppuVar16 = (undefined4 *****)&DAT_00000001;
    local_88 = (undefined4 *****)&DAT_00000001;
LAB_00f9cb94:
    local_80 = (undefined4 *****)&DAT_00110000;
    bVar17 = false;
    pppppuVar6 = unaff_r5;
  }
  else {
    unaff_r5 = *(undefined4 ******)(param_2 + 0x34);
    iVar15 = *(int *)(param_2 + 0x120);
    local_88 = *(undefined4 ******)(param_2 + 0x10);
    if (local_88 == (undefined4 *****)0x0) {
      if (iVar15 != 0 || unaff_r5 != (undefined4 *****)&DAT_00110000) {
        if (*(char *)(param_2 + 0x130) == '\x04') {
          local_68 = &local_7c;
          local_64 = (undefined4 ****)&DAT_00fa17d8;
          FUN_00fa948c(&local_78,&DAT_018808d4,&DAT_0035dbbf,&local_68);
        }
        goto LAB_00f9d24c;
      }
      local_80 = (undefined4 *****)&DAT_00110000;
      local_88 = (undefined4 *****)0x0;
      bVar17 = false;
      pppppuVar6 = unaff_r5;
    }
    else {
      if (iVar15 == 0 && unaff_r5 == (undefined4 *****)&DAT_00110000) goto LAB_00f9cb94;
      local_48 = local_7c;
      if ((*(byte *)(param_2 + 0x11c) & 0x80) == 0) {
        local_34 = (undefined4 ****)&DAT_00000001;
        bVar17 = pppppuVar16 == (undefined4 *****)0x0;
        if (pppppuVar16 == (undefined4 *****)0x0) {
          local_34 = (undefined4 ****)&SUB_00000002;
        }
        local_38 = (undefined4 *****)&UNK_0035dbbb;
        if (pppppuVar16 != (undefined4 *****)0x0) {
          local_38 = (undefined4 *****)&DAT_0041545b;
        }
      }
      else if (pppppuVar16 == (undefined4 *****)0x0) {
        bVar17 = true;
        local_34 = (undefined4 ****)&SUB_00000002;
        local_38 = (undefined4 *****)&DAT_0035dbbd;
      }
      else {
        local_34 = (undefined4 ****)&DAT_00000001;
        bVar17 = false;
        local_48 = (undefined4 *****)(param_3 + 0x2a);
        local_38 = (undefined4 *****)"=";
      }
      local_60 = &local_38;
      local_68 = &local_48;
      local_5c = &DAT_0157d360;
      local_64 = (undefined4 ****)&DAT_00fa17d8;
      FUN_00fa948c(&local_78,&DAT_018808d4,&DAT_0035df67,&local_68);
      iVar7 = iVar15;
      pppppuVar6 = (undefined4 *****)&DAT_0157d360;
      local_80 = unaff_r5;
    }
  }
  local_50 = (undefined4 ****)0x0;
  local_58 = (undefined4 ****)0x0;
  local_54 = 1;
  uVar10 = *(uint *)(param_2 + 0x11c);
  if ((param_4 & 0xff) != 2) {
    uVar10 = param_4;
  }
  if (*(int *)(param_2 + 0xbc) == 0) {
    local_44 = (undefined4 ****)thunk_FUN_016d4a50(8);
    if (local_44 == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    pppuVar12 = *(undefined4 ****)(param_2 + 0x114);
    pppuVar14 = *(undefined4 ****)(param_2 + 0x118);
    bVar1 = false;
    *local_44 = pppuVar12;
    local_44[1] = pppuVar14;
    local_48 = (undefined4 *****)&DAT_00000001;
LAB_00f9cd3c:
    ppppuVar13 = local_44;
    pppppuVar11 = pppppuVar16;
    if (pppppuVar16 < &SUB_00000002) {
      pppppuVar11 = (undefined4 *****)&DAT_00000001;
    }
    bVar18 = (undefined4 *****)0x1ffffffe < pppppuVar16;
    if (pppppuVar16 < (undefined4 *****)0x20000000) {
      pppppuVar6 = (undefined4 *****)((int)pppppuVar11 << 3);
      bVar18 = (undefined4 *****)0x7ffffffc < pppppuVar6;
    }
    local_40 = (undefined4 *****)0x0;
    if (bVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_00600c10();
    }
    ppppuVar3 = (undefined4 ****)thunk_FUN_016d4a50(pppppuVar6);
    if (ppppuVar3 == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,pppppuVar6);
    }
    local_60 = (undefined4 *****)0x0;
    ppppuVar8 = ppppuVar3;
    local_30 = (undefined4 *****)&DAT_00000001;
    if (&DAT_00000001 < pppppuVar16) {
      pcVar5 = (char *)((int)pppppuVar16 + -1);
      do {
        *ppppuVar8 = pppuVar12;
        ppppuVar8[1] = pppuVar14;
        ppppuVar8 = ppppuVar8 + 2;
        pcVar5 = pcVar5 + -1;
      } while (pcVar5 != (char *)0x0);
      local_30 = pppppuVar11;
    }
    *ppppuVar8 = pppuVar12;
    ppppuVar8[1] = pppuVar14;
    local_68 = pppppuVar11;
    local_64 = ppppuVar3;
    local_38 = pppppuVar11;
    local_34 = ppppuVar3;
    if (!bVar1) {
      thunk_FUN_016d3fb4(ppppuVar13);
    }
    pppppuVar6 = &local_48;
    local_48 = local_38;
    local_44 = local_34;
    local_40 = local_30;
  }
  else {
    FUN_00f74804(&local_48,*(undefined4 *)(param_2 + 0xb8));
    pppppuVar6 = extraout_r2;
    if (local_40 == (undefined4 *****)&DAT_00000001) {
      bVar1 = local_48 == (undefined4 *****)0x0;
      pppuVar12 = *local_44;
      pppuVar14 = local_44[1];
      pppppuVar6 = (undefined4 *****)&DAT_00000001;
      goto LAB_00f9cd3c;
    }
  }
  pppppuVar11 = local_40;
  if (local_40 == (undefined4 *****)0x0) {
    iVar15 = 1;
  }
  else {
    iVar9 = (int)local_40 * 8;
    ppppuVar13 = local_44 + 2;
    local_28 = local_44;
    if ((iVar7 == 0) &&
       (local_80 == (undefined4 *****)&DAT_00110000 &&
        (pppppuVar16 != (undefined4 *****)0x0 & uVar10) == 0)) {
      local_34 = (undefined4 ****)&LAB_00640850;
      local_38 = &local_28;
      FUN_00600d2c(&local_68,&DAT_00599b16,&local_38);
      pppppuVar6 = local_60;
      ppppuVar3 = local_64;
      pppppuVar16 = local_68;
      iVar15 = 1;
      if ((undefined4 *****)-(int)local_50 < local_60) {
        FUN_00f991dc(&local_58,local_50,local_60,1,1);
        iVar15 = local_54;
      }
      ppppuVar8 = local_50;
      FUN_016dd1aa(iVar15 + (int)local_50,ppppuVar3,pppppuVar6);
      ppppuVar8 = (undefined4 ****)((int)ppppuVar8 + (int)pppppuVar6);
      pppppuVar6 = extraout_r2_04;
      local_50 = ppppuVar8;
      if (pppppuVar16 != (undefined4 *****)0x0) {
        thunk_FUN_016d3fb4(ppppuVar3);
        pppppuVar6 = extraout_r2_05;
      }
      iVar7 = 0;
      local_80 = (undefined4 *****)&DAT_00110000;
      if (pppppuVar11 != (undefined4 *****)&DAT_00000001) {
        iVar9 = iVar9 + -8;
        do {
          local_34 = (undefined4 ****)&LAB_00640850;
          local_38 = &local_28;
          local_28 = ppppuVar13;
          FUN_00600d2c(&local_68,&DAT_00599b16,&local_38);
          pppppuVar6 = local_60;
          ppppuVar3 = local_64;
          pppppuVar16 = local_68;
          ppppuVar4 = ppppuVar8;
          if (local_58 == ppppuVar8) {
            FUN_00f991dc(&local_58,ppppuVar8,1,1,1);
            ppppuVar4 = local_50;
            iVar15 = local_54;
          }
          *(undefined1 *)(iVar15 + (int)ppppuVar4) = 0x20;
          local_50 = (undefined4 ****)((int)ppppuVar8 + 1);
          if ((undefined4 *****)((int)local_58 - (int)local_50) < pppppuVar6) {
            FUN_00f991dc(&local_58,local_50,pppppuVar6,1,1);
          }
          ppppuVar8 = local_50;
          iVar15 = local_54;
          FUN_016dd1aa(local_54 + (int)local_50,ppppuVar3,pppppuVar6);
          ppppuVar8 = (undefined4 ****)((int)ppppuVar8 + (int)pppppuVar6);
          pppppuVar6 = extraout_r2_06;
          local_50 = ppppuVar8;
          if (pppppuVar16 != (undefined4 *****)0x0) {
            thunk_FUN_016d3fb4(ppppuVar3);
            pppppuVar6 = extraout_r2_07;
          }
          ppppuVar13 = ppppuVar13 + 2;
          iVar9 = iVar9 + -8;
        } while (iVar9 != 0);
        iVar7 = 0;
      }
    }
    else {
      local_34 = (undefined4 ****)&LAB_00640850;
      local_38 = &local_28;
      FUN_00600d2c(&local_68,&DAT_0057984f,&local_38);
      pppppuVar6 = local_60;
      ppppuVar3 = local_64;
      pppppuVar16 = local_68;
      iVar15 = 1;
      if ((undefined4 *****)-(int)local_50 < local_60) {
        FUN_00f991dc(&local_58,local_50,local_60,1,1);
        iVar15 = local_54;
      }
      ppppuVar8 = local_50;
      FUN_016dd1aa(iVar15 + (int)local_50,ppppuVar3,pppppuVar6);
      ppppuVar8 = (undefined4 ****)((int)ppppuVar8 + (int)pppppuVar6);
      pppppuVar6 = extraout_r2_00;
      local_50 = ppppuVar8;
      if (pppppuVar16 != (undefined4 *****)0x0) {
        thunk_FUN_016d3fb4(ppppuVar3);
        pppppuVar6 = extraout_r2_01;
      }
      if (pppppuVar11 != (undefined4 *****)&DAT_00000001) {
        iVar9 = iVar9 + -8;
        do {
          local_34 = (undefined4 ****)&LAB_00640850;
          local_38 = &local_28;
          local_28 = ppppuVar13;
          FUN_00600d2c(&local_68,&DAT_0057984f,&local_38);
          pppppuVar6 = local_60;
          ppppuVar3 = local_64;
          pppppuVar16 = local_68;
          ppppuVar4 = ppppuVar8;
          if (local_58 == ppppuVar8) {
            FUN_00f991dc(&local_58,ppppuVar8,1,1,1);
            ppppuVar4 = local_50;
            iVar15 = local_54;
          }
          *(undefined1 *)(iVar15 + (int)ppppuVar4) = 0x20;
          local_50 = (undefined4 ****)((int)ppppuVar8 + 1);
          if ((undefined4 *****)((int)local_58 - (int)local_50) < pppppuVar6) {
            FUN_00f991dc(&local_58,local_50,pppppuVar6,1,1);
          }
          ppppuVar8 = local_50;
          iVar15 = local_54;
          FUN_016dd1aa(local_54 + (int)local_50,ppppuVar3,pppppuVar6);
          ppppuVar8 = (undefined4 ****)((int)ppppuVar8 + (int)pppppuVar6);
          pppppuVar6 = extraout_r2_02;
          local_50 = ppppuVar8;
          if (pppppuVar16 != (undefined4 *****)0x0) {
            thunk_FUN_016d3fb4(ppppuVar3);
            pppppuVar6 = extraout_r2_03;
          }
          ppppuVar13 = ppppuVar13 + 2;
          iVar9 = iVar9 + -8;
        } while (iVar9 != 0);
      }
    }
  }
  if (iVar7 == 0) {
    pppppuVar6 = local_80;
  }
  if (iVar7 == 0 && pppppuVar6 == (undefined4 *****)&DAT_00110000) {
    if ((local_40 < local_88) || (*(char *)(param_2 + 0x130) == '\x01')) goto LAB_00f9d174;
  }
  else if (local_40 < local_88) {
LAB_00f9d174:
    if ((uint)((int)local_58 - (int)local_50) < 3) {
      FUN_00f991dc(&local_58,local_50,3,1,1);
      iVar15 = local_54;
    }
    *(undefined2 *)(iVar15 + (int)local_50) = 0x2e2e;
    *(undefined1 *)((undefined2 *)(iVar15 + (int)local_50) + 1) = 0x2e;
    local_50 = (undefined4 ****)((int)local_50 + 3);
  }
  local_38 = (undefined4 *****)local_58;
  local_34 = (undefined4 ****)local_54;
  local_30 = (undefined4 *****)local_50;
  if (local_48 != (undefined4 *****)0x0) {
    thunk_FUN_016d3fb4(local_44);
  }
  local_64 = (undefined4 ****)&DAT_00fa17d8;
  local_5c = &DAT_006043a8;
  local_60 = &local_38;
  local_68 = &local_7c;
  FUN_00fa948c(&local_78,&DAT_018808d4,&DAT_0035df67,&local_68);
  if (local_38 != (undefined4 *****)0x0) {
    thunk_FUN_016d3fb4(local_34);
  }
  if (bVar17) {
    local_64 = (undefined4 ****)&DAT_00fa17d8;
    local_68 = &local_7c;
    FUN_00fa948c(&local_78,&DAT_018808d4,&DAT_0035dc09,&local_68);
  }
LAB_00f9d24c:
  *param_1 = local_78;
  param_1[1] = local_74;
  param_1[2] = local_70;
  return;
}

