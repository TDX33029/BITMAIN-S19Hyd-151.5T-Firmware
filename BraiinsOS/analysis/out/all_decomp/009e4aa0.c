// FUN_009e4aa0 @ 009e4aa0 size=8408 calls_out=30 calls_in=5
// strings: <unknown time> | <unknown time> | stderr | stderr

/* WARNING: Type propagation algorithm not settling */

void FUN_009e4aa0(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint *******pppppppuVar20;
  undefined4 *puVar21;
  undefined4 uVar22;
  int *piVar23;
  int *piVar24;
  uint *******extraout_r1;
  uint *puVar25;
  uint ******ppppppuVar26;
  uint *****pppppuVar27;
  int *piVar28;
  undefined *puVar29;
  uint *******pppppppuVar30;
  undefined4 uVar31;
  uint uVar32;
  int *piVar33;
  code *pcVar34;
  uint uVar35;
  int iVar36;
  uint ******ppppppuVar37;
  uint uVar38;
  uint uVar39;
  undefined4 uVar40;
  uint uVar41;
  uint *******unaff_r9;
  char *pcVar42;
  uint *puVar43;
  uint *******pppppppuVar44;
  int *piVar45;
  uint ******ppppppuVar46;
  bool bVar47;
  undefined8 uVar48;
  int local_178;
  int local_170;
  int local_12c;
  undefined4 local_128;
  undefined4 local_124;
  int *local_120;
  int **local_11c;
  undefined *local_118;
  byte local_114;
  char *local_100;
  uint local_fc;
  uint *******local_f8;
  code *local_f4;
  uint *******local_f0;
  code *pcStack_ec;
  uint *******local_e8;
  uint *******local_e4;
  uint *******local_e0;
  uint *******local_dc;
  uint *******local_d8;
  uint *******local_d4;
  uint *******local_d0;
  uint ******ppppppuStack_cc;
  uint *******pppppppuStack_c8;
  uint *****local_c0;
  uint ******local_bc;
  undefined4 local_b8;
  byte local_b4;
  byte bStack_b3;
  undefined2 uStack_b2;
  uint *******local_b0;
  code *local_ac;
  uint *******local_a8;
  uint *******local_a4;
  byte local_a0;
  byte local_9f;
  uint uStack_9e;
  undefined3 uStack_9a;
  undefined4 local_97;
  undefined4 local_93;
  undefined4 local_88;
  byte bStack_84;
  byte bStack_83;
  undefined2 uStack_82;
  uint *******pppppppuStack_80;
  byte bStack_7c;
  byte local_7b;
  undefined2 uStack_7a;
  uint *******pppppppuStack_78;
  uint *******local_74;
  byte local_70;
  uint local_6f;
  undefined4 uStack_6b;
  undefined4 local_67;
  undefined4 local_63;
  uint *******local_58;
  uint *******local_54;
  uint *******local_50;
  uint ******local_4c;
  uint *******local_48;
  uint *******local_44;
  undefined4 local_40;
  byte local_3c;
  byte bStack_3b;
  undefined2 uStack_3a;
  uint *******local_38;
  code *local_34;
  uint *******local_30;
  code *local_2c;
  
  uVar48 = thunk_FUN_016de0ee(param_1,0x90);
  piVar45 = (int *)((int)uVar48 + (int)((ulonglong)uVar48 >> 0x20));
  if ((char)piVar45[4] != '\x01') {
    if ((char)piVar45[4] == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    FUN_015e8e6c(piVar45,&DAT_00a03638);
    *(undefined1 *)(piVar45 + 4) = 1;
  }
  iVar15 = *piVar45;
  piVar23 = (int *)param_1[4];
  piVar28 = (int *)param_1[5];
  if (iVar15 == 0) {
    local_120 = piVar45 + 1;
    *piVar45 = -1;
  }
  else {
    local_124 = 0;
    local_12c = 0;
    local_120 = &local_12c;
    local_128 = 1;
  }
  uVar35 = *param_1;
  uVar41 = param_1[1];
  pppppppuVar44 = (uint *******)param_1[2];
  piVar16 = (int *)*piVar28;
  iVar36 = *piVar23;
  local_118 = &DAT_0186b138;
  local_11c = &local_120;
  local_114 = *(byte *)(iVar36 + 0x1a);
  if (*(byte *)(iVar36 + 0x17) != 2) {
    local_114 = *(byte *)(iVar36 + 0x17);
  }
  piVar24 = (int *)piVar16[5];
  if (*(char *)(iVar36 + 0x10) == '\x01') {
    if ((local_114 & 1) == 0) {
      iVar17 = FUN_016a7d70(&local_120,&DAT_0186b138);
      if ((iVar17 == 0) ||
         (iVar17 = (**(code **)(local_118 + 0xc))(local_11c,"<unknown time>",0xe), iVar17 == 0)) {
        iVar17 = (**(code **)(local_118 + 0x10))(local_11c,0x20);
        goto LAB_009e4cec;
      }
    }
    else {
      local_88._2_2_ = 0;
      bStack_84 = 0;
      bStack_83 = 0;
      uStack_82 = 0;
      local_88._0_1_ = '\0';
      local_88._1_1_ = 1;
      local_7b = 0x15;
      uStack_7a = 0;
      pppppppuStack_78 = (uint *******)((uint)pppppppuStack_78 & 0xffffff00);
      pppppppuStack_80 = (uint *******)0x1500;
      bStack_7c = 0;
      local_b4 = 0x30;
      bStack_b3 = 0x34;
      uStack_b2 = 0x127;
      local_b8._0_1_ = (char)&local_88;
      local_b8._1_1_ = (byte)((uint)&local_88 >> 8);
      local_b8._2_2_ = (undefined2)((uint)&local_88 >> 0x10);
      iVar17 = FUN_009f493c(&local_120,&DAT_00590e71,&local_b8);
      if ((iVar17 == 0) &&
         ((iVar17 = FUN_016a7d70(local_11c,local_118), iVar17 == 0 ||
          (iVar17 = (**(code **)(local_118 + 0xc))(local_11c,"<unknown time>",0xe), iVar17 == 0))))
      {
        local_88._0_1_ = '\0';
        local_88._1_1_ = 1;
        local_88._2_2_ = 0;
        bStack_84 = 0;
        bStack_83 = 0;
        uStack_82 = 0;
        local_b8._0_1_ = (char)&local_88;
        local_b8._1_1_ = (byte)((uint)&local_88 >> 8);
        local_b8._2_2_ = (undefined2)((uint)&local_88 >> 0x10);
        local_7b = 0x15;
        uStack_7a = 0;
        pppppppuStack_78 = (uint *******)((uint)pppppppuStack_78 & 0xffffff00);
        pppppppuStack_80 = (uint *******)0x1500;
        bStack_7c = 0;
        local_b4 = 0xa8;
        bStack_b3 = 0x39;
        uStack_b2 = 0x127;
        iVar17 = (**(code **)(local_118 + 0x14))(local_11c,&DAT_0058d7ec,&local_b8);
LAB_009e4cec:
        if (iVar17 == 0) goto LAB_009e4cf8;
      }
    }
  }
  else {
LAB_009e4cf8:
    if (*(char *)(iVar36 + 0x12) != '\0') {
      local_b4 = local_114;
      bStack_84 = 0x88;
      bStack_83 = 0x62;
      uStack_82 = 0x16a;
      piVar33 = piVar24 + 2;
      local_b8._0_1_ = (char)piVar33;
      local_b8._1_1_ = (byte)((uint)piVar33 >> 8);
      local_b8._2_2_ = (undefined2)((uint)piVar33 >> 0x10);
      local_88._0_1_ = (char)&local_b8;
      local_88._1_1_ = (byte)((uint)&local_b8 >> 8);
      local_88._2_2_ = (undefined2)((uint)&local_b8 >> 0x10);
      iVar17 = (**(code **)(local_118 + 0x14))(local_11c,&DAT_0058d7ec,&local_88);
      if (iVar17 != 0) goto LAB_009e6194;
    }
    if (*(char *)(iVar36 + 0x14) == '\0') {
LAB_009e4ea4:
      if (*(char *)(iVar36 + 0x13) != '\0') {
        uVar48 = thunk_FUN_016de0ee(*(char *)(iVar36 + 0x13),0x248);
        uVar18 = *(uint *)((int)uVar48 + (int)((ulonglong)uVar48 >> 0x20));
        if (uVar18 < 3) {
          piVar33 = (int *)FUN_015f7ed0();
        }
        else {
          piVar33 = (int *)(uVar18 - 8);
          do {
            iVar17 = *piVar33;
            bVar47 = (bool)hasExclusiveAccess(piVar33);
          } while (!bVar47);
          *piVar33 = iVar17 + 1;
          if (iVar17 < 0) goto LAB_009e6c3c;
        }
        iVar17 = piVar33[2];
        iVar19 = piVar33[3];
        local_b4 = (byte)iVar19;
        bStack_b3 = (byte)((uint)iVar19 >> 8);
        uStack_b2 = (undefined2)((uint)iVar19 >> 0x10);
        local_b8._0_1_ = (char)iVar17;
        local_b8._1_1_ = (byte)((uint)iVar17 >> 8);
        local_b8._2_2_ = (undefined2)((uint)iVar17 >> 0x10);
        bStack_84 = 0x80;
        bStack_83 = 0x30;
        uStack_82 = 0x9f;
        local_88._0_1_ = (char)&local_b8;
        local_88._1_1_ = (byte)((uint)&local_b8 >> 8);
        local_88._2_2_ = (undefined2)((uint)&local_b8 >> 0x10);
        iVar17 = (**(code **)(local_118 + 0x14))(local_11c,&DAT_0034b60b,&local_88);
        DataMemoryBarrier(0xb);
        do {
          iVar19 = *piVar33;
          bVar47 = (bool)hasExclusiveAccess(piVar33);
        } while (!bVar47);
        *piVar33 = iVar19 + -1;
        if (iVar17 != 0) goto joined_r0x009e4f48;
        if (iVar19 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015e92c0(piVar33);
        }
      }
      uVar13 = uStack_82;
      bVar11 = bStack_83;
      bVar9 = bStack_84;
      uVar7 = local_88._2_2_;
      bVar2 = local_88._1_1_;
      cVar4 = (char)local_88;
      bVar1 = local_114;
      uVar18 = (uint)local_114;
      local_88._0_1_ = (char)uVar35;
      cVar5 = (char)local_88;
      local_88._1_1_ = (byte)(uVar35 >> 8);
      bVar6 = local_88._1_1_;
      local_88._2_2_ = (undefined2)(uVar35 >> 0x10);
      uVar8 = local_88._2_2_;
      bStack_84 = (byte)uVar41;
      bVar10 = bStack_84;
      bStack_83 = (byte)(uVar41 >> 8);
      bVar12 = bStack_83;
      uStack_82 = (undefined2)(uVar41 >> 0x10);
      uVar14 = uStack_82;
      local_88._0_1_ = cVar4;
      local_88._1_1_ = bVar2;
      local_88._2_2_ = uVar7;
      bStack_84 = bVar9;
      bStack_83 = bVar11;
      uStack_82 = uVar13;
      if (*piVar16 == 2) {
        if (pppppppuVar44 == (uint *******)0x0) {
LAB_009e50ac:
          pppppppuVar44 = (uint *******)0x0;
        }
        else {
          unaff_r9 = (uint *******)&local_b8;
          FUN_016a4f80(unaff_r9,pppppppuVar44,piVar16[2] + -1);
          pppppppuVar20 =
               (uint *******)CONCAT22(local_b8._2_2_,CONCAT11(local_b8._1_1_,(char)local_b8));
          if (pppppppuVar20 == (uint *******)0x0) goto LAB_009e50ac;
          if (((uint)*pppppppuVar20 & uVar35) != 0 || ((uint)pppppppuVar20[1] & uVar41) != 0) {
            local_74 = (uint *******)0x0;
            ppppppuVar26 = pppppppuVar20[0xe];
            pppppppuVar20 = pppppppuVar20 + 0xe;
            DataMemoryBarrier(0xb);
            do {
              if (((uint)ppppppuVar26 & 3) == 2) {
                local_40._0_1_ = '\x02';
                local_40._1_1_ = 0;
                local_40._2_2_ = 0;
                local_b8._0_1_ = (char)&local_40;
                local_b8._1_1_ = (byte)((uint)&local_40 >> 8);
                local_b8._2_2_ = (undefined2)((uint)&local_40 >> 0x10);
                goto LAB_009e6b94;
              }
              uVar35 = ((uint)ppppppuVar26 & 0x3fffffff) >> 2;
              uVar32 = (uint)ppppppuVar26 & 3 ^ 1;
              ppppppuVar46 = (uint ******)((uint)ppppppuVar26 & 0xc0000000 | 3);
              uVar41 = uVar35 ^ 1;
              if (uVar32 != 0 || uVar41 != 0) {
                ppppppuVar46 = (uint ******)(uVar35 * 4 - 4 | (uint)ppppppuVar26 & 0xc0000003);
              }
              ppppppuVar37 = *pppppppuVar20;
              if (ppppppuVar37 == ppppppuVar26) {
                DataMemoryBarrier(0xb);
                do {
                  bVar47 = (bool)hasExclusiveAccess(pppppppuVar20);
                  if (bVar47) {
                    *pppppppuVar20 = ppppppuVar46;
                    bVar47 = true;
                    ppppppuVar26 = ppppppuVar37;
                    goto LAB_009e5034;
                  }
                  ppppppuVar37 = *pppppppuVar20;
                } while (ppppppuVar37 == ppppppuVar26);
              }
              bVar47 = false;
              ClearExclusiveLocal();
              ppppppuVar26 = ppppppuVar37;
LAB_009e5034:
              DataMemoryBarrier(0xb);
            } while (!bVar47);
            if (uVar32 == 0 && uVar41 == 0) {
              FUN_009ebe80();
            }
            goto LAB_009e557c;
          }
          pppppppuStack_78 = local_b0;
          bStack_7c = local_b4;
          local_7b = bStack_b3;
          uStack_7a = uStack_b2;
          local_88._0_1_ = cVar5;
          local_88._1_1_ = bVar6;
          local_88._2_2_ = uVar8;
          bStack_84 = bVar10;
          bStack_83 = bVar12;
          uStack_82 = uVar14;
          pppppppuStack_80 = pppppppuVar20;
        }
        local_74 = pppppppuVar44;
LAB_009e50b4:
        pppppppuVar44 = local_74;
        if (local_74 != (uint *******)0x0) {
          pppppppuVar20 =
               (uint *******)CONCAT22(local_88._2_2_,CONCAT11(local_88._1_1_,(char)local_88));
          bVar47 = (uint *******)0xfffffffe < pppppppuStack_78;
          pcVar42 = (char *)((int)pppppppuStack_78 + 1);
          pppppppuVar30 = pppppppuStack_80 + 0xe;
          pcVar34 = (code *)CONCAT22(uStack_82,CONCAT11(bStack_83,bStack_84));
          ppppppuVar26 = pppppppuStack_80[0xe];
          DataMemoryBarrier(0xb);
          while (((uint)ppppppuVar26 & 3) != 2) {
            uVar35 = ((uint)ppppppuVar26 & 0x3fffffff) >> 2;
            uVar32 = (uint)ppppppuVar26 & 3 ^ 1;
            ppppppuVar46 = (uint ******)((uint)ppppppuVar26 & 0xc0000000 | 3);
            uVar41 = uVar35 ^ 1;
            if (uVar32 != 0 || uVar41 != 0) {
              ppppppuVar46 = (uint ******)(uVar35 * 4 - 4 | (uint)ppppppuVar26 & 0xc0000003);
            }
            ppppppuVar37 = *pppppppuVar30;
            if (*pppppppuVar30 == ppppppuVar26) {
              DataMemoryBarrier(0xb);
LAB_009e5158:
              bVar3 = (bool)hasExclusiveAccess(pppppppuVar30);
              if (!bVar3) goto code_r0x009e5164;
              *pppppppuVar30 = ppppppuVar46;
              DataMemoryBarrier(0xb);
              if (uVar32 == 0 && uVar41 == 0) {
                FUN_009ebe80(CONCAT22(uStack_7a,CONCAT11(local_7b,bStack_7c)));
              }
              bVar2 = local_114;
              local_f0 = pppppppuVar44;
              local_100 = pcVar42;
              local_fc = (uint)bVar47;
              local_f8 = pppppppuVar20;
              local_f4 = pcVar34;
              FUN_009f3fa4(&local_58,&local_100);
              if (local_44 == (uint *******)0x0) {
                pppppppuVar20 = (uint *******)&DAT_00000008;
                local_e0 = (uint *******)0x0;
                pppppppuVar44 = (uint *******)0x0;
              }
              else {
                local_88._0_1_ = (char)local_58;
                local_88._1_1_ = (byte)((uint)local_58 >> 8);
                local_88._2_2_ = (undefined2)((uint)local_58 >> 0x10);
                bStack_84 = (byte)local_54;
                bStack_83 = (byte)((uint)local_54 >> 8);
                uStack_82 = (undefined2)((uint)local_54 >> 0x10);
                pppppppuStack_80 = local_50;
                bStack_7c = (byte)local_4c;
                local_7b = (byte)((uint)local_4c >> 8);
                uStack_7a = (undefined2)((uint)local_4c >> 0x10);
                pppppppuStack_78 = local_48;
                local_74 = local_44;
                pppppppuVar20 = (uint *******)thunk_FUN_016d4a50(0x60);
                if (pppppppuVar20 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(8,0x60);
                }
                iVar17 = 0x18;
                *pppppppuVar20 = (uint ******)local_58;
                pppppppuVar20[1] = (uint ******)local_54;
                pppppppuVar20[2] = (uint ******)local_50;
                pppppppuVar20[3] = local_4c;
                pppppppuVar20[4] = (uint ******)local_48;
                pppppppuVar20[5] = (uint ******)local_44;
                local_d8 = (uint *******)&DAT_00000004;
                local_d0 = (uint *******)&DAT_00000001;
                local_40._0_1_ = (char)local_100;
                local_40._1_1_ = (byte)((uint)local_100 >> 8);
                local_40._2_2_ = (undefined2)((uint)local_100 >> 0x10);
                local_3c = (byte)local_fc;
                bStack_3b = (byte)(local_fc >> 8);
                uStack_3a = (undefined2)(local_fc >> 0x10);
                local_38 = local_f8;
                local_34 = local_f4;
                local_30 = local_f0;
                local_2c = pcStack_ec;
                local_d4 = pppppppuVar20;
                while (pppppppuVar44 = local_d0, FUN_009f3fa4(&local_b8,&local_40),
                      local_a4 != (uint *******)0x0) {
                  local_88._0_1_ = (char)local_b8;
                  local_88._1_1_ = local_b8._1_1_;
                  local_88._2_2_ = local_b8._2_2_;
                  bStack_84 = local_b4;
                  bStack_83 = bStack_b3;
                  uStack_82 = uStack_b2;
                  pppppppuStack_80 = local_b0;
                  bStack_7c = (byte)local_ac;
                  local_7b = (byte)((uint)local_ac >> 8);
                  uStack_7a = (undefined2)((uint)local_ac >> 0x10);
                  pppppppuStack_78 = local_a8;
                  local_74 = local_a4;
                  if (pppppppuVar44 == local_d8) {
                    FUN_009f4d18(&local_d8,pppppppuVar44,1,8,0x18);
                    pppppppuVar20 = local_d4;
                  }
                  puVar21 = (undefined4 *)((int)pppppppuVar20 + iVar17);
                  local_d0 = (uint *******)((int)pppppppuVar44 + 1);
                  iVar17 = iVar17 + 0x18;
                  *puVar21 = CONCAT22(local_b8._2_2_,CONCAT11(local_b8._1_1_,(char)local_b8));
                  puVar21[1] = CONCAT22(uStack_b2,CONCAT11(bStack_b3,local_b4));
                  puVar21[2] = local_b0;
                  puVar21[3] = local_ac;
                  puVar21[4] = local_a8;
                  puVar21[5] = local_a4;
                }
                local_e0 = local_d8;
              }
              local_dc = pppppppuVar20 + (int)pppppppuVar44 * 6;
              unaff_r9 = pppppppuVar20;
              local_e8 = pppppppuVar20;
              local_e4 = pppppppuVar20;
              if (pppppppuVar44 == (uint *******)0x0) {
LAB_009e556c:
                FUN_009eb694(&local_e8);
                goto LAB_009e557c;
              }
              unaff_r9 = local_dc + -6;
              local_d8 = (uint *******)*unaff_r9;
              local_d4 = (uint *******)local_dc[-5];
              local_d0 = (uint *******)local_dc[-4];
              ppppppuStack_cc = local_dc[-3];
              pppppppuStack_c8 = (uint *******)local_dc[-2];
              pppppppuVar30 = local_dc + -1;
              local_dc = unaff_r9;
              if ((uint *******)*pppppppuVar30 == (uint *******)0x0) goto LAB_009e556c;
              pppppppuStack_80 = (uint *******)local_d0[0xc][4];
              pppppuVar27 = local_d0[0xc][3];
              uStack_6b = 0;
              local_6f = 0;
              local_88._0_1_ = '\0';
              local_88._1_1_ = 0;
              local_88._2_2_ = 0x8000;
              local_70 = bVar2;
              local_63 = 0x15;
              local_67 = 0x15;
              pcVar34 = *(code **)(local_118 + 0x14);
              bStack_84 = (byte)pppppuVar27;
              bStack_83 = (byte)((uint)pppppuVar27 >> 8);
              uStack_82 = (undefined2)((uint)pppppuVar27 >> 0x10);
              bStack_7c = 2;
              local_7b = 0;
              uStack_7a = 0x8000;
              local_b4 = 0x6c;
              bStack_b3 = 0x3a;
              uStack_b2 = 0x127;
              local_b8._0_1_ = (char)&local_88;
              local_b8._1_1_ = (byte)((uint)&local_88 >> 8);
              local_b8._2_2_ = (undefined2)((uint)&local_88 >> 0x10);
              local_58 = local_d8;
              local_54 = local_d4;
              local_50 = local_d0;
              local_4c = ppppppuStack_cc;
              local_48 = pppppppuStack_c8;
              local_44 = (uint *******)*pppppppuVar30;
              iVar17 = (*pcVar34)(local_11c,&DAT_00590e71,&local_b8);
              if (iVar17 == 0) {
                if ((CONCAT22(local_88._2_2_,CONCAT11(local_88._1_1_,(char)local_88)) & 0x7fffffff)
                    != 0) {
                  thunk_FUN_016d3fb4(CONCAT22(uStack_82,CONCAT11(bStack_83,bStack_84)));
                }
                iVar17 = CONCAT22(uStack_7a,CONCAT11(local_7b,bStack_7c));
                if ((-0x7ffffffe < iVar17) && (iVar17 != 0)) {
                  thunk_FUN_016d3fb4(pppppppuStack_78);
                }
                uVar48 = FUN_016a108c(&local_50);
                puVar43 = (uint *)((ulonglong)uVar48 >> 0x20);
                piVar33 = (int *)uVar48;
                if (piVar33[3] != 0) {
                  iVar17 = *piVar33;
                  uVar35 = piVar33[1];
                  uVar41 = uVar35 & 0xb36486b9;
                  local_170 = 0;
                  do {
                    uVar38 = *(uint *)(iVar17 + uVar41);
                    uVar32 = (uVar38 & 0x80808080 ^ 0x80808080) & (uVar38 ^ 0x59595959) + 0xfefefeff
                    ;
                    while (uVar32 != 0) {
                      uVar39 = uVar41 + ((uint)LZCOUNT(uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10
                                                       | (uVar32 >> 0x10 & 0xff) << 8 |
                                                       uVar32 >> 0x18) >> 3) & uVar35;
                      piVar33 = (int *)(iVar17 + -0x18 + uVar39 * -0x18);
                      uVar32 = uVar32 - 1 & uVar32;
                      if ((*piVar33 == -0xa1a2068 && piVar33[2] == -0x4c9b7947) &&
                          (piVar33[1] == 0x66389fa0 && piVar33[3] == 0x2259fa41)) {
                        iVar17 = iVar17 + uVar39 * -0x18;
                        pppppuVar27 = *(uint ******)(iVar17 + -8);
                        (**(code **)(*(int *)(iVar17 + -4) + 0xc))(&local_88,pppppuVar27);
                        if (((CONCAT22(local_88._2_2_,CONCAT11(local_88._1_1_,(char)local_88)) !=
                              -0xa1a2068 || pppppppuStack_80 != (uint *******)0xb36486b9) ||
                             (CONCAT22(uStack_82,CONCAT11(bStack_83,bStack_84)) != 0x66389fa0 ||
                             CONCAT22(uStack_7a,CONCAT11(local_7b,bStack_7c)) != 0x2259fa41)) ||
                           (local_bc = &local_c0, local_c0 = pppppuVar27,
                           pppppuVar27[2] == (uint ****)0x0)) goto LAB_009e6020;
                        uStack_9a = 0;
                        local_9f = 0;
                        uStack_9e = 0;
                        local_b4 = 0xeb;
                        bStack_b3 = 0x44;
                        uStack_b2 = 0x41;
                        local_a0 = bVar2;
                        local_93 = 0x15;
                        local_97 = 0x15;
                        local_ac = (code *)0x80000002;
                        local_b0 = (uint *******)&DAT_00000001;
                        local_b8._0_1_ = '\0';
                        local_b8._1_1_ = 0;
                        local_b8._2_2_ = 0x8000;
                        uStack_6b = 0;
                        local_6f = 0;
                        local_38 = &local_bc;
                        local_70 = bVar2;
                        local_63 = 0x15;
                        local_67 = 0x15;
                        bStack_7c = 2;
                        local_7b = 0;
                        uStack_7a = 0x8000;
                        pppppppuStack_80 = (uint *******)&DAT_00000001;
                        bStack_84 = 0xa2;
                        bStack_83 = 0x54;
                        uStack_82 = 0x41;
                        local_88._0_1_ = '\0';
                        local_88._1_1_ = 0;
                        local_88._2_2_ = 0x8000;
                        local_40._0_1_ = (char)&local_b8;
                        local_40._1_1_ = (byte)((uint)&local_b8 >> 8);
                        local_40._2_2_ = (undefined2)((uint)&local_b8 >> 0x10);
                        local_2c = FUN_01273a6c;
                        local_34 = (code *)&LAB_009f4818;
                        local_3c = 0x6c;
                        bStack_3b = 0x3a;
                        uStack_3a = 0x127;
                        local_30 = (uint *******)&local_88;
                        iVar17 = (*pcVar34)(local_11c,&DAT_0057fce6,&local_40);
                        if (iVar17 == 0) {
                          FUN_009f31d8(&local_88);
                          FUN_009f31d8(&local_b8);
                          goto LAB_009e6020;
                        }
LAB_009e5fe4:
                        FUN_009f31d8(&local_88);
                        pcVar42 = (char *)&local_b8;
LAB_009e60a4:
                        FUN_009f31d8(pcVar42);
                        DataMemoryBarrier(0xb);
                        do {
                          uVar35 = *puVar43;
                          bVar47 = (bool)hasExclusiveAccess(puVar43);
                        } while (!bVar47);
                        *puVar43 = uVar35 - 1;
                        if ((uVar35 - 1 & 0xbfffffff) == 0x80000000) {
                          FUN_015e9814(puVar43);
                        }
                        goto LAB_009e60cc;
                      }
                    }
                    if ((uVar38 & 0x80808080 & uVar38 << 1) != 0) break;
                    local_170 = local_170 + 4;
                    uVar41 = uVar41 + local_170 & uVar35;
                  } while( true );
                }
LAB_009e6020:
                uStack_6b = 0;
                local_70 = 0;
                local_63 = 0x15;
                local_67 = 0x15;
                bStack_7c = 2;
                local_7b = 0;
                uStack_7a = 0x8000;
                pppppppuStack_80 = (uint *******)&DAT_00000001;
                local_6f = (uint)bVar1;
                bStack_84 = 0xb8;
                bStack_83 = 0x8e;
                uStack_82 = 0x41;
                local_88._0_1_ = '\0';
                local_88._1_1_ = 0;
                local_88._2_2_ = 0x8000;
                local_b8._0_1_ = (char)&local_88;
                local_b8._1_1_ = (byte)((uint)&local_88 >> 8);
                local_b8._2_2_ = (undefined2)((uint)&local_88 >> 0x10);
                local_b4 = 0x6c;
                bStack_b3 = 0x3a;
                uStack_b2 = 0x127;
                iVar17 = (*pcVar34)(local_11c,&DAT_00590e71,&local_b8);
                if (iVar17 != 0) {
LAB_009e60a0:
                  pcVar42 = (char *)&local_88;
                  goto LAB_009e60a4;
                }
                FUN_009f31d8(&local_88);
                DataMemoryBarrier(0xb);
                do {
                  uVar35 = *puVar43;
                  bVar47 = (bool)hasExclusiveAccess(puVar43);
                } while (!bVar47);
                *puVar43 = uVar35 - 1;
                if ((uVar35 - 1 & 0xbfffffff) == 0x80000000) {
                  FUN_015e9814(puVar43);
                }
                FUN_009ee6c0(&local_50);
                if (pppppppuVar44 != (uint *******)&DAT_00000001) {
LAB_009e64f8:
                  pppppppuVar44 = unaff_r9 + -6;
                  local_d8 = (uint *******)*pppppppuVar44;
                  local_d4 = (uint *******)unaff_r9[-5];
                  local_d0 = (uint *******)unaff_r9[-4];
                  ppppppuStack_cc = unaff_r9[-3];
                  pppppppuStack_c8 = (uint *******)unaff_r9[-2];
                  local_dc = pppppppuVar44;
                  if ((uint *******)unaff_r9[-1] != (uint *******)0x0) {
                    pppppuVar27 = local_d0[0xc][3];
                    pppppppuStack_80 = (uint *******)local_d0[0xc][4];
                    bStack_84 = (byte)pppppuVar27;
                    bStack_83 = (byte)((uint)pppppuVar27 >> 8);
                    uStack_82 = (undefined2)((uint)pppppuVar27 >> 0x10);
                    uStack_6b = 0;
                    local_6f = 0;
                    local_88._0_1_ = '\0';
                    local_88._1_1_ = 0;
                    local_88._2_2_ = 0x8000;
                    local_63 = 0x15;
                    local_67 = 0x15;
                    bStack_7c = 2;
                    local_7b = 0;
                    uStack_7a = 0x8000;
                    pcVar34 = *(code **)(local_118 + 0x14);
                    local_b4 = 0x6c;
                    bStack_b3 = 0x3a;
                    uStack_b2 = 0x127;
                    local_b8._0_1_ = (char)&local_88;
                    local_b8._1_1_ = (byte)((uint)&local_88 >> 8);
                    local_b8._2_2_ = (undefined2)((uint)&local_88 >> 0x10);
                    local_70 = bVar2;
                    local_58 = local_d8;
                    local_54 = local_d4;
                    local_50 = local_d0;
                    local_4c = ppppppuStack_cc;
                    local_48 = pppppppuStack_c8;
                    local_44 = (uint *******)unaff_r9[-1];
                    iVar17 = (*pcVar34)(local_11c,&DAT_00590e71,&local_b8);
                    if (iVar17 != 0) goto LAB_009e5534;
                    if ((CONCAT22(local_88._2_2_,CONCAT11(local_88._1_1_,(char)local_88)) &
                        0x7fffffff) != 0) {
                      thunk_FUN_016d3fb4(CONCAT22(uStack_82,CONCAT11(bStack_83,bStack_84)));
                    }
                    iVar17 = CONCAT22(uStack_7a,CONCAT11(local_7b,bStack_7c));
                    if ((-0x7ffffffe < iVar17) && (iVar17 != 0)) {
                      thunk_FUN_016d3fb4(pppppppuStack_78);
                    }
                    uVar48 = FUN_016a108c(&local_50);
                    puVar43 = (uint *)((ulonglong)uVar48 >> 0x20);
                    piVar33 = (int *)uVar48;
                    if (piVar33[3] != 0) {
                      iVar17 = *piVar33;
                      uVar35 = piVar33[1];
                      uVar41 = uVar35 & 0xb36486b9;
                      local_178 = 0;
                      while( true ) {
                        uVar32 = *(uint *)(iVar17 + uVar41);
                        uVar38 = (uVar32 & 0x80808080 ^ 0x80808080) &
                                 (uVar32 ^ 0x59595959) + 0xfefefeff;
                        while (uVar38 != 0) {
                          uVar39 = uVar41 + ((uint)LZCOUNT(uVar38 << 0x18 |
                                                           (uVar38 >> 8 & 0xff) << 0x10 |
                                                           (uVar38 >> 0x10 & 0xff) << 8 |
                                                           uVar38 >> 0x18) >> 3) & uVar35;
                          piVar33 = (int *)(iVar17 + -0x18 + uVar39 * -0x18);
                          uVar38 = uVar38 - 1 & uVar38;
                          if ((*piVar33 == -0xa1a2068 && piVar33[2] == -0x4c9b7947) &&
                              (piVar33[1] == 0x66389fa0 && piVar33[3] == 0x2259fa41)) {
                            iVar17 = iVar17 + uVar39 * -0x18;
                            pppppuVar27 = *(uint ******)(iVar17 + -8);
                            (**(code **)(*(int *)(iVar17 + -4) + 0xc))(&local_88,pppppuVar27);
                            if (((CONCAT22(local_88._2_2_,CONCAT11(local_88._1_1_,(char)local_88))
                                  != -0xa1a2068 || pppppppuStack_80 != (uint *******)0xb36486b9) ||
                                 (CONCAT22(uStack_82,CONCAT11(bStack_83,bStack_84)) != 0x66389fa0 ||
                                 CONCAT22(uStack_7a,CONCAT11(local_7b,bStack_7c)) != 0x2259fa41)) ||
                               (local_bc = &local_c0, local_c0 = pppppuVar27,
                               pppppuVar27[2] == (uint ****)0x0)) goto LAB_009e68e0;
                            local_93 = 0x15;
                            uStack_9a = 0;
                            local_9f = 0;
                            uStack_9e = uStack_9e & 0xff000000;
                            local_97 = 0x15;
                            local_ac = (code *)0x80000002;
                            local_b0 = (uint *******)&DAT_00000001;
                            local_b8._0_1_ = '\0';
                            local_b8._1_1_ = 0;
                            local_b8._2_2_ = 0x8000;
                            local_b4 = 0xeb;
                            bStack_b3 = 0x44;
                            uStack_b2 = 0x41;
                            local_63 = 0x15;
                            uStack_6b = 0;
                            local_6f = 0;
                            local_30 = (uint *******)&local_88;
                            local_67 = 0x15;
                            bStack_7c = 2;
                            local_7b = 0;
                            uStack_7a = 0x8000;
                            pppppppuStack_80 = (uint *******)&DAT_00000001;
                            local_88._0_1_ = '\0';
                            local_88._1_1_ = 0;
                            local_88._2_2_ = 0x8000;
                            bStack_84 = 0xa2;
                            bStack_83 = 0x54;
                            uStack_82 = 0x41;
                            local_2c = FUN_01273a6c;
                            local_3c = 0x6c;
                            bStack_3b = 0x3a;
                            uStack_3a = 0x127;
                            local_40._0_1_ = (char)&local_b8;
                            local_40._1_1_ = (byte)((uint)&local_b8 >> 8);
                            local_40._2_2_ = (undefined2)((uint)&local_b8 >> 0x10);
                            local_34 = (code *)&LAB_009f4818;
                            local_38 = &local_bc;
                            local_a0 = bVar2;
                            local_70 = bVar2;
                            iVar17 = (*pcVar34)(local_11c,&DAT_0057fce6,&local_40);
                            if (iVar17 != 0) goto LAB_009e5fe4;
                            if ((CONCAT22(local_88._2_2_,CONCAT11(local_88._1_1_,(char)local_88)) &
                                0x7fffffff) != 0) {
                              thunk_FUN_016d3fb4(CONCAT22(uStack_82,CONCAT11(bStack_83,bStack_84)));
                            }
                            iVar17 = CONCAT22(uStack_7a,CONCAT11(local_7b,bStack_7c));
                            if ((-0x7ffffffe < iVar17) && (iVar17 != 0)) {
                              thunk_FUN_016d3fb4(pppppppuStack_78);
                            }
                            if ((CONCAT22(local_b8._2_2_,CONCAT11(local_b8._1_1_,(char)local_b8)) &
                                0x7fffffff) != 0) {
                              thunk_FUN_016d3fb4(CONCAT22(uStack_b2,CONCAT11(bStack_b3,local_b4)));
                            }
                            if ((-0x7ffffffe < (int)local_ac) && (local_ac != (code *)0x0)) {
                              thunk_FUN_016d3fb4(local_a8);
                            }
                            goto LAB_009e68e0;
                          }
                        }
                        if ((uVar32 & 0x80808080 & uVar32 << 1) != 0) break;
                        local_178 = local_178 + 4;
                        uVar41 = uVar41 + local_178 & uVar35;
                      }
                    }
LAB_009e68e0:
                    local_70 = 0;
                    uStack_6b = 0;
                    local_6f = CONCAT31(local_6f._1_3_,bVar1);
                    local_63 = 0x15;
                    local_67 = 0x15;
                    bStack_7c = 2;
                    local_7b = 0;
                    uStack_7a = 0x8000;
                    pppppppuStack_80 = (uint *******)&DAT_00000001;
                    bStack_84 = 0xb8;
                    bStack_83 = 0x8e;
                    uStack_82 = 0x41;
                    local_88._0_1_ = '\0';
                    local_88._1_1_ = 0;
                    local_88._2_2_ = 0x8000;
                    local_b4 = 0x6c;
                    bStack_b3 = 0x3a;
                    uStack_b2 = 0x127;
                    local_b8._0_1_ = (char)&local_88;
                    local_b8._1_1_ = (byte)((uint)&local_88 >> 8);
                    local_b8._2_2_ = (undefined2)((uint)&local_88 >> 0x10);
                    iVar17 = (*pcVar34)(local_11c,&DAT_00590e71,&local_b8);
                    if (iVar17 == 0) {
                      if ((CONCAT22(local_88._2_2_,CONCAT11(local_88._1_1_,(char)local_88)) &
                          0x7fffffff) != 0) {
                        thunk_FUN_016d3fb4(CONCAT22(uStack_82,CONCAT11(bStack_83,bStack_84)));
                      }
                      iVar17 = CONCAT22(uStack_7a,CONCAT11(local_7b,bStack_7c));
                      if ((-0x7ffffffe < iVar17) && (iVar17 != 0)) {
                        thunk_FUN_016d3fb4(pppppppuStack_78);
                      }
                      DataMemoryBarrier(0xb);
                      do {
                        uVar35 = *puVar43;
                        bVar47 = (bool)hasExclusiveAccess(puVar43);
                      } while (!bVar47);
                      *puVar43 = uVar35 - 1;
                      if ((uVar35 - 1 & 0xbfffffff) == 0x80000000) {
                        FUN_015e9814(puVar43);
                      }
                      pppppppuVar30 = local_50 + 0xe;
                      DataMemoryBarrier(0xb);
                      ppppppuVar26 = local_50[0xe];
                      do {
                        if (((uint)ppppppuVar26 & 3) == 2) {
                          local_b8._0_1_ = '\x02';
                          local_b8._1_1_ = 0;
                          local_b8._2_2_ = 0;
                          bStack_84 = 0x48;
                          bStack_83 = 0xcc;
                          uStack_82 = 0xfa;
                          local_88._0_1_ = (char)&local_b8;
                          local_88._1_1_ = (byte)((uint)&local_b8 >> 8);
                          local_88._2_2_ = (undefined2)((uint)&local_b8 >> 0x10);
                    /* WARNING: Subroutine does not return */
                          FUN_00faa478(&DAT_0041504f,&local_88,&DAT_018ae754);
                        }
                        uVar41 = ((uint)ppppppuVar26 & 0x3fffffff) >> 2;
                        uVar35 = (uint)ppppppuVar26 & 3 ^ 1;
                        ppppppuVar46 = (uint ******)((uint)ppppppuVar26 & 0xc0000000 | 3);
                        uVar32 = uVar41 ^ 1;
                        if (uVar35 != 0 || uVar32 != 0) {
                          ppppppuVar46 = (uint ******)
                                         (uVar41 * 4 - 4 | (uint)ppppppuVar26 & 0xc0000003);
                        }
                        ppppppuVar37 = *pppppppuVar30;
                        if (ppppppuVar37 == ppppppuVar26) {
                          DataMemoryBarrier(0xb);
                          do {
                            bVar47 = (bool)hasExclusiveAccess(pppppppuVar30);
                            if (bVar47) {
                              *pppppppuVar30 = ppppppuVar46;
                              DataMemoryBarrier(0xb);
                              if (uVar35 == 0 && uVar32 == 0) {
                                FUN_009ebe80(local_4c,local_48);
                              }
                              unaff_r9 = pppppppuVar44;
                              if (pppppppuVar20 == pppppppuVar44) goto LAB_009e6494;
                              goto LAB_009e64f8;
                            }
                            ppppppuVar37 = *pppppppuVar30;
                          } while (ppppppuVar37 == ppppppuVar26);
                        }
                        ClearExclusiveLocal();
                        DataMemoryBarrier(0xb);
                        ppppppuVar26 = ppppppuVar37;
                      } while( true );
                    }
                    goto LAB_009e60a0;
                  }
                }
LAB_009e6494:
                FUN_009eb694(&local_e8);
                iVar17 = (**(code **)(local_118 + 0x10))(local_11c,0x20);
                if (iVar17 != 0) goto LAB_009e6194;
                goto LAB_009e557c;
              }
LAB_009e5534:
              if ((CONCAT22(local_88._2_2_,CONCAT11(local_88._1_1_,(char)local_88)) & 0x7fffffff) !=
                  0) {
                thunk_FUN_016d3fb4(CONCAT22(uStack_82,CONCAT11(bStack_83,bStack_84)));
              }
              iVar36 = CONCAT22(uStack_7a,CONCAT11(local_7b,bStack_7c));
              if ((-0x7ffffffe < iVar36) && (iVar36 != 0)) {
                thunk_FUN_016d3fb4(pppppppuStack_78);
              }
LAB_009e60cc:
              ppppppuVar26 = local_50[0xe];
              pppppppuVar44 = local_50 + 0xe;
              DataMemoryBarrier(0xb);
              while( true ) {
                if (((uint)ppppppuVar26 & 3) == 2) {
                  local_b8._0_1_ = '\x02';
                  local_b8._1_1_ = 0;
                  local_b8._2_2_ = 0;
                  bStack_84 = 0x48;
                  bStack_83 = 0xcc;
                  uStack_82 = 0xfa;
                  local_88._0_1_ = (char)&local_b8;
                  local_88._1_1_ = (byte)((uint)&local_b8 >> 8);
                  local_88._2_2_ = (undefined2)((uint)&local_b8 >> 0x10);
                    /* WARNING: Subroutine does not return */
                  FUN_00faa478(&DAT_0041504f,&local_88,&DAT_018ae754);
                }
                uVar35 = ((uint)ppppppuVar26 & 0x3fffffff) >> 2;
                uVar18 = (uint)ppppppuVar26 & 3 ^ 1;
                ppppppuVar46 = (uint ******)((uint)ppppppuVar26 & 0xc0000000 | 3);
                uVar41 = uVar35 ^ 1;
                if (uVar18 != 0 || uVar41 != 0) {
                  ppppppuVar46 = (uint ******)(uVar35 * 4 - 4 | (uint)ppppppuVar26 & 0xc0000003);
                }
                ppppppuVar37 = *pppppppuVar44;
                if (*pppppppuVar44 == ppppppuVar26) break;
LAB_009e60e8:
                ppppppuVar26 = ppppppuVar37;
                ClearExclusiveLocal();
                DataMemoryBarrier(0xb);
              }
              DataMemoryBarrier(0xb);
              while (bVar47 = (bool)hasExclusiveAccess(pppppppuVar44), !bVar47) {
                ppppppuVar37 = *pppppppuVar44;
                if (*pppppppuVar44 != ppppppuVar26) goto LAB_009e60e8;
              }
              *pppppppuVar44 = ppppppuVar46;
              DataMemoryBarrier(0xb);
              if (uVar18 == 0 && uVar41 == 0) {
                FUN_009ebe80(local_4c,local_48);
              }
              FUN_009eb694(&local_e8);
              goto LAB_009e6194;
            }
LAB_009e5100:
            ppppppuVar26 = ppppppuVar37;
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
          }
          unaff_r9 = (uint *******)&local_88;
          local_b8._0_1_ = '\x02';
          local_b8._1_1_ = 0;
          local_b8._2_2_ = 0;
          local_88._0_1_ = (char)&local_b8;
          local_88._1_1_ = (byte)((uint)&local_b8 >> 8);
          local_88._2_2_ = (undefined2)((uint)&local_b8 >> 0x10);
LAB_009e6b94:
          unaff_r9[1] = (uint ******)FUN_00facc48;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0041504f,unaff_r9,&DAT_018ae754);
        }
      }
      else if (*piVar16 == 1) {
        if ((pppppppuVar44 != (uint *******)0x0) &&
           (FUN_016a1584(&local_b8,pppppppuVar44),
           CONCAT22(local_b8._2_2_,CONCAT11(local_b8._1_1_,(char)local_b8)) == 0)) {
          FUN_016a4f80(&local_40,pppppppuVar44,(undefined1 *)((int)local_b0 + -1));
          pppppppuVar20 =
               (uint *******)CONCAT22(local_40._2_2_,CONCAT11(local_40._1_1_,(char)local_40));
          if (pppppppuVar20 == (uint *******)0x0) goto LAB_009e4fb0;
          if (((uint)*pppppppuVar20 & uVar35) != 0 || ((uint)pppppppuVar20[1] & uVar41) != 0) {
            local_74 = (uint *******)0x0;
            pppppppuVar30 = pppppppuVar20 + 0xe;
            DataMemoryBarrier(0xb);
            ppppppuVar26 = pppppppuVar20[0xe];
            while (((uint)ppppppuVar26 & 3) != 2) {
              uVar38 = ((uint)ppppppuVar26 & 0x3fffffff) >> 2;
              uVar32 = (uint)ppppppuVar26 & 3 ^ 1;
              uVar39 = uVar38 ^ 1;
              ppppppuVar37 = (uint ******)((uint)ppppppuVar26 & 0xc0000000 | 3);
              unaff_r9 = (uint *******)((uint)ppppppuVar26 & 0xc0000003);
              ppppppuVar46 = *pppppppuVar30;
              if (uVar32 != 0 || uVar39 != 0) {
                ppppppuVar37 = (uint ******)(uVar38 * 4 - 4 | (uint)unaff_r9);
              }
              if (ppppppuVar46 == ppppppuVar26) {
                DataMemoryBarrier(0xb);
                do {
                  bVar47 = (bool)hasExclusiveAccess(pppppppuVar30);
                  if (bVar47) {
                    *pppppppuVar30 = ppppppuVar37;
                    DataMemoryBarrier(0xb);
                    pppppppuVar20 = local_38;
                    if (uVar32 == 0 && uVar39 == 0) {
                      FUN_009ebe80();
                      pppppppuVar20 = extraout_r1;
                    }
                    FUN_016a728c(&local_88,pppppppuVar20,uVar35,uVar41,pppppppuVar44);
                    goto LAB_009e50b4;
                  }
                  ppppppuVar46 = *pppppppuVar30;
                } while (ppppppuVar46 == ppppppuVar26);
              }
              ClearExclusiveLocal();
              DataMemoryBarrier(0xb);
              ppppppuVar26 = ppppppuVar46;
            }
            unaff_r9 = (uint *******)&local_40;
            local_58 = (uint *******)&SUB_00000002;
            local_40._0_1_ = (char)&local_58;
            local_40._1_1_ = (byte)((uint)&local_58 >> 8);
            local_40._2_2_ = (undefined2)((uint)&local_58 >> 0x10);
            goto LAB_009e6b94;
          }
          bStack_7c = local_3c;
          local_7b = bStack_3b;
          uStack_7a = uStack_3a;
          pppppppuStack_78 = local_38;
          local_88._0_1_ = cVar5;
          local_88._1_1_ = bVar6;
          local_88._2_2_ = uVar8;
          bStack_84 = bVar10;
          bStack_83 = bVar12;
          uStack_82 = uVar14;
          pppppppuStack_80 = pppppppuVar20;
          local_74 = pppppppuVar44;
          goto LAB_009e50b4;
        }
LAB_009e4fb0:
        local_74 = (uint *******)0x0;
      }
LAB_009e557c:
      if (*(char *)(iVar36 + 0x11) == '\0') {
LAB_009e56b0:
        if (*(char *)(iVar36 + 0x16) == '\0') {
          if ((*(char *)(iVar36 + 0x15) != '\0') && (iVar36 = piVar24[0xd], iVar36 != 0)) {
            iVar17 = 0;
            local_58 = (uint *******)&DAT_0041545b;
            local_b0 = (uint *******)piVar24[0xe];
            local_b4 = (byte)iVar36;
            bStack_b3 = (byte)((uint)iVar36 >> 8);
            uStack_b2 = (undefined2)((uint)iVar36 >> 0x10);
            local_54 = (uint *******)&DAT_00000001;
            goto LAB_009e5828;
          }
        }
        else {
          bVar47 = *(char *)(iVar36 + 0x15) != '\0';
          iVar36 = 0;
          if (bVar47) {
            iVar36 = piVar24[0xd];
          }
          unaff_r9 = (uint *******)piVar24[1];
          if (bVar47 && iVar36 != 0) {
            local_b0 = (uint *******)piVar24[0xe];
            iVar17 = 0;
            local_b4 = (byte)iVar36;
            bStack_b3 = (byte)((uint)iVar36 >> 8);
            uStack_b2 = (undefined2)((uint)iVar36 >> 0x10);
            local_54 = (uint *******)&DAT_00000001;
            if (*piVar24 == 0) {
              local_58 = (uint *******)&DAT_0041545b;
            }
            else {
              local_58 = (uint *******)&DAT_00000001;
              local_54 = (uint *******)0x0;
              iVar17 = 1;
            }
LAB_009e5828:
            local_63 = 0x15;
            local_67 = 0x15;
            uStack_6b = 0;
            local_70 = 0;
            uStack_7a = 0x8000;
            local_7b = 0;
            bStack_7c = 2;
            pppppppuStack_80 = (uint *******)&DAT_00000001;
            uStack_82 = 0x41;
            bStack_83 = 0x8e;
            bStack_84 = 0xb8;
            local_88._2_2_ = 0x8000;
            local_88._1_1_ = 0;
            local_88._0_1_ = '\0';
            local_93 = 0x15;
            local_97 = 0x15;
            uStack_9a = 0;
            uStack_9e = 0;
            local_a0 = 0;
            local_ac = (code *)0x80000002;
            local_b8._2_2_ = 0x8000;
            local_b8._1_1_ = 0;
            local_b8._0_1_ = '\0';
            local_30 = (uint *******)&local_58;
            local_38 = (uint *******)&local_88;
            local_2c = (code *)&DAT_0157d360;
            local_34 = FUN_01273a6c;
            local_3c = 0x6c;
            bStack_3b = 0x3a;
            uStack_3a = 0x127;
            local_40._0_1_ = (char)&local_b8;
            local_40._1_1_ = (byte)((uint)&local_b8 >> 8);
            local_40._2_2_ = (undefined2)((uint)&local_b8 >> 0x10);
            local_9f = bVar1;
            local_6f = uVar18;
            iVar36 = (**(code **)(local_118 + 0x14))(local_11c,&DAT_0057fce6,&local_40);
            if (iVar36 != 0) goto LAB_009e5888;
            if ((CONCAT22(local_88._2_2_,CONCAT11(local_88._1_1_,(char)local_88)) & 0x7fffffff) != 0
               ) {
              thunk_FUN_016d3fb4(CONCAT22(uStack_82,CONCAT11(bStack_83,bStack_84)));
            }
            iVar36 = CONCAT22(uStack_7a,CONCAT11(local_7b,bStack_7c));
            if ((-0x7ffffffe < iVar36) && (iVar36 != 0)) {
              thunk_FUN_016d3fb4(pppppppuStack_78);
            }
            if ((CONCAT22(local_b8._2_2_,CONCAT11(local_b8._1_1_,(char)local_b8)) & 0x7fffffff) != 0
               ) {
              thunk_FUN_016d3fb4(CONCAT22(uStack_b2,CONCAT11(bStack_b3,local_b4)));
            }
            if ((-0x7ffffffe < (int)local_ac) && (local_ac != (code *)0x0)) {
              thunk_FUN_016d3fb4(local_a8);
            }
          }
          else {
            iVar17 = *piVar24;
          }
          if (iVar17 != 0) {
            bStack_84 = 0x30;
            bStack_83 = 0x34;
            uStack_82 = 0x127;
            bStack_7c = 0x84;
            local_7b = 0xc4;
            uStack_7a = 0xfa;
            pppppppuStack_80 = (uint *******)&local_58;
            local_40._2_2_ = 0;
            local_3c = 0;
            local_b8._2_2_ = 0;
            local_b4 = 0;
            local_74 = (uint *******)&LAB_012739a8;
            pppppppuStack_78 = (uint *******)&local_b8;
            local_88._0_1_ = (char)&local_40;
            local_88._1_1_ = (byte)((uint)&local_40 >> 8);
            local_88._2_2_ = (undefined2)((uint)&local_40 >> 0x10);
            local_40._0_1_ = '\0';
            bStack_3b = 0;
            uStack_3a = 0;
            local_30 = (uint *******)((uint)local_30 & 0xffffff00);
            local_38 = (uint *******)0x1500;
            local_34 = (code *)0x1500;
            local_b8._0_1_ = '\0';
            bStack_b3 = 0;
            uStack_b2 = 0;
            local_a8 = (uint *******)((uint)local_a8 & 0xffffff00);
            local_b0 = (uint *******)0x1500;
            local_ac = (code *)0x1500;
            local_b8._1_1_ = bVar1;
            local_58 = unaff_r9;
            local_40._1_1_ = bVar1;
            iVar36 = (**(code **)(local_118 + 0x14))(local_11c,&DAT_0056ad60,&local_88);
            if (iVar36 != 0) goto LAB_009e6194;
          }
        }
        piVar16 = (int *)piVar16[4];
        bStack_7c = 1;
        local_7b = 0;
        pppppppuStack_80 = (uint *******)CONCAT31(pppppppuStack_80._1_3_,local_114);
        bStack_84 = 0xa8;
        bStack_83 = 0xb4;
        uStack_82 = 0x186;
        local_88._0_1_ = (char)&local_11c;
        local_88._1_1_ = (byte)((uint)&local_11c >> 8);
        local_88._2_2_ = (undefined2)((uint)&local_11c >> 0x10);
        if (piVar16[1] != 0) {
          iVar17 = *(int *)(piVar16[2] + 8);
          piVar24 = (int *)(*piVar16 + 4);
          iVar36 = piVar16[1] * 0xc;
          do {
            if ((*(int *)(piVar24[-1] + 8) == iVar17) && (*piVar24 != 0)) {
              (**(code **)(piVar24[1] + 0xc))(*piVar24,piVar24[-1],&local_88,&DAT_0186b4f8);
            }
            piVar24 = piVar24 + 3;
            iVar36 = iVar36 + -0xc;
          } while (iVar36 != 0);
          if ((local_7b & 1) != 0) goto LAB_009e6194;
        }
        iVar36 = (**(code **)(local_118 + 0x14))(local_11c,&DAT_0041950e,3);
        if (iVar36 == 0) {
          piVar28 = (int *)*piVar23;
          pppppppuVar44 = (uint *******)piVar28[2];
          do {
            ppppppuVar26 = *pppppppuVar44;
            bVar47 = (bool)hasExclusiveAccess(pppppppuVar44);
          } while (!bVar47);
          *pppppppuVar44 = (uint ******)((int)ppppppuVar26 + 1);
          if ((int)ppppppuVar26 < 0) goto LAB_009e6c3c;
          iVar36 = *piVar28;
          puVar43 = (uint *)piVar28[1];
          if (iVar36 == 0) {
            puVar25 = puVar43 + 0x28;
            do {
              uVar35 = *puVar25;
              bVar47 = (bool)hasExclusiveAccess(puVar25);
            } while (!bVar47);
            *puVar25 = uVar35 + 1;
LAB_009e5b94:
            if ((int)uVar35 < 0) goto LAB_009e62b0;
          }
          else {
            if (iVar36 == 1) {
              puVar25 = puVar43 + 0x20;
              do {
                uVar35 = *puVar25;
                bVar47 = (bool)hasExclusiveAccess(puVar25);
              } while (!bVar47);
              *puVar25 = uVar35 + 1;
              goto LAB_009e5b94;
            }
            do {
              uVar35 = *puVar43;
              bVar47 = (bool)hasExclusiveAccess(puVar43);
            } while (!bVar47);
            *puVar43 = uVar35 + 1;
            if (0x7fffffff < uVar35) goto LAB_009e62b0;
          }
          local_b4 = (byte)puVar43;
          bStack_b3 = (byte)((uint)puVar43 >> 8);
          uStack_b2 = (undefined2)((uint)puVar43 >> 0x10);
          local_b8._0_1_ = (char)iVar36;
          local_b8._1_1_ = (byte)((uint)iVar36 >> 8);
          local_b8._2_2_ = (undefined2)((uint)iVar36 >> 0x10);
          local_ac = (code *)CONCAT31(local_ac._1_3_,(char)piVar28[3]);
          local_b0 = pppppppuVar44;
          FUN_0169831c(&local_88,&local_b8,local_120[1],local_120[2]);
          if ((char)local_88 != '\x04') {
            pppppppuVar20 = (uint *******)CONCAT22(uStack_82,CONCAT11(bStack_83,bStack_84));
            if ((*(char *)(*piVar23 + 0x1b) == '\x01') && ((char)local_88 != '\x04')) {
              local_d8 = (uint *******)&local_e8;
              local_d4 = (uint *******)FUN_015ef5b4;
              local_fc = 6;
              local_100 = "stderr";
              local_e8 = (uint *******)
                         CONCAT22(local_88._2_2_,CONCAT11(local_88._1_1_,(char)local_88));
              local_e4 = pppppppuVar20;
              FUN_015ee5cc(&local_58,&DAT_018dd9d8,&DAT_00576f20,&local_d8);
              pppppppuVar20 = local_e4;
              if ((char)local_58 != '\x04') {
                bStack_84 = 4;
                bStack_83 = 0xee;
                uStack_82 = 0x15b;
                local_40._1_1_ = (byte)((uint)local_58 >> 8);
                local_40._2_2_ = (undefined2)((uint)local_58 >> 0x10);
                pppppppuStack_80 = (uint *******)&local_40;
                local_3c = (byte)local_54;
                bStack_3b = (byte)((uint)local_54 >> 8);
                uStack_3a = (undefined2)((uint)local_54 >> 0x10);
                bStack_7c = 0xb4;
                local_7b = 0xf5;
                uStack_7a = 0x15e;
                local_88._0_1_ = '\0';
                local_88._1_1_ = (byte)((uint)&local_100 >> 8);
                local_88._2_2_ = (undefined2)((uint)&local_100 >> 0x10);
                local_40._0_1_ = (char)local_58;
                    /* WARNING: Subroutine does not return */
                FUN_00faa478(&DAT_0056faa6,&local_88,&DAT_018aab78);
              }
              if ((char)local_e8 == '\x03') {
                ppppppuVar26 = *local_e4;
                ppppppuVar46 = local_e4[1];
                if (*ppppppuVar46 != (uint *****)0x0) {
                  (*(code *)*ppppppuVar46)(ppppppuVar26);
                }
LAB_009e5cb0:
                if (ppppppuVar46[1] != (uint *****)0x0) {
                  thunk_FUN_016d3fb4(ppppppuVar26);
                }
                thunk_FUN_016d3fb4(pppppppuVar20);
              }
            }
            else if (((char)local_88 != '\x04') && ((char)local_88 == '\x03')) {
              ppppppuVar26 = *pppppppuVar20;
              ppppppuVar46 = pppppppuVar20[1];
              if (*ppppppuVar46 != (uint *****)0x0) {
                (*(code *)*ppppppuVar46)(ppppppuVar26);
              }
              goto LAB_009e5cb0;
            }
          }
          DataMemoryBarrier(0xb);
          do {
            ppppppuVar26 = *pppppppuVar44;
            bVar47 = (bool)hasExclusiveAccess(pppppppuVar44);
          } while (!bVar47);
          *pppppppuVar44 = (uint ******)((int)ppppppuVar26 - 1);
          if (ppppppuVar26 == (uint ******)0x1) {
            DataMemoryBarrier(0xb);
            FUN_00aaaeec(pppppppuVar44);
          }
          FUN_00a045b4(iVar36,puVar43);
          goto LAB_009e640c;
        }
      }
      else {
        local_ac = (code *)0x80000002;
        iVar17 = piVar24[5];
        local_b0 = (uint *******)piVar24[6];
        local_38 = (uint *******)&local_88;
        bStack_7c = 2;
        local_7b = 0;
        uStack_7a = 0x8000;
        local_6f = (uint)bVar1;
        local_b8._0_1_ = '\0';
        local_b8._1_1_ = 0;
        local_b8._2_2_ = 0x8000;
        local_a0 = 0;
        uStack_9e = 0;
        uStack_9a = 0;
        local_93 = 0x15;
        local_97 = 0x15;
        local_b4 = (byte)iVar17;
        bStack_b3 = (byte)((uint)iVar17 >> 8);
        uStack_b2 = (undefined2)((uint)iVar17 >> 0x10);
        local_70 = 0;
        uStack_6b = 0;
        local_63 = 0x15;
        local_67 = 0x15;
        local_88._0_1_ = '\0';
        local_88._1_1_ = 0;
        local_88._2_2_ = 0x8000;
        pppppppuStack_80 = (uint *******)&DAT_00000001;
        bStack_84 = 0xb8;
        bStack_83 = 0x8e;
        uStack_82 = 0x41;
        local_34 = FUN_01273a6c;
        local_3c = 0x6c;
        bStack_3b = 0x3a;
        uStack_3a = 0x127;
        local_40._0_1_ = (char)&local_b8;
        local_40._1_1_ = (byte)((uint)&local_b8 >> 8);
        local_40._2_2_ = (undefined2)((uint)&local_b8 >> 0x10);
        local_9f = bVar1;
        iVar17 = (**(code **)(local_118 + 0x14))(local_11c,&DAT_00571672,&local_40);
        if (iVar17 == 0) {
          if ((CONCAT22(local_88._2_2_,CONCAT11(local_88._1_1_,(char)local_88)) & 0x7fffffff) != 0)
          {
            thunk_FUN_016d3fb4(CONCAT22(uStack_82,CONCAT11(bStack_83,bStack_84)));
          }
          iVar17 = CONCAT22(uStack_7a,CONCAT11(local_7b,bStack_7c));
          if ((-0x7ffffffe < iVar17) && (iVar17 != 0)) {
            thunk_FUN_016d3fb4(pppppppuStack_78);
          }
          if ((CONCAT22(local_b8._2_2_,CONCAT11(local_b8._1_1_,(char)local_b8)) & 0x7fffffff) != 0)
          {
            thunk_FUN_016d3fb4(CONCAT22(uStack_b2,CONCAT11(bStack_b3,local_b4)));
          }
          if ((-0x7ffffffe < (int)local_ac) && (local_ac != (code *)0x0)) {
            thunk_FUN_016d3fb4(local_a8);
          }
          goto LAB_009e56b0;
        }
LAB_009e5888:
        if ((CONCAT22(local_88._2_2_,CONCAT11(local_88._1_1_,(char)local_88)) & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(CONCAT22(uStack_82,CONCAT11(bStack_83,bStack_84)));
        }
        iVar36 = CONCAT22(uStack_7a,CONCAT11(local_7b,bStack_7c));
        if ((-0x7ffffffe < iVar36) && (iVar36 != 0)) {
          thunk_FUN_016d3fb4(pppppppuStack_78);
        }
        if ((CONCAT22(local_b8._2_2_,CONCAT11(local_b8._1_1_,(char)local_b8)) & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(CONCAT22(uStack_b2,CONCAT11(bStack_b3,local_b4)));
        }
        if ((-0x7ffffffe < (int)local_ac) && (local_ac != (code *)0x0)) {
          thunk_FUN_016d3fb4(local_a8);
        }
      }
    }
    else {
      uVar48 = thunk_FUN_016de0ee(*(char *)(iVar36 + 0x14),0x248);
      uVar18 = *(uint *)((int)uVar48 + (int)((ulonglong)uVar48 >> 0x20));
      if (uVar18 < 3) {
        piVar33 = (int *)FUN_015f7ed0();
        puVar29 = (undefined *)piVar33[4];
        if (puVar29 != (undefined *)0x0) goto LAB_009e4da4;
LAB_009e4e2c:
        ClearExclusiveLocal();
        if ((DAT_018dd9a0 != 0 || DAT_018dd9a4 != 0) &&
           (DAT_018dd9a0 == piVar33[2] && DAT_018dd9a4 == piVar33[3])) {
          iVar17 = 4;
          puVar29 = &DAT_00569764;
          goto LAB_009e4dac;
        }
        if (*(char *)(iVar36 + 0x13) == '\0') {
          iVar17 = piVar33[2];
          iVar19 = piVar33[3];
          local_b4 = (byte)iVar19;
          bStack_b3 = (byte)((uint)iVar19 >> 8);
          uStack_b2 = (undefined2)((uint)iVar19 >> 0x10);
          local_b8._0_1_ = (char)iVar17;
          local_b8._1_1_ = (byte)((uint)iVar17 >> 8);
          local_b8._2_2_ = (undefined2)((uint)iVar17 >> 0x10);
          bStack_84 = 0x80;
          bStack_83 = 0x30;
          uStack_82 = 0x9f;
          local_88._0_1_ = (char)&local_b8;
          local_88._1_1_ = (byte)((uint)&local_b8 >> 8);
          local_88._2_2_ = (undefined2)((uint)&local_b8 >> 0x10);
          iVar17 = (**(code **)(local_118 + 0x14))(local_11c,&DAT_0034b60b,&local_88);
          goto LAB_009e4de4;
        }
LAB_009e4e78:
        DataMemoryBarrier(0xb);
        do {
          iVar17 = *piVar33;
          bVar47 = (bool)hasExclusiveAccess(piVar33);
        } while (!bVar47);
        *piVar33 = iVar17 + -1;
        if (iVar17 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015e92c0(piVar33);
        }
        goto LAB_009e4ea4;
      }
      piVar33 = (int *)(uVar18 - 8);
      do {
        iVar17 = *piVar33;
        bVar47 = (bool)hasExclusiveAccess(piVar33);
      } while (!bVar47);
      *piVar33 = iVar17 + 1;
      if (iVar17 < 0) goto LAB_009e6c3c;
      puVar29 = *(undefined **)(uVar18 + 8);
      if (puVar29 == (undefined *)0x0) goto LAB_009e4e2c;
LAB_009e4da4:
      iVar17 = piVar33[5] + -1;
LAB_009e4dac:
      local_b4 = (byte)iVar17;
      bStack_b3 = (byte)((uint)iVar17 >> 8);
      uStack_b2 = (undefined2)((uint)iVar17 >> 0x10);
      local_b8._0_1_ = (char)puVar29;
      local_b8._1_1_ = (byte)((uint)puVar29 >> 8);
      local_b8._2_2_ = (undefined2)((uint)puVar29 >> 0x10);
      bStack_84 = 100;
      bStack_83 = 0x66;
      uStack_82 = 0x16a;
      local_88._0_1_ = (char)&local_b8;
      local_88._1_1_ = (byte)((uint)&local_b8 >> 8);
      local_88._2_2_ = (undefined2)((uint)&local_b8 >> 0x10);
      iVar17 = (**(code **)(local_118 + 0x14))(local_11c,&DAT_0058d7ec,&local_88);
LAB_009e4de4:
      if (iVar17 == 0) goto LAB_009e4e78;
      DataMemoryBarrier(0xb);
      do {
        iVar19 = *piVar33;
        bVar47 = (bool)hasExclusiveAccess(piVar33);
      } while (!bVar47);
      *piVar33 = iVar19 + -1;
joined_r0x009e4f48:
      if (iVar19 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015e92c0(piVar33);
      }
    }
  }
LAB_009e6194:
  if (*(char *)(*piVar23 + 0x1b) == '\0') goto LAB_009e640c;
  iVar36 = *piVar28;
  iVar17 = *(int *)(iVar36 + 0x14);
  local_58 = *(uint ********)(iVar17 + 0xc);
  local_54 = *(uint ********)(iVar17 + 0x10);
  puVar21 = *(undefined4 **)(*(int *)(iVar36 + 0x10) + 8);
  uVar31 = *puVar21;
  local_74 = (uint *******)puVar21[1];
  uVar40 = puVar21[1];
  pppppppuStack_80 = (uint *******)puVar21[2];
  uVar22 = puVar21[3];
  bStack_7c = (byte)uVar22;
  local_7b = (byte)((uint)uVar22 >> 8);
  uStack_7a = (undefined2)((uint)uVar22 >> 0x10);
  local_b0 = (uint *******)&local_88;
  pppppppuStack_78 = (uint *******)0x0;
  local_88._0_1_ = (char)uVar31;
  local_88._1_1_ = (byte)((uint)uVar31 >> 8);
  local_88._2_2_ = (undefined2)((uint)uVar31 >> 0x10);
  bStack_84 = (byte)uVar40;
  bStack_83 = (byte)((uint)uVar40 >> 8);
  uStack_82 = (undefined2)((uint)uVar40 >> 0x10);
  local_ac = FUN_009e4988;
  local_b4 = 0x60;
  bStack_b3 = 0xd3;
  uStack_b2 = 0x157;
  local_b8._0_1_ = (char)&local_58;
  local_b8._1_1_ = (byte)((uint)&local_58 >> 8);
  local_b8._2_2_ = (undefined2)((uint)&local_58 >> 0x10);
  FUN_00600d2c(&local_40,&DAT_0059135a,&local_b8);
  iVar36 = CONCAT22(local_40._2_2_,CONCAT11(local_40._1_1_,(char)local_40));
  uVar22 = CONCAT22(uStack_3a,CONCAT11(bStack_3b,local_3c));
  piVar23 = (int *)*piVar23;
  pppppppuVar44 = (uint *******)piVar23[2];
  do {
    ppppppuVar26 = *pppppppuVar44;
    bVar47 = (bool)hasExclusiveAccess(pppppppuVar44);
  } while (!bVar47);
  *pppppppuVar44 = (uint ******)((int)ppppppuVar26 + 1);
  if ((int)ppppppuVar26 < 0) {
LAB_009e6c3c:
                    /* WARNING: Does not return */
    pcVar34 = (code *)software_udf(0xfdee,0x9e6c3c);
    (*pcVar34)();
  }
  iVar17 = *piVar23;
  puVar43 = (uint *)piVar23[1];
  if (iVar17 == 0) {
    puVar25 = puVar43 + 0x28;
    do {
      uVar35 = *puVar25;
      bVar47 = (bool)hasExclusiveAccess(puVar25);
    } while (!bVar47);
    *puVar25 = uVar35 + 1;
LAB_009e62d4:
    if ((int)uVar35 < 0) {
LAB_009e62b0:
                    /* WARNING: Subroutine does not return */
      FUN_015bef44();
    }
  }
  else {
    if (iVar17 == 1) {
      puVar25 = puVar43 + 0x20;
      do {
        uVar35 = *puVar25;
        bVar47 = (bool)hasExclusiveAccess(puVar25);
      } while (!bVar47);
      *puVar25 = uVar35 + 1;
      goto LAB_009e62d4;
    }
    do {
      uVar35 = *puVar43;
      bVar47 = (bool)hasExclusiveAccess(puVar43);
    } while (!bVar47);
    *puVar43 = uVar35 + 1;
    if (0x7fffffff < uVar35) goto LAB_009e62b0;
  }
  local_b4 = (byte)puVar43;
  bStack_b3 = (byte)((uint)puVar43 >> 8);
  uStack_b2 = (undefined2)((uint)puVar43 >> 0x10);
  local_b8._0_1_ = (char)iVar17;
  local_b8._1_1_ = (byte)((uint)iVar17 >> 8);
  local_b8._2_2_ = (undefined2)((uint)iVar17 >> 0x10);
  local_ac = (code *)CONCAT31(local_ac._1_3_,(char)piVar23[3]);
  local_b0 = pppppppuVar44;
  FUN_0169831c(&local_88,&local_b8,uVar22);
  if (((char)local_88 != '\x04') && ((char)local_88 != '\x04')) {
    local_e4 = (uint *******)CONCAT22(uStack_82,CONCAT11(bStack_83,bStack_84));
    local_d8 = (uint *******)&local_e8;
    local_d4 = (uint *******)FUN_015ef5b4;
    local_fc = 6;
    local_100 = "stderr";
    local_e8 = (uint *******)CONCAT22(local_88._2_2_,CONCAT11(local_88._1_1_,(char)local_88));
    FUN_015ee5cc(&local_58,&DAT_018dd9d8,&DAT_005948be,&local_d8);
    pppppppuVar20 = local_e4;
    if ((char)local_58 != '\x04') {
      bStack_84 = 4;
      bStack_83 = 0xee;
      uStack_82 = 0x15b;
      local_3c = (byte)local_54;
      bStack_3b = (byte)((uint)local_54 >> 8);
      uStack_3a = (undefined2)((uint)local_54 >> 0x10);
      local_40._1_1_ = (byte)((uint)local_58 >> 8);
      local_40._2_2_ = (undefined2)((uint)local_58 >> 0x10);
      bStack_7c = 0xb4;
      local_7b = 0xf5;
      uStack_7a = 0x15e;
      local_88._0_1_ = '\0';
      local_88._1_1_ = (byte)((uint)&local_100 >> 8);
      local_88._2_2_ = (undefined2)((uint)&local_100 >> 0x10);
      pppppppuStack_80 = (uint *******)&local_40;
      local_40._0_1_ = (char)local_58;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0056faa6,&local_88,&DAT_018aab78);
    }
    if ((char)local_e8 == '\x03') {
      ppppppuVar26 = *local_e4;
      ppppppuVar46 = local_e4[1];
      pppppuVar27 = *ppppppuVar46;
      if (pppppuVar27 != (uint *****)0x0) {
        (*(code *)pppppuVar27)(ppppppuVar26);
      }
      if (ppppppuVar46[1] != (uint *****)0x0) {
        thunk_FUN_016d3fb4(ppppppuVar26);
      }
      thunk_FUN_016d3fb4(pppppppuVar20);
    }
  }
  DataMemoryBarrier(0xb);
  do {
    ppppppuVar26 = *pppppppuVar44;
    bVar47 = (bool)hasExclusiveAccess(pppppppuVar44);
  } while (!bVar47);
  *pppppppuVar44 = (uint ******)((int)ppppppuVar26 - 1);
  if (ppppppuVar26 == (uint ******)0x1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaeec(pppppppuVar44);
  }
  FUN_00a045b4(iVar17,puVar43);
  if (iVar36 != 0) {
    thunk_FUN_016d3fb4(uVar22);
  }
LAB_009e640c:
  local_120[2] = 0;
  if (iVar15 == 0) {
    *piVar45 = *piVar45 + 1;
  }
  else if (local_12c != 0) {
    thunk_FUN_016d3fb4(local_128);
    return;
  }
  return;
code_r0x009e5164:
  ppppppuVar37 = *pppppppuVar30;
  if (*pppppppuVar30 != ppppppuVar26) goto LAB_009e5100;
  goto LAB_009e5158;
}

