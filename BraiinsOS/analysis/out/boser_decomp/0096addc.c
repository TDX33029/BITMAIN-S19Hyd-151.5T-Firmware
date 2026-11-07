// FUN_0096addc @ 0096addc size=1464 calls_out=10 calls_in=4
// strings: a UUID string | internal error: entered unreachable code | internal error: entered unreachable code

/* WARNING: Removing unreachable block (ram,0x0096ad8c) */
/* WARNING: Removing unreachable block (ram,0x0096b23c) */
/* WARNING: Removing unreachable block (ram,0x0096ac48) */
/* WARNING: Removing unreachable block (ram,0x0096b224) */
/* WARNING: Removing unreachable block (ram,0x0096af68) */
/* WARNING: Removing unreachable block (ram,0x0096b1d4) */

int FUN_0096addc(undefined1 *param_1,int *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined4 *local_58;
  undefined4 *local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 *local_30;
  int *local_2c;
  int local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    uVar7 = 4;
    puVar6 = &DAT_0056d030;
    iVar9 = *param_2;
    while( true ) {
      uVar10 = *(uint *)(iVar9 + 4);
      uVar4 = uVar10 ^ 0x7fffffff;
      if (uVar7 < uVar4) {
        uVar4 = uVar7;
      }
      FUN_01284394(iVar9,puVar6,uVar4);
      if (uVar10 == 0x7fffffff) break;
      puVar6 = puVar6 + uVar4;
      uVar7 = uVar7 - uVar4;
      if (uVar7 == 0) {
        return 0;
      }
    }
LAB_0096b1e4:
    iVar9 = FUN_01966f50(2,&DAT_01d2e7b8);
    return iVar9;
  case 1:
    uVar3 = 5;
    pcVar8 = "true\x1e\x05";
    if (param_1[1] == '\0') {
      pcVar8 = "f";
    }
    if (param_1[1] != '\0') {
      uVar3 = 4;
    }
    FUN_00a5208c(&local_58,*param_2,pcVar8,uVar3);
    break;
  case 2:
    iVar9 = *param_2;
    puVar2 = (ulonglong *)(param_1 + 0x10);
    if (*(int *)(param_1 + 8) == 0) {
      uVar13 = FUN_01415f98(&local_50,0,(int)*puVar2,*(undefined4 *)(param_1 + 0x14));
    }
    else if (*(int *)(param_1 + 8) == 1) {
      uVar13 = FUN_0196bd9c(&local_50,1,(int)*puVar2,*(undefined4 *)(param_1 + 0x14));
    }
    else {
      uVar12 = *puVar2;
      uVar7 = (uint)(uVar12 >> 0x20);
      if ((int)uVar12 == 0 && (uVar12 & 0xfffff00000000) == 0) {
        if ((int)uVar12 == 0 && (uVar7 & 0x7fffffff) == 0x7ff00000) goto LAB_00b0e9e0;
      }
      else if (0x7fefffff < (uVar7 & 0x7fffffff)) {
LAB_00b0e9e0:
        uVar7 = 4;
        puVar6 = &DAT_0056d030;
        while( true ) {
          uVar10 = *(uint *)(iVar9 + 4);
          uVar4 = uVar10 ^ 0x7fffffff;
          if (uVar7 < uVar4) {
            uVar4 = uVar7;
          }
          FUN_01284394(iVar9,puVar6,uVar4);
          if (uVar10 == 0x7fffffff) break;
          puVar6 = puVar6 + uVar4;
          uVar7 = uVar7 - uVar4;
          if (uVar7 == 0) {
            return 0;
          }
        }
        iVar9 = FUN_01966f50(2,&DAT_01d2e7b8);
        return iVar9;
      }
      iVar11 = FUN_01afb0f8(&local_50);
      uVar13 = CONCAT44(iVar11 - (int)&local_50,&local_50);
    }
    FUN_00a5208c(&local_28,iVar9,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
    iVar9 = 0;
    if ((char)local_28 != '\x04') {
      iVar9 = FUN_01966f50(local_28,unaff_r4);
    }
    return iVar9;
  case 3:
    FUN_0096b2b0(&local_58,*param_2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    break;
  case 4:
    iVar5 = *(int *)(param_1 + 8);
    uVar7 = 1;
    iVar9 = *(int *)(param_1 + 0xc);
    iVar11 = *param_2;
    puVar6 = &DAT_0053340d;
    local_28 = iVar5 + iVar9 * 0x18;
    local_2c = param_2;
    do {
      uVar10 = *(uint *)(iVar11 + 4);
      uVar4 = uVar10 ^ 0x7fffffff;
      if (uVar7 < uVar4) {
        uVar4 = uVar7;
      }
      FUN_01284394(iVar11,puVar6,uVar4);
      piVar1 = local_2c;
      if (uVar10 == 0x7fffffff) goto LAB_0096ad60;
      puVar6 = puVar6 + uVar4;
      uVar7 = uVar7 - uVar4;
    } while (uVar7 != 0);
    if (iVar9 == 0) {
      uVar7 = 1;
      pcVar8 = "]";
      do {
        uVar10 = *(uint *)(iVar11 + 4);
        uVar4 = uVar10 ^ 0x7fffffff;
        if (uVar7 < uVar4) {
          uVar4 = uVar7;
        }
        FUN_01284394(iVar11,pcVar8,uVar4);
        if (uVar10 == 0x7fffffff) goto LAB_0096ad60;
        pcVar8 = pcVar8 + uVar4;
        uVar7 = uVar7 - uVar4;
      } while (uVar7 != 0);
    }
    else {
      iVar9 = 0x100;
      local_30 = &DAT_01d2e7b8;
      do {
        if (iVar9 != 0x100) {
          uVar7 = 1;
          pcVar8 = ",";
          do {
            uVar10 = *(uint *)(iVar11 + 4);
            uVar4 = uVar10 ^ 0x7fffffff;
            if (uVar7 < uVar4) {
              uVar4 = uVar7;
            }
            FUN_01284394(iVar11,pcVar8,uVar4);
            if (uVar10 == 0x7fffffff) goto LAB_0096ad70;
            pcVar8 = pcVar8 + uVar4;
            uVar7 = uVar7 - uVar4;
          } while (uVar7 != 0);
        }
        iVar9 = FUN_0096addc(iVar5,piVar1);
        if (iVar9 != 0) {
          return iVar9;
        }
        iVar5 = iVar5 + 0x18;
        iVar9 = 0x200;
      } while (iVar5 != local_28);
      uVar7 = 1;
      pcVar8 = "]";
      do {
        uVar10 = *(uint *)(iVar11 + 4);
        uVar4 = uVar10 ^ 0x7fffffff;
        if (uVar7 < uVar4) {
          uVar4 = uVar7;
        }
        FUN_01284394(iVar11,pcVar8,uVar4);
        if (uVar10 == 0x7fffffff) goto LAB_0096ad70;
        pcVar8 = pcVar8 + uVar4;
        uVar7 = uVar7 - uVar4;
      } while (uVar7 != 0);
    }
    return 0;
  case 5:
    uVar7 = 1;
    iVar9 = *(int *)(param_1 + 0xc);
    pcVar8 = "{";
    iVar11 = *param_2;
    do {
      uVar10 = *(uint *)(iVar11 + 4);
      uVar4 = uVar10 ^ 0x7fffffff;
      if (uVar7 < uVar4) {
        uVar4 = uVar7;
      }
      FUN_01284394(iVar11,pcVar8,uVar4);
      if (uVar10 == 0x7fffffff) goto LAB_0096b1e4;
      pcVar8 = pcVar8 + uVar4;
      uVar7 = uVar7 - uVar4;
    } while (uVar7 != 0);
    iVar5 = 0x100;
    if (iVar9 == 0) {
      uVar7 = 1;
      pcVar8 = "}";
      do {
        uVar10 = *(uint *)(iVar11 + 4);
        uVar4 = uVar10 ^ 0x7fffffff;
        if (uVar7 < uVar4) {
          uVar4 = uVar7;
        }
        FUN_01284394(iVar11,pcVar8,uVar4);
        if (uVar10 == 0x7fffffff) goto LAB_0096b1e4;
        pcVar8 = pcVar8 + uVar4;
        uVar7 = uVar7 - uVar4;
      } while (uVar7 != 0);
      iVar5 = 0;
    }
    local_50 = *(int *)(param_1 + 4);
    local_4c = *(undefined4 *)(param_1 + 8);
    local_38 = iVar9;
    if (local_50 == 0) {
      local_38 = 0;
    }
    local_58 = (undefined4 *)(uint)(local_50 != 0);
    local_44 = 0;
    local_54 = (undefined4 *)0x0;
    local_48 = local_58;
    local_40 = local_50;
    local_3c = local_4c;
    do {
      uVar13 = FUN_01a41998(&local_58);
      iVar9 = (int)uVar13;
      if (iVar9 == 0) {
        if (iVar5 == 0) {
          return 0;
        }
        uVar7 = 1;
        pcVar8 = "}";
        while( true ) {
          uVar10 = *(uint *)(iVar11 + 4);
          uVar4 = uVar10 ^ 0x7fffffff;
          if (uVar7 < uVar4) {
            uVar4 = uVar7;
          }
          FUN_01284394(iVar11,pcVar8,uVar4);
          if (uVar10 == 0x7fffffff) break;
          pcVar8 = pcVar8 + uVar4;
          uVar7 = uVar7 - uVar4;
          if (uVar7 == 0) {
            return 0;
          }
        }
LAB_0096b204:
        local_30 = (undefined4 *)0x2;
        local_2c = &DAT_01d2e7b8;
        goto LAB_0096b208;
      }
      if (iVar5 != 0x100) {
        uVar7 = 1;
        pcVar8 = ",";
        do {
          uVar10 = *(uint *)(iVar11 + 4);
          uVar4 = uVar10 ^ 0x7fffffff;
          if (uVar7 < uVar4) {
            uVar4 = uVar7;
          }
          FUN_01284394(iVar11,pcVar8,uVar4);
          if (uVar10 == 0x7fffffff) goto LAB_0096b204;
          pcVar8 = pcVar8 + uVar4;
          uVar7 = uVar7 - uVar4;
        } while (uVar7 != 0);
      }
      FUN_0096b2b0(&local_30,iVar11,*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar9 + 8));
      if ((char)local_30 != '\x04') goto LAB_0096b208;
      uVar7 = 1;
      pcVar8 = ":";
      do {
        uVar10 = *(uint *)(iVar11 + 4);
        uVar4 = uVar10 ^ 0x7fffffff;
        if (uVar7 < uVar4) {
          uVar4 = uVar7;
        }
        FUN_01284394(iVar11,pcVar8,uVar4);
        if (uVar10 == 0x7fffffff) goto LAB_0096b204;
        pcVar8 = pcVar8 + uVar4;
        uVar7 = uVar7 - uVar4;
      } while (uVar7 != 0);
      iVar9 = FUN_0096addc((int)((ulonglong)uVar13 >> 0x20),param_2);
      iVar5 = 0x200;
      if (iVar9 != 0) {
        return iVar9;
      }
    } while( true );
  }
  if ((char)local_58 == '\x04') {
    return 0;
  }
  local_30 = local_58;
  local_2c = local_54;
LAB_0096b208:
  iVar9 = FUN_01966f50(local_30,local_2c);
  return iVar9;
LAB_0096ad60:
  local_30 = &DAT_01d2e7b8;
LAB_0096ad70:
  iVar9 = FUN_01966f50(2,local_30);
  return iVar9;
}

