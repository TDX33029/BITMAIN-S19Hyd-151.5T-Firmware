// FUN_00ec14ac @ 00ec14ac size=1072 calls_out=5 calls_in=1
// strings: a UUID string | assertion failed: !self.only_contains_attribute_certs | a UUID string | assertion failed: !self.only_contains_attribute_certs | internal error: entered unreachable code | internal error: entered unreachable code

/* WARNING: Removing unreachable block (ram,0x00ec18c4) */
/* WARNING: Removing unreachable block (ram,0x00ec16ac) */

int FUN_00ec14ac(char *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
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
    uVar7 = 1;
    pcVar4 = ",";
    iVar6 = *piVar2;
    do {
      uVar8 = *(uint *)(iVar6 + 4);
      uVar3 = uVar8 ^ 0x7fffffff;
      if (uVar7 < uVar3) {
        uVar3 = uVar7;
      }
      FUN_01284394(iVar6,pcVar4,uVar3);
      if (uVar8 == 0x7fffffff) goto LAB_00ec1858;
      pcVar4 = pcVar4 + uVar3;
      uVar7 = uVar7 - uVar3;
    } while (uVar7 != 0);
  }
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,*piVar2,param_2,7);
  if ((char)local_30 == '\x04') {
    uVar7 = 1;
    iVar6 = *piVar2;
    pcVar4 = ":";
    do {
      uVar8 = *(uint *)(iVar6 + 4);
      uVar3 = uVar8 ^ 0x7fffffff;
      if (uVar7 < uVar3) {
        uVar3 = uVar7;
      }
      FUN_01284394(iVar6,pcVar4,uVar3);
      if (uVar8 == 0x7fffffff) goto LAB_00ec1858;
      pcVar4 = pcVar4 + uVar3;
      uVar7 = uVar7 - uVar3;
    } while (uVar7 != 0);
    if (*param_3 == -0x80000000) {
      uVar7 = 4;
      iVar6 = *piVar2;
      puVar5 = &DAT_0056d030;
      while( true ) {
        uVar8 = *(uint *)(iVar6 + 4);
        uVar3 = uVar8 ^ 0x7fffffff;
        if (uVar7 < uVar3) {
          uVar3 = uVar7;
        }
        FUN_01284394(iVar6,puVar5,uVar3);
        if (uVar8 == 0x7fffffff) break;
        puVar5 = puVar5 + uVar3;
        uVar7 = uVar7 - uVar3;
        if (uVar7 == 0) {
          return 0;
        }
      }
LAB_00ec1858:
      local_30 = 2;
      local_2c = &DAT_01d2e7b8;
    }
    else {
      iVar11 = param_3[2];
      uVar7 = 1;
      iVar6 = param_3[1];
      iVar9 = *piVar2;
      puVar5 = &DAT_0053340d;
      do {
        uVar8 = *(uint *)(iVar9 + 4);
        uVar3 = uVar8 ^ 0x7fffffff;
        if (uVar7 < uVar3) {
          uVar3 = uVar7;
        }
        FUN_01284394(iVar9,puVar5,uVar3);
        if (uVar8 == 0x7fffffff) goto LAB_00ec1858;
        puVar5 = puVar5 + uVar3;
        uVar7 = uVar7 - uVar3;
      } while (uVar7 != 0);
      iVar12 = 0x100;
      if (iVar11 == 0) {
        uVar7 = 1;
        pcVar4 = "]";
        do {
          uVar8 = *(uint *)(iVar9 + 4);
          uVar3 = uVar8 ^ 0x7fffffff;
          if (uVar7 < uVar3) {
            uVar3 = uVar7;
          }
          FUN_01284394(iVar9,pcVar4,uVar3);
          bVar10 = false;
          if (uVar8 == 0x7fffffff) goto LAB_00ec1858;
          pcVar4 = pcVar4 + uVar3;
          uVar7 = uVar7 - uVar3;
        } while (uVar7 != 0);
        iVar12 = 0;
      }
      else {
        bVar10 = true;
      }
      iVar9 = iVar6;
      while (iVar9 != iVar6 + iVar11 * 0x48) {
        if (!bVar10) {
          uVar7 = 1;
          iVar12 = *piVar2;
          pcVar4 = ",";
          do {
            uVar8 = *(uint *)(iVar12 + 4);
            uVar3 = uVar8 ^ 0x7fffffff;
            if (uVar7 < uVar3) {
              uVar3 = uVar7;
            }
            FUN_01284394(iVar12,pcVar4,uVar3);
            if (uVar8 == 0x7fffffff) goto LAB_00ec18a4;
            pcVar4 = pcVar4 + uVar3;
            uVar7 = uVar7 - uVar3;
          } while (uVar7 != 0);
        }
        iVar12 = 0x200;
        iVar1 = FUN_00ec3ce8(iVar9,piVar2);
        bVar10 = false;
        iVar9 = iVar9 + 0x48;
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      if (iVar12 == 0) {
        return 0;
      }
      uVar7 = 1;
      pcVar4 = "]";
      iVar6 = *piVar2;
      while( true ) {
        uVar8 = *(uint *)(iVar6 + 4);
        uVar3 = uVar8 ^ 0x7fffffff;
        if (uVar7 < uVar3) {
          uVar3 = uVar7;
        }
        FUN_01284394(iVar6,pcVar4,uVar3);
        if (uVar8 == 0x7fffffff) break;
        pcVar4 = pcVar4 + uVar3;
        uVar7 = uVar7 - uVar3;
        if (uVar7 == 0) {
          return 0;
        }
      }
LAB_00ec18a4:
      local_30 = 2;
      local_2c = &DAT_01d2e7b8;
    }
  }
  iVar6 = FUN_01966f50(local_30,local_2c);
  return iVar6;
}

