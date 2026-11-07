// FUN_00b188c0 @ 00b188c0 size=2884 calls_out=17 calls_in=0
// strings: boser::web::grpc::chip_data_serviceopen/boser/boser/src/web/grpc/chip_data_service.rsevent open/boser/boser/src/web/grpc/chip_data_service.rs:80 | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::web::grpc::chip_data_serviceopen/boser/boser/src/web/grpc/chip_data_service.rsevent open/boser/boser/src/web/grpc/chip_data_service.rs:80 | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::web::grpc::chip_data_serviceopen/boser/boser/src/web/grpc/chip_data_service.rsevent open/boser/boser/src/web/grpc/chip_data_service.rs:80 | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Type propagation algorithm not settling */

void FUN_00b188c0(uint *param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  uint *puVar14;
  int iVar15;
  undefined *puVar16;
  uint *extraout_r1;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined4 uVar24;
  undefined4 *******pppppppuVar25;
  undefined **ppuVar26;
  uint uVar27;
  int iVar28;
  undefined *puVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  bool bVar33;
  uint uVar34;
  int *piVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined *puVar38;
  uint *puVar39;
  int *piVar40;
  char *pcVar41;
  undefined4 *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined4 *******pppppppuVar47;
  double dVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  double dVar60;
  double dVar61;
  undefined **local_1e8;
  undefined4 *******local_1e4;
  undefined4 *******local_1e0;
  undefined *local_1dc;
  undefined *local_1cc;
  undefined **local_1ac;
  int local_160;
  int local_15c;
  undefined4 *******local_150;
  undefined **local_14c;
  undefined4 *******local_148;
  undefined4 local_144;
  undefined4 local_140;
  uint local_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 *******local_e0;
  undefined **ppuStack_dc;
  undefined4 *******local_d8;
  undefined *local_d0;
  int local_cc;
  undefined *local_c8;
  undefined4 *******pppppppuStack_c4;
  undefined **ppuStack_c0;
  undefined4 *******pppppppuStack_bc;
  uint local_88;
  uint local_84;
  undefined4 *******local_80;
  undefined **local_7c;
  undefined4 *******local_78;
  undefined4 *******local_74;
  undefined **local_70;
  undefined4 *local_6c;
  undefined *local_68;
  uint **local_64;
  uint *local_60;
  code *local_5c;
  undefined4 *******local_58;
  undefined **local_54;
  undefined4 *******local_50;
  undefined4 *******local_48;
  undefined **ppuStack_44;
  undefined4 *******pppppppuStack_40;
  
  puVar39 = (uint *)((uint)&local_f0 | 4);
  puVar14 = param_2;
  do {
    while ((*param_2 & 1) == 0) {
      FUN_00a49d58(&local_f0,param_2 + 8,param_3);
      uVar27 = local_f0;
      if (local_f0 == 2) {
        uVar34 = 0;
        uVar27 = 4;
        goto LAB_00b19334;
      }
      if (local_f0 == 3) {
        *param_1 = 5;
        param_1[1] = 0;
        return;
      }
      FUN_00b19634(param_2);
      *param_2 = 1;
      param_2[1] = 0;
      param_2[2] = uVar27;
      uVar27 = puVar39[1];
      uVar34 = puVar39[2];
      param_2[3] = *puVar39;
      param_2[4] = uVar27;
      param_2[5] = uVar34;
      *(undefined1 *)(param_2 + 6) = 0;
      puVar14 = puVar39;
    }
    if ((char)param_2[6] != '\0') {
      if ((char)param_2[6] == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c11940);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c11940);
    }
    if (param_2[2] == 0) {
      piVar40 = (int *)param_2[3];
      FUN_01495f30(&local_150,puVar14,piVar40[10],piVar40[0xb],piVar40[0xc]);
      iVar2 = piVar40[0x11];
      local_1cc = (undefined *)piVar40[0x13];
      uVar31 = 0;
      if (iVar2 == 0) {
        local_1cc = (undefined *)0x0;
      }
      bVar33 = iVar2 != 0;
      if (&UNK_01c71c71 < local_1cc) {
LAB_00b1935c:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar31,local_160);
      }
      iVar3 = 0;
      local_1e0 = local_150;
      local_1e8 = local_14c;
      local_1e4 = local_148;
      uVar27 = piVar40[0x12];
      local_160 = (int)local_1cc * 0x48;
      if (local_160 == 0) {
        local_15c = 8;
        local_1dc = (undefined *)0x0;
      }
      else {
        uVar31 = 8;
        local_15c = FUN_01298504(local_160,8);
        if (local_15c == 0) goto LAB_00b1935c;
        local_1dc = local_1cc;
      }
      iVar15 = 0;
      for (puVar46 = local_1cc; puVar46 != (undefined *)0x0; puVar46 = puVar46 + -1) {
        if (!bVar33) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2ffe0);
        }
        if (iVar3 == 0) {
          iVar28 = 0;
          for (; uVar27 != 0; uVar27 = uVar27 - 1) {
            iVar2 = *(int *)(iVar2 + 0x378);
          }
          uVar34 = 0;
        }
        else {
          iVar28 = iVar2;
          iVar2 = iVar3;
          uVar34 = uVar27;
        }
        iVar3 = iVar2;
        if (*(ushort *)(iVar2 + 0x376) <= uVar34) {
          do {
            iVar2 = *(int *)(iVar3 + 0x370);
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01d2fff0);
            }
            uVar34 = (uint)*(ushort *)(iVar3 + 0x374);
            iVar28 = iVar28 + 1;
            iVar3 = iVar2;
          } while (*(ushort *)(iVar2 + 0x376) <= uVar34);
        }
        if (iVar28 == 0) {
          uVar27 = uVar34 + 1;
          iVar3 = iVar2;
        }
        else {
          piVar35 = (int *)(iVar2 + uVar34 * 4 + 0x37c);
          do {
            iVar3 = *piVar35;
            iVar28 = iVar28 + -1;
            piVar35 = (int *)(iVar3 + 0x378);
          } while (iVar28 != 0);
          uVar27 = 0;
        }
        iVar2 = iVar2 + uVar34 * 0x48;
        uVar31 = *(undefined4 *)(iVar2 + 0x7c);
        uVar30 = *(undefined4 *)(iVar2 + 0x6c);
        uVar32 = *(undefined4 *)(iVar2 + 0x88);
        uVar36 = *(undefined4 *)(iVar2 + 0x8c);
        puVar42 = (undefined4 *)(local_15c + iVar15 * 0x48);
        *puVar42 = *(undefined4 *)(iVar2 + 0x58);
        uVar24 = *(undefined4 *)(iVar2 + 0x68);
        puVar42[0xd] = uVar36;
        uVar37 = *(undefined4 *)(iVar2 + 0x5c);
        puVar42[0xc] = uVar32;
        uVar32 = *(undefined4 *)(iVar2 + 0x9c);
        uVar49 = *(undefined8 *)(iVar2 + 0x60);
        uVar50 = *(undefined8 *)(iVar2 + 0x70);
        uVar51 = *(undefined8 *)(iVar2 + 0x80);
        uVar52 = *(undefined8 *)(iVar2 + 0x90);
        puVar42[9] = uVar31;
        uVar31 = *(undefined4 *)(iVar2 + 0x98);
        uVar36 = *(undefined4 *)(iVar2 + 0x78);
        puVar42[4] = uVar24;
        puVar42[5] = uVar30;
        iVar2 = 0;
        puVar42[1] = uVar37;
        bVar33 = true;
        puVar42[0x10] = uVar31;
        puVar42[0x11] = uVar32;
        iVar15 = iVar15 + 1;
        puVar42[8] = uVar36;
        *(undefined8 *)(puVar42 + 0xe) = uVar52;
        *(undefined8 *)(puVar42 + 10) = uVar51;
        *(undefined8 *)(puVar42 + 6) = uVar50;
        *(undefined8 *)(puVar42 + 2) = uVar49;
      }
      uVar31 = 0;
      iVar2 = piVar40[0x14];
      pppppppuVar25 = (undefined4 *******)piVar40[0x16];
      uVar27 = piVar40[2] & (uint)(*(double *)(piVar40 + 4) != 0.0);
      dVar48 = *(double *)(piVar40 + 8);
      if (uVar27 != 0) {
        dVar48 = *(double *)(piVar40 + 4);
      }
      if (iVar2 == 0) {
        pppppppuVar25 = (undefined4 *******)0x0;
      }
      bVar33 = iVar2 != 0;
      if ((undefined4 *******)0xaaaaaa < pppppppuVar25) {
LAB_00b19400:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar31,local_1ac);
      }
      puVar46 = (undefined *)piVar40[6];
      puVar16 = (undefined *)piVar40[7];
      iVar3 = 0;
      uVar34 = piVar40[0x15];
      ppuVar26 = (undefined **)((int)pppppppuVar25 * 0xc0);
      if (ppuVar26 == (undefined **)0x0) {
        local_1ac = (undefined **)&DAT_00000008;
        local_150 = (undefined4 *******)0x0;
      }
      else {
        uVar31 = 8;
        local_1ac = (undefined **)FUN_01298504(ppuVar26,8);
        if (local_1ac == (undefined **)0x0) {
          local_1ac = ppuVar26;
          goto LAB_00b19400;
        }
        local_150 = pppppppuVar25;
      }
      local_148 = (undefined4 *******)0x0;
      local_160 = 0;
      pppppppuVar47 = pppppppuVar25;
      while (local_14c = local_1ac, pppppppuVar47 != (undefined4 *******)0x0) {
        if (!bVar33) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2ffe0);
        }
        if (iVar3 == 0) {
          iVar15 = 0;
          for (; uVar34 != 0; uVar34 = uVar34 - 1) {
            iVar2 = *(int *)(iVar2 + 0x980);
          }
          uVar8 = 0;
        }
        else {
          iVar15 = iVar2;
          uVar8 = uVar34;
          iVar2 = iVar3;
        }
        iVar3 = iVar2;
        if (*(ushort *)(iVar2 + 0x97a) <= uVar8) {
          do {
            iVar2 = *(int *)(iVar3 + 0x948);
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01d2fff0);
            }
            uVar8 = (uint)*(ushort *)(iVar3 + 0x978);
            iVar15 = iVar15 + 1;
            iVar3 = iVar2;
          } while (*(ushort *)(iVar2 + 0x97a) <= uVar8);
        }
        if (iVar15 == 0) {
          uVar34 = uVar8 + 1;
          iVar3 = iVar2;
        }
        else {
          piVar35 = (int *)(iVar2 + uVar8 * 4 + 0x984);
          do {
            iVar3 = *piVar35;
            iVar15 = iVar15 + -1;
            piVar35 = (int *)(iVar3 + 0x980);
          } while (iVar15 != 0);
          uVar34 = 0;
        }
        pppppppuVar47 = (undefined4 *******)((int)pppppppuVar47 + -1);
        puVar42 = (undefined4 *)(iVar2 + uVar8 * 0xd8);
        puVar4 = (undefined *)puVar42[0x34];
        puVar5 = (undefined *)puVar42[1];
        puVar6 = (undefined *)puVar42[4];
        puVar17 = (undefined *)puVar42[5];
        puVar7 = (undefined *)puVar42[0x10];
        puVar18 = (undefined *)puVar42[0x11];
        uVar8 = puVar42[8];
        uVar9 = puVar42[0xc];
        puVar10 = (undefined *)puVar42[0x16];
        puVar19 = (undefined *)puVar42[0x17];
        puVar11 = (undefined *)puVar42[0x1a];
        puVar20 = (undefined *)puVar42[0x1b];
        puVar12 = (undefined *)puVar42[0x1e];
        puVar21 = (undefined *)puVar42[0x1f];
        puVar13 = (undefined *)puVar42[0x22];
        puVar22 = (undefined *)puVar42[0x23];
        uVar49 = *(undefined8 *)(puVar42 + 2);
        uVar50 = *(undefined8 *)(puVar42 + 6);
        uVar51 = *(undefined8 *)(puVar42 + 0x12);
        uVar52 = *(undefined8 *)(puVar42 + 0x18);
        uVar53 = *(undefined8 *)(puVar42 + 0x1c);
        uVar54 = *(undefined8 *)(puVar42 + 0x20);
        uVar55 = *(undefined8 *)(puVar42 + 0x24);
        uVar56 = *(undefined8 *)(puVar42 + 0x28);
        uVar57 = *(undefined8 *)(puVar42 + 0x2c);
        uVar58 = *(undefined8 *)(puVar42 + 0x30);
        uVar59 = *(undefined8 *)(puVar42 + 10);
        dVar60 = *(double *)(puVar42 + 0xe);
        puVar45 = (undefined *)puVar42[0x26];
        puVar38 = (undefined *)puVar42[0x27];
        puVar43 = (undefined *)puVar42[0x2a];
        puVar44 = (undefined *)puVar42[0x2b];
        puVar29 = (undefined *)puVar42[0x2e];
        puVar23 = (undefined *)puVar42[0x2f];
        ppuVar26 = local_1ac + local_160 * 0x30;
        *ppuVar26 = (undefined *)*puVar42;
        ppuVar26[0x28] = puVar29;
        ppuVar26[0x29] = puVar23;
        ppuVar26[0x20] = puVar45;
        ppuVar26[0x21] = puVar38;
        ppuVar26[0x1c] = puVar13;
        ppuVar26[0x1d] = puVar22;
        ppuVar26[0x18] = puVar12;
        ppuVar26[0x19] = puVar21;
        ppuVar26[0x24] = puVar43;
        ppuVar26[0x25] = puVar44;
        bVar33 = true;
        ppuVar26[0x14] = puVar11;
        ppuVar26[0x15] = puVar20;
        *(undefined8 *)(ppuVar26 + 0x2a) = uVar58;
        ppuVar26[0x10] = puVar10;
        ppuVar26[0x11] = puVar19;
        *(undefined8 *)(ppuVar26 + 0x26) = uVar57;
        dVar61 = dVar48;
        if ((uVar9 & 1) != 0) {
          dVar61 = dVar60;
        }
        ppuVar26[0xc] = puVar7;
        ppuVar26[4] = puVar6;
        ppuVar26[1] = puVar5;
        ppuVar26[0x2e] = puVar4;
        uVar57 = 0;
        if ((uVar8 & 1) != 0) {
          uVar57 = uVar59;
        }
        ppuVar26[0xd] = puVar18;
        puVar5 = puVar46;
        puVar4 = puVar16;
        if ((uVar9 & 1) != 0 || uVar27 != 0) {
          puVar4 = (undefined *)0x0;
          puVar5 = (undefined *)0x1;
        }
        ppuVar26[5] = puVar17;
        *(undefined8 *)(ppuVar26 + 0x22) = uVar56;
        iVar2 = 0;
        *(undefined8 *)(ppuVar26 + 0x1e) = uVar55;
        *(undefined8 *)(ppuVar26 + 0x1a) = uVar54;
        *(undefined8 *)(ppuVar26 + 0x16) = uVar53;
        *(undefined8 *)(ppuVar26 + 0x12) = uVar52;
        *(undefined8 *)(ppuVar26 + 0xe) = uVar51;
        *(undefined8 *)(ppuVar26 + 6) = uVar50;
        *(undefined8 *)(ppuVar26 + 2) = uVar49;
        ppuVar26[8] = puVar5;
        ppuVar26[9] = puVar4;
        *(undefined8 *)(ppuVar26 + 0x2c) = uVar57;
        *(double *)(ppuVar26 + 10) = dVar61;
        local_160 = local_160 + 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar40;
        bVar33 = (bool)hasExclusiveAccess(piVar40);
      } while (!bVar33);
      *piVar40 = iVar2 + -1;
      uVar27 = 3;
      local_148 = pppppppuVar25;
      local_48 = local_150;
      ppuStack_44 = local_1ac;
      pppppppuStack_40 = pppppppuVar25;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a95ae4(piVar40);
      }
      local_160 = local_15c;
    }
    else {
      local_88 = param_2[4];
      local_84 = param_2[5];
      if ((DAT_01d50f88 < 4) &&
         (((DAT_01d4bb58 - 1 < 2 ||
           ((DAT_01d4bb58 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4bb50), cVar1 != '\0')))) &&
          (iVar2 = FUN_01aaa278(DAT_01d4bb50), iVar2 != 0)))) {
        if (*(undefined ***)(DAT_01d4bb50 + 0x20) == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c11930);
        }
        local_70 = &local_68;
        local_148 = *(undefined4 ********)(DAT_01d4bb50 + 0x24);
        local_144 = *(undefined4 *)(DAT_01d4bb50 + 0x28);
        local_78 = (undefined4 *******)(DAT_01d4bb50 + 0x1c);
        local_150 = (undefined4 *******)*local_78;
        local_74 = &local_150;
        local_140 = 0;
        local_80 = &local_74;
        local_7c = (undefined **)&DAT_00000001;
        local_6c = (undefined4 *)&DAT_01d2ea4c;
        local_64 = &local_60;
        local_68 = &DAT_0058a3d1;
        local_5c = FUN_01a3ac5c;
        local_60 = &local_88;
        local_14c = *(undefined ***)(DAT_01d4bb50 + 0x20);
        FUN_01aaaecc(DAT_01d4bb50,&local_80);
        iVar2 = DAT_01d4bb50;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_54 = *(undefined ***)(DAT_01d4bb50 + 0x14);
          local_50 = *(undefined4 ********)(DAT_01d4bb50 + 0x18);
          local_58 = (undefined4 *******)0x2;
          DataMemoryBarrier(0xb);
          pcVar41 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar41 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar42 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar42 = &DAT_01cfc5e0;
          }
          iVar3 = (*(code *)puVar42[3])(pcVar41,&local_58);
          if (iVar3 != 0) {
            local_48 = local_58;
            ppuStack_44 = local_54;
            pppppppuStack_40 = local_50;
            FUN_01aaa328(iVar2,pcVar41,puVar42[4],&local_48,&local_80);
          }
        }
      }
      else {
        iVar2 = DAT_01d4bb50;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_7c = *(undefined ***)(DAT_01d4bb50 + 0x14);
          local_78 = *(undefined4 ********)(DAT_01d4bb50 + 0x18);
          local_80 = (undefined4 *******)0x2;
          DataMemoryBarrier(0xb);
          pcVar41 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar41 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar42 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar42 = &DAT_01cfc5e0;
          }
          iVar3 = (*(code *)puVar42[3])(pcVar41,&local_80);
          if (iVar3 != 0) {
            if (*(undefined ***)(DAT_01d4bb50 + 0x20) == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c11930);
            }
            local_144 = *(undefined4 *)(DAT_01d4bb50 + 0x28);
            local_54 = &local_68;
            local_58 = &local_150;
            local_148 = *(undefined4 ********)(DAT_01d4bb50 + 0x24);
            local_74 = &local_58;
            local_140 = 0;
            local_70 = (undefined **)&DAT_00000001;
            local_50 = (undefined4 *******)&DAT_01d2ea4c;
            local_64 = &local_60;
            local_68 = &DAT_0058a3d1;
            local_5c = FUN_01a3ac5c;
            local_60 = &local_88;
            local_48 = local_80;
            ppuStack_44 = local_7c;
            pppppppuStack_40 = local_78;
            local_150 = *(undefined4 ********)(DAT_01d4bb50 + 0x1c);
            local_14c = *(undefined ***)(DAT_01d4bb50 + 0x20);
            local_6c = (undefined4 *)(DAT_01d4bb50 + 0x1c);
            FUN_01aaa328(iVar2,pcVar41,puVar42[4],&local_48,&local_74);
          }
        }
      }
      uVar27 = 4;
    }
    local_e8 = 1;
    local_e4 = 0;
    local_e0 = local_1e0;
    ppuStack_dc = local_1e8;
    local_cc = local_15c;
    local_c8 = local_1cc;
    local_d0 = local_1dc;
    local_d8 = local_1e4;
    pppppppuStack_c4 = local_48;
    ppuStack_c0 = ppuStack_44;
    pppppppuStack_bc = pppppppuStack_40;
    *(undefined1 *)(param_2 + 6) = 1;
    local_ec = 0;
    local_f0 = uVar27;
    FUN_00b19634(param_2);
    uVar34 = local_ec;
    uVar27 = local_f0;
    *param_2 = 0;
    param_2[1] = 0;
    if (local_f0 != 4 || local_ec != 0) {
      FUN_01bed4e2(&local_150,&local_e8,0x60);
LAB_00b19334:
      *param_1 = uVar27;
      param_1[1] = uVar34;
      FUN_01bed4e2(param_1 + 2,&local_150,0x60);
      return;
    }
    FUN_00b195e4(&local_f0);
    puVar14 = extraout_r1;
  } while( true );
}

