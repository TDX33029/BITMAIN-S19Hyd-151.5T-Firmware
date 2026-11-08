// FUN_01194100 @ 01194100 size=2868 calls_out=25 calls_in=1
// strings: additionalProperties | patternProperties | patternProperties | regex | regex

void FUN_01194100(int *param_1,int param_2,int *param_3,char *param_4)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined **ppuVar10;
  int *piVar11;
  undefined **ppuVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined *puVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  int iVar23;
  char *pcVar24;
  undefined4 uVar25;
  undefined *puVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  undefined8 uVar31;
  undefined1 auStack_218 [72];
  int *local_1d0;
  int *local_188;
  undefined **local_184;
  int *local_180;
  int *local_178;
  undefined **local_174;
  int *local_170;
  int *local_168;
  undefined4 *local_164;
  undefined **local_160;
  int *local_158;
  int local_154;
  undefined **local_150;
  undefined4 local_14c;
  int *local_148;
  undefined4 local_144;
  undefined **local_140;
  undefined4 local_13c;
  int *local_138;
  int local_130;
  undefined **local_12c;
  undefined4 local_128;
  int *piStack_124;
  undefined4 uStack_120;
  int *local_f8;
  undefined **local_f4;
  int *local_f0;
  int *local_e0;
  undefined4 *local_dc;
  undefined **local_d8;
  undefined4 uStack_d4;
  int *piStack_d0;
  undefined4 local_cc;
  undefined **local_c8;
  undefined4 local_c4;
  int *local_c0;
  undefined *local_b8;
  undefined8 local_b4;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_98;
  undefined2 local_94;
  int *local_80;
  undefined4 local_7c;
  undefined4 local_70;
  undefined1 local_60;
  char *local_5c;
  int *local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_30;
  
  iVar23 = *param_3;
  if (iVar23 != 0) {
    iVar30 = param_3[1];
    while( true ) {
      uVar29 = (uint)*(ushort *)(iVar23 + 0x192);
      iVar28 = iVar23 + 0x10c;
      uVar15 = 0xffffffff;
      iVar27 = uVar29 * 0xc;
      do {
        if (iVar27 == 0) goto LAB_011941b0;
        uVar19 = *(uint *)(iVar28 + 8);
        uVar13 = uVar19;
        if (0x13 < uVar19) {
          uVar13 = 0x14;
        }
        iVar7 = FUN_016dd50a("additionalProperties",*(undefined4 *)(iVar28 + 4),uVar13);
        if (iVar7 == 0) {
          iVar7 = 0x14 - uVar19;
        }
        iVar27 = iVar27 + -0xc;
        uVar15 = uVar15 + 1;
        iVar28 = iVar28 + 0xc;
      } while ((char)((0 < iVar7) - (iVar7 < 0)) == '\x01');
      uVar29 = uVar15;
      if (0 < iVar7 == iVar7 < 0) break;
LAB_011941b0:
      if (iVar30 == 0) goto LAB_011941f0;
      iVar30 = iVar30 + -1;
      iVar23 = *(int *)(iVar23 + uVar29 * 4 + 0x198);
    }
    pcVar24 = (char *)(iVar23 + uVar15 * 0x18);
    cVar2 = *pcVar24;
    if ((cVar2 == '\x05') || ((cVar2 == '\x01' && (pcVar24[1] != '\x01')))) {
      *param_1 = 0;
      return;
    }
  }
LAB_011941f0:
  if (*param_4 != '\x05') {
    uStack_40 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                             "patternProperties",0x11);
    piVar8 = (int *)uStack_40;
    do {
      iVar23 = *piVar8;
      bVar3 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar3);
    *piVar8 = iVar23 + 1;
    if (-1 < iVar23) {
      DataMemoryBarrier(0xb);
      if (DAT_018da8bc != 0) {
        FUN_0120d52c();
      }
      do {
        iVar23 = *DAT_018da8b4;
        bVar3 = (bool)hasExclusiveAccess(DAT_018da8b4);
      } while (!bVar3);
      *DAT_018da8b4 = iVar23 + 1;
      if (-1 < iVar23) {
        local_48 = DAT_018da8b4;
        uStack_44 = DAT_018da8b8;
        local_60 = 6;
        local_94 = 0x2000;
        local_98 = &DAT_80000028;
        local_b8 = (undefined *)0x1;
        local_5c = param_4;
        local_b4 = uStack_40;
        iVar23 = thunk_FUN_016d4a50(0x80);
        if (iVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        FUN_016dd1aa(iVar23,&local_b8,0x80);
        param_1[1] = 0;
        param_1[2] = iVar23;
        *param_1 = 1;
        return;
      }
    }
    goto LAB_01194f24;
  }
  FUN_0119d4b4(auStack_218,param_2,"patternProperties",0x11);
  piVar16 = *(int **)(param_4 + 0xc);
  iVar23 = (int)piVar16 * 0x18;
  piVar8 = (int *)0x0;
  if ((int *)0x5555555 < piVar16) goto LAB_0119423c;
  if (iVar23 == 0) {
    puVar9 = (undefined4 *)&DAT_00000004;
  }
  else {
    puVar9 = (undefined4 *)thunk_FUN_016d4a50(iVar23);
    piVar8 = piVar16;
    if (puVar9 == (undefined4 *)0x0) {
      piVar8 = (int *)&DAT_00000004;
      goto LAB_0119423c;
    }
  }
  ppuVar10 = *(undefined ***)(param_4 + 4);
  uVar14 = *(undefined4 *)(param_4 + 8);
  piVar4 = (int *)0x0;
  if (ppuVar10 != (undefined **)0x0) {
    piVar4 = piVar16;
  }
  piVar11 = (int *)(uint)(ppuVar10 != (undefined **)0x0);
  local_160 = (undefined **)0x0;
  local_144 = 0;
  local_154 = 0;
  local_168 = piVar8;
  local_164 = puVar9;
  local_158 = piVar11;
  local_150 = ppuVar10;
  local_14c = uVar14;
  local_148 = piVar11;
  local_140 = ppuVar10;
  local_13c = uVar14;
  local_138 = piVar4;
  iVar30 = FUN_00f45584(&local_158);
  puVar5 = local_164;
  if (iVar30 == 0) {
    local_e0 = local_168;
    local_dc = local_164;
    local_d8 = local_160;
    if (local_160 == (undefined **)&DAT_00000001) {
      local_d8 = (undefined **)0x0;
      puVar9 = (undefined4 *)((uint)&local_b8 | 4);
      local_b8 = (undefined *)*local_164;
      uVar14 = local_164[2];
      uVar17 = local_164[3];
      uVar20 = local_164[4];
      uVar25 = local_164[5];
      *puVar9 = local_164[1];
      puVar9[1] = uVar14;
      puVar9[2] = uVar17;
      puVar9[3] = uVar20;
      puVar9[4] = uVar25;
      puVar9 = (undefined4 *)thunk_FUN_016d4a50(0x18);
      if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x18);
      }
      *puVar9 = local_b8;
      puVar9[1] = (undefined4)local_b4;
      puVar9[2] = local_b4._4_4_;
      puVar9[3] = uStack_ac;
      puVar9[4] = uStack_a8;
      puVar9[5] = uStack_a4;
      FUN_0115eccc(puVar5,0);
      thunk_FUN_016d3fb4(puVar5);
      puVar18 = &DAT_01889d14;
    }
    else {
      puVar9 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *puVar9 = local_168;
      puVar9[1] = local_164;
      puVar9[2] = local_160;
      puVar18 = &DAT_01889d54;
    }
    *param_1 = 1;
    param_1[1] = (int)puVar9;
    param_1[2] = (int)puVar18;
LAB_01194810:
    FUN_01161600(auStack_218);
    return;
  }
  FUN_011ae1f4(&local_b8,auStack_218,*(undefined4 *)(iVar30 + 4),*(undefined4 *)(iVar30 + 8));
  FUN_0123ae94(&local_e0,*(undefined4 *)(iVar30 + 4),*(undefined4 *)(iVar30 + 8));
  if (local_e0 != (int *)&DAT_00000004) {
                    /* WARNING: Could not recover jumptable at 0x0119445c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_01194460 + *(int *)(&DAT_01194460 + (int)local_e0 * 4)))();
    return;
  }
  iVar30 = 0;
  *param_1 = 0;
  FUN_011ae4dc(&local_b8);
  FUN_0115eccc(puVar9,0);
  if (local_168 != (int *)0x0) {
    thunk_FUN_016d3fb4(puVar9);
    iVar30 = *param_1;
  }
  if (iVar30 != 0) goto LAB_01194810;
  local_e0 = piVar11;
  local_d8 = ppuVar10;
  uStack_d4 = uVar14;
  piStack_d0 = piVar11;
  local_c8 = ppuVar10;
  local_c4 = uVar14;
  local_c0 = piVar4;
  if (*local_1d0 == 2) {
    if (iVar23 == 0) {
      ppuVar10 = (undefined **)&DAT_00000004;
      piVar16 = (int *)0x0;
    }
    else {
      ppuVar10 = (undefined **)thunk_FUN_016d4a50(iVar23);
      if (ppuVar10 == (undefined **)0x0) goto LAB_01194840;
    }
    iVar23 = 0;
    piVar8 = (int *)0x0;
    local_f0 = (int *)0x0;
    local_cc = 0;
    local_dc = (undefined4 *)0x0;
    local_f8 = piVar16;
    local_f4 = ppuVar10;
    while( true ) {
      uVar31 = FUN_00f45584(&local_e0);
      uVar14 = (undefined4)((ulonglong)uVar31 >> 0x20);
      iVar30 = (int)uVar31;
      if (iVar30 == 0) break;
      FUN_011ae1f4(&local_b8,auStack_218,*(undefined4 *)(iVar30 + 4),*(undefined4 *)(iVar30 + 8));
      piVar16 = (int *)FUN_0126486c(local_70,local_38,*(undefined4 *)(iVar30 + 4),
                                    *(undefined4 *)(iVar30 + 8));
      if (piVar16 == (int *)0x0) goto LAB_01194b84;
      uVar6 = FUN_01352d48(local_30,uVar14);
      FUN_0125acb4(&local_130,&local_b8,uVar14,uVar6);
      if (local_130 == 0) {
        DataMemoryBarrier(0xb);
        do {
          iVar23 = *piVar16;
          bVar3 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar3);
        *piVar16 = iVar23 + -1;
        ppuVar10 = local_12c;
        if (iVar23 == 1) {
          DataMemoryBarrier(0xb);
          FUN_011e0b70(piVar16);
        }
        goto LAB_01194ce8;
      }
      local_154 = local_130;
      local_14c = local_128;
      local_148 = piStack_124;
      local_144 = uStack_120;
      local_150 = local_12c;
      local_158 = piVar16;
      if (piVar8 == local_f8) {
        FUN_011cf3b8(&local_f8);
        ppuVar10 = local_f4;
      }
      puVar9 = (undefined4 *)((int)ppuVar10 + iVar23);
      piVar8 = (int *)((int)piVar8 + 1);
      *puVar9 = local_158;
      puVar9[1] = local_154;
      puVar9[2] = local_150;
      puVar9[3] = local_14c;
      puVar9[4] = local_148;
      puVar9[5] = local_144;
      local_f0 = piVar8;
      FUN_011ae4dc(&local_b8);
      iVar23 = iVar23 + 0x18;
    }
    if (local_f8 == (int *)&DAT_80000000) goto LAB_01194b74;
    local_178 = local_f8;
    local_174 = ppuVar10;
    if (piVar8 == (int *)&DAT_00000001) {
      puVar9 = (undefined4 *)((uint)&local_b8 | 4);
      local_170 = (int *)0x0;
      local_b8 = *ppuVar10;
      puVar18 = ppuVar10[2];
      puVar21 = ppuVar10[3];
      puVar22 = ppuVar10[4];
      puVar26 = ppuVar10[5];
      *puVar9 = ppuVar10[1];
      puVar9[1] = puVar18;
      puVar9[2] = puVar21;
      puVar9[3] = puVar22;
      puVar9[4] = puVar26;
      puVar9 = (undefined4 *)thunk_FUN_016d4a50(0x18);
      if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x18);
      }
      *puVar9 = local_b8;
      puVar9[1] = (undefined4)local_b4;
      puVar9[2] = local_b4._4_4_;
      puVar9[3] = uStack_ac;
      puVar9[4] = uStack_a8;
      puVar9[5] = uStack_a4;
      FUN_01160168(ppuVar10,0);
      thunk_FUN_016d3fb4(ppuVar10);
      ppuVar10 = (undefined **)&DAT_01889d94;
      goto LAB_01194d60;
    }
    local_170 = piVar8;
    puVar9 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    ppuVar10 = (undefined **)&DAT_01889d34;
    piVar8 = local_178;
    ppuVar12 = local_174;
    piVar16 = local_170;
  }
  else {
    if (iVar23 == 0) {
      ppuVar10 = (undefined **)&DAT_00000004;
      piVar16 = (int *)0x0;
    }
    else {
      ppuVar10 = (undefined **)thunk_FUN_016d4a50(iVar23);
      if (ppuVar10 == (undefined **)0x0) {
LAB_01194840:
        piVar8 = (int *)&DAT_00000004;
LAB_0119423c:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(piVar8,iVar23);
      }
    }
    iVar23 = 0;
    piVar8 = (int *)0x0;
    local_f0 = (int *)0x0;
    local_cc = 0;
    local_dc = (undefined4 *)0x0;
    local_f8 = piVar16;
    local_f4 = ppuVar10;
    while( true ) {
      uVar31 = FUN_00f45584(&local_e0);
      uVar14 = (undefined4)((ulonglong)uVar31 >> 0x20);
      iVar30 = (int)uVar31;
      if (iVar30 == 0) break;
      FUN_011ae1f4(&local_b8,auStack_218,*(undefined4 *)(iVar30 + 4),*(undefined4 *)(iVar30 + 8));
      piVar16 = (int *)FUN_012620c0(local_70,local_38,*(undefined4 *)(iVar30 + 4),
                                    *(undefined4 *)(iVar30 + 8));
      if (piVar16 == (int *)0x0) goto LAB_01194c24;
      uVar6 = FUN_01352d48(local_30,uVar14);
      FUN_0125acb4(&local_130,&local_b8,uVar14,uVar6);
      if (local_130 == 0) {
        DataMemoryBarrier(0xb);
        do {
          iVar23 = *piVar16;
          bVar3 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar3);
        *piVar16 = iVar23 + -1;
        ppuVar10 = local_12c;
        if (iVar23 == 1) {
          DataMemoryBarrier(0xb);
          FUN_011e08bc(piVar16);
        }
        goto LAB_01194d30;
      }
      local_154 = local_130;
      local_14c = local_128;
      local_148 = piStack_124;
      local_144 = uStack_120;
      local_150 = local_12c;
      local_158 = piVar16;
      if (piVar8 == local_f8) {
        FUN_011cf3b8(&local_f8);
        ppuVar10 = local_f4;
      }
      puVar9 = (undefined4 *)((int)ppuVar10 + iVar23);
      piVar8 = (int *)((int)piVar8 + 1);
      *puVar9 = local_158;
      puVar9[1] = local_154;
      puVar9[2] = local_150;
      puVar9[3] = local_14c;
      puVar9[4] = local_148;
      puVar9[5] = local_144;
      local_f0 = piVar8;
      FUN_011ae4dc(&local_b8);
      iVar23 = iVar23 + 0x18;
    }
    if (local_f8 == (int *)&DAT_80000000) {
LAB_01194b74:
      puVar9 = (undefined4 *)0x0;
      goto LAB_01194d60;
    }
    local_188 = local_f8;
    local_184 = ppuVar10;
    if (piVar8 == (int *)&DAT_00000001) {
      puVar9 = (undefined4 *)((uint)&local_b8 | 4);
      local_180 = (int *)0x0;
      local_b8 = *ppuVar10;
      puVar18 = ppuVar10[2];
      puVar21 = ppuVar10[3];
      puVar22 = ppuVar10[4];
      puVar26 = ppuVar10[5];
      *puVar9 = ppuVar10[1];
      puVar9[1] = puVar18;
      puVar9[2] = puVar21;
      puVar9[3] = puVar22;
      puVar9[4] = puVar26;
      puVar9 = (undefined4 *)thunk_FUN_016d4a50(0x18);
      if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x18);
      }
      *puVar9 = local_b8;
      puVar9[1] = (undefined4)local_b4;
      puVar9[2] = local_b4._4_4_;
      puVar9[3] = uStack_ac;
      puVar9[4] = uStack_a8;
      puVar9[5] = uStack_a4;
      FUN_0115e61c(ppuVar10,0);
      thunk_FUN_016d3fb4(ppuVar10);
      ppuVar10 = (undefined **)&DAT_01889db4;
      goto LAB_01194d60;
    }
    local_180 = piVar8;
    puVar9 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    ppuVar10 = &PTR_FUN_01889d74;
    piVar8 = local_188;
    ppuVar12 = local_184;
    piVar16 = local_180;
  }
  *puVar9 = piVar8;
  puVar9[1] = ppuVar12;
  puVar9[2] = piVar16;
  goto LAB_01194d60;
LAB_01194c24:
  do {
    iVar23 = *local_80;
    bVar3 = (bool)hasExclusiveAccess(local_80);
  } while (!bVar3);
  *local_80 = iVar23 + 1;
  if (iVar23 < 0) {
LAB_01194f24:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1194f24);
    (*pcVar1)();
  }
  local_158 = (int *)0x0;
  DataMemoryBarrier(0xb);
  if (DAT_018da8bc != 0) {
    FUN_0120d52c();
  }
  do {
    iVar23 = *DAT_018da8b4;
    bVar3 = (bool)hasExclusiveAccess(DAT_018da8b4);
  } while (!bVar3);
  *DAT_018da8b4 = iVar23 + 1;
  if (iVar23 < 0) goto LAB_01194f24;
  ppuVar10 = (undefined **)
             FUN_011f18dc(local_80,local_7c,&local_158,DAT_018da8b4,DAT_018da8b8,uVar14,"regex",5);
LAB_01194d30:
  FUN_011ae4dc(&local_b8);
  ppuVar12 = local_f4;
  FUN_0115e61c(local_f4,local_f0);
  goto LAB_01194d48;
LAB_01194b84:
  do {
    iVar23 = *local_80;
    bVar3 = (bool)hasExclusiveAccess(local_80);
  } while (!bVar3);
  *local_80 = iVar23 + 1;
  if (iVar23 < 0) goto LAB_01194f24;
  local_158 = (int *)0x0;
  DataMemoryBarrier(0xb);
  if (DAT_018da8bc != 0) {
    FUN_0120d52c();
  }
  do {
    iVar23 = *DAT_018da8b4;
    bVar3 = (bool)hasExclusiveAccess(DAT_018da8b4);
  } while (!bVar3);
  *DAT_018da8b4 = iVar23 + 1;
  if (iVar23 < 0) goto LAB_01194f24;
  ppuVar10 = (undefined **)
             FUN_011f18dc(local_80,local_7c,&local_158,DAT_018da8b4,DAT_018da8b8,uVar14,"regex",5);
LAB_01194ce8:
  FUN_011ae4dc(&local_b8);
  ppuVar12 = local_f4;
  FUN_01160168(local_f4,local_f0);
LAB_01194d48:
  if (local_f8 != (int *)0x0) {
    thunk_FUN_016d3fb4(ppuVar12);
  }
  puVar9 = (undefined4 *)0x0;
LAB_01194d60:
  *param_1 = 1;
  param_1[1] = (int)puVar9;
  param_1[2] = (int)ppuVar10;
  FUN_01161600(auStack_218);
  return;
}

