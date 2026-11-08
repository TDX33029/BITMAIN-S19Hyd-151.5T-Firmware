// FUN_014090dc @ 014090dc size=1064 calls_out=3 calls_in=1
// strings: 

void FUN_014090dc(undefined2 *param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  short *psVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  char *pcVar23;
  uint *puVar24;
  bool bVar25;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 local_100;
  undefined1 auStack_f8 [72];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  pcVar23 = (char *)param_2[5];
  iVar11 = param_2[4];
  puVar10 = (uint *)param_2[2];
  puVar24 = (uint *)(pcVar23 + 1);
  iVar21 = *param_2;
  uVar22 = param_2[1];
  do {
    do {
      while( true ) {
        if (iVar11 == 0) {
          *param_1 = 2;
          return;
        }
        puVar7 = puVar10;
        if (uVar22 == 0) {
          do {
            puVar10 = puVar7 + 1;
            uVar22 = *puVar7;
            iVar21 = iVar21 + -0x460;
            puVar7 = puVar10;
          } while ((uVar22 & 0x80808080) == 0x80808080);
          uVar22 = uVar22 & 0x80808080 ^ 0x80808080;
          *param_2 = iVar21;
          param_2[2] = (int)puVar10;
        }
        iVar11 = iVar11 + -1;
        param_2[4] = iVar11;
        iVar20 = (short)-(short)((uint)LZCOUNT(uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                                               (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) >> 3)
                 * 0x118 + iVar21;
        cVar1 = *pcVar23;
        uVar22 = uVar22 - 1 & uVar22;
        param_2[1] = uVar22;
        if (cVar1 == '\x01') break;
        if (*(undefined1 **)(iVar20 + -200) != &DAT_3b9aca00) {
          puVar7 = (uint *)(*(int *)(iVar20 + -0xc0) + 0x52);
          iVar14 = *(int *)(iVar20 + -0xc0) + 8;
          for (iVar18 = *(int *)(iVar20 + -0xbc) * 0xe8; iVar18 != 0; iVar18 = iVar18 + -0xe8) {
            uVar17 = (uint)*(ushort *)(iVar14 + 0x48);
            bVar25 = uVar17 == 2;
            if (bVar25) {
              uVar17 = *puVar7;
            }
            if (bVar25 && uVar17 == *puVar24) goto LAB_014092b8;
            iVar14 = iVar14 + 0xe8;
            puVar7 = puVar7 + 0x3a;
          }
        }
      }
      FUN_01bed4e2(&local_b0,puVar24,0x10);
    } while (*(undefined1 **)(iVar20 + -0x60) == &DAT_3b9aca00);
    piVar12 = (int *)(*(int *)(iVar20 + -0x58) + 0x52);
    iVar18 = *(int *)(iVar20 + -0x58) + 8;
    for (iVar14 = *(int *)(iVar20 + -0x54) * 0xe8; iVar14 != 0; iVar14 = iVar14 + -0xe8) {
      sVar5 = 0x10;
      if (1 < *(ushort *)(iVar18 + 0x48)) {
        sVar5 = *(ushort *)(iVar18 + 0x48) - 2;
      }
      if (sVar5 == 1) {
        FUN_01bed4e2((int)&local_140 + 1,piVar12,0x10);
        iVar4 = thunk_FUN_01bed842((int)&local_140 + 1,&local_b0,0x10);
        if (iVar4 == 0) {
LAB_014092b8:
          psVar15 = (short *)param_2[6];
          sVar5 = *psVar15;
          sVar3 = psVar15[0x20];
          if (sVar5 != 1) {
            puVar6 = (undefined4 *)((uint)&local_b0 | 4);
            uVar8 = *(undefined4 *)(psVar15 + 4);
            uVar9 = *(undefined4 *)(psVar15 + 6);
            uVar13 = *(undefined4 *)(psVar15 + 8);
            *puVar6 = *(undefined4 *)(psVar15 + 2);
            puVar6[1] = uVar8;
            puVar6[2] = uVar9;
            puVar6[3] = uVar13;
            uVar8 = *(undefined4 *)(psVar15 + 0xc);
            uVar9 = *(undefined4 *)(psVar15 + 0xe);
            uVar13 = *(undefined4 *)(psVar15 + 0x10);
            puVar6[4] = *(undefined4 *)(psVar15 + 10);
            puVar6[5] = uVar8;
            puVar6[6] = uVar9;
            puVar6[7] = uVar13;
            local_b0._2_2_ = psVar15[1];
          }
          else {
            FUN_015e8ad4((uint)&local_b0 | 4,*(undefined4 *)(psVar15 + 4),
                         *(undefined4 *)(psVar15 + 6));
          }
          local_b0 = CONCAT22(local_b0._2_2_,(ushort)(sVar5 == 1));
          sVar5 = psVar15[0x12];
          if (sVar5 != 1) {
            puVar6 = (undefined4 *)((uint)&local_70 | 4);
            uVar8 = *(undefined4 *)(psVar15 + 0x16);
            uVar9 = *(undefined4 *)(psVar15 + 0x18);
            uVar13 = *(undefined4 *)(psVar15 + 0x1a);
            uVar16 = *(undefined4 *)(psVar15 + 0x1c);
            uVar19 = *(undefined4 *)(psVar15 + 0x1e);
            *puVar6 = *(undefined4 *)(psVar15 + 0x14);
            puVar6[1] = uVar8;
            puVar6[2] = uVar9;
            puVar6[3] = uVar13;
            puVar6[4] = uVar16;
            puVar6[5] = uVar19;
            local_70._2_2_ = psVar15[0x13];
          }
          else {
            FUN_015e8ad4((uint)&local_70 | 4,*(undefined4 *)(psVar15 + 0x16),
                         *(undefined4 *)(psVar15 + 0x18));
          }
          local_70 = CONCAT22(local_70._2_2_,(ushort)(sVar5 == 1));
          local_140 = local_b0;
          uStack_13c = uStack_ac;
          uStack_138 = uStack_a8;
          uStack_134 = uStack_a4;
          local_130 = local_a0;
          uStack_12c = uStack_9c;
          uStack_128 = uStack_98;
          uStack_124 = uStack_94;
          uStack_120 = uStack_90;
          local_11c = local_70;
          uStack_118 = uStack_6c;
          uStack_114 = uStack_68;
          local_110 = local_64;
          uStack_10c = local_60;
          uStack_108 = uStack_5c;
          uStack_104 = uStack_58;
          uVar2 = *(undefined1 *)(iVar20 + -0xd8);
          bVar25 = *(short *)(iVar20 + -0x118) != 1;
          local_100 = (char)sVar3;
          if (bVar25) {
            puVar6 = (undefined4 *)((uint)&local_70 | 4);
            uVar8 = *(undefined4 *)(iVar20 + -0x110);
            uVar9 = *(undefined4 *)(iVar20 + -0x10c);
            uVar13 = *(undefined4 *)(iVar20 + -0x108);
            *puVar6 = *(undefined4 *)(iVar20 + -0x114);
            puVar6[1] = uVar8;
            puVar6[2] = uVar9;
            puVar6[3] = uVar13;
            uVar8 = *(undefined4 *)(iVar20 + -0x100);
            uVar9 = *(undefined4 *)(iVar20 + -0xfc);
            uVar13 = *(undefined4 *)(iVar20 + -0xf8);
            puVar6[4] = *(undefined4 *)(iVar20 + -0x104);
            puVar6[5] = uVar8;
            puVar6[6] = uVar9;
            puVar6[7] = uVar13;
            local_70 = (uint)*(ushort *)(iVar20 + -0x116) << 0x10;
          }
          else {
            FUN_015e8ad4((uint)&local_70 | 4,*(undefined4 *)(iVar20 + -0x110),
                         *(undefined4 *)(iVar20 + -0x10c));
          }
          local_70 = CONCAT22(local_70._2_2_,(ushort)!bVar25);
          bVar25 = *(short *)(iVar20 + -0xf4) != 1;
          if (bVar25) {
            uVar8 = *(undefined4 *)(iVar20 + -0xec);
            uVar9 = *(undefined4 *)(iVar20 + -0xe8);
            uVar13 = *(undefined4 *)(iVar20 + -0xe4);
            uVar16 = *(undefined4 *)(iVar20 + -0xe0);
            uVar19 = *(undefined4 *)(iVar20 + -0xdc);
            puVar6 = (undefined4 *)((uint)&local_48 | 4);
            *puVar6 = *(undefined4 *)(iVar20 + -0xf0);
            puVar6[1] = uVar8;
            puVar6[2] = uVar9;
            puVar6[3] = uVar13;
            puVar6[4] = uVar16;
            puVar6[5] = uVar19;
            local_48._2_2_ = *(undefined2 *)(iVar20 + -0xf2);
          }
          else {
            FUN_015e8ad4((uint)&local_48 | 4,*(undefined4 *)(iVar20 + -0xec),
                         *(undefined4 *)(iVar20 + -0xe8));
          }
          local_48 = CONCAT22(local_48._2_2_,(ushort)!bVar25);
          local_b0 = local_70;
          uStack_ac = uStack_6c;
          uStack_a8 = uStack_68;
          uStack_a4 = local_64;
          local_a0 = local_60;
          uStack_9c = uStack_5c;
          uStack_98 = uStack_58;
          uStack_94 = uStack_54;
          uStack_90 = uStack_50;
          local_8c = local_48;
          uStack_88 = uStack_44;
          uStack_84 = uStack_40;
          local_80 = local_3c;
          uStack_7c = uStack_38;
          uStack_78 = uStack_34;
          uStack_74 = uStack_30;
          FUN_01bed4e2((uint)auStack_f8 | 2,&local_b0,0x40);
          FUN_01bed4e2(param_1,&local_140,0x44);
          param_1[0x24] = 0x11;
          param_1[0x22] = 0;
          FUN_01bed4e2(param_1 + 0x25,auStack_f8,0x42);
          *(undefined1 *)(param_1 + 0x46) = uVar2;
          *(undefined4 *)(param_1 + 0x72) = 0x15180;
          return;
        }
      }
      else if (sVar5 == 0) {
        local_140 = *piVar12 << 8;
        uStack_13c._0_1_ = (undefined1)((uint)*piVar12 >> 0x18);
      }
      iVar18 = iVar18 + 0xe8;
      piVar12 = piVar12 + 0x3a;
    }
  } while( true );
}

