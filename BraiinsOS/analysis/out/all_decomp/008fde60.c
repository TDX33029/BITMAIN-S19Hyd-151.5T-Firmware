// FUN_008fde60 @ 008fde60 size=6512 calls_out=8 calls_in=2
// strings: SetGloba | SetGloba | lDefaultError | Air cooling modes not supported on this miner; assuming HYDRO mode | lDefaultError | SetGloba

/* WARNING: Type propagation algorithm not settling */

void FUN_008fde60(undefined4 *param_1,uint *param_2,uint *param_3)

{
  undefined4 ******ppppppuVar1;
  undefined1 uVar2;
  undefined4 *******pppppppuVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 uVar8;
  undefined4 *****pppppuVar9;
  undefined1 extraout_r2;
  undefined1 extraout_r2_00;
  undefined1 extraout_r2_01;
  undefined1 extraout_r2_02;
  undefined1 extraout_r2_03;
  undefined1 extraout_r2_04;
  undefined1 extraout_r2_05;
  undefined1 extraout_r2_06;
  undefined1 extraout_r2_07;
  undefined1 extraout_r2_08;
  undefined1 extraout_r2_09;
  undefined1 extraout_r2_10;
  undefined1 extraout_r2_11;
  undefined1 extraout_r2_12;
  undefined1 extraout_r2_13;
  undefined1 extraout_r2_14;
  undefined1 extraout_r2_15;
  undefined1 extraout_r2_16;
  undefined1 extraout_r2_17;
  undefined1 extraout_r2_18;
  undefined1 extraout_r2_19;
  undefined1 extraout_r2_20;
  undefined1 extraout_r2_21;
  undefined1 extraout_r2_22;
  undefined1 extraout_r2_23;
  undefined1 extraout_r2_24;
  undefined1 extraout_r2_25;
  undefined1 extraout_r2_26;
  undefined1 extraout_r2_27;
  undefined1 extraout_r2_28;
  undefined1 extraout_r2_29;
  undefined1 extraout_r2_30;
  undefined1 uVar10;
  undefined1 extraout_r2_31;
  undefined1 extraout_r2_32;
  undefined1 extraout_r2_33;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  double *pdVar14;
  uint uVar15;
  undefined4 *****pppppuVar16;
  uint uVar17;
  undefined4 ******ppppppuVar18;
  undefined4 *****pppppuVar19;
  char cVar20;
  undefined4 ****ppppuVar21;
  uint uVar22;
  double *pdVar23;
  undefined4 *****unaff_r8;
  undefined4 uVar24;
  undefined *puVar25;
  uint uVar26;
  char *pcVar27;
  bool bVar28;
  double dVar29;
  uint uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined4 *****local_11c;
  undefined4 *******local_118;
  uint local_110;
  undefined4 *****local_f4;
  undefined4 *******local_ec;
  uint local_e8;
  undefined4 ******local_e4;
  undefined4 local_e0;
  undefined4 ******local_dc;
  undefined4 *****local_d8;
  undefined4 *****local_d4;
  undefined4 ****local_d0;
  undefined4 *****local_cc;
  undefined4 *****local_c8;
  undefined4 *****local_c4;
  undefined4 *******local_c0;
  undefined4 *******local_bc;
  int *local_b8;
  undefined4 ******local_b4;
  undefined4 *******local_b0;
  undefined4 *****local_ac;
  code *local_a8;
  undefined4 *******local_a4;
  undefined4 ******local_a0;
  int *local_9c;
  undefined4 ******local_98;
  undefined4 *******local_94;
  undefined *local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 ******local_80;
  undefined4 *******local_7c;
  undefined4 *****local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 *******local_68;
  int local_64;
  
  uVar22 = param_2[1];
  uVar5 = *param_2 ^ 2;
  if (uVar5 == 0 && uVar22 == 0) {
    uVar6 = (uint)*(byte *)((int)param_3 + 0x7f);
    pdVar14 = (double *)(param_3 + 8);
    dVar29 = *(double *)(param_3 + 6);
    local_110 = uVar6;
  }
  else {
    uVar6 = (uint)*(byte *)((int)param_3 + 0x7f);
    pdVar23 = (double *)(param_3 + 6);
    pdVar14 = (double *)param_2[4];
    if ((*param_2 & 1) != 0) {
      pdVar23 = (double *)(param_2 + 2);
    }
    local_110 = (uint)(byte)param_2[0x10];
    if ((byte)param_2[0x10] == 4) {
      local_110 = uVar6;
    }
    bVar28 = ((uint)pdVar14 & 1) != 0;
    if (bVar28) {
      pdVar14 = (double *)(param_2 + 6);
    }
    dVar29 = *pdVar23;
    if (!bVar28) {
      pdVar14 = (double *)(param_3 + 8);
    }
  }
  uVar11 = param_2[0xc];
  dVar33 = *pdVar14;
  puVar12 = param_3;
  if ((param_2[8] & 1) != 0) {
    puVar12 = param_2;
  }
  if (uVar5 == 0 && uVar22 == 0) {
    puVar12 = param_3;
  }
  uVar15 = param_3[4];
  dVar35 = *(double *)(puVar12 + 10);
  uVar13 = param_2[0x26];
  pppppuVar16 = (undefined4 *****)(uVar13 & 1 ^ 1);
  puVar12 = param_2 + 0x27;
  uVar26 = *param_3;
  if ((uVar13 & 1) == 0) {
    puVar12 = param_3 + 0x1a;
  }
  uVar30 = param_3[5];
  dVar31 = *(double *)(param_3 + 2);
  local_ec = (undefined4 *******)*puVar12;
  dVar32 = *(double *)(param_2 + 0xe);
  uVar17 = (uint)(uVar13 != 2) & param_2[0x28];
  dVar34 = *(double *)(param_3 + 0xc);
  local_e8 = uVar17 ^ 1;
  puVar12 = param_3 + 0x19;
  if (uVar17 != 0) {
    puVar12 = param_2 + 0x29;
  }
  local_e4 = (undefined4 ******)*puVar12;
  ppppppuVar18 = local_e4;
  if (uVar13 != 2) {
    ppppppuVar18 = (undefined4 ******)param_2[0x2a];
  }
  if (uVar13 != 2 && ppppppuVar18 != (undefined4 ******)0x0) {
    local_dc = (undefined4 ******)param_2[0x2b];
    pppppuVar19 = (undefined4 *****)0x0;
    local_e0 = 0;
    bVar28 = false;
LAB_008fdfa8:
    ppppuVar21 = (undefined4 ****)0x0;
    local_f4 = (undefined4 *****)0x0;
    if (param_2[0x2c] == 1) {
      unaff_r8 = (undefined4 *****)param_2[0x2d];
      if ((undefined4 *****)0x64 < unaff_r8) goto LAB_008ff88c;
      local_f4 = (undefined4 *****)0x1;
      local_d4 = unaff_r8;
    }
    local_d8 = local_f4;
    if (param_2[0x2e] == 1) {
      pppppuVar19 = (undefined4 *****)param_2[0x2f];
      if ((undefined4 *****)0x64 < pppppuVar19) goto LAB_008ff88c;
      ppppuVar21 = (undefined4 ****)0x1;
      local_cc = pppppuVar19;
    }
    cVar20 = (char)param_2[0x32];
    uVar13 = param_2[0x30];
    if (cVar20 == '\x03') {
      cVar20 = '\x01';
    }
    if (uVar13 == 2) {
      cVar20 = '\x01';
    }
    local_d0 = ppppuVar21;
    if ((uVar13 & 1) == 0) goto LAB_008fe060;
    local_11c = (undefined4 *****)param_2[0x31];
    if ((undefined4 *****)0x64 < local_11c) goto LAB_008ff88c;
  }
  else {
    local_dc = (undefined4 ******)param_3[0x17];
    pppppuVar19 = (undefined4 *****)0x1;
    local_e0 = 1;
    if (uVar13 != 2) {
      bVar28 = true;
      goto LAB_008fdfa8;
    }
    cVar20 = '\x01';
    bVar28 = true;
    local_d8 = (undefined4 *****)0x0;
    local_d0 = (undefined4 ****)0x0;
    uVar13 = 2;
LAB_008fe060:
    local_11c = (undefined4 *****)param_3[0x1d];
  }
  ppppuVar21 = local_d0;
  local_f4 = local_d8;
  ppppppuVar18 = local_dc;
  uVar10 = (undefined1)uVar13;
  if (local_110 < 2) {
    if (uVar6 == 2) {
      if ((DAT_018d9130 < 4) && (DAT_018d97ac != '\0')) {
        if (DAT_018d97ac == '\x01') {
LAB_008fe408:
          puVar25 = &DAT_018ae394;
          DataMemoryBarrier(0xb);
          pcVar27 = s_SetGloba_00414c05;
          if (DAT_018dd984 == 2) {
            pcVar27 = DAT_018daa74;
            puVar25 = DAT_018daa78;
            if (DAT_018daa70 != 0) {
              pcVar27 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
          }
          iVar7 = (**(code **)(puVar25 + 0x14))(pcVar27,DAT_018d97a4);
          uVar10 = extraout_r2_05;
          if (iVar7 == 0) goto LAB_008fe5c0;
        }
        else if (DAT_018d97ac != '\x02') {
          cVar4 = FUN_0169ac90(&DAT_018d97a4);
          uVar10 = extraout_r2_04;
          if (cVar4 == '\0') goto LAB_008fe5c0;
          if (cVar4 != '\x02') goto LAB_008fe408;
        }
        local_64 = DAT_018d97a4;
        if (*(int *)(DAT_018d97a4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01867880);
        }
        local_94 = *(undefined4 ********)(DAT_018d97a4 + 0x20);
        local_90 = *(undefined **)(DAT_018d97a4 + 0x24);
        local_b0 = &local_c0;
        local_8c = *(undefined4 *)(DAT_018d97a4 + 0x28);
        local_9c = (int *)(DAT_018d97a4 + 0x1c);
        local_98 = (undefined4 ******)*local_9c;
        local_b4 = &local_98;
        local_a4 = &local_b4;
        local_68 = &local_a4;
        local_88 = 0;
        local_a0 = (undefined4 ******)&DAT_00000001;
        local_ac = (undefined4 *****)&DAT_018abb78;
        local_bc = (undefined4 *******)&DAT_0000008d;
        local_c0 = (undefined4 *******)0x3481b8;
        local_74 = 0;
        local_78 = (undefined4 *****)0x1;
        DataMemoryBarrier(0xb);
        pcVar27 = s_SetGloba_00414c05;
        puVar25 = &DAT_018ae394;
        if (DAT_018dd984 == 2) {
          pcVar27 = DAT_018daa74;
          puVar25 = DAT_018daa78;
          if (DAT_018daa70 != 0) {
            pcVar27 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
        }
        iVar7 = (**(code **)(puVar25 + 0x28))(pcVar27,&local_78);
        uVar10 = extraout_r2_06;
        if (iVar7 != 0) {
          (**(code **)(puVar25 + 0x2c))(pcVar27,&local_78);
          uVar10 = extraout_r2_07;
        }
        local_110 = 2;
      }
      else {
LAB_008fe5c0:
        local_110 = 2;
      }
    }
    else {
      if (uVar6 != 3) goto joined_r0x008ff558;
      if ((DAT_018d9130 < 4) && (DAT_018d9758 != '\0')) {
        if (DAT_018d9758 == '\x01') {
LAB_008fe0f0:
          DataMemoryBarrier(0xb);
          puVar25 = &DAT_018ae394;
          pcVar27 = s_SetGloba_00414c05;
          if (DAT_018dd984 == 2) {
            pcVar27 = DAT_018daa74;
            puVar25 = DAT_018daa78;
            if (DAT_018daa70 != 0) {
              pcVar27 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
          }
          iVar7 = (**(code **)(puVar25 + 0x14))(pcVar27,DAT_018d9750);
          uVar10 = extraout_r2_00;
          if (iVar7 == 0) goto LAB_008fe2a8;
        }
        else if (DAT_018d9758 != '\x02') {
          cVar4 = FUN_0169ac90(&DAT_018d9750);
          uVar10 = extraout_r2;
          if (cVar4 == '\0') goto LAB_008fe2a8;
          if (cVar4 != '\x02') goto LAB_008fe0f0;
        }
        local_64 = DAT_018d9750;
        if (*(int *)(DAT_018d9750 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01867890);
        }
        local_94 = *(undefined4 ********)(DAT_018d9750 + 0x20);
        local_90 = *(undefined **)(DAT_018d9750 + 0x24);
        local_b0 = &local_c0;
        local_8c = *(undefined4 *)(DAT_018d9750 + 0x28);
        local_9c = (int *)(DAT_018d9750 + 0x1c);
        local_98 = (undefined4 ******)*local_9c;
        local_b4 = &local_98;
        local_a4 = &local_b4;
        local_68 = &local_a4;
        local_88 = 0;
        local_a0 = (undefined4 ******)&DAT_00000001;
        local_ac = (undefined4 *****)&DAT_018abb78;
        local_bc = (undefined4 *******)&DAT_00000085;
        local_c0 = (undefined4 *******)0x3481fe;
        local_74 = 0;
        local_78 = (undefined4 *****)0x1;
        DataMemoryBarrier(0xb);
        pcVar27 = s_SetGloba_00414c05;
        puVar25 = &DAT_018ae394;
        if (DAT_018dd984 == 2) {
          pcVar27 = DAT_018daa74;
          puVar25 = DAT_018daa78;
          if (DAT_018daa70 != 0) {
            pcVar27 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
        }
        iVar7 = (**(code **)(puVar25 + 0x28))(pcVar27,&local_78);
        uVar10 = extraout_r2_01;
        if (iVar7 != 0) {
          (**(code **)(puVar25 + 0x2c))(pcVar27,&local_78);
          uVar10 = extraout_r2_02;
        }
        local_110 = 3;
      }
      else {
LAB_008fe2a8:
        local_110 = 3;
      }
    }
  }
  else if (local_110 == 2) {
    local_110 = 2;
    if (uVar6 == 3) goto LAB_008fe2a8;
  }
  else {
    local_110 = 3;
    if (uVar6 != 3) {
      if ((DAT_018d9130 < 4) && (DAT_018d9770 != '\0')) {
        if (DAT_018d9770 == '\x01') {
LAB_008fe358:
          DataMemoryBarrier(0xb);
          pcVar27 = s_SetGloba_00414c05;
          puVar25 = &DAT_018ae394;
          if (DAT_018dd984 == 2) {
            pcVar27 = DAT_018daa74;
            puVar25 = DAT_018daa78;
            if (DAT_018daa70 != 0) {
              pcVar27 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
          }
          iVar7 = (**(code **)(puVar25 + 0x14))(pcVar27,DAT_018d9768);
          uVar10 = extraout_r2_08;
          if (iVar7 == 0) goto LAB_008ff534;
        }
        else if (DAT_018d9770 != '\x02') {
          cVar4 = FUN_0169ac90(&DAT_018d9768);
          uVar10 = extraout_r2_03;
          if (cVar4 == '\0') goto LAB_008ff534;
          if (cVar4 != '\x02') goto LAB_008fe358;
        }
        local_64 = DAT_018d9768;
        if (*(int *)(DAT_018d9768 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018678a0);
        }
        local_94 = *(undefined4 ********)(DAT_018d9768 + 0x20);
        local_90 = *(undefined **)(DAT_018d9768 + 0x24);
        local_b0 = &local_c0;
        local_8c = *(undefined4 *)(DAT_018d9768 + 0x28);
        local_9c = (int *)(DAT_018d9768 + 0x1c);
        local_98 = (undefined4 ******)*local_9c;
        local_b4 = &local_98;
        local_a4 = &local_b4;
        local_68 = &local_a4;
        local_88 = 0;
        local_a0 = (undefined4 ******)&DAT_00000001;
        local_ac = (undefined4 *****)&DAT_018abb78;
        local_bc = (undefined4 *******)&DAT_00000085;
        local_c0 = (undefined4 *******)0x348240;
        local_74 = 0;
        local_78 = (undefined4 *****)0x1;
        DataMemoryBarrier(0xb);
        pcVar27 = s_SetGloba_00414c05;
        puVar25 = &DAT_018ae394;
        if (DAT_018dd984 == 2) {
          pcVar27 = DAT_018daa74;
          puVar25 = DAT_018daa78;
          if (DAT_018daa70 != 0) {
            pcVar27 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
        }
        iVar7 = (**(code **)(puVar25 + 0x28))(pcVar27,&local_78);
        uVar10 = extraout_r2_09;
        if (iVar7 != 0) {
          (**(code **)(puVar25 + 0x2c))(pcVar27,&local_78);
          uVar10 = extraout_r2_10;
        }
        local_110 = 2;
      }
      else {
LAB_008ff534:
        local_110 = 2;
      }
    }
  }
joined_r0x008ff558:
  if (((uint)local_f4 & (uint)ppppuVar21) != 0) {
    ppppuVar21 = (undefined4 ****)0x1;
    local_c8 = unaff_r8;
    local_c4 = pppppuVar19;
    if (pppppuVar19 < unaff_r8) {
      if ((DAT_018d9130 < 4) && (DAT_018d9764 != '\0')) {
        if (DAT_018d9764 == '\x01') {
LAB_008fe7b4:
          DataMemoryBarrier(0xb);
          puVar25 = &DAT_018ae394;
          pcVar27 = s_SetGloba_00414c05;
          if (DAT_018dd984 == 2) {
            pcVar27 = DAT_018daa74;
            puVar25 = DAT_018daa78;
            if (DAT_018daa70 != 0) {
              pcVar27 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
          }
          iVar7 = (**(code **)(puVar25 + 0x14))(pcVar27,DAT_018d975c);
          uVar10 = extraout_r2_12;
          if (iVar7 == 0) goto LAB_008fe990;
        }
        else if (DAT_018d9764 != '\x02') {
          cVar4 = FUN_0169ac90(&DAT_018d975c);
          uVar10 = extraout_r2_11;
          if (cVar4 == '\0') goto LAB_008fe990;
          if (cVar4 != '\x02') goto LAB_008fe7b4;
        }
        if (*(int *)(DAT_018d975c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018678b0);
        }
        local_8c = *(undefined4 *)(DAT_018d975c + 0x28);
        local_94 = *(undefined4 ********)(DAT_018d975c + 0x20);
        local_90 = *(undefined **)(DAT_018d975c + 0x24);
        local_ac = &local_c8;
        local_a4 = &local_98;
        local_a0 = &local_80;
        local_b8 = (int *)(DAT_018d975c + 0x1c);
        local_98 = (undefined4 ******)*local_b8;
        local_9c = (int *)&DAT_018abb78;
        local_7c = &local_b4;
        local_88 = 0;
        local_b4 = &local_c4;
        local_c0 = &local_a4;
        local_68 = &local_c0;
        local_80 = (undefined4 ******)&DAT_0056ff58;
        local_a8 = FUN_00f5ce60;
        local_b0 = (undefined4 *******)FUN_00f5ce60;
        local_bc = (undefined4 *******)&DAT_00000001;
        local_74 = 0;
        local_78 = (undefined4 *****)0x1;
        DataMemoryBarrier(0xb);
        pcVar27 = s_SetGloba_00414c05;
        puVar25 = &DAT_018ae394;
        if (DAT_018dd984 == 2) {
          pcVar27 = DAT_018daa74;
          puVar25 = DAT_018daa78;
          if (DAT_018daa70 != 0) {
            pcVar27 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
        }
        local_64 = DAT_018d975c;
        iVar7 = (**(code **)(puVar25 + 0x28))(pcVar27,&local_78);
        uVar10 = extraout_r2_13;
        if (iVar7 != 0) {
          (**(code **)(puVar25 + 0x2c))(pcVar27,&local_78);
          uVar10 = extraout_r2_14;
        }
      }
LAB_008fe990:
      ppppuVar21 = (undefined4 ****)0x0;
      local_d0 = (undefined4 ****)0x0;
    }
  }
  ppppppuVar1 = local_e4;
  pppppppuVar3 = local_ec;
  if (local_110 - 2 < 2) {
    if (((pppppuVar16 == (undefined4 *****)0x0) && (DAT_018d9130 < 4)) && (DAT_018d974c != '\0')) {
      if (DAT_018d974c == '\x01') {
LAB_008fea18:
        DataMemoryBarrier(0xb);
        puVar25 = &DAT_018ae394;
        pcVar27 = s_SetGloba_00414c05;
        if (DAT_018dd984 == 2) {
          pcVar27 = DAT_018daa74;
          puVar25 = DAT_018daa78;
          if (DAT_018daa70 != 0) {
            pcVar27 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
        }
        iVar7 = (**(code **)(puVar25 + 0x14))(pcVar27,DAT_018d9744);
        uVar10 = extraout_r2_16;
        if (iVar7 == 0) goto LAB_008fee98;
      }
      else if (DAT_018d974c != '\x02') {
        cVar4 = FUN_0169ac90(&DAT_018d9744);
        uVar10 = extraout_r2_15;
        if (cVar4 == '\0') goto LAB_008fee98;
        if (cVar4 != '\x02') goto LAB_008fea18;
      }
      if (*(int *)(DAT_018d9744 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018678e0);
      }
      local_8c = *(undefined4 *)(DAT_018d9744 + 0x28);
      local_94 = *(undefined4 ********)(DAT_018d9744 + 0x20);
      local_90 = *(undefined **)(DAT_018d9744 + 0x24);
      local_b4 = &local_98;
      local_b0 = &local_80;
      local_9c = (int *)(DAT_018d9744 + 0x1c);
      local_98 = (undefined4 ******)*local_9c;
      local_ac = (undefined4 *****)&DAT_018abb78;
      local_7c = &local_c0;
      local_88 = 0;
      local_80 = (undefined4 ******)&DAT_005813a6;
      local_a4 = &local_b4;
      local_68 = &local_a4;
      local_bc = (undefined4 *******)&LAB_00fac484;
      local_a0 = (undefined4 ******)&DAT_00000001;
      local_74 = 0;
      local_78 = (undefined4 *****)0x1;
      DataMemoryBarrier(0xb);
      pcVar27 = s_SetGloba_00414c05;
      puVar25 = &DAT_018ae394;
      if (DAT_018dd984 == 2) {
        pcVar27 = DAT_018daa74;
        puVar25 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar27 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      local_c0 = &local_ec;
      local_64 = DAT_018d9744;
      iVar7 = (**(code **)(puVar25 + 0x28))(pcVar27,&local_78);
      uVar10 = extraout_r2_17;
      if (iVar7 != 0) {
        (**(code **)(puVar25 + 0x2c))(pcVar27,&local_78);
        uVar10 = extraout_r2_18;
      }
    }
LAB_008fee98:
    if (((local_e8 == 0) && (DAT_018d9130 < 4)) && (DAT_018d9794 != '\0')) {
      if (DAT_018d9794 == '\x01') {
LAB_008feefc:
        DataMemoryBarrier(0xb);
        puVar25 = &DAT_018ae394;
        pcVar27 = s_SetGloba_00414c05;
        if (DAT_018dd984 == 2) {
          pcVar27 = DAT_018daa74;
          puVar25 = DAT_018daa78;
          if (DAT_018daa70 != 0) {
            pcVar27 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
        }
        iVar7 = (**(code **)(puVar25 + 0x14))(pcVar27,DAT_018d978c);
        uVar10 = extraout_r2_24;
        if (iVar7 == 0) goto LAB_008ff10c;
      }
      else if (DAT_018d9794 != '\x02') {
        cVar4 = FUN_0169ac90(&DAT_018d978c);
        uVar10 = extraout_r2_23;
        if (cVar4 == '\0') goto LAB_008ff10c;
        if (cVar4 != '\x02') goto LAB_008feefc;
      }
      if (*(int *)(DAT_018d978c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018678f0);
      }
      local_94 = *(undefined4 ********)(DAT_018d978c + 0x20);
      local_c0 = &local_e4;
      local_8c = *(undefined4 *)(DAT_018d978c + 0x28);
      local_90 = *(undefined **)(DAT_018d978c + 0x24);
      local_b4 = &local_98;
      local_b0 = &local_80;
      local_9c = (int *)(DAT_018d978c + 0x1c);
      local_98 = (undefined4 ******)*local_9c;
      local_ac = (undefined4 *****)&DAT_018abb78;
      local_7c = &local_c0;
      local_88 = 0;
      local_a4 = &local_b4;
      local_68 = &local_a4;
      local_80 = (undefined4 ******)&DAT_0058d619;
      local_bc = (undefined4 *******)&LAB_00fac484;
      local_a0 = (undefined4 ******)&DAT_00000001;
      local_74 = 0;
      local_78 = (undefined4 *****)0x1;
      DataMemoryBarrier(0xb);
      pcVar27 = s_SetGloba_00414c05;
      puVar25 = &DAT_018ae394;
      if (DAT_018dd984 == 2) {
        pcVar27 = DAT_018daa74;
        puVar25 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar27 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      local_64 = DAT_018d978c;
      iVar7 = (**(code **)(puVar25 + 0x28))(pcVar27,&local_78);
      uVar10 = extraout_r2_25;
      if (iVar7 != 0) {
        (**(code **)(puVar25 + 0x2c))(pcVar27,&local_78);
        uVar10 = extraout_r2_26;
      }
    }
LAB_008ff10c:
    local_118 = (undefined4 *******)&DAT_00000064;
    if (((bVar28) || (3 < DAT_018d9130)) || (DAT_018d9788 == '\0')) {
LAB_008ff3bc:
      uVar6 = param_3[0x1c];
    }
    else {
      if (DAT_018d9788 == '\x01') {
LAB_008ff190:
        DataMemoryBarrier(0xb);
        puVar25 = &DAT_018ae394;
        pcVar27 = s_SetGloba_00414c05;
        if (DAT_018dd984 == 2) {
          pcVar27 = DAT_018daa74;
          puVar25 = DAT_018daa78;
          if (DAT_018daa70 != 0) {
            pcVar27 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
        }
        iVar7 = (**(code **)(puVar25 + 0x14))(pcVar27,DAT_018d9780);
        uVar10 = extraout_r2_28;
        if (iVar7 == 0) goto LAB_008ff3bc;
      }
      else if (DAT_018d9788 != '\x02') {
        cVar4 = FUN_0169ac90(&DAT_018d9780);
        uVar10 = extraout_r2_27;
        if (cVar4 == '\0') goto LAB_008ff3bc;
        if (cVar4 != '\x02') goto LAB_008ff190;
      }
      if (*(int *)(DAT_018d9780 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01867900);
      }
      local_94 = *(undefined4 ********)(DAT_018d9780 + 0x20);
      local_c0 = &local_dc;
      local_8c = *(undefined4 *)(DAT_018d9780 + 0x28);
      local_90 = *(undefined **)(DAT_018d9780 + 0x24);
      local_b4 = &local_98;
      local_b0 = &local_80;
      local_9c = (int *)(DAT_018d9780 + 0x1c);
      local_98 = (undefined4 ******)*local_9c;
      local_ac = (undefined4 *****)&DAT_018abb78;
      local_7c = &local_c0;
      local_88 = 0;
      local_a4 = &local_b4;
      local_68 = &local_a4;
      local_80 = (undefined4 ******)&DAT_005720df;
      local_bc = (undefined4 *******)&LAB_00fac484;
      local_a0 = (undefined4 ******)&DAT_00000001;
      local_74 = 0;
      local_78 = (undefined4 *****)0x1;
      DataMemoryBarrier(0xb);
      pcVar27 = s_SetGloba_00414c05;
      puVar25 = &DAT_018ae394;
      if (DAT_018dd984 == 2) {
        pcVar27 = DAT_018daa74;
        puVar25 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar27 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      local_64 = DAT_018d9780;
      iVar7 = (**(code **)(puVar25 + 0x28))(pcVar27,&local_78);
      uVar10 = extraout_r2_29;
      if (iVar7 != 0) {
        (**(code **)(puVar25 + 0x2c))(pcVar27,&local_78);
        uVar10 = extraout_r2_30;
      }
      uVar6 = param_3[0x1c];
    }
    uVar2 = 1;
    uVar13 = 0;
    ppppppuVar18 = (undefined4 ******)0x0;
    ppppppuVar1 = (undefined4 ******)0x0;
    pppppuVar16 = (undefined4 *****)0x0;
    pppppppuVar3 = local_118;
  }
  else {
    if (local_110 != 1) {
      uVar24 = 1;
      uVar13 = param_3[0x18];
      if (pppppuVar16 == (undefined4 *****)0x0) {
        if ((DAT_018d9130 < 4) && (DAT_018d97a0 != '\0')) {
          if (DAT_018d97a0 == '\x01') {
LAB_008ff5e4:
            DataMemoryBarrier(0xb);
            puVar25 = &DAT_018ae394;
            pcVar27 = s_SetGloba_00414c05;
            if (DAT_018dd984 == 2) {
              pcVar27 = DAT_018daa74;
              puVar25 = DAT_018daa78;
              if (DAT_018daa70 != 0) {
                pcVar27 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
              }
            }
            iVar7 = (**(code **)(puVar25 + 0x14))(pcVar27,DAT_018d9798);
            uVar10 = extraout_r2_32;
            local_118 = &local_ec;
            if (iVar7 == 0) goto LAB_008ff75c;
          }
          else if (DAT_018d97a0 != '\x02') {
            cVar4 = FUN_0169ac90(&DAT_018d9798);
            uVar10 = extraout_r2_31;
            if (cVar4 == '\0') goto LAB_008ff75c;
            if (cVar4 != '\x02') goto LAB_008ff5e4;
          }
          if (*(int *)(DAT_018d9798 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018678c0);
          }
          local_ac = (undefined4 *****)(DAT_018d9798 + 0x1c);
          local_78 = (undefined4 *****)*local_ac;
          local_6c = *(undefined4 *)(DAT_018d9798 + 0x28);
          local_94 = &local_c0;
          local_74 = *(undefined4 *)(DAT_018d9798 + 0x20);
          local_70 = *(undefined4 *)(DAT_018d9798 + 0x24);
          local_98 = &local_78;
          local_bc = &local_a4;
          local_68 = (undefined4 *******)0x0;
          local_90 = &DAT_018abb78;
          local_c0 = (undefined4 *******)&DAT_0059235d;
          local_b4 = &local_98;
          uVar24 = 1;
          local_a0 = (undefined4 ******)&LAB_00fac484;
          local_b0 = (undefined4 *******)&DAT_00000001;
          local_a4 = &local_ec;
          pppppuVar16 = (undefined4 *****)FUN_008ffa14(&local_b4);
          uVar6 = param_3[0x1c];
          uVar10 = extraout_r2_33;
joined_r0x008ff528:
          uVar2 = 0;
          goto joined_r0x008ff770;
        }
LAB_008ff75c:
        pppppuVar16 = (undefined4 *****)(uint)DAT_018dd947;
        uVar6 = param_3[0x1c];
      }
      else {
        uVar6 = param_3[0x1c];
      }
      uVar2 = 0;
      goto joined_r0x008ff770;
    }
    if (&DAT_00000064 < local_ec) {
LAB_008ff88c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(1,1,&DAT_01875a48);
    }
    uVar13 = param_3[0x18];
    if (ppppuVar21 == (undefined4 ****)0x0 && local_f4 == (undefined4 *****)0x0) {
      pppppuVar16 = (undefined4 *****)0x0;
      local_f4 = (undefined4 *****)0x0;
      ppppuVar21 = (undefined4 ****)0x0;
      uVar6 = param_3[0x1c];
    }
    else {
      if ((3 < DAT_018d9130) || (DAT_018d977c == '\0')) {
LAB_008ff50c:
        uVar24 = 0;
        pppppuVar16 = (undefined4 *****)(uint)DAT_018dd947;
        uVar6 = param_3[0x1c];
        local_118 = pppppppuVar3;
        goto joined_r0x008ff528;
      }
      if (DAT_018d977c == '\x01') {
LAB_008fec6c:
        DataMemoryBarrier(0xb);
        puVar25 = &DAT_018ae394;
        pcVar27 = s_SetGloba_00414c05;
        if (DAT_018dd984 == 2) {
          pcVar27 = DAT_018daa74;
          puVar25 = DAT_018daa78;
          if (DAT_018daa70 != 0) {
            pcVar27 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
        }
        iVar7 = (**(code **)(puVar25 + 0x14))(pcVar27,DAT_018d9774);
        uVar10 = extraout_r2_20;
        if (iVar7 == 0) goto LAB_008ff50c;
      }
      else if (DAT_018d977c != '\x02') {
        cVar4 = FUN_0169ac90(&DAT_018d9774);
        uVar10 = extraout_r2_19;
        if (cVar4 == '\0') goto LAB_008ff50c;
        if (cVar4 != '\x02') goto LAB_008fec6c;
      }
      if (*(int *)(DAT_018d9774 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018678d0);
      }
      local_8c = *(undefined4 *)(DAT_018d9774 + 0x28);
      local_94 = *(undefined4 ********)(DAT_018d9774 + 0x20);
      local_90 = *(undefined **)(DAT_018d9774 + 0x24);
      local_7c = &local_b4;
      local_a4 = &local_98;
      local_a0 = &local_80;
      local_b8 = (int *)(DAT_018d9774 + 0x1c);
      local_98 = (undefined4 ******)*local_b8;
      local_ac = &local_d0;
      local_88 = 0;
      local_9c = (int *)&DAT_018abb78;
      local_b4 = &local_d8;
      local_c0 = &local_a4;
      local_68 = &local_c0;
      local_80 = (undefined4 ******)&DAT_0056abbf;
      local_a8 = FUN_008ffae4;
      local_b0 = (undefined4 *******)FUN_008ffae4;
      local_bc = (undefined4 *******)&DAT_00000001;
      local_74 = 0;
      local_78 = (undefined4 *****)0x1;
      DataMemoryBarrier(0xb);
      pcVar27 = s_SetGloba_00414c05;
      puVar25 = &DAT_018ae394;
      if (DAT_018dd984 == 2) {
        pcVar27 = DAT_018daa74;
        puVar25 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar27 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      local_64 = DAT_018d9774;
      iVar7 = (**(code **)(puVar25 + 0x28))(pcVar27,&local_78);
      uVar10 = extraout_r2_21;
      if (iVar7 != 0) {
        (**(code **)(puVar25 + 0x2c))(pcVar27,&local_78);
        uVar10 = extraout_r2_22;
      }
      pppppuVar16 = (undefined4 *****)(uint)DAT_018dd947;
      uVar6 = param_3[0x1c];
    }
    uVar2 = 0;
  }
  uVar24 = 0;
  local_118 = pppppppuVar3;
joined_r0x008ff770:
  if (cVar20 == '\0') {
    uVar8 = 1;
  }
  else {
    pppppuVar16 = local_cc;
    if (local_d0 == (undefined4 ****)0x0) {
      pppppuVar16 = (undefined4 *****)0x64;
    }
    pppppuVar9 = local_d4;
    if (local_d8 == (undefined4 *****)0x0) {
      pppppuVar9 = (undefined4 *****)0x0;
    }
    if (pppppuVar16 < pppppuVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: min <= maxmnamernameserialretryexpire",0x1c,&DAT_01883e60);
    }
    if (local_11c < pppppuVar16) {
      pppppuVar16 = local_11c;
    }
    if (local_11c < pppppuVar9) {
      pppppuVar16 = pppppuVar9;
    }
    uVar10 = cVar20 == '\x02';
    uVar8 = 0;
  }
  *(undefined1 *)(param_1 + 9) = uVar2;
  param_1[0x13] = uVar6;
  param_1[8] = uVar13;
  uVar11 = (uVar5 != 0 || uVar22 != 0) & uVar11;
  param_1[2] = local_f4;
  param_1[3] = unaff_r8;
  if (uVar11 != 0) {
    dVar31 = dVar32;
  }
  param_1[5] = pppppuVar19;
  param_1[7] = ppppppuVar18;
  param_1[4] = ppppuVar21;
  uVar22 = param_3[0x1e];
  param_1[10] = uVar11 | uVar26 & 1;
  uVar5 = 0x42340000;
  if (uVar15 != 0) {
    uVar5 = uVar30;
  }
  *param_1 = uVar24;
  param_1[1] = local_118;
  param_1[6] = ppppppuVar1;
  *(bool *)(param_1 + 0x15) = local_110 != 3;
  param_1[0x14] = uVar22;
  param_1[0x12] = pppppuVar16;
  *(undefined1 *)((int)param_1 + 0x45) = uVar10;
  *(undefined1 *)(param_1 + 0x11) = uVar8;
  param_1[0xb] = (float)dVar31;
  param_1[0xc] = (float)dVar29;
  param_1[0xd] = (float)dVar35;
  param_1[0xe] = (float)dVar33;
  param_1[0xf] = (float)dVar34;
  param_1[0x10] = uVar5;
  return;
}

