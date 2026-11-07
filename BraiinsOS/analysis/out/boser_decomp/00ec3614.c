// FUN_00ec3614 @ 00ec3614 size=1632 calls_out=6 calls_in=1
// strings: a UUID string | assertion failed: !self.only_contains_attribute_certs | a UUID string | a UUID string | assertion failed: !self.only_contains_attribute_certs | internal error: entered unreachable code

/* WARNING: Removing unreachable block (ram,0x00ec3c40) */
/* WARNING: Removing unreachable block (ram,0x00ec3808) */
/* WARNING: Removing unreachable block (ram,0x00ec3c5c) */

int FUN_00ec3614(char *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  undefined8 uVar14;
  int local_60;
  uint local_58;
  undefined4 *local_54;
  int local_50;
  int local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar11 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar7 = 1;
    iVar3 = *piVar11;
    pcVar8 = ",";
    do {
      uVar10 = *(uint *)(iVar3 + 4);
      uVar5 = uVar10 ^ 0x7fffffff;
      if (uVar7 < uVar5) {
        uVar5 = uVar7;
      }
      FUN_01284394(iVar3,pcVar8,uVar5);
      if (uVar10 == 0x7fffffff) goto LAB_00ec3b88;
      pcVar8 = pcVar8 + uVar5;
      uVar7 = uVar7 - uVar5;
    } while (uVar7 != 0);
  }
  iVar3 = *piVar11;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_58,iVar3,param_2,8);
  if ((char)local_58 == '\x04') {
    uVar7 = 1;
    iVar3 = *piVar11;
    pcVar8 = ":";
    do {
      uVar10 = *(uint *)(iVar3 + 4);
      uVar5 = uVar10 ^ 0x7fffffff;
      if (uVar7 < uVar5) {
        uVar5 = uVar7;
      }
      FUN_01284394(iVar3,pcVar8,uVar5);
      if (uVar10 == 0x7fffffff) goto LAB_00ec3b88;
      pcVar8 = pcVar8 + uVar5;
      uVar7 = uVar7 - uVar5;
    } while (uVar7 != 0);
    if (*param_3 != -0x80000000) {
      iVar3 = param_3[2];
      uVar7 = 1;
      piVar1 = (int *)param_3[1];
      iVar12 = *piVar11;
      puVar4 = &DAT_0053340d;
      do {
        uVar10 = *(uint *)(iVar12 + 4);
        uVar5 = uVar10 ^ 0x7fffffff;
        if (uVar7 < uVar5) {
          uVar5 = uVar7;
        }
        FUN_01284394(iVar12,puVar4,uVar5);
        if (uVar10 == 0x7fffffff) goto LAB_00ec3b88;
        puVar4 = puVar4 + uVar5;
        uVar7 = uVar7 - uVar5;
      } while (uVar7 != 0);
      local_60 = 0x100;
      if (iVar3 == 0) {
        uVar7 = 1;
        pcVar8 = "]";
        do {
          uVar10 = *(uint *)(iVar12 + 4);
          uVar5 = uVar10 ^ 0x7fffffff;
          if (uVar7 < uVar5) {
            uVar5 = uVar7;
          }
          FUN_01284394(iVar12,pcVar8,uVar5);
          bVar6 = false;
          if (uVar10 == 0x7fffffff) goto LAB_00ec3b88;
          pcVar8 = pcVar8 + uVar5;
          uVar7 = uVar7 - uVar5;
        } while (uVar7 != 0);
        local_60 = 0;
      }
      else {
        bVar6 = true;
      }
      for (piVar13 = piVar1; piVar13 != piVar1 + iVar3 * 3; piVar13 = piVar13 + 3) {
        if (!bVar6) {
          iVar12 = *piVar11;
          uVar7 = 1;
          pcVar8 = ",";
          do {
            uVar10 = *(uint *)(iVar12 + 4);
            uVar5 = uVar10 ^ 0x7fffffff;
            if (uVar7 < uVar5) {
              uVar5 = uVar7;
            }
            FUN_01284394(iVar12,pcVar8,uVar5);
            if (uVar10 == 0x7fffffff) goto LAB_00ec3b80;
            pcVar8 = pcVar8 + uVar5;
            uVar7 = uVar7 - uVar5;
          } while (uVar7 != 0);
        }
        iVar12 = *piVar11;
        uVar7 = 1;
        local_60 = 0x200;
        pcVar8 = "{";
        do {
          uVar10 = *(uint *)(iVar12 + 4);
          uVar5 = uVar10 ^ 0x7fffffff;
          if (uVar7 < uVar5) {
            uVar5 = uVar7;
          }
          FUN_01284394(iVar12,pcVar8,uVar5);
          if (uVar10 == 0x7fffffff) goto LAB_00ec3b80;
          pcVar8 = pcVar8 + uVar5;
          uVar7 = uVar7 - uVar5;
        } while (uVar7 != 0);
        iVar12 = *piVar13;
        if (iVar12 == 0) {
          local_38 = 0;
        }
        else {
          local_38 = piVar13[2];
          local_4c = piVar13[1];
          local_44 = 0;
          local_54 = (undefined4 *)0x0;
          local_50 = iVar12;
          local_40 = iVar12;
          local_3c = local_4c;
        }
        local_58 = (uint)(iVar12 != 0);
        bVar6 = true;
        local_48 = local_58;
        while( true ) {
          uVar14 = FUN_01ad608c(&local_58);
          iVar2 = (int)((ulonglong)uVar14 >> 0x20);
          iVar12 = (int)uVar14;
          if (iVar12 == 0) break;
          if (!bVar6) {
            iVar9 = *piVar11;
            uVar7 = 1;
            pcVar8 = ",";
            do {
              uVar10 = *(uint *)(iVar9 + 4);
              uVar5 = uVar10 ^ 0x7fffffff;
              if (uVar7 < uVar5) {
                uVar5 = uVar7;
              }
              FUN_01284394(iVar9,pcVar8,uVar5);
              if (uVar10 == 0x7fffffff) goto LAB_00ec3b80;
              pcVar8 = pcVar8 + uVar5;
              uVar7 = uVar7 - uVar5;
            } while (uVar7 != 0);
          }
          FUN_0096b2b0(&local_30,*piVar11,*(undefined4 *)(iVar12 + 4),*(undefined4 *)(iVar12 + 8));
          if ((char)local_30 != '\x04') goto LAB_00ec3c18;
          iVar12 = *piVar11;
          uVar7 = 1;
          pcVar8 = ":";
          do {
            uVar10 = *(uint *)(iVar12 + 4);
            uVar5 = uVar10 ^ 0x7fffffff;
            if (uVar7 < uVar5) {
              uVar5 = uVar7;
            }
            FUN_01284394(iVar12,pcVar8,uVar5);
            if (uVar10 == 0x7fffffff) goto LAB_00ec3b80;
            pcVar8 = pcVar8 + uVar5;
            uVar7 = uVar7 - uVar5;
          } while (uVar7 != 0);
          iVar12 = FUN_00ebfc84(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),*piVar11);
          bVar6 = false;
          if (iVar12 != 0) {
            return iVar12;
          }
        }
        iVar12 = *piVar11;
        uVar7 = 1;
        pcVar8 = "}";
        do {
          uVar10 = *(uint *)(iVar12 + 4);
          uVar5 = uVar10 ^ 0x7fffffff;
          if (uVar7 < uVar5) {
            uVar5 = uVar7;
          }
          FUN_01284394(iVar12,pcVar8,uVar5);
          if (uVar10 == 0x7fffffff) goto LAB_00ec3b80;
          pcVar8 = pcVar8 + uVar5;
          uVar7 = uVar7 - uVar5;
        } while (uVar7 != 0);
        bVar6 = false;
      }
      if (local_60 == 0) {
        return 0;
      }
      uVar7 = 1;
      iVar3 = *piVar11;
      pcVar8 = "]";
      while( true ) {
        uVar10 = *(uint *)(iVar3 + 4);
        uVar5 = uVar10 ^ 0x7fffffff;
        if (uVar7 < uVar5) {
          uVar5 = uVar7;
        }
        FUN_01284394(iVar3,pcVar8,uVar5);
        if (uVar10 == 0x7fffffff) break;
        pcVar8 = pcVar8 + uVar5;
        uVar7 = uVar7 - uVar5;
        if (uVar7 == 0) {
          return 0;
        }
      }
LAB_00ec3b80:
      local_30 = 2;
      local_2c = &DAT_01d2e7b8;
LAB_00ec3c18:
      iVar3 = FUN_01966f50(local_30,local_2c);
      return iVar3;
    }
    uVar7 = 4;
    iVar3 = *piVar11;
    puVar4 = &DAT_0056d030;
    while( true ) {
      uVar10 = *(uint *)(iVar3 + 4);
      uVar5 = uVar10 ^ 0x7fffffff;
      if (uVar7 < uVar5) {
        uVar5 = uVar7;
      }
      FUN_01284394(iVar3,puVar4,uVar5);
      if (uVar10 == 0x7fffffff) break;
      puVar4 = puVar4 + uVar5;
      uVar7 = uVar7 - uVar5;
      if (uVar7 == 0) {
        return 0;
      }
    }
LAB_00ec3b88:
    local_58 = 2;
    local_54 = &DAT_01d2e7b8;
  }
  iVar3 = FUN_01966f50(local_58,local_54);
  return iVar3;
}

