// FUN_00616550 @ 00616550 size=4376 calls_out=1 calls_in=3
// strings: 

void FUN_00616550(undefined4 *param_1,uint *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  longlong lVar5;
  ushort uVar6;
  int iVar7;
  uint *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  ushort *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  ushort *puVar15;
  byte *pbVar16;
  uint uVar17;
  ushort *extraout_r2;
  ushort *puVar18;
  ushort *puVar19;
  ushort *extraout_r3;
  undefined4 uVar20;
  ushort *unaff_r4;
  ushort *puVar21;
  uint uVar22;
  ushort *puVar23;
  ushort *unaff_r6;
  ushort *puVar24;
  uint uVar25;
  uint uVar26;
  ushort *puVar27;
  ushort *unaff_r9;
  ushort *unaff_r10;
  ushort *puVar28;
  ushort *unaff_r11;
  uint uVar29;
  int iVar30;
  ushort *in_r12;
  ushort *extraout_r12;
  ushort *unaff_lr;
  bool bVar31;
  ushort *local_c0;
  ushort *local_bc;
  ushort *local_b8;
  ushort *local_b4;
  ushort *local_b0;
  ushort *local_ac;
  ushort *local_a8;
  ushort *local_a4;
  ushort *local_a0;
  ushort *local_9c;
  ushort *local_98;
  ushort *local_94;
  ushort *local_90;
  ushort *local_8c;
  uint local_88;
  ushort *local_84;
  ushort *local_80;
  ushort *local_7c;
  ushort *local_78;
  ushort *local_74;
  ushort *local_70;
  ushort *local_68;
  ushort *local_44;
  ushort *local_3c;
  byte local_38;
  byte local_37;
  ushort local_36;
  ushort *local_34;
  ushort *local_30;
  ushort *local_2c;
  
  puVar8 = param_1 + 2;
  puVar12 = param_2 + 6;
  puVar13 = (uint *)((uint)&local_38 | 1);
LAB_00616598:
  while( true ) {
    puVar18 = (ushort *)param_2[7];
    if (puVar18 == (ushort *)0x0) {
      uVar20 = 0;
      goto LAB_006174c4;
    }
    uVar29 = param_2[5];
    if ((char)param_2[8] == '\0') {
      FUN_00617928(&local_38,puVar12,uVar29);
      puVar21 = local_2c;
      puVar19 = local_30;
      uVar22 = (uint)local_38;
      if (uVar22 == 0x4f) {
        FUN_00617928(&local_38,puVar12,uVar29);
        uVar22 = (uint)local_38;
        if (uVar22 == 0x4f) {
          if ((local_30 == (ushort *)0x0 && puVar19 == (ushort *)0x0) &&
              (local_2c == (ushort *)0x0 && puVar21 == (ushort *)0x0))
          goto switchD_006168c4_caseD_0;
          uVar22 = (uint)(byte)param_2[5] * -8 & 0x38;
          puVar18 = (ushort *)(0xffffffff >> uVar22);
          puVar24 = (ushort *)((uint)puVar18 | -1 << (0x20 - uVar22 & 0xff));
          if (-1 < (int)(uVar22 - 0x20)) {
            puVar24 = (ushort *)(0xffffffff >> (uVar22 - 0x20 & 0xff));
            puVar18 = (ushort *)0x0;
          }
          uVar29 = uVar29 * -8 & 0x38;
          puVar11 = (ushort *)((int)puVar18 - (uint)(puVar24 == (ushort *)0x0));
          puVar28 = (ushort *)((int)puVar24 + -1);
          if (4 < *(ushort *)((int)param_2 + 0x16)) {
            puVar11 = puVar18;
            puVar28 = puVar24;
          }
          uVar22 = uVar29 - 0x20;
          puVar23 = (ushort *)(0xffffffffU >> uVar29);
          if (-1 < (int)uVar22) {
            puVar23 = (ushort *)0x0;
          }
          puVar15 = (ushort *)(0xffffffffU >> uVar29 | -1 << (0x20 - uVar29 & 0xff));
          if (-1 < (int)uVar22) {
            puVar15 = (ushort *)(0xffffffff >> (uVar22 & 0xff));
          }
          unaff_r9 = puVar21;
          puVar27 = puVar19;
          if (puVar19 == puVar15 && puVar21 == puVar23) {
            unaff_r9 = local_2c;
            puVar27 = local_30;
          }
          local_68 = (ushort *)((uint)puVar27 >> 0x10);
          uVar29 = (uint)puVar27 >> 8;
          unaff_lr = local_2c;
          in_r12 = local_30;
          if (puVar19 == puVar15 && puVar21 == puVar23) goto LAB_006169a4;
          goto LAB_00616794;
        }
        uVar3 = *(undefined1 *)((int)puVar13 + 6);
        uVar4 = (undefined2)puVar13[1];
        uVar29 = *puVar13;
      }
      else {
        uVar3 = *(undefined1 *)((int)puVar13 + 6);
        uVar4 = (undefined2)puVar13[1];
        uVar29 = *puVar13;
      }
      puVar24 = (ushort *)(uVar29 & 0xff);
      local_68 = (ushort *)(uVar29 >> 8);
      puVar27 = (ushort *)(uVar29 >> 0x18 | (uint)CONCAT12(uVar3,uVar4) << 8);
      puVar11 = local_30;
      unaff_lr = local_2c;
      goto LAB_00617458;
    }
    local_3c = (ushort *)param_2[6];
    pbVar9 = (byte *)((int)puVar18 + -1);
    puVar28 = (ushort *)((int)local_3c + 1);
    puVar24 = (ushort *)(uint)(byte)*local_3c;
    param_2[6] = (uint)puVar28;
    param_2[7] = (uint)pbVar9;
    if (puVar24 != (ushort *)&DAT_00000004) break;
    uVar29 = 0;
    puVar27 = (ushort *)0x0;
    unaff_r9 = (ushort *)0x0;
    puVar11 = (ushort *)((int)puVar18 + -3);
    puVar19 = puVar18;
    puVar24 = (ushort *)0x0;
    iVar7 = 0;
    do {
      iVar30 = iVar7;
      local_68 = puVar11;
      if (1 - (int)puVar18 == iVar30) goto LAB_00617448;
      puVar28 = (ushort *)((int)puVar28 + 1);
      param_2[6] = (uint)puVar28;
      param_2[7] = (uint)((int)puVar18 + iVar30 + -2);
      bVar2 = *(byte *)((int)local_3c + (1 - iVar30));
      puVar21 = (ushort *)(uint)bVar2;
      if ((uVar29 == 0x3f) && (&DAT_00000001 < puVar21)) {
        uVar22 = 6;
        in_r12 = local_70;
        unaff_lr = local_74;
        goto LAB_00617494;
      }
      uVar14 = uVar29 & 0x3f;
      uVar17 = (uint)puVar21 & 0x7f;
      uVar25 = uVar14 - 0x20;
      uVar22 = uVar17 << uVar14;
      uVar29 = uVar29 + 7;
      if (-1 < (int)uVar25) {
        uVar22 = 0;
      }
      puVar27 = (ushort *)(uVar22 | (uint)puVar27);
      uVar22 = uVar17 >> (0x20 - uVar14 & 0xff);
      if (-1 < (int)uVar25) {
        uVar22 = uVar17 << (uVar25 & 0xff);
      }
      unaff_r9 = (ushort *)(uVar22 | (uint)unaff_r9);
      puVar11 = (ushort *)((int)local_68 + -1);
      puVar19 = local_68;
      puVar24 = puVar21;
      iVar7 = iVar30 + -1;
    } while (0x7fffffff < (uint)(int)(char)bVar2);
    pbVar10 = (byte *)-iVar30;
    uVar29 = 0;
    in_r12 = (ushort *)0x0;
    unaff_lr = (ushort *)0x0;
    puVar24 = (ushort *)0x0;
    do {
      pbVar10 = pbVar10 + 1;
      puVar18 = (ushort *)((int)local_3c + (int)pbVar10);
      if (pbVar9 == pbVar10) goto LAB_00617478;
      param_2[6] = (uint)(puVar18 + 1);
      param_2[7] = (uint)local_68;
      puVar28 = (ushort *)(uint)*(byte *)((int)puVar18 + 1);
      if ((uVar29 == 0x3f) && (&DAT_00000001 < puVar28)) {
        uVar22 = 6;
        in_r12 = local_78;
        unaff_lr = local_7c;
        goto LAB_00617494;
      }
      uVar25 = uVar29 & 0x3f;
      uVar17 = (uint)puVar28 & 0x7f;
      uVar14 = uVar25 - 0x20;
      uVar22 = uVar17 << uVar25;
      local_68 = (ushort *)((int)local_68 + -1);
      if (-1 < (int)uVar14) {
        uVar22 = 0;
      }
      in_r12 = (ushort *)(uVar22 | (uint)in_r12);
      uVar29 = uVar29 + 7;
      uVar22 = uVar17 >> (0x20 - uVar25 & 0xff);
      if (-1 < (int)uVar14) {
        uVar22 = uVar17 << (uVar14 & 0xff);
      }
      unaff_lr = (ushort *)(uVar22 | (uint)unaff_lr);
      puVar24 = puVar28;
    } while (0x7fffffff < (uint)(int)(char)*(byte *)((int)puVar18 + 1));
    uVar29 = (uint)(byte)param_2[5] * -8 & 0x38;
    puVar18 = (ushort *)(0xffffffff >> uVar29);
    puVar24 = (ushort *)((uint)puVar18 | -1 << (0x20 - uVar29 & 0xff));
    if (-1 < (int)(uVar29 - 0x20)) {
      puVar18 = (ushort *)0x0;
      puVar24 = (ushort *)(0xffffffff >> (uVar29 - 0x20 & 0xff));
    }
    bVar31 = 4 < *(ushort *)((int)param_2 + 0x16);
    local_68 = (ushort *)((uint)puVar27 >> 0x10);
    puVar28 = (ushort *)((int)puVar24 + -1);
    if (bVar31) {
      puVar28 = puVar24;
    }
    uVar29 = (uint)puVar27 >> 8;
    puVar11 = (ushort *)((int)puVar18 - (uint)(puVar24 == (ushort *)0x0));
    if (bVar31) {
      puVar11 = puVar18;
    }
    local_7c = unaff_lr;
    local_78 = in_r12;
    local_74 = unaff_r9;
    local_70 = puVar27;
LAB_00616794:
    puVar21 = (ushort *)*param_2;
    puVar19 = (ushort *)param_2[1];
    if (puVar21 != puVar28 || puVar19 != puVar11) {
      local_3c = (ushort *)((uint)((int)puVar21 + (int)in_r12) & (uint)puVar24);
      local_44 = (ushort *)
                 ((uint)((byte *)((int)puVar19 + (int)unaff_lr) + CARRY4((uint)puVar21,(uint)in_r12)
                        ) & (uint)puVar18);
      uVar29 = (uint)puVar27 & 0xff | (uVar29 & 0xff) << 8 | (int)local_68 << 0x10;
      puVar27 = (ushort *)
                ((uint)((byte *)((int)unaff_r9 + (int)puVar19) + CARRY4(uVar29,(uint)puVar21)) &
                (uint)puVar18);
      puVar18 = (ushort *)((uint)(uVar29 + (int)puVar21) & (uint)puVar24);
LAB_006173f0:
      if ((puVar18 != puVar28 || puVar27 != puVar11) &&
         (puVar27 <= local_44 && (uint)(local_3c <= puVar18) <= (uint)((int)puVar27 - (int)local_44)
         )) {
        *param_1 = 1;
        param_1[1] = 0;
        param_1[3] = puVar27;
        param_1[4] = local_3c;
        *puVar8 = (uint)puVar18;
        param_1[5] = local_44;
        return;
      }
    }
  }
  switch(puVar24) {
  case (ushort *)0x0:
switchD_006168c4_caseD_0:
    uVar20 = 0;
    param_2[6] = 1;
    param_2[7] = 0;
    goto LAB_006174c4;
  case (ushort *)0x1:
    puVar27 = puVar18 + -1;
    uVar29 = 0;
    unaff_lr = (ushort *)0x0;
    in_r12 = (ushort *)0x0;
    local_68 = puVar18;
    puVar18 = (ushort *)0x0;
    do {
      puVar24 = puVar18;
      if (puVar27 == (ushort *)0xffffffff) goto LAB_00617554;
      param_2[7] = (uint)puVar27;
      uVar6 = *puVar28;
      puVar18 = (ushort *)(uint)(byte)uVar6;
      param_2[6] = (uint)((int)puVar28 + 1);
      if ((uVar29 == 0x3f) && (&DAT_00000001 < puVar18)) {
        uVar22 = 6;
        in_r12 = local_8c;
        unaff_lr = local_90;
        goto LAB_00617494;
      }
      local_68 = (ushort *)(uVar29 & 0x3f);
      uVar14 = (uint)puVar18 & 0x7f;
      puVar11 = local_68 + -0x10;
      puVar27 = (ushort *)((int)puVar27 + -1);
      uVar22 = uVar14 << (int)local_68;
      uVar29 = uVar29 + 7;
      if (-1 < (int)puVar11) {
        uVar22 = 0;
      }
      unaff_lr = (ushort *)(uVar22 | (uint)unaff_lr);
      uVar22 = uVar14 >> (0x20U - (int)local_68 & 0xff);
      if (-1 < (int)puVar11) {
        uVar22 = uVar14 << ((uint)puVar11 & 0xff);
      }
      in_r12 = (ushort *)(uVar22 | (uint)in_r12);
      puVar28 = (ushort *)((int)puVar28 + 1);
    } while (0x7fffffff < (uint)(int)(char)(byte)uVar6);
    if (in_r12 != (ushort *)0x0) {
      uVar22 = 0x38;
      goto LAB_00617494;
    }
    local_44 = (ushort *)(uint)(byte)param_2[5];
    puVar23 = (ushort *)param_2[2];
    uVar29 = param_2[4];
    if (param_2[3] < uVar29) {
LAB_00617624:
      puVar15 = (ushort *)0x0;
      local_88 = 0x13;
switchD_00617090_caseD_3:
      *param_1 = 2;
      param_1[1] = 0;
      *puVar8 = local_88 | (int)local_44 << 8;
      param_1[3] = local_3c;
      param_1[4] = puVar23;
      param_1[5] = puVar15;
      return;
    }
    uVar22 = (uint)(ZEXT48(local_44) * ZEXT48(unaff_lr));
    puVar15 = local_98;
    if ((int)(ZEXT48(local_44) * ZEXT48(unaff_lr) >> 0x20) != 0) {
      local_88 = 0x38;
LAB_00617664:
      puVar23 = local_94;
      goto switchD_00617090_caseD_3;
    }
    puVar23 = (ushort *)((int)puVar23 + uVar29);
    uVar29 = param_2[3] - uVar29;
    if (uVar29 < uVar22) goto LAB_00617624;
    local_88 = 0x19;
    if (7 < (int)local_44 - 1U) goto LAB_00617664;
    local_3c = (ushort *)((int)puVar23 + uVar22);
    uVar14 = uVar29 - uVar22;
    puVar23 = local_94;
    switch(local_44) {
    case (ushort *)0x1:
      if (uVar29 == uVar22) {
LAB_00617634:
        puVar15 = (ushort *)0x0;
        local_88 = 0x13;
        puVar23 = local_3c;
        goto switchD_00617090_caseD_3;
      }
      local_94 = (ushort *)(uint)(byte)*local_3c;
      break;
    case (ushort *)0x2:
      if (uVar14 < 2) goto LAB_00617634;
      local_94 = (ushort *)(uint)*local_3c;
      break;
    default:
      goto switchD_00617090_caseD_3;
    case (ushort *)0x4:
      if (uVar14 < 4) goto LAB_00617634;
      local_94 = *(ushort **)local_3c;
      break;
    case (ushort *)0x8:
      if (uVar14 < 8) goto LAB_00617634;
      local_94 = *(ushort **)local_3c;
      local_98 = *(ushort **)(local_3c + 2);
      goto LAB_00616ae0;
    }
    local_98 = (ushort *)0x0;
LAB_00616ae0:
    local_68 = (ushort *)0x0;
    unaff_r9 = (ushort *)0x0;
    *param_2 = (uint)local_94;
    param_2[1] = (uint)local_98;
    local_90 = (ushort *)0x0;
    local_8c = unaff_lr;
    goto LAB_00616598;
  case (ushort *)0x2:
    unaff_r9 = (ushort *)(1 - (int)puVar18);
    uVar29 = 0;
    in_r12 = (ushort *)0x0;
    uVar22 = 0;
    puVar27 = (ushort *)0x0;
    local_68 = (ushort *)0x0;
    pbVar10 = (byte *)((int)puVar18 + -3);
    do {
      pbVar16 = pbVar10;
      puVar11 = local_68;
      puVar24 = puVar27;
      local_68 = puVar11;
      if (unaff_r9 == puVar11) goto LAB_00617554;
      puVar28 = (ushort *)((int)puVar28 + 1);
      local_68 = (ushort *)((int)local_3c - (int)puVar11);
      param_2[6] = (uint)puVar28;
      param_2[7] = (uint)((int)(puVar18 + -1) + (int)puVar11);
      pbVar1 = (byte *)((int)local_68 + 1);
      puVar27 = (ushort *)(uint)*pbVar1;
      if ((uVar29 == 0x3f) && (&DAT_00000001 < puVar27)) {
        uVar22 = 6;
        in_r12 = local_9c;
        unaff_lr = local_a0;
        goto LAB_00617494;
      }
      uVar17 = uVar29 & 0x3f;
      uVar25 = (uint)puVar27 & 0x7f;
      unaff_lr = (ushort *)(uVar17 - 0x20);
      uVar29 = uVar29 + 7;
      uVar14 = uVar25 << uVar17;
      if (-1 < (int)unaff_lr) {
        uVar14 = 0;
      }
      in_r12 = (ushort *)(uVar14 | (uint)in_r12);
      local_68 = (ushort *)((int)puVar11 + -1);
      uVar14 = uVar25 >> (0x20 - uVar17 & 0xff);
      if (-1 < (int)unaff_lr) {
        uVar14 = uVar25 << ((uint)unaff_lr & 0xff);
      }
      uVar22 = uVar14 | uVar22;
      pbVar10 = pbVar16 + -1;
    } while (0x7fffffff < (uint)(int)(char)*pbVar1);
    if (uVar22 == 0) {
      pbVar10 = (byte *)-(int)puVar11;
      uVar29 = 0;
      puVar19 = (ushort *)0x0;
      unaff_r9 = (ushort *)0x0;
      puVar24 = (ushort *)0x0;
      do {
        pbVar10 = pbVar10 + 1;
        local_68 = (ushort *)((int)local_3c + (int)pbVar10);
        puVar18 = local_68;
        if (pbVar9 == pbVar10) goto LAB_00617478;
        param_2[6] = (uint)(local_68 + 1);
        param_2[7] = (uint)pbVar16;
        pbVar1 = (byte *)((int)local_68 + 1);
        local_68 = (ushort *)(uint)*pbVar1;
        if ((uVar29 == 0x3f) && (&DAT_00000001 < local_68)) {
          uVar22 = 6;
          in_r12 = local_b4;
          unaff_lr = local_b8;
          goto LAB_00617494;
        }
        uVar14 = uVar29 & 0x3f;
        uVar25 = (uint)local_68 & 0x7f;
        uVar17 = uVar14 - 0x20;
        uVar22 = uVar25 << uVar14;
        if (-1 < (int)uVar17) {
          uVar22 = 0;
        }
        puVar19 = (ushort *)(uVar22 | (uint)puVar19);
        uVar22 = uVar25 >> (0x20 - uVar14 & 0xff);
        pbVar16 = pbVar16 + -1;
        if (-1 < (int)uVar17) {
          uVar22 = uVar25 << (uVar17 & 0xff);
        }
        unaff_r9 = (ushort *)(uVar22 | (uint)unaff_r9);
        uVar29 = uVar29 + 7;
        puVar24 = local_68;
      } while (0x7fffffff < (uint)(int)(char)*pbVar1);
      if (unaff_r9 == (ushort *)0x0) {
        local_44 = (ushort *)(uint)(byte)param_2[5];
        uVar29 = (int)local_44 * -8 & 0x38;
        puVar23 = (ushort *)param_2[2];
        uVar22 = param_2[4];
        puVar18 = (ushort *)(0xffffffff >> uVar29);
        puVar24 = (ushort *)((uint)puVar18 | -1 << (0x20 - uVar29 & 0xff));
        if (-1 < (int)(uVar29 - 0x20)) {
          puVar18 = (ushort *)0x0;
          puVar24 = (ushort *)(0xffffffff >> (uVar29 - 0x20 & 0xff));
        }
        puVar11 = (ushort *)((int)puVar18 - (uint)(puVar24 == (ushort *)0x0));
        puVar28 = (ushort *)((int)puVar24 + -1);
        if (4 < *(ushort *)((int)param_2 + 0x16)) {
          puVar11 = puVar18;
          puVar28 = puVar24;
        }
        if (param_2[3] < uVar22) goto LAB_00617624;
        puVar18 = (ushort *)(ZEXT48(local_44) * ZEXT48(in_r12));
        puVar15 = local_a4;
        if ((int)(ZEXT48(local_44) * ZEXT48(in_r12) >> 0x20) != 0) {
LAB_006176b8:
          local_88 = 0x38;
          puVar23 = local_a8;
          goto switchD_00617090_caseD_3;
        }
        unaff_lr = (ushort *)(param_2[3] - uVar22);
        puVar24 = (ushort *)((int)puVar23 + uVar22);
        if (unaff_lr < puVar18) {
LAB_00617670:
          puVar15 = (ushort *)0x0;
          local_88 = 0x13;
          puVar23 = puVar24;
          goto switchD_00617090_caseD_3;
        }
        uVar29 = (int)local_44 - 1;
        local_88 = 0x19;
        if (7 < uVar29) {
          puVar23 = local_a8;
          goto switchD_00617090_caseD_3;
        }
        local_3c = (ushort *)((int)puVar24 + (int)puVar18);
        uVar22 = (int)unaff_lr - (int)puVar18;
        puVar23 = local_a8;
        switch(uVar29) {
        case 0:
          if (unaff_lr != puVar18) {
            puVar18 = (ushort *)(uint)(byte)*local_3c;
LAB_00617284:
            puVar27 = (ushort *)0x0;
LAB_00617288:
            local_68 = (ushort *)((uint)puVar19 >> 0x10);
            lVar5 = ZEXT48(local_44) *
                    (ulonglong)
                    ((uint)puVar19 & 0xff | ((uint)puVar19 >> 8 & 0xff) << 8 | (int)local_68 << 0x10
                    );
            puVar21 = (ushort *)lVar5;
            puVar15 = local_c0;
            if ((int)((ulonglong)lVar5 >> 0x20) != 0) {
              local_a8 = local_bc;
              goto LAB_006176b8;
            }
            if (unaff_lr < puVar21) goto LAB_00617670;
            puVar23 = local_bc;
            if (7 < uVar29) goto switchD_00617090_caseD_3;
            local_3c = (ushort *)((int)puVar24 + (int)puVar21);
            uVar22 = (int)unaff_lr - (int)puVar21;
            local_a0 = (ushort *)0x0;
            local_b8 = (ushort *)0x0;
            local_a8 = puVar18;
            local_b4 = puVar19;
            local_a4 = puVar27;
            local_9c = in_r12;
            switch(uVar29) {
            case 0:
              if (unaff_lr != puVar21) {
                local_bc = (ushort *)(uint)(byte)*local_3c;
LAB_006173b0:
                local_c0 = (ushort *)0x0;
                local_44 = (ushort *)0x0;
                local_3c = local_bc;
                goto LAB_006173f0;
              }
              break;
            case 1:
              if (1 < uVar22) {
                local_bc = (ushort *)(uint)*local_3c;
                goto LAB_006173b0;
              }
              break;
            default:
              goto switchD_00617090_caseD_3;
            case 3:
              if (3 < uVar22) {
                local_bc = *(ushort **)local_3c;
                goto LAB_006173b0;
              }
              break;
            case 7:
              if (7 < uVar22) {
                local_bc = *(ushort **)local_3c;
                local_c0 = *(ushort **)(local_3c + 2);
                local_44 = local_c0;
                local_3c = local_bc;
                goto LAB_006173f0;
              }
            }
          }
          break;
        case 1:
          if (1 < uVar22) {
            puVar18 = (ushort *)(uint)*local_3c;
            goto LAB_00617284;
          }
          break;
        default:
          goto switchD_00617090_caseD_3;
        case 3:
          if (3 < uVar22) {
            puVar18 = *(ushort **)local_3c;
            goto LAB_00617284;
          }
          break;
        case 7:
          if (7 < uVar22) {
            puVar18 = *(ushort **)local_3c;
            puVar27 = *(ushort **)(local_3c + 2);
            goto LAB_00617288;
          }
        }
        goto LAB_00617634;
      }
      puVar24 = (ushort *)0x0;
    }
    uVar22 = 0x38;
    goto LAB_00617494;
  case (ushort *)0x3:
    unaff_lr = (ushort *)(1 - (int)puVar18);
    uVar29 = 0;
    in_r12 = (ushort *)0x0;
    uVar14 = 0;
    puVar19 = (ushort *)((int)puVar18 + -3);
    local_68 = puVar18;
    puVar24 = (ushort *)0x0;
    puVar11 = (ushort *)0x0;
    do {
      puVar21 = puVar11;
      puVar27 = puVar19;
      puVar19 = local_68;
      if (unaff_lr == puVar21) goto LAB_00617448;
      puVar28 = (ushort *)((int)puVar28 + 1);
      uVar22 = 6;
      param_2[6] = (uint)puVar28;
      param_2[7] = (uint)((int)(puVar18 + -1) + (int)puVar21);
      bVar2 = *(byte *)((int)local_3c + (1 - (int)puVar21));
      local_68 = (ushort *)(uint)bVar2;
      if ((uVar29 == 0x3f) && (&DAT_00000001 < local_68)) {
        puVar11 = unaff_r6;
        unaff_lr = unaff_r11;
        goto LAB_00617458;
      }
      uVar25 = uVar29 & 0x3f;
      uVar26 = (uint)local_68 & 0x7f;
      uVar17 = uVar25 - 0x20;
      puVar11 = (ushort *)((int)puVar21 + -1);
      uVar22 = uVar26 << uVar25;
      if (-1 < (int)uVar17) {
        uVar22 = 0;
      }
      in_r12 = (ushort *)(uVar22 | (uint)in_r12);
      uVar22 = uVar26 >> (0x20 - uVar25 & 0xff);
      uVar29 = uVar29 + 7;
      if (-1 < (int)uVar17) {
        uVar22 = uVar26 << (uVar17 & 0xff);
      }
      uVar14 = uVar22 | uVar14;
      puVar19 = (ushort *)((int)puVar27 + -1);
      puVar24 = local_68;
    } while (0x7fffffff < (uint)(int)(char)bVar2);
    if (uVar14 == 0) {
      pbVar10 = (byte *)-(int)puVar21;
      uVar29 = 0;
      puVar19 = (ushort *)0x0;
      unaff_r9 = (ushort *)0x0;
      puVar24 = (ushort *)0x0;
      do {
        pbVar10 = pbVar10 + 1;
        local_68 = (ushort *)((int)local_3c + (int)pbVar10);
        if (pbVar9 == pbVar10) {
          puVar27 = (ushort *)((int)local_68 + 1);
          unaff_lr = (ushort *)0x0;
          uVar22 = 0x13;
          puVar11 = puVar27;
          goto LAB_00617458;
        }
        param_2[6] = (uint)(local_68 + 1);
        param_2[7] = (uint)puVar27;
        pbVar16 = (byte *)((int)local_68 + 1);
        local_68 = (ushort *)(uint)*pbVar16;
        if ((uVar29 == 0x3f) && (&DAT_00000001 < local_68)) {
          uVar22 = 6;
          unaff_r9 = puVar27;
          in_r12 = unaff_r4;
          unaff_lr = unaff_r10;
          goto LAB_00617494;
        }
        uVar14 = uVar29 & 0x3f;
        uVar25 = (uint)local_68 & 0x7f;
        uVar17 = uVar14 - 0x20;
        uVar22 = uVar25 << uVar14;
        if (-1 < (int)uVar17) {
          uVar22 = 0;
        }
        puVar19 = (ushort *)(uVar22 | (uint)puVar19);
        uVar22 = uVar25 >> (0x20 - uVar14 & 0xff);
        puVar27 = (ushort *)((int)puVar27 + -1);
        if (-1 < (int)uVar17) {
          uVar22 = uVar25 << (uVar17 & 0xff);
        }
        unaff_r9 = (ushort *)(uVar22 | (uint)unaff_r9);
        uVar29 = uVar29 + 7;
        puVar24 = local_68;
      } while (0x7fffffff < (uint)(int)(char)*pbVar16);
      local_44 = (ushort *)(uint)(byte)param_2[5];
      uVar29 = (int)local_44 * -8 & 0x38;
      puVar24 = (ushort *)(0xffffffff >> uVar29);
      puVar21 = (ushort *)((uint)puVar24 | -1 << (0x20 - uVar29 & 0xff));
      if (-1 < (int)(uVar29 - 0x20)) {
        puVar24 = (ushort *)0x0;
        puVar21 = (ushort *)(0xffffffff >> (uVar29 - 0x20 & 0xff));
      }
      bVar31 = 4 < *(ushort *)((int)param_2 + 0x16);
      puVar28 = (ushort *)((int)puVar21 + -1);
      if (bVar31) {
        puVar28 = puVar21;
      }
      puVar23 = (ushort *)param_2[2];
      puVar11 = (ushort *)((int)puVar24 - (uint)(puVar21 == (ushort *)0x0));
      if (bVar31) {
        puVar11 = puVar24;
      }
      uVar29 = param_2[4];
      if (uVar29 <= param_2[3]) {
        uVar22 = (uint)(ZEXT48(local_44) * ZEXT48(in_r12));
        puVar15 = local_b0;
        if ((int)(ZEXT48(local_44) * ZEXT48(in_r12) >> 0x20) == 0) {
          uVar14 = param_2[3] - uVar29;
          puVar23 = (ushort *)((int)puVar23 + uVar29);
          if (uVar14 < uVar22) goto LAB_00617624;
          local_88 = 0x19;
          if ((int)local_44 - 1U < 8) {
            local_3c = (ushort *)((int)puVar23 + uVar22);
            uVar29 = uVar14 - uVar22;
            puVar23 = local_ac;
            switch(local_44) {
            case (ushort *)0x1:
              if (uVar14 != uVar22) {
                puVar18 = (ushort *)(uint)(byte)*local_3c;
LAB_00617200:
                puVar27 = (ushort *)0x0;
LAB_00617204:
                local_68 = (ushort *)((uint)puVar19 >> 0x10);
                local_3c = (ushort *)((uint)((int)puVar19 + (int)puVar18) & (uint)puVar21);
                local_44 = (ushort *)
                           ((uint)((byte *)((int)unaff_r9 + (int)puVar27) +
                                  CARRY4((uint)puVar19,(uint)puVar18)) & (uint)puVar24);
                unaff_r11 = (ushort *)0x0;
                unaff_r4 = puVar19;
                unaff_r6 = in_r12;
                unaff_r10 = unaff_r9;
                unaff_lr = puVar11;
                local_b0 = puVar27;
                local_ac = puVar18;
                goto LAB_006173f0;
              }
              break;
            case (ushort *)0x2:
              if (1 < uVar29) {
                puVar18 = (ushort *)(uint)*local_3c;
                goto LAB_00617200;
              }
              break;
            default:
              goto switchD_00617090_caseD_3;
            case (ushort *)0x4:
              if (3 < uVar29) {
                puVar18 = *(ushort **)local_3c;
                goto LAB_00617200;
              }
              break;
            case (ushort *)0x8:
              if (7 < uVar29) {
                puVar18 = *(ushort **)local_3c;
                puVar27 = *(ushort **)(local_3c + 2);
                goto LAB_00617204;
              }
            }
            goto LAB_00617634;
          }
        }
        else {
          local_88 = 0x38;
        }
        puVar23 = local_ac;
        goto switchD_00617090_caseD_3;
      }
      goto LAB_00617624;
    }
    uVar22 = 0x38;
    puVar24 = (ushort *)0x3;
    break;
  default:
    uVar22 = 0x18;
    puVar27 = unaff_r9;
    puVar11 = in_r12;
    break;
  case (ushort *)0x5:
    FUN_00617928(&local_38,puVar12,uVar29);
    uVar22 = (uint)local_38;
    if (uVar22 != 0x4f) goto LAB_006175f8;
    local_68 = (ushort *)((uint)local_30 >> 0x10);
    uVar29 = (uint)local_30 >> 8;
    unaff_lr = extraout_r2;
    puVar27 = local_30;
    unaff_r9 = local_2c;
    in_r12 = extraout_r12;
LAB_006169a4:
    *param_2 = (uint)puVar27 & 0xff | (uVar29 & 0xff) << 8 | (int)local_68 << 0x10;
    param_2[1] = (uint)unaff_r9;
    goto LAB_00616598;
  case (ushort *)0x6:
    FUN_00617928(&local_38,puVar12,uVar29);
    puVar27 = local_2c;
    puVar18 = local_30;
    uVar22 = (uint)local_38;
    if (uVar22 != 0x4f) goto LAB_006175f8;
    FUN_00617928(&local_38,puVar12,uVar29);
    uVar22 = (uint)local_38;
    unaff_lr = local_2c;
    if (uVar22 == 0x4f) {
      local_3c = local_30;
      local_44 = local_2c;
      uVar29 = (uint)(byte)param_2[5] * -8 & 0x38;
      puVar24 = (ushort *)(0xffffffff >> uVar29);
      puVar11 = (ushort *)((uint)puVar24 | -1 << (0x20 - uVar29 & 0xff));
      if (-1 < (int)(uVar29 - 0x20)) {
        puVar24 = (ushort *)0x0;
        puVar11 = (ushort *)(0xffffffff >> (uVar29 - 0x20 & 0xff));
      }
      bVar31 = 4 < *(ushort *)((int)param_2 + 0x16);
      puVar28 = (ushort *)((int)puVar11 + -1);
      if (bVar31) {
        puVar28 = puVar11;
      }
      local_68 = (ushort *)((uint)puVar18 >> 0x10);
      puVar11 = (ushort *)((int)puVar24 - (uint)(puVar11 == (ushort *)0x0));
      if (bVar31) {
        puVar11 = puVar24;
      }
      unaff_r9 = puVar27;
      in_r12 = local_30;
      goto LAB_006173f0;
    }
    local_68 = (ushort *)(uint)local_36;
    puVar24 = (ushort *)(uint)local_37;
    puVar27 = local_34;
    puVar11 = local_30;
    break;
  case (ushort *)0x7:
    FUN_00617928(&local_38,puVar12,uVar29);
    uVar22 = (uint)local_38;
    if (uVar22 == 0x4f) {
      uVar22 = 0;
      in_r12 = (ushort *)0x0;
      unaff_lr = (ushort *)0x0;
      uVar29 = param_2[7];
      unaff_r9 = (ushort *)param_2[6];
      local_68 = extraout_r3;
      puVar24 = (ushort *)0x0;
      do {
        uVar29 = uVar29 - 1;
        if (uVar29 == 0xffffffff) {
          uVar22 = 0x13;
          in_r12 = unaff_r9;
          unaff_lr = (ushort *)0x0;
          goto LAB_00617494;
        }
        param_2[7] = uVar29;
        uVar6 = *unaff_r9;
        local_68 = (ushort *)(uint)(byte)uVar6;
        param_2[6] = (uint)((int)unaff_r9 + 1);
        if ((uVar22 == 0x3f) && (&DAT_00000001 < local_68)) {
          uVar22 = 6;
          unaff_r9 = local_2c;
          in_r12 = local_80;
          unaff_lr = local_84;
          goto LAB_00617494;
        }
        uVar17 = uVar22 & 0x3f;
        uVar25 = (uint)local_68 & 0x7f;
        uVar26 = uVar17 - 0x20;
        uVar14 = uVar25 << uVar17;
        if (-1 < (int)uVar26) {
          uVar14 = 0;
        }
        in_r12 = (ushort *)(uVar14 | (uint)in_r12);
        uVar14 = uVar25 >> (0x20 - uVar17 & 0xff);
        uVar22 = uVar22 + 7;
        if (-1 < (int)uVar26) {
          uVar14 = uVar25 << (uVar26 & 0xff);
        }
        unaff_lr = (ushort *)(uVar14 | (uint)unaff_lr);
        unaff_r9 = (ushort *)((int)unaff_r9 + 1);
        puVar24 = local_68;
      } while (0x7fffffff < (uint)(int)(char)(byte)uVar6);
      uVar29 = (uint)(byte)param_2[5] * -8 & 0x38;
      local_44 = (ushort *)(0xffffffff >> uVar29);
      local_3c = (ushort *)((uint)local_44 | -1 << (0x20 - uVar29 & 0xff));
      if (-1 < (int)(uVar29 - 0x20)) {
        local_44 = (ushort *)0x0;
        local_3c = (ushort *)(0xffffffff >> (uVar29 - 0x20 & 0xff));
      }
      puVar11 = (ushort *)((int)local_44 - (uint)(local_3c == (ushort *)0x0));
      puVar28 = (ushort *)((int)local_3c + -1);
      if (4 < *(ushort *)((int)param_2 + 0x16)) {
        puVar11 = local_44;
        puVar28 = local_3c;
      }
      local_3c = (ushort *)((uint)local_3c & (uint)((int)local_30 + (int)in_r12));
      local_68 = (ushort *)((uint)local_30 >> 0x10);
      local_44 = (ushort *)
                 ((uint)local_44 &
                 (uint)((byte *)((int)local_2c + (int)unaff_lr) +
                       CARRY4((uint)local_30,(uint)in_r12)));
      puVar27 = local_2c;
      puVar18 = local_30;
      unaff_r9 = local_2c;
      local_84 = unaff_lr;
      local_80 = in_r12;
      goto LAB_006173f0;
    }
LAB_006175f8:
    local_68 = (ushort *)(uint)local_36;
    puVar24 = (ushort *)(uint)local_37;
    puVar27 = local_34;
    puVar11 = local_30;
    unaff_lr = local_2c;
  }
LAB_00617458:
  unaff_r9 = puVar27;
  in_r12 = puVar11;
LAB_00617494:
  param_2[6] = 1;
  param_1[3] = unaff_r9;
  param_1[4] = in_r12;
  param_1[5] = unaff_lr;
  *puVar8 = (int)local_68 << 0x10 | (int)puVar24 << 8 | uVar22;
  uVar20 = 2;
  param_2[7] = 0;
LAB_006174c4:
  *param_1 = uVar20;
  param_1[1] = 0;
  return;
LAB_00617554:
  unaff_r9 = puVar28;
  unaff_lr = (ushort *)0x0;
  uVar22 = 0x13;
  in_r12 = unaff_r9;
  goto LAB_00617494;
LAB_00617448:
  local_68 = puVar19;
  uVar22 = 0x13;
  puVar27 = puVar28;
  puVar11 = puVar28;
  unaff_lr = (ushort *)0x0;
  goto LAB_00617458;
LAB_00617478:
  uVar22 = 0x13;
  unaff_r9 = (ushort *)((int)puVar18 + 1);
  in_r12 = (ushort *)((int)puVar18 + 1);
  unaff_lr = (ushort *)0x0;
  goto LAB_00617494;
}

