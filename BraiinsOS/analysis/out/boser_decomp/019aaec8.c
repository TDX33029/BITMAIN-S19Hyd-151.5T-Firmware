// FUN_019aaec8 @ 019aaec8 size=1844 calls_out=7 calls_in=1
// strings: internal error: entered unreachable code: empty internal node | assertion failed: match track_edge_idx {     LeftOrRight::Left(idx) => idx <= old_left_len;     LeftOrRight::Right(idx) => idx <= right_len; } | assertion failed: new_left_len <= CAPACITY

void FUN_019aaec8(undefined4 *param_1,int *param_2,undefined1 *param_3)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined *puVar17;
  ushort *puVar18;
  undefined4 uVar19;
  uint uVar20;
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
  iVar2 = iVar28 + local_f8 * 4;
  puVar23 = (ushort *)(iVar28 + 0x13a);
  uVar25 = (uint)*puVar23;
  puVar3 = (undefined4 *)(iVar2 + 0x10c);
  uVar15 = *puVar3;
  FUN_01bed864(puVar3,iVar2 + 0x110,(uVar25 + ~local_f8) * 4);
  puVar3 = (undefined4 *)(iVar28 + local_f8 * 0x18);
  uVar9 = *puVar3;
  uVar10 = puVar3[1];
  uVar11 = puVar3[2];
  uVar12 = puVar3[4];
  uVar13 = puVar3[5];
  uVar19 = puVar3[3];
  FUN_01bed864(puVar3,puVar3 + 6,(uVar25 + ~local_f8) * 0x18);
  uVar14 = uVar25 - 1;
  iVar2 = param_2[1];
  uVar4 = uVar14 & 0xffff;
  *puVar23 = (ushort)uVar14;
  if (4 < uVar4) goto LAB_019ab558;
  iVar26 = *(int *)(iVar28 + 0x108);
  if (iVar26 != 0) {
    uVar21 = (uint)*(ushort *)(iVar28 + 0x138);
    uVar30 = iVar2 + 1;
    if (uVar21 == 0) {
      if (*(short *)(iVar26 + 0x13a) == 0) {
LAB_019ab5b8:
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("internal error: entered unreachable code: empty internal node",0x7b,
                     &DAT_01d27f24);
      }
      iVar27 = *(int *)(iVar26 + 0x144);
      uVar20 = 0;
      uVar14 = (uint)*(ushort *)(iVar27 + 0x13a);
      local_90 = 0;
      local_98 = iVar26;
      local_94 = uVar30;
      local_8c = iVar28;
      local_88 = iVar2;
      local_84 = iVar27;
      local_80 = iVar2;
      if (uVar25 + uVar14 < 0xc) {
        uVar25 = uVar4;
        goto LAB_019ab05c;
      }
      FUN_019ab8d4(&local_98,1);
    }
    else {
      uVar20 = uVar21 - 1;
      local_a8 = *(int *)(iVar26 + uVar20 * 4 + 0x140);
      puVar23 = (ushort *)(local_a8 + 0x13a);
      local_b4 = iVar26;
      local_b0 = uVar30;
      local_ac = uVar20;
      local_a4 = iVar2;
      local_a0 = iVar28;
      local_9c = iVar2;
      if ((uint)*puVar23 + (uVar14 & 0xffff) + 1 < 0xc) {
        uVar25 = (uint)*puVar23;
        iVar27 = iVar28;
        iVar28 = local_a8;
LAB_019ab05c:
        if (uVar4 < local_f8) {
          uVar9 = 0x8e;
          puVar17 = &DAT_01d27fd4;
          pcVar8 = 
          "assertion failed: match track_edge_idx {\n    LeftOrRight::Left(idx) => idx <= old_left_len,\n    LeftOrRight::Right(idx) => idx <= right_len,\n}"
          ;
LAB_019ab600:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(pcVar8,uVar9,puVar17);
        }
        iVar5 = uVar25 + 1;
        uVar4 = iVar5 + (uVar14 & 0xffff);
        if (0xb < uVar4) {
          uVar9 = 0x2a;
          puVar17 = &DAT_01d27fe4;
          pcVar8 = "assertion failed: new_left_len <= CAPACITY";
          goto LAB_019ab600;
        }
        puVar18 = (ushort *)(iVar26 + 0x13a);
        uVar29 = (uint)*puVar18;
        *puVar23 = (ushort)uVar4;
        iVar6 = iVar26 + uVar20 * 4;
        uVar14 = uVar14 & 0xffff;
        puVar3 = (undefined4 *)(iVar6 + 0x10c);
        uVar24 = *puVar3;
        FUN_01bed864(puVar3,iVar6 + 0x110);
        *(undefined4 *)(iVar28 + 0x10c + uVar25 * 4) = uVar24;
        FUN_01bed4e2(iVar28 + 0x10c + iVar5 * 4,iVar27 + 0x10c,uVar14 << 2);
        piVar7 = (int *)(iVar26 + uVar20 * 0x18);
        local_60 = *piVar7;
        local_5c = piVar7[1];
        local_58 = piVar7[2];
        local_54 = piVar7[3];
        local_50 = piVar7[4];
        local_4c = piVar7[5];
        FUN_01bed864(piVar7,piVar7 + 6,(~uVar20 + uVar29) * 0x18);
        piVar7 = (int *)(iVar28 + uVar25 * 0x18);
        *piVar7 = local_60;
        piVar7[1] = local_5c;
        piVar7[2] = local_58;
        piVar7[3] = local_54;
        piVar7[4] = local_50;
        piVar7[5] = local_4c;
        FUN_01bed4e2(iVar28 + iVar5 * 0x18,iVar27,uVar14 * 0x18);
        uVar22 = uVar20 + 1;
        iVar6 = iVar26 + uVar22 * 4;
        FUN_01bed864(iVar6 + 0x140,iVar6 + 0x144,(~uVar20 + uVar29) * 4);
        if (uVar22 < uVar29) {
          do {
            iVar6 = *(int *)(iVar26 + uVar22 * 4 + 0x140);
            *(short *)(iVar6 + 0x138) = (short)uVar22;
            uVar22 = uVar22 + 1;
            *(int *)(iVar6 + 0x108) = iVar26;
          } while (uVar29 != uVar22);
        }
        *puVar18 = *puVar18 - 1;
        if (1 < uVar30) {
          iVar26 = uVar14 + 1;
          if (iVar26 != uVar4 - uVar25) {
LAB_019ab59c:
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d27f44);
          }
          FUN_01bed4e2(iVar28 + 0x140 + iVar5 * 4,iVar27 + 0x140,iVar26 * 4);
          iVar6 = uVar25 + 0x51;
          do {
            iVar16 = *(int *)(iVar28 + iVar6 * 4);
            sVar1 = (short)iVar6;
            iVar6 = iVar6 + 1;
            iVar26 = iVar26 + -1;
            *(short *)(iVar16 + 0x138) = sVar1 + -0x50;
            *(int *)(iVar16 + 0x108) = iVar28;
          } while (iVar26 != 0);
        }
        thunk_FUN_01be4678(iVar27);
        if (uVar21 != 0) {
          local_f8 = local_f8 + iVar5;
        }
      }
      else {
        FUN_019ab650(&local_b4,1);
        local_f8 = local_f8 + 1;
      }
    }
  }
  iVar26 = *(int *)(iVar28 + 0x108);
  if ((iVar26 != 0) && (uVar4 = (uint)*(ushort *)(iVar26 + 0x13a), uVar4 < 5)) {
    uVar14 = iVar2 + 1;
    do {
      iVar27 = *(int *)(iVar26 + 0x108);
      if (iVar27 == 0) {
        if (uVar4 == 0) {
          *param_3 = 1;
        }
        break;
      }
      uVar25 = uVar14 + 1;
      if (*(ushort *)(iVar26 + 0x138) == 0) {
        uVar21 = (uint)*(ushort *)(iVar27 + 0x13a);
        if (uVar21 == 0) goto LAB_019ab5b8;
        iVar5 = uVar4 + 1;
        local_b8 = *(int *)(iVar27 + 0x144);
        uVar30 = 0;
        local_58 = 0;
        local_bc = (uint)*(ushort *)(local_b8 + 0x13a);
        uVar20 = iVar5 + local_bc;
        local_60 = iVar27;
        local_5c = uVar25;
        local_54 = iVar26;
        local_50 = uVar14;
        local_4c = local_b8;
        local_48 = uVar14;
        if (0xb < uVar20) {
          FUN_019ab8d4(&local_60,5 - uVar4);
          break;
        }
        iVar6 = iVar26;
        local_c0 = uVar4;
      }
      else {
        uVar30 = *(ushort *)(iVar26 + 0x138) - 1;
        local_70 = *(int *)(iVar27 + uVar30 * 4 + 0x140);
        local_c0 = (uint)*(ushort *)(local_70 + 0x13a);
        local_7c = iVar27;
        local_78 = uVar25;
        local_74 = uVar30;
        local_6c = uVar14;
        local_68 = iVar26;
        local_64 = uVar14;
        if (0xb < uVar4 + local_c0 + 1) {
          FUN_019ab650(&local_7c,5 - uVar4);
          break;
        }
        iVar5 = local_c0 + 1;
        uVar21 = (uint)*(ushort *)(iVar27 + 0x13a);
        uVar20 = iVar5 + uVar4;
        iVar6 = local_70;
        local_bc = uVar4;
        local_b8 = iVar26;
      }
      iVar26 = iVar27 + uVar30 * 4;
      *(short *)(iVar6 + 0x13a) = (short)uVar20;
      puVar3 = (undefined4 *)(iVar26 + 0x10c);
      uVar24 = *puVar3;
      FUN_01bed864(puVar3,iVar26 + 0x110);
      *(undefined4 *)(iVar6 + 0x10c + local_c0 * 4) = uVar24;
      FUN_01bed4e2(iVar6 + 0x10c + iVar5 * 4,local_b8 + 0x10c,local_bc << 2);
      puVar3 = (undefined4 *)(iVar27 + uVar30 * 0x18);
      local_40 = *puVar3;
      uStack_3c = puVar3[1];
      uStack_38 = puVar3[2];
      uStack_34 = puVar3[3];
      uStack_30 = puVar3[4];
      uStack_2c = puVar3[5];
      FUN_01bed864(puVar3,puVar3 + 6,(~uVar30 + uVar21) * 0x18);
      puVar3 = (undefined4 *)(iVar6 + local_c0 * 0x18);
      *puVar3 = local_40;
      puVar3[1] = uStack_3c;
      puVar3[2] = uStack_38;
      puVar3[3] = uStack_34;
      puVar3[4] = uStack_30;
      puVar3[5] = uStack_2c;
      FUN_01bed4e2(iVar6 + iVar5 * 0x18,local_b8,local_bc * 0x18);
      uVar4 = uVar30 + 1;
      iVar26 = iVar27 + uVar4 * 4;
      FUN_01bed864(iVar26 + 0x140,iVar26 + 0x144,(~uVar30 + uVar21) * 4);
      if (uVar4 < uVar21) {
        do {
          iVar26 = *(int *)(iVar27 + uVar4 * 4 + 0x140);
          *(short *)(iVar26 + 0x138) = (short)uVar4;
          uVar4 = uVar4 + 1;
          *(int *)(iVar26 + 0x108) = iVar27;
        } while (uVar21 != uVar4);
      }
      puVar23 = (ushort *)(iVar27 + 0x13a);
      *puVar23 = *puVar23 - 1;
      if (1 < uVar25) {
        if (local_bc + 1 != uVar20 - local_c0) goto LAB_019ab59c;
        FUN_01bed4e2(iVar6 + 0x140 + iVar5 * 4,local_b8 + 0x140,(local_bc + 1) * 4);
        do {
          iVar26 = *(int *)(iVar6 + iVar5 * 4 + 0x140);
          *(short *)(iVar26 + 0x138) = (short)iVar5;
          iVar5 = iVar5 + 1;
          *(int *)(iVar26 + 0x108) = iVar6;
        } while (uVar20 + 1 != iVar5);
      }
      thunk_FUN_01be4678(local_b8);
      uVar4 = (uint)*puVar23;
      uVar14 = uVar25;
      iVar26 = iVar27;
    } while (uVar4 < 5);
  }
LAB_019ab558:
  *param_1 = uVar15;
  param_1[4] = uVar11;
  param_1[2] = uVar9;
  param_1[3] = uVar10;
  param_1[6] = uVar12;
  param_1[5] = uVar19;
  param_1[8] = iVar28;
  param_1[9] = iVar2;
  param_1[10] = local_f8;
  param_1[7] = uVar13;
  return;
}

