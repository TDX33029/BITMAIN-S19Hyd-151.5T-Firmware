// FUN_00d00228 @ 00d00228 size=3212 calls_out=12 calls_in=3
// strings: BUG: Checked

void FUN_00d00228(undefined4 *param_1,int param_2,int *param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  bool bVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  undefined *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  undefined *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  undefined4 uVar23;
  bool bVar24;
  uint in_fpscr;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_ec;
  uint local_e4;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_c8 [3];
  int iStack_bc;
  uint local_b8;
  undefined4 local_b4;
  int iStack_b0;
  int iStack_ac;
  int local_a8;
  uint local_a4 [3];
  int iStack_98;
  uint local_94;
  undefined4 local_90;
  int iStack_8c;
  int iStack_88;
  int local_84;
  uint *local_80;
  uint local_7c;
  int local_78;
  uint *local_70;
  uint local_6c;
  int local_68;
  undefined8 uStack_64;
  uint local_58;
  uint local_54;
  uint uStack_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  
  iVar18 = *param_3;
  iVar19 = param_3[1];
  iVar16 = param_3[2];
  local_b4 = 0;
  local_c8[1] = 0;
  local_a8 = 0;
  if (iVar18 != 0) {
    local_a8 = iVar16;
  }
  dVar25 = -0.0;
  local_c8[0] = (uint)(iVar18 != 0);
  local_c8[2] = iVar18;
  iStack_bc = iVar19;
  local_b8 = local_c8[0];
  iStack_b0 = iVar18;
  iStack_ac = iVar19;
  while( true ) {
    uVar27 = FUN_00c38ef8(local_c8);
    uVar28 = CONCAT44(uStack_64._4_4_,(undefined4)uStack_64);
    puVar14 = (undefined4 *)((ulonglong)uVar27 >> 0x20);
    if ((int)uVar27 == 0 || puVar14 == (undefined4 *)0x0) break;
    dVar26 = (double)VectorUnsignedToFloat(*puVar14,(byte)(in_fpscr >> 0x16) & 3);
    dVar25 = dVar25 + dVar26;
  }
  dVar26 = (double)VectorUnsignedToFloat(iVar16,(byte)(in_fpscr >> 0x16) & 3);
  local_84 = 0;
  if (iVar18 != 0) {
    local_90 = 0;
    local_a4[1] = 0;
    local_84 = iVar16;
    local_a4[2] = iVar18;
    iStack_98 = iVar19;
    iStack_8c = iVar18;
    iStack_88 = iVar19;
  }
  local_a4[0] = (uint)(iVar18 != 0);
  local_78 = 0;
  local_80 = (uint *)0x0;
  local_94 = local_a4[0];
LAB_00d0030c:
  uStack_64 = uVar28;
  uVar28 = FUN_00c38ef8(local_a4);
  puVar6 = local_80;
  puVar4 = (uint *)uVar28;
  if (puVar4 == (uint *)0x0) {
    *param_1 = local_80;
    param_1[1] = local_7c;
    param_1[2] = local_78;
    return;
  }
  uVar20 = *puVar4;
  uVar23 = *(undefined4 *)((ulonglong)uVar28 >> 0x20);
  local_70 = local_80;
  local_6c = local_7c;
  local_68 = local_78;
  if (local_80 != (uint *)0x0) {
    uVar5 = local_7c;
    puVar10 = local_80;
    do {
      uVar12 = (uint)*(ushort *)((int)puVar10 + 0xb6);
      iVar16 = uVar12 << 2;
      iVar18 = 1;
      do {
        iVar19 = iVar18;
        if (iVar16 == 0) goto LAB_00d003a4;
        iVar16 = iVar16 + -4;
        bVar24 = uVar20 < puVar10[iVar19];
        bVar3 = !bVar24 && uVar20 != puVar10[iVar19];
        iVar18 = iVar19 + 1;
      } while ((char)(bVar3 - bVar24) == '\x01');
      uVar12 = iVar19 - 1;
      if (bVar3 == bVar24) goto LAB_00d00574;
LAB_00d003a4:
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      puVar10 = (uint *)puVar10[uVar12 + 0x2e];
    } while( true );
  }
  uStack_64 = uVar28;
  FUN_009c4470(&local_58,(uint)(0.0 < dVar25 / dVar26) * (int)(longlong)(dVar25 / dVar26),
               *(undefined4 *)(param_2 + 0xb8));
  if (puVar6 != (uint *)0x0) {
    uVar5 = local_6c;
    puVar10 = puVar6;
    do {
      uVar12 = (uint)*(ushort *)((int)puVar10 + 0xb6);
      iVar16 = uVar12 << 2;
      iVar18 = 1;
      do {
        iVar19 = iVar18;
        if (iVar16 == 0) goto LAB_00d00440;
        iVar16 = iVar16 + -4;
        bVar24 = uVar20 < puVar10[iVar19];
        bVar3 = !bVar24 && uVar20 != puVar10[iVar19];
        iVar18 = iVar19 + 1;
      } while ((char)(bVar3 - bVar24) == '\x01');
      if (bVar3 == bVar24) {
        iVar19 = iVar19 + -1;
        uVar20 = puVar10[iVar19 * 3 + 0xd];
        uVar5 = puVar10[iVar19 * 3 + 0xc];
        puVar10[iVar19 * 3 + 0xc] = local_58;
        puVar10[iVar19 * 3 + 0xd] = local_54;
        puVar10[iVar19 * 3 + 0xe] = uStack_50;
        if ((uVar5 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(uVar20);
        }
        puVar10 = puVar6;
        uVar28 = uStack_64;
        if (puVar6 == (uint *)0x0) goto LAB_00d00ec8;
        goto LAB_00d004fc;
      }
      uVar12 = iVar19 - 1;
LAB_00d00440:
      if (uVar5 == 0) goto LAB_00d005ac;
      uVar5 = uVar5 - 1;
      puVar10 = (uint *)puVar10[uVar12 + 0x2e];
    } while( true );
  }
  puVar6 = (uint *)thunk_FUN_016d4a50(0xb8);
  if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xb8);
  }
  *(undefined2 *)((int)puVar6 + 0xb6) = 1;
  puVar6[0xc] = local_58;
  puVar6[0xd] = local_54;
  puVar6[0xe] = uStack_50;
  *puVar6 = 0;
  puVar6[1] = uVar20;
  local_6c = 0;
  local_70 = puVar6;
  goto LAB_00d004e8;
LAB_00d005ac:
  uVar1 = *(ushort *)((int)puVar10 + 0xb6);
  uVar5 = (uint)uVar1;
  if (uVar5 < 0xb) {
    if (uVar5 < uVar12 + 1) {
      puVar10[uVar12 + 1] = uVar20;
      local_40 = local_58;
      local_3c = local_54;
      local_38 = uStack_50;
    }
    else {
      FUN_016dd52c(puVar10 + uVar12 + 2,puVar10 + uVar12 + 1,(uVar5 - uVar12) * 4);
      puVar10[uVar12 + 1] = uVar20;
      local_40 = local_58;
      local_3c = local_54;
      local_38 = uStack_50;
      FUN_016dd52c(puVar10 + (uVar12 + 1) * 3 + 0xc,puVar10 + uVar12 * 3 + 0xc,
                   (uVar5 - uVar12) * 0xc);
    }
    puVar15 = &local_44;
    puVar7 = puVar10 + uVar12 * 3 + 0xc;
    *puVar7 = local_40;
    puVar10[uVar12 * 3 + 0xd] = local_3c;
    puVar10[uVar12 * 3 + 0xe] = local_38;
    *(ushort *)((int)puVar10 + 0xb6) = uVar1 + 1;
    uVar20 = 0x80000000;
    local_e4 = 0;
    uVar22 = local_3c;
  }
  else {
    uVar5 = 4;
    if (uVar12 < 5) {
      bVar3 = false;
    }
    else if (uVar12 == 5) {
      bVar3 = false;
      uVar5 = 5;
    }
    else {
      if (uVar12 == 6) {
        uVar5 = 5;
        uVar12 = 0;
      }
      else {
        uVar12 = uVar12 - 7;
        uVar5 = 6;
      }
      bVar3 = true;
    }
    puVar7 = (uint *)thunk_FUN_016d4a50(0xb8);
    if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xb8);
    }
    *(undefined2 *)((int)puVar7 + 0xb6) = 0;
    *puVar7 = 0;
    puVar21 = puVar10 + uVar5 * 3 + 0xc;
    uVar17 = *puVar21;
    uVar22 = puVar10[uVar5 + 1];
    uVar11 = (uint)*(ushort *)((int)puVar10 + 0xb6) + ~uVar5;
    *(short *)((int)puVar7 + 0xb6) = (short)uVar11;
    local_dc = puVar21[1];
    if (0xb < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar11,0xb,&DAT_018ac47c);
    }
    local_e4 = puVar21[2];
    FUN_016dd1aa(puVar7 + 1,puVar10 + uVar5 + 2,uVar11 * 4);
    FUN_016dd1aa(puVar7 + 0xc,puVar10 + (uVar5 + 1) * 3 + 0xc,uVar11 * 0xc);
    *(short *)((int)puVar10 + 0xb6) = (short)uVar5;
    puVar21 = puVar7;
    if (!bVar3) {
      puVar21 = puVar10;
    }
    uVar1 = *(ushort *)((int)puVar21 + 0xb6);
    puVar15 = puVar21 + uVar12 + 1;
    if (uVar12 < uVar1) {
      iVar16 = uVar1 - uVar12;
      FUN_016dd52c(puVar15 + 1,puVar15,iVar16 * 4);
      local_40 = local_58;
      local_3c = local_54;
      local_38 = uStack_50;
      FUN_016dd52c(puVar21 + uVar12 * 3 + 0xf,puVar21 + uVar12 * 3 + 0xc,iVar16 * 0xc);
    }
    else {
      local_40 = local_58;
      local_3c = local_54;
      local_38 = uStack_50;
    }
    *puVar15 = uVar20;
    puVar21[uVar12 * 3 + 0xc] = local_40;
    puVar21[uVar12 * 3 + 0xd] = local_3c;
    puVar15 = &local_48;
    puVar21[uVar12 * 3 + 0xe] = local_38;
    *(ushort *)((int)puVar21 + 0xb6) = uVar1 + 1;
    uVar20 = 0;
    local_44 = uVar17;
  }
  *puVar15 = uVar20;
  if (local_44 == 0x80000000) {
LAB_00d004e8:
    local_68 = local_68 + 1;
    puVar10 = puVar6;
    uVar28 = uStack_64;
    if (puVar6 == (uint *)0x0) {
LAB_00d00ec8:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("BUG: Checked",0xc,&DAT_01877430);
    }
LAB_00d004fc:
    uVar20 = local_6c;
    while( true ) {
      uVar5 = (uint)*(ushort *)((int)puVar10 + 0xb6);
      iVar16 = uVar5 << 2;
      iVar18 = 1;
      do {
        iVar19 = iVar18;
        if (iVar16 == 0) goto LAB_00d00558;
        iVar16 = iVar16 + -4;
        bVar24 = *puVar4 < puVar10[iVar19];
        bVar3 = !bVar24 && *puVar4 != puVar10[iVar19];
        iVar18 = iVar19 + 1;
      } while ((char)(bVar3 - bVar24) == '\x01');
      if (bVar3 == bVar24) break;
      uVar5 = iVar19 - 1;
LAB_00d00558:
      uStack_64 = uVar28;
      if (uVar20 == 0) goto LAB_00d00ec8;
      uVar20 = uVar20 - 1;
      puVar10 = (uint *)puVar10[uVar5 + 0x2e];
    }
    uVar12 = iVar19 - 1;
LAB_00d00574:
    uVar20 = puVar4[1];
    if (puVar10[uVar12 * 3 + 0xe] <= uVar20) {
      uStack_64 = uVar28;
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar20,puVar10[uVar12 * 3 + 0xe],&DAT_01877440);
    }
    *(undefined4 *)(puVar10[uVar12 * 3 + 0xd] + uVar20 * 4) = uVar23;
    local_80 = local_70;
    local_7c = local_6c;
    local_78 = local_68;
    goto LAB_00d0030c;
  }
  puVar21 = (uint *)*puVar10;
  local_d8 = local_44;
  if (puVar21 == (uint *)0x0) {
    local_ec = local_e4;
    uVar20 = local_48;
    local_f8 = uVar22;
  }
  else {
    local_ec = 0;
    local_d4 = 0;
    uVar20 = local_48;
    do {
      if (uVar20 != local_d4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00413145,0x35,&DAT_018ac49c);
      }
      uVar5 = (uint)*(ushort *)((int)puVar21 + 0xb6);
      uVar20 = (uint)(ushort)puVar10[0x2d];
      if (uVar5 < 0xb) {
        if (uVar20 < uVar5) {
          FUN_016dd52c(puVar21 + uVar20 + 2,puVar21 + uVar20 + 1);
          puVar8 = puVar21 + uVar20 * 3 + 0xc;
          FUN_016dd52c(puVar21 + (uVar20 + 1) * 3 + 0xc,puVar8,(uVar5 - uVar20) * 0xc);
          puVar21[uVar20 * 3 + 0xc] = local_d8;
          puVar8[1] = local_dc;
          puVar8[2] = local_e4;
          FUN_016dd52c(puVar21 + uVar20 + 0x30,puVar21 + uVar20 + 0x2f,(uVar5 - uVar20) * 4);
        }
        else {
          puVar21[uVar20 * 3 + 0xc] = local_d8;
          puVar21[uVar20 * 3 + 0xe] = local_e4;
          puVar21[uVar20 * 3 + 0xd] = local_dc;
        }
        uVar11 = 0x80000000;
        puVar21[uVar20 + 1] = uVar22;
        *(short *)((int)puVar21 + 0xb6) = (short)(uVar5 + 1);
        puVar21[uVar20 + 0x2f] = (uint)puVar7;
        puVar8 = &local_40;
        puVar7 = puVar15;
        if (uVar20 + 1 < uVar5 + 2) {
          do {
            uVar12 = uVar20 + 1;
            puVar14 = (undefined4 *)puVar21[uVar20 + 0x2f];
            *(short *)(puVar14 + 0x2d) = (short)uVar12;
            *puVar14 = puVar21;
            uVar20 = uVar12;
          } while (uVar5 + 1 != uVar12);
        }
      }
      else {
        bVar3 = false;
        if (uVar20 < 5) {
          local_fc = 4;
        }
        else if (uVar20 == 5) {
          local_fc = 5;
        }
        else if (uVar20 == 6) {
          bVar3 = true;
          uVar20 = 0;
          local_fc = 5;
        }
        else {
          uVar20 = uVar20 - 7;
          bVar3 = true;
          local_fc = 6;
        }
        puVar10 = (uint *)thunk_FUN_016d4a50(0xe8);
        if (puVar10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xe8);
        }
        *(undefined2 *)((int)puVar10 + 0xb6) = 0;
        *puVar10 = 0;
        puVar15 = puVar21 + local_fc * 3 + 0xc;
        uVar12 = *puVar15;
        local_f8 = puVar21[local_fc + 1];
        uVar17 = (uint)*(ushort *)((int)puVar21 + 0xb6) + ~local_fc;
        local_f4 = puVar15[1];
        local_ec = puVar15[2];
        *(short *)((int)puVar10 + 0xb6) = (short)uVar17;
        if (0xb < uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar17,0xb,&DAT_018ac47c);
        }
        FUN_016dd1aa(puVar10 + 1,puVar21 + local_fc + 2,uVar17 * 4);
        FUN_016dd1aa(puVar10 + 0xc,puVar21 + (local_fc + 1) * 3 + 0xc,uVar17 * 0xc);
        *(short *)((int)puVar21 + 0xb6) = (short)local_fc;
        uVar17 = (uint)*(ushort *)((int)puVar10 + 0xb6);
        iVar16 = uVar17 + 1;
        if (0xb < uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,iVar16,0xc,&DAT_018ac48c);
        }
        if (uVar5 - local_fc != iVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
        }
        uVar11 = local_d4 + 1;
        FUN_016dd1aa(puVar10 + 0x2e,puVar21 + local_fc + 0x2f,iVar16 * 4);
        uVar5 = 0;
        do {
          puVar14 = (undefined4 *)(puVar10 + 0x2e)[uVar5];
          *(short *)(puVar14 + 0x2d) = (short)uVar5;
          *puVar14 = puVar10;
          if (uVar17 <= uVar5) break;
          uVar5 = uVar5 + 1;
        } while (uVar5 <= uVar17);
        puVar15 = puVar10;
        if (!bVar3) {
          puVar15 = puVar21;
        }
        uVar5 = (uint)*(ushort *)((int)puVar15 + 0xb6);
        if (uVar20 < uVar5) {
          FUN_016dd52c(puVar15 + uVar20 + 2,puVar15 + uVar20 + 1);
          puVar8 = puVar15 + uVar20 * 3 + 0xc;
          FUN_016dd52c(puVar15 + (uVar20 + 1) * 3 + 0xc,puVar8,(uVar5 - uVar20) * 0xc);
          puVar15[uVar20 * 3 + 0xc] = local_d8;
          puVar8[1] = local_dc;
          puVar8[2] = local_e4;
          FUN_016dd52c(puVar15 + uVar20 + 0x30,puVar15 + uVar20 + 0x2f,(uVar5 - uVar20) * 4);
        }
        else {
          puVar15[uVar20 * 3 + 0xc] = local_d8;
          puVar15[uVar20 * 3 + 0xd] = local_dc;
          puVar15[uVar20 * 3 + 0xe] = local_e4;
        }
        puVar15[uVar20 + 1] = uVar22;
        puVar15[uVar20 + 0x2f] = (uint)puVar7;
        *(short *)((int)puVar15 + 0xb6) = (short)(uVar5 + 1);
        if (uVar20 + 1 < uVar5 + 2) {
          do {
            uVar22 = uVar20 + 1;
            puVar14 = (undefined4 *)puVar15[uVar20 + 0x2f];
            *(short *)(puVar14 + 0x2d) = (short)uVar22;
            *puVar14 = puVar15;
            uVar20 = uVar22;
          } while (uVar5 + 1 != uVar22);
        }
        puVar8 = &local_44;
        puVar7 = puVar10;
        puVar10 = puVar21;
        local_d4 = uVar11;
        local_40 = uVar12;
      }
      *puVar8 = uVar11;
      if (local_40 == 0x80000000) goto LAB_00d004e8;
      puVar21 = (uint *)*puVar10;
      local_d8 = local_40;
      local_dc = local_f4;
      uVar22 = local_f8;
      puVar15 = puVar7;
      local_e4 = local_ec;
      uVar20 = local_44;
    } while (puVar21 != (uint *)0x0);
  }
  uVar5 = local_6c;
  if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac44c);
  }
  puVar10 = (uint *)thunk_FUN_016d4a50(0xe8);
  if (puVar10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xe8);
  }
  puVar10[0x2e] = (uint)puVar6;
  *(undefined2 *)((int)puVar10 + 0xb6) = 0;
  *puVar10 = 0;
  if (0xfffffffe < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018af438);
  }
  *(undefined2 *)(puVar6 + 0x2d) = 0;
  *puVar6 = (uint)puVar10;
  local_70 = puVar10;
  local_6c = uVar5 + 1;
  if (uVar20 == uVar5) {
    uVar20 = (uint)*(ushort *)((int)puVar10 + 0xb6);
    if (uVar20 < 0xb) {
      puVar10[uVar20 * 3 + 0xd] = local_dc;
      uVar2 = (undefined2)(uVar20 + 1);
      *(undefined2 *)((int)puVar10 + 0xb6) = uVar2;
      (puVar10 + 0x2e)[uVar20 + 1] = (uint)puVar7;
      puVar10[uVar20 + 1] = local_f8;
      puVar10[uVar20 * 3 + 0xc] = local_d8;
      puVar10[uVar20 * 3 + 0xe] = local_ec;
      *puVar7 = (uint)puVar10;
      *(undefined2 *)(puVar7 + 0x2d) = uVar2;
      puVar6 = puVar10;
      local_f4 = local_dc;
      goto LAB_00d004e8;
    }
    uVar23 = 0x20;
    puVar9 = &DAT_00565dd0;
    puVar13 = &DAT_018af428;
  }
  else {
    uVar23 = 0x30;
    puVar13 = &DAT_018ac46c;
    puVar9 = &DAT_00413115;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa464(puVar9,uVar23,puVar13);
}

