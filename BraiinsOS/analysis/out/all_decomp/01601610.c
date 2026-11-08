// FUN_01601610 @ 01601610 size=1804 calls_out=7 calls_in=1
// strings: 

void FUN_01601610(int *param_1,undefined4 *param_2,undefined1 *param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  undefined *puVar15;
  int iVar16;
  int iVar17;
  ushort *puVar18;
  ushort *puVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int *local_e0;
  uint local_d4;
  int *local_d0;
  uint local_cc;
  int local_ac;
  uint local_a8;
  uint local_a4;
  int *local_a0;
  int local_9c;
  int *local_98;
  int local_94;
  int local_90;
  uint local_8c;
  undefined4 local_88;
  int *local_84;
  int local_80;
  int *local_7c;
  int local_78;
  int local_74;
  uint local_70;
  uint local_6c;
  int *local_68;
  uint local_64;
  int *local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int *local_4c;
  uint local_48;
  int *local_44;
  uint local_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  
  local_d0 = (int *)*param_2;
  local_cc = param_2[2];
  puVar19 = (ushort *)((int)local_d0 + 0x10e);
  uVar27 = (uint)*puVar19;
  iVar17 = (uVar27 + ~local_cc) * 0xc;
  iVar3 = local_d0[local_cc * 3 + 2];
  iVar9 = local_d0[local_cc * 3 + 1];
  iVar24 = local_d0[local_cc * 3 + 3];
  FUN_016dd52c(local_d0 + local_cc * 3 + 1,local_d0 + local_cc * 3 + 4,iVar17);
  iVar4 = local_d0[local_cc * 3 + 0x22];
  iVar13 = local_d0[local_cc * 3 + 0x23];
  iVar16 = local_d0[local_cc * 3 + 0x24];
  FUN_016dd52c(local_d0 + local_cc * 3 + 0x22,local_d0 + local_cc * 3 + 0x25,iVar17);
  uVar5 = uVar27 - 1;
  iVar17 = param_2[1];
  uVar22 = uVar5 & 0xffff;
  *puVar19 = (ushort)uVar5;
  if ((4 < uVar22) || (iVar21 = *local_d0, iVar21 == 0)) goto LAB_01601c88;
  uVar25 = iVar17 + 1;
  uVar28 = (uint)*(ushort *)(local_d0 + 0x43);
  if (uVar28 == 0) {
    piVar7 = local_4c;
    uVar5 = local_48;
    if (*(short *)(iVar21 + 0x10e) == 0) {
LAB_01601cd8:
      local_48 = uVar5;
      local_4c = piVar7;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00410ada,0x7b,&DAT_018ab328);
    }
    piVar7 = *(int **)(iVar21 + 0x114);
    uVar29 = 0;
    uVar5 = (uint)*(ushort *)((int)piVar7 + 0x10e);
    local_88 = 0;
    local_90 = iVar21;
    local_8c = uVar25;
    local_84 = local_d0;
    local_80 = iVar17;
    local_7c = piVar7;
    local_78 = iVar17;
    if (uVar27 + uVar5 < 0xc) {
      piVar14 = local_d0;
      uVar27 = uVar22;
      goto LAB_0160179c;
    }
    FUN_01602248(&local_90,1);
  }
  else {
    uVar29 = uVar28 - 1;
    local_a0 = *(int **)(iVar21 + uVar29 * 4 + 0x110);
    puVar19 = (ushort *)((int)local_a0 + 0x10e);
    piVar14 = local_a0;
    piVar7 = local_d0;
    uVar27 = (uint)*puVar19;
    local_ac = iVar21;
    local_a8 = uVar25;
    local_a4 = uVar29;
    local_9c = iVar17;
    local_98 = local_d0;
    local_94 = iVar17;
    if ((uint)*puVar19 + (uVar5 & 0xffff) + 1 < 0xc) {
LAB_0160179c:
      if (uVar22 < local_cc) {
        uVar12 = 0x8e;
        puVar15 = &DAT_018ab3d8;
        puVar8 = &DAT_00410bc5;
LAB_01601d20:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(puVar8,uVar12,puVar15);
      }
      iVar10 = uVar27 + 1;
      uVar22 = iVar10 + (uVar5 & 0xffff);
      if (0xb < uVar22) {
        uVar12 = 0x2a;
        puVar15 = &DAT_018ab3e8;
        puVar8 = &DAT_00410c53;
        goto LAB_01601d20;
      }
      puVar18 = (ushort *)(iVar21 + 0x10e);
      uVar26 = (uint)*puVar18;
      *puVar19 = (ushort)uVar22;
      iVar20 = iVar21 + uVar29 * 0xc;
      local_54 = *(int *)(iVar20 + 8);
      local_50 = *(int *)(iVar20 + 0xc);
      local_58 = *(int *)(iVar20 + 4);
      FUN_016dd52c((int *)(iVar20 + 4),iVar20 + 0x10);
      piVar6 = piVar14 + uVar27 * 3 + 1;
      *piVar6 = local_58;
      piVar6[1] = local_54;
      piVar6[2] = local_50;
      FUN_016dd1aa(piVar14 + iVar10 * 3 + 1,piVar7 + 1);
      local_58 = *(int *)(iVar20 + 0x88);
      local_54 = *(uint *)(iVar20 + 0x8c);
      local_50 = *(int *)(iVar20 + 0x90);
      FUN_016dd52c((int *)(iVar20 + 0x88),iVar20 + 0x94,(~uVar29 + uVar26) * 0xc);
      piVar6 = piVar14 + uVar27 * 3 + 0x22;
      *piVar6 = local_58;
      piVar6[1] = local_54;
      piVar6[2] = local_50;
      FUN_016dd1aa(piVar14 + iVar10 * 3 + 0x22,piVar7 + 0x22,(uVar5 & 0xffff) * 0xc);
      uVar23 = uVar29 + 1;
      iVar20 = iVar21 + uVar23 * 4;
      FUN_016dd52c(iVar20 + 0x110,iVar20 + 0x114,(~uVar29 + uVar26) * 4);
      if (uVar23 < uVar26) {
        do {
          piVar6 = *(int **)(iVar21 + uVar23 * 4 + 0x110);
          *piVar6 = iVar21;
          *(short *)(piVar6 + 0x43) = (short)uVar23;
          uVar23 = uVar23 + 1;
        } while (uVar26 != uVar23);
      }
      *puVar18 = *puVar18 - 1;
      if (1 < uVar25) {
        iVar21 = (uVar5 & 0xffff) + 1;
        if (iVar21 != uVar22 - uVar27) {
LAB_01601cbc:
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_004194bf,0x28,&DAT_018ab348);
        }
        FUN_016dd1aa(piVar14 + uVar27 + 0x45,piVar7 + 0x44,iVar21 * 4);
        iVar20 = uVar27 + 0x45;
        do {
          puVar11 = (undefined4 *)piVar14[iVar20];
          sVar2 = (short)iVar20;
          iVar20 = iVar20 + 1;
          iVar21 = iVar21 + -1;
          *puVar11 = piVar14;
          *(short *)(puVar11 + 0x43) = sVar2 + -0x44;
        } while (iVar21 != 0);
      }
      thunk_FUN_016d3fb4(piVar7);
      local_d0 = piVar14;
      if (uVar28 != 0) {
        local_cc = local_cc + iVar10;
      }
    }
    else {
      FUN_01601f8c(&local_ac,1);
      local_cc = local_cc + 1;
    }
  }
  piVar14 = (int *)*local_d0;
  if (piVar14 != (int *)0x0) {
    uVar1 = *(ushort *)((int)piVar14 + 0x10e);
    piVar7 = local_4c;
    uVar5 = local_48;
    while( true ) {
      local_4c = piVar14;
      local_48 = uVar25;
      uVar22 = (uint)uVar1;
      if (4 < uVar22) break;
      piVar14 = (int *)*local_4c;
      if (piVar14 == (int *)0x0) {
        if (uVar22 == 0) {
          *param_3 = 1;
        }
        break;
      }
      uVar25 = local_48 + 1;
      uVar27 = (uint)*(ushort *)(local_4c + 0x43);
      if (uVar27 == 0) {
        uVar27 = (uint)*(ushort *)((int)piVar14 + 0x10e);
        if (uVar27 == 0) goto LAB_01601cd8;
        local_e0 = (int *)piVar14[0x45];
        iVar21 = uVar22 + 1;
        uVar28 = 0;
        local_d4 = (uint)*(ushort *)((int)local_e0 + 0x10e);
        uVar5 = iVar21 + local_d4;
        local_50 = 0;
        local_58 = (int)piVar14;
        local_54 = uVar25;
        local_44 = local_e0;
        local_40 = local_48;
        if (0xb < uVar5) {
          FUN_01602248(&local_58,5 - uVar22);
          break;
        }
        uVar29 = uVar22;
        piVar6 = local_4c;
      }
      else {
        uVar28 = uVar27 - 1;
        local_68 = (int *)piVar14[uVar27 + 0x43];
        uVar29 = (uint)*(ushort *)((int)local_68 + 0x10e);
        local_74 = (int)piVar14;
        local_70 = uVar25;
        local_6c = uVar28;
        local_64 = local_48;
        local_60 = local_4c;
        local_5c = local_48;
        local_48 = uVar5;
        if (0xb < uVar22 + uVar29 + 1) {
          local_4c = piVar7;
          FUN_01601f8c(&local_74,5 - uVar22);
          break;
        }
        iVar21 = uVar29 + 1;
        uVar27 = (uint)*(ushort *)((int)piVar14 + 0x10e);
        uVar5 = iVar21 + uVar22;
        piVar6 = local_68;
        local_e0 = local_4c;
        local_d4 = uVar22;
        local_4c = piVar7;
      }
      *(short *)((int)piVar6 + 0x10e) = (short)uVar5;
      iStack_34 = piVar14[uVar28 * 3 + 2];
      iStack_30 = piVar14[uVar28 * 3 + 3];
      local_38 = piVar14[uVar28 * 3 + 1];
      FUN_016dd52c(piVar14 + uVar28 * 3 + 1,piVar14 + uVar28 * 3 + 4);
      piVar7 = piVar6 + uVar29 * 3 + 1;
      *piVar7 = local_38;
      piVar7[1] = iStack_34;
      piVar7[2] = iStack_30;
      FUN_016dd1aa(piVar6 + iVar21 * 3 + 1,local_e0 + 1);
      local_38 = piVar14[uVar28 * 3 + 0x22];
      iStack_34 = piVar14[uVar28 * 3 + 0x23];
      iStack_30 = piVar14[uVar28 * 3 + 0x24];
      FUN_016dd52c(piVar14 + uVar28 * 3 + 0x22,piVar14 + uVar28 * 3 + 0x25,(~uVar28 + uVar27) * 0xc)
      ;
      piVar7 = piVar6 + uVar29 * 3 + 0x22;
      *piVar7 = local_38;
      piVar7[1] = iStack_34;
      piVar7[2] = iStack_30;
      FUN_016dd1aa(piVar6 + iVar21 * 3 + 0x22,local_e0 + 0x22,local_d4 * 0xc);
      uVar22 = uVar28 + 1;
      FUN_016dd52c(piVar14 + uVar28 + 0x45,piVar14 + uVar28 + 0x46,(~uVar28 + uVar27) * 4);
      if (uVar22 < uVar27) {
        do {
          piVar7 = (int *)piVar14[uVar22 + 0x44];
          *piVar7 = (int)piVar14;
          *(short *)(piVar7 + 0x43) = (short)uVar22;
          uVar22 = uVar22 + 1;
        } while (uVar27 != uVar22);
      }
      puVar19 = (ushort *)((int)piVar14 + 0x10e);
      *puVar19 = *puVar19 - 1;
      if (1 < uVar25) {
        if (local_d4 + 1 != uVar5 - uVar29) goto LAB_01601cbc;
        FUN_016dd1aa(piVar6 + iVar21 + 0x44,local_e0 + 0x44,(local_d4 + 1) * 4);
        do {
          puVar11 = (undefined4 *)piVar6[iVar21 + 0x44];
          *puVar11 = piVar6;
          *(short *)(puVar11 + 0x43) = (short)iVar21;
          iVar21 = iVar21 + 1;
        } while (uVar5 + 1 != iVar21);
      }
      thunk_FUN_016d3fb4(local_e0);
      uVar1 = *puVar19;
      piVar7 = local_4c;
      uVar5 = local_48;
    }
  }
LAB_01601c88:
  *param_1 = iVar9;
  param_1[1] = iVar3;
  param_1[2] = iVar24;
  param_1[3] = iVar4;
  param_1[4] = iVar13;
  param_1[5] = iVar16;
  param_1[6] = (int)local_d0;
  param_1[7] = iVar17;
  param_1[8] = local_cc;
  return;
}

