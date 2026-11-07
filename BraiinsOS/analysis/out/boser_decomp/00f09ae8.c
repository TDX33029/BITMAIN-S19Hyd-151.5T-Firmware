// FUN_00f09ae8 @ 00f09ae8 size=928 calls_out=5 calls_in=0
// strings: a UUID string | prefixItems | assertion failed: !self.only_contains_attribute_certs | a UUID string | assertion failed: !self.only_contains_attribute_certs | internal error: entered unreachable code

/* WARNING: Removing unreachable block (ram,0x00f09e58) */

int FUN_00f09ae8(char *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar1 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar2 = 1;
    pcVar7 = ",";
    iVar3 = *piVar1;
    do {
      uVar9 = *(uint *)(iVar3 + 4);
      uVar5 = uVar9 ^ 0x7fffffff;
      if (uVar2 < uVar5) {
        uVar5 = uVar2;
      }
      FUN_01284394(iVar3,pcVar7,uVar5);
      if (uVar9 == 0x7fffffff) goto LAB_00f09e1c;
      pcVar7 = pcVar7 + uVar5;
      uVar2 = uVar2 - uVar5;
    } while (uVar2 != 0);
  }
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,*piVar1,"prefixItems",0xb);
  if ((char)local_30 == '\x04') {
    uVar2 = 1;
    iVar3 = *piVar1;
    pcVar7 = ":";
    do {
      uVar9 = *(uint *)(iVar3 + 4);
      uVar5 = uVar9 ^ 0x7fffffff;
      if (uVar2 < uVar5) {
        uVar5 = uVar2;
      }
      FUN_01284394(iVar3,pcVar7,uVar5);
      if (uVar9 == 0x7fffffff) goto LAB_00f09e1c;
      pcVar7 = pcVar7 + uVar5;
      uVar2 = uVar2 - uVar5;
    } while (uVar2 != 0);
    iVar4 = *(int *)(param_2 + 8);
    iVar10 = *(int *)(param_2 + 4);
    uVar2 = 1;
    iVar3 = iVar4 * 0x178 + iVar10;
    iVar8 = *piVar1;
    puVar6 = &DAT_0053340d;
    do {
      uVar9 = *(uint *)(iVar8 + 4);
      uVar5 = uVar9 ^ 0x7fffffff;
      if (uVar2 < uVar5) {
        uVar5 = uVar2;
      }
      FUN_01284394(iVar8,puVar6,uVar5);
      if (uVar9 == 0x7fffffff) goto LAB_00f09e1c;
      puVar6 = puVar6 + uVar5;
      uVar2 = uVar2 - uVar5;
    } while (uVar2 != 0);
    if (iVar4 == 0) {
      uVar2 = 1;
      pcVar7 = "]";
      do {
        uVar9 = *(uint *)(iVar8 + 4);
        uVar5 = uVar9 ^ 0x7fffffff;
        if (uVar2 < uVar5) {
          uVar5 = uVar2;
        }
        FUN_01284394(iVar8,pcVar7,uVar5);
        if (uVar9 == 0x7fffffff) goto LAB_00f09e1c;
        pcVar7 = pcVar7 + uVar5;
        uVar2 = uVar2 - uVar5;
      } while (uVar2 != 0);
    }
    else {
      iVar4 = 0x100;
      do {
        if (iVar4 != 0x100) {
          iVar4 = *piVar1;
          uVar2 = 1;
          pcVar7 = ",";
          do {
            uVar9 = *(uint *)(iVar4 + 4);
            uVar5 = uVar9 ^ 0x7fffffff;
            if (uVar2 < uVar5) {
              uVar5 = uVar2;
            }
            FUN_01284394(iVar4,pcVar7,uVar5);
            if (uVar9 == 0x7fffffff) goto LAB_00f09e48;
            pcVar7 = pcVar7 + uVar5;
            uVar2 = uVar2 - uVar5;
          } while (uVar2 != 0);
        }
        iVar4 = FUN_00f0841c(iVar10,piVar1);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar10 = iVar10 + 0x178;
        iVar4 = 0x200;
      } while (iVar10 != iVar3);
      uVar2 = 1;
      iVar3 = *piVar1;
      pcVar7 = "]";
      do {
        uVar9 = *(uint *)(iVar3 + 4);
        uVar5 = uVar9 ^ 0x7fffffff;
        if (uVar2 < uVar5) {
          uVar5 = uVar2;
        }
        FUN_01284394(iVar3,pcVar7,uVar5);
        if (uVar9 == 0x7fffffff) goto LAB_00f09e48;
        pcVar7 = pcVar7 + uVar5;
        uVar2 = uVar2 - uVar5;
      } while (uVar2 != 0);
    }
    return 0;
  }
LAB_00f09e4c:
  iVar3 = FUN_01966f50(local_30,local_2c);
  return iVar3;
LAB_00f09e1c:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
  goto LAB_00f09e4c;
LAB_00f09e48:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
  goto LAB_00f09e4c;
}

