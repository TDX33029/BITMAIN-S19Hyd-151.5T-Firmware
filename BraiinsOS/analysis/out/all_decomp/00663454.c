// FUN_00663454 @ 00663454 size=4172 calls_out=33 calls_in=0
// strings: `Ready` polled after completionConnTask Future polled twice | BUG: Failed to bind to socket | A Tokio 1.x context was found; but it is being shutdown. | SetGloba | SetGloba | lDefaultError

/* WARNING: Type propagation algorithm not settling */

void FUN_00663454(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  byte bVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  char cVar7;
  char cVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int iVar11;
  char *pcVar12;
  int *******pppppppiVar13;
  undefined4 uVar14;
  int *piVar15;
  int *piVar16;
  int *****pppppiVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 uVar22;
  undefined4 *puVar23;
  undefined *puVar24;
  int ******ppppppiVar25;
  undefined1 uVar26;
  char *pcVar27;
  uint *puVar28;
  uint uVar29;
  int ******ppppppiVar30;
  int *******pppppppiVar31;
  uint uVar32;
  int *******pppppppiVar33;
  char cVar34;
  undefined8 uVar35;
  undefined4 *local_1cac;
  undefined4 *local_1ca8;
  int *******local_1ca0;
  int *******local_1c9c;
  int *******local_1c98;
  int *******local_1c94;
  int *******local_1c90;
  int *******local_1c8c;
  int *local_1808;
  int *local_1804;
  undefined1 local_1800;
  int *******local_17f8;
  undefined1 *local_17f4;
  int *******local_17f0;
  int *******local_17ec;
  undefined *local_17e8;
  int ******local_1348;
  int *******local_1344;
  int *******local_1340;
  undefined4 local_133c;
  undefined4 local_1338;
  undefined4 *local_ea8;
  int ******local_ea0;
  int *******local_e9c;
  undefined4 local_a00;
  undefined4 local_9fc;
  undefined4 local_9f8;
  int *******local_9f4;
  int *******local_9f0;
  int iStack_9ec;
  int *local_9e8;
  undefined4 uStack_9e4;
  undefined4 local_9d8;
  undefined1 auStack_9d4 [1188];
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 local_528;
  int local_520;
  undefined4 *local_51c;
  int *******local_4f0;
  code *local_4ec;
  int *local_48;
  undefined1 auStack_41 [29];
  
  puVar9 = (undefined4 *)((uint)&local_a00 | 0x10);
  puVar10 = param_1 + 0x13;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 10)) {
  case 0:
    param_1[0xb] = *param_1;
    param_1[0xc] = param_1[1];
    param_1[0xd] = param_1[2];
    param_1[0xe] = param_1[3];
    param_1[0xf] = param_1[4];
    param_1[0x10] = param_1[5];
    param_1[0x11] = param_1[6];
    param_1[0x12] = param_1[7];
    *(undefined1 *)(param_1 + 0x1b) = 0;
switchD_0066352c_caseD_0:
    *puVar10 = param_1[0xb];
    param_1[0x14] = param_1[0xc];
    param_1[0x15] = param_1[0xd];
    param_1[0x16] = param_1[0xe];
    param_1[0x17] = param_1[0xf];
    param_1[0x18] = param_1[0x10];
    param_1[0x19] = param_1[0x11];
    param_1[0x1a] = param_1[0x12];
    break;
  case 1:
switchD_006634a0_caseD_1:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x6645d4);
    (*pcVar1)();
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185855c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x1b)) {
    case 0:
      goto switchD_0066352c_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01872694);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01872694);
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x21)) {
    case 0:
      puVar23 = (undefined4 *)param_1[0xb];
      goto LAB_0066388c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01857e1c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01857e1c);
    }
    puVar28 = (uint *)(&switchD_00663618::switchdataD_0066361c)[*(byte *)(param_1 + 0x12)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_1 + 0x12)) {
    case 0:
      puVar23 = (undefined4 *)param_1[0xc];
      puVar18 = (undefined4 *)param_1[0xd];
      uVar14 = param_1[0xe];
      goto LAB_006638b4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187a1dc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187a1dc);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x20)) {
      case 0:
        puVar23 = (undefined4 *)param_1[0x13];
        uVar14 = param_1[0x14];
        goto LAB_006638d0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187a1ec);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187a1ec);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_1 + 0x1f)) {
        case 0:
          iVar11 = param_1[0x15];
          uVar14 = param_1[0x16];
          goto LAB_006638f4;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_0187a1fc);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_0187a1fc);
        case 3:
          goto switchD_00663684_caseD_3;
        }
      }
    case 4:
      goto switchD_00663618_caseD_4;
    }
  }
  sVar3 = *(short *)(param_1 + 0x13);
  *(undefined2 *)(param_1 + 0x13) = 4;
  if (sVar3 == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("`Ready` polled after completionConnTask Future polled twice",0x1f,&DAT_018a6c40);
  }
  pppppppiVar31 = (int *******)param_1[0x14];
  pppppppiVar33 = (int *******)param_1[0x15];
  if (sVar3 != 3) {
    if (sVar3 != 2) {
      local_a00 = (int *******)CONCAT22(*(undefined2 *)((int)param_1 + 0x4e),sVar3);
      local_9f4 = (int *******)param_1[0x16];
      local_9f0 = (int *******)param_1[0x17];
      iStack_9ec = param_1[0x18];
      local_9e8 = (int *)param_1[0x19];
      uStack_9e4 = param_1[0x1a];
      local_9fc = (int *******)param_1[0x14];
      local_9f8 = (undefined **)param_1[0x15];
      FUN_0163d7d4(&local_1348);
      if (local_1348 != (int ******)0x2) {
        *(undefined1 *)(param_1 + 0x1b) = 1;
        uVar22 = 3;
        if (local_1348 == (int ******)0x3) {
LAB_006640f4:
          *(undefined1 *)(param_1 + 10) = uVar22;
          return;
        }
        param_1[0x22] = local_1348;
        param_1[0x25] = local_133c;
        param_1[0x23] = local_1344;
        param_1[0x24] = local_1340;
LAB_00664040:
        do {
          puVar23 = param_1 + 0x22;
          param_1[0xb] = puVar23;
          *(undefined1 *)(param_1 + 0x21) = 0;
LAB_0066388c:
          uVar14 = 1;
          param_1[0xc] = puVar23;
          param_1[0xd] = puVar23;
          *(undefined1 *)(param_1 + 0x12) = 0;
          param_1[0xe] = 1;
          puVar18 = puVar23;
LAB_006638b4:
          param_1[0xf] = puVar23;
          param_1[0x10] = uVar14;
          param_1[0x11] = puVar18;
LAB_006638c0:
          *(undefined1 *)(param_1 + 0x20) = 0;
          param_1[0x13] = puVar23;
          param_1[0x14] = uVar14;
LAB_006638d0:
          iVar11 = puVar23[2] + 0x20;
          param_1[0x15] = iVar11;
          param_1[0x16] = uVar14;
          *(undefined1 *)(param_1 + 0x1f) = 0;
LAB_006638f4:
          param_1[0x1c] = uVar14;
          *(undefined1 *)(param_1 + 0x1e) = 0;
          *(undefined1 *)(param_1 + 0x1d) = 0;
          param_1[0x17] = iVar11;
          param_1[0x18] = 0;
          param_1[0x19] = 0;
          param_1[0x1a] = 0;
switchD_00663684_caseD_3:
          puVar23 = param_1 + 0x20;
          FUN_0163ab0c(&local_a00,param_1 + 0x17,param_2);
          pppppppiVar31 = local_9fc;
          if (local_9fc._1_1_ == '\x02') {
            uVar26 = 3;
            *(undefined1 *)(param_1 + 0x1f) = 3;
            *(undefined1 *)puVar23 = 3;
LAB_006640dc:
            local_1ca8 = param_1 + 0x12;
            local_1cac = param_1 + 0x21;
            uVar22 = 4;
            *(undefined1 *)local_1cac = 3;
            *(undefined1 *)local_1ca8 = uVar26;
            goto LAB_006640f4;
          }
          iVar11 = param_1[0x17];
          pcVar27 = (char *)(iVar11 + 0xc);
          if (*pcVar27 == '\0') {
            bVar4 = (bool)hasExclusiveAccess(pcVar27);
            if (!bVar4) goto LAB_00663964;
            *pcVar27 = '\x01';
            DataMemoryBarrier(0xb);
          }
          else {
            ClearExclusiveLocal();
LAB_00663964:
            FUN_01280da8(pcVar27);
          }
          FUN_0128236c(pcVar27);
          piVar16 = param_1 + 0x18;
          if (*piVar16 == 0) {
            if (*(int **)(iVar11 + 0x10) == piVar16) {
              piVar15 = (int *)param_1[0x19];
              *(int **)(iVar11 + 0x10) = piVar15;
              goto joined_r0x006639d0;
            }
          }
          else {
            piVar15 = (int *)param_1[0x19];
            *(int **)(*piVar16 + 4) = piVar15;
joined_r0x006639d0:
            if (piVar15 == (int *)0x0) {
              if (*(int **)(iVar11 + 0x14) != piVar16) goto LAB_006639e0;
              *(int *)(iVar11 + 0x14) = *piVar16;
            }
            else {
              *piVar15 = *piVar16;
            }
            param_1[0x18] = 0;
            param_1[0x19] = 0;
          }
LAB_006639e0:
          FUN_01282570(pcVar27);
          if (*pcVar27 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar4 = (bool)hasExclusiveAccess(pcVar27);
              if (bVar4) {
                *pcVar27 = '\0';
                goto LAB_00663a20;
              }
            } while (*pcVar27 == '\x01');
          }
          ClearExclusiveLocal();
          FUN_01280a5c(pcVar27);
LAB_00663a20:
          if (param_1[0x1a] != 0) {
            (**(code **)(param_1[0x1a] + 0xc))(param_1[0x1b]);
          }
          *(undefined1 *)(param_1 + 0x1f) = 1;
          if (((uint)pppppppiVar31 & 0x100) != 0) {
            FUN_015e79d4(&local_a00,0x28,"A Tokio 1.x context was found, but it is being shutdown.",
                         0x38);
            *(undefined1 *)puVar23 = 1;
            pppppppiVar31 = local_a00;
            pppppppiVar33 = local_9fc;
            goto LAB_00663da0;
          }
          *(undefined1 *)puVar23 = 1;
          *puVar10 = (uint)local_a00;
          param_1[0x14] = (uint)local_9fc & 0xffff00ff;
          puVar28 = puVar10;
switchD_00663618_caseD_4:
          uVar35 = thunk_FUN_016de0ee(puVar28,0x40);
          puVar28 = (uint *)((int)uVar35 + (int)((ulonglong)uVar35 >> 0x20));
          puVar23 = (undefined4 *)*param_2;
          if ((char)puVar28[0xe] == '\x01') {
LAB_0066408c:
            cVar7 = *(char *)((int)puVar28 + 0x31);
            cVar34 = (char)puVar28[0xc];
            cVar8 = cVar7;
            if (cVar34 == '\x01') {
              if (cVar7 == '\0') {
                uVar26 = 4;
                FUN_016455a4(*puVar23,puVar23[1]);
                goto LAB_006640dc;
              }
              cVar8 = cVar7 + -1;
            }
            *(char *)((int)puVar28 + 0x31) = cVar8;
            iVar11 = *(int *)(param_1[0x11] + 0xc);
          }
          else {
            cVar34 = '\0';
            cVar7 = '\0';
            if ((char)puVar28[0xe] != '\x02') {
              FUN_015e8e6c(puVar28,FUN_009948a0);
              *(undefined1 *)(puVar28 + 0xe) = 1;
              goto LAB_0066408c;
            }
            iVar11 = *(int *)(param_1[0x11] + 0xc);
          }
          if (iVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018ad11c);
          }
          local_1ca8 = param_1 + 0x12;
          local_1cac = param_1 + 0x21;
          FUN_0126da20(&local_a00);
          pppppppiVar13 = local_a00;
          if ((short)local_9fc == 2) {
            uVar32 = (uint)local_9f8 & 0xff;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(uVar32) {
            case 0:
              if (local_9f4 == (int *******)&DAT_0000000b) goto LAB_00663b40;
LAB_00663d98:
              pppppppiVar31 = (int *******)local_9f8;
              pppppppiVar33 = local_9f4;
LAB_00663da0:
              local_1ca8 = param_1 + 0x12;
              *(undefined1 *)local_1ca8 = 1;
LAB_00663dac:
              local_1cac = param_1 + 0x21;
              *(undefined1 *)local_1cac = 1;
              local_1ca0 = pppppppiVar31;
              local_1c9c = pppppppiVar33;
              if ((DAT_018d9130 < 5) && (DAT_018d9260 != '\0')) {
                puVar24 = &DAT_018ae394;
                pcVar27 = s_SetGloba_00414c05;
                if (DAT_018d9260 == '\x01') {
LAB_00663e2c:
                  DataMemoryBarrier(0xb);
                  pcVar12 = pcVar27;
                  puVar6 = puVar24;
                  if ((DAT_018dd984 == 2) &&
                     (pcVar12 = DAT_018daa74, puVar6 = DAT_018daa78, DAT_018daa70 != 0)) {
                    pcVar12 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                  }
                  iVar11 = (**(code **)(puVar6 + 0x14))(pcVar12,DAT_018d9258);
                  if (iVar11 == 0) goto LAB_00663f84;
                }
                else if (DAT_018d9260 != '\x02') {
                  cVar7 = FUN_0169ac90(&DAT_018d9258);
                  if (cVar7 == '\0') goto LAB_00663f84;
                  if (cVar7 != '\x02') goto LAB_00663e2c;
                }
                if (*(int ********)(DAT_018d9258 + 0x20) == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185858c);
                }
                local_1340 = *(int ********)(DAT_018d9258 + 0x24);
                local_133c = *(undefined4 *)(DAT_018d9258 + 0x28);
                local_17f0 = &local_1348;
                local_1c90 = (int *******)(DAT_018d9258 + 0x1c);
                local_1348 = *local_1c90;
                local_17ec = &local_ea0;
                local_1c98 = (int *******)&local_17f0;
                local_e9c = (int *******)&local_4f0;
                local_9f0 = (int *******)&local_1c98;
                local_4f0 = (int *******)&local_1ca0;
                local_a00 = (int *******)&DAT_00000001;
                local_1338 = 0;
                local_1c94 = (int *******)&DAT_00000001;
                local_17e8 = &DAT_018abb78;
                local_ea0 = (int ******)&DAT_005703a2;
                local_4ec = FUN_015ef5b4;
                local_9fc = (int *******)0x0;
                DataMemoryBarrier(0xb);
                if ((DAT_018dd984 == 2) &&
                   (pcVar27 = DAT_018daa74, puVar24 = DAT_018daa78, DAT_018daa70 != 0)) {
                  pcVar27 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                }
                local_1344 = *(int ********)(DAT_018d9258 + 0x20);
                iStack_9ec = DAT_018d9258;
                iVar11 = (**(code **)(puVar24 + 0x28))(pcVar27,&local_a00);
                if (iVar11 != 0) {
                  (**(code **)(puVar24 + 0x2c))(pcVar27,&local_a00);
                }
                pppppppiVar31 = local_1c9c;
              }
              else {
LAB_00663f84:
                pppppppiVar31 = local_1c9c;
              }
              local_1c9c = pppppppiVar31;
              if ((char)local_1ca0 == '\x03') {
                ppppppiVar25 = *pppppppiVar31;
                ppppppiVar30 = pppppppiVar31[1];
                pppppiVar17 = *ppppppiVar30;
                if (pppppiVar17 != (int *****)0x0) {
                  (*(code *)pppppiVar17)(ppppppiVar25);
                }
                if (ppppppiVar30[1] != (int *****)0x0) {
                  thunk_FUN_016d3fb4(ppppppiVar25);
                }
                thunk_FUN_016d3fb4(pppppppiVar31);
              }
              goto LAB_00664040;
            case 1:
              cVar8 = local_9f8._1_1_;
              break;
            default:
              cVar8 = *(char *)(local_9f4 + 2);
            }
            if (cVar8 != '\r') goto LAB_00663d98;
LAB_00663b40:
            uVar19 = *puVar10;
            bVar2 = *(byte *)(param_1 + 0x14);
            puVar20 = (uint *)(*(int *)(param_1[0xf] + 8) + 0x28);
            DataMemoryBarrier(0xb);
            uVar21 = *(uint *)(*(int *)(param_1[0xf] + 8) + 0x28);
            do {
              while( true ) {
                if ((uint)bVar2 != (uVar21 & 0xffffff) >> 0x10) goto LAB_00663bd0;
                uVar29 = *puVar20;
                if (uVar29 == uVar21) break;
                ClearExclusiveLocal();
                DataMemoryBarrier(0xb);
                uVar21 = uVar29;
              }
              DataMemoryBarrier(0xb);
              bVar4 = (bool)hasExclusiveAccess(puVar20);
              if (bVar4) {
                *puVar20 = uVar21 & (uVar19 & 0x33 ^ 0xff003f);
              }
              DataMemoryBarrier(0xb);
              uVar21 = uVar29;
            } while (!bVar4);
LAB_00663bd0:
            pppppppiVar31 = local_9f4;
            if (cVar34 != '\0') {
              if ((char)puVar28[0xe] != '\x01') {
                if ((char)puVar28[0xe] == '\x02') goto joined_r0x00663bfc;
                FUN_015e8e6c(puVar28,FUN_01655ec4);
                *(undefined1 *)(puVar28 + 0xe) = 1;
              }
              *(char *)((int)puVar28 + 0x31) = cVar7;
              *(undefined1 *)(puVar28 + 0xc) = 1;
              pppppppiVar31 = local_9f4;
            }
joined_r0x00663bfc:
            local_9f4 = pppppppiVar31;
            if (uVar32 == 3) {
              ppppppiVar25 = *pppppppiVar31;
              ppppppiVar30 = pppppppiVar31[1];
              pppppiVar17 = *ppppppiVar30;
              if (pppppiVar17 != (int *****)0x0) {
                (*(code *)pppppiVar17)(ppppppiVar25);
              }
              if (ppppppiVar30[1] != (int *****)0x0) {
                thunk_FUN_016d3fb4(ppppppiVar25);
              }
              thunk_FUN_016d3fb4(pppppppiVar31);
            }
            puVar23 = (undefined4 *)param_1[0xf];
            uVar14 = param_1[0x10];
            goto LAB_006638c0;
          }
          *(undefined1 *)local_1ca8 = 1;
          uVar35 = FUN_0164ec90(&DAT_018ac94c);
          FUN_01657a90(&local_a00,pppppppiVar13,(int)uVar35,(int)((ulonglong)uVar35 >> 0x20),
                       &DAT_018ac94c);
          pppppppiVar33 = (int *******)local_9f8;
          pppppppiVar31 = local_9fc;
          if (local_a00 == (int *******)&SUB_00000002) {
            FUN_016dffb2(pppppppiVar13);
            goto LAB_00663dac;
          }
          piVar16 = (int *)param_1[8];
          *(undefined1 *)(param_1 + 0x21) = 1;
          do {
            iVar11 = *piVar16;
            bVar4 = (bool)hasExclusiveAccess(piVar16);
          } while (!bVar4);
          *piVar16 = iVar11 + 1;
          if (iVar11 < 0) goto switchD_006634a0_caseD_1;
          piVar15 = (int *)param_1[9];
          do {
            iVar11 = *piVar15;
            bVar4 = (bool)hasExclusiveAccess(piVar15);
          } while (!bVar4);
          *piVar15 = iVar11 + 1;
          if (iVar11 < 0) goto switchD_006634a0_caseD_1;
          do {
            do {
              local_1ca0 = DAT_018d9200;
              local_1c9c = DAT_018d9204;
              pppppppiVar31 = (int *******)((int)DAT_018d9200 + 1);
              pppppppiVar33 =
                   (int *******)((int)DAT_018d9204 + (uint)((int *******)0xfffffffe < DAT_018d9200))
              ;
              bVar4 = (bool)hasExclusiveAccess(0x18d9200);
            } while (!bVar4);
            bVar4 = DAT_018d9200 == (int *******)0x0;
            bVar5 = DAT_018d9204 == (int *******)0x0;
            DAT_018d9200 = pppppppiVar31;
            DAT_018d9204 = pppppppiVar33;
          } while (bVar4 && bVar5);
          local_17f4 = auStack_41;
          local_17f8 = (int *******)&local_1ca0;
          local_1c90 = (int *******)local_9f8;
          local_1c94 = local_9fc;
          local_1800 = 0;
          local_1c8c = pppppppiVar13;
          local_1c98 = local_a00;
          local_1808 = piVar16;
          local_1804 = piVar15;
          if ((char)puVar28[0xe] != '\x01') {
            if ((char)puVar28[0xe] == '\x02') {
              uVar22 = 1;
              FUN_00766248(&local_1c98);
              goto LAB_00663d40;
            }
            FUN_015e8e6c(puVar28,FUN_009948a0);
            *(undefined1 *)(puVar28 + 0xe) = 1;
          }
          FUN_016dd1aa(&local_17f0,&local_1c98,0x4a8);
          if (0x7ffffffe < *puVar28) {
            FUN_00fb71b0(&DAT_018accb0);
            goto switchD_006634a0_caseD_1;
          }
          *puVar28 = *puVar28 + 1;
          uVar32 = puVar28[1];
          FUN_016dd1aa(&local_1348,&local_1c98,0x4a8);
          if (uVar32 == 2) {
            FUN_00766248(&local_1348);
            uVar22 = 0;
            *puVar28 = *puVar28 - 1;
LAB_00663d40:
            local_1348 = (int ******)CONCAT31(local_1348._1_3_,uVar22);
            local_a00 = &local_1348;
            local_9fc = (int *******)&LAB_0164eda0;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00590e71,&local_a00,&DAT_0185857c);
          }
          FUN_016dd1aa(&local_ea0,&local_1c98,0x4a0);
          pppppppiVar33 = (int *******)*local_ea8;
          pppppppiVar31 = (int *******)local_ea8[1];
          if ((uVar32 & 1) == 0) {
            piVar16 = (int *)puVar28[2];
            do {
              iVar11 = *piVar16;
              bVar4 = (bool)hasExclusiveAccess(piVar16);
            } while (!bVar4);
            *piVar16 = iVar11 + 1;
            if (iVar11 < 0) goto switchD_006634a0_caseD_1;
            piVar15 = (int *)piVar16[0x8e];
            iVar11 = 0;
            puVar23 = param_1;
            if (piVar15 != (int *)0x0) {
              do {
                iVar11 = *piVar15;
                bVar4 = (bool)hasExclusiveAccess(piVar15);
              } while (!bVar4);
              *piVar15 = iVar11 + 1;
              if (iVar11 < 0) goto switchD_006634a0_caseD_1;
              iVar11 = piVar16[0x8e];
              puVar23 = (undefined4 *)piVar16[0x8f];
            }
            FUN_016dd1aa((uint)&local_4f0 | 4,&local_ea0,0x4a0);
            local_9f8 = &PTR_LAB_018580cc;
            puVar9[4] = pppppppiVar33;
            puVar9[5] = pppppppiVar31;
            *puVar9 = 0;
            puVar9[1] = 0;
            local_9fc = (int *******)0x0;
            local_a00 = (int *******)0xcc;
            local_9d8 = 0;
            local_9e8 = piVar16;
            FUN_016dd1aa(auStack_9d4,&local_4f0,0x4a4);
            local_530 = 0;
            local_52c = 0;
            local_528 = 0;
            local_48 = (int *)0x0;
            local_520 = iVar11;
            local_51c = puVar23;
            iVar11 = FUN_016d51b0(&local_48,0x20,0x500);
            piVar15 = local_48;
            if ((iVar11 != 0) || (local_48 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(0x20,0x500);
            }
            FUN_016dd1aa(local_48,&local_a00,0x500);
            iVar11 = FUN_0072c788(piVar16 + 0x40,piVar15,piVar15);
            local_a00 = pppppppiVar33;
            local_9fc = pppppppiVar31;
            if (piVar16[0x8c] != 0) {
              (**(code **)(piVar16[0x8d] + 0x14))
                        (piVar16[0x8c] + (*(int *)(piVar16[0x8d] + 8) - 1U & 0xfffffff8) + 8,
                         &local_a00);
            }
            if (iVar11 != 0) {
              FUN_01659ec0(puVar28[2],iVar11);
            }
          }
          else {
            piVar16 = (int *)puVar28[2];
            do {
              iVar11 = *piVar16;
              bVar4 = (bool)hasExclusiveAccess(piVar16);
            } while (!bVar4);
            *piVar16 = iVar11 + 1;
            if (iVar11 < 0) goto switchD_006634a0_caseD_1;
            piVar15 = (int *)piVar16[0x5c];
            iVar11 = 0;
            if (piVar15 != (int *)0x0) {
              do {
                iVar11 = *piVar15;
                bVar4 = (bool)hasExclusiveAccess(piVar15);
              } while (!bVar4);
              *piVar15 = iVar11 + 1;
              if (iVar11 < 0) goto switchD_006634a0_caseD_1;
              iVar11 = piVar16[0x5c];
              local_1cac = (undefined4 *)piVar16[0x5d];
            }
            FUN_016dd1aa((uint)&local_4f0 | 4,&local_ea0,0x4a0);
            local_9f8 = &PTR_LAB_018582ac;
            puVar9[4] = pppppppiVar33;
            *puVar9 = 0;
            puVar9[1] = 0;
            puVar9[5] = pppppppiVar31;
            local_9fc = (int *******)0x0;
            local_a00 = (int *******)0xcc;
            local_9d8 = 0;
            local_9e8 = piVar16;
            FUN_016dd1aa(auStack_9d4,&local_4f0,0x4a4);
            local_51c = local_1cac;
            local_530 = 0;
            local_52c = 0;
            local_528 = 0;
            local_48 = (int *)0x0;
            local_520 = iVar11;
            iVar11 = FUN_016d51b0(&local_48,0x20,0x500);
            piVar15 = local_48;
            if ((iVar11 != 0) || (local_48 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(0x20,0x500);
            }
            FUN_016dd1aa(local_48,&local_a00,0x500);
            pppppppiVar13 = (int *******)FUN_0072c788(piVar16 + 0x14,piVar15,piVar15);
            local_a00 = pppppppiVar33;
            local_9fc = pppppppiVar31;
            if (piVar16[0x5a] != 0) {
              (**(code **)(piVar16[0x5b] + 0x14))
                        (piVar16[0x5a] + (*(int *)(piVar16[0x5b] + 8) - 1U & 0xfffffff8) + 8,
                         &local_a00);
            }
            if (pppppppiVar13 != (int *******)0x0) {
              local_4f0 = (int *******)((uint)local_4f0 & 0xffffff00);
              local_a00 = (int *******)(piVar16 + 2);
              local_9f8 = (undefined **)&local_4f0;
              local_9fc = pppppppiVar13;
              FUN_0164511c(&local_a00);
            }
          }
          *puVar28 = *puVar28 - 1;
          if (*piVar15 == 0xcc) {
            DataMemoryBarrier(0xb);
            bVar4 = (bool)hasExclusiveAccess(piVar15);
            if (!bVar4) goto LAB_00664500;
            *piVar15 = 0x84;
          }
          else {
            ClearExclusiveLocal();
LAB_00664500:
            (**(code **)(piVar15[2] + 0x10))(piVar15);
          }
        } while( true );
      }
      pppppppiVar31 = local_1344;
      pppppppiVar33 = local_1340;
      if (((uint)local_1344 & 0xff) != 4) goto LAB_006636e8;
    }
    FUN_015e79d4(&local_17f0,0x14,&DAT_005659f0,0x20);
    pppppppiVar31 = local_17f0;
    pppppppiVar33 = local_17ec;
  }
LAB_006636e8:
  *(undefined1 *)(param_1 + 0x1b) = 1;
  local_a00 = pppppppiVar31;
  local_9fc = pppppppiVar33;
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8("BUG: Failed to bind to socket",0x1d,&local_a00,&DAT_01857dbc,&DAT_0185856c);
}

