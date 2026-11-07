// FUN_00f0963c @ 00f0963c size=1108 calls_out=5 calls_in=1
// strings: a UUID string | assertion failed: !self.only_contains_attribute_certs | a UUID string | assertion failed: !self.only_contains_attribute_certs | internal error: entered unreachable code | internal error: entered unreachable code

/* WARNING: Removing unreachable block (ram,0x00f09a78) */
/* WARNING: Removing unreachable block (ram,0x00f098cc) */

int FUN_00f0963c(char *param_1,uint *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined *puVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar2 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar5 = 1;
    pcVar7 = ",";
    iVar11 = *piVar2;
    do {
      uVar8 = *(uint *)(iVar11 + 4);
      uVar3 = uVar8 ^ 0x7fffffff;
      if (uVar5 < uVar3) {
        uVar3 = uVar5;
      }
      FUN_01284394(iVar11,pcVar7,uVar3);
      if (uVar8 == 0x7fffffff) goto LAB_00f09a18;
      pcVar7 = pcVar7 + uVar3;
      uVar5 = uVar5 - uVar3;
    } while (uVar5 != 0);
  }
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,*piVar2,&DAT_0056df8c,4);
  if ((char)local_30 == '\x04') {
    uVar5 = 1;
    iVar11 = *piVar2;
    pcVar7 = ":";
    do {
      uVar8 = *(uint *)(iVar11 + 4);
      uVar3 = uVar8 ^ 0x7fffffff;
      if (uVar5 < uVar3) {
        uVar3 = uVar5;
      }
      FUN_01284394(iVar11,pcVar7,uVar3);
      if (uVar8 == 0x7fffffff) goto LAB_00f09a18;
      pcVar7 = pcVar7 + uVar3;
      uVar5 = uVar5 - uVar3;
    } while (uVar5 != 0);
    uVar5 = 1;
    if ((int)*param_2 < 0) {
      uVar5 = *param_2 ^ 0x80000000;
    }
    if (uVar5 == 0) {
      iVar11 = FUN_00f0c060((char)param_2[1],*piVar2);
      return iVar11;
    }
    if (uVar5 == 1) {
      uVar5 = 1;
      puVar1 = (undefined1 *)param_2[1];
      uVar3 = param_2[2];
      puVar6 = &DAT_0053340d;
      iVar11 = *piVar2;
      do {
        uVar9 = *(uint *)(iVar11 + 4);
        uVar8 = uVar9 ^ 0x7fffffff;
        if (uVar5 < uVar8) {
          uVar8 = uVar5;
        }
        FUN_01284394(iVar11,puVar6,uVar8);
        if (uVar9 == 0x7fffffff) goto LAB_00f09a18;
        puVar6 = puVar6 + uVar8;
        uVar5 = uVar5 - uVar8;
      } while (uVar5 != 0);
      iVar12 = 0x100;
      if (uVar3 == 0) {
        uVar5 = 1;
        pcVar7 = "]";
        do {
          uVar9 = *(uint *)(iVar11 + 4);
          uVar8 = uVar9 ^ 0x7fffffff;
          if (uVar5 < uVar8) {
            uVar8 = uVar5;
          }
          FUN_01284394(iVar11,pcVar7,uVar8);
          bVar10 = false;
          if (uVar9 == 0x7fffffff) goto LAB_00f09a18;
          pcVar7 = pcVar7 + uVar8;
          uVar5 = uVar5 - uVar8;
        } while (uVar5 != 0);
        iVar12 = 0;
      }
      else {
        bVar10 = true;
      }
      puVar4 = puVar1;
      while (puVar4 != puVar1 + uVar3) {
        if (!bVar10) {
          uVar5 = 1;
          iVar11 = *piVar2;
          pcVar7 = ",";
          do {
            uVar9 = *(uint *)(iVar11 + 4);
            uVar8 = uVar9 ^ 0x7fffffff;
            if (uVar5 < uVar8) {
              uVar8 = uVar5;
            }
            FUN_01284394(iVar11,pcVar7,uVar8);
            if (uVar9 == 0x7fffffff) goto LAB_00f09a58;
            pcVar7 = pcVar7 + uVar8;
            uVar5 = uVar5 - uVar8;
          } while (uVar5 != 0);
        }
        iVar12 = 0x200;
        iVar11 = FUN_00f0c060(*puVar4,*piVar2);
        bVar10 = false;
        puVar4 = puVar4 + 1;
        if (iVar11 != 0) {
          return iVar11;
        }
      }
      if (iVar12 == 0) {
        return 0;
      }
      uVar5 = 1;
      pcVar7 = "]";
      iVar11 = *piVar2;
      while( true ) {
        uVar8 = *(uint *)(iVar11 + 4);
        uVar3 = uVar8 ^ 0x7fffffff;
        if (uVar5 < uVar3) {
          uVar3 = uVar5;
        }
        FUN_01284394(iVar11,pcVar7,uVar3);
        if (uVar8 == 0x7fffffff) break;
        pcVar7 = pcVar7 + uVar3;
        uVar5 = uVar5 - uVar3;
        if (uVar5 == 0) {
          return 0;
        }
      }
LAB_00f09a58:
      local_30 = 2;
      local_2c = &DAT_01d2e7b8;
    }
    else {
      uVar5 = 4;
      iVar11 = *piVar2;
      puVar6 = &DAT_0056d030;
      while( true ) {
        uVar8 = *(uint *)(iVar11 + 4);
        uVar3 = uVar8 ^ 0x7fffffff;
        if (uVar5 < uVar3) {
          uVar3 = uVar5;
        }
        FUN_01284394(iVar11,puVar6,uVar3);
        if (uVar8 == 0x7fffffff) break;
        puVar6 = puVar6 + uVar3;
        uVar5 = uVar5 - uVar3;
        if (uVar5 == 0) {
          return 0;
        }
      }
LAB_00f09a18:
      local_30 = 2;
      local_2c = &DAT_01d2e7b8;
    }
  }
  iVar11 = FUN_01966f50(local_30,local_2c);
  return iVar11;
}

