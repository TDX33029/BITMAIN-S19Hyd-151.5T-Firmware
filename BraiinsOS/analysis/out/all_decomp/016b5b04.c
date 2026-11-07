// FUN_016b5b04 @ 016b5b04 size=5480 calls_out=17 calls_in=2
// strings: a Display implementation returned an error unexpectedly

/* WARNING: Type propagation algorithm not settling */

void FUN_016b5b04(undefined4 *param_1,int *param_2,code *param_3,code *param_4,code *param_5,
                 uint param_6)

{
  code cVar1;
  int *piVar2;
  byte bVar3;
  bool bVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 extraout_r1;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  code *extraout_r3;
  code *pcVar13;
  code *pcVar14;
  int iVar15;
  code *pcVar16;
  byte bVar17;
  int iVar18;
  code *pcVar19;
  code *pcVar20;
  bool bVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined1 uVar24;
  undefined4 *puVar25;
  int in_r12;
  code *pcVar26;
  code *extraout_r12;
  int extraout_r12_00;
  int extraout_r12_01;
  code *extraout_r12_02;
  code *extraout_r12_03;
  bool bVar27;
  undefined8 uVar28;
  ulonglong uVar29;
  uint local_d4;
  undefined1 *local_cc;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined2 local_ac;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  char local_94;
  code *local_93;
  undefined2 local_8f;
  undefined1 local_8d;
  undefined4 local_8c;
  code *local_88;
  undefined1 local_84;
  undefined4 local_80;
  code *local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined2 local_70;
  code *local_6c;
  code *local_68;
  int local_64;
  code *local_60;
  uint local_5c;
  undefined1 local_58;
  byte bStack_57;
  undefined2 local_56;
  undefined2 uStack_54;
  undefined2 local_52;
  undefined2 uStack_50;
  undefined2 local_4e;
  undefined1 uStack_4c;
  undefined4 uStack_4b;
  undefined1 auStack_40 [8];
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar18 = param_2[2];
  iVar7 = iVar18;
  if (*param_2 == iVar18) {
    FUN_016bd7fc(param_2,iVar18,1,1,1);
    iVar7 = param_2[2];
    in_r12 = extraout_r12_00;
  }
  *(undefined1 *)(param_2[1] + iVar7) = 0x2f;
  iVar7 = iVar18 + 1;
  param_2[2] = iVar7;
  if (*param_2 == iVar7) {
    FUN_016bd7fc(param_2,iVar7,1,1,1);
    iVar7 = param_2[2];
    in_r12 = extraout_r12_01;
  }
  *(undefined1 *)(param_2[1] + iVar7) = 0x2f;
  param_2[2] = iVar18 + 2;
  pcVar16 = (code *)0x0;
  pcVar20 = param_3;
  iVar7 = 0;
LAB_016b5b80:
  do {
    iVar6 = iVar7;
    do {
      while( true ) {
        if (pcVar20 == param_4) goto switchD_016b5c6c_caseD_23;
        puVar5 = (undefined1 *)(uint)(byte)*pcVar20;
        pcVar19 = pcVar20 + 1;
        if (-1 < (char)*pcVar20) break;
        if (puVar5 < (undefined1 *)0xe0) {
          puVar5 = (undefined1 *)((byte)pcVar20[1] & 0x3f | ((uint)puVar5 & 0x1f) << 6);
          pcVar19 = pcVar20 + 2;
          break;
        }
        uVar11 = (byte)pcVar20[2] & 0x3f | ((byte)pcVar20[1] & 0x3f) << 6;
        if (&DAT_000000f0 <= puVar5) {
          puVar5 = (undefined1 *)
                   ((byte)pcVar20[3] & 0x3f | uVar11 << 6 | ((uint)puVar5 & 7) << 0x12);
          if (puVar5 != &DAT_00110000) {
            pcVar20 = pcVar20 + 4;
            if (puVar5 <= &DAT_0000000d) goto LAB_016b5bb0;
            goto LAB_016b5c30;
          }
          goto switchD_016b5c6c_caseD_23;
        }
        puVar5 = (undefined1 *)(uVar11 | ((uint)puVar5 & 0x1f) << 0xc);
        pcVar20 = pcVar20 + 3;
        if (&DAT_0000000e <= puVar5) goto LAB_016b5c30;
LAB_016b5bb0:
        puVar9 = &DAT_00110000;
        if ((1 << ((uint)puVar5 & 0xff) & 0x2600U) == 0) {
          puVar9 = puVar5;
        }
        pcVar19 = pcVar20;
        if (puVar9 != &DAT_00110000) goto LAB_016b5c58;
      }
      pcVar20 = pcVar19;
      if (puVar5 < (undefined1 *)0xe) goto LAB_016b5bb0;
LAB_016b5c30:
      puVar9 = puVar5;
      pcVar19 = pcVar20;
    } while (puVar5 == &DAT_00110000);
LAB_016b5c58:
    pcVar20 = (code *)&switchD_016b5c6c::switchdataD_016b5c70;
    switch(puVar9) {
    case (undefined1 *)0x23:
    case (undefined1 *)0x2f:
    case (undefined1 *)0x3f:
      goto switchD_016b5c6c_caseD_23;
    case (undefined1 *)0x24:
    case (undefined1 *)0x25:
    case (undefined1 *)0x26:
    case (undefined1 *)0x27:
    case (undefined1 *)0x28:
    case (undefined1 *)0x29:
    case (undefined1 *)0x2a:
    case (undefined1 *)0x2b:
    case (undefined1 *)0x2c:
    case (undefined1 *)0x2d:
    case (undefined1 *)0x2e:
    case (undefined1 *)0x30:
    case (undefined1 *)0x31:
    case (undefined1 *)0x32:
    case (undefined1 *)0x33:
    case (undefined1 *)0x34:
    case (undefined1 *)0x35:
    case (undefined1 *)0x36:
    case (undefined1 *)0x37:
    case (undefined1 *)0x38:
    case (undefined1 *)0x39:
    case (undefined1 *)0x3a:
    case (undefined1 *)0x3b:
    case (undefined1 *)0x3c:
    case (undefined1 *)0x3d:
    case (undefined1 *)0x3e:
      break;
    case (undefined1 *)0x40:
      goto switchD_016b5c6c_caseD_40;
    default:
      if ((puVar9 == (undefined1 *)0x5c) && (pcVar20 = pcVar19, ((uint)param_5 & 0xff) != 2))
      goto switchD_016b5c6c_caseD_23;
    }
    pcVar20 = pcVar19;
    iVar7 = iVar6 + 1;
  } while( true );
switchD_016b5c6c_caseD_40:
  if (param_2[6] != 0) {
    uVar23 = 10;
    if (pcVar16 == (code *)0x0) {
      uVar23 = 2;
    }
    (**(code **)(param_2[7] + 0x14))(param_2[6],uVar23);
  }
  pcVar16 = pcVar19;
  pcVar20 = pcVar19;
  iVar7 = iVar6 + 1;
  in_r12 = iVar6;
  goto LAB_016b5b80;
switchD_016b5c6c_caseD_23:
  if (pcVar16 == (code *)0x0) {
    pcVar20 = (code *)param_2[2];
LAB_016b623c:
    local_b8 = param_3;
    local_80 = param_4;
    if (param_3 != (code *)0x0) {
      iVar7 = param_2[2];
      uVar11 = (int)param_4 - (int)param_3;
      local_6c = param_3;
      local_68 = param_4;
      if (uVar11 == 0) {
        bVar17 = 0;
        if (((uint)param_5 & 0xff) == 1) goto LAB_016b6dec;
        bVar21 = false;
        pcVar14 = param_3;
        pcVar19 = param_5;
LAB_016b6288:
        uVar11 = 0;
LAB_016b628c:
        pcVar16 = param_3;
        do {
          do {
            if (pcVar16 == param_3 + uVar11) {
              local_28 = 0;
              puVar25 = &local_30;
              local_2c = 1;
              local_30 = 0;
              while (uVar11 != 0) {
                cVar1 = *param_3;
                if (((char)cVar1 < '\0') ||
                   ((*(uint *)(&DAT_00564bf0 + (uint)((byte)cVar1 >> 5) * 4) >> ((byte)cVar1 & 0x1f)
                    & 1) != 0)) {
                  uVar22 = uVar11 - 1;
                  pcVar16 = (code *)("%0" + (uint)(byte)cVar1 * 3);
                  uVar11 = 3;
                  param_3 = param_3 + 1;
                }
                else {
                  uVar22 = 1;
                  do {
                    uVar8 = uVar22;
                    pcVar16 = param_3;
                    if (uVar11 == uVar8) {
                      uVar22 = 0;
                      param_3 = (code *)&DAT_00000001;
                      goto LAB_016b6cd4;
                    }
                    uVar12 = (uint)(char)param_3[uVar8];
                  } while ((-1 < (int)uVar12) &&
                          (uVar22 = uVar8 + 1,
                          (*(uint *)(&DAT_00564bf0 + (uVar12 >> 5) * 4) >> (uVar12 & 0x1f) & 1) == 0
                          ));
                  if (uVar11 < uVar8) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa478(&DAT_00418e0f,0x13,&DAT_0188bb90);
                  }
                  uVar22 = uVar11 - uVar8;
                  uVar11 = uVar8;
                  param_3 = param_3 + uVar8;
                }
LAB_016b6cd4:
                iVar6 = FUN_016bb4d8(puVar25,pcVar16,uVar11);
                uVar11 = uVar22;
                if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,
                               auStack_40,&DAT_018af140,&DAT_018af130);
                }
              }
              uVar11 = 0;
              local_56 = (undefined2)local_30;
              uStack_54 = (undefined2)((uint)local_30 >> 0x10);
              local_b8 = (code *)CONCAT22(local_56,CONCAT11(bStack_57,local_58));
              local_52 = (undefined2)local_2c;
              uStack_50 = (undefined2)((uint)local_2c >> 0x10);
              local_b4 = (code *)CONCAT22(local_52,uStack_54);
              local_4e = (undefined2)local_28;
              uStack_4c = (undefined1)((uint)local_28 >> 0x10);
              uStack_4b._0_1_ = (undefined1)((uint)local_28 >> 0x18);
              local_38 = local_28;
              local_b0 = CONCAT22(local_4e,uStack_50);
              local_ac = (undefined2)((uint)local_28 >> 0x10);
              goto LAB_016b6d98;
            }
            uVar22 = (uint)(byte)*pcVar16;
            pcVar26 = pcVar16 + 1;
            if ((char)*pcVar16 < '\0') {
              if (uVar22 < 0xe0) {
                uVar22 = (byte)pcVar16[1] & 0x3f | (uVar22 & 0x1f) << 6;
                pcVar26 = pcVar16 + 2;
              }
              else {
                pcVar14 = (code *)((byte)pcVar16[2] & 0x3f);
                uVar8 = (uint)pcVar14 | ((byte)pcVar16[1] & 0x3f) << 6;
                if (uVar22 < 0xf0) {
                  uVar22 = uVar8 | (uVar22 & 0x1f) << 0xc;
                  pcVar26 = pcVar16 + 3;
                }
                else {
                  uVar22 = (byte)pcVar16[3] & 0x3f | uVar8 << 6 | (uVar22 & 7) << 0x12;
                  pcVar26 = pcVar16 + 4;
                }
              }
            }
            pcVar16 = pcVar26;
          } while (0x7c < uVar22);
          switch(uVar22) {
          case 0:
          case 9:
          case 10:
          case 0xd:
          case 0x20:
          case 0x23:
          case 0x2f:
          case 0x3a:
          case 0x3c:
          case 0x3e:
          case 0x3f:
          case 0x40:
          case 0x5b:
          case 0x5c:
          case 0x5d:
          case 0x5e:
          case 0x7c:
            goto switchD_016b62c0_caseD_0;
          }
        } while( true );
      }
      pcVar19 = (code *)((uint)param_5 & 0xff);
      bVar27 = false;
      bVar21 = false;
      iVar6 = 0;
      uVar22 = 0;
      pcVar16 = param_3;
      if (pcVar19 == (code *)&SUB_00000002) {
        do {
          pcVar14 = (code *)(uint)(byte)*pcVar16;
          pcVar26 = pcVar16 + 1;
          if ((char)*pcVar16 < '\0') {
            if (pcVar14 < &DAT_000000e0) {
              pcVar14 = (code *)((byte)pcVar16[1] & 0x3f | ((uint)pcVar14 & 0x1f) << 6);
              pcVar16 = pcVar16 + 2;
              pcVar26 = pcVar14 + -9;
              if (pcVar26 < &DAT_00000055) goto LAB_016b6598;
            }
            else {
              uVar8 = (byte)pcVar16[2] & 0x3f | ((byte)pcVar16[1] & 0x3f) << 6;
              if (pcVar14 < &DAT_000000f0) {
                pcVar14 = (code *)(uVar8 | ((uint)pcVar14 & 0x1f) << 0xc);
                pcVar26 = pcVar16 + 3;
                goto joined_r0x016b6594;
              }
              pcVar14 = (code *)((byte)pcVar16[3] & 0x3f | uVar8 << 6 | ((uint)pcVar14 & 7) << 0x12)
              ;
              pcVar16 = pcVar16 + 4;
              pcVar26 = pcVar14 + -9;
              if (pcVar26 < &DAT_00000055) goto LAB_016b6598;
            }
switchD_016b65a4_caseD_16b679c:
            iVar15 = 1;
            if ((code *)0x7f < pcVar14) {
              iVar15 = 2;
            }
            if (((code *)0x7ff < pcVar14) && (iVar15 = 4, pcVar14 < (code *)0x10000)) {
              iVar15 = 3;
            }
            goto LAB_016b655c;
          }
joined_r0x016b6594:
          pcVar16 = pcVar26;
          pcVar26 = pcVar14 + -9;
          if (&DAT_00000054 < pcVar26) goto switchD_016b65a4_caseD_16b679c;
LAB_016b6598:
          iVar15 = 1;
          bVar4 = true;
          switch((int)&switchD_016b65a4::switchdataD_016b65a8 +
                 (&switchD_016b65a4::switchdataD_016b65a8)[(int)pcVar26] & 0xfffffffe) {
          case 0x16b6550:
            if (bVar27) goto switchD_016b65a4_caseD_16b6558;
            goto switchD_016b6818_caseD_16b6a28;
          case 0x16b6558:
switchD_016b65a4_caseD_16b6558:
            break;
          case 0x16b6560:
            goto switchD_016b65a4_caseD_16b6560;
          case 0x16b66fc:
            bVar27 = true;
            break;
          case 0x16b6778:
            bVar27 = false;
            break;
          default:
            goto switchD_016b65a4_caseD_16b679c;
          case 0x16b6a28:
            goto switchD_016b6818_caseD_16b6a28;
          }
LAB_016b655c:
          iVar6 = iVar6 + 1;
          bVar4 = bVar21;
switchD_016b65a4_caseD_16b6560:
          bVar21 = bVar4;
          uVar22 = iVar15 + uVar22;
        } while (pcVar16 != param_4);
      }
      else {
        do {
          pcVar26 = pcVar16 + 1;
          pcVar14 = (code *)(uint)(byte)*pcVar16;
          if ((char)*pcVar16 < '\0') {
            if (pcVar14 < &DAT_000000e0) {
              pcVar14 = (code *)((byte)pcVar16[1] & 0x3f | ((uint)pcVar14 & 0x1f) << 6);
              pcVar26 = pcVar16 + 2;
              pcVar16 = pcVar14 + -9;
              if (pcVar16 < &DAT_00000055) goto LAB_016b680c;
            }
            else {
              uVar8 = (byte)pcVar16[2] & 0x3f | ((byte)pcVar16[1] & 0x3f) << 6;
              if (pcVar14 < &DAT_000000f0) {
                pcVar14 = (code *)(uVar8 | ((uint)pcVar14 & 0x1f) << 0xc);
                pcVar26 = pcVar16 + 3;
                goto joined_r0x016b6a00;
              }
              pcVar14 = (code *)((byte)pcVar16[3] & 0x3f | uVar8 << 6 | ((uint)pcVar14 & 7) << 0x12)
              ;
              pcVar26 = pcVar16 + 4;
              pcVar16 = pcVar14 + -9;
              if (pcVar16 < &DAT_00000055) goto LAB_016b680c;
            }
switchD_016b6818_caseD_16b6a04:
            iVar15 = 1;
            if ((code *)0x7f < pcVar14) {
              iVar15 = 2;
            }
            if (((code *)0x7ff < pcVar14) && (iVar15 = 4, pcVar14 < (code *)0x10000)) {
              iVar15 = 3;
            }
          }
          else {
joined_r0x016b6a00:
            pcVar16 = pcVar14 + -9;
            if (&DAT_00000054 < pcVar16) goto switchD_016b6818_caseD_16b6a04;
LAB_016b680c:
            iVar15 = 1;
            bVar4 = true;
            switch((int)&switchD_016b6818::switchdataD_016b681c +
                   (&switchD_016b6818::switchdataD_016b681c)[(int)pcVar16] & 0xfffffffe) {
            case 0x16b67c0:
              if (!bVar27) goto switchD_016b6818_caseD_16b6a28;
switchD_016b6818_caseD_16b67c8:
              bVar27 = true;
              break;
            case 0x16b67c8:
              goto switchD_016b6818_caseD_16b67c8;
            case 0x16b67d4:
              goto switchD_016b6818_caseD_16b67d4;
            case 0x16b6970:
              bVar27 = false;
              break;
            default:
              goto switchD_016b6818_caseD_16b6a04;
            case 0x16b6a28:
              goto switchD_016b6818_caseD_16b6a28;
            }
          }
          iVar6 = iVar6 + 1;
          bVar4 = bVar21;
switchD_016b6818_caseD_16b67d4:
          bVar21 = bVar4;
          uVar22 = iVar15 + uVar22;
          pcVar16 = pcVar26;
        } while (pcVar26 != param_4);
      }
switchD_016b6818_caseD_16b6a28:
      if (bVar21) {
        FUN_016bd1e0(&local_64,&local_6c);
        uVar11 = local_5c;
        param_3 = local_60;
        if (pcVar19 != (code *)&DAT_00000001 || local_5c != 0) goto LAB_016b6b7c;
        uVar11 = 3;
        bVar17 = 0;
LAB_016b6dc8:
        if (local_64 != 0) {
LAB_016b6dd8:
          thunk_FUN_016d3fb4(local_60);
        }
        uVar24 = (undefined1)uVar11;
        if (uVar11 == 3) goto LAB_016b6dec;
      }
      else {
        for (; pcVar16 = local_6c, iVar6 != 0; iVar6 = iVar6 + -1) {
          do {
            local_6c = pcVar16;
            if (pcVar16 == param_4) goto LAB_016b6b34;
            local_6c = pcVar16 + 1;
            pcVar14 = (code *)(uint)(byte)*pcVar16;
            if (0x7fffffff < (uint)(int)(char)*pcVar16) {
              if (pcVar14 < &DAT_000000e0) {
                pcVar14 = (code *)((byte)pcVar16[1] & 0x3f | ((uint)pcVar14 & 0x1f) << 6);
                local_6c = pcVar16 + 2;
              }
              else {
                uVar8 = (byte)pcVar16[2] & 0x3f | ((byte)pcVar16[1] & 0x3f) << 6;
                if (pcVar14 < &DAT_000000f0) {
                  pcVar14 = (code *)(uVar8 | ((uint)pcVar14 & 0x1f) << 0xc);
                  local_6c = pcVar16 + 3;
                }
                else {
                  local_6c = pcVar16 + 4;
                  pcVar14 = (code *)((byte)pcVar16[3] & 0x3f | uVar8 << 6 |
                                    ((uint)pcVar14 & 7) << 0x12);
                  if (pcVar14 == (code *)&DAT_00110000) goto LAB_016b6b34;
                }
              }
            }
            pcVar16 = local_6c;
          } while (((pcVar14 <= &DAT_0000000d) && ((1 << ((uint)pcVar14 & 0xff) & 0x2600U) != 0)) ||
                  (pcVar14 == (code *)&DAT_00110000));
        }
LAB_016b6b34:
        if (uVar22 != 0) {
          if (uVar22 < uVar11) {
            if ((char)param_3[uVar22] < -0x40) goto LAB_016b7570;
            uVar11 = uVar22;
          }
          else if (uVar22 != uVar11) {
LAB_016b7570:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(param_3,uVar11,0,uVar22,&DAT_018aee18);
          }
LAB_016b6b7c:
          if (pcVar19 != (code *)&SUB_00000002) goto LAB_016b6c0c;
          if (uVar11 == 0) goto LAB_016b6288;
          if (*param_3 != (code)0x5b) goto LAB_016b628c;
          if (param_3[uVar11 - 1] == (code)0x5d) {
            if ((uVar11 - 1 == 0) || ((char)param_3[1] < -0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa8ac(param_3,uVar11,1,uVar11 - 1,&DAT_018af110);
            }
            FUN_016bbe5c(&local_58,param_3 + 1,uVar11 - 2);
            puVar25 = (undefined4 *)(uint)bStack_57;
            bVar17 = bStack_57;
            if (local_58 != (code)0x0) goto LAB_016b6dbc;
            uVar11 = 2;
            local_b8 = (code *)CONCAT22(uStack_54,local_56);
            local_ac = (undefined2)((uint)uStack_4b >> 8);
            uStack_aa = (undefined1)((uint)uStack_4b >> 0x18);
            local_b4 = (code *)CONCAT22(uStack_50,local_52);
            local_b0 = CONCAT13((undefined1)uStack_4b,CONCAT12(uStack_4c,local_4e));
LAB_016b6d98:
            uVar24 = (undefined1)uVar11;
            bVar17 = (byte)puVar25;
            uStack_74 = CONCAT13(uStack_a9,CONCAT12(uStack_aa,local_ac));
            local_80 = local_b8;
            local_7c = local_b4;
            uStack_78 = local_b0;
            local_70 = (undefined2)local_a8;
            pcVar14 = local_68;
            pcVar19 = local_6c;
            if (bVar21) goto LAB_016b6dc8;
            goto LAB_016b6e18;
          }
          bVar17 = 4;
LAB_016b6dbc:
          if (!bVar21) goto LAB_016b6dec;
          uVar11 = 3;
          goto LAB_016b6dc8;
        }
        bVar17 = 0;
        if (pcVar19 == (code *)&DAT_00000001) goto LAB_016b6dec;
        uVar11 = 0;
        if (pcVar19 == (code *)&SUB_00000002) goto LAB_016b628c;
LAB_016b6c0c:
        pcVar14 = (code *)&local_b8;
        FUN_016bc2fc(pcVar14,param_3,uVar11);
        uVar11 = (uint)local_b8 & 0xff;
        uVar24 = SUB41(local_b8,0);
        bVar17 = local_b8._1_1_;
        if (uVar11 == 3) goto LAB_016b6dbc;
        FUN_016dd1aa(&local_80,(uint)pcVar14 | 2,0x12);
        pcVar14 = local_68;
        local_60 = param_3;
        pcVar19 = local_6c;
        if ((bool)(bVar21 & local_64 != 0)) goto LAB_016b6dd8;
      }
LAB_016b6e18:
      FUN_016dd1aa((uint)&local_b8 | 2,&local_80,0x12);
      local_b8 = (code *)CONCAT31(CONCAT21(local_b8._2_2_,bVar17),uVar24);
      local_7c = FUN_016bd04c;
      local_80 = (code *)&local_b8;
      iVar6 = FUN_00fa948c(param_2,&DAT_018aeed8,&DAT_00590e71,&local_80);
      if (iVar6 != 0) {
        puVar10 = &DAT_018aef10;
LAB_016b74a4:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,auStack_40,&DAT_018af060,puVar10);
      }
      uVar22 = (uint)local_b8 & 0xff;
      uVar11 = param_2[2];
      piVar2 = param_2;
      if (uVar22 == 0) {
        piVar2 = (int *)CONCAT13(uStack_a9,CONCAT12(uStack_aa,local_ac));
      }
      if (uVar22 == 0 && piVar2 == (int *)0x0) {
        local_80 = pcVar19;
        local_7c = pcVar14;
        iVar6 = FUN_016b5984(&DAT_00418eb8,1,&local_80);
        bVar3 = 0;
        if ((((uint)param_5 & 0xff) == 2) && (iVar6 == 0)) goto LAB_016b6e84;
      }
      else {
LAB_016b6e84:
        puVar25 = (undefined4 *)((uint)&local_b8 | 1);
        uVar23 = 0;
        pcVar16 = pcVar19;
        do {
          while( true ) {
            if (pcVar16 == pcVar14) goto LAB_016b70b0;
            puVar5 = (undefined1 *)(uint)(byte)*pcVar16;
            pcVar26 = pcVar16 + 1;
            if (-1 < (char)*pcVar16) break;
            if (puVar5 < (undefined1 *)0xe0) {
              puVar5 = (undefined1 *)((byte)pcVar16[1] & 0x3f | ((uint)puVar5 & 0x1f) << 6);
              pcVar26 = pcVar16 + 2;
              break;
            }
            uVar8 = (byte)pcVar16[2] & 0x3f | ((byte)pcVar16[1] & 0x3f) << 6;
            if (&DAT_000000f0 <= puVar5) {
              puVar5 = (undefined1 *)
                       ((byte)pcVar16[3] & 0x3f | uVar8 << 6 | ((uint)puVar5 & 7) << 0x12);
              if (puVar5 != &DAT_00110000) {
                pcVar16 = pcVar16 + 4;
                if (puVar5 <= &DAT_0000000d) goto LAB_016b6ed8;
                goto LAB_016b6ea4;
              }
              goto LAB_016b70b0;
            }
            puVar5 = (undefined1 *)(uVar8 | ((uint)puVar5 & 0x1f) << 0xc);
            pcVar16 = pcVar16 + 3;
            if (&DAT_0000000e <= puVar5) goto LAB_016b6ea4;
LAB_016b6ed8:
            puVar9 = &DAT_00110000;
            if ((1 << ((uint)puVar5 & 0xff) & 0x2600U) == 0) {
              puVar9 = puVar5;
            }
            if (puVar9 != &DAT_00110000) goto LAB_016b6f7c;
          }
          pcVar16 = pcVar26;
          if (puVar5 < &DAT_0000000e) goto LAB_016b6ed8;
LAB_016b6ea4:
          puVar9 = puVar5;
        } while (puVar5 == &DAT_00110000);
LAB_016b6f7c:
        if (puVar9 != (undefined1 *)0x3a) {
LAB_016b70b0:
          local_88 = pcVar19;
          goto LAB_016b70b4;
        }
        bVar27 = false;
        pcVar26 = (code *)(uint)*(byte *)(param_2 + 8);
        local_cc = (undefined1 *)0x0;
        pcVar19 = pcVar16;
        do {
          pcVar16 = pcVar19;
          do {
            while( true ) {
              if (pcVar16 == pcVar14) goto LAB_016b7278;
              puVar5 = (undefined1 *)(uint)(byte)*pcVar16;
              pcVar13 = pcVar16 + 1;
              if (-1 < (char)*pcVar16) break;
              if (puVar5 < (undefined1 *)0xe0) {
                puVar5 = (undefined1 *)((byte)pcVar16[1] & 0x3f | ((uint)puVar5 & 0x1f) << 6);
                pcVar13 = pcVar16 + 2;
                break;
              }
              uVar8 = (byte)pcVar16[2] & 0x3f | ((byte)pcVar16[1] & 0x3f) << 6;
              if (&DAT_000000f0 <= puVar5) {
                puVar5 = (undefined1 *)
                         ((byte)pcVar16[3] & 0x3f | uVar8 << 6 | ((uint)puVar5 & 7) << 0x12);
                if (puVar5 != &DAT_00110000) {
                  pcVar16 = pcVar16 + 4;
                  puVar9 = puVar5;
                  if (puVar5 <= &DAT_0000000d) goto LAB_016b6fdc;
                  goto LAB_016b6fa8;
                }
                goto LAB_016b7278;
              }
              puVar5 = (undefined1 *)(uVar8 | ((uint)puVar5 & 0x1f) << 0xc);
              pcVar16 = pcVar16 + 3;
              puVar9 = puVar5;
              if (&DAT_0000000e <= puVar5) goto LAB_016b6fa8;
LAB_016b6fdc:
              puVar9 = &DAT_00110000;
              if ((1 << ((uint)puVar5 & 0xff) & 0x2600U) == 0) {
                puVar9 = puVar5;
              }
              if (puVar9 != &DAT_00110000) goto LAB_016b7074;
            }
            pcVar16 = pcVar13;
            puVar9 = puVar5;
            if (puVar5 < &DAT_0000000e) goto LAB_016b6fdc;
LAB_016b6fa8:
          } while (puVar9 == &DAT_00110000);
LAB_016b7074:
          if ((undefined1 *)0x9 < puVar9 + -0x30) {
            if (pcVar26 == (code *)0x0) {
              if ((((undefined1 *)0x1c < puVar9 + -0x23) ||
                  ((1 << ((uint)(puVar9 + -0x23) & 0xff) & 0x10001001U) == 0)) &&
                 (puVar9 != (undefined1 *)0x5c)) break;
            }
            else {
LAB_016b7278:
              if ((pcVar26 == (code *)&DAT_00000001 && !bVar27) && (pcVar19 != pcVar14)) {
                pcVar16 = pcVar19;
                goto LAB_016b72cc;
              }
            }
            uVar23 = 0;
            local_88 = pcVar26;
            if (!bVar27) goto LAB_016b70b4;
            if (param_6 != 0) {
              if (param_6 < uVar11) {
                if (*(char *)(param_2[1] + param_6) < -0x40) goto LAB_016b7400;
              }
              else if (param_6 != uVar11) {
LAB_016b7400:
                    /* WARNING: Subroutine does not return */
                FUN_00faa8ac(param_2[1],uVar11,0,param_6,&DAT_018aef30);
              }
            }
            uVar29 = FUN_016b3b14();
            if (((uVar29 & 1) != 0) &&
               (local_88 = extraout_r12_02,
               ((uint)(uVar29 >> 0x20) & 0xffff) == ((uint)local_cc & 0xffff))) goto LAB_016b70b4;
            local_58 = SUB41(local_cc,0);
            bStack_57 = (byte)((uint)local_cc >> 8);
            local_7c = FUN_00fac370;
            local_80 = (code *)&local_58;
            iVar6 = FUN_00fa948c(param_2,&DAT_018aeed8,&DAT_0059a08d,&local_80);
            if (iVar6 == 0) {
              uVar22 = (uint)local_b8 & 0xff;
              uVar23 = 1;
              local_88 = extraout_r12_03;
              goto LAB_016b70b4;
            }
            puVar10 = &DAT_018aef20;
            goto LAB_016b74a4;
          }
          bVar27 = true;
          local_cc = puVar9 + -0x30 + (int)local_cc * 10;
          pcVar19 = pcVar16;
        } while ((uint)local_cc >> 0x10 == 0);
LAB_016b70a0:
        bVar17 = 2;
        bVar3 = 2;
        if (uVar22 != 0) goto LAB_016b6dec;
      }
      bVar17 = bVar3;
      if (local_b4 != (code *)0x0) {
        thunk_FUN_016d3fb4(local_b0);
      }
      goto LAB_016b6dec;
    }
  }
  else {
    if (in_r12 != 0) {
      if (in_r12 < 1) goto LAB_016b6234;
      local_cc = (undefined1 *)0x0;
      local_d4 = 0;
joined_r0x016b5db8:
      do {
        do {
          pcVar19 = param_3;
          if (pcVar19 == param_4) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018aeec8);
          }
          param_3 = pcVar19 + 1;
          puVar5 = (undefined1 *)(int)(char)*pcVar19;
          uVar11 = (uint)(byte)*pcVar19;
          if ((int)puVar5 < 0) {
            puVar5 = (undefined1 *)(uVar11 & 0x1f);
            if (uVar11 < 0xe0) {
              uVar11 = (byte)pcVar19[1] & 0x3f | (int)puVar5 << 6;
              param_3 = pcVar19 + 2;
            }
            else {
              uVar22 = (byte)pcVar19[2] & 0x3f | ((byte)pcVar19[1] & 0x3f) << 6;
              if (uVar11 < 0xf0) {
                uVar11 = uVar22 | (int)puVar5 << 0xc;
                param_3 = pcVar19 + 3;
              }
              else {
                puVar5 = (undefined1 *)(uVar11 & 7);
                param_3 = pcVar19 + 4;
                uVar11 = (byte)pcVar19[3] & 0x3f | uVar22 << 6 | (int)puVar5 << 0x12;
              }
            }
          }
        } while ((uVar11 < 0xe) && ((1 << (uVar11 & 0xff) & 0x2600U) != 0));
        uVar22 = 1;
        if (0x7f < uVar11) {
          uVar22 = 2;
        }
        if (uVar11 < 0x800) {
          uVar8 = (int)param_4 - (int)pcVar19;
          bVar27 = uVar22 == uVar8;
          if (uVar8 <= uVar22) goto LAB_016b5eb4;
LAB_016b5e88:
          puVar5 = (undefined1 *)(int)(char)pcVar19[uVar22];
          if ((int)puVar5 < -0x40) {
LAB_016b7518:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(pcVar19,uVar8,0,uVar22,&DAT_018aedd8);
          }
        }
        else {
          uVar22 = 4;
          if (uVar11 < 0x10000) {
            uVar22 = 3;
          }
          uVar8 = (int)param_4 - (int)pcVar19;
          bVar27 = uVar22 == uVar8;
          if (uVar22 < uVar8) goto LAB_016b5e88;
LAB_016b5eb4:
          if (!bVar27) goto LAB_016b7518;
        }
        if (uVar11 == 0x3a) {
          puVar5 = local_cc;
        }
        if (!(uVar11 == 0x3a && puVar5 == (undefined1 *)0x0)) {
          FUN_016b4e08(param_2[6],param_2[7],uVar11,param_3,param_4);
          while (uVar22 != 0) {
            pcVar14 = pcVar19 + 1;
            cVar1 = *pcVar19;
            if (((char)cVar1 < '\0') ||
               ((*(uint *)(&DAT_00565640 + (uint)((byte)cVar1 >> 5) * 4) >> ((byte)cVar1 & 0x1f) & 1
                ) != 0)) {
              uVar11 = uVar22 - 1;
              pcVar19 = (code *)("%0" + (uint)(byte)cVar1 * 3);
              uVar22 = 3;
            }
            else {
              pcVar14 = (code *)&DAT_00000001;
              uVar11 = 1;
              do {
                uVar8 = uVar11;
                if (uVar22 == uVar8) {
                  uVar11 = 0;
                  goto LAB_016b5f28;
                }
                uVar12 = (uint)(char)pcVar19[uVar8];
              } while ((-1 < (int)uVar12) &&
                      (uVar11 = uVar8 + 1,
                      (*(uint *)(&DAT_00565640 + (uVar12 >> 5) * 4) >> (uVar12 & 0x1f) & 1) == 0));
              if (uVar22 < uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa478(&DAT_00418e0f,0x13,&DAT_0188bb90);
              }
              uVar11 = uVar22 - uVar8;
              pcVar14 = pcVar19 + uVar8;
              uVar22 = uVar8;
            }
LAB_016b5f28:
            iVar7 = param_2[2];
            if ((uint)(*param_2 - iVar7) < uVar22) {
              FUN_016bd7fc(param_2,iVar7,uVar22,1,1);
              iVar7 = param_2[2];
            }
            FUN_016dd1aa(param_2[1] + iVar7,pcVar19,uVar22);
            param_2[2] = param_2[2] + uVar22;
            pcVar19 = pcVar14;
            uVar22 = uVar11;
          }
          local_d4 = (uint)local_cc ^ 1 | local_d4;
          iVar7 = in_r12 + -1;
          bVar27 = 0 < in_r12;
          in_r12 = iVar7;
          if (!(iVar7 != 0 && bVar27)) break;
          goto joined_r0x016b5db8;
        }
        pcVar20 = (code *)param_2[2];
        if (in_r12 == 1) {
          pcVar19 = pcVar20;
          if (!(local_d4 == 0 && local_cc == (undefined1 *)0x0)) goto LAB_016b61f4;
          goto LAB_016b6238;
        }
        pcVar19 = pcVar20;
        if ((code *)*param_2 == pcVar20) {
          FUN_016bd7fc(param_2,pcVar20,1,1,1);
          pcVar19 = (code *)param_2[2];
        }
        pcVar19[param_2[1]] = (code)0x3a;
        param_2[2] = (int)(pcVar20 + 1);
        local_cc = (undefined1 *)0x1;
        iVar7 = in_r12 + -1;
        bVar27 = in_r12 < 1;
        in_r12 = iVar7;
      } while (!(iVar7 == 0 || bVar27));
      if (local_cc == (undefined1 *)0x0) {
        pcVar20 = (code *)param_2[2];
        pcVar19 = pcVar20;
        if (local_d4 != 0) goto LAB_016b61f4;
      }
      else if (local_d4 != 0 || local_cc != (undefined1 *)0x0) {
        pcVar19 = (code *)param_2[2];
LAB_016b61f4:
        pcVar14 = pcVar19;
        if ((code *)*param_2 == pcVar19) {
          FUN_016bd7fc(param_2,pcVar19,1,1,1);
          pcVar14 = (code *)param_2[2];
        }
        pcVar14[param_2[1]] = (code)0x40;
        param_2[2] = (int)(pcVar19 + 1);
        param_3 = pcVar16;
        goto LAB_016b623c;
      }
LAB_016b6238:
      param_3 = pcVar16;
      goto LAB_016b623c;
    }
    pcVar20 = pcVar16;
    do {
      while( true ) {
        if (pcVar20 == param_4) goto LAB_016b6234;
        puVar5 = (undefined1 *)(uint)(byte)*pcVar20;
        pcVar19 = pcVar20 + 1;
        if (-1 < (char)*pcVar20) break;
        if (puVar5 < (undefined1 *)0xe0) {
          puVar5 = (undefined1 *)((byte)pcVar20[1] & 0x3f | ((uint)puVar5 & 0x1f) << 6);
          pcVar19 = pcVar20 + 2;
          break;
        }
        uVar11 = (byte)pcVar20[2] & 0x3f | ((byte)pcVar20[1] & 0x3f) << 6;
        if (&DAT_000000f0 <= puVar5) {
          puVar5 = (undefined1 *)
                   ((byte)pcVar20[3] & 0x3f | uVar11 << 6 | ((uint)puVar5 & 7) << 0x12);
          if (puVar5 != &DAT_00110000) {
            pcVar20 = pcVar20 + 4;
            if (puVar5 <= &DAT_0000000d) goto LAB_016b60ac;
            goto LAB_016b612c;
          }
          goto LAB_016b6234;
        }
        puVar5 = (undefined1 *)(uVar11 | ((uint)puVar5 & 0x1f) << 0xc);
        pcVar20 = pcVar20 + 3;
        if (&DAT_0000000e <= puVar5) goto LAB_016b612c;
LAB_016b60ac:
        puVar9 = &DAT_00110000;
        if ((1 << ((uint)puVar5 & 0xff) & 0x2600U) == 0) {
          puVar9 = puVar5;
        }
        if (puVar9 != &DAT_00110000) goto LAB_016b6154;
      }
      pcVar20 = pcVar19;
      if (puVar5 < (undefined1 *)0xe) goto LAB_016b60ac;
LAB_016b612c:
      puVar9 = puVar5;
    } while (puVar5 == &DAT_00110000);
LAB_016b6154:
    if ((((undefined1 *)0x1c < puVar9 + -0x23) ||
        ((1 << ((uint)(puVar9 + -0x23) & 0xff) & 0x10001001U) == 0)) &&
       ((((uint)param_5 & 0xff) == 2 || (puVar9 != (undefined1 *)0x5c)))) {
LAB_016b6234:
      pcVar20 = (code *)param_2[2];
      goto LAB_016b6238;
    }
    pcVar20 = (code *)0x0;
    local_b8 = (code *)0x0;
  }
  bVar17 = (byte)pcVar20;
  goto LAB_016b6dec;
switchD_016b62c0_caseD_0:
  bVar17 = 5;
  goto LAB_016b6dbc;
  while( true ) {
    if ((((undefined1 *)0xd < puVar5) || ((1 << ((uint)puVar5 & 0xff) & 0x2600U) == 0)) &&
       (puVar5 != &DAT_00110000)) goto LAB_016b70a0;
    pcVar16 = pcVar13;
    if (pcVar13 == pcVar14) break;
LAB_016b72cc:
    pcVar13 = pcVar16 + 1;
    puVar5 = (undefined1 *)(uint)(byte)*pcVar16;
    if (0x7fffffff < (uint)(int)(char)*pcVar16) {
      if (puVar5 < (undefined1 *)0xe0) {
        puVar5 = (undefined1 *)((byte)pcVar16[1] & 0x3f | ((uint)puVar5 & 0x1f) << 6);
        pcVar13 = pcVar16 + 2;
      }
      else {
        uVar8 = (byte)pcVar16[2] & 0x3f | ((byte)pcVar16[1] & 0x3f) << 6;
        if (puVar5 < (undefined1 *)0xf0) {
          puVar5 = (undefined1 *)(uVar8 | ((uint)puVar5 & 0x1f) << 0xc);
          pcVar13 = pcVar16 + 3;
        }
        else {
          puVar5 = (undefined1 *)((byte)pcVar16[3] & 0x3f | uVar8 << 6 | ((uint)puVar5 & 7) << 0x12)
          ;
          if (puVar5 == &DAT_00110000) break;
          pcVar13 = pcVar16 + 4;
        }
      }
    }
  }
  uVar23 = 0;
  local_88 = pcVar26;
LAB_016b70b4:
  pcVar16 = (code *)CONCAT13(uStack_a9,CONCAT12(uStack_aa,local_ac));
  local_93 = *(code **)((int)puVar25 + 3);
  local_80 = (code *)*puVar25;
  local_7c._0_3_ = (undefined3)((uint)local_93 >> 8);
  local_8c = local_b0;
  if (uVar22 == 0) {
    local_80._3_1_ = (undefined1)((uint)local_80 >> 0x18);
    iVar6 = CONCAT31(local_7c._0_3_,local_80._3_1_);
    local_a8._0_1_ = 0;
    if (iVar6 != 0) {
      local_8c = thunk_FUN_016d3fb4();
      local_93 = extraout_r3;
      local_88 = extraout_r12;
      local_a8._0_1_ = extraout_r1;
    }
    local_94 = pcVar16 != (code *)0x0;
  }
  else {
    if (uVar22 == 1) {
      local_94 = '\x02';
    }
    else {
      local_94 = '\x03';
      local_bc = local_b4._1_2_;
      local_ba = local_b4._3_1_;
      local_88 = pcVar16;
    }
    local_93 = local_80;
  }
  local_8f = local_bc;
  local_8d = local_ba;
  local_84 = (undefined1)local_a8;
  if ((iVar18 + 2 == iVar7) || (bVar17 = 0, local_94 != '\0')) {
    iVar6 = param_2[2];
    local_b8 = (code *)CONCAT31(local_b8._1_3_,1);
    uVar28 = FUN_016b56ec(param_2,param_5,&local_b8,pcVar19,pcVar14);
    local_b8 = (code *)*param_2;
    local_b4 = (code *)param_2[1];
    local_b0 = param_2[2];
    iVar18 = param_2[3];
    local_ac = (undefined2)iVar18;
    uStack_aa = (undefined1)((uint)iVar18 >> 0x10);
    uStack_a9 = (undefined1)((uint)iVar18 >> 0x18);
    local_a8 = param_2[4];
    iStack_a4 = param_2[5];
    iStack_a0 = param_2[6];
    iStack_9c = param_2[7];
    iStack_98 = param_2[8];
    FUN_016b7738(param_1,&local_b8,param_5,param_6,pcVar20,iVar7,uVar11,&local_94,uVar23,local_cc,
                 iVar6,uVar28);
    return;
  }
LAB_016b6dec:
  iVar7 = *param_2;
  *param_1 = 2;
  *(byte *)(param_1 + 1) = bVar17;
  if (iVar7 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(param_2[1]);
  return;
}

