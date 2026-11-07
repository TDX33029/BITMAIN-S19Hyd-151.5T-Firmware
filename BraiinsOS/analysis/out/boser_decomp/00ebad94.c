// FUN_00ebad94 @ 00ebad94 size=4448 calls_out=15 calls_in=2
// strings: a UUID string | examplematrix | a UUID string | examples | a UUID string | summary

int FUN_00ebad94(char *param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  byte bVar18;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int *local_3c;
  uint local_38;
  int *local_34;
  uint local_30;
  int *local_2c;
  
  if (*param_1 == '\x01') goto LAB_00ebbeb4;
  piVar12 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar6 = 1;
    iVar10 = *piVar12;
    pcVar8 = ",";
    do {
      uVar11 = *(uint *)(iVar10 + 4);
      uVar7 = uVar11 ^ 0x7fffffff;
      if (uVar6 < uVar7) {
        uVar7 = uVar6;
      }
      FUN_01284394(iVar10,pcVar8,uVar7);
      if (uVar11 == 0x7fffffff) goto LAB_00ebb710;
      pcVar8 = pcVar8 + uVar7;
      uVar6 = uVar6 - uVar7;
    } while (uVar6 != 0);
  }
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,*piVar12,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  if ((char)local_30 != '\x04') goto LAB_00ebb71c;
  uVar6 = 1;
  iVar10 = *piVar12;
  pcVar8 = ":";
  do {
    uVar11 = *(uint *)(iVar10 + 4);
    uVar7 = uVar11 ^ 0x7fffffff;
    if (uVar6 < uVar7) {
      uVar7 = uVar6;
    }
    FUN_01284394(iVar10,pcVar8,uVar7);
    if (uVar11 == 0x7fffffff) goto LAB_00ebb710;
    pcVar8 = pcVar8 + uVar7;
    uVar6 = uVar6 - uVar7;
  } while (uVar6 != 0);
  uVar6 = 1;
  iVar10 = *piVar12;
  pcVar8 = "{";
  do {
    uVar11 = *(uint *)(iVar10 + 4);
    uVar7 = uVar11 ^ 0x7fffffff;
    if (uVar6 < uVar7) {
      uVar7 = uVar6;
    }
    FUN_01284394(iVar10,pcVar8,uVar7);
    if (uVar11 == 0x7fffffff) goto LAB_00ebbe6c;
    pcVar8 = pcVar8 + uVar7;
    uVar6 = uVar6 - uVar7;
  } while (uVar6 != 0);
  local_40 = 0x100;
  local_3c = piVar12;
  if ((*param_3 != 8) && (iVar10 = FUN_00ebc020(&local_40,param_3), iVar10 != 0)) {
    return iVar10;
  }
  if (((char)param_3[0x5e] != '\x06') &&
     (iVar10 = FUN_00ebc228(&local_40,"examplematrix",7), iVar10 != 0)) {
    return iVar10;
  }
  piVar12 = local_3c;
  local_44 = param_3[0x6e];
  if (local_44 == 0) goto LAB_00ebb73c;
  if ((char)local_40 == '\x01') goto LAB_00ebbeb4;
  if (local_40._1_1_ != '\x01') {
    uVar6 = 1;
    iVar10 = *local_3c;
    pcVar8 = ",";
    do {
      uVar11 = *(uint *)(iVar10 + 4);
      uVar7 = uVar11 ^ 0x7fffffff;
      if (uVar6 < uVar7) {
        uVar7 = uVar6;
      }
      FUN_01284394(iVar10,pcVar8,uVar7);
      if (uVar11 == 0x7fffffff) goto LAB_00ebbe6c;
      pcVar8 = pcVar8 + uVar7;
      uVar6 = uVar6 - uVar7;
    } while (uVar6 != 0);
  }
  local_40._0_2_ = CONCAT11(2,(char)local_40);
  FUN_0096b2b0(&local_30,*piVar12,"examples",8);
  if ((char)local_30 == '\x04') {
    uVar6 = 1;
    iVar10 = *piVar12;
    pcVar8 = ":";
    do {
      uVar11 = *(uint *)(iVar10 + 4);
      uVar7 = uVar11 ^ 0x7fffffff;
      if (uVar6 < uVar7) {
        uVar7 = uVar6;
      }
      FUN_01284394(iVar10,pcVar8,uVar7);
      if (uVar11 == 0x7fffffff) goto LAB_00ebbe6c;
      pcVar8 = pcVar8 + uVar7;
      uVar6 = uVar6 - uVar7;
    } while (uVar6 != 0);
    iVar10 = param_3[0x6c];
    bVar17 = iVar10 != 0;
    if (bVar17) {
      local_50 = param_3[0x6d];
    }
    else {
      local_44 = 0;
    }
    uVar6 = 1;
    iVar15 = *piVar12;
    pcVar8 = "{";
    do {
      uVar11 = *(uint *)(iVar15 + 4);
      uVar7 = uVar11 ^ 0x7fffffff;
      if (uVar6 < uVar7) {
        uVar7 = uVar6;
      }
      FUN_01284394(iVar15,pcVar8,uVar7);
      if (uVar11 == 0x7fffffff) goto LAB_00ebbe6c;
      pcVar8 = pcVar8 + uVar7;
      uVar6 = uVar6 - uVar7;
    } while (uVar6 != 0);
    local_4c = 0x100;
    if (local_44 == 0) {
      uVar6 = 1;
      pcVar8 = "}";
      do {
        uVar11 = *(uint *)(iVar15 + 4);
        uVar7 = uVar11 ^ 0x7fffffff;
        if (uVar6 < uVar7) {
          uVar7 = uVar6;
        }
        FUN_01284394(iVar15,pcVar8,uVar7);
        bVar9 = false;
        if (uVar11 == 0x7fffffff) goto LAB_00ebbe6c;
        pcVar8 = pcVar8 + uVar7;
        uVar6 = uVar6 - uVar7;
      } while (uVar6 != 0);
      local_4c = 0;
    }
    else {
      bVar9 = true;
    }
    iVar15 = 0;
LAB_00ebb1c8:
    if (local_44 != 0) {
      if (bVar17) {
        if (iVar15 == 0) {
          uVar6 = 0;
          iVar3 = iVar10;
          for (; local_50 != 0; local_50 = local_50 - 1) {
            iVar3 = *(int *)(iVar3 + 0x350);
          }
          iVar10 = 0;
        }
        else {
          uVar6 = local_50;
          iVar3 = iVar15;
        }
        iVar15 = iVar3;
        if (*(ushort *)(iVar3 + 0x34a) <= uVar6) {
          do {
            iVar3 = *(int *)(iVar15 + 0x2c0);
            if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01d2fff0);
            }
            uVar6 = (uint)*(ushort *)(iVar15 + 0x348);
            iVar10 = iVar10 + 1;
            iVar15 = iVar3;
          } while (*(ushort *)(iVar3 + 0x34a) <= uVar6);
        }
        if (iVar10 == 0) {
          local_50 = uVar6 + 1;
          iVar15 = iVar3;
        }
        else {
          piVar4 = (int *)(iVar3 + uVar6 * 4 + 0x354);
          do {
            iVar15 = *piVar4;
            iVar10 = iVar10 + -1;
            piVar4 = (int *)(iVar15 + 0x350);
          } while (iVar10 != 0);
          local_50 = 0;
        }
        if (!bVar9) {
          uVar7 = 1;
          iVar10 = *piVar12;
          pcVar8 = ",";
          do {
            uVar13 = *(uint *)(iVar10 + 4);
            uVar11 = uVar13 ^ 0x7fffffff;
            if (uVar7 < uVar11) {
              uVar11 = uVar7;
            }
            FUN_01284394(iVar10,pcVar8,uVar11);
            if (uVar13 == 0x7fffffff) goto LAB_00ebbe8c;
            pcVar8 = pcVar8 + uVar11;
            uVar7 = uVar7 - uVar11;
          } while (uVar7 != 0);
        }
        iVar10 = iVar3 + uVar6 * 0xc;
        FUN_0096b2b0(&local_30,*piVar12,*(undefined4 *)(iVar10 + 0x2c8),
                     *(undefined4 *)(iVar10 + 0x2cc));
        if ((char)local_30 == '\x04') {
          iVar10 = *piVar12;
          pcVar14 = (char *)(iVar3 + uVar6 * 0x40);
          local_44 = local_44 + -1;
          uVar6 = 1;
          local_4c = 0x200;
          pcVar8 = ":";
          do {
            uVar11 = *(uint *)(iVar10 + 4);
            uVar7 = uVar11 ^ 0x7fffffff;
            if (uVar6 < uVar7) {
              uVar7 = uVar6;
            }
            FUN_01284394(iVar10,pcVar8,uVar7);
            if (uVar11 == 0x7fffffff) goto LAB_00ebbe8c;
            pcVar8 = pcVar8 + uVar7;
            uVar6 = uVar6 - uVar7;
          } while (uVar6 != 0);
          if (*(int *)(pcVar14 + 0x30) == -0x80000000) {
            iVar2 = FUN_00f08210(pcVar14,piVar12);
          }
          else {
            iVar10 = *(int *)(pcVar14 + 0x38);
            uVar6 = 1;
            cVar1 = *pcVar14;
            iVar3 = *(int *)(pcVar14 + 0x2c);
            iVar2 = *piVar12;
            iVar16 = *(int *)(pcVar14 + 0x20);
            pcVar8 = "{";
            do {
              uVar11 = *(uint *)(iVar2 + 4);
              uVar7 = uVar11 ^ 0x7fffffff;
              if (uVar6 < uVar7) {
                uVar7 = uVar6;
              }
              FUN_01284394(iVar2,pcVar8,uVar7);
              if (uVar11 == 0x7fffffff) goto LAB_00ebb658;
              pcVar8 = pcVar8 + uVar7;
              uVar6 = uVar6 - uVar7;
            } while (uVar6 != 0);
            bVar18 = iVar16 != 0;
            if (iVar3 != 0) {
              bVar18 = bVar18 + 1;
            }
            if (cVar1 != '\x06') {
              bVar18 = bVar18 + 1;
            }
            uVar6 = 0x100;
            if (iVar10 != 0) {
              bVar18 = bVar18 | 1;
            }
            if (bVar18 == 0) {
              uVar6 = 1;
              pcVar8 = "}";
              do {
                uVar11 = *(uint *)(iVar2 + 4);
                uVar7 = uVar11 ^ 0x7fffffff;
                if (uVar6 < uVar7) {
                  uVar7 = uVar6;
                }
                FUN_01284394(iVar2,pcVar8,uVar7);
                if (uVar11 == 0x7fffffff) goto LAB_00ebb658;
                pcVar8 = pcVar8 + uVar7;
                uVar6 = uVar6 - uVar7;
              } while (uVar6 != 0);
              uVar6 = 0;
            }
            local_34 = piVar12;
            local_38 = uVar6;
            if ((iVar16 == 0) ||
               (iVar2 = FUN_0096b5ec(&local_38,"summary",7,*(undefined4 *)(pcVar14 + 0x1c),iVar16),
               iVar2 == 0)) {
              if (iVar3 == 0) {
LAB_00ebb578:
                if (cVar1 != '\x06') {
                  if ((char)local_38 == '\x01') goto LAB_00ebb66c;
                  iVar2 = FUN_00ebc228(&local_38,"value",5,pcVar14);
                  if (iVar2 != 0) goto LAB_00ebb51c;
                }
                if (iVar10 != 0) {
                  if ((char)local_38 == '\x01') goto LAB_00ebb66c;
                  iVar2 = FUN_0096b5ec(&local_38,&DAT_003ef9a9,0xd,*(undefined4 *)(pcVar14 + 0x34),
                                       *(undefined4 *)(pcVar14 + 0x38));
                  if (iVar2 != 0) goto LAB_00ebb51c;
                }
                iVar2 = 0;
                if (((local_38 & 0xff00) != 0) && ((local_38 & 1) == 0)) {
                  uVar6 = 1;
                  iVar10 = *local_34;
                  pcVar8 = "}";
                  do {
                    uVar11 = *(uint *)(iVar10 + 4);
                    uVar7 = uVar11 ^ 0x7fffffff;
                    if (uVar6 < uVar7) {
                      uVar7 = uVar6;
                    }
                    FUN_01284394(iVar10,pcVar8,uVar7);
                    if (uVar11 == 0x7fffffff) {
                      iVar2 = FUN_01966f50(2,&DAT_01d2e7b8);
                      break;
                    }
                    pcVar8 = pcVar8 + uVar7;
                    uVar6 = uVar6 - uVar7;
                  } while (uVar6 != 0);
                }
              }
              else {
                if ((char)local_38 != '\x01') {
                  iVar2 = FUN_0096b5ec(&local_38,"description",0xb,*(undefined4 *)(pcVar14 + 0x28),
                                       iVar3);
                  if (iVar2 != 0) goto LAB_00ebb51c;
                  goto LAB_00ebb578;
                }
LAB_00ebb66c:
                local_30 = 10;
                iVar2 = FUN_01966fbc(&local_30,0,0);
              }
            }
          }
          goto LAB_00ebb51c;
        }
        goto LAB_00ebbda0;
      }
      goto LAB_00ebbf08;
    }
    if (local_4c == 0) goto LAB_00ebb73c;
    uVar6 = 1;
    iVar10 = *piVar12;
    pcVar8 = "}";
    goto LAB_00ebb6d8;
  }
  goto LAB_00ebbda0;
LAB_00ebb658:
  iVar2 = FUN_01966f50(2,&DAT_01d2e7b8);
LAB_00ebb51c:
  iVar10 = 0;
  bVar17 = true;
  bVar9 = false;
  if (iVar2 != 0) {
    return iVar2;
  }
  goto LAB_00ebb1c8;
LAB_00ebbe8c:
  uVar6 = 2;
  piVar12 = &DAT_01d2e7b8;
  goto LAB_00ebbe78;
LAB_00ebbea0:
  uVar6 = 2;
  goto LAB_00ebbe78;
LAB_00ebbe6c:
  uVar6 = 2;
  piVar12 = &DAT_01d2e7b8;
  goto LAB_00ebbe78;
LAB_00ebb710:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
LAB_00ebb71c:
  iVar10 = FUN_01966f50(local_30,local_2c);
  return iVar10;
  while( true ) {
    pcVar8 = pcVar8 + uVar7;
    uVar6 = uVar6 - uVar7;
    if (uVar6 == 0) break;
LAB_00ebb6d8:
    uVar11 = *(uint *)(iVar10 + 4);
    uVar7 = uVar11 ^ 0x7fffffff;
    if (uVar6 < uVar7) {
      uVar7 = uVar6;
    }
    FUN_01284394(iVar10,pcVar8,uVar7);
    if (uVar11 == 0x7fffffff) goto LAB_00ebbe8c;
  }
LAB_00ebb73c:
  piVar4 = local_3c;
  local_44 = param_3[0x71];
  if (local_44 == 0) {
LAB_00ebbdc8:
    if ((param_3[100] != 0) && (iVar10 = FUN_011e01bc(param_3 + 100,&local_40), iVar10 != 0)) {
      return iVar10;
    }
    if ((local_40 & 1) != 0) {
LAB_00ebbecc:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffc0);
    }
    if ((local_40 & 0xff00) != 0) {
      uVar6 = 1;
      iVar10 = *local_3c;
      pcVar8 = "}";
      do {
        uVar11 = *(uint *)(iVar10 + 4);
        uVar7 = uVar11 ^ 0x7fffffff;
        if (uVar6 < uVar7) {
          uVar7 = uVar6;
        }
        FUN_01284394(iVar10,pcVar8,uVar7);
        if (uVar11 == 0x7fffffff) goto LAB_00ebbe6c;
        pcVar8 = pcVar8 + uVar7;
        uVar6 = uVar6 - uVar7;
      } while (uVar6 != 0);
    }
    return 0;
  }
  if ((char)local_40 == '\x01') {
LAB_00ebbeb4:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  if (local_40._1_1_ != '\x01') {
    uVar6 = 1;
    iVar10 = *local_3c;
    pcVar8 = ",";
    do {
      uVar11 = *(uint *)(iVar10 + 4);
      uVar7 = uVar11 ^ 0x7fffffff;
      if (uVar6 < uVar7) {
        uVar7 = uVar6;
      }
      FUN_01284394(iVar10,pcVar8,uVar7);
      if (uVar11 == 0x7fffffff) goto LAB_00ebbe6c;
      pcVar8 = pcVar8 + uVar7;
      uVar6 = uVar6 - uVar7;
    } while (uVar6 != 0);
  }
  local_40._0_2_ = CONCAT11(2,(char)local_40);
  FUN_0096b2b0(&local_30,*piVar4,&DAT_0056fe50,8);
  if ((char)local_30 == '\x04') {
    uVar6 = 1;
    iVar10 = *piVar4;
    pcVar8 = ":";
    do {
      uVar11 = *(uint *)(iVar10 + 4);
      uVar7 = uVar11 ^ 0x7fffffff;
      if (uVar6 < uVar7) {
        uVar7 = uVar6;
      }
      FUN_01284394(iVar10,pcVar8,uVar7);
      if (uVar11 == 0x7fffffff) goto LAB_00ebbe6c;
      pcVar8 = pcVar8 + uVar7;
      uVar6 = uVar6 - uVar7;
    } while (uVar6 != 0);
    iVar10 = param_3[0x6f];
    bVar17 = iVar10 != 0;
    if (bVar17) {
      local_4c = param_3[0x70];
    }
    else {
      local_44 = 0;
    }
    uVar6 = 1;
    iVar15 = *piVar4;
    pcVar8 = "{";
    do {
      uVar11 = *(uint *)(iVar15 + 4);
      uVar7 = uVar11 ^ 0x7fffffff;
      if (uVar6 < uVar7) {
        uVar7 = uVar6;
      }
      FUN_01284394(iVar15,pcVar8,uVar7);
      if (uVar11 == 0x7fffffff) goto LAB_00ebbe6c;
      pcVar8 = pcVar8 + uVar7;
      uVar6 = uVar6 - uVar7;
    } while (uVar6 != 0);
    local_48 = 0x100;
    if (local_44 == 0) {
      uVar6 = 1;
      pcVar8 = "}";
      do {
        uVar11 = *(uint *)(iVar15 + 4);
        uVar7 = uVar11 ^ 0x7fffffff;
        if (uVar6 < uVar7) {
          uVar7 = uVar6;
        }
        FUN_01284394(iVar15,pcVar8,uVar7);
        bVar9 = false;
        if (uVar11 == 0x7fffffff) goto LAB_00ebbe6c;
        pcVar8 = pcVar8 + uVar7;
        uVar6 = uVar6 - uVar7;
      } while (uVar6 != 0);
      local_48 = 0;
    }
    else {
      bVar9 = true;
    }
    iVar15 = 0;
    piVar12 = &DAT_01d2e7b8;
    while (local_44 != 0) {
      if (!bVar17) {
LAB_00ebbf08:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2ffe0);
      }
      if (iVar15 == 0) {
        uVar6 = 0;
        iVar3 = iVar10;
        for (; local_4c != 0; local_4c = local_4c - 1) {
          iVar3 = *(int *)(iVar3 + 0x350);
        }
        iVar10 = 0;
      }
      else {
        uVar6 = local_4c;
        iVar3 = iVar15;
      }
      iVar15 = iVar3;
      if (*(ushort *)(iVar3 + 0x34a) <= uVar6) {
        do {
          iVar3 = *(int *)(iVar15 + 0x2c0);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d2fff0);
          }
          uVar6 = (uint)*(ushort *)(iVar15 + 0x348);
          iVar10 = iVar10 + 1;
          iVar15 = iVar3;
        } while (*(ushort *)(iVar3 + 0x34a) <= uVar6);
      }
      if (iVar10 == 0) {
        local_4c = uVar6 + 1;
        iVar15 = iVar3;
      }
      else {
        piVar5 = (int *)(iVar3 + uVar6 * 4 + 0x354);
        do {
          iVar15 = *piVar5;
          iVar10 = iVar10 + -1;
          piVar5 = (int *)(iVar15 + 0x350);
        } while (iVar10 != 0);
        local_4c = 0;
      }
      if (!bVar9) {
        uVar7 = 1;
        iVar10 = *piVar4;
        pcVar8 = ",";
        do {
          uVar13 = *(uint *)(iVar10 + 4);
          uVar11 = uVar13 ^ 0x7fffffff;
          if (uVar7 < uVar11) {
            uVar11 = uVar7;
          }
          FUN_01284394(iVar10,pcVar8,uVar11);
          if (uVar13 == 0x7fffffff) goto LAB_00ebbea0;
          pcVar8 = pcVar8 + uVar11;
          uVar7 = uVar7 - uVar11;
        } while (uVar7 != 0);
      }
      iVar10 = iVar3 + uVar6 * 0xc;
      FUN_0096b2b0(&local_30,*piVar4,*(undefined4 *)(iVar10 + 0x2c8),*(undefined4 *)(iVar10 + 0x2cc)
                  );
      if ((char)local_30 != '\x04') goto LAB_00ebbda0;
      iVar10 = *piVar4;
      piVar5 = (int *)(iVar3 + uVar6 * 0x40);
      local_44 = local_44 + -1;
      uVar6 = 1;
      local_48 = 0x200;
      pcVar8 = ":";
      do {
        uVar11 = *(uint *)(iVar10 + 4);
        uVar7 = uVar11 ^ 0x7fffffff;
        if (uVar6 < uVar7) {
          uVar7 = uVar6;
        }
        FUN_01284394(iVar10,pcVar8,uVar7);
        if (uVar11 == 0x7fffffff) goto LAB_00ebbea0;
        pcVar8 = pcVar8 + uVar7;
        uVar6 = uVar6 - uVar7;
      } while (uVar6 != 0);
      iVar10 = *piVar4;
      uVar6 = 1;
      pcVar8 = "{";
      do {
        uVar11 = *(uint *)(iVar10 + 4);
        uVar7 = uVar11 ^ 0x7fffffff;
        if (uVar6 < uVar7) {
          uVar7 = uVar6;
        }
        FUN_01284394(iVar10,pcVar8,uVar7);
        if (uVar11 == 0x7fffffff) goto LAB_00ebbea0;
        pcVar8 = pcVar8 + uVar7;
        uVar6 = uVar6 - uVar7;
      } while (uVar6 != 0);
      local_2c = piVar4;
      local_30 = 0x100;
      if ((piVar5[0xb] != -0x80000000) &&
         (iVar10 = FUN_00ebc430(&local_30,"contentType",0xb), iVar10 != 0)) {
        return iVar10;
      }
      if ((piVar5[10] != 0) && (iVar10 = FUN_00ebc674(&local_30,piVar5 + 8), iVar10 != 0)) {
        return iVar10;
      }
      if (((char)piVar5[0xe] != '\a') && (iVar10 = FUN_00ebce1c(&local_30), iVar10 != 0)) {
        return iVar10;
      }
      if ((*(char *)((int)piVar5 + 0x39) != '\x02') &&
         (iVar10 = FUN_00ebd130(&local_30,"explode",7), iVar10 != 0)) {
        return iVar10;
      }
      if ((*(char *)((int)piVar5 + 0x3a) != '\x02') &&
         (iVar10 = FUN_00ebd130(&local_30,"allowReserved",0xd), iVar10 != 0)) {
        return iVar10;
      }
      if ((*piVar5 != 0) && (iVar10 = FUN_011e01bc(piVar5,&local_30), iVar10 != 0)) {
        return iVar10;
      }
      if ((local_30 & 1) != 0) goto LAB_00ebbecc;
      if ((local_30 & 0xff00) != 0) {
        uVar6 = 1;
        iVar10 = *local_2c;
        pcVar8 = "}";
        do {
          uVar11 = *(uint *)(iVar10 + 4);
          uVar7 = uVar11 ^ 0x7fffffff;
          if (uVar6 < uVar7) {
            uVar7 = uVar6;
          }
          FUN_01284394(iVar10,pcVar8,uVar7);
          if (uVar11 == 0x7fffffff) goto LAB_00ebbea0;
          pcVar8 = pcVar8 + uVar7;
          uVar6 = uVar6 - uVar7;
        } while (uVar6 != 0);
      }
      iVar10 = 0;
      bVar17 = true;
      bVar9 = false;
    }
    if (local_48 != 0) {
      uVar6 = 1;
      iVar10 = *piVar4;
      pcVar8 = "}";
      do {
        uVar11 = *(uint *)(iVar10 + 4);
        uVar7 = uVar11 ^ 0x7fffffff;
        if (uVar6 < uVar7) {
          uVar7 = uVar6;
        }
        FUN_01284394(iVar10,pcVar8,uVar7);
        if (uVar11 == 0x7fffffff) goto LAB_00ebbea0;
        pcVar8 = pcVar8 + uVar7;
        uVar6 = uVar6 - uVar7;
      } while (uVar6 != 0);
    }
    goto LAB_00ebbdc8;
  }
LAB_00ebbda0:
  uVar6 = local_30;
  piVar12 = local_2c;
LAB_00ebbe78:
  iVar10 = FUN_01966f50(uVar6,piVar12);
  return iVar10;
}

