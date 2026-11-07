// FUN_00ebc674 @ 00ebc674 size=1820 calls_out=7 calls_in=2
// strings: a UUID string | headers | a UUID string | schemaOneOfMultipleValidOneOfNotValidPropertyNamesUnevaluatedPropertiesUniqueItems | description | internal error: entered unreachable code

/* WARNING: Removing unreachable block (ram,0x00ebcce4) */
/* WARNING: Removing unreachable block (ram,0x00ebcd60) */

int FUN_00ebc674(char *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint local_48;
  int local_44;
  int local_40;
  uint local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar1 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar3 = 1;
    pcVar8 = ",";
    iVar12 = *piVar1;
    do {
      uVar4 = *(uint *)(iVar12 + 4);
      uVar6 = uVar4 ^ 0x7fffffff;
      if (uVar3 < uVar6) {
        uVar6 = uVar3;
      }
      FUN_01284394(iVar12,pcVar8,uVar6);
      if (uVar4 == 0x7fffffff) goto LAB_00ebcce8;
      pcVar8 = pcVar8 + uVar6;
      uVar3 = uVar3 - uVar6;
    } while (uVar3 != 0);
  }
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,*piVar1,"headers",7);
  if ((char)local_30 == '\x04') {
    iVar12 = *piVar1;
    uVar3 = 1;
    pcVar8 = ":";
    do {
      uVar4 = *(uint *)(iVar12 + 4);
      uVar6 = uVar4 ^ 0x7fffffff;
      if (uVar3 < uVar6) {
        uVar6 = uVar3;
      }
      FUN_01284394(iVar12,pcVar8,uVar6);
      if (uVar4 == 0x7fffffff) goto LAB_00ebcce8;
      pcVar8 = pcVar8 + uVar6;
      uVar3 = uVar3 - uVar6;
    } while (uVar3 != 0);
    local_48 = param_2[1];
    uVar3 = 1;
    iVar12 = *param_2;
    local_40 = param_2[2];
    pcVar8 = "{";
    if (iVar12 == 0) {
      local_40 = 0;
    }
    bVar10 = iVar12 != 0;
    iVar9 = *piVar1;
    do {
      uVar4 = *(uint *)(iVar9 + 4);
      uVar6 = uVar4 ^ 0x7fffffff;
      if (uVar3 < uVar6) {
        uVar6 = uVar3;
      }
      FUN_01284394(iVar9,pcVar8,uVar6);
      if (uVar4 == 0x7fffffff) goto LAB_00ebcce8;
      pcVar8 = pcVar8 + uVar6;
      uVar3 = uVar3 - uVar6;
    } while (uVar3 != 0);
    local_44 = 0x100;
    if (local_40 == 0) {
      uVar3 = 1;
      pcVar8 = "}";
      do {
        uVar4 = *(uint *)(iVar9 + 4);
        uVar6 = uVar4 ^ 0x7fffffff;
        if (uVar3 < uVar6) {
          uVar6 = uVar3;
        }
        FUN_01284394(iVar9,pcVar8,uVar6);
        bVar11 = false;
        if (uVar4 == 0x7fffffff) goto LAB_00ebcce8;
        pcVar8 = pcVar8 + uVar6;
        uVar3 = uVar3 - uVar6;
      } while (uVar3 != 0);
      local_44 = 0;
    }
    else {
      bVar11 = true;
    }
    iVar9 = 0;
    while (local_40 != 0) {
      if (!bVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2ffe0);
      }
      if (iVar9 == 0) {
        uVar3 = 0;
        iVar9 = iVar12;
        for (; local_48 != 0; local_48 = local_48 - 1) {
          iVar9 = *(int *)(iVar9 + 0x1168);
        }
        iVar12 = 0;
      }
      else {
        uVar3 = local_48;
      }
      if (uVar3 < *(ushort *)(iVar9 + 0x1162)) {
        iVar13 = iVar9;
      }
      else {
        do {
          iVar13 = *(int *)(iVar9 + 0x10d8);
          if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d2fff0);
          }
          uVar3 = (uint)*(ushort *)(iVar9 + 0x1160);
          iVar12 = iVar12 + 1;
          iVar9 = iVar13;
        } while (*(ushort *)(iVar13 + 0x1162) <= uVar3);
      }
      if (iVar12 == 0) {
        local_48 = uVar3 + 1;
        iVar9 = iVar13;
      }
      else {
        piVar2 = (int *)(iVar13 + uVar3 * 4 + 0x116c);
        do {
          iVar9 = *piVar2;
          iVar12 = iVar12 + -1;
          piVar2 = (int *)(iVar9 + 0x1168);
        } while (iVar12 != 0);
        local_48 = 0;
      }
      if (!bVar11) {
        uVar6 = 1;
        iVar12 = *piVar1;
        pcVar8 = ",";
        do {
          uVar5 = *(uint *)(iVar12 + 4);
          uVar4 = uVar5 ^ 0x7fffffff;
          if (uVar6 < uVar4) {
            uVar4 = uVar6;
          }
          FUN_01284394(iVar12,pcVar8,uVar4);
          if (uVar5 == 0x7fffffff) goto LAB_00ebcd1c;
          pcVar8 = pcVar8 + uVar4;
          uVar6 = uVar6 - uVar4;
        } while (uVar6 != 0);
      }
      iVar12 = iVar13 + uVar3 * 0xc;
      FUN_0096b2b0(&local_30,*piVar1,*(undefined4 *)(iVar12 + 0x10e0),
                   *(undefined4 *)(iVar12 + 0x10e4));
      if ((char)local_30 != '\x04') goto LAB_00ebcd20;
      uVar6 = 1;
      local_40 = local_40 + -1;
      iVar13 = uVar3 * 0x188 + iVar13;
      iVar12 = *piVar1;
      local_44 = 0x200;
      pcVar8 = ":";
      do {
        uVar4 = *(uint *)(iVar12 + 4);
        uVar3 = uVar4 ^ 0x7fffffff;
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        FUN_01284394(iVar12,pcVar8,uVar3);
        if (uVar4 == 0x7fffffff) goto LAB_00ebcd1c;
        pcVar8 = pcVar8 + uVar3;
        uVar6 = uVar6 - uVar3;
      } while (uVar6 != 0);
      piVar2 = (int *)(iVar13 + 0x178);
      iVar12 = *piVar2;
      uVar3 = 1;
      iVar7 = *piVar1;
      pcVar8 = "{";
      do {
        uVar4 = *(uint *)(iVar7 + 4);
        uVar6 = uVar4 ^ 0x7fffffff;
        if (uVar3 < uVar6) {
          uVar6 = uVar3;
        }
        FUN_01284394(iVar7,pcVar8,uVar6);
        if (uVar4 == 0x7fffffff) goto LAB_00ebcd04;
        pcVar8 = pcVar8 + uVar6;
        uVar3 = uVar3 - uVar6;
      } while (uVar3 != 0);
      local_38 = 0x200;
      local_34 = piVar1;
      FUN_0096b2b0(&local_30,*piVar1,
                   "schemaOneOfMultipleValidOneOfNotValidPropertyNamesUnevaluatedPropertiesUniqueItems"
                   ,6);
      if ((char)local_30 != '\x04') goto LAB_00ebcd34;
      iVar7 = *piVar1;
      uVar3 = 1;
      pcVar8 = ":";
      do {
        uVar4 = *(uint *)(iVar7 + 4);
        uVar6 = uVar4 ^ 0x7fffffff;
        if (uVar3 < uVar6) {
          uVar6 = uVar3;
        }
        FUN_01284394(iVar7,pcVar8,uVar6);
        if (uVar4 == 0x7fffffff) goto LAB_00ebcd04;
        pcVar8 = pcVar8 + uVar6;
        uVar3 = uVar3 - uVar6;
      } while (uVar3 != 0);
      iVar13 = FUN_00d91e78(iVar13,piVar1);
      if (iVar13 != 0) {
        return iVar13;
      }
      if ((iVar12 != -0x80000000) &&
         (iVar12 = FUN_00ebc430(&local_38,"description",0xb,piVar2), iVar12 != 0)) {
        return iVar12;
      }
      if (((local_38 & 0xff00) != 0) && ((local_38 & 1) == 0)) {
        uVar3 = 1;
        iVar12 = *local_34;
        pcVar8 = "}";
        do {
          uVar4 = *(uint *)(iVar12 + 4);
          uVar6 = uVar4 ^ 0x7fffffff;
          if (uVar3 < uVar6) {
            uVar6 = uVar3;
          }
          FUN_01284394(iVar12,pcVar8,uVar6);
          if (uVar4 == 0x7fffffff) goto LAB_00ebcd1c;
          pcVar8 = pcVar8 + uVar6;
          uVar3 = uVar3 - uVar6;
        } while (uVar3 != 0);
      }
      iVar12 = 0;
      bVar10 = true;
      bVar11 = false;
    }
    if (local_44 != 0) {
      uVar3 = 1;
      pcVar8 = "}";
      iVar12 = *piVar1;
      do {
        uVar4 = *(uint *)(iVar12 + 4);
        uVar6 = uVar4 ^ 0x7fffffff;
        if (uVar3 < uVar6) {
          uVar6 = uVar3;
        }
        FUN_01284394(iVar12,pcVar8,uVar6);
        if (uVar4 == 0x7fffffff) goto LAB_00ebcd1c;
        pcVar8 = pcVar8 + uVar6;
        uVar3 = uVar3 - uVar6;
      } while (uVar3 != 0);
    }
    return 0;
  }
LAB_00ebcd20:
  iVar12 = FUN_01966f50(local_30,local_2c);
  return iVar12;
LAB_00ebcce8:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
  goto LAB_00ebcd20;
LAB_00ebcd1c:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
  goto LAB_00ebcd20;
LAB_00ebcd04:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
LAB_00ebcd34:
  iVar12 = FUN_01966f50(local_30,local_2c);
  return iVar12;
}

