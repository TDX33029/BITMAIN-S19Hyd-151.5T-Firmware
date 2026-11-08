// FUN_015a6814 @ 015a6814 size=7008 calls_out=31 calls_in=3
// strings: [year][month][day][hour repr:24][minute][second]Z | [year][month][day][hour repr:24][minute][second].[subsecond] | [year][month][day][hour repr:24][minute][second]Z | [year][month][day][hour repr:24][minute][second].[subsecond]Z | [year][month][day][hour repr:24][minute][second].[subsecond]Z | for the given month and yea

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015a6814(int *param_1,int param_2,uint *******param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  uint3 uVar3;
  uint *******pppppppuVar4;
  uint *******pppppppuVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  uint *******pppppppuVar13;
  uint *puVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  undefined4 extraout_r1;
  uint uVar17;
  undefined4 extraout_r1_00;
  uint uVar18;
  uint *******pppppppuVar19;
  uint *******pppppppuVar20;
  uint ******ppppppuVar21;
  uint *******pppppppuVar22;
  uint *******pppppppuVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  byte bVar27;
  uint uVar28;
  uint *******pppppppuVar29;
  uint ******ppppppuVar30;
  uint ******ppppppuVar31;
  uint uVar32;
  byte bVar33;
  uint *******pppppppuVar34;
  uint *******pppppppuVar35;
  uint *******pppppppuVar36;
  bool bVar37;
  undefined4 *local_184;
  uint *******local_180;
  undefined4 *local_17c;
  uint *******local_178;
  uint *******local_174;
  byte *local_170;
  uint *******local_154;
  uint *******local_148;
  uint *******local_134;
  uint local_120;
  int local_11c;
  uint local_118;
  uint *******local_114;
  uint *******local_110;
  uint *******local_10c;
  uint *******local_108;
  int iStack_104;
  uint *******local_100;
  uint *******local_fc;
  int local_f8;
  uint *******local_f0;
  uint *******local_ec;
  uint *******local_e8;
  uint local_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint ******appppppuStack_d0 [4];
  uint ******appppppuStack_c0 [4];
  uint *******local_b0;
  uint *******local_ac;
  undefined4 local_a8;
  uint *******local_a4;
  undefined4 *local_a0;
  uint *******local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined1 auStack_8c [12];
  uint *******local_80;
  uint *******local_7c;
  uint *******local_78;
  undefined1 auStack_74 [12];
  uint *******local_68;
  uint *******local_64;
  uint *******local_60;
  uint *******local_5c;
  uint *******local_58;
  uint *******local_54;
  uint *******local_50;
  undefined4 local_4c;
  char *local_48;
  undefined4 local_44;
  undefined1 local_40;
  int local_3c;
  int local_34;
  undefined4 local_30;
  
  local_118 = 0;
  local_11c = 4;
  local_120 = 0;
  if (param_3 != (uint *******)0x0) {
    puVar8 = (uint *)(param_1 + 1);
    pppppppuVar13 = (uint *******)((uint)&local_b0 | 4);
    puVar14 = (uint *)((uint)&local_68 | 4);
    pppppppuVar23 = (uint *******)0x0;
LAB_015a68a4:
    do {
      bVar27 = *(byte *)(param_2 + (int)pppppppuVar23);
      uVar25 = (uint)bVar27;
      local_114 = (uint *******)((int)pppppppuVar23 + 1);
      if ((uint ******)(uVar25 & 0x1f) == (uint ******)0x1f) {
        FUN_015a8900(&local_68,param_2,param_3,&local_114);
        local_b0 = local_64;
        local_ac = local_60;
        local_a8 = local_5c;
        if (local_68 == (uint *******)0x0) {
          pppppppuVar34 = (uint *******)*pppppppuVar13;
          pppppppuVar22 = (uint *******)pppppppuVar13[1];
          pppppppuVar35 = pppppppuVar13;
          pppppppuVar29 = local_64;
          goto LAB_015a6948;
        }
        local_a8._2_2_ = (undefined2)((uint)local_5c >> 0x10);
        local_a8._1_1_ = (byte)((uint)local_5c >> 8);
        local_a8._0_1_ = SUB41(local_5c,0);
        pppppppuVar22 = local_60;
        pppppppuVar34 = local_64;
        uVar7 = local_a8._2_2_;
        bVar33 = local_a8._1_1_;
        uVar6 = (undefined1)local_a8;
LAB_015a8030:
        *puVar8 = (uint)pppppppuVar34;
        param_1[2] = (int)pppppppuVar22;
        *(undefined2 *)((int)param_1 + 0xe) = uVar7;
        *(byte *)((int)param_1 + 0xd) = bVar33;
        *(undefined1 *)(param_1 + 3) = uVar6;
        *param_1 = 1;
        goto LAB_015a8088;
      }
      pppppppuVar22 = (uint *******)0x0;
      pppppppuVar34 = (uint *******)&DAT_00000004;
      pppppppuVar29 = (uint *******)0x0;
      local_60 = (uint *******)0x0;
      local_64 = (uint *******)&DAT_00000004;
      local_68 = (uint *******)0x0;
      pppppppuVar35 = local_114;
      if ((bVar27 & 0x1f) != 0) {
        FUN_0127ac28(&local_68);
        local_60 = (uint *******)&DAT_00000001;
        pppppppuVar34 = (uint *******)*puVar14;
        pppppppuVar22 = (uint *******)puVar14[1];
        *local_64 = (uint ******)(uVar25 & 0x1f);
        pppppppuVar35 = local_64;
        pppppppuVar29 = local_68;
      }
LAB_015a6948:
      uVar17 = local_118;
      uVar7 = SUB42(pppppppuVar35,0);
      uVar6 = (undefined1)((uVar25 & 0x3f) >> 5);
      bVar33 = bVar27 >> 6;
      if (pppppppuVar29 == (uint *******)&DAT_80000000) goto LAB_015a8030;
      puVar15 = &DAT_80000008;
      pppppppuVar35 = local_114;
      if (param_3 <= local_114) {
LAB_015a8060:
        local_114 = pppppppuVar35;
        *param_1 = 1;
        param_1[1] = (int)puVar15;
        param_1[2] = (int)local_154;
        goto LAB_015a8074;
      }
      pppppppuVar35 = (uint *******)((int)local_114 + 1);
      bVar1 = *(byte *)(param_2 + (int)local_114);
      pppppppuVar19 = (uint *******)(uint)bVar1;
      if ((char)bVar1 < '\0') {
        pppppppuVar20 = (uint *******)((uint)pppppppuVar19 & 0x7f);
        if (&DAT_00000004 < pppppppuVar20) {
          puVar15 = (undefined1 *)0x80000002;
          local_154 = pppppppuVar20;
        }
        else {
          if ((bVar1 & 0x7f) == 0) {
            pppppppuVar19 = (uint *******)0x0;
            pppppppuVar20 = pppppppuVar35;
            local_114 = pppppppuVar35;
            goto LAB_015a6a4c;
          }
          if (pppppppuVar35 != param_3) {
            pppppppuVar19 = (uint *******)(uint)*(byte *)(param_2 + (int)pppppppuVar35);
            pppppppuVar36 = (uint *******)((int)local_114 + 2);
            if (pppppppuVar20 != (uint *******)&DAT_00000001) {
              if (pppppppuVar36 == param_3) goto LAB_015a8060;
              pbVar16 = (byte *)(param_2 + (int)pppppppuVar36);
              pppppppuVar36 = (uint *******)((int)local_114 + 3);
              uVar2 = CONCAT11(*(byte *)(param_2 + (int)pppppppuVar35),*pbVar16);
              pppppppuVar19 = (uint *******)(uint)uVar2;
              if (pppppppuVar20 != (uint *******)&SUB_00000002) {
                if (pppppppuVar36 == param_3) goto LAB_015a8060;
                pbVar16 = (byte *)(param_2 + (int)pppppppuVar36);
                pppppppuVar36 = local_114 + 1;
                uVar3 = CONCAT21(uVar2,*pbVar16);
                pppppppuVar19 = (uint *******)(uint)uVar3;
                if (pppppppuVar20 != (uint *******)0x3) {
                  if (pppppppuVar36 == param_3) goto LAB_015a8060;
                  pbVar16 = (byte *)(param_2 + (int)pppppppuVar36);
                  pppppppuVar36 = (uint *******)((int)local_114 + 5);
                  pppppppuVar19 = (uint *******)CONCAT31(uVar3,*pbVar16);
                }
              }
            }
            pppppppuVar20 = (uint *******)((int)pppppppuVar36 + (int)pppppppuVar19);
            local_114 = pppppppuVar36;
            if (CARRY4((uint)pppppppuVar36,(uint)pppppppuVar19)) goto LAB_015a80c0;
            goto LAB_015a6a4c;
          }
        }
        goto LAB_015a8060;
      }
      pppppppuVar20 = (uint *******)((int)pppppppuVar35 + (int)pppppppuVar19);
      local_114 = pppppppuVar35;
      if (CARRY4((uint)pppppppuVar35,(uint)pppppppuVar19)) {
LAB_015a80c0:
        iVar11 = -0x7ffffffe;
LAB_015a80c4:
        *param_1 = 1;
        param_1[1] = iVar11;
        param_1[2] = (int)pppppppuVar19;
        goto LAB_015a8074;
      }
LAB_015a6a4c:
      if (param_3 < pppppppuVar20) {
LAB_015a8010:
        *param_1 = 1;
        param_1[1] = (int)&DAT_80000008;
        goto LAB_015a8074;
      }
      pppppppuVar23 = (uint *******)((int)pppppppuVar23 + param_4);
      local_170 = (byte *)(param_2 + (int)local_114);
      local_154 = pppppppuVar19;
      if (0x3f < uVar25) {
        if ((bVar27 >> 5 & 1) == 0) {
joined_r0x015a6aac:
          uVar12 = 0;
          if ((int)pppppppuVar19 < 0) {
LAB_015a810c:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar12,local_148);
          }
          if (pppppppuVar19 == (uint *******)0x0) {
            local_148 = (uint *******)&DAT_00000001;
            pppppppuVar35 = (uint *******)0x0;
          }
          else {
            local_148 = (uint *******)thunk_FUN_016d4a50(pppppppuVar19);
            if (local_148 == (uint *******)0x0) {
              uVar12 = 1;
              local_148 = pppppppuVar19;
              goto LAB_015a810c;
            }
            pppppppuVar35 = pppppppuVar19;
          }
          FUN_016dd1aa(local_148,local_170,pppppppuVar19);
          uVar25 = local_118;
          local_4c = CONCAT31(CONCAT21(local_4c._2_2_,bVar33),uVar6);
          local_68 = pppppppuVar29;
          local_64 = pppppppuVar34;
          local_60 = pppppppuVar22;
          local_5c = pppppppuVar35;
          local_58 = local_148;
          local_54 = pppppppuVar19;
          local_50 = pppppppuVar23;
          if (local_118 == local_120) {
            FUN_015afa08(&local_120);
          }
          puVar9 = (undefined4 *)(local_11c + uVar25 * 0x20);
          *puVar9 = local_68;
          puVar9[1] = local_64;
          puVar9[2] = local_60;
          puVar9[3] = local_5c;
          puVar9[4] = local_58;
          puVar9[5] = local_54;
          puVar9[6] = local_50;
          puVar9[7] = local_4c;
          local_118 = uVar25 + 1;
          local_114 = pppppppuVar20;
        }
        else {
          FUN_015a6814(&local_110,local_170,pppppppuVar19,(byte *)((int)local_114 + param_4));
          pppppppuVar35 = local_108;
          if (local_110 != (uint *******)0x0) {
            FUN_015aa188(&local_110);
            goto joined_r0x015a6aac;
          }
          local_100 = local_10c;
          local_fc = local_108;
          local_f8 = iStack_104;
          if (iStack_104 != 1) {
            iVar11 = iStack_104 + 1;
            pppppppuVar36 = local_108;
            while (iVar11 = iVar11 + -1, iVar11 != 0) {
              FUN_00a6119c(pppppppuVar36);
              pppppppuVar36 = pppppppuVar36 + 8;
            }
            if (local_100 != (uint *******)0x0) {
              thunk_FUN_016d3fb4(pppppppuVar35);
            }
            goto joined_r0x015a6aac;
          }
          pppppppuVar19 = (uint *******)*local_108;
          local_f8 = 0;
          if (pppppppuVar19 == (uint *******)0x80000011) {
                    /* WARNING: Subroutine does not return */
            FUN_00602938(0,0,&DAT_018aa0d4);
          }
          ppppppuVar21 = local_108[2];
          ppppppuVar30 = local_108[3];
          *puVar14 = (uint)local_108[1];
          puVar14[1] = (uint)ppppppuVar21;
          puVar14[2] = (uint)ppppppuVar30;
          ppppppuVar21 = local_108[5];
          ppppppuVar30 = local_108[6];
          ppppppuVar31 = local_108[7];
          puVar14[3] = (uint)local_108[4];
          puVar14[4] = (uint)ppppppuVar21;
          puVar14[5] = (uint)ppppppuVar30;
          puVar14[6] = (uint)ppppppuVar31;
          local_68 = pppppppuVar19;
          puVar9 = (undefined4 *)thunk_FUN_016d4a50(0x20);
          uVar25 = local_118;
          if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x20);
          }
          *puVar9 = local_68;
          puVar9[1] = local_64;
          puVar9[2] = local_60;
          puVar9[3] = local_5c;
          puVar9[4] = local_58;
          puVar9[5] = local_54;
          puVar9[6] = local_50;
          puVar9[7] = local_4c;
          local_98 = CONCAT31(local_98._1_3_,bVar33);
          local_b0 = (uint *******)&DAT_80000010;
          local_ac = pppppppuVar29;
          local_a8 = pppppppuVar34;
          local_a4 = pppppppuVar22;
          local_a0 = puVar9;
          local_9c = pppppppuVar23;
          if (local_118 == local_120) {
            FUN_015afa08(&local_120);
          }
          puVar9 = (undefined4 *)(local_11c + uVar25 * 0x20);
          *puVar9 = local_b0;
          puVar9[1] = local_ac;
          puVar9[2] = local_a8;
          puVar9[3] = local_a4;
          local_118 = uVar25 + 1;
          puVar9[4] = local_a0;
          puVar9[5] = local_9c;
          puVar9[6] = local_98;
          puVar9[7] = uStack_94;
          local_114 = pppppppuVar20;
          if (local_100 != (uint *******)0x0) {
            thunk_FUN_016d3fb4(pppppppuVar35);
          }
        }
        pppppppuVar23 = pppppppuVar20;
        if (param_3 <= pppppppuVar20) break;
        goto LAB_015a68a4;
      }
      if ((int)pppppppuVar22 * 4 - 9U < 0xfffffffb) {
switchD_015a6da4_caseD_7:
        uVar12 = 0;
        if ((int)pppppppuVar19 < 0) {
LAB_015a82fc:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar12,local_174);
        }
        if (pppppppuVar19 == (uint *******)0x0) {
          local_174 = (uint *******)&DAT_00000001;
          pppppppuVar35 = (uint *******)0x0;
        }
        else {
          local_174 = (uint *******)thunk_FUN_016d4a50(pppppppuVar19);
          if (local_174 == (uint *******)0x0) {
            uVar12 = 1;
            local_174 = pppppppuVar19;
            goto LAB_015a82fc;
          }
          pppppppuVar35 = pppppppuVar19;
        }
        FUN_016dd1aa(local_174,local_170,pppppppuVar19);
        uVar25 = local_118;
        local_4c = CONCAT31(CONCAT21(local_4c._2_2_,bVar33),uVar6);
        local_68 = pppppppuVar29;
        local_64 = pppppppuVar34;
        local_60 = pppppppuVar22;
        local_5c = pppppppuVar35;
        local_58 = local_174;
        local_54 = pppppppuVar19;
        local_50 = pppppppuVar23;
        if (local_118 == local_120) {
          FUN_015afa08(&local_120);
        }
        puVar9 = (undefined4 *)(local_11c + uVar25 * 0x20);
        *puVar9 = local_68;
        puVar9[1] = local_64;
        puVar9[2] = local_60;
        puVar9[3] = local_5c;
        puVar9[4] = local_58;
        puVar9[5] = local_54;
        puVar9[6] = local_50;
        puVar9[7] = local_4c;
        local_118 = uVar25 + 1;
        local_114 = pppppppuVar20;
        goto LAB_015a7f98;
      }
      iVar11 = 0;
      uVar25 = 0;
      iVar26 = 0;
      uVar24 = 0;
      do {
        uVar18 = *(uint *)((int)pppppppuVar34 + iVar11);
        uVar32 = uVar24 & 0xff;
        uVar10 = (uVar24 & 0xff) - 0x20;
        uVar24 = uVar24 + 0x20;
        uVar28 = uVar18 >> (0x20 - uVar32 & 0xff);
        iVar11 = iVar11 + 4;
        if (-1 < (int)uVar10) {
          uVar28 = uVar18 << (uVar10 & 0xff);
        }
        uVar18 = uVar18 << uVar32;
        if (-1 < (int)uVar10) {
          uVar18 = 0;
        }
        bVar37 = CARRY4(uVar18,uVar25);
        uVar25 = uVar18 + uVar25;
        iVar26 = uVar28 + iVar26 + (uint)bVar37;
      } while ((int)pppppppuVar22 * 4 != iVar11);
      if ((uint)(uVar25 < 0x100) <= (uint)-iVar26) goto switchD_015a6da4_caseD_7;
      switch(uVar25 & 0xff) {
      case 1:
        if (pppppppuVar19 != (uint *******)&DAT_00000001) {
          iVar11 = -0x7fffffff;
          goto LAB_015a80c4;
        }
        local_68 = (uint *******)&DAT_80000000;
        local_60 = (uint *******)CONCAT31(local_60._1_3_,*local_170 != 0);
        local_64 = pppppppuVar23;
        if (local_118 == local_120) {
          FUN_015afa08(&local_120);
        }
        pppppppuVar19 = (uint *******)&DAT_00000001;
        puVar9 = (undefined4 *)(local_11c + uVar17 * 0x20);
        *puVar9 = local_68;
        puVar9[1] = local_64;
        puVar9[2] = local_60;
        puVar9[3] = local_5c;
        puVar9[4] = local_58;
        puVar9[5] = local_54;
        puVar9[6] = local_50;
        puVar9[7] = local_4c;
        local_118 = uVar17 + 1;
        break;
      case 2:
        if (pppppppuVar19 == (uint *******)0x0) {
          local_ec = (uint *******)&DAT_00000004;
          uVar6 = 1;
          local_e8 = (uint *******)0x0;
          local_f0 = (uint *******)0x0;
        }
        else if ((char)*local_170 < '\0') {
          FUN_01401878(&local_68,pppppppuVar19,1,1);
          pppppppuVar35 = local_60;
          if (local_68 == (uint *******)&DAT_00000001) goto LAB_015a8328;
          FUN_016dd1aa(local_60,local_170,pppppppuVar19);
          iVar11 = 1 - (int)pppppppuVar19;
          bVar37 = true;
          do {
            bVar27 = *(byte *)((int)pppppppuVar35 - iVar11);
            *(byte *)((int)pppppppuVar35 - iVar11) = ~bVar27;
            if (bVar37) {
              *(byte *)((int)pppppppuVar35 - iVar11) = -bVar27;
            }
            bVar37 = bVar37 && bVar27 == 0;
            iVar11 = iVar11 + 1;
          } while (iVar11 != 1);
          FUN_015a8b90(&local_68,pppppppuVar35,pppppppuVar19);
          pppppppuVar22 = local_60;
          local_f0 = local_68;
          local_ec = local_64;
          local_e8 = local_60;
          thunk_FUN_016d3fb4(pppppppuVar35);
          uVar6 = pppppppuVar22 == (uint *******)0x0;
        }
        else {
          FUN_015a8b90(&local_68,local_170,pppppppuVar19);
          local_f0 = local_68;
          local_ec = local_64;
          local_e8 = local_60;
          uVar6 = 2;
          if (local_60 == (uint *******)0x0) {
            uVar6 = 1;
          }
        }
        uVar17 = local_118;
        *puVar14 = (uint)local_f0;
        puVar14[1] = (uint)local_ec;
        puVar14[2] = (uint)local_e8;
        local_58 = (uint *******)CONCAT31(local_58._1_3_,uVar6);
        local_68 = (uint *******)0x80000001;
        local_54 = pppppppuVar23;
        if (local_118 == local_120) {
          FUN_015afa08(&local_120);
        }
        goto LAB_015a7f54;
      case 3:
        if (pppppppuVar19 == (uint *******)0x0) {
          local_54 = (uint *******)0x0;
          local_5c = (uint *******)0x0;
          local_64 = (uint *******)0x0;
          local_60 = (uint *******)&DAT_00000001;
          local_68 = (uint *******)0x80000002;
          local_58 = pppppppuVar23;
          FUN_015a8e34(&local_120,&local_68);
          pppppppuVar19 = (uint *******)0x0;
          break;
        }
        pppppppuVar20 = (uint *******)((int)pppppppuVar19 + -1);
        FUN_01401878(&local_68,pppppppuVar20,1,1);
        pppppppuVar22 = local_60;
        pppppppuVar35 = local_64;
        if (local_68 == (uint *******)&DAT_00000001) goto LAB_015a8328;
        FUN_016dd1aa(local_60,local_170 + 1,pppppppuVar20);
        uVar25 = local_118;
        pppppppuVar36 = (uint *******)((int)pppppppuVar20 * 8 - (uint)*local_170);
        if ((uint)((int)pppppppuVar20 * 8) < (uint)*local_170) {
          *param_1 = 1;
          param_1[1] = -0x7ffffffa;
          param_1[2] = (int)pppppppuVar36;
          if (pppppppuVar35 != (uint *******)0x0) {
            thunk_FUN_016d3fb4(pppppppuVar22);
          }
          goto LAB_015a8074;
        }
        local_68 = (uint *******)0x80000002;
        local_64 = pppppppuVar35;
        local_60 = pppppppuVar22;
        local_5c = pppppppuVar20;
        local_58 = pppppppuVar23;
        local_54 = pppppppuVar36;
        if (local_118 == local_120) {
          FUN_015afa08(&local_120);
        }
        puVar9 = (undefined4 *)(local_11c + uVar25 * 0x20);
        *puVar9 = local_68;
        puVar9[1] = local_64;
        puVar9[2] = local_60;
        puVar9[3] = local_5c;
        puVar9[4] = local_58;
        puVar9[5] = local_54;
        puVar9[6] = local_50;
        puVar9[7] = local_4c;
        goto LAB_015a7880;
      case 4:
        FUN_01401878(&local_68,pppppppuVar19,1,1);
        pppppppuVar22 = local_60;
        pppppppuVar35 = local_64;
        if (local_68 == (uint *******)&DAT_00000001) {
LAB_015a8328:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(local_64,local_60);
        }
        FUN_016dd1aa(local_60,local_170,pppppppuVar19);
        uVar25 = local_118;
        local_68 = (uint *******)0x80000003;
        local_64 = pppppppuVar35;
        local_60 = pppppppuVar22;
        local_5c = pppppppuVar19;
        local_58 = pppppppuVar23;
        if (local_118 == local_120) {
          FUN_015afa08(&local_120);
        }
        puVar9 = (undefined4 *)(local_11c + uVar25 * 0x20);
        *puVar9 = local_68;
        puVar9[1] = local_64;
        puVar9[2] = local_60;
        puVar9[3] = local_5c;
        puVar9[4] = local_58;
        puVar9[5] = local_54;
        puVar9[6] = local_50;
        puVar9[7] = local_4c;
        local_118 = uVar25 + 1;
        break;
      case 5:
        local_68 = (uint *******)&DAT_80000004;
        local_64 = pppppppuVar23;
        if (local_118 == local_120) {
          FUN_015afa08(&local_120);
        }
LAB_015a7f54:
        puVar9 = (undefined4 *)(local_11c + uVar17 * 0x20);
        *puVar9 = local_68;
        puVar9[1] = local_64;
        puVar9[2] = local_60;
        puVar9[3] = local_5c;
        puVar9[4] = local_58;
        puVar9[5] = local_54;
        puVar9[6] = local_50;
        puVar9[7] = local_4c;
        local_118 = uVar17 + 1;
        break;
      case 6:
        if (pppppppuVar19 == (uint *******)0x0) goto LAB_015a8010;
        ppppppuVar21 = (uint ******)(uint)*local_170;
        local_60 = (uint *******)0x0;
        local_64 = (uint *******)&DAT_00000004;
        local_68 = (uint *******)0x0;
        if (ppppppuVar21 != (uint ******)0x0) {
          FUN_0127ac28(&local_68);
          *local_64 = ppppppuVar21;
        }
        local_60 = (uint *******)(uint)(ppppppuVar21 != (uint ******)0x0);
        pppppppuVar35 = (uint *******)0x0;
        pppppppuVar22 = (uint *******)&DAT_00000004;
        pppppppuVar20 = (uint *******)0x0;
        local_a8 = (uint *******)0x0;
        local_110 = local_68;
        local_10c = local_64;
        local_108 = local_60;
        local_ac = (uint *******)&DAT_00000004;
        local_b0 = (uint *******)0x0;
        local_100 = (uint *******)&DAT_00000001;
        if ((uint ******)0x27 < ppppppuVar21) {
          if (ppppppuVar21 < (uint ******)0x50) {
            FUN_015a8e94(&local_68);
            pppppppuVar20 = local_60;
            pppppppuVar22 = local_64;
            pppppppuVar35 = local_68;
            puVar15 = auStack_8c;
            FUN_015a1104(puVar15,extraout_r1,0x28,0);
          }
          else {
            FUN_015a1104(&local_80,local_64,2,0);
            pppppppuVar20 = local_78;
            pppppppuVar22 = local_7c;
            pppppppuVar35 = local_80;
            puVar15 = auStack_74;
            FUN_015a1104(puVar15,extraout_r1_00,0x50,0);
          }
          FUN_015a8ec8(&local_110,puVar15);
        }
        FUN_0127ad88(&local_b0);
        pppppppuVar5 = local_108;
        pppppppuVar4 = local_10c;
        pppppppuVar36 = local_110;
        *local_ac = (uint ******)pppppppuVar35;
        local_ac[1] = (uint ******)pppppppuVar22;
        local_ac[2] = (uint ******)pppppppuVar20;
        local_a8 = (uint *******)0x1;
        if (local_b0 == (uint *******)&DAT_00000001) {
          FUN_0127ad88(&local_b0);
        }
        local_ac[3] = (uint ******)pppppppuVar36;
        local_ac[4] = (uint ******)pppppppuVar4;
        local_ac[5] = (uint ******)pppppppuVar5;
        local_a8 = (uint *******)&SUB_00000002;
        if (pppppppuVar19 != (uint *******)&DAT_00000001) {
          iVar11 = 0;
          pppppppuVar35 = local_ac;
          do {
            pppppppuVar22 = local_a8;
            FUN_015a8900(&local_68,local_170,pppppppuVar19,&local_100);
            pppppppuVar4 = local_5c;
            pppppppuVar36 = local_60;
            pppppppuVar20 = local_64;
            if (local_68 == (uint *******)&DAT_00000001) {
              *param_1 = 1;
              param_1[1] = (int)local_64;
              param_1[2] = (int)local_60;
              param_1[3] = (int)local_5c;
              FUN_0111d548(&local_b0);
              goto LAB_015a8074;
            }
            if (pppppppuVar22 == local_b0) {
              FUN_0127ad88(&local_b0);
              pppppppuVar35 = local_ac;
            }
            local_a8 = (uint *******)((int)pppppppuVar22 + 1);
            *(uint ********)((int)pppppppuVar35 + iVar11 + 0x18) = pppppppuVar20;
            *(uint ********)((int)pppppppuVar35 + iVar11 + 0x1c) = pppppppuVar36;
            *(uint ********)((int)pppppppuVar35 + iVar11 + 0x20) = pppppppuVar4;
            iVar11 = iVar11 + 0xc;
          } while (local_100 < pppppppuVar19);
        }
        local_64 = local_b0;
        local_60 = local_ac;
        local_5c = local_a8;
        local_68 = (uint *******)0x80000005;
        local_58 = pppppppuVar23;
        FUN_015a8e34(&local_120,&local_68);
        break;
      default:
        goto switchD_015a6da4_caseD_7;
      case 0xc:
        FUN_01401878(&local_68,pppppppuVar19,1,1);
        pppppppuVar22 = local_60;
        pppppppuVar35 = local_64;
        if (local_68 == (uint *******)&DAT_00000001) goto LAB_015a8328;
        FUN_016dd1aa(local_60,local_170,pppppppuVar19);
        FUN_00fab1e0(&local_68,pppppppuVar22,pppppppuVar19);
        uVar25 = local_118;
        if (local_68 == (uint *******)&DAT_00000001) {
LAB_015a8164:
          param_1[2] = (int)local_64;
          param_1[3] = (int)local_60;
          *param_1 = 1;
          param_1[1] = -0x7ffffffd;
          if (pppppppuVar35 != (uint *******)0x0) {
            thunk_FUN_016d3fb4(pppppppuVar22);
          }
          goto LAB_015a8074;
        }
        local_68 = (uint *******)0x80000006;
        local_64 = pppppppuVar35;
        local_60 = pppppppuVar22;
        local_5c = pppppppuVar19;
        local_58 = pppppppuVar23;
        if (local_118 == local_120) {
          FUN_015afa08(&local_120);
        }
        goto LAB_015a7608;
      case 0x10:
        FUN_015a6814(param_1,local_170,pppppppuVar19,(byte *)((int)local_114 + param_4));
        uVar25 = local_118;
        if (*param_1 == 0) {
          uVar17 = param_1[2];
          uVar24 = param_1[3];
          *puVar14 = *puVar8;
          puVar14[1] = uVar17;
          puVar14[2] = uVar24;
          local_68 = (uint *******)0x8000000e;
          local_58 = pppppppuVar23;
          if (local_118 == local_120) {
            FUN_015afa08(&local_120);
          }
          goto LAB_015a7860;
        }
        goto LAB_015a8074;
      case 0x11:
        FUN_015a6814(param_1,local_170,pppppppuVar19,(byte *)((int)local_114 + param_4));
        uVar25 = local_118;
        if (*param_1 != 0) goto LAB_015a8074;
        uVar17 = param_1[2];
        uVar24 = param_1[3];
        *puVar14 = *puVar8;
        puVar14[1] = uVar17;
        puVar14[2] = uVar24;
        local_68 = (uint *******)&DAT_8000000f;
        local_58 = pppppppuVar23;
        if (local_118 == local_120) {
          FUN_015afa08(&local_120);
        }
        goto LAB_015a7860;
      case 0x13:
        local_a8 = (uint *******)0x0;
        local_ac = (uint *******)&DAT_00000001;
        local_b0 = (uint *******)0x0;
        if (pppppppuVar19 != (uint *******)0x0) {
          local_134 = (uint *******)&DAT_00000001;
          pppppppuVar35 = pppppppuVar19;
          do {
            pppppppuVar22 = local_a8;
            bVar27 = *local_170;
            iVar11 = FUN_015a8f1c(bVar27);
            if (iVar11 == 0) {
              *param_1 = 1;
              param_1[1] = (int)&DAT_80000004;
              if (local_b0 != (uint *******)0x0) {
                thunk_FUN_016d3fb4(local_134);
              }
              goto LAB_015a8074;
            }
            uVar25 = 2;
            if ((uint)(int)(char)bVar27 < 0x80000000) {
              uVar25 = 1;
            }
            if ((uint)((int)local_b0 - (int)pppppppuVar22) < uVar25) {
              FUN_015afa68(&local_b0,pppppppuVar22,uVar25,1,1);
              pbVar16 = (byte *)((int)local_ac + (int)local_a8);
              local_134 = local_ac;
            }
            else {
              pbVar16 = (byte *)((int)local_134 + (int)pppppppuVar22);
            }
            if (0x7fffffff < (uint)(int)(char)bVar27) {
              pbVar16[1] = bVar27 & 0xbf;
              bVar27 = bVar27 >> 6 | 0xc0;
            }
            local_a8 = (uint *******)((int)pppppppuVar22 + uVar25);
            pppppppuVar35 = (uint *******)((int)pppppppuVar35 + -1);
            *pbVar16 = bVar27;
            local_170 = local_170 + 1;
          } while (pppppppuVar35 != (uint *******)0x0);
        }
        local_64 = local_b0;
        local_60 = local_ac;
        local_5c = local_a8;
        local_68 = (uint *******)0x80000007;
        local_58 = pppppppuVar23;
        FUN_015a8e34(&local_120,&local_68);
        break;
      case 0x14:
        FUN_01401878(&local_68,pppppppuVar19,1,1);
        pppppppuVar22 = local_60;
        pppppppuVar35 = local_64;
        if (local_68 == (uint *******)&DAT_00000001) goto LAB_015a8328;
        FUN_016dd1aa(local_60,local_170,pppppppuVar19);
        FUN_00fab1e0(&local_68,pppppppuVar22,pppppppuVar19);
        uVar25 = local_118;
        if (local_68 == (uint *******)&DAT_00000001) goto LAB_015a8164;
        local_68 = (uint *******)&DAT_80000008;
        local_64 = pppppppuVar35;
        local_60 = pppppppuVar22;
        local_5c = pppppppuVar19;
        local_58 = pppppppuVar23;
        if (local_118 == local_120) {
          FUN_015afa08(&local_120);
        }
        goto LAB_015a7608;
      case 0x16:
        FUN_015afae8(&local_e0,local_170,local_170 + (int)pppppppuVar19);
        uVar25 = local_118;
        *puVar14 = local_e0;
        puVar14[1] = uStack_dc;
        puVar14[2] = uStack_d8;
        local_68 = (uint *******)0x80000009;
        local_58 = pppppppuVar23;
        if (local_118 == local_120) {
          FUN_015afa08(&local_120);
        }
LAB_015a7860:
        puVar9 = (undefined4 *)(local_11c + uVar25 * 0x20);
        *puVar9 = local_68;
        puVar9[1] = local_64;
        puVar9[2] = local_60;
        puVar9[3] = local_5c;
        puVar9[4] = local_58;
        puVar9[5] = local_54;
        puVar9[6] = local_50;
        puVar9[7] = local_4c;
LAB_015a7880:
        local_118 = uVar25 + 1;
        break;
      case 0x17:
        if (pppppppuVar19 == (uint *******)&DAT_0000000d) {
          FUN_015afae8(&local_110,local_170,local_170 + 0xd);
          if (&SUB_00000002 < local_108) {
            if (-0x41 < (char)*(byte *)((int)local_10c + 2)) goto LAB_015a78d0;
          }
          else if (local_108 == (uint *******)&SUB_00000002) {
LAB_015a78d0:
            pppppppuVar35 = (uint *******)((int)local_10c + 1);
            if (*(byte *)local_10c != 0x2b) {
              pppppppuVar35 = local_10c;
            }
            uVar25 = *(byte *)pppppppuVar35 - 0x30;
            if (uVar25 < 10) {
              if (*(byte *)local_10c != 0x2b) {
                uVar17 = *(byte *)((int)pppppppuVar35 + 1) - 0x30;
                if (9 < uVar17) goto LAB_015a8198;
                uVar25 = uVar17 + uVar25 * 10;
              }
              local_fc = (uint *******)&SUB_00000002;
              local_100 = (uint *******)"20";
              if (0x31 < (uVar25 & 0xff)) {
                local_100 = (uint *******)"19";
              }
              local_5c = (uint *******)&DAT_006043a8;
              local_60 = (uint *******)&local_110;
              local_64 = (uint *******)&DAT_0157d360;
              local_68 = (uint *******)&local_100;
              FUN_00600d2c(&local_b0,&DAT_00570dec,&local_68);
              pppppppuVar36 = local_a8;
              pppppppuVar19 = local_ac;
              pppppppuVar35 = local_b0;
              local_40 = 0;
              local_3c = 9;
              local_44 = 0x31;
              local_4c = 0;
              local_48 = "[year][month][day][hour repr:24][minute][second]Z";
              local_50 = (uint *******)0x40f214;
              local_54 = (uint *******)0x40f1e3;
              local_60 = (uint *******)0x0;
              local_68 = (uint *******)0x0;
              FUN_015ad700(&local_b0,&local_68);
              pppppppuVar5 = local_a4;
              pppppppuVar4 = local_a8;
              pppppppuVar20 = local_ac;
              pppppppuVar22 = local_b0;
              if (local_b0 == (uint *******)&DAT_00000007) {
                if (2 < local_3c - 7U) goto LAB_015a7a18;
              }
              else {
                local_184 = local_a0;
                local_180 = local_9c;
                if (local_3c - 7U < 3) goto LAB_015a8350;
LAB_015a7a18:
                if ((0xfffffffd < local_3c - 3U) && (local_34 != 0)) {
                  thunk_FUN_016d3fb4(local_30);
                }
                if (pppppppuVar22 != (uint *******)&DAT_00000007) {
LAB_015a8350:
                  local_58 = (uint *******)local_184;
                  local_64 = pppppppuVar20;
                  local_5c = pppppppuVar5;
                  local_60 = pppppppuVar4;
                  local_68 = pppppppuVar22;
                  local_54 = local_180;
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_68,&DAT_018aa0f4,&DAT_018aa094);
                }
              }
              FUN_015a9594(&local_68,pppppppuVar4,pppppppuVar5,pppppppuVar19,pppppppuVar36);
              uVar25 = local_118;
              if (local_68 != (uint *******)&SUB_00000002) {
                *param_1 = 1;
                param_1[1] = (int)pppppppuVar35;
                param_1[2] = (int)pppppppuVar19;
                param_1[3] = (int)pppppppuVar36;
                if (pppppppuVar20 != (uint *******)0x0) {
                  thunk_FUN_016d3fb4(pppppppuVar4);
                }
                if (local_110 != (uint *******)0x0) {
                  thunk_FUN_016d3fb4(local_10c);
                }
                goto LAB_015a8074;
              }
              local_a8 = (uint *******)*puVar14;
              local_a4 = (uint *******)puVar14[1];
              local_a0 = (undefined4 *)puVar14[2];
              local_b0 = (uint *******)0x8000000a;
              local_ac = pppppppuVar23;
              if (local_118 == local_120) {
                FUN_015afa08(&local_120);
              }
              puVar9 = (undefined4 *)(local_11c + uVar25 * 0x20);
              *puVar9 = local_b0;
              puVar9[1] = local_ac;
              puVar9[2] = local_a8;
              puVar9[3] = local_a4;
              puVar9[4] = local_a0;
              puVar9[5] = local_9c;
              puVar9[6] = local_98;
              puVar9[7] = uStack_94;
              local_118 = uVar25 + 1;
              if (pppppppuVar20 != (uint *******)0x0) {
                thunk_FUN_016d3fb4(pppppppuVar4);
              }
              if (pppppppuVar35 != (uint *******)0x0) {
                thunk_FUN_016d3fb4(pppppppuVar19);
              }
              if (local_110 != (uint *******)0x0) {
                thunk_FUN_016d3fb4(local_10c);
              }
              pppppppuVar19 = (uint *******)&DAT_0000000d;
              break;
            }
          }
LAB_015a8198:
          *puVar8 = (uint)local_110;
          param_1[2] = (int)local_10c;
          param_1[3] = (int)local_108;
          *param_1 = 1;
          goto LAB_015a8074;
        }
        local_64 = (uint *******)&LAB_00fac484;
        local_68 = (uint *******)&local_b0;
        local_b0 = pppppppuVar19;
        FUN_00600d2c(appppppuStack_d0,&DAT_00590e71,&local_68);
        pppppppuVar23 = appppppuStack_d0;
LAB_015a811c:
        ppppppuVar21 = pppppppuVar23[1];
        ppppppuVar30 = pppppppuVar23[2];
        *puVar8 = (uint)*pppppppuVar23;
        param_1[2] = (int)ppppppuVar21;
        param_1[3] = (int)ppppppuVar30;
        goto LAB_015a8128;
      case 0x18:
        if (pppppppuVar19 < &DAT_0000000f) {
          local_64 = (uint *******)&LAB_00fac484;
          local_68 = (uint *******)&local_b0;
          local_b0 = pppppppuVar19;
          FUN_00600d2c(appppppuStack_c0,&DAT_00590e71,&local_68);
          pppppppuVar23 = appppppuStack_c0;
          goto LAB_015a811c;
        }
        FUN_01401878(&local_68,pppppppuVar19,1,1);
        pppppppuVar22 = local_60;
        pppppppuVar35 = local_64;
        if (local_68 == (uint *******)&DAT_00000001) goto LAB_015a8328;
        FUN_016dd1aa(local_60,local_170,pppppppuVar19);
        FUN_00fab1e0(&local_68,pppppppuVar22,pppppppuVar19);
        pppppppuVar36 = local_60;
        pppppppuVar20 = local_64;
        if (local_68 == (uint *******)0x0) {
          *(undefined4 *)((uint)&local_110 | 4) = pppppppuVar22;
          ((undefined4 *)((uint)&local_110 | 4))[1] = pppppppuVar19;
          local_110 = pppppppuVar35;
          if (((uint)*pppppppuVar22 & 0x80808080) == 0) {
            pppppppuVar35 =
                 (uint *******)(((uint)((int)pppppppuVar22 + 3) & 0xfffffffc) - (int)pppppppuVar22);
            if (pppppppuVar35 == (uint *******)0x0) {
              pppppppuVar35 = (uint *******)&DAT_00000004;
            }
            for (; pppppppuVar35 < pppppppuVar19 + -1; pppppppuVar35 = pppppppuVar35 + 1) {
              if ((*(uint *)((int)pppppppuVar22 + (int)pppppppuVar35) & 0x80808080) != 0)
              goto LAB_015a8118;
            }
            if ((*(uint *)((int)pppppppuVar22 + (int)(pppppppuVar19 + -1)) & 0x80808080) == 0) {
              iVar11 = FUN_00fb727c(0x2e,pppppppuVar22,pppppppuVar19);
              pppppppuVar35 = pppppppuVar19;
              if (iVar11 != 1) {
                FUN_015aa0e4(&local_110);
                pppppppuVar35 = local_108;
              }
              if (pppppppuVar35 < &DAT_00000019) {
                pppppppuVar22 = local_10c;
                do {
                  if ((pppppppuVar35 != (uint *******)&DAT_00000001) &&
                     ((pppppppuVar35 == (uint *******)0x0 ||
                      ((char)((byte *)((int)pppppppuVar22 + (int)pppppppuVar35))[-1] < -0x40)))) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa464(&DAT_004186db,0x2c,&DAT_018aa0c4);
                  }
                  if (pppppppuVar35 == local_110) {
                    FUN_015afa68(&local_110,pppppppuVar35,1,1,1);
                    pppppppuVar22 = local_10c;
                  }
                  pbVar16 = (byte *)((int)pppppppuVar22 + (int)pppppppuVar35);
                  *(byte *)((int)pppppppuVar22 + (int)pppppppuVar35) = pbVar16[-1];
                  pppppppuVar35 = (uint *******)((int)pppppppuVar35 + 1);
                  pbVar16[-1] = 0x30;
                  local_108 = pppppppuVar35;
                } while (pppppppuVar35 != (uint *******)&DAT_00000019);
                pppppppuVar35 = (uint *******)&DAT_00000019;
              }
              local_40 = 0;
              local_3c = 9;
              local_44 = 0x3d;
              local_4c = 0;
              local_60 = (uint *******)0x0;
              local_68 = (uint *******)0x0;
              local_48 = "[year][month][day][hour repr:24][minute][second].[subsecond]Z";
              local_54 = (uint *******)0x40f29e;
              local_50 = (uint *******)0x40f2db;
              FUN_015ad700(&local_b0,&local_68);
              pppppppuVar4 = local_a4;
              pppppppuVar36 = local_a8;
              pppppppuVar20 = local_ac;
              pppppppuVar22 = local_b0;
              if (local_b0 == (uint *******)&DAT_00000007) {
                if (2 < local_3c - 7U) goto LAB_015a7c10;
              }
              else {
                local_17c = local_a0;
                local_178 = local_9c;
                if (local_3c - 7U < 3) goto LAB_015a83c0;
LAB_015a7c10:
                if ((0xfffffffd < local_3c - 3U) && (local_34 != 0)) {
                  thunk_FUN_016d3fb4(local_30);
                }
                if (pppppppuVar22 != (uint *******)&DAT_00000007) {
LAB_015a83c0:
                  local_58 = (uint *******)local_17c;
                  local_5c = pppppppuVar4;
                  local_60 = pppppppuVar36;
                  local_64 = pppppppuVar20;
                  local_68 = pppppppuVar22;
                  local_54 = local_178;
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_68,&DAT_018aa0f4,&DAT_018aa0b4);
                }
              }
              pppppppuVar22 = local_10c;
              FUN_015a9594(&local_68,pppppppuVar36,pppppppuVar4,local_10c,pppppppuVar35);
              uVar25 = local_118;
              if (local_68 != (uint *******)&SUB_00000002) {
                *puVar8 = (uint)local_110;
                param_1[2] = (int)local_10c;
                param_1[3] = (int)local_108;
                *param_1 = 1;
                if (pppppppuVar20 != (uint *******)0x0) {
                  thunk_FUN_016d3fb4(pppppppuVar36);
                }
                goto LAB_015a8074;
              }
              local_a8 = (uint *******)*puVar14;
              local_a4 = (uint *******)puVar14[1];
              local_a0 = (undefined4 *)puVar14[2];
              local_b0 = (uint *******)&DAT_8000000b;
              local_ac = pppppppuVar23;
              if (local_118 == local_120) {
                FUN_015afa08(&local_120);
              }
              puVar9 = (undefined4 *)(local_11c + uVar25 * 0x20);
              *puVar9 = local_b0;
              puVar9[1] = local_ac;
              puVar9[2] = local_a8;
              puVar9[3] = local_a4;
              puVar9[4] = local_a0;
              puVar9[5] = local_9c;
              puVar9[6] = local_98;
              puVar9[7] = uStack_94;
              local_118 = uVar25 + 1;
              if (pppppppuVar20 != (uint *******)0x0) {
                thunk_FUN_016d3fb4(pppppppuVar36);
              }
              if (local_110 != (uint *******)0x0) {
                thunk_FUN_016d3fb4(pppppppuVar22);
              }
              break;
            }
          }
LAB_015a8118:
          pppppppuVar23 = (uint *******)&local_110;
          goto LAB_015a811c;
        }
        thunk_FUN_016d3fb4(pppppppuVar22);
        param_1[2] = (int)pppppppuVar20;
        param_1[3] = (int)pppppppuVar36;
        param_1[1] = -0x7ffffffd;
LAB_015a8128:
        *param_1 = 1;
LAB_015a8074:
        if (pppppppuVar29 != (uint *******)0x0) {
          thunk_FUN_016d3fb4(pppppppuVar34);
        }
LAB_015a8088:
        iVar26 = local_118 + 1;
        iVar11 = local_11c;
        while (iVar26 = iVar26 + -1, iVar26 != 0) {
          FUN_00a6119c(iVar11);
          iVar11 = iVar11 + 0x20;
        }
        goto joined_r0x015a80b4;
      case 0x1c:
        FUN_01401878(&local_68,pppppppuVar19,1,1);
        pppppppuVar22 = local_60;
        pppppppuVar35 = local_64;
        if (local_68 == (uint *******)&DAT_00000001) goto LAB_015a8328;
        FUN_016dd1aa(local_60,local_170,pppppppuVar19);
        FUN_00fab1e0(&local_68,pppppppuVar22,pppppppuVar19);
        uVar25 = local_118;
        if (local_68 == (uint *******)&DAT_00000001) goto LAB_015a8164;
        local_68 = (uint *******)&DAT_8000000c;
        local_64 = pppppppuVar35;
        local_60 = pppppppuVar22;
        local_5c = pppppppuVar19;
        local_58 = pppppppuVar23;
        if (local_118 == local_120) {
          FUN_015afa08(&local_120);
        }
        goto LAB_015a7608;
      case 0x1e:
        FUN_01401878(&local_68,pppppppuVar19,1,1);
        pppppppuVar22 = local_60;
        pppppppuVar35 = local_64;
        if (local_68 == (uint *******)&DAT_00000001) goto LAB_015a8328;
        FUN_016dd1aa(local_60,local_170,pppppppuVar19);
        FUN_00fab1e0(&local_68,pppppppuVar22,pppppppuVar19);
        uVar25 = local_118;
        if (local_68 == (uint *******)&DAT_00000001) goto LAB_015a8164;
        local_68 = (uint *******)&DAT_8000000d;
        local_64 = pppppppuVar35;
        local_60 = pppppppuVar22;
        local_5c = pppppppuVar19;
        local_58 = pppppppuVar23;
        if (local_118 == local_120) {
          FUN_015afa08(&local_120);
        }
LAB_015a7608:
        puVar9 = (undefined4 *)(local_11c + uVar25 * 0x20);
        *puVar9 = local_68;
        puVar9[1] = local_64;
        puVar9[2] = local_60;
        puVar9[3] = local_5c;
        puVar9[4] = local_58;
        puVar9[5] = local_54;
        puVar9[6] = local_50;
        puVar9[7] = local_4c;
        local_118 = uVar25 + 1;
      }
      pppppppuVar20 = (uint *******)((int)local_114 + (int)pppppppuVar19);
      local_154 = pppppppuVar19;
      local_114 = pppppppuVar20;
      if (pppppppuVar29 != (uint *******)0x0) {
        thunk_FUN_016d3fb4(pppppppuVar34);
      }
LAB_015a7f98:
      pppppppuVar23 = pppppppuVar20;
    } while (pppppppuVar20 < param_3);
    if (local_118 != 0) {
      param_1[2] = local_11c;
      param_1[3] = local_118;
      *puVar8 = local_120;
      *param_1 = 0;
      return;
    }
  }
  *param_1 = 1;
  param_1[1] = -0x80000000;
joined_r0x015a80b4:
  if (local_120 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_11c);
  return;
}

