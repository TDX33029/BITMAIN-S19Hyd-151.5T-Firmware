// FUN_010bd674 @ 010bd674 size=3132 calls_out=24 calls_in=4
// strings: boser::bosminer::contextopen/boser/boser/src/bosminer/context.rsevent open/boser/boser/src/bosminer/context.rs:524event open/boser/boser/src/bosminer/context.rs:353event open/boser/boser/src/bosminer/context.rs:393event open/boser/boser/src/bosminer/context.rs:380event open/boser/boser/src/bosminer/context.rs:209event open/boser/boser/src/bosminer/context.rs:333event open/boser/boser/src/bosminer/context.rs:637event open/boser/boser/src/bosminer/context.rs:639event open/boser/boser/src/bosminer/context.rs:690event open/boser/boser/src/bosminer/context.rs:683event open/boser/boser/src/bosminer/context.rs:698 | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::bosminer::contextopen/boser/boser/src/bosminer/context.rsevent open/boser/boser/src/bosminer/context.rs:524event open/boser/boser/src/bosminer/context.rs:353event open/boser/boser/src/bosminer/context.rs:393event open/boser/boser/src/bosminer/context.rs:380event open/boser/boser/src/bosminer/context.rs:209event open/boser/boser/src/bosminer/context.rs:333event open/boser/boser/src/bosminer/context.rs:637event open/boser/boser/src/bosminer/context.rs:639event open/boser/boser/src/bosminer/context.rs:690event open/boser/boser/src/bosminer/context.rs:683event open/boser/boser/src/bosminer/context.rs:698 | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::bosminer::contextopen/boser/boser/src/bosminer/context.rsevent open/boser/boser/src/bosminer/context.rs:524event open/boser/boser/src/bosminer/context.rs:353event open/boser/boser/src/bosminer/context.rs:393event open/boser/boser/src/bosminer/context.rs:380event open/boser/boser/src/bosminer/context.rs:209event open/boser/boser/src/bosminer/context.rs:333event open/boser/boser/src/bosminer/context.rs:637event open/boser/boser/src/bosminer/context.rs:639event open/boser/boser/src/bosminer/context.rs:690event open/boser/boser/src/bosminer/context.rs:683event open/boser/boser/src/bosminer/context.rs:698 | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_010bd674(uint *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  undefined4 *puVar18;
  char *pcVar19;
  uint uVar20;
  uint *******pppppppuVar21;
  uint uVar22;
  undefined4 uVar23;
  ulonglong uVar24;
  uint *******local_118;
  uint ******local_114;
  uint ******local_110;
  uint *****local_10c;
  undefined4 local_108;
  uint ******local_104;
  undefined1 *local_100;
  undefined4 *local_fc;
  undefined *local_f8;
  uint *******local_f4;
  uint *******local_f0;
  uint ******local_ec;
  uint ******local_e8;
  undefined8 local_e4;
  undefined4 *local_dc;
  uint ******local_d8;
  uint *******local_d4;
  uint *******local_d0;
  uint ******local_cc;
  uint ******local_c8;
  code *local_c4;
  uint *******local_c0;
  undefined1 local_bc;
  undefined2 uStack_bb;
  undefined1 uStack_b9;
  uint ******local_b8;
  uint *******local_b0;
  uint ******local_ac;
  uint ******local_a8;
  uint *******local_a0;
  code *local_9c;
  uint *******local_98;
  uint ******ppppppuStack_94;
  uint ******local_90;
  code *pcStack_8c;
  int *local_88;
  int local_84;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  uint local_70;
  uint local_6c;
  uint local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int *local_50;
  int local_4c;
  
  puVar6 = (uint *)((uint)&local_a0 | 4);
  uVar16 = *param_1;
  puVar7 = (uint *)((uint)&local_10c | 1);
  puVar13 = param_1 + 4;
  puVar12 = (undefined4 *)((uint)&local_a0 | 0x10);
  do {
    if ((uVar16 & 1) == 0) {
      if (param_1[0x14] == 0) {
        uVar10 = param_1[0x13];
        if (param_1[0x11] == uVar10) {
          return 0;
        }
        param_1[0x13] = uVar10 - 0xc;
        local_a0 = *(uint ********)(uVar10 - 0xc);
        local_9c = *(code **)(uVar10 - 8);
        local_98 = *(uint ********)(uVar10 - 4);
      }
      else {
        param_1[0x14] = 0;
        FUN_010bd330(&local_a0,param_1 + 0x10);
      }
      pppppppuVar21 = local_a0;
      if (local_a0 == (uint *******)&DAT_80000000) {
        return 0;
      }
      if (local_a0 == (uint *******)&DAT_80000001) {
        return 1;
      }
      uVar10 = *puVar6;
      uVar20 = puVar6[1];
      FUN_010be674(param_1);
      *param_1 = 1;
      param_1[1] = (uint)pppppppuVar21;
      *(undefined1 *)(param_1 + 0xf) = 0;
      param_1[2] = uVar10;
      param_1[3] = uVar20;
    }
    else {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0xf]) {
      case '\0':
        *puVar13 = param_1[1];
        param_1[5] = param_1[2];
        param_1[6] = param_1[3];
        if (DAT_01d50f88 < 2) {
          if (1 < DAT_01d4c8f8 - 1) {
            if (DAT_01d4c8f8 != 0) {
              cVar5 = FUN_01aaafa8(&DAT_01d4c8f0);
              if (cVar5 != '\0') goto LAB_010bd770;
            }
            goto LAB_010bd9bc;
          }
LAB_010bd770:
          iVar8 = FUN_01aaa278(DAT_01d4c8f0);
          if (iVar8 == 0) goto LAB_010bd9bc;
          if (*(code **)(DAT_01d4c8f0 + 0x20) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c20314);
          }
          local_98 = *(uint ********)(DAT_01d4c8f0 + 0x24);
          ppppppuStack_94 = *(uint *******)(DAT_01d4c8f0 + 0x28);
          local_90 = (uint ******)0x0;
          local_d8 = (uint ******)param_1[5];
          local_d4 = (uint *******)param_1[6];
          local_dc = (undefined4 *)(DAT_01d4c8f0 + 0x1c);
          local_a0 = (uint *******)*local_dc;
          local_bc = SUB41(&local_f8,0);
          uStack_bb = (undefined2)((uint)&local_f8 >> 8);
          uStack_b9 = (undefined1)((uint)&local_f8 >> 0x18);
          local_c0 = (uint *******)&local_a0;
          local_b8 = (uint ******)&DAT_01d2ea4c;
          local_f4 = &local_104;
          local_f8 = &DAT_0058d45c;
          local_100 = &LAB_019ba78c;
          local_104 = (uint ******)&local_d8;
          local_e4._4_4_ = (undefined **)&DAT_00000001;
          local_e4._0_4_ = (uint *******)&local_c0;
          local_9c = *(code **)(DAT_01d4c8f0 + 0x20);
          FUN_01aaaecc(DAT_01d4c8f0,&local_e4);
          iVar8 = DAT_01d4c8f0;
          local_e4 = CONCAT44(local_e4._4_4_,(uint *******)local_e4);
          if ((DAT_01d51ae9 == '\0') &&
             (local_e4 = CONCAT44(local_e4._4_4_,(uint *******)local_e4), 3 < DAT_01d51b00)) {
            local_ac = *(uint *******)(DAT_01d4c8f0 + 0x14);
            local_a8 = *(uint *******)(DAT_01d4c8f0 + 0x18);
            local_b0 = (uint *******)&SUB_00000004;
            DataMemoryBarrier(0xb);
            pcVar19 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar19 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar18 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar18 = &DAT_01cfc5e0;
            }
            iVar9 = (*(code *)puVar18[3])(pcVar19,&local_b0);
            if (iVar9 != 0) {
              local_d0 = local_b0;
              local_cc = local_ac;
              local_c8 = local_a8;
              FUN_01aaa328(iVar8,pcVar19,puVar18[4],&local_d0,&local_e4);
            }
          }
        }
        else {
LAB_010bd9bc:
          iVar8 = DAT_01d4c8f0;
          if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
            local_114 = *(uint *******)(DAT_01d4c8f0 + 0x14);
            local_110 = *(uint *******)(DAT_01d4c8f0 + 0x18);
            local_118 = (uint *******)&SUB_00000004;
            DataMemoryBarrier(0xb);
            pcVar19 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar19 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar18 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar18 = &DAT_01cfc5e0;
            }
            iVar9 = (*(code *)puVar18[3])(pcVar19,&local_118);
            if (iVar9 != 0) {
              if (*(code **)(DAT_01d4c8f0 + 0x20) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c20314);
              }
              local_98 = *(uint ********)(DAT_01d4c8f0 + 0x24);
              ppppppuStack_94 = *(uint *******)(DAT_01d4c8f0 + 0x28);
              local_90 = (uint ******)0x0;
              local_ac = (uint ******)&local_d8;
              local_104 = (uint ******)param_1[5];
              local_100 = (undefined1 *)param_1[6];
              local_b0 = (uint *******)&local_a0;
              local_a8 = (uint ******)&DAT_01d2ea4c;
              local_d4 = (uint *******)&local_e4;
              local_d8 = (uint ******)&DAT_0058d45c;
              local_e4._4_4_ = (undefined **)&LAB_019ba78c;
              local_e4._0_4_ = &local_104;
              local_bc = 1;
              uStack_bb = 0;
              uStack_b9 = 0;
              local_c0 = (uint *******)&local_b0;
              local_d0 = local_118;
              local_cc = local_114;
              local_c8 = local_110;
              local_b8 = (uint ******)(DAT_01d4c8f0 + 0x1c);
              local_a0 = (uint *******)*(uint *******)(DAT_01d4c8f0 + 0x1c);
              local_9c = *(code **)(DAT_01d4c8f0 + 0x20);
              FUN_01aaa328(iVar8,pcVar19,puVar18[4],&local_d0,&local_c0);
            }
          }
        }
        *(undefined1 *)(param_1 + 0xe) = 0;
        param_1[7] = (uint)puVar13;
        puVar11 = puVar13;
LAB_010bdb2c:
        param_1[8] = (uint)puVar11;
        FUN_019afae4(&local_b0,puVar11[1],puVar11[2]);
        param_1[9] = (uint)local_b0;
        param_1[10] = (uint)local_ac;
        param_1[0xb] = (uint)local_a8;
        *(undefined1 *)(param_1 + 0xd) = 0;
switchD_010bd998_caseD_0:
        uVar10 = param_1[9];
        uVar20 = param_1[10];
        uVar22 = param_1[0xb];
        uVar24 = FUN_019ef7f4(&DAT_01c230d0);
        iVar9 = (int)(uVar24 >> 0x20);
        iVar8 = 0x218;
        if ((uVar24 & 1) != 0) {
          iVar8 = 0x148;
        }
        uVar23 = *(undefined4 *)(iVar9 + iVar8);
        do {
          do {
            iVar8 = DAT_01d50474;
            uVar4 = DAT_01d50470;
            uVar14 = DAT_01d50470 + 1;
            iVar17 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
            bVar2 = (bool)hasExclusiveAccess(0x1d50470);
          } while (!bVar2);
          bVar2 = DAT_01d50470 == 0;
          bVar3 = DAT_01d50474 == 0;
          DAT_01d50470 = uVar14;
          DAT_01d50474 = iVar17;
        } while (bVar2 && bVar3);
        iVar17 = 0x200;
        if ((uVar24 & 1) != 0) {
          iVar17 = 0x138;
        }
        iVar9 = iVar9 + iVar17;
        piVar15 = *(int **)(iVar9 + 8);
        local_e4 = uVar24;
        if (piVar15 != (int *)0x0) {
          do {
            iVar17 = *piVar15;
            bVar2 = (bool)hasExclusiveAccess(piVar15);
          } while (!bVar2);
          *piVar15 = iVar17 + 1;
          if (iVar17 < 0) {
LAB_010be300:
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0x10be300);
            (*pcVar1)();
          }
          iVar9 = *(int *)(iVar9 + 0xc);
          do {
            iVar17 = *piVar15;
            bVar2 = (bool)hasExclusiveAccess(piVar15);
          } while (!bVar2);
          *piVar15 = iVar17 + 1;
          if (iVar17 < 0) goto LAB_010be300;
        }
        *puVar12 = 0;
        puVar12[1] = 0;
        local_78 = 0;
        local_80 = uVar4;
        iStack_7c = iVar8;
        local_9c = (code *)0x0;
        local_a0 = (uint *******)&DAT_000000cc;
        local_58 = 0;
        local_5c = 0;
        local_60 = 0;
        local_c0 = (uint *******)0x0;
        local_98 = (uint *******)&DAT_01c1a1fc;
        local_88 = piVar15;
        local_84 = iVar9;
        local_70 = uVar10;
        local_6c = uVar20;
        local_68 = uVar22;
        local_50 = piVar15;
        local_4c = iVar9;
        iVar8 = FUN_01be5878(&local_c0,0x20,0x60);
        pppppppuVar21 = local_c0;
        if ((iVar8 != 0) || (local_c0 == (uint *******)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(0x20,0x60);
        }
        FUN_01bed4e2(local_c0,&local_a0,0x60);
        FUN_019f02d4(&local_a0,uVar23,pppppppuVar21,1,uVar24);
        if (((uint)local_a0 & 0xfe) != 4) {
          local_bc = SUB41(local_9c,0);
          local_c0 = local_a0;
          uStack_b9 = (undefined1)((uint)local_9c >> 0x18);
          uStack_bb = (undefined2)((uint)local_9c >> 8);
          local_9c = FUN_019a7d7c;
          local_a0 = (uint *******)&local_c0;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ab28b,&local_a0,&DAT_01c230d0);
        }
        FUN_00668d74(&local_e4);
        param_1[0xc] = (uint)pppppppuVar21;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20324);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c20324);
      case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)param_1[0xe]) {
        case '\0':
          puVar11 = (uint *)param_1[7];
          goto LAB_010bdb2c;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c230c0);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c230c0);
        }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)param_1[0xd]) {
        case '\0':
          goto switchD_010bd998_caseD_0;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c230e0);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c230e0);
        case '\x03':
          pppppppuVar21 = (uint *******)param_1[0xc];
        }
      }
      FUN_014b4c40(&local_a0,pppppppuVar21,param_2);
      if (((uint)local_a0 & 1) != 0) {
        *(undefined1 *)(param_1 + 0xd) = 3;
        goto LAB_010be1bc;
      }
      local_d0 = local_98;
      local_cc = ppppppuStack_94;
      local_c8 = local_90;
      local_c4 = pcStack_8c;
      piVar15 = (int *)param_1[0xc];
      if (*piVar15 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar2 = (bool)hasExclusiveAccess(piVar15);
        if (!bVar2) goto LAB_010bdd44;
        *piVar15 = 0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_010bdd44:
        (**(code **)(piVar15[2] + 0x10))();
      }
      if (local_d0 == (uint *******)0x0 && local_cc == (uint ******)0x0) {
        uVar10 = (uint)local_c8 >> 8 | (int)local_c4 << 0x18;
        pppppppuVar21 = (uint *******)local_c8;
        pcVar1 = local_c4;
      }
      else {
        FUN_019a18a8(&local_a0,0x28,"background task failed",0x16);
        pcVar1 = local_9c;
        pppppppuVar21 = local_a0;
        FUN_00b938dc(&local_d0);
        uVar10 = (uint)pppppppuVar21 >> 8 | (int)pcVar1 << 0x18;
      }
      *(undefined1 *)(param_1 + 0xd) = 1;
      if (((uint)pppppppuVar21 & 0xff) == 5) {
LAB_010be1bc:
        *(undefined1 *)(param_1 + 0xf) = 3;
        *(undefined1 *)(param_1 + 0xe) = 3;
        return 1;
      }
      FUN_00b71be0(param_1 + 9);
      *(undefined1 *)(param_1 + 0xe) = 1;
      if (((uint)pppppppuVar21 & 0xff) != 4) {
        local_10c._0_1_ = SUB41(pppppppuVar21,0);
        *puVar7 = uVar10;
        *(short *)(puVar7 + 1) = (short)((uint)pcVar1 >> 8);
        *(char *)((int)puVar7 + 6) = (char)((uint)pcVar1 >> 0x18);
        if (DAT_01d50f88 < 4) {
          if (1 < DAT_01d4c904 - 1) {
            if (DAT_01d4c904 != 0) {
              cVar5 = FUN_01aaafa8(&DAT_01d4c8fc);
              if (cVar5 != '\0') goto LAB_010bde20;
            }
            goto LAB_010bdfb4;
          }
LAB_010bde20:
          iVar8 = FUN_01aaa278(DAT_01d4c8fc);
          if (iVar8 == 0) goto LAB_010bdfb4;
          if (*(code **)(DAT_01d4c8fc + 0x20) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c20334);
          }
          local_98 = *(uint ********)(DAT_01d4c8fc + 0x24);
          ppppppuStack_94 = *(uint *******)(DAT_01d4c8fc + 0x28);
          local_90 = (uint ******)0x0;
          local_f4 = (uint *******)&local_d0;
          local_d8 = (uint ******)param_1[5];
          local_d4 = (uint *******)param_1[6];
          local_fc = (undefined4 *)(DAT_01d4c8fc + 0x1c);
          local_a0 = (uint *******)*local_fc;
          local_f8 = &DAT_00400dad;
          local_c4 = FUN_019a7d7c;
          local_c8 = &local_10c;
          local_cc = (uint ******)&LAB_019ba78c;
          local_d0 = &local_d8;
          local_dc = (undefined4 *)&DAT_01d2ea4c;
          local_e4._4_4_ = &local_f8;
          local_e4._0_4_ = (uint *******)&local_a0;
          local_100 = (undefined1 *)0x1;
          local_104 = (uint ******)&local_e4;
          local_9c = *(code **)(DAT_01d4c8fc + 0x20);
          FUN_01aaaecc(DAT_01d4c8fc,&local_104);
          iVar8 = DAT_01d4c8fc;
          local_e4 = CONCAT44(local_e4._4_4_,(uint *******)local_e4);
          if ((DAT_01d51ae9 == '\0') &&
             (local_e4 = CONCAT44(local_e4._4_4_,(uint *******)local_e4), 1 < DAT_01d51b00)) {
            uVar23 = *(undefined4 *)(DAT_01d4c8fc + 0x14);
            local_b8 = *(uint *******)(DAT_01d4c8fc + 0x18);
            local_bc = (undefined1)uVar23;
            uStack_bb = (undefined2)((uint)uVar23 >> 8);
            uStack_b9 = (undefined1)((uint)uVar23 >> 0x18);
            local_c0 = (uint *******)0x2;
            DataMemoryBarrier(0xb);
            pcVar19 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar19 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar18 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar18 = &DAT_01cfc5e0;
            }
            iVar9 = (*(code *)puVar18[3])(pcVar19,&local_c0);
            if (iVar9 != 0) {
              local_ac = (uint ******)CONCAT13(uStack_b9,CONCAT21(uStack_bb,local_bc));
              local_b0 = local_c0;
              local_a8 = local_b8;
              FUN_01aaa328(iVar8,pcVar19,puVar18[4],&local_b0,&local_104);
            }
          }
        }
        else {
LAB_010bdfb4:
          iVar8 = DAT_01d4c8fc;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_ec = *(uint *******)(DAT_01d4c8fc + 0x14);
            local_e8 = *(uint *******)(DAT_01d4c8fc + 0x18);
            local_f0 = (uint *******)0x2;
            DataMemoryBarrier(0xb);
            pcVar19 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar19 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar18 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar18 = &DAT_01cfc5e0;
            }
            iVar9 = (*(code *)puVar18[3])(pcVar19,&local_f0);
            if (iVar9 != 0) {
              if (*(code **)(DAT_01d4c8fc + 0x20) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c20334);
              }
              local_98 = *(uint ********)(DAT_01d4c8fc + 0x24);
              ppppppuStack_94 = *(uint *******)(DAT_01d4c8fc + 0x28);
              local_90 = (uint ******)0x0;
              local_d4 = (uint *******)&local_d0;
              local_104 = (uint ******)param_1[5];
              local_100 = (undefined1 *)param_1[6];
              local_d8 = (uint ******)&DAT_00400dad;
              local_c4 = FUN_019a7d7c;
              local_c8 = &local_10c;
              local_cc = (uint ******)&LAB_019ba78c;
              local_d0 = &local_104;
              local_b8 = (uint ******)&DAT_01d2ea4c;
              local_bc = SUB41(&local_d8,0);
              uStack_bb = (undefined2)((uint)&local_d8 >> 8);
              uStack_b9 = (undefined1)((uint)&local_d8 >> 0x18);
              local_c0 = (uint *******)&local_a0;
              local_e4._4_4_ = (undefined **)&DAT_00000001;
              local_e4._0_4_ = (uint *******)&local_c0;
              local_b0 = local_f0;
              local_ac = local_ec;
              local_a8 = local_e8;
              local_dc = (undefined4 *)(DAT_01d4c8fc + 0x1c);
              local_a0 = (uint *******)*(uint *******)(DAT_01d4c8fc + 0x1c);
              local_9c = *(code **)(DAT_01d4c8fc + 0x20);
              FUN_01aaa328(iVar8,pcVar19,puVar18[4],&local_b0,&local_e4);
            }
          }
        }
        FUN_00b9391c(local_10c._0_1_,local_108);
      }
      FUN_019bb7e0(param_1[4],param_1[5]);
      *(undefined1 *)(param_1 + 0xf) = 1;
      FUN_010be674(param_1);
      *param_1 = 0;
    }
    uVar16 = uVar16 ^ 1;
  } while( true );
}

