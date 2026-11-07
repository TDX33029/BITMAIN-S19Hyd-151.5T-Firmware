// FUN_00ebf644 @ 00ebf644 size=1476 calls_out=8 calls_in=0
// strings: a UUID string | assertion failed: !self.only_contains_attribute_certs | a UUID string | description | externalDocs | assertion failed: !self.only_contains_attribute_certs

/* WARNING: Removing unreachable block (ram,0x00ebfb9c) */
/* WARNING: Removing unreachable block (ram,0x00ebf83c) */
/* WARNING: Removing unreachable block (ram,0x00ebfbf0) */

int FUN_00ebf644(char *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_38;
  uint local_30;
  int *local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar1 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar4 = 1;
    pcVar5 = ",";
    iVar9 = *piVar1;
    do {
      uVar6 = *(uint *)(iVar9 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar9,pcVar5,uVar2);
      if (uVar6 == 0x7fffffff) goto LAB_00ebfb64;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
    } while (uVar4 != 0);
  }
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,*piVar1,&DAT_0056da6c,4);
  if ((char)local_30 == '\x04') {
    uVar4 = 1;
    iVar9 = *piVar1;
    pcVar5 = ":";
    do {
      uVar6 = *(uint *)(iVar9 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar9,pcVar5,uVar2);
      if (uVar6 == 0x7fffffff) goto LAB_00ebfb64;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
    } while (uVar4 != 0);
    if (*param_2 != -0x80000000) {
      piVar7 = (int *)param_2[1];
      iVar10 = param_2[2];
      uVar4 = 1;
      iVar9 = *piVar1;
      puVar3 = &DAT_0053340d;
      do {
        uVar6 = *(uint *)(iVar9 + 4);
        uVar2 = uVar6 ^ 0x7fffffff;
        if (uVar4 < uVar2) {
          uVar2 = uVar4;
        }
        FUN_01284394(iVar9,puVar3,uVar2);
        if (uVar6 == 0x7fffffff) goto LAB_00ebfb64;
        puVar3 = puVar3 + uVar2;
        uVar4 = uVar4 - uVar2;
      } while (uVar4 != 0);
      bVar11 = iVar10 != 0;
      local_38 = 0x100;
      if (!bVar11) {
        uVar4 = 1;
        pcVar5 = "]";
        do {
          uVar6 = *(uint *)(iVar9 + 4);
          uVar2 = uVar6 ^ 0x7fffffff;
          if (uVar4 < uVar2) {
            uVar2 = uVar4;
          }
          FUN_01284394(iVar9,pcVar5,uVar2);
          if (uVar6 == 0x7fffffff) goto LAB_00ebfb64;
          pcVar5 = pcVar5 + uVar2;
          uVar4 = uVar4 - uVar2;
        } while (uVar4 != 0);
        local_38 = 0;
      }
      for (piVar8 = piVar7; piVar8 != piVar7 + iVar10 * 0x1c; piVar8 = piVar8 + 0x1c) {
        if (!bVar11) {
          iVar9 = *piVar1;
          uVar4 = 1;
          pcVar5 = ",";
          do {
            uVar6 = *(uint *)(iVar9 + 4);
            uVar2 = uVar6 ^ 0x7fffffff;
            if (uVar4 < uVar2) {
              uVar2 = uVar4;
            }
            FUN_01284394(iVar9,pcVar5,uVar2);
            if (uVar6 == 0x7fffffff) goto LAB_00ebfba8;
            pcVar5 = pcVar5 + uVar2;
            uVar4 = uVar4 - uVar2;
          } while (uVar4 != 0);
        }
        iVar9 = *piVar1;
        uVar4 = 1;
        local_38 = 0x200;
        pcVar5 = "{";
        do {
          uVar6 = *(uint *)(iVar9 + 4);
          uVar2 = uVar6 ^ 0x7fffffff;
          if (uVar4 < uVar2) {
            uVar2 = uVar4;
          }
          FUN_01284394(iVar9,pcVar5,uVar2);
          if (uVar6 == 0x7fffffff) goto LAB_00ebfba8;
          pcVar5 = pcVar5 + uVar2;
          uVar4 = uVar4 - uVar2;
        } while (uVar4 != 0);
        local_30 = 0x100;
        local_2c = piVar1;
        iVar9 = FUN_0096b5ec(&local_30,&DAT_0056ee18,4,piVar8[0x1a],piVar8[0x1b]);
        if (iVar9 != 0) {
          return iVar9;
        }
        if ((piVar8[0x16] != -0x80000000) &&
           (iVar9 = FUN_00ebc430(&local_30,"description",0xb), iVar9 != 0)) {
          return iVar9;
        }
        if ((piVar8[0x13] != -0x80000000) &&
           (iVar9 = FUN_00ec0074(&local_30,"externalDocs",piVar8 + 8), iVar9 != 0)) {
          return iVar9;
        }
        if ((*piVar8 != 0) && (iVar9 = FUN_011e01bc(piVar8,&local_30), iVar9 != 0)) {
          return iVar9;
        }
        if ((local_30 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffc0);
        }
        if ((local_30 & 0xff00) != 0) {
          uVar4 = 1;
          iVar9 = *local_2c;
          pcVar5 = "}";
          do {
            uVar6 = *(uint *)(iVar9 + 4);
            uVar2 = uVar6 ^ 0x7fffffff;
            if (uVar4 < uVar2) {
              uVar2 = uVar4;
            }
            FUN_01284394(iVar9,pcVar5,uVar2);
            if (uVar6 == 0x7fffffff) goto LAB_00ebfba8;
            pcVar5 = pcVar5 + uVar2;
            uVar4 = uVar4 - uVar2;
          } while (uVar4 != 0);
        }
        bVar11 = false;
      }
      if (local_38 == 0) {
        return 0;
      }
      uVar4 = 1;
      iVar9 = *piVar1;
      pcVar5 = "]";
      while( true ) {
        uVar6 = *(uint *)(iVar9 + 4);
        uVar2 = uVar6 ^ 0x7fffffff;
        if (uVar4 < uVar2) {
          uVar2 = uVar4;
        }
        FUN_01284394(iVar9,pcVar5,uVar2);
        if (uVar6 == 0x7fffffff) break;
        pcVar5 = pcVar5 + uVar2;
        uVar4 = uVar4 - uVar2;
        if (uVar4 == 0) {
          return 0;
        }
      }
LAB_00ebfba8:
      iVar9 = FUN_01966f50(2,&DAT_01d2e7b8);
      return iVar9;
    }
    uVar4 = 4;
    iVar9 = *piVar1;
    puVar3 = &DAT_0056d030;
    while( true ) {
      uVar6 = *(uint *)(iVar9 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar9,puVar3,uVar2);
      if (uVar6 == 0x7fffffff) break;
      puVar3 = puVar3 + uVar2;
      uVar4 = uVar4 - uVar2;
      if (uVar4 == 0) {
        return 0;
      }
    }
LAB_00ebfb64:
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
  iVar9 = FUN_01966f50(local_30,local_2c);
  return iVar9;
}

