// FUN_00f2d3ac @ 00f2d3ac size=3864 calls_out=27 calls_in=1
// strings: splits | splits

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f2d3ac(int *param_1,char *param_2)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  uint *puVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  int *piVar17;
  byte *pbVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  uint uVar21;
  char cVar22;
  undefined4 uVar23;
  uint *puVar24;
  char *pcVar25;
  uint *puVar26;
  undefined4 uVar27;
  uint *puVar28;
  undefined4 uVar29;
  int iVar30;
  undefined4 uVar31;
  uint *puVar32;
  uint **ppuVar33;
  uint **ppuVar34;
  uint *local_184;
  uint *local_16c;
  int local_168;
  int local_154;
  uint *local_150;
  uint *local_14c;
  uint local_144;
  uint *local_140;
  char local_120;
  byte *local_118;
  uint *local_10c;
  int local_108;
  uint *local_104;
  uint *local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined2 local_f4;
  undefined2 local_f2;
  undefined2 uStack_f0;
  undefined2 uStack_ee;
  byte local_e8 [4];
  int local_e4;
  uint *local_e0;
  int local_dc;
  uint *local_d0;
  uint *local_cc;
  int local_c8;
  ushort local_c4;
  undefined2 local_c2;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined4 uStack_bc;
  uint local_b8;
  int local_b4;
  int local_b0;
  uint *local_ac;
  uint local_a8;
  undefined4 local_a4;
  int local_a0;
  uint *local_9c;
  int local_98;
  uint *local_8c;
  uint *local_88;
  int local_84;
  undefined2 local_80;
  uint *local_7e;
  ushort local_78;
  ushort local_76;
  undefined4 local_74;
  undefined4 local_70;
  uint *local_6c;
  int local_68;
  uint *local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int local_54 [2];
  int local_4c;
  uint *local_48;
  uint *local_44;
  int local_40;
  uint *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_29 [5];
  
  cVar22 = *param_2;
  if (cVar22 != '\x04') {
    puVar28 = (uint *)FUN_00f36124(param_2,auStack_29,&DAT_0187e8c8);
    iVar13 = 0;
    goto LAB_00f2e224;
  }
  puVar26 = *(uint **)(param_2 + 0xc);
  iVar7 = *(int *)(param_2 + 4);
  pbVar18 = *(byte **)(param_2 + 8);
  pbVar8 = pbVar18 + (int)puVar26 * 0x18;
  if (puVar26 == (uint *)0x0) {
    local_108 = 4;
    local_10c = (uint *)0x0;
  }
  else {
    local_108 = thunk_FUN_016d4a50((int)puVar26 * 0x14);
    local_10c = puVar26;
    if (local_108 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,(int)puVar26 * 0x14);
    }
  }
  uVar9 = (uint)&local_d0 | 1;
  uVar10 = (uint)&local_48 | 1;
  puVar11 = (undefined4 *)((uint)&local_70 | 4);
  puVar12 = (undefined4 *)((uint)&local_48 | 4);
  local_104 = (uint *)0x0;
  local_118 = pbVar18;
LAB_00f2d4c0:
  puVar28 = local_104;
  if (local_118 == pbVar8) {
    pbVar16 = pbVar8;
  }
  else {
    pbVar16 = local_118 + 0x18;
    bVar1 = *local_118;
    if (bVar1 != 6) {
      local_e8[0] = bVar1;
      FUN_016dd1aa((uint)local_e8 | 1,local_118 + 1,0x17);
      iVar30 = local_dc;
      puVar28 = local_e0;
      iVar13 = local_e4;
      if (bVar1 != 4) {
        if (bVar1 == 5) {
          local_9c = local_e0;
          local_ac = local_e0;
          bVar4 = false;
          local_98 = 0;
          if (local_e4 != 0) {
            local_98 = local_dc;
          }
          local_a0 = local_e4;
          local_b0 = local_e4;
          local_b8 = (uint)(local_e4 != 0);
          local_76 = 3;
          local_a4 = 0;
          local_b4 = 0;
          local_144 = 6;
          local_d0 = (uint *)CONCAT31(local_d0._1_3_,6);
          local_a8 = local_b8;
LAB_00f2d574:
          ppuVar33 = &local_8c;
          iVar13 = 0;
          FUN_00f2cd78(local_54,&local_b8);
          ppuVar34 = &local_48;
          if (local_54[0] != 0) {
            puVar19 = (undefined4 *)(local_54[0] + local_4c * 0x18);
            iVar13 = local_54[0] + local_4c * 0xc;
            ppuVar34 = *(uint ***)(iVar13 + 0x10c);
            ppuVar33 = *(uint ***)(iVar13 + 0x110);
            iVar13 = *(int *)(iVar13 + 0x114);
            uVar20 = puVar19[1];
            uVar23 = puVar19[2];
            uVar27 = puVar19[3];
            uVar29 = puVar19[4];
            uVar31 = puVar19[5];
            *puVar12 = *puVar19;
            puVar12[1] = uVar20;
            puVar12[2] = uVar23;
            puVar12[3] = uVar27;
            puVar12[4] = uVar29;
            puVar12[5] = uVar31;
            local_70 = local_48;
            local_6c = local_44;
            local_68 = local_40;
            local_64 = local_3c;
            uStack_60 = uStack_38;
            uStack_5c = uStack_34;
            uStack_58 = uStack_30;
          }
          if (local_54[0] == 0 || ppuVar34 == (uint **)&DAT_80000000) {
            if (local_144 == 6) {
LAB_00f2d9a4:
              FUN_00f33f28(&local_48);
              if ((short)local_48 == 1) {
                local_140 = local_44;
                local_144 = 6;
                goto LAB_00f2d9d4;
              }
              local_144 = (uint)local_48 >> 0x10;
              uVar2 = (ushort)local_44;
            }
            else {
LAB_00f2dd98:
              uVar2 = local_78;
            }
            local_14c = local_74;
            local_140 = (uint *)(local_144 | (uint)uVar2 << 0x10);
            local_7e = local_74;
            local_84 = local_168;
            uVar15 = (uint)local_76;
            local_150 = (uint *)0x0;
            if (bVar4) {
              local_150 = local_16c;
            }
            if (uVar15 == 3) {
              uVar15 = 2;
            }
            local_80 = (undefined2)uVar15;
            local_8c = local_140;
            local_88 = local_150;
            if (local_98 != 0) {
              local_140 = (uint *)FUN_00f2c2f0(iVar30,&DAT_01887430,&DAT_018ab990);
              FUN_00f2c4fc(&local_8c);
              uVar15 = 3;
            }
            while( true ) {
              FUN_00f2cd78(&local_48,&local_b8);
              iVar13 = local_40;
              puVar28 = local_48;
              if (local_48 == (uint *)0x0) break;
              local_70 = &local_b8;
              if (local_48[local_40 * 3 + 0x43] != 0) {
                thunk_FUN_016d3fb4(local_48[local_40 * 3 + 0x44]);
              }
              FUN_00f2cf28(puVar28 + iVar13 * 6);
            }
            local_154 = local_168;
            goto joined_r0x00f2de7c;
          }
          FUN_00f30340(&local_d0);
          local_d0 = (uint *)*puVar11;
          local_cc = (uint *)puVar11[1];
          local_c8 = puVar11[2];
          uStack_bc = puVar11[5];
          local_c4 = (ushort)puVar11[3];
          local_c2 = (undefined2)((uint)puVar11[3] >> 0x10);
          uStack_c0 = (undefined2)puVar11[4];
          uStack_be = (undefined2)((uint)puVar11[4] >> 0x10);
          if (iVar13 == 2) {
            cVar22 = '\0';
            if (*(short *)ppuVar33 != 0x6469) goto LAB_00f2d804;
joined_r0x00f2d660:
            bVar3 = false;
            local_120 = cVar22;
          }
          else {
            if (iVar13 == 6) {
              iVar14 = thunk_FUN_016dd50a(ppuVar33,"splits",6);
              if (iVar14 == 0) {
                bVar3 = false;
                local_120 = '\x01';
                goto joined_r0x00f2d660;
              }
            }
            else if ((iVar13 == 3) && (iVar14 = thunk_FUN_016dd50a(ppuVar33,"bdf",3), iVar14 == 0))
            {
              cVar22 = '\x02';
              goto joined_r0x00f2d660;
            }
LAB_00f2d804:
            local_184 = (uint *)FUN_00f2c294(ppuVar33,iVar13,&DAT_0187e830,3);
            bVar3 = true;
          }
joined_r0x00f2d660:
          if (ppuVar34 != (uint **)0x0) {
            thunk_FUN_016d3fb4(ppuVar33);
          }
          if (bVar3) {
            local_140 = local_184;
            goto LAB_00f2d9d4;
          }
          uVar5 = (char)local_d0;
          if (local_120 == '\x02') {
            if (local_76 != 3) {
              local_6c = (uint *)0x3;
              local_70 = (uint *)0x35bec6;
LAB_00f2e014:
              local_44 = &DAT_0157d360;
              local_48 = &local_70;
              local_140 = (uint *)FUN_00f56780(&DAT_00582dbd,&local_48);
              goto LAB_00f2d9d4;
            }
            uVar15 = (uint)local_d0 & 0xff;
            local_d0 = (uint *)CONCAT31(local_d0._1_3_,6);
            if (uVar15 == 6) {
              local_6c = (uint *)FUN_00f2c790();
            }
            else {
              local_48 = (uint *)CONCAT31(local_48._1_3_,uVar5);
              FUN_016dd1aa(uVar10,uVar9,0x17);
              FUN_00f3404c(&local_70,&local_48);
              if ((short)local_70 == 0) {
                local_74 = local_6c;
                local_76 = local_70._2_2_;
                goto LAB_00f2d574;
              }
            }
            local_140 = local_6c;
            goto LAB_00f2d9d4;
          }
          if (local_120 == '\0') {
            if (local_144 != 6) {
              local_6c = (uint *)&SUB_00000002;
              local_70 = (uint *)0x40c32a;
              goto LAB_00f2e014;
            }
            uVar15 = (uint)local_d0 & 0xff;
            local_d0 = (uint *)CONCAT31(local_d0._1_3_,6);
            if (uVar15 == 6) {
              local_140 = (uint *)FUN_00f2c790();
LAB_00f2dfe4:
              local_144 = 6;
              goto LAB_00f2d9d4;
            }
            local_48 = (uint *)CONCAT31(local_48._1_3_,uVar5);
            FUN_016dd1aa(uVar10,uVar9,0x17);
            FUN_00f362e0(&local_70,&local_48);
            if ((short)local_70 == 1) {
              local_140 = local_6c;
              goto LAB_00f2dfe4;
            }
            if (((uint)local_70 & 0x10000) == 0) {
              FUN_00f2cb28();
              local_140 = (uint *)FUN_00f2ca1c();
              goto LAB_00f2dfe4;
            }
            local_144 = 5;
            uVar15 = local_70._2_2_ - 1 & 0xffff;
            if (uVar15 < 0xb) {
              local_144 = 0xff4f18d8;
            }
            local_78 = local_70._2_2_;
            if (uVar15 < 0xb) {
              local_144 = (uint)*(ushort *)(local_144 + 0xf2d8b0 + uVar15 * 2);
            }
            goto LAB_00f2d574;
          }
          if (local_120 != '\x01') {
            if (local_144 == 6) goto LAB_00f2d9a4;
            goto LAB_00f2dd98;
          }
          if (bVar4) {
            local_6c = (uint *)&DAT_00000006;
            local_70 = (uint *)0x35bec0;
            goto LAB_00f2e014;
          }
          uVar15 = (uint)local_d0 & 0xff;
          local_d0 = (uint *)CONCAT31(local_d0._1_3_,6);
          if (uVar15 == 6) {
            local_140 = (uint *)FUN_00f2c790();
            goto LAB_00f2dffc;
          }
          local_48 = (uint *)CONCAT31(local_48._1_3_,uVar5);
          FUN_016dd1aa(uVar10,uVar9,0x17);
          FUN_00f34970(&local_70,&local_48);
          if (local_70 != (uint *)&DAT_00000001) {
            local_168 = local_68;
            bVar4 = true;
            local_16c = local_6c;
            goto LAB_00f2d574;
          }
          local_140 = local_6c;
LAB_00f2dffc:
          bVar4 = false;
LAB_00f2d9d4:
          uVar2 = local_76;
          if (local_76 < 2) {
            if (local_74._2_1_ != '\x02') {
              local_74 = (uint *)((uint)local_74 & 0xff000000);
            }
            local_74 = (uint *)CONCAT13(local_74._3_1_,0x20000);
            local_76 = 0;
            local_74 = (uint *)CONCAT22((short)((uint)local_74 >> 0x10),uVar2);
          }
          if (bVar4) {
            FUN_00f2c6d0(local_16c,local_168);
          }
          if ((4 < local_144) && (local_144 != 6)) {
            local_78 = 0;
          }
          while (uVar15 = local_b8, local_98 != 0) {
            local_98 = local_98 + -1;
            if (local_b8 != 1) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018af368);
            }
            iVar13 = local_b0;
            puVar28 = local_ac;
            if (local_b4 == 0) {
              for (; puVar28 != (uint *)0x0; puVar28 = (uint *)((int)puVar28 + -1)) {
                iVar13 = *(int *)(iVar13 + 0x198);
              }
              puVar28 = (uint *)0x0;
              iVar30 = 0;
              local_b8 = 1;
              if (*(short *)(iVar13 + 0x192) == 0) goto LAB_00f2dae0;
LAB_00f2daa0:
              iVar14 = iVar13;
            }
            else {
              iVar13 = local_b4;
              iVar30 = local_b0;
              if (local_ac < (uint *)(uint)*(ushort *)(local_b4 + 0x192)) goto LAB_00f2daa0;
LAB_00f2dae0:
              do {
                iVar14 = *(int *)(iVar13 + 0x108);
                if (iVar14 == 0) {
                  thunk_FUN_016d3fb4();
                    /* WARNING: Subroutine does not return */
                  FUN_00faa444(&DAT_018af358);
                }
                puVar28 = (uint *)(uint)*(ushort *)(iVar13 + 400);
                thunk_FUN_016d3fb4();
                iVar30 = iVar30 + 1;
                iVar13 = iVar14;
              } while ((uint *)(uint)*(ushort *)(iVar14 + 0x192) <= puVar28);
            }
            if (iVar30 == 0) {
              local_ac = (uint *)((int)puVar28 + 1);
              local_b4 = iVar14;
            }
            else {
              piVar17 = (int *)(iVar14 + (int)puVar28 * 4 + 0x19c);
              do {
                local_b4 = *piVar17;
                iVar30 = iVar30 + -1;
                piVar17 = (int *)(local_b4 + 0x198);
              } while (iVar30 != 0);
              local_ac = (uint *)0x0;
            }
            iVar13 = iVar14 + (int)puVar28 * 0xc;
            local_b0 = 0;
            local_48 = &local_b8;
            if (*(int *)(iVar13 + 0x10c) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(iVar13 + 0x110));
            }
            FUN_00f2cf28(iVar14 + (int)puVar28 * 0x18);
          }
          local_b8 = 0;
          if ((uVar15 & 1) != 0) {
            iVar13 = local_b4;
            iVar30 = local_b0;
            puVar28 = local_ac;
            if (local_b4 == 0) {
              for (; iVar13 = iVar30, puVar28 != (uint *)0x0; puVar28 = (uint *)((int)puVar28 + -1))
              {
                iVar30 = *(int *)(iVar13 + 0x198);
              }
            }
            iVar30 = iVar13;
            iVar14 = *(int *)(iVar13 + 0x108);
            if (*(int *)(iVar13 + 0x108) != 0) {
              do {
                iVar13 = iVar14;
                thunk_FUN_016d3fb4(iVar30);
                iVar30 = iVar13;
                iVar14 = *(int *)(iVar13 + 0x108);
              } while (*(int *)(iVar13 + 0x108) != 0);
            }
            thunk_FUN_016d3fb4(iVar13);
          }
          uVar15 = 3;
joined_r0x00f2de7c:
          if ((char)local_d0 != '\x06') {
            FUN_00f33f88(&local_d0);
          }
          goto LAB_00f2de88;
        }
        local_140 = (uint *)FUN_00f36124(local_e8,auStack_29,&DAT_0187e968);
        if ((bVar1 & 6) != 4) {
          FUN_00f3615c(local_e8);
        }
        goto LAB_00f2e148;
      }
      local_40 = local_e4;
      local_44 = local_e0;
      puVar32 = local_e0 + local_dc * 6;
      local_48 = local_e0;
      local_3c = puVar32;
      if (local_dc == 0) {
LAB_00f2d910:
        puVar24 = local_44;
        local_140 = (uint *)FUN_00f2c2f0(0,&DAT_0187e818,&DAT_018ab990);
        goto LAB_00f2d92c;
      }
      puVar24 = local_e0 + 6;
      local_44 = puVar24;
      if ((char)*local_e0 == '\x06') goto LAB_00f2d910;
      local_d0 = (uint *)CONCAT31(local_d0._1_3_,(char)*local_e0);
      FUN_016dd1aa(uVar9,(char *)((int)local_e0 + 1),0x17);
      FUN_00f362e0(&local_70,&local_d0);
      if ((short)local_70 == 1) {
        uVar15 = 3;
        local_140 = local_6c;
        goto LAB_00f2d930;
      }
      if (((uint)local_70 & 0x10000) == 0) {
        FUN_00f2cb28();
        local_140 = (uint *)FUN_00f2ca1c();
        goto LAB_00f2d92c;
      }
      uVar21 = 5;
      bVar4 = false;
      switch(local_70._2_2_) {
      case 1:
        uVar21 = 0;
        break;
      default:
        goto switchD_00f2dc4c_caseD_2;
      case 3:
        uVar21 = 1;
        bVar4 = true;
switchD_00f2dc4c_caseD_2:
        if (iVar30 != 1) goto LAB_00f2dcf8;
        goto LAB_00f2dd0c;
      case 5:
        uVar21 = 2;
        break;
      case 9:
        uVar21 = 3;
        break;
      case 0xb:
        uVar21 = 4;
      }
      bVar4 = true;
      if (iVar30 == 1) {
LAB_00f2dd0c:
        local_8c = (uint *)CONCAT22(local_8c._2_2_,local_70._2_2_);
        local_140 = (uint *)FUN_00f2c2f0(1,&DAT_0187e818,&DAT_018ab990);
joined_r0x00f2dd7c:
        if (!bVar4) {
          local_8c = (uint *)((uint)local_8c & 0xffff0000);
        }
LAB_00f2d92c:
        uVar15 = 3;
      }
      else {
LAB_00f2dcf8:
        local_8c = (uint *)CONCAT22(local_8c._2_2_,local_70._2_2_);
        puVar24 = puVar28 + 0xc;
        local_44 = puVar24;
        if ((char)puVar28[6] == '\x06') goto LAB_00f2dd0c;
        local_d0 = (uint *)CONCAT31(local_d0._1_3_,(char)puVar28[6]);
        FUN_016dd1aa(uVar9,(char *)((int)puVar28 + 0x19),0x17);
        FUN_00f34970(&local_70,&local_d0);
        iVar14 = local_68;
        puVar6 = local_6c;
        if (local_70 != (uint *)0x0) {
          local_140 = local_6c;
          goto joined_r0x00f2dd7c;
        }
        local_168 = local_68;
        if (iVar30 == 2) {
LAB_00f2df0c:
          local_140 = (uint *)FUN_00f2c2f0(2,&DAT_0187e818,&DAT_018ab990);
LAB_00f2df2c:
          FUN_00f2c6d0(puVar6,iVar14);
          local_168 = iVar14;
          goto joined_r0x00f2dd7c;
        }
        puVar24 = puVar28 + 0x12;
        local_44 = puVar24;
        if ((char)puVar28[0xc] == '\x06') goto LAB_00f2df0c;
        local_d0 = (uint *)CONCAT31(local_d0._1_3_,(char)puVar28[0xc]);
        FUN_016dd1aa(uVar9,(char *)((int)puVar28 + 0x31),0x17);
        FUN_00f3404c(&local_70,&local_d0);
        if ((short)local_70 != 0) {
          local_140 = local_6c;
          goto LAB_00f2df2c;
        }
        uVar15 = (uint)local_70._2_2_;
        if (uVar15 == 3) goto LAB_00f2df0c;
        local_14c = local_6c;
        local_c2 = SUB42(local_6c,0);
        uStack_c0 = (undefined2)((uint)local_6c >> 0x10);
        local_140 = (uint *)(uVar21 | (int)local_8c << 0x10);
        local_c4 = local_70._2_2_;
        local_c8 = iVar14;
        local_cc = puVar6;
        local_d0 = local_140;
        if (iVar30 == 3) {
          local_154 = iVar14;
          local_150 = puVar6;
        }
        else {
          local_140 = (uint *)FUN_00f2c2f0(iVar30,&DAT_0188738c,&DAT_018ab990);
          FUN_00f2c4fc(&local_d0);
          uVar15 = 3;
          local_154 = iVar14;
          local_150 = puVar6;
        }
      }
LAB_00f2d930:
      iVar30 = ((uint)((int)puVar32 - (int)puVar24) >> 3) * -0x55555555 + 1;
      while (iVar30 = iVar30 + -1, iVar30 != 0) {
        FUN_00f3615c(puVar24);
        puVar24 = puVar24 + 6;
      }
      if (iVar13 != 0) {
        thunk_FUN_016d3fb4(puVar28);
      }
LAB_00f2de88:
      puVar28 = local_104;
      if (1 < uVar15 - 3) goto code_r0x00f2de94;
LAB_00f2e148:
      iVar13 = local_108;
      pcVar25 = (char *)((int)local_104 + 1);
      iVar30 = local_108;
      while (pcVar25 = pcVar25 + -1, pcVar25 != (char *)0x0) {
        FUN_00f2c4fc(iVar30);
        iVar30 = iVar30 + 0x14;
      }
      if (local_10c != (uint *)0x0) {
        thunk_FUN_016d3fb4(iVar13);
      }
      goto LAB_00f2e1ac;
    }
  }
  iVar13 = local_108;
  if (local_104 < local_10c) {
    if (local_104 != (uint *)0x0) {
      iVar30 = (int)local_104 * 0x14;
      iVar13 = thunk_FUN_016d4ea4(local_108,iVar30);
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,iVar30);
      }
      goto LAB_00f2e118;
    }
    thunk_FUN_016d3fb4(local_108);
    iVar13 = 4;
LAB_00f2e1c0:
    if (pbVar8 != pbVar16) {
      local_140 = (uint *)FUN_00f2c2f0(puVar26,&DAT_0188738c,&DAT_018ab990);
      FUN_00f302cc(iVar13,puVar28);
      goto LAB_00f2e1ac;
    }
  }
  else {
LAB_00f2e118:
    if (puVar28 <= &DAT_0000ffff) goto LAB_00f2e1c0;
    pcVar25 = (char *)((int)puVar28 + 1);
    iVar30 = iVar13;
    while (pcVar25 = pcVar25 + -1, pcVar25 != (char *)0x0) {
      FUN_00f2c4fc(iVar30);
      iVar30 = iVar30 + 0x14;
    }
    thunk_FUN_016d3fb4(iVar13);
    local_140 = (uint *)FUN_00f2c2f0(puVar28,"",&DAT_018abad0);
LAB_00f2e1ac:
    iVar13 = 0;
    puVar28 = local_140;
  }
  iVar30 = ((uint)((int)pbVar8 - (int)pbVar16) >> 3) * -0x55555555 + 1;
  while (iVar30 = iVar30 + -1, iVar30 != 0) {
    FUN_00f3615c(pbVar16);
    pbVar16 = pbVar16 + 0x18;
  }
  if (iVar7 != 0) {
    thunk_FUN_016d3fb4(pbVar18);
  }
  cVar22 = *param_2;
LAB_00f2e224:
  if (cVar22 != '\x04') {
    FUN_00f3615c(param_2);
  }
  *param_1 = iVar13;
  param_1[1] = (int)puVar28;
  return;
code_r0x00f2de94:
  *(undefined4 *)((uint)&local_100 | 4) = local_150;
  ((undefined4 *)((uint)&local_100 | 4))[1] = local_154;
  local_f2 = SUB42(local_14c,0);
  uStack_f0 = (undefined2)((uint)local_14c >> 0x10);
  local_f4 = (undefined2)uVar15;
  local_100 = local_140;
  if (local_104 == local_10c) {
    FUN_00f30480(&local_10c);
  }
  puVar19 = (undefined4 *)(local_108 + (int)puVar28 * 0x14);
  *puVar19 = local_100;
  puVar19[1] = uStack_fc;
  puVar19[2] = uStack_f8;
  puVar19[3] = CONCAT22(local_f2,local_f4);
  puVar19[4] = CONCAT22(uStack_ee,uStack_f0);
  local_104 = (uint *)((int)puVar28 + 1);
  local_118 = pbVar16;
  goto LAB_00f2d4c0;
}

