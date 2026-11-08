// FUN_010ad674 @ 010ad674 size=2112 calls_out=8 calls_in=1
// strings: accept | accept

void FUN_010ad674(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  int iVar11;
  int *piVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  undefined *puVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  byte bVar26;
  byte bVar27;
  int iVar28;
  byte *pbVar29;
  byte *pbVar31;
  byte *pbVar30;
  uint unaff_r8;
  int iVar32;
  uint uVar33;
  int *piVar34;
  bool bVar35;
  uint local_8c;
  uint local_60;
  uint local_5c;
  uint local_54;
  uint local_4c;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  
  uVar16 = *(uint *)(param_1 + 0x28);
  if (uVar16 == 0) {
    return;
  }
  iVar20 = *(int *)(param_1 + 0x24);
  uVar25 = *(uint *)(param_1 + 0x1c);
  iVar23 = *(int *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x18);
  uVar6 = *(uint *)(param_1 + 0x34);
  uVar2 = *(ushort *)(param_1 + 0x38);
  iVar17 = iVar20;
LAB_010ad6f4:
  piVar21 = (int *)(iVar17 + 0x20);
  FUN_010b2694(&local_30,param_2);
  iVar4 = local_28;
  if (local_30 == 1) {
    if (*(uint *)(local_28 + 0x28) <= local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(local_2c,*(uint *)(local_28 + 0x28),&DAT_01884ca0);
    }
    local_8c = local_2c;
    puVar18 = (uint *)(*(int *)(local_28 + 0x24) + local_2c * 0x30);
    uVar7 = *puVar18;
    local_3c = 0;
    bVar35 = (uVar7 & 1) != 0;
    if (bVar35) {
      uVar7 = puVar18[2];
    }
    puVar18 = &local_38;
    local_34 = (uint)bVar35;
  }
  else {
    puVar18 = &local_34;
    local_8c = 0xffffffff;
    uVar7 = 2;
    local_3c = 2;
  }
  *puVar18 = uVar7;
  iVar22 = iVar17 + 0x34;
  uVar8 = FUN_010b0a24(param_1,piVar21);
  uVar33 = 0;
  uVar7 = (uint)uVar2 & uVar8 & 0xffff;
LAB_010ad7c0:
  do {
    uVar9 = uVar7;
    uVar7 = 0;
  } while (uVar25 <= uVar9);
  local_44 = 2;
  puVar10 = (ushort *)(iVar5 + uVar9 * 4);
  uVar7 = (uint)*puVar10;
  local_4c = 0xffffffff;
  if (uVar7 == 0xffff) {
    local_40 = 2;
    goto LAB_010ad8c8;
  }
  uVar3 = puVar10[1];
  local_40 = 2;
  if ((uVar9 - (uVar3 & uVar2) & (uint)uVar2) < uVar33) goto LAB_010ad8c8;
  if ((uint)uVar3 == (uVar8 & 0xffff)) {
    if (uVar16 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar7,uVar16,&DAT_018a6bf0);
    }
    iVar11 = uVar7 * 0x34 + iVar20;
    if ((*(int *)(iVar11 + 0x20) != 0) != (*piVar21 == 0)) {
      if (*(int *)(iVar11 + 0x20) == 0) {
        if (*(char *)(iVar11 + 0x24) == *(char *)(iVar17 + 0x24)) goto LAB_010ad890;
      }
      else if ((*(int *)(iVar11 + 0x28) == *(int *)(iVar17 + 0x28)) &&
              (iVar11 = thunk_FUN_016dd50a(*(undefined4 *)(iVar11 + 0x24),
                                           *(undefined4 *)(iVar17 + 0x24)), iVar11 == 0))
      goto LAB_010ad890;
    }
  }
  uVar33 = uVar33 + 1;
  uVar7 = uVar9 + 1;
  goto LAB_010ad7c0;
LAB_010ad890:
  local_40 = 0;
  puVar18 = (uint *)(iVar20 + uVar7 * 0x34);
  local_4c = uVar7;
  if ((*puVar18 & 1) == 0) {
    local_44 = 0;
  }
  else {
    local_60 = puVar18[2];
    local_44 = 1;
  }
LAB_010ad8c8:
  uVar7 = local_38;
  piVar12 = (int *)(local_4c * 0x34 + iVar20);
  local_54 = local_34;
  ppuVar13 = (undefined **)(iVar17 + 0x24);
  while (local_40 != 2) {
    if ((local_40 & 1) == 0) {
      if (uVar16 <= local_4c) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(local_4c,uVar16,&DAT_018847b8);
      }
      if (local_44 == 0) {
        local_40 = 2;
        local_44 = 2;
      }
      else {
        if (*piVar12 != 1) goto LAB_010ade3c;
        unaff_r8 = piVar12[1];
        local_40 = 1;
      }
      piVar34 = piVar12 + 3;
      if (local_3c == 2) goto LAB_010ada9c;
LAB_010ad9e0:
      if ((local_3c & 1) == 0) {
        if (*(uint *)(iVar4 + 0x28) <= local_8c) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(local_8c,*(uint *)(iVar4 + 0x28),&DAT_018847b8);
        }
        piVar15 = (int *)(*(int *)(iVar4 + 0x24) + local_8c * 0x30);
        if (local_54 == 0) {
          piVar15 = piVar15 + 3;
          local_54 = 2;
          local_34 = 2;
          local_3c = 2;
        }
        else {
          if (*piVar15 == 0) {
LAB_010ade3c:
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_00419463,0x28,&DAT_018847c8);
          }
          local_5c = piVar15[1];
          piVar15 = piVar15 + 3;
          local_3c = 1;
        }
      }
      else {
        if (*(uint *)(iVar4 + 0x34) <= local_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(local_5c,*(uint *)(iVar4 + 0x34),&DAT_018847d8);
        }
        iVar11 = *(int *)(iVar4 + 0x30) + local_5c * 0x20;
        uVar8 = local_54;
        if (local_54 == 1) {
          uVar8 = uVar7;
        }
        if (local_54 == 1 && local_5c == uVar8) {
          local_3c = 2;
          local_54 = 2;
          local_34 = 2;
          local_5c = uVar7;
        }
        else if (*(int *)(iVar11 + 8) == 0) {
          local_3c = 2;
        }
        else {
          local_3c = 1;
          local_5c = *(uint *)(iVar11 + 0xc);
        }
        piVar15 = (int *)(iVar11 + 0x10);
      }
      iVar11 = param_3[2];
      iVar32 = piVar15[1];
      uVar8 = piVar15[2];
      if ((uint)(*param_3 - iVar11) < uVar8) {
        FUN_010bf6b0(param_3,iVar11,uVar8,1,1);
        iVar11 = param_3[2];
      }
      FUN_016dd1aa(param_3[1] + iVar11,iVar32,uVar8);
LAB_010adc74:
      iVar11 = iVar11 + uVar8;
      param_3[2] = iVar11;
    }
    else {
      if (uVar6 <= unaff_r8) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(unaff_r8,uVar6,&DAT_018847d8);
      }
      local_40 = 2;
      iVar11 = iVar23 + unaff_r8 * 0x24;
      uVar8 = local_44;
      if (local_44 == 1) {
        uVar8 = local_60;
      }
      if (local_44 == 1 && unaff_r8 == uVar8) {
        local_44 = 2;
        unaff_r8 = local_60;
      }
      else if (*(int *)(iVar11 + 8) == 1) {
        unaff_r8 = *(uint *)(iVar11 + 0xc);
        local_40 = 1;
      }
      piVar34 = (int *)(iVar11 + 0x10);
      if (local_3c != 2) goto LAB_010ad9e0;
LAB_010ada9c:
      if (param_4 == 0) {
        ppuVar14 = ppuVar13;
        puVar18 = (uint *)(iVar17 + 0x28);
        if (*piVar21 == 0) {
          puVar18 = (uint *)(&DAT_0041fcdc + (uint)*(byte *)ppuVar13 * 4);
          ppuVar14 = &PTR_s_accept_018b1b84 + *(byte *)ppuVar13;
        }
        uVar8 = *puVar18;
        iVar11 = param_3[2];
        puVar19 = *ppuVar14;
        if ((uint)(*param_3 - iVar11) < uVar8) {
          FUN_010bf6b0(param_3,iVar11,uVar8,1,1);
          iVar11 = param_3[2];
        }
        FUN_016dd1aa(param_3[1] + iVar11,puVar19,uVar8);
        local_3c = 2;
        goto LAB_010adc74;
      }
      if (*piVar21 == 0) {
        iVar11 = param_3[2];
        uVar8 = *(uint *)(&DAT_0041fe20 + (uint)*(byte *)ppuVar13 * 4);
        pbVar29 = (&PTR_s_accept_018b1cc8)[*(byte *)ppuVar13];
        if ((uint)(*param_3 - iVar11) < uVar8) goto LAB_010ade0c;
LAB_010adbac:
        iVar11 = param_3[2];
        bVar27 = 0x2d;
        pbVar31 = pbVar29;
        do {
          pbVar30 = pbVar31 + 1;
          bVar1 = *pbVar31;
          bVar26 = bVar1;
          if ((byte)(bVar1 + 0x9f) < 0x1a) {
            bVar26 = bVar1 ^ 0x20;
          }
          bVar35 = bVar27 != 0x2d;
          bVar27 = bVar26;
          if (bVar35) {
            bVar27 = bVar1;
          }
          if (iVar11 == *param_3) {
            FUN_006029c0(param_3);
          }
          *(byte *)(param_3[1] + iVar11) = bVar27;
          iVar11 = iVar11 + 1;
          param_3[2] = iVar11;
          pbVar31 = pbVar30;
        } while (pbVar30 != pbVar29 + uVar8);
      }
      else {
        iVar11 = param_3[2];
        uVar8 = *(uint *)(iVar17 + 0x28);
        pbVar29 = *ppuVar13;
        if ((uint)(*param_3 - iVar11) < uVar8) {
LAB_010ade0c:
          FUN_010bf6b0(param_3,iVar11,uVar8,1,1);
          goto LAB_010adbac;
        }
        if (uVar8 != 0) goto LAB_010adbac;
      }
      local_3c = 2;
    }
    iVar32 = *param_3;
    if (piVar34[2] == 0) {
      if ((uint)(iVar32 - iVar11) < 3) {
        FUN_010bf6b0(param_3,iVar11,3,1,1);
        iVar11 = param_3[2];
      }
      iVar32 = param_3[1];
      *(undefined2 *)(iVar32 + iVar11) = 0xd3a;
      *(undefined1 *)((undefined2 *)(iVar32 + iVar11) + 1) = 10;
      iVar32 = 3;
    }
    else {
      if ((uint)(iVar32 - iVar11) < 2) {
        FUN_010bf6b0(param_3,iVar11,2,1,1);
        iVar32 = *param_3;
        iVar11 = param_3[2];
      }
      iVar28 = param_3[1];
      iVar24 = iVar11 + 2;
      param_3[2] = iVar24;
      *(undefined2 *)(iVar28 + iVar11) = 0x203a;
      iVar11 = piVar34[1];
      uVar8 = piVar34[2];
      if ((uint)(iVar32 - iVar24) < uVar8) {
        FUN_010bf6b0(param_3,iVar24,uVar8,1,1);
        iVar32 = *param_3;
        iVar28 = param_3[1];
        iVar24 = param_3[2];
      }
      FUN_016dd1aa(iVar28 + iVar24,iVar11,uVar8);
      iVar24 = iVar24 + uVar8;
      param_3[2] = iVar24;
      if ((uint)(iVar32 - iVar24) < 2) {
        FUN_010bf6b0(param_3,iVar24,2,1,1);
        iVar28 = param_3[1];
        iVar24 = param_3[2];
      }
      *(undefined2 *)(iVar28 + iVar24) = 0xa0d;
      iVar32 = 2;
      iVar11 = param_3[2];
    }
    param_3[2] = iVar11 + iVar32;
  }
  iVar17 = iVar22;
  if (iVar22 == uVar16 * 0x34 + iVar20) {
    return;
  }
  goto LAB_010ad6f4;
}

