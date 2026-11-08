// FUN_00ec2334 @ 00ec2334 size=3544 calls_out=17 calls_in=0
// strings: a UUID string | summary | description | operationId | externalDocs | a UUID string

int FUN_00ec2334(char *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  undefined4 local_40;
  int *local_3c;
  undefined4 local_38;
  int *local_34;
  uint local_30;
  int *local_2c;
  
  if (*param_1 == '\x01') goto LAB_00ec30c4;
  piVar14 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar10 = 1;
    iVar6 = *piVar14;
    pcVar4 = ",";
    do {
      uVar13 = *(uint *)(iVar6 + 4);
      uVar8 = uVar13 ^ 0x7fffffff;
      if (uVar10 < uVar8) {
        uVar8 = uVar10;
      }
      FUN_01284394(iVar6,pcVar4,uVar8);
      if (uVar13 == 0x7fffffff) goto LAB_00ec26d0;
      pcVar4 = pcVar4 + uVar8;
      uVar10 = uVar10 - uVar8;
    } while (uVar10 != 0);
  }
  iVar6 = *piVar14;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar6,param_2,param_3);
  if ((char)local_30 != '\x04') {
LAB_00ec26dc:
    iVar6 = FUN_01966f50(local_30,local_2c);
    return iVar6;
  }
  uVar10 = 1;
  iVar6 = *piVar14;
  pcVar4 = ":";
  do {
    uVar13 = *(uint *)(iVar6 + 4);
    uVar8 = uVar13 ^ 0x7fffffff;
    if (uVar10 < uVar8) {
      uVar8 = uVar10;
    }
    FUN_01284394(iVar6,pcVar4,uVar8);
    if (uVar13 == 0x7fffffff) goto LAB_00ec26d0;
    pcVar4 = pcVar4 + uVar8;
    uVar10 = uVar10 - uVar8;
  } while (uVar10 != 0);
  iVar6 = param_4[0x47];
  if (iVar6 == -0x7fffffff) {
    uVar10 = 4;
    iVar6 = *piVar14;
    puVar5 = &DAT_0056d030;
    while( true ) {
      uVar13 = *(uint *)(iVar6 + 4);
      uVar8 = uVar13 ^ 0x7fffffff;
      if (uVar10 < uVar8) {
        uVar8 = uVar10;
      }
      FUN_01284394(iVar6,puVar5,uVar8);
      if (uVar13 == 0x7fffffff) break;
      puVar5 = puVar5 + uVar8;
      uVar10 = uVar10 - uVar8;
      if (uVar10 == 0) {
        return 0;
      }
    }
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
    goto LAB_00ec26dc;
  }
  uVar10 = 1;
  iVar12 = *piVar14;
  pcVar4 = "{";
  do {
    uVar13 = *(uint *)(iVar12 + 4);
    uVar8 = uVar13 ^ 0x7fffffff;
    if (uVar10 < uVar8) {
      uVar8 = uVar10;
    }
    FUN_01284394(iVar12,pcVar4,uVar8);
    if (uVar13 == 0x7fffffff) goto LAB_00ec30ac;
    pcVar4 = pcVar4 + uVar8;
    uVar10 = uVar10 - uVar8;
  } while (uVar10 != 0);
  local_40 = 0x100;
  local_3c = piVar14;
  if ((param_4[0x32] != -0x80000000) &&
     (iVar12 = FUN_00ec3204(&local_40,&DAT_0056da6c), iVar12 != 0)) {
    return iVar12;
  }
  if ((param_4[0x35] != -0x80000000) && (iVar12 = FUN_00ebc430(&local_40,"summary",7), iVar12 != 0))
  {
    return iVar12;
  }
  if ((param_4[0x38] != -0x80000000) &&
     (iVar12 = FUN_00ebc430(&local_40,"description",0xb), iVar12 != 0)) {
    return iVar12;
  }
  if ((param_4[0x3b] != -0x80000000) &&
     (iVar12 = FUN_00ebc430(&local_40,"operationId",0xb), iVar12 != 0)) {
    return iVar12;
  }
  if ((param_4[0x2f] != -0x80000000) &&
     (iVar12 = FUN_00ec0074(&local_40,"externalDocs",param_4 + 0x24), iVar12 != 0)) {
    return iVar12;
  }
  if ((param_4[0x3e] != -0x80000000) && (iVar12 = FUN_00ec1930(&local_40), iVar12 != 0)) {
    return iVar12;
  }
  piVar14 = local_3c;
  iVar12 = param_4[0xb];
  if (iVar12 == -0x7fffffff) {
    if ((local_40 & 0xff) != 0) goto LAB_00ec30c4;
    if (local_40._1_1_ != '\x01') {
LAB_00ec2678:
      uVar10 = 1;
      iVar12 = *piVar14;
      pcVar4 = ",";
      do {
        uVar13 = *(uint *)(iVar12 + 4);
        uVar8 = uVar13 ^ 0x7fffffff;
        if (uVar10 < uVar8) {
          uVar8 = uVar10;
        }
        FUN_01284394(iVar12,pcVar4,uVar8);
        if (uVar13 == 0x7fffffff) goto LAB_00ec30ac;
        pcVar4 = pcVar4 + uVar8;
        uVar10 = uVar10 - uVar8;
      } while (uVar10 != 0);
    }
    local_40._0_2_ = CONCAT11(2,(char)local_40);
    FUN_0096b2b0(&local_30,*piVar14,"responses",9);
    if ((char)local_30 == '\x04') {
      uVar10 = 1;
      iVar12 = *piVar14;
      pcVar4 = ":";
      do {
        uVar13 = *(uint *)(iVar12 + 4);
        uVar8 = uVar13 ^ 0x7fffffff;
        if (uVar10 < uVar8) {
          uVar8 = uVar10;
        }
        FUN_01284394(iVar12,pcVar4,uVar8);
        if (uVar13 == 0x7fffffff) goto LAB_00ec30ac;
        pcVar4 = pcVar4 + uVar8;
        uVar10 = uVar10 - uVar8;
      } while (uVar10 != 0);
      uVar10 = 1;
      iVar12 = *piVar14;
      pcVar4 = "{";
      do {
        uVar13 = *(uint *)(iVar12 + 4);
        uVar8 = uVar13 ^ 0x7fffffff;
        if (uVar10 < uVar8) {
          uVar8 = uVar10;
        }
        FUN_01284394(iVar12,pcVar4,uVar8);
        if (uVar13 == 0x7fffffff) goto LAB_00ec30ac;
        pcVar4 = pcVar4 + uVar8;
        uVar10 = uVar10 - uVar8;
      } while (uVar10 != 0);
      local_30 = 0x100;
      local_2c = piVar14;
      iVar12 = FUN_00d4a478(&local_30,param_4 + 0x20);
      if (iVar12 != 0) {
        return iVar12;
      }
      if ((param_4[0x18] != 0) && (iVar12 = FUN_011e01bc(param_4 + 0x18,&local_30), iVar12 != 0)) {
        return iVar12;
      }
      if ((local_30 & 1) == 0) {
        if ((local_30 & 0xff00) != 0) {
          uVar10 = 1;
          iVar12 = *local_2c;
          pcVar4 = "}";
          do {
            uVar13 = *(uint *)(iVar12 + 4);
            uVar8 = uVar13 ^ 0x7fffffff;
            if (uVar10 < uVar8) {
              uVar8 = uVar10;
            }
            FUN_01284394(iVar12,pcVar4,uVar8);
            if (uVar13 == 0x7fffffff) goto LAB_00ec30ac;
            pcVar4 = pcVar4 + uVar8;
            uVar10 = uVar10 - uVar8;
          } while (uVar10 != 0);
        }
        if ((param_4[0x41] != -0x80000000) &&
           (iVar12 = FUN_00ebc430(&local_40,"callbacks",9), iVar12 != 0)) {
          return iVar12;
        }
        if (((char)param_4[0x4a] != '\x02') && (iVar12 = FUN_00ec340c(&local_40), iVar12 != 0)) {
          return iVar12;
        }
        if ((param_4[0x44] != -0x80000000) &&
           (iVar12 = FUN_00ec3614(&local_40,&DAT_0056ffb0), iVar12 != 0)) {
          return iVar12;
        }
        if ((iVar6 != -0x80000000) &&
           (iVar6 = FUN_00ec14ac(&local_40,"servers",param_4 + 0x47), iVar6 != 0)) {
          return iVar6;
        }
        if ((param_4[0x10] == 0) || (iVar6 = FUN_011e01bc(param_4 + 0x10,&local_40), iVar6 == 0)) {
          local_30 = local_40;
          local_2c = local_3c;
          iVar6 = FUN_00d91e90(&local_30);
          return iVar6;
        }
        return iVar6;
      }
LAB_00ec30dc:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffc0);
    }
  }
  else {
    if ((local_40 & 0xff) != 0) goto LAB_00ec30c4;
    if (local_40._1_1_ != '\x01') {
      uVar10 = 1;
      pcVar4 = ",";
      iVar15 = *local_3c;
      do {
        uVar13 = *(uint *)(iVar15 + 4);
        uVar8 = uVar13 ^ 0x7fffffff;
        if (uVar10 < uVar8) {
          uVar8 = uVar10;
        }
        FUN_01284394(iVar15,pcVar4,uVar8);
        if (uVar13 == 0x7fffffff) goto LAB_00ec30ac;
        pcVar4 = pcVar4 + uVar8;
        uVar10 = uVar10 - uVar8;
      } while (uVar10 != 0);
    }
    local_40._0_2_ = CONCAT11(2,(char)local_40);
    FUN_0096b2b0(&local_30,*piVar14,"requestBody",0xb);
    if ((char)local_30 == '\x04') {
      iVar15 = *piVar14;
      uVar10 = 1;
      pcVar4 = ":";
      do {
        uVar13 = *(uint *)(iVar15 + 4);
        uVar8 = uVar13 ^ 0x7fffffff;
        if (uVar10 < uVar8) {
          uVar8 = uVar10;
        }
        FUN_01284394(iVar15,pcVar4,uVar8);
        if (uVar13 == 0x7fffffff) goto LAB_00ec30ac;
        pcVar4 = pcVar4 + uVar8;
        uVar10 = uVar10 - uVar8;
      } while (uVar10 != 0);
      uVar10 = 1;
      pcVar4 = "{";
      iVar15 = *piVar14;
      do {
        uVar13 = *(uint *)(iVar15 + 4);
        uVar8 = uVar13 ^ 0x7fffffff;
        if (uVar10 < uVar8) {
          uVar8 = uVar10;
        }
        FUN_01284394(iVar15,pcVar4,uVar8);
        if (uVar13 == 0x7fffffff) goto LAB_00ec30ac;
        pcVar4 = pcVar4 + uVar8;
        uVar10 = uVar10 - uVar8;
      } while (uVar10 != 0);
      local_34 = piVar14;
      local_38 = 0x100;
      if (iVar12 == -0x80000000) {
        piVar7 = piVar14;
      }
      else {
        iVar12 = FUN_00ebc430(&local_38,"description",0xb,param_4 + 0xb);
        piVar7 = local_34;
        if (iVar12 != 0) {
          return iVar12;
        }
        if ((char)local_38 == '\x01') goto LAB_00ec30c4;
        if (local_38._1_1_ != '\x01') {
          iVar12 = *local_34;
          uVar10 = 1;
          pcVar4 = ",";
          do {
            uVar13 = *(uint *)(iVar12 + 4);
            uVar8 = uVar13 ^ 0x7fffffff;
            if (uVar10 < uVar8) {
              uVar8 = uVar10;
            }
            FUN_01284394(iVar12,pcVar4,uVar8);
            if (uVar13 == 0x7fffffff) goto LAB_00ec30ac;
            pcVar4 = pcVar4 + uVar8;
            uVar10 = uVar10 - uVar8;
          } while (uVar10 != 0);
        }
      }
      local_38._0_2_ = CONCAT11(2,(char)local_38);
      FUN_0096b2b0(&local_30,*piVar7,"content",7);
      if ((char)local_30 == '\x04') {
        iVar12 = *piVar7;
        pcVar4 = ":";
        uVar10 = 1;
        do {
          uVar13 = *(uint *)(iVar12 + 4);
          uVar8 = uVar13 ^ 0x7fffffff;
          if (uVar10 < uVar8) {
            uVar8 = uVar10;
          }
          FUN_01284394(iVar12,pcVar4,uVar8);
          if (uVar13 == 0x7fffffff) goto LAB_00ec30ac;
          pcVar4 = pcVar4 + uVar8;
          uVar10 = uVar10 - uVar8;
        } while (uVar10 != 0);
        iVar15 = param_4[8];
        uVar10 = param_4[9];
        uVar8 = 1;
        iVar12 = param_4[10];
        if (iVar15 == 0) {
          iVar12 = 0;
        }
        pcVar4 = "{";
        iVar9 = *piVar7;
        bVar2 = iVar15 != 0;
        do {
          uVar11 = *(uint *)(iVar9 + 4);
          uVar13 = uVar11 ^ 0x7fffffff;
          if (uVar8 < uVar13) {
            uVar13 = uVar8;
          }
          FUN_01284394(iVar9,pcVar4,uVar13);
          if (uVar11 == 0x7fffffff) goto LAB_00ec30ac;
          pcVar4 = pcVar4 + uVar13;
          uVar8 = uVar8 - uVar13;
        } while (uVar8 != 0);
        uVar8 = 0x100;
        if (iVar12 == 0) {
          uVar8 = 1;
          pcVar4 = "}";
          do {
            uVar11 = *(uint *)(iVar9 + 4);
            uVar13 = uVar11 ^ 0x7fffffff;
            if (uVar8 < uVar13) {
              uVar13 = uVar8;
            }
            FUN_01284394(iVar9,pcVar4,uVar13);
            if (uVar11 == 0x7fffffff) goto LAB_00ec30ac;
            pcVar4 = pcVar4 + uVar13;
            uVar8 = uVar8 - uVar13;
          } while (uVar8 != 0);
          uVar8 = 0;
        }
        iVar9 = 0;
        local_30 = uVar8;
        local_2c = piVar7;
        while (iVar12 != 0) {
          if (!bVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d2ffe0);
          }
          if (iVar9 == 0) {
            uVar8 = 0;
            iVar1 = iVar15;
            for (; uVar10 != 0; uVar10 = uVar10 - 1) {
              iVar1 = *(int *)(iVar1 + 0x1428);
            }
            iVar15 = 0;
          }
          else {
            uVar8 = uVar10;
            iVar1 = iVar9;
          }
          iVar9 = iVar1;
          if (*(ushort *)(iVar1 + 0x1422) <= uVar8) {
            do {
              iVar1 = *(int *)(&DAT_00001398 + iVar9);
              if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb0cc(&DAT_01d2fff0);
              }
              uVar8 = (uint)*(ushort *)(&DAT_00001420 + iVar9);
              iVar15 = iVar15 + 1;
              iVar9 = iVar1;
            } while (*(ushort *)(iVar1 + 0x1422) <= uVar8);
          }
          if (iVar15 == 0) {
            uVar10 = uVar8 + 1;
            iVar9 = iVar1;
          }
          else {
            piVar3 = (int *)(iVar1 + uVar8 * 4 + 0x142c);
            do {
              iVar9 = *piVar3;
              iVar15 = iVar15 + -1;
              piVar3 = (int *)(iVar9 + 0x1428);
            } while (iVar15 != 0);
            uVar10 = 0;
          }
          iVar12 = iVar12 + -1;
          iVar1 = FUN_00ebad94(&local_30,iVar1 + uVar8 * 0xc + 0x139c,uVar8 * 0x1c8 + iVar1);
          bVar2 = true;
          iVar15 = 0;
          if (iVar1 != 0) {
            return iVar1;
          }
        }
        if ((local_30 & 1) != 0) goto LAB_00ec30dc;
        if ((local_30 & 0xff00) != 0) {
          uVar10 = 1;
          iVar12 = *local_2c;
          pcVar4 = "}";
          do {
            uVar13 = *(uint *)(iVar12 + 4);
            uVar8 = uVar13 ^ 0x7fffffff;
            if (uVar10 < uVar8) {
              uVar8 = uVar10;
            }
            FUN_01284394(iVar12,pcVar4,uVar8);
            if (uVar13 == 0x7fffffff) goto LAB_00ec30ac;
            pcVar4 = pcVar4 + uVar8;
            uVar10 = uVar10 - uVar8;
          } while (uVar10 != 0);
        }
        iVar12 = param_4[0xe];
        if ((char)iVar12 != '\x02') {
          iVar15 = *piVar7;
          uVar10 = 1;
          pcVar4 = ",";
          do {
            uVar13 = *(uint *)(iVar15 + 4);
            uVar8 = uVar13 ^ 0x7fffffff;
            if (uVar10 < uVar8) {
              uVar8 = uVar10;
            }
            FUN_01284394(iVar15,pcVar4,uVar8);
            if (uVar13 == 0x7fffffff) goto LAB_00ec30ac;
            pcVar4 = pcVar4 + uVar8;
            uVar10 = uVar10 - uVar8;
          } while (uVar10 != 0);
          local_38._0_2_ = CONCAT11(2,(char)local_38);
          FUN_0096b2b0(&local_30,*piVar7,&DAT_0056fdb8,8);
          if ((char)local_30 != '\x04') goto LAB_00ec2fac;
          iVar15 = *piVar7;
          uVar10 = 1;
          pcVar4 = ":";
          do {
            uVar13 = *(uint *)(iVar15 + 4);
            uVar8 = uVar13 ^ 0x7fffffff;
            if (uVar10 < uVar8) {
              uVar8 = uVar10;
            }
            FUN_01284394(iVar15,pcVar4,uVar8);
            if (uVar13 == 0x7fffffff) goto LAB_00ec30ac;
            pcVar4 = pcVar4 + uVar8;
            uVar10 = uVar10 - uVar8;
          } while (uVar10 != 0);
          iVar12 = FUN_00d92980((char)iVar12,*piVar7);
          if (iVar12 != 0) {
            return iVar12;
          }
        }
        if (*param_4 != 0) {
          iVar12 = FUN_011e01bc(param_4,&local_38);
          if (iVar12 != 0) {
            return iVar12;
          }
          piVar7 = local_34;
        }
        if ((local_38 & 1) != 0) goto LAB_00ec30dc;
        if ((local_38 & 0xff00) != 0) {
          iVar12 = *piVar7;
          uVar10 = 1;
          pcVar4 = "}";
          do {
            uVar13 = *(uint *)(iVar12 + 4);
            uVar8 = uVar13 ^ 0x7fffffff;
            if (uVar10 < uVar8) {
              uVar8 = uVar10;
            }
            FUN_01284394(iVar12,pcVar4,uVar8);
            if (uVar13 == 0x7fffffff) goto LAB_00ec30ac;
            pcVar4 = pcVar4 + uVar8;
            uVar10 = uVar10 - uVar8;
          } while (uVar10 != 0);
        }
        if ((char)local_40 != '\0') {
LAB_00ec30c4:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
        }
        goto LAB_00ec2678;
      }
    }
  }
LAB_00ec2fac:
  uVar10 = local_30;
  piVar14 = local_2c;
LAB_00ec30b8:
  iVar6 = FUN_01966f50(uVar10,piVar14);
  return iVar6;
LAB_00ec26d0:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
  goto LAB_00ec26dc;
LAB_00ec30ac:
  uVar10 = 2;
  piVar14 = &DAT_01d2e7b8;
  goto LAB_00ec30b8;
}

