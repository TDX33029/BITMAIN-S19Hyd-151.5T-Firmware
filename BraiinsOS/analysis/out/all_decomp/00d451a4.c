// FUN_00d451a4 @ 00d451a4 size=2008 calls_out=5 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_00d451a4(int *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int unaff_r4;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  char *pcVar19;
  int iVar20;
  byte *pbVar21;
  int iVar22;
  uint *puVar23;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  char *local_2c;
  int local_28;
  
  local_38 = 0;
  local_3c = 1;
  local_40 = 0;
  if (param_3 != 0) {
    pbVar21 = param_2 + param_3;
    iVar22 = 1;
    iVar14 = 0;
    do {
      uVar17 = (uint)*param_2;
      pbVar15 = param_2 + 1;
      if ((char)*param_2 < '\0') {
        if (uVar17 < 0xe0) {
          uVar17 = param_2[1] & 0x3f | (uVar17 & 0x1f) << 6;
          pbVar15 = param_2 + 2;
          goto joined_r0x00d453ec;
        }
        uVar11 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
        if (0xef < uVar17) {
          uVar17 = param_2[3] & 0x3f | uVar11 << 6 | (uVar17 & 7) << 0x12;
          pbVar15 = param_2 + 4;
          goto joined_r0x00d453ec;
        }
        uVar17 = uVar11 | (uVar17 & 0x1f) << 0xc;
        param_2 = param_2 + 3;
        if (uVar17 == 0x5c) goto LAB_00d451f8;
LAB_00d45404:
        if (iVar14 == local_40) {
          FUN_006029c0(&local_40);
          iVar22 = local_3c;
        }
        *(char *)(iVar22 + iVar14) = (char)uVar17;
      }
      else {
joined_r0x00d453ec:
        param_2 = pbVar15;
        if (uVar17 != 0x5c) goto LAB_00d45404;
LAB_00d451f8:
        if (param_2 == pbVar21) {
          iVar22 = FUN_00c70f88(&DAT_00356e15,0x17);
          *param_1 = -0x80000000;
          param_1[1] = iVar22;
          goto LAB_00d45a88;
        }
        uVar17 = (uint)*param_2;
        pbVar15 = param_2 + 1;
        if ((char)*param_2 < '\0') {
          if (uVar17 < 0xe0) {
            uVar17 = param_2[1] & 0x3f | (uVar17 & 0x1f) << 6;
            param_2 = param_2 + 2;
          }
          else {
            uVar11 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
            if (uVar17 < 0xf0) {
              uVar17 = uVar11 | (uVar17 & 0x1f) << 0xc;
              pbVar15 = param_2 + 3;
              goto joined_r0x00d454b8;
            }
            pbVar15 = param_2 + 3;
            param_2 = param_2 + 4;
            uVar17 = *pbVar15 & 0x3f | uVar11 << 6 | (uVar17 & 7) << 0x12;
          }
          uVar11 = uVar17 - 0x22;
          if (uVar11 < 0x57) goto LAB_00d45220;
switchD_00d45228_caseD_d454bc:
          if (iVar14 == local_40) {
            FUN_006029c0(&local_40);
          }
          *(char *)(local_3c + iVar14) = (char)uVar17;
          iVar22 = local_3c;
          goto LAB_00d4565c;
        }
joined_r0x00d454b8:
        param_2 = pbVar15;
        uVar11 = uVar17 - 0x22;
        if (0x56 < uVar11) goto switchD_00d45228_caseD_d454bc;
LAB_00d45220:
        switch((int)&switchD_00d45228::switchdataD_00d4522c +
               (&switchD_00d45228::switchdataD_00d4522c)[uVar11] & 0xfffffffe) {
        case 0xd45388:
          if (iVar14 == local_40) {
            FUN_006029c0(&local_40);
          }
          uVar5 = 0x22;
          break;
        default:
          goto switchD_00d45228_caseD_d454bc;
        case 0xd454dc:
          if (iVar14 == local_40) {
            FUN_006029c0(&local_40);
          }
          uVar5 = 0xb;
          break;
        case 0xd454fc:
          if (iVar14 == local_40) {
            FUN_006029c0(&local_40);
          }
          uVar5 = 0;
          break;
        case 0xd4551c:
          if (iVar14 == local_40) {
            FUN_006029c0(&local_40);
          }
          uVar5 = 0x1b;
          break;
        case 0xd4553c:
          local_28 = 0;
          local_2c = &DAT_00000001;
          local_30 = 0;
          if (param_2 == pbVar21) {
LAB_00d45aa4:
            pcVar19 = local_2c;
            iVar22 = FUN_00c70f88(&DAT_00356e15,0x17);
LAB_00d45a68:
            *param_1 = -0x80000000;
            param_1[1] = iVar22;
            if (local_30 != 0) {
              thunk_FUN_016d3fb4(pcVar19);
            }
LAB_00d45a88:
            iVar22 = local_3c;
            if (local_40 == 0) {
              return;
            }
            if (local_3c == 0) {
              return;
            }
            iVar14 = FUN_016d3bc8();
            uVar17 = *(byte *)(iVar22 + -3) & 0x1f;
            if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
               (uVar11 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar13 = uVar11 - 0x10, uVar11 == 0)
               ) {
              iVar13 = (uint)*(ushort *)
                              (&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) << 4
              ;
            }
            uVar11 = (uint)(*(byte *)(iVar22 + -3) >> 5);
            iVar20 = *(int *)(iVar14 + 8) + 0x10;
            iVar18 = iVar13 * uVar17 + iVar13 + -4;
            iVar13 = iVar20 + iVar18;
            if (4 < uVar11) {
              if (uVar11 != 5) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)software_udf(0xff,0x16d4018);
                (*pcVar3)();
              }
              uVar11 = *(uint *)(iVar13 + -4);
              if (uVar11 < 5) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)software_udf(0xff,0x16d4022);
                (*pcVar3)();
              }
              if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
                pcVar3 = (code *)software_udf(0xff,0x16d402a);
                (*pcVar3)();
              }
            }
            if ((uint)(iVar13 - iVar22) < uVar11) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xff,0x16d4032);
              (*pcVar3)();
            }
            if (*(char *)(iVar13 - uVar11) != '\0') {
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xff,0x16d403a);
              (*pcVar3)();
            }
            if (*(char *)(iVar20 + iVar18) != '\0') {
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xff,0x16d4040);
              (*pcVar3)();
            }
            bVar1 = *(byte *)(iVar14 + 0x14);
            uVar11 = 1 << uVar17;
            *(undefined1 *)(iVar22 + -3) = 0xff;
            *(undefined2 *)(iVar22 + -2) = 0;
            do {
              uVar16 = *(uint *)(iVar14 + 0x10);
              uVar7 = *(uint *)(iVar14 + 0xc) | uVar16;
              if ((uVar11 & uVar7) != 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)software_udf(0xff,0x16d4074);
                (*pcVar3)();
              }
              if ((uVar16 == 0) || (uVar7 + uVar11 == (2 << (bVar1 & 0x1f)) + -1)) {
                if (DAT_018ddb0b != '\0') {
                  FUN_016ddcc0(&DAT_018ddd48);
                }
                FUN_016d3ca8(&local_28,iVar14,uVar17);
                FUN_016dddc0(&DAT_018ddd48);
                if (unaff_r4 == 0) {
                  return;
                }
                puVar9 = (undefined4 *)FUN_016d2bc8();
                uVar8 = *puVar9;
                FUN_016d6ac4(local_28,unaff_r4);
                *puVar9 = uVar8;
                return;
              }
              if (DAT_018ddb0b == '\0') {
                *(uint *)(iVar14 + 0x10) = uVar11 + uVar16;
                return;
              }
              puVar23 = (uint *)(iVar14 + 0x10);
              DataMemoryBarrier(0x1b);
              do {
                ExclusiveAccess(puVar23);
                uVar7 = *puVar23;
                if (uVar16 != uVar7) goto LAB_016d409c;
                bVar4 = (bool)hasExclusiveAccess(puVar23);
              } while (!bVar4);
              *puVar23 = uVar11 + uVar16;
LAB_016d409c:
              DataMemoryBarrier(0x1b);
              if (uVar16 == uVar7) {
                return;
              }
            } while( true );
          }
          pbVar15 = param_2 + 1;
          uVar17 = (uint)*param_2;
          if ((char)*param_2 < '\0') {
            if (uVar17 < 0xe0) {
              uVar17 = param_2[1] & 0x3f | (uVar17 & 0x1f) << 6;
              pbVar15 = param_2 + 2;
            }
            else {
              uVar11 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
              if (uVar17 < 0xf0) {
                uVar17 = uVar11 | (uVar17 & 0x1f) << 0xc;
                pbVar15 = param_2 + 3;
              }
              else {
                pbVar15 = param_2 + 4;
                uVar17 = param_2[3] & 0x3f | uVar11 << 6 | (uVar17 & 7) << 0x12;
              }
            }
            if (uVar17 < 0x80) {
              bVar4 = true;
              iVar22 = 1;
            }
            else {
              iVar22 = 2;
              bVar4 = false;
              if ((0x7ff < uVar17) && (iVar22 = 4, uVar17 < 0x10000)) {
                iVar22 = 3;
              }
            }
          }
          else {
            bVar4 = true;
            iVar22 = 1;
          }
          FUN_00d653ec(&local_30,0,iVar22,1,1);
          pbVar6 = (byte *)(local_2c + local_28);
          if (bVar4) {
            *pbVar6 = (byte)uVar17;
          }
          else {
            bVar1 = (byte)uVar17 & 0x3f | 0x80;
            bVar10 = (byte)(uVar17 >> 6);
            if (uVar17 < 0x800) {
              pbVar6[1] = bVar1;
              *pbVar6 = bVar10 | 0xc0;
            }
            else {
              bVar10 = bVar10 & 0x3f | 0x80;
              bVar2 = (byte)(uVar17 >> 0xc);
              if (uVar17 >> 0x10 == 0) {
                pbVar6[1] = bVar10;
                pbVar6[2] = bVar1;
                *pbVar6 = bVar2 | 0xe0;
              }
              else {
                pbVar6[3] = bVar1;
                pbVar6[2] = bVar10;
                pbVar6[1] = bVar2 & 0x3f | 0x80;
                *pbVar6 = (byte)(uVar17 >> 0x12) | 0xf0;
              }
            }
          }
          local_28 = iVar22;
          if (pbVar15 == pbVar21) goto LAB_00d45aa4;
          param_2 = pbVar15 + 1;
          uVar17 = (uint)*pbVar15;
          if ((char)*pbVar15 < '\0') {
            if (uVar17 < 0xe0) {
              uVar17 = pbVar15[1] & 0x3f | (uVar17 & 0x1f) << 6;
              param_2 = pbVar15 + 2;
            }
            else {
              uVar11 = pbVar15[2] & 0x3f | (pbVar15[1] & 0x3f) << 6;
              if (uVar17 < 0xf0) {
                uVar17 = uVar11 | (uVar17 & 0x1f) << 0xc;
                param_2 = pbVar15 + 3;
              }
              else {
                param_2 = pbVar15 + 4;
                uVar17 = pbVar15[3] & 0x3f | uVar11 << 6 | (uVar17 & 7) << 0x12;
              }
            }
            if (uVar17 < 0x80) {
              bVar4 = true;
              uVar11 = 1;
            }
            else {
              uVar11 = 2;
              bVar4 = false;
              if ((0x7ff < uVar17) && (uVar11 = 4, uVar17 < 0x10000)) {
                uVar11 = 3;
              }
            }
          }
          else {
            bVar4 = true;
            uVar11 = 1;
          }
          if ((uint)(local_30 - iVar22) < uVar11) {
            FUN_00d653ec(&local_30,iVar22,uVar11,1,1);
            pbVar15 = (byte *)(local_2c + local_28);
            if (bVar4) goto LAB_00d45860;
LAB_00d458c8:
            bVar1 = (byte)uVar17 & 0x3f | 0x80;
            bVar10 = (byte)(uVar17 >> 6);
            if (uVar17 < 0x800) {
              pbVar15[1] = bVar1;
              bVar10 = bVar10 | 0xc0;
            }
            else {
              bVar2 = bVar10 & 0x3f | 0x80;
              bVar10 = (byte)(uVar17 >> 0xc);
              if (0xffff < uVar17) {
                pbVar15[3] = bVar1;
                pbVar15[2] = bVar2;
                pbVar15[1] = bVar10 & 0x3f | 0x80;
                *pbVar15 = (byte)(uVar17 >> 0x12) | 0xf0;
                goto LAB_00d4592c;
              }
              pbVar15[1] = bVar2;
              bVar10 = bVar10 | 0xe0;
              pbVar15[2] = bVar1;
            }
            *pbVar15 = bVar10;
          }
          else {
            pbVar15 = (byte *)(local_2c + iVar22);
            if (!bVar4) goto LAB_00d458c8;
LAB_00d45860:
            *pbVar15 = (byte)uVar17;
          }
LAB_00d4592c:
          pcVar19 = local_2c;
          iVar14 = local_38;
          uVar17 = (uint)(*local_2c == '+');
          uVar11 = (uVar11 + iVar22) - uVar17;
          if (uVar11 < 3) {
            uVar7 = (uint)(byte)local_2c[uVar17];
            uVar16 = uVar7 - 0x30;
            if (0x39 < uVar7) {
              uVar16 = (uVar7 - 0x41 & 0xffffffdf) + 10;
            }
            uVar8 = 1;
            if (uVar16 < 0x10) {
              if (uVar11 != 1) {
                uVar11 = (uint)(byte)(local_2c + uVar17)[1];
                uVar17 = uVar11 - 0x30;
                if (0x39 < uVar11) {
                  uVar17 = (uVar11 - 0x41 & 0xffffffdf) + 10;
                }
                if (0xf < uVar17) goto LAB_00d45a60;
                uVar16 = uVar17 | uVar16 << 4;
              }
              goto LAB_00d459e8;
            }
LAB_00d45a60:
            iVar22 = FUN_00c784fc(uVar8);
            goto LAB_00d45a68;
          }
          uVar16 = 0;
          do {
            uVar12 = (uint)(byte)local_2c[uVar17];
            uVar7 = uVar12 - 0x30;
            if (0xf < uVar16) {
              if (0x39 < uVar12) {
                uVar7 = (uVar12 - 0x41 & 0xffffffde) + 10;
              }
              uVar8 = 1;
              if (uVar7 < 0x10) {
                uVar8 = 2;
              }
              goto LAB_00d45a60;
            }
            if (0x39 < uVar12) {
              uVar7 = (uVar12 - 0x41 & 0xffffffdf) + 10;
            }
            if (0xf < uVar7) {
              uVar8 = 1;
              goto LAB_00d45a60;
            }
            uVar16 = uVar7 | uVar16 << 4;
            uVar17 = uVar17 + 1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
LAB_00d459e8:
          if (local_38 == local_40) {
            FUN_006029c0(&local_40);
          }
          iVar22 = local_3c;
          *(char *)(local_3c + iVar14) = (char)uVar16;
          iVar14 = iVar14 + 1;
          local_38 = iVar14;
          if (local_30 != 0) {
            thunk_FUN_016d3fb4(pcVar19);
          }
          goto LAB_00d45660;
        case 0xd45578:
          if (iVar14 == local_40) {
            FUN_006029c0(&local_40);
          }
          uVar5 = 0x27;
          break;
        case 0xd45598:
          if (iVar14 == local_40) {
            FUN_006029c0(&local_40);
          }
          uVar5 = 0xc;
          break;
        case 0xd455b8:
          if (iVar14 == local_40) {
            FUN_006029c0(&local_40);
          }
          uVar5 = 10;
          break;
        case 0xd455d8:
          if (iVar14 == local_40) {
            FUN_006029c0(&local_40);
          }
          uVar5 = 0x5c;
          break;
        case 0xd455f8:
          if (iVar14 == local_40) {
            FUN_006029c0(&local_40);
          }
          uVar5 = 8;
          break;
        case 0xd45618:
          if (iVar14 == local_40) {
            FUN_006029c0(&local_40);
          }
          uVar5 = 9;
          break;
        case 0xd45638:
          if (iVar14 == local_40) {
            FUN_006029c0(&local_40);
          }
          uVar5 = 0xd;
        }
        *(undefined1 *)(local_3c + iVar14) = uVar5;
        iVar22 = local_3c;
      }
LAB_00d4565c:
      iVar14 = iVar14 + 1;
      local_38 = iVar14;
LAB_00d45660:
    } while (param_2 != pbVar21);
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  return;
}

