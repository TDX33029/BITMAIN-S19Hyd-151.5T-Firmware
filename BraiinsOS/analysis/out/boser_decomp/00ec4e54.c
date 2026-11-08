// FUN_00ec4e54 @ 00ec4e54 size=3640 calls_out=13 calls_in=2
// strings: a UUID string | description | a UUID string | content | a UUID string | linkswindow_length

int FUN_00ec4e54(char *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  uint local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int *local_3c;
  undefined4 local_38;
  int *local_34;
  uint local_30;
  int *local_2c;
  
  if (*param_1 == '\x01') goto LAB_00ec5c30;
  piVar10 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar5 = 1;
    iVar7 = *piVar10;
    pcVar4 = ",";
    do {
      uVar8 = *(uint *)(iVar7 + 4);
      uVar3 = uVar8 ^ 0x7fffffff;
      if (uVar5 < uVar3) {
        uVar3 = uVar5;
      }
      FUN_01284394(iVar7,pcVar4,uVar3);
      if (uVar8 == 0x7fffffff) goto LAB_00ec53b4;
      pcVar4 = pcVar4 + uVar3;
      uVar5 = uVar5 - uVar3;
    } while (uVar5 != 0);
  }
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,*piVar10,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  if ((char)local_30 != '\x04') {
LAB_00ec5154:
    uVar5 = local_30;
    piVar10 = local_2c;
LAB_00ec53c0:
    iVar7 = FUN_01966f50(uVar5,piVar10);
    return iVar7;
  }
  uVar5 = 1;
  iVar7 = *piVar10;
  pcVar4 = ":";
  do {
    uVar8 = *(uint *)(iVar7 + 4);
    uVar3 = uVar8 ^ 0x7fffffff;
    if (uVar5 < uVar3) {
      uVar3 = uVar5;
    }
    FUN_01284394(iVar7,pcVar4,uVar3);
    if (uVar8 == 0x7fffffff) goto LAB_00ec53b4;
    pcVar4 = pcVar4 + uVar3;
    uVar5 = uVar5 - uVar3;
  } while (uVar5 != 0);
  if (param_3[0x1a] == -0x80000000) {
    iVar7 = FUN_00f08210(param_3,piVar10);
    return iVar7;
  }
  uVar5 = 1;
  iVar7 = *piVar10;
  pcVar4 = "{";
  do {
    uVar8 = *(uint *)(iVar7 + 4);
    uVar3 = uVar8 ^ 0x7fffffff;
    if (uVar5 < uVar3) {
      uVar3 = uVar5;
    }
    FUN_01284394(iVar7,pcVar4,uVar3);
    if (uVar8 == 0x7fffffff) goto LAB_00ec53b4;
    pcVar4 = pcVar4 + uVar3;
    uVar5 = uVar5 - uVar3;
  } while (uVar5 != 0);
  local_40 = 0x100;
  local_3c = piVar10;
  iVar7 = FUN_0096b5ec(&local_40,"description",0xb,param_3[0x1b],param_3[0x1c]);
  if (iVar7 != 0) {
    return iVar7;
  }
  if ((param_3[0x16] != 0) && (iVar7 = FUN_00ebc674(&local_40,param_3 + 0x14), iVar7 != 0)) {
    return iVar7;
  }
  piVar10 = local_3c;
  if (param_3[0x12] != 0) {
    if ((char)local_40 == '\x01') goto LAB_00ec5c30;
    if (local_40._1_1_ != '\x01') {
      uVar5 = 1;
      iVar7 = *local_3c;
      pcVar4 = ",";
      do {
        uVar8 = *(uint *)(iVar7 + 4);
        uVar3 = uVar8 ^ 0x7fffffff;
        if (uVar5 < uVar3) {
          uVar3 = uVar5;
        }
        FUN_01284394(iVar7,pcVar4,uVar3);
        if (uVar8 == 0x7fffffff) goto LAB_00ec53b4;
        pcVar4 = pcVar4 + uVar3;
        uVar5 = uVar5 - uVar3;
      } while (uVar5 != 0);
    }
    local_40._0_2_ = CONCAT11(2,(char)local_40);
    FUN_0096b2b0(&local_30,*piVar10,"content",7);
    if ((char)local_30 != '\x04') goto LAB_00ec5154;
    uVar5 = 1;
    iVar7 = *piVar10;
    pcVar4 = ":";
    do {
      uVar8 = *(uint *)(iVar7 + 4);
      uVar3 = uVar8 ^ 0x7fffffff;
      if (uVar5 < uVar3) {
        uVar3 = uVar5;
      }
      FUN_01284394(iVar7,pcVar4,uVar3);
      if (uVar8 == 0x7fffffff) goto LAB_00ec53b4;
      pcVar4 = pcVar4 + uVar3;
      uVar5 = uVar5 - uVar3;
    } while (uVar5 != 0);
    iVar11 = param_3[0xd];
    uVar5 = 1;
    iVar7 = param_3[0xe];
    iVar9 = *piVar10;
    pcVar4 = "{";
    do {
      uVar8 = *(uint *)(iVar9 + 4);
      uVar3 = uVar8 ^ 0x7fffffff;
      if (uVar5 < uVar3) {
        uVar3 = uVar5;
      }
      FUN_01284394(iVar9,pcVar4,uVar3);
      if (uVar8 == 0x7fffffff) goto LAB_00ec5c14;
      pcVar4 = pcVar4 + uVar3;
      uVar5 = uVar5 - uVar3;
    } while (uVar5 != 0);
    uVar5 = 0x100;
    if (iVar7 == 0) {
      uVar5 = 1;
      pcVar4 = "}";
      do {
        uVar8 = *(uint *)(iVar9 + 4);
        uVar3 = uVar8 ^ 0x7fffffff;
        if (uVar5 < uVar3) {
          uVar3 = uVar5;
        }
        FUN_01284394(iVar9,pcVar4,uVar3);
        if (uVar8 == 0x7fffffff) goto LAB_00ec5c14;
        pcVar4 = pcVar4 + uVar3;
        uVar5 = uVar5 - uVar3;
      } while (uVar5 != 0);
      uVar5 = 0;
    }
    iVar7 = iVar7 * 0x1d8;
    local_2c = piVar10;
    local_30 = uVar5;
    while (iVar7 != 0) {
      iVar9 = FUN_00ebad94(&local_30,iVar11 + 0x1c8,iVar11);
      iVar7 = iVar7 + -0x1d8;
      iVar11 = iVar11 + 0x1d8;
      if (iVar9 != 0) {
        return iVar9;
      }
    }
    if ((local_30 & 1) != 0) goto LAB_00ec5c5c;
    if ((local_30 & 0xff00) != 0) {
      uVar5 = 1;
      iVar7 = *local_2c;
      pcVar4 = "}";
      do {
        uVar8 = *(uint *)(iVar7 + 4);
        uVar3 = uVar8 ^ 0x7fffffff;
        if (uVar5 < uVar3) {
          uVar3 = uVar5;
        }
        FUN_01284394(iVar7,pcVar4,uVar3);
        if (uVar8 == 0x7fffffff) goto LAB_00ec53b4;
        pcVar4 = pcVar4 + uVar3;
        uVar5 = uVar5 - uVar3;
      } while (uVar5 != 0);
    }
  }
  if ((*param_3 != 0) && (iVar7 = FUN_011e01bc(param_3,&local_40), iVar7 != 0)) {
    return iVar7;
  }
  piVar10 = local_3c;
  local_44 = param_3[0x19];
  if (local_44 != 0) {
    if ((char)local_40 == '\x01') {
LAB_00ec5c30:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
    }
    if (local_40._1_1_ != '\x01') {
      uVar5 = 1;
      iVar7 = *local_3c;
      pcVar4 = ",";
      do {
        uVar8 = *(uint *)(iVar7 + 4);
        uVar3 = uVar8 ^ 0x7fffffff;
        if (uVar5 < uVar3) {
          uVar3 = uVar5;
        }
        FUN_01284394(iVar7,pcVar4,uVar3);
        if (uVar8 == 0x7fffffff) goto LAB_00ec5c14;
        pcVar4 = pcVar4 + uVar3;
        uVar5 = uVar5 - uVar3;
      } while (uVar5 != 0);
    }
    local_40._0_2_ = CONCAT11(2,(char)local_40);
    FUN_0096b2b0(&local_30,*piVar10,"linkswindow_length",5);
    if ((char)local_30 == '\x04') {
      uVar5 = 1;
      iVar7 = *piVar10;
      pcVar4 = ":";
      do {
        uVar8 = *(uint *)(iVar7 + 4);
        uVar3 = uVar8 ^ 0x7fffffff;
        if (uVar5 < uVar3) {
          uVar3 = uVar5;
        }
        FUN_01284394(iVar7,pcVar4,uVar3);
        if (uVar8 == 0x7fffffff) goto LAB_00ec5c14;
        pcVar4 = pcVar4 + uVar3;
        uVar5 = uVar5 - uVar3;
      } while (uVar5 != 0);
      iVar7 = param_3[0x17];
      bVar13 = iVar7 != 0;
      if (bVar13) {
        local_4c = param_3[0x18];
      }
      else {
        local_44 = 0;
      }
      uVar5 = 1;
      iVar9 = *piVar10;
      pcVar4 = "{";
      do {
        uVar8 = *(uint *)(iVar9 + 4);
        uVar3 = uVar8 ^ 0x7fffffff;
        if (uVar5 < uVar3) {
          uVar3 = uVar5;
        }
        FUN_01284394(iVar9,pcVar4,uVar3);
        if (uVar8 == 0x7fffffff) goto LAB_00ec5c14;
        pcVar4 = pcVar4 + uVar3;
        uVar5 = uVar5 - uVar3;
      } while (uVar5 != 0);
      local_48 = 0x100;
      if (local_44 == 0) {
        uVar5 = 1;
        pcVar4 = "}";
        do {
          uVar8 = *(uint *)(iVar9 + 4);
          uVar3 = uVar8 ^ 0x7fffffff;
          if (uVar5 < uVar3) {
            uVar3 = uVar5;
          }
          FUN_01284394(iVar9,pcVar4,uVar3);
          bVar6 = false;
          if (uVar8 == 0x7fffffff) goto LAB_00ec5c14;
          pcVar4 = pcVar4 + uVar3;
          uVar5 = uVar5 - uVar3;
        } while (uVar5 != 0);
        local_48 = 0;
      }
      else {
        bVar6 = true;
      }
      iVar9 = 0;
LAB_00ec55b0:
      if (local_44 == 0) {
        if (local_48 == 0) goto LAB_00ec5b9c;
        uVar5 = 1;
        iVar7 = *piVar10;
        pcVar4 = "}";
        goto LAB_00ec5b50;
      }
      if (!bVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2ffe0);
      }
      if (iVar9 == 0) {
        uVar5 = 0;
        iVar11 = iVar7;
        for (; local_4c != 0; local_4c = local_4c - 1) {
          iVar11 = *(int *)(iVar11 + 0x820);
        }
        iVar7 = 0;
      }
      else {
        uVar5 = local_4c;
        iVar11 = iVar9;
      }
      iVar9 = iVar11;
      if (*(ushort *)(iVar11 + 0x81a) <= uVar5) {
        do {
          iVar11 = *(int *)(iVar9 + 0x790);
          if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d2fff0);
          }
          uVar5 = (uint)*(ushort *)(iVar9 + 0x818);
          iVar7 = iVar7 + 1;
          iVar9 = iVar11;
        } while (*(ushort *)(iVar11 + 0x81a) <= uVar5);
      }
      if (iVar7 == 0) {
        local_4c = uVar5 + 1;
        iVar9 = iVar11;
      }
      else {
        piVar2 = (int *)(iVar11 + uVar5 * 4 + 0x824);
        do {
          iVar9 = *piVar2;
          iVar7 = iVar7 + -1;
          piVar2 = (int *)(iVar9 + 0x820);
        } while (iVar7 != 0);
        local_4c = 0;
      }
      if (!bVar6) {
        uVar3 = 1;
        iVar7 = *piVar10;
        pcVar4 = ",";
        do {
          uVar12 = *(uint *)(iVar7 + 4);
          uVar8 = uVar12 ^ 0x7fffffff;
          if (uVar3 < uVar8) {
            uVar8 = uVar3;
          }
          FUN_01284394(iVar7,pcVar4,uVar8);
          if (uVar12 == 0x7fffffff) goto LAB_00ec5c50;
          pcVar4 = pcVar4 + uVar8;
          uVar3 = uVar3 - uVar8;
        } while (uVar3 != 0);
      }
      iVar7 = iVar11 + uVar5 * 0xc;
      FUN_0096b2b0(&local_30,*piVar10,*(undefined4 *)(iVar7 + 0x798),*(undefined4 *)(iVar7 + 0x79c))
      ;
      if ((char)local_30 != '\x04') goto LAB_00ec5c24;
      iVar7 = *piVar10;
      uVar3 = 1;
      local_44 = local_44 + -1;
      piVar2 = (int *)(uVar5 * 0xb0 + iVar11);
      local_48 = 0x200;
      pcVar4 = ":";
      do {
        uVar8 = *(uint *)(iVar7 + 4);
        uVar5 = uVar8 ^ 0x7fffffff;
        if (uVar3 < uVar5) {
          uVar5 = uVar3;
        }
        FUN_01284394(iVar7,pcVar4,uVar5);
        if (uVar8 == 0x7fffffff) goto LAB_00ec5c50;
        pcVar4 = pcVar4 + uVar5;
        uVar3 = uVar3 - uVar5;
      } while (uVar3 != 0);
      if (*piVar2 == 3) {
        iVar11 = FUN_00f08210(piVar2 + 1,piVar10);
        goto LAB_00ec5ae0;
      }
      iVar7 = *piVar10;
      uVar5 = 1;
      pcVar4 = "{";
      do {
        uVar8 = *(uint *)(iVar7 + 4);
        uVar3 = uVar8 ^ 0x7fffffff;
        if (uVar5 < uVar3) {
          uVar3 = uVar5;
        }
        FUN_01284394(iVar7,pcVar4,uVar3);
        if (uVar8 == 0x7fffffff) goto LAB_00ec5acc;
        pcVar4 = pcVar4 + uVar3;
        uVar5 = uVar5 - uVar3;
      } while (uVar5 != 0);
      local_34 = piVar10;
      local_38 = 0x100;
      if ((((((piVar2[0x22] != 0) &&
             (iVar11 = FUN_0096b5ec(&local_38,"operation_ref",0xd,piVar2[0x21],piVar2[0x22]),
             iVar11 != 0)) ||
            ((piVar2[0x25] != 0 &&
             (iVar11 = FUN_0096b5ec(&local_38,"operation_id",0xc,piVar2[0x24],piVar2[0x25]),
             iVar11 != 0)))) ||
           ((piVar2[0x2b] != 0 &&
            (iVar11 = FUN_00ec6610(&local_38,"parameters",10,piVar2 + 0x29), iVar11 != 0)))) ||
          (((char)piVar2[0x12] != '\x06' &&
           (iVar11 = FUN_00ebc228(&local_38,"request_body",0xc), iVar11 != 0)))) ||
         ((piVar2[0x28] != 0 &&
          (iVar11 = FUN_0096b5ec(&local_38,"description",0xb,piVar2[0x27],piVar2[0x28]), iVar11 != 0
          )))) goto LAB_00ec5ae0;
      piVar1 = local_34;
      if (*piVar2 != 2) {
        if ((char)local_38 != '\x01') {
          if (local_38._1_1_ != '\x01') {
            iVar7 = *local_34;
            uVar5 = 1;
            pcVar4 = ",";
            do {
              uVar8 = *(uint *)(iVar7 + 4);
              uVar3 = uVar8 ^ 0x7fffffff;
              if (uVar5 < uVar3) {
                uVar3 = uVar5;
              }
              FUN_01284394(iVar7,pcVar4,uVar3);
              if (uVar8 == 0x7fffffff) goto LAB_00ec5b0c;
              pcVar4 = pcVar4 + uVar3;
              uVar5 = uVar5 - uVar3;
            } while (uVar5 != 0);
          }
          local_38._0_2_ = CONCAT11(2,(char)local_38);
          FUN_0096b2b0(&local_30,*piVar1,"se",6);
          if ((char)local_30 == '\x04') {
            iVar7 = *piVar1;
            uVar5 = 1;
            pcVar4 = ":";
            do {
              uVar8 = *(uint *)(iVar7 + 4);
              uVar3 = uVar8 ^ 0x7fffffff;
              if (uVar5 < uVar3) {
                uVar3 = uVar5;
              }
              FUN_01284394(iVar7,pcVar4,uVar3);
              if (uVar8 == 0x7fffffff) goto LAB_00ec5b0c;
              pcVar4 = pcVar4 + uVar3;
              uVar5 = uVar5 - uVar3;
            } while (uVar5 != 0);
            iVar11 = FUN_00ec3ce8(piVar2,piVar1);
            if (iVar11 != 0) goto LAB_00ec5ae0;
            goto LAB_00ec5a2c;
          }
          uVar5 = local_30;
          piVar2 = local_2c;
          goto LAB_00ec5b18;
        }
        goto LAB_00ec5c30;
      }
LAB_00ec5a2c:
      if ((piVar2[0x18] != 0) && (iVar11 = FUN_011e01bc(piVar2 + 0x18,&local_38), iVar11 != 0))
      goto LAB_00ec5ae0;
      if ((local_38 & 1) != 0) goto LAB_00ec5c5c;
      iVar11 = 0;
      if ((local_38 & 0xff00) != 0) {
        uVar5 = 1;
        iVar7 = *local_34;
        pcVar4 = "}";
        do {
          uVar8 = *(uint *)(iVar7 + 4);
          uVar3 = uVar8 ^ 0x7fffffff;
          if (uVar5 < uVar3) {
            uVar3 = uVar5;
          }
          FUN_01284394(iVar7,pcVar4,uVar3);
          if (uVar8 == 0x7fffffff) goto LAB_00ec5acc;
          pcVar4 = pcVar4 + uVar3;
          uVar5 = uVar5 - uVar3;
        } while (uVar5 != 0);
      }
      goto LAB_00ec5ae0;
    }
LAB_00ec5c24:
    uVar5 = local_30;
    piVar10 = local_2c;
    goto LAB_00ec5c54;
  }
  goto LAB_00ec5b9c;
LAB_00ec53b4:
  uVar5 = 2;
  piVar10 = &DAT_01d2e7b8;
  goto LAB_00ec53c0;
LAB_00ec5b0c:
  uVar5 = 2;
  piVar2 = &DAT_01d2e7b8;
LAB_00ec5b18:
  iVar11 = FUN_01966f50(uVar5,piVar2);
LAB_00ec5ae0:
  iVar7 = 0;
  bVar13 = true;
  bVar6 = false;
  if (iVar11 != 0) {
    return iVar11;
  }
  goto LAB_00ec55b0;
LAB_00ec5acc:
  iVar11 = FUN_01966f50(2,&DAT_01d2e7b8);
  goto LAB_00ec5ae0;
LAB_00ec5c50:
  uVar5 = 2;
  piVar10 = &DAT_01d2e7b8;
  goto LAB_00ec5c54;
  while( true ) {
    pcVar4 = pcVar4 + uVar3;
    uVar5 = uVar5 - uVar3;
    if (uVar5 == 0) break;
LAB_00ec5b50:
    uVar8 = *(uint *)(iVar7 + 4);
    uVar3 = uVar8 ^ 0x7fffffff;
    if (uVar5 < uVar3) {
      uVar3 = uVar5;
    }
    FUN_01284394(iVar7,pcVar4,uVar3);
    if (uVar8 == 0x7fffffff) goto LAB_00ec5c50;
  }
LAB_00ec5b9c:
  if ((local_40 & 1) != 0) {
LAB_00ec5c5c:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffc0);
  }
  if ((local_40 & 0xff00) == 0) {
    return 0;
  }
  uVar5 = 1;
  iVar7 = *piVar10;
  pcVar4 = "}";
  while( true ) {
    uVar8 = *(uint *)(iVar7 + 4);
    uVar3 = uVar8 ^ 0x7fffffff;
    if (uVar5 < uVar3) {
      uVar3 = uVar5;
    }
    FUN_01284394(iVar7,pcVar4,uVar3);
    if (uVar8 == 0x7fffffff) break;
    pcVar4 = pcVar4 + uVar3;
    uVar5 = uVar5 - uVar3;
    if (uVar5 == 0) {
      return 0;
    }
  }
LAB_00ec5c14:
  uVar5 = 2;
  piVar10 = &DAT_01d2e7b8;
LAB_00ec5c54:
  iVar7 = FUN_01966f50(uVar5,piVar10);
  return iVar7;
}

