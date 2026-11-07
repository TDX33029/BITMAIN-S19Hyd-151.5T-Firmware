// FUN_0160d294 @ 0160d294 size=1860 calls_out=14 calls_in=1
// strings: size overflows MAX_SIZE

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0160d294(int *param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  int iVar11;
  undefined2 *puVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  undefined4 uVar26;
  uint uVar27;
  uint uVar28;
  int local_f8;
  int local_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int local_e4;
  int local_e0;
  uint local_dc;
  int iStack_d8;
  int local_d4;
  uint local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  uint local_c0;
  int iStack_bc;
  int local_b8;
  uint local_b4;
  int local_b0;
  uint uStack_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  uint local_98;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char local_80;
  undefined2 local_7f;
  undefined1 local_7d;
  int local_78;
  uint local_74;
  int local_70;
  uint auStack_6c [2];
  undefined2 local_64;
  undefined1 local_62;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_50;
  uint uStack_4c;
  int iStack_48;
  uint uStack_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  
  FUN_0160aaa4(&local_f8,param_3);
  if (param_3 == 0) {
LAB_0160d800:
    *param_1 = local_f8;
    param_1[1] = local_f4;
    param_1[2] = iStack_f0;
    param_1[3] = iStack_ec;
    param_1[4] = iStack_e8;
    param_1[5] = local_e4;
    param_1[6] = local_e0;
    param_1[7] = local_dc;
    param_1[8] = iStack_d8;
    param_1[9] = local_d4;
    param_1[10] = local_d0;
    param_1[0xb] = iStack_cc;
    param_1[0xc] = iStack_c8;
    param_1[0xd] = iStack_c4;
    param_1[0xe] = local_c0;
    param_1[0xf] = iStack_bc;
    return;
  }
  puVar20 = param_2;
LAB_0160d304:
  uVar21 = *puVar20;
  iVar24 = puVar20[1];
  FUN_01413248(&local_40,uVar21,iVar24);
  if (local_40 == 1) {
    if (iVar24 < 0) {
      uVar26 = 0;
LAB_0160d8cc:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar26,iVar24);
    }
    iVar25 = 1;
    iVar22 = 0;
    if (iVar24 != 0) {
      uVar26 = 1;
      iVar25 = FUN_01298504(iVar24,1);
      if (iVar25 == 0) goto LAB_0160d8cc;
      iVar22 = iVar24;
    }
    FUN_01bed4e2(iVar25,uVar21,iVar24);
    *param_1 = 3;
    param_1[1] = 0;
    param_1[4] = (int)&DAT_01d05f5c;
    param_1[3] = 1;
    param_1[5] = iVar22;
    param_1[6] = iVar25;
    param_1[7] = iVar24;
    *(undefined1 *)(param_1 + 2) = 4;
LAB_0160d8b0:
    FUN_0142e6dc(&local_f8);
    return;
  }
  puVar19 = puVar20 + 4;
  local_b0 = local_34;
  uStack_ac = local_30;
  iVar22 = puVar20[2];
  iVar25 = puVar20[3];
  local_b8 = local_3c;
  iVar24 = 0;
  local_b4 = local_38;
  while (iVar25 != iVar24) {
    bVar1 = *(byte *)(iVar22 + iVar24);
    iVar24 = iVar24 + 1;
    if ((bVar1 != 9) && (bVar1 < 0x20 || bVar1 == 0x7f)) {
      uVar21 = 0;
      if (iVar25 < 0) {
LAB_0160d7f0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar21,iVar25);
      }
      iVar18 = 1;
      iVar24 = 0;
      if (iVar25 != 0) {
        uVar21 = 1;
        iVar18 = FUN_01298504(iVar25,1);
        iVar24 = iVar25;
        if (iVar18 == 0) goto LAB_0160d7f0;
      }
      FUN_01bed4e2(iVar18,iVar22,iVar25);
      param_1[4] = (int)&DAT_01d05f20;
      *param_1 = 3;
      param_1[1] = 0;
      param_1[3] = 1;
      param_1[5] = iVar24;
      param_1[6] = iVar18;
      param_1[7] = iVar25;
      *(undefined1 *)(param_1 + 2) = 5;
      if (local_b8 != 0) {
        (**(code **)(local_b8 + 0x10))(&uStack_ac,local_b4,local_b0);
      }
      goto LAB_0160d8b0;
    }
  }
  FUN_012834b0(&local_40,iVar22,iVar25);
  local_30 = local_30 & 0xffffff00;
  local_98 = local_30;
  local_9c = local_34;
  local_a0 = local_38;
  local_a4 = local_3c;
  local_a8 = local_40;
  local_78 = local_b8;
  local_74 = local_b4;
  local_70 = local_b0;
  auStack_6c[0] = uStack_ac;
  iVar24 = FUN_0160a4d0(&local_f8);
  if (iVar24 == 0) {
    uVar7 = FUN_0137e53c(&local_f8,&local_78);
    iVar18 = local_70;
    uVar13 = local_74;
    iVar25 = local_78;
    uVar14 = local_d0;
    iVar22 = local_d4;
    uVar17 = local_dc;
    iVar24 = local_e0;
    uVar28 = (uint)uVar7;
    uVar8 = local_74 & 0xff;
    uVar27 = 0;
    uVar4 = (ushort)local_c0;
    uVar23 = local_c0 & 0xffff;
    uVar16 = uVar23 & uVar28;
LAB_0160d464:
    do {
      uVar9 = uVar16;
      uVar16 = 0;
    } while (uVar17 <= uVar9);
    puVar10 = (ushort *)(iVar24 + uVar9 * 4);
    uVar16 = (uint)*puVar10;
    if (uVar16 == 0xffff) {
      local_50 = local_78;
      uStack_4c = local_74;
      iStack_48 = local_70;
      uStack_44 = auStack_6c[0];
      local_40 = local_a8;
      local_3c = local_a4;
      local_38 = local_a0;
      local_34 = local_9c;
      local_30 = local_98;
      iVar24 = FUN_0160a778(&local_f8,uVar28);
      if (iVar24 != 0) goto LAB_0160d99c;
      if (local_dc <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar9,local_dc,&DAT_01d1e414);
      }
      puVar12 = (undefined2 *)(local_e0 + uVar9 * 4);
      *puVar12 = (short)uVar14;
      puVar12[1] = uVar7;
      goto LAB_0160d694;
    }
    uVar3 = puVar10[1];
    if ((uVar9 - (uVar4 & uVar3) & uVar23) < uVar27) {
      local_50 = local_78;
      uStack_4c = local_74;
      iStack_48 = local_70;
      uStack_44 = auStack_6c[0];
      local_40 = local_a8;
      local_3c = local_a4;
      local_38 = local_a0;
      local_34 = local_9c;
      local_30 = local_98;
      bVar5 = local_f8 != 2;
      bVar6 = local_f4 != 0;
      iVar24 = FUN_0160a778(&local_f8,uVar28);
      if (iVar24 != 0) goto LAB_0160d99c;
      uVar13 = 0;
      uVar17 = uVar14 & 0xffff;
      while( true ) {
        do {
          uVar14 = uVar9;
          uVar9 = 0;
        } while (local_dc <= uVar14);
        puVar10 = (ushort *)(local_e0 + uVar14 * 4);
        uVar4 = *puVar10;
        uVar7 = (ushort)uVar28;
        if (uVar4 == 0xffff) break;
        *puVar10 = (ushort)uVar17;
        uVar28 = (uint)puVar10[1];
        uVar13 = uVar13 + 1;
        puVar10[1] = uVar7;
        uVar17 = (uint)uVar4;
        uVar9 = uVar14 + 1;
      }
      puVar10[1] = uVar7;
      *puVar10 = (ushort)uVar17;
      if ((uVar27 >> 9 != 0 && (bVar5 || bVar6) || 0x7f < uVar13) &&
          (local_f8 == 0 && local_f4 == 0)) {
        local_f8 = 1;
        local_f4 = 0;
      }
LAB_0160d694:
      local_90 = local_60;
      uStack_8c = uStack_5c;
      uStack_88 = uStack_58;
      uStack_84 = uStack_54;
      local_7d = local_62;
      local_7f = local_64;
      local_80 = '\x02';
      goto LAB_0160d6c4;
    }
    if (uVar3 == uVar28) {
      if (uVar14 <= uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar16,uVar14,&DAT_01d1e404);
      }
      iVar11 = uVar16 * 0x34 + iVar22;
      if ((*(int *)(iVar11 + 0x20) != 0) != (iVar25 == 0)) {
        if (*(int *)(iVar11 + 0x20) == 0) {
          if (*(byte *)(iVar11 + 0x24) == uVar8) goto LAB_0160d6ec;
        }
        else if ((*(int *)(iVar11 + 0x28) == iVar18) &&
                (iVar11 = thunk_FUN_01bed842(*(undefined4 *)(iVar11 + 0x24),uVar13,iVar18),
                iVar11 == 0)) goto LAB_0160d6ec;
      }
    }
    uVar27 = uVar27 + 1;
    uVar16 = uVar9 + 1;
    goto LAB_0160d464;
  }
  (**(code **)(local_a8 + 0x10))(&local_9c,local_a4,local_a0);
  if (local_78 != 0) {
    (**(code **)(local_78 + 0x10))(auStack_6c,local_74,local_70);
  }
  goto LAB_0160d99c;
LAB_0160d6ec:
  local_40 = local_a8;
  local_3c = local_a4;
  local_38 = local_a0;
  local_34 = local_9c;
  local_30 = local_98;
  piVar15 = (int *)(iVar22 + uVar16 * 0x34);
  if (*piVar15 != 0) {
    FUN_00713d00(&local_f8,piVar15[1]);
    uVar14 = local_d0;
  }
  if (uVar14 <= uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar16,uVar14,&DAT_01d1e444);
  }
  iVar24 = uVar16 * 0x34 + local_d4;
  local_60 = *(int *)(iVar24 + 0xc);
  uStack_5c = *(undefined4 *)(iVar24 + 0x10);
  uStack_58 = *(undefined4 *)(iVar24 + 0x14);
  uStack_54 = *(undefined4 *)(iVar24 + 0x18);
  local_64 = *(undefined2 *)(iVar24 + 0x1d);
  cVar2 = *(char *)(iVar24 + 0x1c);
  local_62 = *(undefined1 *)(iVar24 + 0x1f);
  *(int *)(iVar24 + 0xc) = local_40;
  *(int *)(iVar24 + 0x10) = local_3c;
  *(uint *)(iVar24 + 0x14) = local_38;
  *(int *)(iVar24 + 0x18) = local_34;
  *(uint *)(iVar24 + 0x1c) = local_30;
  if (iVar25 != 0) {
    (**(code **)(iVar25 + 0x10))(auStack_6c,uVar13,iVar18);
  }
  if (cVar2 == '\x03') {
LAB_0160d99c:
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("size overflows MAX_SIZE",0x17,&local_40,&DAT_01d2f38c,&DAT_01d1e464);
  }
  local_90 = local_60;
  uStack_8c = uStack_5c;
  uStack_88 = uStack_58;
  uStack_84 = uStack_54;
  local_7f = local_64;
  local_7d = local_62;
  local_80 = cVar2;
  if (cVar2 != '\x02') {
    (**(code **)(local_60 + 0x10))(&uStack_84,uStack_5c,uStack_58);
  }
LAB_0160d6c4:
  puVar20 = puVar19;
  if (puVar19 == param_2 + param_3 * 4) goto LAB_0160d800;
  goto LAB_0160d304;
}

