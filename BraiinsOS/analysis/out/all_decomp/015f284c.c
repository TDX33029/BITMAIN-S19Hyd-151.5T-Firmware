// FUN_015f284c @ 015f284c size=1852 calls_out=7 calls_in=1
// strings: 

void FUN_015f284c(undefined4 *param_1,int *param_2,undefined1 *param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined *puVar18;
  ushort *puVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  ushort *puVar23;
  undefined4 uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint local_f8;
  uint local_c0;
  uint local_bc;
  int local_b8;
  int local_b4;
  uint local_b0;
  uint local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar28 = *param_2;
  local_f8 = param_2[2];
  iVar3 = iVar28 + local_f8 * 4;
  puVar23 = (ushort *)(iVar28 + 0x13a);
  uVar25 = (uint)*puVar23;
  puVar4 = (undefined4 *)(iVar3 + 0x10c);
  uVar16 = *puVar4;
  FUN_016dd52c(puVar4,iVar3 + 0x110,(uVar25 + ~local_f8) * 4);
  puVar4 = (undefined4 *)(iVar28 + local_f8 * 0x18);
  uVar10 = *puVar4;
  uVar11 = puVar4[1];
  uVar12 = puVar4[2];
  uVar13 = puVar4[4];
  uVar14 = puVar4[5];
  uVar20 = puVar4[3];
  FUN_016dd52c(puVar4,puVar4 + 6,(uVar25 + ~local_f8) * 0x18);
  uVar15 = uVar25 - 1;
  iVar3 = param_2[1];
  uVar5 = uVar15 & 0xffff;
  *puVar23 = (ushort)uVar15;
  if (4 < uVar5) goto LAB_015f2efc;
  iVar26 = *(int *)(iVar28 + 0x108);
  if (iVar26 != 0) {
    uVar22 = (uint)*(ushort *)(iVar28 + 0x138);
    uVar30 = iVar3 + 1;
    if (uVar22 == 0) {
      if (*(short *)(iVar26 + 0x13a) == 0) {
LAB_015f2f5c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00410ada,0x7b,&DAT_018ab328);
      }
      local_84 = *(int *)(iVar26 + 0x144);
      uVar15 = (uint)*(ushort *)(local_84 + 0x13a);
      local_90 = 0;
      iVar6 = iVar28;
      local_8c = iVar28;
      local_88 = iVar3;
      local_80 = iVar3;
      uVar21 = uVar5;
      local_98 = iVar26;
      local_94 = uVar30;
      iVar27 = local_84;
      uVar2 = 0;
      if (uVar25 + uVar15 < 0xc) goto joined_r0x015f2bd0;
      FUN_015f3260(&local_98,1);
    }
    else {
      local_ac = uVar22 - 1;
      local_a8 = *(int *)(iVar26 + local_ac * 4 + 0x140);
      puVar23 = (ushort *)(local_a8 + 0x13a);
      uVar21 = (uint)*puVar23;
      iVar6 = local_a8;
      iVar27 = iVar28;
      uVar2 = local_ac;
      local_b4 = iVar26;
      local_b0 = uVar30;
      local_a4 = iVar3;
      local_a0 = iVar28;
      local_9c = iVar3;
      if (uVar21 + (uVar15 & 0xffff) + 1 < 0xc) {
joined_r0x015f2bd0:
        iVar28 = iVar6;
        if (uVar5 < local_f8) {
          uVar10 = 0x8e;
          puVar18 = &DAT_018ab3d8;
          puVar9 = &DAT_00410bc5;
LAB_015f2f8c:
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(puVar9,uVar10,puVar18);
        }
        iVar6 = uVar21 + 1;
        uVar5 = iVar6 + (uVar15 & 0xffff);
        if (0xb < uVar5) {
          uVar10 = 0x2a;
          puVar18 = &DAT_018ab3e8;
          puVar9 = &DAT_00410c53;
          goto LAB_015f2f8c;
        }
        puVar19 = (ushort *)(iVar26 + 0x13a);
        uVar29 = (uint)*puVar19;
        *puVar23 = (ushort)uVar5;
        iVar7 = iVar26 + uVar2 * 4;
        uVar15 = uVar15 & 0xffff;
        puVar4 = (undefined4 *)(iVar7 + 0x10c);
        uVar24 = *puVar4;
        FUN_016dd52c(puVar4,iVar7 + 0x110);
        *(undefined4 *)(iVar28 + 0x10c + uVar21 * 4) = uVar24;
        FUN_016dd1aa(iVar28 + 0x10c + iVar6 * 4,iVar27 + 0x10c,uVar15 << 2);
        piVar8 = (int *)(iVar26 + uVar2 * 0x18);
        local_60 = *piVar8;
        local_5c = piVar8[1];
        local_58 = piVar8[2];
        local_54 = piVar8[3];
        local_50 = piVar8[4];
        local_4c = piVar8[5];
        FUN_016dd52c(piVar8,piVar8 + 6,(~uVar2 + uVar29) * 0x18);
        piVar8 = (int *)(iVar28 + uVar21 * 0x18);
        *piVar8 = local_60;
        piVar8[1] = local_5c;
        piVar8[2] = local_58;
        piVar8[3] = local_54;
        piVar8[4] = local_50;
        piVar8[5] = local_4c;
        FUN_016dd1aa(iVar28 + iVar6 * 0x18,iVar27,uVar15 * 0x18);
        uVar25 = uVar2 + 1;
        iVar7 = iVar26 + uVar25 * 4;
        FUN_016dd52c(iVar7 + 0x140,iVar7 + 0x144,(~uVar2 + uVar29) * 4);
        if (uVar25 < uVar29) {
          do {
            iVar7 = *(int *)(iVar26 + uVar25 * 4 + 0x140);
            *(short *)(iVar7 + 0x138) = (short)uVar25;
            uVar25 = uVar25 + 1;
            *(int *)(iVar7 + 0x108) = iVar26;
          } while (uVar29 != uVar25);
        }
        *puVar19 = *puVar19 - 1;
        if (1 < uVar30) {
          iVar26 = uVar15 + 1;
          if (iVar26 != uVar5 - uVar21) {
LAB_015f2f40:
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_004194bf,0x28,&DAT_018ab348);
          }
          FUN_016dd1aa(iVar28 + 0x140 + iVar6 * 4,iVar27 + 0x140,iVar26 * 4);
          iVar7 = uVar21 + 0x51;
          do {
            iVar17 = *(int *)(iVar28 + iVar7 * 4);
            sVar1 = (short)iVar7;
            iVar7 = iVar7 + 1;
            iVar26 = iVar26 + -1;
            *(short *)(iVar17 + 0x138) = sVar1 + -0x50;
            *(int *)(iVar17 + 0x108) = iVar28;
          } while (iVar26 != 0);
        }
        thunk_FUN_016d3fb4(iVar27);
        if (uVar22 != 0) {
          local_f8 = local_f8 + iVar6;
        }
      }
      else {
        FUN_015f2fdc(&local_b4,1);
        local_f8 = local_f8 + 1;
      }
    }
  }
  iVar26 = *(int *)(iVar28 + 0x108);
  if ((iVar26 != 0) && (uVar15 = (uint)*(ushort *)(iVar26 + 0x13a), uVar15 < 5)) {
    uVar5 = iVar3 + 1;
    do {
      iVar27 = *(int *)(iVar26 + 0x108);
      if (iVar27 == 0) {
        if (uVar15 == 0) {
          *param_3 = 1;
        }
        break;
      }
      uVar25 = uVar5 + 1;
      if (*(ushort *)(iVar26 + 0x138) == 0) {
        uVar22 = (uint)*(ushort *)(iVar27 + 0x13a);
        if (uVar22 == 0) goto LAB_015f2f5c;
        iVar6 = uVar15 + 1;
        local_b8 = *(int *)(iVar27 + 0x144);
        uVar30 = 0;
        local_58 = 0;
        local_bc = (uint)*(ushort *)(local_b8 + 0x13a);
        uVar21 = iVar6 + local_bc;
        local_60 = iVar27;
        local_5c = uVar25;
        local_54 = iVar26;
        local_50 = uVar5;
        local_4c = local_b8;
        local_48 = uVar5;
        if (0xb < uVar21) {
          FUN_015f3260(&local_60,5 - uVar15);
          break;
        }
        iVar7 = iVar26;
        local_c0 = uVar15;
      }
      else {
        uVar30 = *(ushort *)(iVar26 + 0x138) - 1;
        local_70 = *(int *)(iVar27 + uVar30 * 4 + 0x140);
        local_c0 = (uint)*(ushort *)(local_70 + 0x13a);
        local_7c = iVar27;
        local_78 = uVar25;
        local_74 = uVar30;
        local_6c = uVar5;
        local_68 = iVar26;
        local_64 = uVar5;
        if (0xb < uVar15 + local_c0 + 1) {
          FUN_015f2fdc(&local_7c,5 - uVar15);
          break;
        }
        iVar6 = local_c0 + 1;
        uVar22 = (uint)*(ushort *)(iVar27 + 0x13a);
        uVar21 = iVar6 + uVar15;
        iVar7 = local_70;
        local_bc = uVar15;
        local_b8 = iVar26;
      }
      iVar26 = iVar27 + uVar30 * 4;
      *(short *)(iVar7 + 0x13a) = (short)uVar21;
      puVar4 = (undefined4 *)(iVar26 + 0x10c);
      uVar24 = *puVar4;
      FUN_016dd52c(puVar4,iVar26 + 0x110);
      *(undefined4 *)(iVar7 + 0x10c + local_c0 * 4) = uVar24;
      FUN_016dd1aa(iVar7 + 0x10c + iVar6 * 4,local_b8 + 0x10c,local_bc << 2);
      puVar4 = (undefined4 *)(iVar27 + uVar30 * 0x18);
      local_40 = *puVar4;
      uStack_3c = puVar4[1];
      uStack_38 = puVar4[2];
      uStack_34 = puVar4[3];
      uStack_30 = puVar4[4];
      uStack_2c = puVar4[5];
      FUN_016dd52c(puVar4,puVar4 + 6,(~uVar30 + uVar22) * 0x18);
      puVar4 = (undefined4 *)(iVar7 + local_c0 * 0x18);
      *puVar4 = local_40;
      puVar4[1] = uStack_3c;
      puVar4[2] = uStack_38;
      puVar4[3] = uStack_34;
      puVar4[4] = uStack_30;
      puVar4[5] = uStack_2c;
      FUN_016dd1aa(iVar7 + iVar6 * 0x18,local_b8,local_bc * 0x18);
      uVar15 = uVar30 + 1;
      iVar26 = iVar27 + uVar15 * 4;
      FUN_016dd52c(iVar26 + 0x140,iVar26 + 0x144,(~uVar30 + uVar22) * 4);
      if (uVar15 < uVar22) {
        do {
          iVar26 = *(int *)(iVar27 + uVar15 * 4 + 0x140);
          *(short *)(iVar26 + 0x138) = (short)uVar15;
          uVar15 = uVar15 + 1;
          *(int *)(iVar26 + 0x108) = iVar27;
        } while (uVar22 != uVar15);
      }
      puVar23 = (ushort *)(iVar27 + 0x13a);
      *puVar23 = *puVar23 - 1;
      if (1 < uVar25) {
        if (local_bc + 1 != uVar21 - local_c0) goto LAB_015f2f40;
        FUN_016dd1aa(iVar7 + 0x140 + iVar6 * 4,local_b8 + 0x140,(local_bc + 1) * 4);
        do {
          iVar26 = *(int *)(iVar7 + iVar6 * 4 + 0x140);
          *(short *)(iVar26 + 0x138) = (short)iVar6;
          iVar6 = iVar6 + 1;
          *(int *)(iVar26 + 0x108) = iVar7;
        } while (uVar21 + 1 != iVar6);
      }
      thunk_FUN_016d3fb4(local_b8);
      uVar15 = (uint)*puVar23;
      uVar5 = uVar25;
      iVar26 = iVar27;
    } while (uVar15 < 5);
  }
LAB_015f2efc:
  *param_1 = uVar16;
  param_1[4] = uVar12;
  param_1[2] = uVar10;
  param_1[3] = uVar11;
  param_1[6] = uVar13;
  param_1[5] = uVar20;
  param_1[8] = iVar28;
  param_1[9] = iVar3;
  param_1[10] = local_f8;
  param_1[7] = uVar14;
  return;
}

