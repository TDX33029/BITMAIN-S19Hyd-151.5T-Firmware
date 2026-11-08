// FUN_0089bcc0 @ 0089bcc0 size=4584 calls_out=34 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_0089bcc0(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  code cVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  code *pcVar7;
  uint uVar8;
  double *pdVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  code *pcVar13;
  code *pcVar14;
  undefined4 uVar15;
  undefined1 *puVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 *******pppppppuVar20;
  code *pcVar21;
  uint *puVar22;
  code *pcVar23;
  undefined4 uVar24;
  char *pcVar25;
  uint uVar26;
  undefined4 *******pppppppuVar27;
  code *pcVar28;
  bool bVar29;
  uint in_fpscr;
  double dVar30;
  undefined8 uVar31;
  ulonglong uVar32;
  undefined4 *local_b4;
  undefined1 *local_a8;
  undefined4 *local_a4;
  undefined4 *local_9c;
  undefined4 *local_98;
  uint local_90;
  int local_8c;
  undefined4 *local_88;
  undefined4 local_84;
  undefined4 *******local_80;
  code *pcStack_7c;
  undefined4 *******pppppppuStack_78;
  uint local_74;
  code *local_70;
  code *local_6c;
  code *local_68;
  code *local_64;
  uint *local_60;
  undefined4 local_5c;
  undefined4 *******local_58;
  undefined4 *local_54;
  undefined4 *******local_50;
  code *local_4c;
  undefined4 *******local_48;
  undefined4 *******local_40;
  code *local_3c;
  undefined4 *******local_38;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x35)) {
  case 0:
    uVar5 = param_2[0x34];
    *param_2 = uVar5;
    *(undefined1 *)(param_2 + 7) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01862838);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01862838);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      uVar5 = *param_2;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01862b24);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01862b24);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x16)) {
      case 0:
        uVar5 = param_2[8];
        iVar18 = param_2[10];
        puVar6 = (undefined4 *)param_2[0xb];
        goto LAB_0089d010;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01864dac);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01864dac);
      case 3:
        goto switchD_0089bdfc_caseD_3;
      case 4:
        uVar31 = *(undefined8 *)(param_2 + 0x17);
        goto LAB_0089d150;
      }
    case 4:
      goto switchD_0089bdc4_caseD_4;
    case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_2 + 0xc9)) {
      case 0:
        uVar12 = param_2[0xf];
        uVar5 = param_2[0x31];
        goto LAB_0089cad8;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01862b34);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01862b34);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x30)) {
      case 0:
        uVar15 = param_2[0x12];
        uVar5 = param_2[0x13];
        iVar18 = param_2[0x14];
        goto LAB_0089c068;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01864d9c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01864d9c);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x20)) {
        case 0:
          uVar15 = param_2[0x15];
          uVar19 = param_2[0x19];
          uVar5 = param_2[0x16];
          iVar18 = param_2[0x17];
          uVar24 = param_2[0x18];
          goto LAB_0089c090;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_018713e8);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_018713e8);
        case 3:
          goto switchD_0089beb0_caseD_3;
        case 4:
          uVar31 = *(undefined8 *)(param_2 + 0x21);
          goto LAB_0089c16c;
        case 5:
          uVar31 = *(undefined8 *)(param_2 + 0x24);
          goto LAB_0089c208;
        }
      }
    }
  }
  param_2[1] = uVar5;
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(1,0x10);
  }
  puVar6[3] = 0x210;
  puVar6[2] = 0x201;
  puVar6[1] = 0x200;
  *puVar6 = 0x80;
  param_2[2] = puVar6;
  param_2[3] = puVar6;
  param_2[4] = 4;
  param_2[5] = puVar6 + 4;
  if (puVar6 == puVar6 + 4) {
LAB_0089bd6c:
    if (param_2[4] != 0) {
      thunk_FUN_016d3fb4(param_2[2]);
    }
    uVar12 = 0;
    param_2[10] = 0;
    param_2[9] = 8;
    param_2[8] = 0;
    iVar18 = *(int *)(param_2[1] + 0xf0);
    param_2[0xc] = iVar18;
    param_2[0xb] = 0;
    if (iVar18 != 0) {
LAB_0089cab4:
      *(undefined1 *)((int)param_2 + 0xc9) = 0;
      uVar5 = param_2[1];
      param_2[0xb] = uVar12 + 1;
      param_2[0xf] = uVar12;
      param_2[0x31] = uVar5;
LAB_0089cad8:
      uVar10 = 0;
      param_2[0x10] = uVar5;
      param_2[0x11] = uVar12;
      *(undefined1 *)(param_2 + 0x32) = 0;
      param_2[0xd] = 0;
      param_2[0xe] = 3;
LAB_0089caf8:
      param_2[0xd] = uVar10 + 1;
      iVar18 = *(int *)(param_2[0x10] + 0x148);
      *(undefined1 *)(param_2 + 0x30) = 0;
      uVar15 = 1;
      iVar18 = iVar18 + 8;
      uVar5 = param_2[0x11];
      param_2[0x12] = 1;
      param_2[0x13] = uVar5;
      param_2[0x14] = iVar18;
LAB_0089c068:
      uVar19 = 4;
      param_2[0x15] = uVar15;
      uVar24 = 0xb4;
      param_2[0x16] = uVar5;
      param_2[0x17] = iVar18;
      param_2[0x18] = 0xb4;
      param_2[0x19] = 4;
      *(undefined1 *)(param_2 + 0x20) = 0;
LAB_0089c090:
      *(undefined1 *)(param_2 + 0x2f) = 0;
      param_2[0x21] = iVar18 + 0xc;
      param_2[0x1a] = iVar18;
      param_2[0x1b] = uVar15;
      param_2[0x1c] = uVar5;
      param_2[0x1d] = uVar24;
      param_2[0x1e] = uVar19;
      *(undefined1 *)((int)param_2 + 0x81) = 0;
switchD_0089beb0_caseD_3:
      iVar18 = FUN_007d67b8(param_2 + 0x21,param_3);
      if (iVar18 == 0) {
        uVar4 = 3;
LAB_0089cb48:
        local_98 = param_2 + 0x20;
        *(undefined1 *)local_98 = uVar4;
LAB_0089cb50:
        local_a4 = param_2 + 0x30;
        *(undefined1 *)local_a4 = 3;
        goto LAB_0089cb5c;
      }
      param_2[0x1f] = iVar18;
      if (*(char *)(param_2 + 0x2f) == '\x03') {
        cVar1 = *(char *)(param_2 + 0x2e);
        bVar29 = cVar1 == '\x03';
        if (bVar29) {
          cVar1 = *(char *)(param_2 + 0x25);
        }
        if (bVar29 && cVar1 == '\x04') {
          FUN_0163c790(param_2 + 0x26);
          if (param_2[0x27] != 0) {
            (**(code **)(param_2[0x27] + 0xc))(param_2[0x28]);
          }
        }
      }
      if (param_2[0x1b] == 1) {
        uVar12 = *(int *)param_2[0x1a] * param_2[0x1c];
        if (0xff < uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_0034b2fb,0x2e,&local_70,&DAT_0186b108,&DAT_0186afe8);
        }
      }
      else {
        uVar12 = (uint)*(byte *)((int *)param_2[0x1a] + 1);
      }
      uVar31 = (**(code **)(*(int *)(param_2[0x1f] + 0x20) + 0xc))
                         (*(undefined4 *)(param_2[0x1f] + 0x1c),param_2[0x1b],uVar12,param_2[0x1d],
                          param_2[0x1e]);
      *(undefined8 *)(param_2 + 0x21) = uVar31;
LAB_0089c16c:
      uVar32 = (**(code **)((int)((ulonglong)uVar31 >> 0x20) + 0xc))((int)uVar31,param_3);
      pcVar21 = (code *)(uVar32 >> 0x20);
      if ((uVar32 & 1) != 0) {
        uVar4 = 4;
        goto LAB_0089cb48;
      }
      uVar5 = param_2[0x21];
      puVar6 = (undefined4 *)param_2[0x22];
      pcVar13 = (code *)*puVar6;
      if (pcVar13 != (code *)0x0) {
        (*pcVar13)(uVar5);
      }
      if (puVar6[1] != 0) {
        thunk_FUN_016d3fb4(uVar5);
      }
      if (pcVar21 == (code *)0x0) {
        param_2[0x21] = 0;
        param_2[0x23] = 0;
        iVar18 = param_2[0x1f];
        param_2[0x22] = 4;
        *(undefined1 *)((int)param_2 + 0x81) = 1;
        do {
          uVar31 = (**(code **)(*(int *)(iVar18 + 0x20) + 0x10))(*(undefined4 *)(iVar18 + 0x1c));
          *(undefined8 *)(param_2 + 0x24) = uVar31;
LAB_0089c208:
          local_98 = param_2 + 0x20;
          (**(code **)((int)((ulonglong)uVar31 >> 0x20) + 0xc))(&local_70,(int)uVar31,param_3);
          puVar16 = local_5c;
          puVar22 = local_60;
          pcVar28 = local_64;
          pcVar23 = local_68;
          pcVar21 = local_6c;
          pcVar13 = local_70;
          if (local_70 == (code *)&DAT_00000004) {
            uVar4 = 5;
            goto LAB_0089cb48;
          }
          puVar6 = (undefined4 *)param_2[0x25];
          pcVar14 = (code *)*puVar6;
          uVar4 = local_5c._1_1_;
          uVar12 = (uint)local_5c & 0xff;
          uVar5 = param_2[0x24];
          if (pcVar14 != (code *)0x0) {
            (*pcVar14)(uVar5);
          }
          if (puVar6[1] != 0) {
            thunk_FUN_016d3fb4(uVar5);
          }
          if (pcVar13 == (code *)&SUB_00000002) {
            if (param_2[0x1b] != 0) {
              if (param_2[0x23] == 1) goto LAB_0089c484;
LAB_0089c33c:
              local_68 = (code *)(param_2 + 0x1b);
              local_70 = (code *)(param_2 + 0x1d);
              local_64 = FUN_00813248;
              local_6c = FUN_00facd88;
              FUN_00600d2c(&local_40,&DAT_0034ffa6,&local_70);
              local_50 = local_40;
              local_4c = local_3c;
              local_48 = local_38;
              pcVar21 = (code *)FUN_00808de4(&local_50);
              goto LAB_0089c390;
            }
            iVar18 = param_2[0x1f];
            if (*(int *)(iVar18 + 0x14) != 1) goto LAB_0089c484;
            break;
          }
          if (pcVar13 == (code *)0x3) goto LAB_0089c390;
          if (uVar12 != 2) {
            if (((uint)puVar16 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_0034b2c5,0x6d,&DAT_0186afc8);
            }
            if (*(int *)param_2[0x1a] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faf2a4(&DAT_0186afd8);
            }
            pcVar13 = (code *)FUN_018462e8(uVar4);
          }
          pcVar21 = (code *)param_2[0x23];
          if (uVar12 == 2) {
            pcVar13 = pcVar21;
          }
          if (pcVar21 == (code *)param_2[0x21]) {
            FUN_008cfc58(param_2 + 0x21);
          }
          puVar6 = (undefined4 *)(param_2[0x22] + (int)pcVar21 * 0x10);
          *puVar6 = pcVar23;
          puVar6[1] = pcVar28;
          puVar6[2] = puVar22;
          puVar6[3] = pcVar13;
          pcVar21 = pcVar21 + 1;
          param_2[0x23] = pcVar21;
          if (param_2[0x1b] != 0) {
            if (pcVar21 != (code *)&DAT_00000001) goto LAB_0089c33c;
            goto LAB_0089c484;
          }
          iVar18 = param_2[0x1f];
        } while ((*(int *)(iVar18 + 0x14) != 1) || (pcVar21 != *(code **)(iVar18 + 0x18)));
        uVar10 = *(uint *)(iVar18 + 0x18);
        uVar12 = param_2[0x23];
        local_90 = uVar10;
        if (uVar10 != uVar12) {
          uVar5 = 0;
          local_84 = 0;
          local_88 = (undefined4 *)&DAT_00000004;
          local_8c = 0;
          uVar8 = 0;
          do {
            uVar26 = uVar8;
            if (uVar10 == uVar26) goto LAB_0089c934;
            if (uVar12 == uVar26) goto LAB_0089c8d8;
            uVar8 = uVar26 + 1;
          } while (uVar26 == *(uint *)(param_2[0x22] + uVar26 * 0x10 + 0xc));
          uVar12 = uVar26;
LAB_0089c8d8:
          local_50 = (undefined4 *******)(uVar12 << 1);
          local_40 = &local_50;
          local_3c = FUN_00facd88;
          FUN_00600d2c(&local_70,&DAT_0034ffe8,&local_40);
          pcVar23 = local_68;
          pcVar13 = local_6c;
          pcVar21 = local_70;
          FUN_015f37b0(&local_8c);
          uVar5 = 1;
          local_84 = 1;
          *local_88 = pcVar21;
          local_88[1] = pcVar13;
          local_88[2] = pcVar23;
          uVar12 = param_2[0x23];
LAB_0089c934:
          puVar6 = local_88;
          local_74 = uVar12;
          FUN_008670f8(&local_40,local_88,uVar5,&DAT_0041950f);
          local_60 = &local_90;
          local_68 = (code *)(param_2 + 0x1d);
          local_70 = (code *)&local_74;
          local_54 = &DAT_006043a8;
          local_64 = FUN_00facd88;
          local_5c = &LAB_00fac484;
          local_6c = (code *)&LAB_00fac484;
          local_58 = &local_40;
          FUN_00600d2c(&local_50,&DAT_00350000,&local_70);
          if (local_40 != (undefined4 *******)0x0) {
            thunk_FUN_016d3fb4(local_3c);
          }
          local_80 = local_50;
          pcStack_7c = local_4c;
          pppppppuStack_78 = local_48;
          pcVar21 = (code *)FUN_00808de4(&local_80);
          pcVar13 = pcVar21;
          if (uVar10 != uVar26) {
            pcVar13 = (code *)*puVar6;
          }
          if (uVar10 != uVar26 && pcVar13 != (code *)0x0) {
            thunk_FUN_016d3fb4(puVar6[1]);
          }
          if (local_8c != 0) {
            thunk_FUN_016d3fb4(puVar6);
          }
LAB_0089c390:
          puVar6 = (undefined4 *)(param_2[0x22] + 4);
          for (iVar18 = param_2[0x23]; iVar18 != 0; iVar18 = iVar18 + -1) {
            if (puVar6[-1] != 0) {
              thunk_FUN_016d3fb4(*puVar6);
            }
            puVar6 = puVar6 + 4;
          }
          if (param_2[0x21] != 0) {
            thunk_FUN_016d3fb4(param_2[0x22]);
          }
          *(undefined1 *)((int)param_2 + 0x81) = 0;
          pcVar13 = (code *)param_2[0x1f];
          cVar2 = *pcVar13;
          goto joined_r0x0089c3f0;
        }
LAB_0089c484:
        pcVar13 = (code *)param_2[0x23];
        pcVar21 = (code *)param_2[0x22];
        local_70 = (code *)param_2[0x21];
        *(undefined1 *)((int)param_2 + 0x81) = 0;
        local_6c = pcVar21;
        local_68 = pcVar13;
        if (&DAT_00000001 < pcVar13) {
          if (&DAT_00000014 < pcVar13) {
            FUN_008b97d0(pcVar21,pcVar13);
          }
          else {
            FUN_008c4190(pcVar21,pcVar13);
          }
        }
        pcVar23 = local_70;
        pcVar25 = (char *)param_2[0x1f];
        *(undefined1 *)((int)param_2 + 0x81) = 0;
        if (*pcVar25 == '\0') {
          bVar29 = (bool)hasExclusiveAccess(pcVar25);
          if (!bVar29) goto LAB_0089c4dc;
          *pcVar25 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_0089c4dc:
          FUN_01280da8(pcVar25);
        }
        FUN_0128236c(pcVar25);
        FUN_0163af68(pcVar25,1,pcVar25);
        *(undefined1 *)local_98 = 1;
        if (pcVar23 != (code *)0x80000001) goto LAB_0089c510;
        goto LAB_0089cb50;
      }
      pcVar13 = (code *)param_2[0x1f];
      cVar2 = *pcVar13;
joined_r0x0089c3f0:
      if (cVar2 == (code)0x0) {
        bVar29 = (bool)hasExclusiveAccess(pcVar13);
        if (!bVar29) goto LAB_0089c404;
        *pcVar13 = (code)0x1;
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_0089c404:
        FUN_01280da8(pcVar13);
      }
      local_98 = param_2 + 0x20;
      FUN_0128236c(pcVar13);
      FUN_0163af68(pcVar13,1,pcVar13);
      pcVar23 = (code *)&DAT_80000000;
      *(undefined1 *)local_98 = 1;
LAB_0089c510:
      local_9c = param_2 + 0x15;
      local_a4 = param_2 + 0x30;
      FUN_00812744(local_9c);
      if (pcVar23 != (code *)&DAT_80000000) {
        pppppppuVar27 = (undefined4 *******)0x0;
        pcVar28 = (code *)&DAT_00000004;
        pcVar14 = pcVar21 + (int)pcVar13 * 0x10;
        local_48 = (undefined4 *******)0x0;
        local_4c = (code *)&DAT_00000004;
        local_50 = (undefined4 *******)0x0;
        local_70 = pcVar21;
        local_6c = pcVar21;
        local_68 = pcVar23;
        local_64 = pcVar14;
        if (pcVar13 != (code *)0x0) {
          uVar12 = (int)pcVar13 << 4;
          iVar18 = 0;
          pcVar13 = pcVar21;
LAB_0089c5a4:
          uVar12 = uVar12 - 0x10;
          pcVar7 = pcVar13 + 0x10;
          uVar10 = *(uint *)pcVar13;
          if (uVar10 != 0x80000000) {
            pppppppuVar20 = *(undefined4 ********)(pcVar13 + 8);
            puVar22 = *(uint **)(pcVar13 + 4);
            if (pppppppuVar20 == (undefined4 *******)&DAT_00000004) goto code_r0x0089c5c8;
            local_3c = (code *)&DAT_00000004;
            local_40 = (undefined4 *******)&DAT_00000006;
            local_6c = pcVar7;
            local_38 = pppppppuVar20;
            pcVar13 = (code *)FUN_0082e020(pppppppuVar20,&local_40);
            if (uVar10 != 0) {
              thunk_FUN_016d3fb4(puVar22);
            }
            for (uVar10 = 0; uVar12 >> 4 != uVar10; uVar10 = uVar10 + 1) {
              if (*(int *)(pcVar7 + uVar10 * 0x10) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)(pcVar7 + (uVar10 * 4 + 1) * 4));
              }
            }
            if (pcVar23 != (code *)0x0) {
              thunk_FUN_016d3fb4(pcVar21);
            }
            if (local_50 != (undefined4 *******)0x0) {
              thunk_FUN_016d3fb4(local_4c);
            }
            goto LAB_0089c524;
          }
          goto LAB_0089c634;
        }
        goto LAB_0089c644;
      }
      pcVar13 = pcVar21;
LAB_0089c524:
      *(undefined1 *)local_a4 = 1;
      goto LAB_0089c7a0;
    }
LAB_0089c048:
    iVar18 = param_2[8];
    uVar32 = CONCAT44(param_2[9],param_2[10]);
    *(undefined1 *)(param_2 + 7) = 1;
    if (iVar18 != -0x7fffffff) {
LAB_0089d2b4:
      FUN_0089d484(param_2);
      if (iVar18 < -0x7ffffffe) {
        iVar18 = -0x7fffffff;
      }
      param_1[1] = (int)(uVar32 >> 0x20);
      param_1[2] = (int)uVar32;
      *param_1 = iVar18;
      uVar4 = 1;
      goto LAB_0089d2f4;
    }
  }
  else {
    while( true ) {
      uVar15 = *puVar6;
      param_2[3] = puVar6 + 1;
      uVar5 = 0;
      puVar6 = param_2 + 6;
      *puVar6 = uVar15;
      iVar18 = *(int *)(param_2[1] + 0x148);
      param_2[8] = 0;
      iVar18 = iVar18 + 8;
      param_2[10] = iVar18;
      param_2[0xb] = puVar6;
      *(undefined1 *)(param_2 + 0x16) = 0;
LAB_0089d010:
      param_2[0xd] = uVar5;
      param_2[0xe] = param_2[9];
      param_2[0xf] = puVar6;
      param_2[0xc] = iVar18;
      puVar11 = (undefined4 *)FUN_016d38c8(4,1);
      if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,4);
      }
      param_2[0x10] = 4;
      param_2[0x11] = puVar11;
      param_2[0x12] = 4;
      param_2[0x13] = 0xb0;
      param_2[0x14] = 4;
      *puVar11 = *puVar6;
      *(undefined1 *)(param_2 + 0x25) = 0;
      param_2[0x17] = iVar18 + 0xc;
switchD_0089bdfc_caseD_3:
      iVar18 = FUN_007d67b8(param_2 + 0x17,param_3);
      if (iVar18 == 0) break;
      param_2[0x15] = iVar18;
      if (*(char *)(param_2 + 0x25) == '\x03') {
        cVar1 = *(char *)(param_2 + 0x24);
        bVar29 = cVar1 == '\x03';
        if (bVar29) {
          cVar1 = *(char *)(param_2 + 0x1b);
        }
        if (bVar29 && cVar1 == '\x04') {
          FUN_0163c790(param_2 + 0x1c);
          if (param_2[0x1d] != 0) {
            (**(code **)(param_2[0x1d] + 0xc))(param_2[0x1e]);
          }
        }
      }
      if (param_2[0xd] == 1) {
        uVar12 = *(int *)param_2[0xc] * param_2[0xe];
        if (0xff < uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_0034b2fb,0x2e,&local_70,&DAT_0186b108,&DAT_0186afe8);
        }
      }
      else {
        uVar12 = (uint)*(byte *)((int *)param_2[0xc] + 1);
      }
      uVar31 = (**(code **)(*(int *)(param_2[0x15] + 0x20) + 0x14))
                         (*(undefined4 *)(param_2[0x15] + 0x1c),param_2[0xd],uVar12,param_2[0x13],
                          param_2[0x14],param_2[0x11],param_2[0x12]);
      *(undefined8 *)(param_2 + 0x17) = uVar31;
LAB_0089d150:
      local_b4 = param_2 + 7;
      uVar32 = (**(code **)((int)((ulonglong)uVar31 >> 0x20) + 0xc))((int)uVar31,param_3);
      if ((uVar32 & 1) != 0) {
        *(undefined1 *)(param_2 + 0x16) = 4;
        goto LAB_0089d25c;
      }
      uVar5 = param_2[0x17];
      puVar6 = (undefined4 *)param_2[0x18];
      pcVar21 = (code *)*puVar6;
      if (pcVar21 != (code *)0x0) {
        (*pcVar21)(uVar5);
      }
      if (puVar6[1] != 0) {
        thunk_FUN_016d3fb4(uVar5);
      }
      pcVar25 = (char *)param_2[0x15];
      if (*pcVar25 == '\0') {
        bVar29 = (bool)hasExclusiveAccess(pcVar25);
        if (!bVar29) goto LAB_0089d218;
        *pcVar25 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_0089d218:
        FUN_01280da8(pcVar25);
      }
      FUN_0128236c(pcVar25);
      FUN_0163af68(pcVar25,1,pcVar25);
      if (param_2[0x10] != 0) {
        thunk_FUN_016d3fb4(param_2[0x11]);
      }
      *(undefined1 *)(param_2 + 0x16) = 1;
      if ((uVar32 & 1) != 0) goto LAB_0089d25c;
      FUN_0081b77c(param_2 + 8);
      if ((int)(uVar32 >> 0x20) != 0) {
        if (param_2[4] != 0) {
          thunk_FUN_016d3fb4(param_2[2]);
        }
        iVar18 = -0x80000000;
        *(undefined1 *)local_b4 = 1;
        goto LAB_0089d2b4;
      }
      iVar18 = *(int *)(param_2[1] + 0x148);
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 100000000;
      param_2[0x24] = iVar18 + 8;
      *(undefined1 *)(param_2 + 0x25) = 0;
switchD_0089bdc4_caseD_4:
      iVar18 = FUN_0081c170(param_2 + 8,param_3);
      if (iVar18 != 0) {
        uVar4 = 4;
        goto LAB_0089d2dc;
      }
      if (*(char *)(param_2 + 0x25) == '\x03') {
        FUN_0081c020(param_2 + 0x10);
      }
      puVar6 = (undefined4 *)param_2[3];
      if (puVar6 == (undefined4 *)param_2[5]) goto LAB_0089bd6c;
    }
    *(undefined1 *)(param_2 + 0x16) = 3;
LAB_0089d25c:
    uVar4 = 3;
LAB_0089d2dc:
    local_b4 = param_2 + 7;
    *(undefined1 *)local_b4 = uVar4;
  }
  *param_1 = -0x7ffffffe;
  uVar4 = 3;
LAB_0089d2f4:
  *(undefined1 *)(param_2 + 0x35) = uVar4;
  return;
code_r0x0089c5c8:
  uVar8 = *(uint *)(pcVar13 + 0xc);
  uVar26 = *puVar22;
  if (pppppppuVar27 == local_50) {
    FUN_007f5750(&local_50);
    pcVar28 = local_4c;
  }
  pppppppuVar27 = (undefined4 *******)((int)pppppppuVar27 + 1);
  *(uint *)(pcVar28 + iVar18) = uVar8;
  *(uint *)(pcVar28 + iVar18 + 4) = uVar26 >> 8 & 0xff00 | uVar26 >> 0x18 | (uVar26 & 0x80) << 9;
  local_48 = pppppppuVar27;
  if (uVar10 != 0) {
    thunk_FUN_016d3fb4(puVar22);
  }
  iVar18 = iVar18 + 8;
  pcVar13 = pcVar7;
  if (pcVar7 == pcVar14) goto LAB_0089c634;
  goto LAB_0089c5a4;
LAB_0089ca34:
  local_a8 = (undefined1 *)((int)param_2 + 0xc9);
  local_68 = (code *)(param_2 + 0x11);
  local_70 = (code *)(param_2[0x10] + 0x14c);
  local_64 = (code *)&LAB_00fac484;
  local_6c = (code *)&DAT_00f5c97c;
  FUN_00600d2c(&local_40,&DAT_0057f786,&local_70);
  local_50 = local_40;
  local_4c = local_3c;
  local_48 = local_38;
  puVar6 = (undefined4 *)FUN_00808de4(&local_50);
  *local_a8 = 1;
  (**(code **)*puVar6)();
  uVar12 = param_2[0xb];
  if ((uint)param_2[0xc] <= uVar12) goto LAB_0089c048;
  goto LAB_0089cab4;
LAB_0089c634:
  local_6c = pcVar7;
LAB_0089c644:
  pcVar13 = local_6c + 4;
  for (uVar12 = (uint)((int)pcVar14 - (int)local_6c) >> 4; uVar12 != 0; uVar12 = uVar12 - 1) {
    if (*(uint *)(pcVar13 + -4) != 0) {
      thunk_FUN_016d3fb4(*(uint *)pcVar13);
    }
    pcVar13 = pcVar13 + 0x10;
  }
  if (pcVar23 != (code *)0x0) {
    thunk_FUN_016d3fb4(pcVar21);
    pppppppuVar27 = local_48;
  }
  pcVar13 = local_4c;
  pppppppuVar20 = local_50;
  if (&DAT_00000001 < pppppppuVar27) {
    if (&DAT_00000014 < pppppppuVar27) {
      FUN_008329e8(local_4c,pppppppuVar27);
    }
    else {
      pcVar21 = local_4c + 8;
      iVar18 = 0;
      do {
        if (*(uint *)pcVar21 < *(uint *)(pcVar21 + -8)) {
          uVar10 = *(uint *)pcVar21;
          uVar12 = *(uint *)(pcVar21 + 4);
          iVar3 = iVar18;
          do {
            iVar17 = iVar3;
            pcVar23 = local_4c + iVar17;
            *(undefined4 *)(pcVar23 + 8) = *(undefined4 *)pcVar23;
            *(undefined4 *)(pcVar23 + 0xc) = *(undefined4 *)(pcVar23 + 4);
            if (iVar17 == 0) {
              pcVar23 = local_4c;
              goto LAB_0089cba4;
            }
            iVar3 = iVar17 + -8;
          } while (uVar10 < *(uint *)(local_4c + iVar17 + -8));
          pcVar23 = local_4c + iVar17;
LAB_0089cba4:
          *(uint *)pcVar23 = uVar10;
          *(uint *)(pcVar23 + 4) = uVar12;
        }
        pcVar21 = pcVar21 + 8;
        iVar18 = iVar18 + 8;
      } while (pcVar21 != local_4c + (int)pppppppuVar27 * 8);
    }
  }
  *(undefined1 *)local_a4 = 1;
  if (pppppppuVar20 == (undefined4 *******)&DAT_80000000) {
LAB_0089c7a0:
    (*(code *)**(undefined4 **)pcVar13)(pcVar13);
LAB_0089c7b0:
    uVar10 = param_2[0xd];
    if ((uint)param_2[0xe] <= uVar10) goto LAB_0089ca34;
    goto LAB_0089caf8;
  }
  if (pppppppuVar20 == (undefined4 *******)0x80000001) {
LAB_0089cb5c:
    local_a8 = (undefined1 *)((int)param_2 + 0xc9);
    *local_a8 = 3;
    uVar4 = 5;
    goto LAB_0089d2dc;
  }
  if (pppppppuVar27 == (undefined4 *******)0x0) {
    puVar16 = (undefined1 *)0x0;
  }
  else {
    uVar12 = *(uint *)(pcVar13 + 4);
    FUN_016dd52c(pcVar13,pcVar13 + 8,(int)pppppppuVar27 * 8 + -8);
    if ((uVar12 & 0xff0000) != 0x20000) {
      if (pppppppuVar20 != (undefined4 *******)0x0) {
        thunk_FUN_016d3fb4(pcVar13);
      }
      dVar30 = (double)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
      dVar30 = dVar30 * 0.171342 + -298.829032;
      uVar12 = in_fpscr & 0xfffffff;
      uVar10 = uVar12 | (uint)(dVar30 < 0.0) << 0x1f;
      in_fpscr = uVar10 | (uint)NAN(dVar30) << 0x1c;
      if (((byte)(uVar10 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) &&
         (uVar10 = uVar12 | (uint)(dVar30 == 200.0) << 0x1e,
         in_fpscr = uVar10 | (uint)(200.0 <= dVar30) << 0x1d,
         !(bool)((byte)(in_fpscr >> 0x1d) & 1) || SUB41(uVar10 >> 0x1e,0))) {
        uVar12 = uVar12 | (uint)(dVar30 < *(double *)(param_2[0x10] + 0x28)) << 0x1f;
        in_fpscr = uVar12 | (uint)(NAN(dVar30) || NAN(*(double *)(param_2[0x10] + 0x28))) << 0x1c;
        if (((byte)(uVar12 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) ||
           (*(char *)(param_2 + 0x32) != '\0')) {
          iVar18 = param_2[10];
          uVar5 = param_2[0x11];
          *(undefined1 *)((int)param_2 + 0xc9) = 1;
          if (iVar18 == param_2[8]) {
            FUN_007f5810();
          }
          pdVar9 = (double *)(param_2[9] + iVar18 * 0x10);
          *(undefined4 *)(pdVar9 + 1) = uVar5;
          *pdVar9 = dVar30;
          param_2[10] = iVar18 + 1;
          uVar12 = param_2[0xb];
          if ((uint)param_2[0xc] <= uVar12) goto LAB_0089c048;
          goto LAB_0089cab4;
        }
        *(undefined1 *)(param_2 + 0x32) = 1;
        uVar10 = param_2[0xd];
        if ((uint)param_2[0xe] <= uVar10) goto LAB_0089ca34;
        goto LAB_0089caf8;
      }
      goto LAB_0089c7b0;
    }
    puVar16 = (undefined1 *)((int)pppppppuVar27 + -1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00602938(0,puVar16,&DAT_01863e48);
}

