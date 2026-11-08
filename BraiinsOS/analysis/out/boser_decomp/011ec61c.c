// FUN_011ec61c @ 011ec61c size=3508 calls_out=23 calls_in=0
// strings: MaybeDone polled after value taken | internal error: entered unreachable code | assertion failed: prev

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_011ec61c(int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined1 uVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  uint uVar26;
  int *unaff_r10;
  int *piVar27;
  int unaff_r11;
  uint *puVar28;
  uint uVar29;
  int *piVar30;
  int extraout_r12;
  int extraout_r12_00;
  uint uVar31;
  uint uVar32;
  bool bVar33;
  undefined8 uVar34;
  int *local_f4;
  undefined2 local_cc;
  undefined1 local_ca;
  int *local_c8;
  int *local_c4;
  int *local_c0;
  int *local_bc;
  int *piStack_b8;
  int *local_b4;
  undefined4 local_b0;
  int *local_ac;
  int *local_a8;
  int *piStack_a4;
  int *local_a0;
  int *local_9c;
  undefined4 local_98;
  int *local_94;
  int local_90;
  int local_8c;
  undefined8 local_88;
  int *local_80;
  int *local_7c;
  int *local_78;
  int *piStack_74;
  int *local_70;
  int *local_6c;
  uint local_68;
  int *local_64;
  int local_60;
  int local_5c;
  int *local_58;
  int *local_54;
  undefined8 local_50;
  int *local_48;
  int *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x15]) {
  case '\0':
    piVar25 = (int *)*param_1;
    piVar30 = param_1 + 2;
    *piVar30 = (int)piVar25;
    iVar4 = param_1[1];
    piVar23 = (int *)param_1[0x12];
    piVar27 = (int *)param_1[0x13];
    piVar15 = piVar27 + param_1[0x14] * 3;
    param_1[3] = iVar4;
    if ((uint)param_1[0x14] < 0x1f) {
      piVar6 = piVar23;
      piVar24 = piVar27;
      local_54 = piVar27;
      local_50._4_4_ = piVar15;
      local_48 = piVar30;
      if (piVar27 != piVar15) {
        local_58 = piVar27;
        local_50._0_4_ = piVar23;
        do {
          uVar34 = CONCAT44(local_50._4_4_,(int *)local_50);
          unaff_r10 = (int *)*local_54;
          unaff_r11 = local_54[1];
          iVar4 = local_54[2];
          local_54 = local_54 + 3;
          piVar15 = (int *)*local_48;
          do {
            iVar16 = *piVar15;
            bVar33 = (bool)hasExclusiveAccess(piVar15);
          } while (!bVar33);
          *piVar15 = iVar16 + 1;
          if (iVar16 < 0) goto LAB_011ed3e4;
          local_ac = (int *)local_48[1];
          local_a8 = (int *)CONCAT31(local_a8._1_3_,(char)iVar4);
          local_b0 = piVar15;
          uVar34 = FUN_012087c8(unaff_r10,unaff_r11,&local_b0);
          piVar6 = (int *)uVar34;
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *unaff_r10;
            bVar33 = (bool)hasExclusiveAccess(unaff_r10);
          } while (!bVar33);
          *unaff_r10 = iVar4 + -1;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(unaff_r10,unaff_r11);
          }
          *piVar24 = 0;
          *(undefined8 *)(piVar24 + 1) = uVar34;
          piVar24 = piVar24 + 3;
        } while (local_54 != local_50._4_4_);
      }
      piVar15 = local_54;
      uVar26 = (int)local_50._4_4_ - (int)local_54;
      local_50._0_4_ = (int *)0x0;
      local_f4 = (int *)(((uint)((int)piVar24 - (int)piVar27) >> 2) * -0x55555555);
      local_50._4_4_ = (int *)&SUB_00000004;
      local_54 = (int *)&SUB_00000004;
      local_58 = (int *)&SUB_00000004;
      local_b0 = piVar27;
      local_ac = local_f4;
      local_a8 = piVar23;
      FUN_011fdb2c(piVar15,(uVar26 >> 2) * -0x55555555);
      local_80 = piVar23;
      local_7c = piVar27;
      local_78 = local_f4;
      FUN_011fdacc(&local_58);
      iVar14 = extraout_r12;
      if (local_f4 < piVar23) {
        iVar4 = FUN_0189bb64(&local_80,local_f4,4,0xc);
        if (iVar4 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620();
        }
        local_f4 = local_78;
        piVar27 = local_7c;
        iVar14 = extraout_r12_00;
      }
      iVar4 = -0x80000000;
    }
    else {
      local_54 = (int *)0x1;
      local_2c = CONCAT22(local_2c._2_2_,1);
      local_30 = (int *)&DAT_ffffffff;
      local_40 = (undefined4 *)0x0;
      local_50._0_4_ = (int *)0x0;
      local_58 = (int *)0x1;
      local_3c = (undefined4 *)0x0;
      local_38 = 0;
      local_34 = 0;
      puVar5 = (undefined4 *)thunk_FUN_01be5118(0x30);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x30);
      }
      *puVar5 = local_58;
      puVar5[1] = local_54;
      puVar5[2] = (int *)local_50;
      puVar5[3] = local_50._4_4_;
      puVar5[4] = local_48;
      puVar5[5] = local_44;
      puVar5[6] = local_40;
      puVar5[7] = local_3c;
      puVar5[8] = local_38;
      puVar5[9] = local_34;
      puVar5[10] = local_30;
      puVar5[0xb] = local_2c;
      local_40 = puVar5 + 2;
      local_44 = (int *)0x0;
      local_50._4_4_ = (int *)0x0;
      local_54 = (int *)&DAT_00000001;
      local_58 = (int *)&DAT_00000001;
      local_50._0_4_ = puVar5;
      local_3c = local_40;
      piVar6 = (int *)thunk_FUN_01be5118(0x20);
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x20);
      }
      *piVar6 = (int)local_58;
      piVar6[1] = (int)local_54;
      piVar6[2] = (int)(int *)local_50;
      piVar6[3] = (int)local_50._4_4_;
      piVar6[4] = (int)local_48;
      piVar6[5] = (int)local_44;
      piVar6[6] = (int)local_40;
      piVar6[7] = (int)local_3c;
      local_c4 = (int *)0x0;
      local_c8 = (int *)0x0;
      local_c0 = piVar27;
      local_bc = piVar27;
      piStack_b8 = piVar23;
      local_b4 = piVar15;
      if (piVar27 != piVar15) {
        unaff_r10 = (int *)0x0;
        local_f4 = (int *)0x0;
        piVar27 = (int *)0x0;
        piVar15 = (int *)0x0;
        iVar16 = 0;
        iVar14 = 8;
        uVar34 = local_50;
        while( true ) {
          local_50._4_4_ = (int *)((ulonglong)uVar34 >> 0x20);
          piVar23 = (int *)*local_bc;
          iVar11 = local_bc[1];
          iVar10 = local_bc[2];
          local_bc = local_bc + 3;
          local_78 = local_c8;
          piStack_74 = local_c4;
          local_7c = local_f4;
          local_68 = local_68 & 0xffffff00;
          do {
            iVar7 = *piVar25;
            bVar33 = (bool)hasExclusiveAccess(piVar25);
          } while (!bVar33);
          *piVar25 = iVar7 + 1;
          local_80 = piVar27;
          local_70 = piVar6;
          local_6c = unaff_r10;
          local_64 = piVar15;
          local_60 = iVar14;
          local_5c = iVar16;
          if (iVar7 < 0) break;
          local_50._0_4_ = (int *)CONCAT31((int3)((ulonglong)uVar34 >> 8),(char)iVar10);
          local_58 = piVar25;
          local_54 = (int *)iVar4;
          uVar34 = FUN_012087c8(piVar23,iVar11,&local_58);
          DataMemoryBarrier(0xb);
          do {
            iVar16 = *piVar23;
            bVar33 = (bool)hasExclusiveAccess(piVar23);
          } while (!bVar33);
          *piVar23 = iVar16 + -1;
          if (iVar16 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(piVar23,iVar11);
          }
          local_a8 = local_78;
          piStack_a4 = piStack_74;
          local_a0 = local_70;
          local_9c = local_6c;
          local_98 = local_68;
          local_94 = local_64;
          local_90 = local_60;
          local_8c = local_5c;
          piVar27 = local_70 + 1;
          local_b0 = (int *)((int)local_80 + 1);
          local_ac = (int *)((int)local_7c + (uint)((int *)0xfffffffe < local_80));
LAB_011eca7c:
          iVar16 = *piVar27;
          do {
            if (iVar16 == -1) goto LAB_011ecad0;
            local_88 = uVar34;
            if (iVar16 < 0) {
              local_54 = (int *)&DAT_0132b6a0;
              local_58 = (int *)&DAT_01d2e878;
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_00590e5f,&local_58,&DAT_01d2e880);
            }
            iVar14 = *piVar27;
            if (iVar14 == iVar16) {
              bVar3 = (bool)hasExclusiveAccess(piVar27);
              if (bVar3) {
                *piVar27 = iVar16 + 1;
              }
              bVar33 = false;
              if (bVar3) {
                DataMemoryBarrier(0xb);
                bVar33 = true;
              }
            }
            else {
              bVar33 = false;
              ClearExclusiveLocal();
            }
            iVar16 = iVar14;
          } while (!bVar33);
          local_30 = local_70;
          local_40 = (undefined4 *)(local_70[2] + 8);
          local_48 = local_80;
          local_44 = local_7c;
          local_54 = (int *)&DAT_00000001;
          local_58 = (int *)&DAT_00000001;
          local_2c = CONCAT22(local_2c._2_2_,1);
          local_34 = 0;
          local_38 = 0;
          local_3c = (undefined4 *)0x0;
          local_50 = uVar34;
          puVar5 = (undefined4 *)thunk_FUN_01be5118(0x30);
          if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(8,0x30);
          }
          *puVar5 = local_58;
          puVar5[1] = local_54;
          *(undefined8 *)(puVar5 + 2) = local_50;
          puVar5[4] = local_48;
          puVar5[5] = local_44;
          puVar5[6] = local_40;
          puVar5[7] = local_3c;
          puVar5[8] = local_38;
          puVar5[9] = local_34;
          puVar5[10] = local_30;
          puVar5[0xb] = local_2c;
          unaff_r10 = puVar5 + 2;
          local_98 = local_98 & 0xffffff00;
          DataMemoryBarrier(0xb);
          do {
            bVar33 = (bool)hasExclusiveAccess(&local_9c);
          } while (!bVar33);
          DataMemoryBarrier(0xb);
          if (local_9c == (int *)0x0) {
            puVar5[8] = 1;
            DataMemoryBarrier(0xb);
            puVar5[6] = 0;
          }
          else {
            do {
              DataMemoryBarrier(0xb);
            } while (local_9c[4] == local_a0[2] + 8);
            puVar5[8] = local_9c[6] + 1;
            DataMemoryBarrier(0xb);
            puVar5[6] = local_9c;
            local_9c[5] = (int)unaff_r10;
          }
          puVar5[9] = 0;
          piVar27 = local_a0 + 6;
          DataMemoryBarrier(0xb);
          do {
            iVar16 = *piVar27;
            bVar33 = (bool)hasExclusiveAccess(piVar27);
          } while (!bVar33);
          *piVar27 = (int)unaff_r10;
          DataMemoryBarrier(0xb);
          *(int **)(iVar16 + 0x1c) = unaff_r10;
          local_c8 = local_a8;
          local_c4 = piStack_a4;
          local_cc = local_98._1_2_;
          local_ca = local_98._3_1_;
          local_f4 = local_ac;
          piVar27 = local_b0;
          piVar6 = local_a0;
          piVar15 = local_94;
          piVar24 = local_94;
          iVar16 = local_8c;
          unaff_r11 = local_8c;
          iVar14 = local_90;
          local_9c = unaff_r10;
          uVar34 = local_50;
          if (local_bc == local_b4) goto LAB_011ecc54;
        }
LAB_011ed3e4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x11ed3e4);
        local_50 = uVar34;
        (*pcVar1)();
      }
      local_f4 = (int *)0x0;
      unaff_r10 = (int *)0x0;
      piVar27 = (int *)0x0;
      piVar24 = (int *)0x0;
      unaff_r11 = 0;
      iVar14 = 8;
LAB_011ecc54:
      piVar23 = (int *)0x0;
      FUN_011fdacc(&local_c0);
      local_58 = local_c8;
      iVar4 = 0;
      local_54 = local_c4;
      local_b0._0_3_ = CONCAT12(local_ca,local_cc);
    }
    param_1[4] = (int)piVar27;
    param_1[6] = (int)local_58;
    param_1[7] = (int)local_54;
    param_1[8] = (int)piVar6;
    param_1[9] = (int)unaff_r10;
    *(char *)(param_1 + 10) = (char)piVar23;
    param_1[5] = (int)local_f4;
    *(undefined2 *)((int)param_1 + 0x29) = (undefined2)local_b0;
    *(undefined1 *)((int)param_1 + 0x2b) = local_b0._2_1_;
    param_1[0xb] = (int)piVar24;
    param_1[0xc] = iVar14;
    param_1[0xd] = unaff_r11;
    param_1[0xe] = iVar4;
    param_1[0xf] = 1;
    param_1[0x10] = 0;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c228d0);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c228d0);
  case '\x03':
    iVar4 = param_1[0xe];
  }
  if (iVar4 != -0x80000000) {
    piVar27 = param_1 + 9;
    piVar15 = param_1 + 8;
    puVar28 = (uint *)(param_1 + 6);
LAB_011ecdb0:
    uVar26 = param_1[0xd];
    if (uVar26 == 0) {
LAB_011ecec4:
      do {
        iVar4 = *piVar27;
        DataMemoryBarrier(0xb);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          do {
            DataMemoryBarrier(0xb);
          } while (*(int *)(iVar4 + 0x10) == *(int *)(*piVar15 + 8) + 8);
          iVar4 = *(int *)(iVar4 + 0x18);
        }
        piVar23 = (int *)*param_2;
        FUN_01348e78(*piVar15 + 0xc,piVar23);
        uVar26 = 0;
        iVar16 = 0;
LAB_011ecf28:
        while( true ) {
          uVar34 = FUN_009d04c8(*piVar15 + 8);
          piVar25 = (int *)((ulonglong)uVar34 >> 0x20);
          if ((int)uVar34 != 0) {
            if ((int)uVar34 != 1) goto LAB_011ed294;
            if (*piVar27 != 0) goto LAB_011ed2a4;
            iVar4 = param_1[0xe];
            *(undefined1 *)(param_1 + 10) = 1;
            param_1[0xe] = 0;
            param_1[0xf] = 1;
            param_1[0x10] = 0;
            if (iVar4 != -0x80000000) goto LAB_011ed2c8;
            goto LAB_011ed2a4;
          }
          if (*piVar25 != 0) break;
          piVar25 = piVar25 + -2;
          DataMemoryBarrier(0xb);
          do {
            iVar14 = *piVar25;
            bVar33 = (bool)hasExclusiveAccess(piVar25);
          } while (!bVar33);
          *piVar25 = iVar14 + -1;
          if (iVar14 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00a9050c();
          }
        }
        iVar14 = FUN_00e7bb10(piVar15,piVar25);
        pcVar9 = (char *)(iVar14 + 0x2c);
        DataMemoryBarrier(0xb);
        do {
          cVar2 = *pcVar9;
          bVar33 = (bool)hasExclusiveAccess(pcVar9);
        } while (!bVar33);
        *pcVar9 = '\0';
        DataMemoryBarrier(0xb);
        if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: prev",0x16,&DAT_01c23978);
        }
        *(undefined1 *)(iVar14 + 0x2d) = 0;
        piVar30 = (int *)(iVar14 + 8);
        local_50._0_4_ = (int *)0x0;
        local_b0 = (int *)&DAT_01c23988;
        local_58 = &local_b0;
        uVar21 = piVar25[2];
        uVar17 = piVar25[3];
        local_ac = piVar30;
        local_54 = local_58;
        iVar10 = (**(code **)(piVar25[1] + 0xc))(*piVar25,&local_58);
        if (iVar10 != 0) goto code_r0x011ed010;
        FUN_01209598(iVar14);
        if (uVar21 == *puVar28 && uVar17 == param_1[7]) goto LAB_011ed1dc;
        uVar26 = param_1[0xd];
        if (uVar26 == param_1[0xb]) {
          FUN_00a20f00(param_1 + 0xb);
        }
        iVar4 = param_1[0xc];
        param_1[0xd] = uVar26 + 1;
        puVar8 = (uint *)(iVar4 + uVar26 * 8);
        *puVar8 = uVar21;
        puVar8[1] = uVar17;
        uVar12 = 0;
        if (uVar26 != 0) {
          do {
            uVar32 = uVar26 - 1;
            uVar31 = uVar32 >> 1;
            puVar8 = (uint *)(iVar4 + uVar31 * 8);
            uVar22 = *puVar8;
            uVar18 = puVar8[1];
            if ((int)(uVar17 - (uVar18 + (uVar21 < uVar22))) < 0 ==
                (SBORROW4(uVar17,uVar18) != SBORROW4(uVar17 - uVar18,(uint)(uVar21 < uVar22)))) {
              uVar12 = uVar26;
              break;
            }
            puVar8 = (uint *)(iVar4 + uVar26 * 8);
            *puVar8 = uVar22;
            puVar8[1] = uVar18;
            uVar26 = uVar31;
          } while (1 < uVar32);
        }
        puVar8 = (uint *)(iVar4 + uVar12 * 8);
        *puVar8 = uVar21;
        puVar8[1] = uVar17;
      } while( true );
    }
    puVar8 = (uint *)param_1[0xc];
    uVar17 = *puVar8;
    uVar21 = puVar8[1];
    if (uVar17 != *puVar28 || uVar21 != param_1[7]) goto LAB_011ecec4;
    uVar12 = uVar26 - 1;
    param_1[0xd] = uVar12;
    *puVar28 = uVar17 + 1;
    param_1[7] = uVar21 + (0xfffffffe < uVar17);
    if (uVar12 != 0) {
      uVar21 = uVar26 - 3;
      uVar31 = puVar8[uVar12 * 2];
      uVar17 = 0;
      *puVar8 = uVar31;
      if (uVar12 < 2) {
        uVar21 = 0;
      }
      uVar32 = (puVar8 + uVar12 * 2)[1];
      uVar12 = 1;
      iVar4 = 0;
      puVar8[1] = uVar32;
      if (3 < uVar26) {
        uVar18 = 0;
        do {
          uVar29 = puVar8[iVar4 * 2 + 5];
          uVar22 = (puVar8 + uVar12 * 2)[1];
          bVar33 = puVar8[uVar12 * 2] < puVar8[iVar4 * 2 + 4];
          uVar17 = uVar12;
          if ((int)(uVar22 - (uVar29 + bVar33)) < 0 ==
              (SBORROW4(uVar22,uVar29) != SBORROW4(uVar22 - uVar29,(uint)bVar33))) {
            uVar17 = uVar12 + 1;
          }
          uVar12 = (puVar8 + uVar17 * 2)[1];
          puVar8[uVar18 * 2] = puVar8[uVar17 * 2];
          (puVar8 + uVar18 * 2)[1] = uVar12;
          uVar12 = uVar17 << 1 | 1;
          iVar4 = uVar17 << 1;
          uVar18 = uVar17;
        } while (uVar17 * 2 < uVar21);
      }
      if (iVar4 == uVar26 - 3) {
        puVar13 = puVar8 + uVar12 * 2;
        puVar8[uVar17 * 2] = *puVar13;
        *puVar13 = uVar31;
        (puVar8 + uVar17 * 2)[1] = puVar13[1];
        puVar13[1] = uVar32;
        uVar17 = uVar12;
LAB_011ed180:
        do {
          uVar21 = uVar17 - 1;
          uVar26 = uVar21 >> 1;
          uVar12 = puVar8[uVar26 * 2];
          uVar18 = (puVar8 + uVar26 * 2)[1];
          if ((int)(uVar32 - (uVar18 + (uVar31 < uVar12))) < 0 ==
              (SBORROW4(uVar32,uVar18) != SBORROW4(uVar32 - uVar18,(uint)(uVar31 < uVar12))))
          goto LAB_011ed1c4;
          puVar8[uVar17 * 2] = uVar12;
          (puVar8 + uVar17 * 2)[1] = uVar18;
          uVar17 = uVar26;
        } while (1 < uVar21);
      }
      else {
        puVar8[uVar17 * 2] = uVar31;
        (puVar8 + uVar17 * 2)[1] = uVar32;
        if (uVar17 != 0) goto LAB_011ed180;
      }
      uVar17 = 0;
LAB_011ed1c4:
      puVar8[uVar17 * 2] = uVar31;
      (puVar8 + uVar17 * 2)[1] = uVar32;
    }
    goto LAB_011ed1cc;
  }
  piVar27 = (int *)param_1[4];
  iVar4 = param_1[5];
  if (iVar4 == 0) {
    param_1[4] = 4;
    param_1[5] = 0;
LAB_011ed2bc:
    FUN_011fe408(piVar27,iVar4);
LAB_011ed2c8:
    FUN_011ea0f0(param_1 + 4);
    piVar27 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar27;
      bVar33 = (bool)hasExclusiveAccess(piVar27);
    } while (!bVar33);
    *piVar27 = iVar4 + -1;
    uVar20 = 1;
    uVar19 = 0;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[2],param_1[3]);
    }
  }
  else {
    bVar33 = true;
    piVar15 = piVar27;
    uVar34 = local_50;
    do {
      while( true ) {
        piVar23 = piVar15 + 3;
        local_50 = uVar34;
        if (*piVar15 == 0) break;
        if (*piVar15 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("MaybeDone polled after value taken",0x22,&DAT_01c23968);
        }
LAB_011ecd6c:
        local_50._4_4_ = (int *)((ulonglong)uVar34 >> 0x20);
        local_50._0_4_ = (int *)uVar34;
        piVar15 = piVar23;
        if (piVar23 == piVar27 + iVar4 * 3) {
          if (bVar33) {
            param_1[4] = 4;
            param_1[5] = 0;
            iVar16 = iVar4;
            piVar15 = piVar27;
            while( true ) {
              if (*piVar15 != 1) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb0cc(&DAT_01c24560);
              }
              local_58 = (int *)*piVar15;
              local_54 = (int *)piVar15[1];
              local_50._0_4_ = (int *)piVar15[2];
              *piVar15 = 2;
              if (local_58 != (int *)0x1) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c244dc);
              }
              piVar15 = piVar15 + 3;
              iVar16 = iVar16 + -1;
              local_58 = (int *)&DAT_00000001;
              if (iVar16 == 0) break;
              local_58 = (int *)&DAT_00000001;
            }
            goto LAB_011ed2bc;
          }
          goto LAB_011ed2a4;
        }
      }
      iVar16 = (**(code **)(piVar15[2] + 0xc))(piVar15[1],param_2);
      if (iVar16 == 0) {
        if (*piVar15 == 0) {
          FUN_01139b38(piVar15[1],piVar15[2]);
        }
        *piVar15 = 1;
        uVar34 = local_50;
        goto LAB_011ecd6c;
      }
      bVar33 = false;
      piVar15 = piVar23;
      uVar34 = local_50;
    } while (piVar23 != piVar27 + iVar4 * 3);
LAB_011ed2a4:
    uVar20 = 3;
    uVar19 = 1;
  }
  *(undefined1 *)(param_1 + 0x15) = uVar20;
  return uVar19;
LAB_011ecad0:
  HintYield();
  goto LAB_011eca7c;
code_r0x011ed010:
  DataMemoryBarrier(0xb);
  if (*(char *)(iVar14 + 0x2d) != '\0') {
    uVar26 = uVar26 + 1;
  }
  iVar16 = iVar16 + 1;
  do {
    iVar10 = *piVar27;
    bVar33 = (bool)hasExclusiveAccess(piVar27);
  } while (!bVar33);
  *piVar27 = (int)piVar30;
  DataMemoryBarrier(0xb);
  if (iVar10 == 0) {
    *(undefined4 *)(iVar14 + 0x20) = 1;
    DataMemoryBarrier(0xb);
    *(undefined4 *)(iVar14 + 0x18) = 0;
  }
  else {
    do {
      DataMemoryBarrier(0xb);
    } while (*(int *)(iVar10 + 0x10) == *(int *)(*piVar15 + 8) + 8);
    *(int *)(iVar14 + 0x20) = *(int *)(iVar10 + 0x18) + 1;
    DataMemoryBarrier(0xb);
    *(int *)(iVar14 + 0x18) = iVar10;
    *(int **)(iVar10 + 0x14) = piVar30;
  }
  if ((1 < uVar26) || (iVar16 == iVar4)) {
LAB_011ed294:
    (**(code **)(*piVar23 + 8))(piVar23[1]);
    goto LAB_011ed2a4;
  }
  goto LAB_011ecf28;
LAB_011ed1dc:
  *puVar28 = uVar21 + 1;
  param_1[7] = uVar17 + (0xfffffffe < uVar21);
LAB_011ed1cc:
  FUN_0121f860(param_1 + 0xe);
  goto LAB_011ecdb0;
}

