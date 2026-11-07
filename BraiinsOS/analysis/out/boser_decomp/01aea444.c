// FUN_01aea444 @ 01aea444 size=2872 calls_out=2 calls_in=1
// strings: 

byte * FUN_01aea444(int *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  int *piVar18;
  byte *pbVar19;
  uint uVar20;
  uint uVar21;
  byte *pbVar22;
  uint *puVar23;
  uint *puVar24;
  uint *puVar25;
  byte *pbVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  uint local_44;
  byte *local_30;
  uint local_2c;
  uint local_28;
  
  pbVar19 = (byte *)param_1[1];
  pbVar26 = (byte *)param_1[2];
  if (pbVar19 <= pbVar26) {
    return &DAT_00000011;
  }
  iVar16 = *param_1;
  pbVar22 = pbVar26 + 1;
  param_1[2] = (int)pbVar22;
  bVar2 = pbVar26[iVar16];
  if ((~bVar2 & 0x1f) == 0) {
    return &DAT_00000011;
  }
  if (pbVar19 <= pbVar22) {
    return &DAT_00000011;
  }
  bVar3 = pbVar22[iVar16];
  uVar27 = (uint)bVar3;
  pbVar22 = pbVar26 + 2;
  param_1[2] = (int)pbVar22;
  if ((char)bVar3 < '\0') {
    switch(uVar27) {
    case 0x81:
      if (pbVar19 <= pbVar22) {
        return &DAT_00000011;
      }
      bVar3 = pbVar22[iVar16];
      uVar27 = (uint)bVar3;
      pbVar22 = pbVar26 + 3;
      param_1[2] = (int)pbVar22;
      if (-1 < (char)bVar3) {
        return &DAT_00000011;
      }
      goto LAB_01aea4a0;
    case 0x82:
      if (pbVar19 <= pbVar22) {
        return &DAT_00000011;
      }
      bVar3 = pbVar22[iVar16];
      pbVar22 = pbVar26 + 3;
      param_1[2] = (int)pbVar22;
      if (pbVar19 <= pbVar22) {
        return &DAT_00000011;
      }
      bVar4 = pbVar22[iVar16];
      pbVar22 = pbVar26 + 4;
      param_1[2] = (int)pbVar22;
      if (bVar3 == 0) {
        return &DAT_00000011;
      }
      uVar27 = (uint)CONCAT11(bVar3,bVar4);
      break;
    case 0x83:
      if (pbVar19 <= pbVar22) {
        return &DAT_00000011;
      }
      bVar3 = pbVar22[iVar16];
      pbVar22 = pbVar26 + 3;
      param_1[2] = (int)pbVar22;
      if (pbVar19 <= pbVar22) {
        return &DAT_00000011;
      }
      bVar4 = pbVar22[iVar16];
      pbVar22 = pbVar26 + 4;
      param_1[2] = (int)pbVar22;
      if (pbVar19 <= pbVar22) {
        return &DAT_00000011;
      }
      bVar5 = pbVar22[iVar16];
      pbVar22 = pbVar26 + 5;
      param_1[2] = (int)pbVar22;
      if (bVar3 == 0) {
        return &DAT_00000011;
      }
      uVar27 = (uint)bVar4 << 8 | (uint)bVar3 << 0x10 | (uint)bVar5;
      break;
    case 0x84:
      if (pbVar19 <= pbVar22) {
        return &DAT_00000011;
      }
      bVar3 = pbVar22[iVar16];
      pbVar22 = pbVar26 + 3;
      param_1[2] = (int)pbVar22;
      if (pbVar19 <= pbVar22) {
        return &DAT_00000011;
      }
      bVar4 = pbVar22[iVar16];
      pbVar22 = pbVar26 + 4;
      param_1[2] = (int)pbVar22;
      if (pbVar19 <= pbVar22) {
        return &DAT_00000011;
      }
      bVar5 = pbVar22[iVar16];
      pbVar22 = pbVar26 + 5;
      param_1[2] = (int)pbVar22;
      if (pbVar19 <= pbVar22) {
        return &DAT_00000011;
      }
      bVar6 = pbVar22[iVar16];
      pbVar22 = pbVar26 + 6;
      param_1[2] = (int)pbVar22;
      if (bVar3 == 0) {
        return &DAT_00000011;
      }
      uVar27 = (uint)bVar4 << 0x10 | (uint)bVar3 << 0x18 | (uint)bVar5 << 8 | (uint)bVar6;
      break;
    default:
      return &DAT_00000011;
    }
    if (0xfffe < uVar27) {
      return &DAT_00000011;
    }
  }
LAB_01aea4a0:
  if (CARRY4(uVar27,(uint)pbVar22)) {
    return &DAT_00000011;
  }
  if (pbVar19 < pbVar22 + uVar27) {
    return &DAT_00000011;
  }
  param_1[2] = (int)(pbVar22 + uVar27);
  if (bVar2 != 0xa3) {
    return &DAT_00000011;
  }
  if (uVar27 == 0) {
    return (byte *)0x0;
  }
  pbVar22 = pbVar22 + iVar16;
  if ((~*pbVar22 & 0x1f) == 0 || uVar27 == 1) {
    return (byte *)0x0;
  }
  puVar24 = (uint *)(int)(char)pbVar22[1];
  puVar23 = (uint *)(uint)pbVar22[1];
  if ((int)puVar24 < 0) {
    switch(puVar23) {
    case (uint *)0x81:
      if (uVar27 < 3) {
        return (byte *)0x0;
      }
      puVar24 = (uint *)(int)(char)pbVar22[2];
      if (puVar24 < (uint *)0x80000000) {
        return (byte *)0x0;
      }
      puVar23 = (uint *)(uint)pbVar22[2];
      uVar20 = 3;
      goto LAB_01aea4f4;
    case (uint *)0x82:
      if (uVar27 < 4) {
        return (byte *)0x0;
      }
      if (pbVar22[2] == 0) {
        return (byte *)0x0;
      }
      uVar20 = 4;
      puVar23 = (uint *)(uint)CONCAT11(pbVar22[2],pbVar22[3]);
      break;
    case (uint *)0x83:
      if (uVar27 < 5) {
        return (byte *)0x0;
      }
      if (pbVar22[2] == 0) {
        return (byte *)0x0;
      }
      uVar20 = 5;
      puVar23 = (uint *)((uint)pbVar22[3] << 8 | (uint)pbVar22[2] << 0x10 | (uint)pbVar22[4]);
      break;
    case (uint *)0x84:
      if (uVar27 < 3) {
        return (byte *)0x0;
      }
      if (uVar27 == 3) {
        return (byte *)0x0;
      }
      if ((uVar27 < 6) && ((0x37U >> (uVar27 & 0xff) & 1) != 0)) {
        return (byte *)0x0;
      }
      if (pbVar22[2] == 0) {
        return (byte *)0x0;
      }
      puVar23 = (uint *)((uint)pbVar22[3] << 0x10 | (uint)pbVar22[2] << 0x18 | (uint)pbVar22[4] << 8
                        | (uint)pbVar22[5]);
      uVar20 = 6;
      break;
    default:
      return (byte *)0x0;
    }
    puVar24 = (uint *)0xffff;
    if ((uint *)0xfffe < puVar23) {
      return (byte *)0x0;
    }
  }
  else {
    uVar20 = 2;
  }
LAB_01aea4f4:
  pbVar19 = (byte *)0x0;
  uVar21 = (int)puVar23 + uVar20;
  if (((uVar20 <= uVar21) && (uVar21 <= uVar27)) && (*pbVar22 == 0x30)) {
    puVar25 = (uint *)0x0;
    do {
      if (puVar23 <= puVar25) {
        return (byte *)0x0;
      }
      iVar16 = (int)puVar25 + uVar20;
      if ((~pbVar22[iVar16] & 0x1f) == 0) {
        return (byte *)0x0;
      }
      if (puVar23 <= (uint *)((int)puVar25 + 1U)) {
        return (byte *)0x0;
      }
      puVar13 = (uint *)((int)puVar25 + 2);
      local_2c = (uint)pbVar22[(int)((int)puVar25 + 1U) + uVar20];
      if ((char)pbVar22[(int)((int)puVar25 + 1U) + uVar20] < '\0') {
        if (3 < local_2c - 0x81) {
          return (byte *)0x0;
        }
        puVar17 = &switchD_01aea60c::switchdataD_01aea610;
        puVar12 = (uint *)(&switchD_01aea60c::switchdataD_01aea610)[local_2c - 0x81];
        switch(local_2c) {
        case 0x81:
          if (puVar23 <= puVar13) {
            return (byte *)0x0;
          }
          if ((uint)(int)(char)pbVar22[(int)puVar13 + uVar20] < 0x80000000) {
            return (byte *)0x0;
          }
          local_2c = (uint)pbVar22[(int)puVar13 + uVar20];
          puVar13 = (uint *)((int)puVar25 + 3);
          goto LAB_01aea578;
        case 0x82:
          if (puVar13 < puVar23) {
            puVar12 = (uint *)((int)puVar25 + 3);
          }
          if (puVar13 >= puVar23 || puVar23 <= puVar12) {
            return (byte *)0x0;
          }
          if (pbVar22[(int)puVar13 + uVar20] == 0) {
            return (byte *)0x0;
          }
          local_2c = (uint)CONCAT11(pbVar22[(int)puVar13 + uVar20],pbVar22[(int)puVar12 + uVar20]);
          puVar13 = puVar25 + 1;
          break;
        case 0x83:
          if (puVar23 <= puVar13) {
            return (byte *)0x0;
          }
          puVar12 = (uint *)((int)puVar25 + 3);
          if (puVar12 < puVar23) {
            puVar17 = puVar25 + 1;
          }
          if (puVar12 >= puVar23 || puVar23 <= puVar17) {
            return (byte *)0x0;
          }
          iVar7 = (int)puVar13 + uVar20;
          if (pbVar22[iVar7] == 0) {
            return (byte *)0x0;
          }
          puVar13 = (uint *)((int)puVar25 + 5);
          local_2c = (uint)pbVar22[(int)puVar12 + uVar20] << 8 | (uint)pbVar22[iVar7] << 0x10 |
                     (uint)pbVar22[(int)puVar17 + uVar20];
          break;
        case 0x84:
          if (puVar13 < puVar23) {
            puVar12 = (uint *)((int)puVar25 + 3);
          }
          if (puVar13 >= puVar23 || puVar23 <= puVar12) {
            return (byte *)0x0;
          }
          puVar17 = puVar25 + 1;
          if (puVar17 < puVar23) {
            puVar24 = (uint *)((int)puVar25 + 5);
          }
          if (puVar17 >= puVar23 || puVar23 <= puVar24) {
            return (byte *)0x0;
          }
          iVar7 = (int)puVar13 + uVar20;
          if (pbVar22[iVar7] == 0) {
            return (byte *)0x0;
          }
          puVar24 = (uint *)(uint)pbVar22[(int)puVar24 + uVar20];
          puVar13 = (uint *)((int)puVar25 + 6);
          local_2c = (uint)pbVar22[(int)puVar12 + uVar20] << 0x10 | (uint)pbVar22[iVar7] << 0x18 |
                     (uint)pbVar22[(int)puVar17 + uVar20] << 8 | (uint)puVar24;
        }
        if (0xfffe < local_2c) {
          return (byte *)0x0;
        }
      }
LAB_01aea578:
      puVar25 = (uint *)(local_2c + (int)puVar13);
      if (puVar25 < puVar13) {
        return (byte *)0x0;
      }
      if (puVar23 < puVar25) {
        return (byte *)0x0;
      }
      if (pbVar22[iVar16] != 0x30) {
        return (byte *)0x0;
      }
      pbVar19 = pbVar22 + (int)puVar13 + uVar20;
      local_28 = 0;
      if (local_2c == 0) {
switchD_01aea784_default:
        pbVar26 = (byte *)((uint)pbVar26 & 0xffffff00);
        uVar14 = local_28;
LAB_01aea5d0:
        local_28 = uVar14;
        if (((uint)pbVar26 & 0xff) != 0x26) {
          return pbVar26;
        }
      }
      else {
        local_28 = 1;
        if ((~*pbVar19 & 0x1f) == 0 || local_2c == 1) goto switchD_01aea784_default;
        puVar24 = (uint *)(uint)pbVar19[1];
        local_28 = 2;
        if ((char)pbVar19[1] < '\0') {
          switch(puVar24) {
          case (uint *)0x81:
            if (2 < local_2c) {
              puVar24 = (uint *)(uint)pbVar19[2];
              local_28 = 3;
              if (0x7fffffff < (uint)(int)(char)pbVar19[2]) {
                local_44 = 3;
                goto LAB_01aea664;
              }
            }
            break;
          case (uint *)0x82:
            if (2 < local_2c) {
              local_28 = 3;
              if (local_2c != 3) {
                puVar24 = (uint *)0x4;
                local_44 = 4;
                local_28 = 4;
                if (pbVar19[2] != 0) {
                  puVar24 = (uint *)(uint)CONCAT11(pbVar19[2],pbVar19[3]);
LAB_01aea994:
                  if (puVar24 < (uint *)0xffff) goto LAB_01aea664;
                }
              }
            }
            break;
          case (uint *)0x83:
            if (2 < local_2c) {
              local_28 = 3;
              if (local_2c != 3) {
                puVar24 = (uint *)0x4;
                local_28 = 4;
                if (4 < local_2c) {
                  puVar24 = (uint *)0x5;
                  local_44 = 5;
                  local_28 = 5;
                  if (pbVar19[2] != 0) {
                    puVar24 = (uint *)((uint)pbVar19[3] << 8 | (uint)pbVar19[2] << 0x10 |
                                      (uint)pbVar19[4]);
                    goto LAB_01aea994;
                  }
                }
              }
            }
            break;
          case (uint *)0x84:
            if (2 < local_2c) {
              local_28 = 3;
              if (local_2c != 3) {
                puVar24 = (uint *)0x4;
                local_28 = 4;
                if (4 < local_2c) {
                  puVar24 = (uint *)0x5;
                  local_28 = 5;
                  if (local_2c != 5) {
                    puVar24 = (uint *)0x6;
                    local_44 = 6;
                    local_28 = 6;
                    if (pbVar19[2] != 0) {
                      puVar24 = (uint *)((uint)pbVar19[3] << 0x10 | (uint)pbVar19[2] << 0x18 |
                                         (uint)pbVar19[4] << 8 | (uint)pbVar19[5]);
                      goto LAB_01aea994;
                    }
                  }
                }
              }
            }
          }
          goto switchD_01aea784_default;
        }
        local_44 = 2;
LAB_01aea664:
        uVar14 = local_44 + (int)puVar24;
        if (((CARRY4(local_44,(uint)puVar24)) || (local_2c < uVar14)) ||
           (local_28 = uVar14, *pbVar19 != 6)) goto switchD_01aea784_default;
        local_30 = pbVar19;
        uVar29 = FUN_01aea060(&local_30);
        uVar28 = local_28;
        uVar11 = (uint)(uVar29 >> 0x20);
        if ((uVar29 & 1) != 0) {
          pbVar26 = (byte *)((uint)pbVar26 & 0xffffff00 | uVar11 & 0xff);
          uVar14 = local_28;
          goto LAB_01aea5d0;
        }
        uVar8 = local_28;
        if (local_2c <= local_28) {
switchD_01aea9b8_default:
          local_28 = uVar8;
          pbVar26 = (byte *)((uint)pbVar26 & 0xffffff00);
          uVar14 = local_28;
          goto LAB_01aea5d0;
        }
        pbVar1 = local_30 + local_28;
        uVar8 = local_28 + 1;
        if (((~*pbVar1 & 0x1f) == 0) || (local_2c <= uVar8)) goto switchD_01aea9b8_default;
        uVar15 = local_28 + 2;
        puVar13 = (uint *)(uint)local_30[uVar8];
        uVar14 = uVar15;
        if ((char)local_30[uVar8] < '\0') {
          uVar8 = uVar15;
          switch(puVar13) {
          case (uint *)0x81:
            if (uVar15 < local_2c) {
              puVar13 = (uint *)(uint)local_30[uVar15];
              uVar8 = local_28 + 3;
              uVar14 = local_28 + 3;
              if ((char)local_30[uVar15] < '\0') goto LAB_01aea824;
            }
            break;
          case (uint *)0x82:
            if (uVar15 < local_2c) {
              uVar14 = local_28 + 3;
              uVar8 = uVar14;
              if (uVar14 < local_2c) {
                local_28 = local_28 + 4;
                uVar8 = local_28;
                if (local_30[uVar15] != 0) {
                  puVar13 = (uint *)(uint)CONCAT11(local_30[uVar15],local_30[uVar14]);
LAB_01aeab64:
                  uVar8 = local_28;
                  uVar14 = local_28;
                  if (puVar13 < (uint *)0xffff) goto LAB_01aea824;
                }
              }
            }
            break;
          case (uint *)0x83:
            if (uVar15 < local_2c) {
              uVar14 = local_28 + 3;
              uVar8 = uVar14;
              if (uVar14 < local_2c) {
                uVar9 = local_28 + 4;
                uVar8 = uVar9;
                if (uVar9 < local_2c) {
                  local_28 = local_28 + 5;
                  uVar8 = local_28;
                  if (local_30[uVar15] != 0) {
                    puVar13 = (uint *)((uint)local_30[uVar14] << 8 | (uint)local_30[uVar15] << 0x10
                                      | (uint)local_30[uVar9]);
                    goto LAB_01aeab64;
                  }
                }
              }
            }
            break;
          case (uint *)0x84:
            if (uVar15 < local_2c) {
              uVar14 = local_28 + 3;
              uVar8 = uVar14;
              if (uVar14 < local_2c) {
                uVar9 = local_28 + 4;
                uVar8 = uVar9;
                if (uVar9 < local_2c) {
                  uVar10 = local_28 + 5;
                  uVar8 = uVar10;
                  if (uVar10 < local_2c) {
                    local_28 = local_28 + 6;
                    uVar8 = local_28;
                    if (local_30[uVar15] != 0) {
                      puVar13 = (uint *)((uint)local_30[uVar14] << 0x10 |
                                         (uint)local_30[uVar15] << 0x18 | (uint)local_30[uVar9] << 8
                                        | (uint)local_30[uVar10]);
                      goto LAB_01aeab64;
                    }
                  }
                }
              }
            }
          }
          goto switchD_01aea9b8_default;
        }
LAB_01aea824:
        local_28 = uVar14;
        uVar14 = local_28 + (int)puVar13;
        uVar8 = local_28;
        if (((CARRY4(local_28,(uint)puVar13)) || (local_2c < uVar14)) ||
           (uVar8 = uVar14, *pbVar1 != 4)) goto switchD_01aea9b8_default;
        pbVar26 = pbVar19 + local_44;
        if ((uVar11 & 0xff) == 2) goto LAB_01aea5d0;
        if ((puVar24 == (uint *)0x3) && (*(short *)pbVar26 == 0x1d55)) {
          if (pbVar26 + 2 == (byte *)0x0) {
            local_28 = uVar14;
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d302f4);
          }
          bVar2 = pbVar26[2];
          local_30 = local_30 + local_28;
          if (bVar2 < 0x13) {
            if (bVar2 != 0xf) {
              piVar18 = (int *)(param_2 + 100);
              if (bVar2 == 0x11) goto LAB_01aeabd8;
              goto LAB_01aea878;
            }
            piVar18 = (int *)(param_2 + 0x4c);
            if (*(int *)(param_2 + 0x4c) != 0) goto LAB_01aeafc8;
          }
          else {
            piVar18 = (int *)(param_2 + 0x44);
            if ((bVar2 != 0x13) && (piVar18 = (int *)(param_2 + 0x5c), bVar2 != 0x1e)) {
              if (bVar2 != 0x25) goto LAB_01aea878;
              piVar18 = (int *)(param_2 + 0x54);
            }
LAB_01aeabd8:
            if (*piVar18 != 0) {
LAB_01aeafc8:
              return &DAT_00000008;
            }
            if (bVar2 == 0xf) goto LAB_01aead3c;
            pbVar19 = (byte *)0x0;
            if (puVar13 == (uint *)0x0) {
              return (byte *)0x0;
            }
            uVar11 = 0;
            if (puVar13 != (uint *)0x1) {
              uVar28 = (uint)*local_30;
              uVar11 = uVar28 & 0x1f;
            }
            if (puVar13 == (uint *)0x1 || uVar11 == 0x1f) {
              return (byte *)0x0;
            }
            puVar24 = (uint *)(int)(char)local_30[1];
            puVar12 = (uint *)(uint)local_30[1];
            if ((int)puVar24 < 0) {
              puVar24 = &switchD_01aeac4c::switchdataD_01aeac50;
              switch(puVar12) {
              case (uint *)0x81:
                if (puVar13 < (uint *)0x3) {
                  return (byte *)0x0;
                }
                if ((uint)(int)(char)local_30[2] < 0x80000000) {
                  return (byte *)0x0;
                }
                puVar12 = (uint *)(uint)local_30[2];
                iVar16 = 3;
                goto LAB_01aead24;
              case (uint *)0x82:
                if (puVar13 < (uint *)0x4) {
                  return (byte *)0x0;
                }
                if (local_30[2] == 0) {
                  return (byte *)0x0;
                }
                iVar16 = 4;
                puVar12 = (uint *)(uint)CONCAT11(local_30[2],local_30[3]);
                break;
              case (uint *)0x83:
                if (puVar13 < (uint *)0x5) {
                  return (byte *)0x0;
                }
                if (local_30[2] == 0) {
                  return (byte *)0x0;
                }
                puVar12 = (uint *)((uint)local_30[3] << 8 | (uint)local_30[2] << 0x10 |
                                  (uint)local_30[4]);
                iVar16 = 5;
                break;
              case (uint *)0x84:
                if (puVar13 < (uint *)0x6) {
                  return (byte *)0x0;
                }
                if (local_30[2] == 0) {
                  return (byte *)0x0;
                }
                iVar16 = 6;
                puVar12 = (uint *)((uint)local_30[3] << 0x10 | (uint)local_30[2] << 0x18 |
                                   (uint)local_30[4] << 8 | (uint)local_30[5]);
                break;
              default:
                goto switchD_01aeac4c_default;
              }
              puVar24 = (uint *)0xffff;
              if ((uint *)0xfffe < puVar12) {
                return (byte *)0x0;
              }
            }
            else {
              iVar16 = 2;
            }
LAB_01aead24:
            if (uVar28 == 0x30) {
              puVar24 = (uint *)((int)puVar12 + iVar16);
            }
            if (uVar28 != 0x30 || puVar24 != puVar13) {
              return (byte *)0x0;
            }
            local_30 = local_30 + iVar16;
            puVar13 = puVar12;
          }
LAB_01aead3c:
          *piVar18 = (int)local_30;
          piVar18[1] = (int)puVar13;
          local_28 = uVar14;
        }
        else {
LAB_01aea878:
          local_28 = uVar14;
          if ((uVar29 & 0x100000000) != 0) {
            return &DAT_0000001d;
          }
        }
      }
      if (local_28 != local_2c) {
        return (byte *)0x0;
      }
    } while (puVar25 != puVar23);
    pbVar19 = &DAT_00000011;
    if (uVar21 == uVar27) {
      pbVar19 = &DAT_00000026;
    }
  }
switchD_01aeac4c_default:
  return pbVar19;
}

