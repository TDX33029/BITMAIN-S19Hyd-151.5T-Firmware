// FUN_00ec46ac @ 00ec46ac size=1380 calls_out=5 calls_in=0
// strings: a UUID string | a UUID string | internal error: entered unreachable code | internal error: entered unreachable code

/* WARNING: Removing unreachable block (ram,0x00ec4be0) */

undefined4 FUN_00ec46ac(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  uint local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar4 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar11 = 1;
    pcVar7 = ",";
    iVar9 = *piVar4;
    do {
      uVar13 = *(uint *)(iVar9 + 4);
      uVar6 = uVar13 ^ 0x7fffffff;
      if (uVar11 < uVar6) {
        uVar6 = uVar11;
      }
      FUN_01284394(iVar9,pcVar7,uVar6);
      if (uVar13 == 0x7fffffff) goto LAB_00ec4ba0;
      pcVar7 = pcVar7 + uVar6;
      uVar11 = uVar11 - uVar6;
    } while (uVar11 != 0);
  }
  iVar9 = *piVar4;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar9,param_2,param_3);
  if ((char)local_30 == '\x04') {
    uVar11 = 1;
    iVar9 = *piVar4;
    pcVar7 = ":";
    do {
      uVar13 = *(uint *)(iVar9 + 4);
      uVar6 = uVar13 ^ 0x7fffffff;
      if (uVar11 < uVar6) {
        uVar6 = uVar11;
      }
      FUN_01284394(iVar9,pcVar7,uVar6);
      if (uVar13 == 0x7fffffff) goto LAB_00ec4ba0;
      pcVar7 = pcVar7 + uVar6;
      uVar11 = uVar11 - uVar6;
    } while (uVar11 != 0);
    piVar14 = (int *)*param_4;
    local_3c = param_4[1];
    uVar11 = 1;
    local_34 = param_4[2];
    if (piVar14 == (int *)0x0) {
      local_34 = 0;
    }
    pcVar7 = "{";
    iVar9 = *piVar4;
    bVar3 = piVar14 != (int *)0x0;
    do {
      uVar13 = *(uint *)(iVar9 + 4);
      uVar6 = uVar13 ^ 0x7fffffff;
      if (uVar11 < uVar6) {
        uVar6 = uVar11;
      }
      FUN_01284394(iVar9,pcVar7,uVar6);
      if (uVar13 == 0x7fffffff) goto LAB_00ec4ba0;
      pcVar7 = pcVar7 + uVar6;
      uVar11 = uVar11 - uVar6;
    } while (uVar11 != 0);
    local_38 = 0x100;
    if (local_34 == 0) {
      uVar11 = 1;
      pcVar7 = "}";
      do {
        uVar13 = *(uint *)(iVar9 + 4);
        uVar6 = uVar13 ^ 0x7fffffff;
        if (uVar11 < uVar6) {
          uVar6 = uVar11;
        }
        FUN_01284394(iVar9,pcVar7,uVar6);
        bVar8 = false;
        if (uVar13 == 0x7fffffff) goto LAB_00ec4ba0;
        pcVar7 = pcVar7 + uVar6;
        uVar11 = uVar11 - uVar6;
      } while (uVar11 != 0);
      local_38 = 0;
    }
    else {
      bVar8 = true;
    }
    puVar1 = &DAT_01d2e7b8;
    piVar12 = (int *)0x0;
    while (local_34 != 0) {
      if (!bVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2ffe0);
      }
      if (piVar12 == (int *)0x0) {
        uVar11 = 0;
        piVar12 = piVar14;
        for (; local_3c != 0; local_3c = local_3c - 1) {
          piVar12 = (int *)piVar12[0x44];
        }
        piVar14 = (int *)0x0;
      }
      else {
        uVar11 = local_3c;
      }
      piVar15 = piVar12;
      if (*(ushort *)((int)piVar12 + 0x10e) <= uVar11) {
        do {
          piVar12 = (int *)*piVar15;
          if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d2fff0);
          }
          uVar11 = (uint)*(ushort *)(piVar15 + 0x43);
          piVar14 = (int *)((int)piVar14 + 1);
          piVar15 = piVar12;
        } while (*(ushort *)((int)piVar12 + 0x10e) <= uVar11);
      }
      if (piVar14 == (int *)0x0) {
        local_3c = uVar11 + 1;
        piVar15 = piVar12;
      }
      else {
        piVar5 = piVar12 + uVar11 + 0x45;
        do {
          piVar15 = (int *)*piVar5;
          piVar14 = (int *)((int)piVar14 + -1);
          piVar5 = piVar15 + 0x44;
        } while (piVar14 != (int *)0x0);
        local_3c = 0;
      }
      if (!bVar8) {
        uVar6 = 1;
        iVar9 = *piVar4;
        pcVar7 = ",";
        do {
          uVar10 = *(uint *)(iVar9 + 4);
          uVar13 = uVar10 ^ 0x7fffffff;
          if (uVar6 < uVar13) {
            uVar13 = uVar6;
          }
          FUN_01284394(iVar9,pcVar7,uVar13);
          if (uVar10 == 0x7fffffff) goto LAB_00ec4bb0;
          pcVar7 = pcVar7 + uVar13;
          uVar6 = uVar6 - uVar13;
        } while (uVar6 != 0);
      }
      FUN_0096b2b0(&local_30,*piVar4,piVar12[uVar11 * 3 + 2],piVar12[uVar11 * 3 + 3]);
      if ((char)local_30 != '\x04') goto LAB_00ec4b94;
      iVar9 = *piVar4;
      local_34 = local_34 + -1;
      uVar6 = 1;
      local_38 = 0x200;
      pcVar7 = ":";
      do {
        uVar10 = *(uint *)(iVar9 + 4);
        uVar13 = uVar10 ^ 0x7fffffff;
        if (uVar6 < uVar13) {
          uVar13 = uVar6;
        }
        FUN_01284394(iVar9,pcVar7,uVar13);
        if (uVar10 == 0x7fffffff) goto LAB_00ec4bb0;
        pcVar7 = pcVar7 + uVar13;
        uVar6 = uVar6 - uVar13;
      } while (uVar6 != 0);
      FUN_0096b2b0(&local_30,*piVar4,piVar12[uVar11 * 3 + 0x23],piVar12[uVar11 * 3 + 0x24]);
      if ((char)local_30 != '\x04') goto LAB_00ec4b94;
      piVar14 = (int *)0x0;
      bVar3 = true;
      bVar8 = false;
      piVar12 = piVar15;
    }
    if (local_38 != 0) {
      uVar11 = 1;
      pcVar7 = "}";
      iVar9 = *piVar4;
      do {
        uVar13 = *(uint *)(iVar9 + 4);
        uVar6 = uVar13 ^ 0x7fffffff;
        if (uVar11 < uVar6) {
          uVar6 = uVar11;
        }
        FUN_01284394(iVar9,pcVar7,uVar6);
        if (uVar13 == 0x7fffffff) goto LAB_00ec4bb0;
        pcVar7 = pcVar7 + uVar6;
        uVar11 = uVar11 - uVar6;
      } while (uVar11 != 0);
    }
    return 0;
  }
LAB_00ec4b94:
  puVar1 = local_2c;
LAB_00ec4bbc:
  uVar2 = FUN_01966f50(local_30,puVar1);
  return uVar2;
LAB_00ec4ba0:
  local_30 = 2;
  puVar1 = &DAT_01d2e7b8;
  goto LAB_00ec4bbc;
LAB_00ec4bb0:
  local_30 = 2;
  goto LAB_00ec4bbc;
}

