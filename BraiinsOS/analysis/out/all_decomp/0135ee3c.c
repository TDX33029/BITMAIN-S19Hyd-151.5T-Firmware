// FUN_0135ee3c @ 0135ee3c size=1684 calls_out=7 calls_in=1
// strings: 

void FUN_0135ee3c(int *param_1,undefined4 *param_2,undefined1 *param_3)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  ushort *puVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint local_cc;
  int *local_c8;
  int *local_ac;
  uint local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c;
  int *local_98;
  int local_94;
  int *local_90;
  int local_8c;
  int local_88;
  uint local_84;
  undefined4 local_80;
  int *local_7c;
  int local_78;
  int *local_74;
  int local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  int *local_60;
  uint local_5c;
  int *local_58;
  uint local_54;
  int local_50;
  uint local_4c;
  int local_48;
  int *local_44;
  uint local_40;
  int *local_3c;
  uint local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  local_c8 = (int *)*param_2;
  local_cc = param_2[2];
  puVar19 = (ushort *)((int)local_c8 + 0xb6);
  uVar21 = (uint)*puVar19;
  iVar12 = local_c8[local_cc + 1];
  FUN_016dd52c(local_c8 + local_cc + 1,local_c8 + local_cc + 2,(uVar21 + ~local_cc) * 4);
  iVar23 = local_c8[local_cc * 3 + 0xc];
  iVar9 = local_c8[local_cc * 3 + 0xe];
  iVar15 = local_c8[local_cc * 3 + 0xd];
  FUN_016dd52c(local_c8 + local_cc * 3 + 0xc,local_c8 + local_cc * 3 + 0xf,
               (uVar21 + ~local_cc) * 0xc);
  uVar10 = uVar21 - 1;
  iVar13 = param_2[1];
  *puVar19 = (ushort)uVar10;
  uVar4 = uVar10 & 0xffff;
  if ((4 < uVar4) || (iVar16 = *local_c8, iVar16 == 0)) goto LAB_0135f468;
  uVar25 = (uint)*(ushort *)(local_c8 + 0x2d);
  uVar24 = iVar13 + 1;
  if (uVar25 == 0) {
    piVar7 = local_44;
    uVar10 = local_40;
    if (*(short *)(iVar16 + 0xb6) == 0) {
LAB_0135f4a4:
      local_40 = uVar10;
      local_44 = piVar7;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00410ada,0x7b,&DAT_01892400);
    }
    local_74 = *(int **)(iVar16 + 0xbc);
    uVar10 = (uint)*(ushort *)((int)local_74 + 0xb6);
    local_80 = 0;
    piVar6 = local_c8;
    local_7c = local_c8;
    local_78 = iVar13;
    local_70 = iVar13;
    uVar26 = uVar4;
    local_88 = iVar16;
    local_84 = uVar24;
    piVar7 = local_74;
    uVar3 = 0;
    if (uVar21 + uVar10 < 0xc) goto joined_r0x0135f168;
    FUN_0135f764(&local_88,1);
  }
  else {
    local_9c = uVar25 - 1;
    local_98 = *(int **)(iVar16 + local_9c * 4 + 0xb8);
    puVar19 = (ushort *)((int)local_98 + 0xb6);
    uVar26 = (uint)*puVar19;
    piVar6 = local_98;
    piVar7 = local_c8;
    uVar3 = local_9c;
    local_a4 = iVar16;
    local_a0 = uVar24;
    local_94 = iVar13;
    local_90 = local_c8;
    local_8c = iVar13;
    if (uVar26 + (uVar10 & 0xffff) + 1 < 0xc) {
joined_r0x0135f168:
      local_c8 = piVar6;
      if (uVar4 < local_cc) {
        uVar11 = 0x8e;
        puVar14 = &DAT_01892470;
        puVar8 = &DAT_00410bc5;
LAB_0135f4d4:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(puVar8,uVar11,puVar14);
      }
      iVar18 = uVar26 + 1;
      uVar4 = iVar18 + (uVar10 & 0xffff);
      if (0xb < uVar4) {
        uVar11 = 0x2a;
        puVar14 = &DAT_01892480;
        puVar8 = &DAT_00410c53;
        goto LAB_0135f4d4;
      }
      uVar22 = (uint)*(ushort *)(iVar16 + 0xb6);
      uVar10 = uVar10 & 0xffff;
      *puVar19 = (ushort)uVar4;
      iVar5 = iVar16 + uVar3 * 4;
      piVar6 = (int *)(iVar5 + 4);
      iVar20 = *piVar6;
      FUN_016dd52c(piVar6,iVar5 + 8);
      local_c8[uVar26 + 1] = iVar20;
      FUN_016dd1aa(local_c8 + uVar26 + 2,piVar7 + 1,uVar10 << 2);
      iVar5 = iVar16 + uVar3 * 0xc;
      local_50 = *(int *)(iVar5 + 0x30);
      local_4c = *(uint *)(iVar5 + 0x34);
      local_48 = *(int *)(iVar5 + 0x38);
      FUN_016dd52c((int *)(iVar5 + 0x30),iVar5 + 0x3c,(~uVar3 + uVar22) * 0xc);
      piVar6 = local_c8 + uVar26 * 3 + 0xc;
      *piVar6 = local_50;
      piVar6[1] = local_4c;
      piVar6[2] = local_48;
      FUN_016dd1aa(local_c8 + iVar18 * 3 + 0xc,piVar7 + 0xc,uVar10 * 0xc);
      uVar21 = uVar3 + 1;
      iVar5 = iVar16 + uVar21 * 4;
      FUN_016dd52c(iVar5 + 0xb8,iVar5 + 0xbc,(~uVar3 + uVar22) * 4);
      if (uVar21 < uVar22) {
        do {
          piVar6 = *(int **)(iVar16 + uVar21 * 4 + 0xb8);
          *(short *)(piVar6 + 0x2d) = (short)uVar21;
          uVar21 = uVar21 + 1;
          *piVar6 = iVar16;
        } while (uVar22 != uVar21);
      }
      *(short *)(iVar16 + 0xb6) = *(short *)(iVar16 + 0xb6) + -1;
      if (1 < uVar24) {
        iVar16 = uVar10 + 1;
        if (iVar16 != uVar4 - uVar26) {
LAB_0135f488:
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
        }
        FUN_016dd1aa(local_c8 + uVar26 + 0x2f,piVar7 + 0x2e,iVar16 * 4);
        iVar5 = uVar26 + 0x2f;
        do {
          piVar6 = (int *)local_c8[iVar5];
          sVar2 = (short)iVar5;
          iVar5 = iVar5 + 1;
          iVar16 = iVar16 + -1;
          *(short *)(piVar6 + 0x2d) = sVar2 + -0x2e;
          *piVar6 = (int)local_c8;
        } while (iVar16 != 0);
      }
      thunk_FUN_016d3fb4(piVar7);
      if (uVar25 != 0) {
        local_cc = local_cc + iVar18;
      }
    }
    else {
      FUN_0135f51c(&local_a4,1);
      local_cc = local_cc + 1;
    }
  }
  piVar6 = (int *)*local_c8;
  if (piVar6 != (int *)0x0) {
    uVar1 = *(ushort *)((int)piVar6 + 0xb6);
    piVar7 = local_44;
    uVar10 = local_40;
    while( true ) {
      local_44 = piVar6;
      local_40 = uVar24;
      uVar4 = (uint)uVar1;
      if (4 < uVar4) break;
      piVar6 = (int *)*local_44;
      if (piVar6 == (int *)0x0) {
        if (uVar4 == 0) {
          *param_3 = 1;
        }
        break;
      }
      uVar21 = (uint)*(ushort *)(local_44 + 0x2d);
      uVar24 = local_40 + 1;
      if (uVar21 == 0) {
        uVar21 = (uint)*(ushort *)((int)piVar6 + 0xb6);
        if (uVar21 == 0) goto LAB_0135f4a4;
        local_ac = (int *)piVar6[0x2f];
        iVar16 = uVar4 + 1;
        uVar25 = 0;
        local_a8 = (uint)*(ushort *)((int)local_ac + 0xb6);
        uVar10 = iVar16 + local_a8;
        local_48 = 0;
        local_50 = (int)piVar6;
        local_4c = uVar24;
        local_3c = local_ac;
        local_38 = local_40;
        if (0xb < uVar10) {
          FUN_0135f764(&local_50,5 - uVar4);
          break;
        }
        piVar17 = local_44;
        uVar26 = uVar4;
      }
      else {
        uVar25 = uVar21 - 1;
        local_60 = (int *)piVar6[uVar21 + 0x2d];
        uVar26 = (uint)*(ushort *)((int)local_60 + 0xb6);
        local_6c = (int)piVar6;
        local_68 = uVar24;
        local_64 = uVar25;
        local_5c = local_40;
        local_58 = local_44;
        local_54 = local_40;
        local_40 = uVar10;
        if (0xb < uVar4 + uVar26 + 1) {
          local_44 = piVar7;
          FUN_0135f51c(&local_6c,5 - uVar4);
          break;
        }
        iVar16 = uVar26 + 1;
        uVar21 = (uint)*(ushort *)((int)piVar6 + 0xb6);
        uVar10 = iVar16 + uVar4;
        piVar17 = local_60;
        local_ac = local_44;
        local_a8 = uVar4;
        local_44 = piVar7;
      }
      *(short *)((int)piVar17 + 0xb6) = (short)uVar10;
      iVar18 = piVar6[uVar25 + 1];
      FUN_016dd52c(piVar6 + uVar25 + 1,piVar6 + uVar25 + 2);
      piVar17[uVar26 + 1] = iVar18;
      FUN_016dd1aa(piVar17 + iVar16 + 1,local_ac + 1,local_a8 << 2);
      local_30 = piVar6[uVar25 * 3 + 0xc];
      local_2c = piVar6[uVar25 * 3 + 0xd];
      local_28 = piVar6[uVar25 * 3 + 0xe];
      FUN_016dd52c(piVar6 + uVar25 * 3 + 0xc,piVar6 + uVar25 * 3 + 0xf,(~uVar25 + uVar21) * 0xc);
      piVar7 = piVar17 + uVar26 * 3 + 0xc;
      *piVar7 = local_30;
      piVar7[1] = local_2c;
      piVar7[2] = local_28;
      FUN_016dd1aa(piVar17 + iVar16 * 3 + 0xc,local_ac + 0xc,local_a8 * 0xc);
      uVar4 = uVar25 + 1;
      FUN_016dd52c(piVar6 + uVar25 + 0x2f,piVar6 + uVar25 + 0x30,(~uVar25 + uVar21) * 4);
      if (uVar4 < uVar21) {
        do {
          piVar7 = (int *)piVar6[uVar4 + 0x2e];
          *(short *)(piVar7 + 0x2d) = (short)uVar4;
          uVar4 = uVar4 + 1;
          *piVar7 = (int)piVar6;
        } while (uVar21 != uVar4);
      }
      *(short *)((int)piVar6 + 0xb6) = *(short *)((int)piVar6 + 0xb6) + -1;
      if (1 < uVar24) {
        if (local_a8 + 1 != uVar10 - uVar26) goto LAB_0135f488;
        FUN_016dd1aa(piVar17 + iVar16 + 0x2e,local_ac + 0x2e,(local_a8 + 1) * 4);
        do {
          piVar7 = (int *)piVar17[iVar16 + 0x2e];
          *(short *)(piVar7 + 0x2d) = (short)iVar16;
          iVar16 = iVar16 + 1;
          *piVar7 = (int)piVar17;
        } while (uVar10 + 1 != iVar16);
      }
      thunk_FUN_016d3fb4(local_ac);
      uVar1 = *(ushort *)((int)piVar6 + 0xb6);
      piVar7 = local_44;
      uVar10 = local_40;
    }
  }
LAB_0135f468:
  *param_1 = iVar12;
  param_1[1] = iVar23;
  param_1[2] = iVar15;
  param_1[3] = iVar9;
  param_1[4] = (int)local_c8;
  param_1[5] = iVar13;
  param_1[6] = local_cc;
  return;
}

