// FUN_00ec7144 @ 00ec7144 size=2820 calls_out=9 calls_in=0
// strings: a UUID string | components | schemas | a UUID string | responses | a UUID string

/* WARNING: Removing unreachable block (ram,0x00ec78e4) */
/* WARNING: Removing unreachable block (ram,0x00ec798c) */
/* WARNING: Removing unreachable block (ram,0x00ec79a0) */
/* WARNING: Removing unreachable block (ram,0x00ec79b8) */
/* WARNING: Removing unreachable block (ram,0x00ec79bc) */
/* WARNING: Removing unreachable block (ram,0x00ec79cc) */

int FUN_00ec7144(char *param_1,uint *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined4 local_68;
  int *local_64;
  uint local_58;
  undefined4 *local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_30;
  int *local_2c;
  
  if (*param_1 == '\x01') goto LAB_00ec91b4;
  piVar11 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar5 = 1;
    iVar9 = *piVar11;
    pcVar6 = ",";
    do {
      uVar10 = *(uint *)(iVar9 + 4);
      uVar3 = uVar10 ^ 0x7fffffff;
      if (uVar5 < uVar3) {
        uVar3 = uVar5;
      }
      FUN_01284394(iVar9,pcVar6,uVar3);
      if (uVar10 == 0x7fffffff) goto LAB_00ec73e8;
      pcVar6 = pcVar6 + uVar3;
      uVar5 = uVar5 - uVar3;
    } while (uVar5 != 0);
  }
  iVar9 = *piVar11;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_58,iVar9,"components",10);
  if ((char)local_58 != '\x04') {
LAB_00ec7400:
    iVar9 = FUN_01966f50(local_58,local_54);
    return iVar9;
  }
  uVar5 = 1;
  iVar9 = *piVar11;
  pcVar6 = ":";
  do {
    uVar10 = *(uint *)(iVar9 + 4);
    uVar3 = uVar10 ^ 0x7fffffff;
    if (uVar5 < uVar3) {
      uVar3 = uVar5;
    }
    FUN_01284394(iVar9,pcVar6,uVar3);
    if (uVar10 == 0x7fffffff) goto LAB_00ec73e8;
    pcVar6 = pcVar6 + uVar3;
    uVar5 = uVar5 - uVar3;
  } while (uVar5 != 0);
  if ((*param_2 & 1) == 0) {
    uVar5 = 4;
    iVar9 = *piVar11;
    puVar4 = &DAT_0056d030;
    while( true ) {
      uVar10 = *(uint *)(iVar9 + 4);
      uVar3 = uVar10 ^ 0x7fffffff;
      if (uVar5 < uVar3) {
        uVar3 = uVar5;
      }
      FUN_01284394(iVar9,puVar4,uVar3);
      if (uVar10 == 0x7fffffff) break;
      puVar4 = puVar4 + uVar3;
      uVar5 = uVar5 - uVar3;
      if (uVar5 == 0) {
        return 0;
      }
    }
LAB_00ec73e8:
    local_58 = 2;
    local_54 = &DAT_01d2e7b8;
    goto LAB_00ec7400;
  }
  uVar5 = 1;
  iVar9 = *piVar11;
  pcVar6 = "{";
  do {
    uVar10 = *(uint *)(iVar9 + 4);
    uVar3 = uVar10 ^ 0x7fffffff;
    if (uVar5 < uVar3) {
      uVar3 = uVar5;
    }
    FUN_01284394(iVar9,pcVar6,uVar3);
    if (uVar10 == 0x7fffffff) goto LAB_00ec9180;
    pcVar6 = pcVar6 + uVar3;
    uVar5 = uVar5 - uVar3;
  } while (uVar5 != 0);
  local_68 = 0x100;
  local_64 = piVar11;
  if ((param_2[0xc] != 0) && (iVar9 = FUN_00ec9338(&local_68,"schemas",7,param_2 + 10), iVar9 != 0))
  {
    return iVar9;
  }
  piVar11 = local_64;
  uVar5 = param_2[0xf];
  if (uVar5 == 0) {
LAB_00ec7684:
    piVar11 = local_64;
    uVar5 = param_2[0x12];
    if (uVar5 == 0) {
LAB_00ec90dc:
      if ((param_2[2] != 0) && (iVar9 = FUN_011e01bc(param_2 + 2,&local_68), iVar9 != 0)) {
        return iVar9;
      }
      if ((local_68 & 1) != 0) {
LAB_00ec91cc:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffc0);
      }
      if ((local_68 & 0xff00) == 0) {
        return 0;
      }
      uVar5 = 1;
      iVar9 = *local_64;
      pcVar6 = "}";
      while( true ) {
        uVar10 = *(uint *)(iVar9 + 4);
        uVar3 = uVar10 ^ 0x7fffffff;
        if (uVar5 < uVar3) {
          uVar3 = uVar5;
        }
        FUN_01284394(iVar9,pcVar6,uVar3);
        if (uVar10 == 0x7fffffff) break;
        pcVar6 = pcVar6 + uVar3;
        uVar5 = uVar5 - uVar3;
        if (uVar5 == 0) {
          return 0;
        }
      }
LAB_00ec9180:
      uVar5 = 2;
      puVar2 = &DAT_01d2e7b8;
      goto LAB_00ec918c;
    }
    if ((char)local_68 == '\x01') {
LAB_00ec91b4:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
    }
    if (local_68._1_1_ != '\x01') {
      uVar3 = 1;
      iVar9 = *local_64;
      pcVar6 = ",";
      do {
        uVar7 = *(uint *)(iVar9 + 4);
        uVar10 = uVar7 ^ 0x7fffffff;
        if (uVar3 < uVar10) {
          uVar10 = uVar3;
        }
        FUN_01284394(iVar9,pcVar6,uVar10);
        if (uVar7 == 0x7fffffff) goto LAB_00ec9180;
        pcVar6 = pcVar6 + uVar10;
        uVar3 = uVar3 - uVar10;
      } while (uVar3 != 0);
    }
    local_68._0_2_ = CONCAT11(2,(char)local_68);
    FUN_0096b2b0(&local_58,*piVar11,"securitySchemesint32int64doublebinarypropertyNamemapping",0xf);
    if ((char)local_58 == '\x04') {
      uVar3 = 1;
      iVar9 = *piVar11;
      pcVar6 = ":";
      do {
        uVar7 = *(uint *)(iVar9 + 4);
        uVar10 = uVar7 ^ 0x7fffffff;
        if (uVar3 < uVar10) {
          uVar10 = uVar3;
        }
        FUN_01284394(iVar9,pcVar6,uVar10);
        if (uVar7 == 0x7fffffff) goto LAB_00ec9180;
        pcVar6 = pcVar6 + uVar10;
        uVar3 = uVar3 - uVar10;
      } while (uVar3 != 0);
      uVar3 = param_2[0x11];
      uVar7 = 1;
      uVar10 = param_2[0x10];
      iVar9 = *piVar11;
      pcVar6 = "{";
      if (uVar10 == 0) {
        uVar5 = 0;
      }
      do {
        uVar12 = *(uint *)(iVar9 + 4);
        uVar8 = uVar12 ^ 0x7fffffff;
        if (uVar7 < uVar8) {
          uVar8 = uVar7;
        }
        FUN_01284394(iVar9,pcVar6,uVar8);
        if (uVar12 == 0x7fffffff) goto LAB_00ec9180;
        pcVar6 = pcVar6 + uVar8;
        uVar7 = uVar7 - uVar8;
      } while (uVar7 != 0);
      bVar1 = true;
      if (uVar10 == 0) {
        uVar7 = 1;
        pcVar6 = "}";
        do {
          uVar12 = *(uint *)(iVar9 + 4);
          uVar8 = uVar12 ^ 0x7fffffff;
          if (uVar7 < uVar8) {
            uVar8 = uVar7;
          }
          FUN_01284394(iVar9,pcVar6,uVar8);
          if (uVar12 == 0x7fffffff) goto LAB_00ec9180;
          pcVar6 = pcVar6 + uVar8;
          uVar7 = uVar7 - uVar8;
        } while (uVar7 != 0);
        bVar1 = false;
      }
      if (uVar5 == 0) {
        if (bVar1) {
          uVar5 = 1;
          iVar9 = *piVar11;
          pcVar6 = "}";
          do {
            uVar10 = *(uint *)(iVar9 + 4);
            uVar3 = uVar10 ^ 0x7fffffff;
            if (uVar5 < uVar3) {
              uVar3 = uVar5;
            }
            FUN_01284394(iVar9,pcVar6,uVar3);
            if (uVar10 == 0x7fffffff) goto LAB_00ec91a4;
            pcVar6 = pcVar6 + uVar3;
            uVar5 = uVar5 - uVar3;
          } while (uVar5 != 0);
        }
        goto LAB_00ec90dc;
      }
      if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2ffe0);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        uVar10 = *(uint *)(uVar10 + 0x3a8);
      }
      uVar3 = 0;
      iVar9 = 0;
      uVar5 = uVar10;
      if (*(short *)(uVar10 + 0x3a2) == 0) {
        do {
          uVar10 = *(uint *)(uVar5 + 0x318);
          if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d2fff0);
          }
          uVar3 = (uint)*(ushort *)(uVar5 + 0x3a0);
          iVar9 = iVar9 + 1;
          uVar5 = uVar10;
        } while (*(ushort *)(uVar10 + 0x3a2) <= uVar3);
      }
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      }
      iVar9 = uVar10 + uVar3 * 0xc;
      FUN_0096b2b0(&local_58,*piVar11,*(undefined4 *)(iVar9 + 800),*(undefined4 *)(iVar9 + 0x324));
      if ((char)local_58 == '\x04') {
        iVar9 = *piVar11;
        uVar5 = 1;
        pcVar6 = ":";
        while( true ) {
          uVar8 = *(uint *)(iVar9 + 4);
          uVar7 = uVar8 ^ 0x7fffffff;
          if (uVar5 < uVar7) {
            uVar7 = uVar5;
          }
          FUN_01284394(iVar9,pcVar6,uVar7);
          if (uVar8 == 0x7fffffff) break;
          pcVar6 = pcVar6 + uVar7;
          uVar5 = uVar5 - uVar7;
          if (uVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00ec7aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            iVar9 = (*(code *)(&DAT_00ec7ab0 +
                              *(int *)(&DAT_00ec7ab0 + *(int *)(uVar10 + uVar3 * 0x48) * 4)))();
            return iVar9;
          }
        }
LAB_00ec91a4:
        uVar5 = 2;
        puVar2 = &DAT_01d2e7b8;
        goto LAB_00ec918c;
      }
    }
  }
  else {
    if ((char)local_68 == '\x01') goto LAB_00ec91b4;
    if (local_68._1_1_ != '\x01') {
      uVar3 = 1;
      iVar9 = *local_64;
      pcVar6 = ",";
      do {
        uVar7 = *(uint *)(iVar9 + 4);
        uVar10 = uVar7 ^ 0x7fffffff;
        if (uVar3 < uVar10) {
          uVar10 = uVar3;
        }
        FUN_01284394(iVar9,pcVar6,uVar10);
        if (uVar7 == 0x7fffffff) goto LAB_00ec9180;
        pcVar6 = pcVar6 + uVar10;
        uVar3 = uVar3 - uVar10;
      } while (uVar3 != 0);
    }
    local_68._0_2_ = CONCAT11(2,(char)local_68);
    FUN_0096b2b0(&local_58,*piVar11,"responses",9);
    if ((char)local_58 == '\x04') {
      uVar3 = 1;
      iVar9 = *piVar11;
      pcVar6 = ":";
      do {
        uVar7 = *(uint *)(iVar9 + 4);
        uVar10 = uVar7 ^ 0x7fffffff;
        if (uVar3 < uVar10) {
          uVar10 = uVar3;
        }
        FUN_01284394(iVar9,pcVar6,uVar10);
        if (uVar7 == 0x7fffffff) goto LAB_00ec9180;
        pcVar6 = pcVar6 + uVar10;
        uVar3 = uVar3 - uVar10;
      } while (uVar3 != 0);
      uVar3 = param_2[0xd];
      if (uVar3 == 0) {
        uVar5 = 0;
      }
      else {
        local_4c = param_2[0xe];
        local_44 = 0;
        local_54 = (undefined4 *)0x0;
        local_50 = uVar3;
        local_40 = uVar3;
        local_3c = local_4c;
      }
      local_58 = (uint)(uVar3 != 0);
      uVar3 = 1;
      pcVar6 = "{";
      iVar9 = *piVar11;
      local_48 = local_58;
      local_38 = uVar5;
      do {
        uVar7 = *(uint *)(iVar9 + 4);
        uVar10 = uVar7 ^ 0x7fffffff;
        if (uVar3 < uVar10) {
          uVar10 = uVar3;
        }
        FUN_01284394(iVar9,pcVar6,uVar10);
        if (uVar7 == 0x7fffffff) goto LAB_00ec9180;
        pcVar6 = pcVar6 + uVar10;
        uVar3 = uVar3 - uVar10;
      } while (uVar3 != 0);
      uVar3 = 0x100;
      if (uVar5 == 0) {
        uVar5 = 1;
        pcVar6 = "}";
        do {
          uVar10 = *(uint *)(iVar9 + 4);
          uVar3 = uVar10 ^ 0x7fffffff;
          if (uVar5 < uVar3) {
            uVar3 = uVar5;
          }
          FUN_01284394(iVar9,pcVar6,uVar3);
          if (uVar10 == 0x7fffffff) goto LAB_00ec9180;
          pcVar6 = pcVar6 + uVar3;
          uVar5 = uVar5 - uVar3;
        } while (uVar5 != 0);
        uVar3 = 0;
      }
      local_2c = piVar11;
      local_30 = uVar3;
      while( true ) {
        uVar13 = FUN_01ad61b4(&local_58);
        if ((int)uVar13 == 0) break;
        iVar9 = FUN_00ec4e54(&local_30,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
        if (iVar9 != 0) {
          return iVar9;
        }
      }
      if ((local_30 & 1) != 0) goto LAB_00ec91cc;
      if ((local_30 & 0xff00) != 0) {
        uVar5 = 1;
        iVar9 = *local_2c;
        pcVar6 = "}";
        do {
          uVar10 = *(uint *)(iVar9 + 4);
          uVar3 = uVar10 ^ 0x7fffffff;
          if (uVar5 < uVar3) {
            uVar3 = uVar5;
          }
          FUN_01284394(iVar9,pcVar6,uVar3);
          if (uVar10 == 0x7fffffff) goto LAB_00ec9180;
          pcVar6 = pcVar6 + uVar3;
          uVar5 = uVar5 - uVar3;
        } while (uVar5 != 0);
      }
      goto LAB_00ec7684;
    }
  }
  uVar5 = local_58;
  puVar2 = local_54;
LAB_00ec918c:
  iVar9 = FUN_01966f50(uVar5,puVar2);
  return iVar9;
}

