// FUN_00ec3ce8 @ 00ec3ce8 size=1912 calls_out=9 calls_in=2
// strings: description | a UUID string | variables | a UUID string | default | description

int FUN_00ec3ce8(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int local_64;
  undefined4 local_60;
  int *local_5c;
  uint local_58;
  undefined4 *local_54;
  int local_50;
  int local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_30;
  int *local_2c;
  
  iVar8 = *param_2;
  pcVar5 = "{";
  uVar4 = 1;
  do {
    uVar6 = *(uint *)(iVar8 + 4);
    uVar3 = uVar6 ^ 0x7fffffff;
    if (uVar4 < uVar3) {
      uVar3 = uVar4;
    }
    FUN_01284394(iVar8,pcVar5,uVar3);
    if (uVar6 == 0x7fffffff) {
      local_58 = 2;
      local_54 = &DAT_01d2e7b8;
      goto LAB_00ec43fc;
    }
    pcVar5 = pcVar5 + uVar3;
    uVar4 = uVar4 - uVar3;
  } while (uVar4 != 0);
  local_60 = 0x100;
  local_5c = param_2;
  iVar8 = FUN_0096b5ec(&local_60,"url",3,param_1[0xd],param_1[0xe]);
  if (iVar8 != 0) {
    return iVar8;
  }
  if ((param_1[0xf] != -0x80000000) &&
     (iVar8 = FUN_00ebc430(&local_60,"description",0xb), iVar8 != 0)) {
    return iVar8;
  }
  piVar2 = local_5c;
  if (*param_1 != 0) {
    if ((char)local_60 == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
    }
    if (local_60._1_1_ != '\x01') {
      uVar4 = 1;
      pcVar5 = ",";
      iVar8 = *local_5c;
      do {
        uVar6 = *(uint *)(iVar8 + 4);
        uVar3 = uVar6 ^ 0x7fffffff;
        if (uVar4 < uVar3) {
          uVar3 = uVar4;
        }
        FUN_01284394(iVar8,pcVar5,uVar3);
        if (uVar6 == 0x7fffffff) goto LAB_00ec43f8;
        pcVar5 = pcVar5 + uVar3;
        uVar4 = uVar4 - uVar3;
      } while (uVar4 != 0);
    }
    local_60._0_2_ = CONCAT11(2,(char)local_60);
    FUN_0096b2b0(&local_58,*piVar2,"variables",9);
    if ((char)local_58 != '\x04') goto LAB_00ec43fc;
    uVar4 = 1;
    iVar8 = *piVar2;
    pcVar5 = ":";
    do {
      uVar6 = *(uint *)(iVar8 + 4);
      uVar3 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      FUN_01284394(iVar8,pcVar5,uVar3);
      if (uVar6 == 0x7fffffff) goto LAB_00ec43f8;
      pcVar5 = pcVar5 + uVar3;
      uVar4 = uVar4 - uVar3;
    } while (uVar4 != 0);
    iVar8 = param_1[1];
    if (iVar8 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = param_1[3];
      local_4c = param_1[2];
      local_44 = 0;
      local_54 = (undefined4 *)0x0;
      local_50 = iVar8;
      local_40 = iVar8;
      local_3c = local_4c;
    }
    local_58 = (uint)(iVar8 != 0);
    uVar4 = 1;
    pcVar5 = "{";
    iVar8 = *piVar2;
    local_48 = local_58;
    local_38 = iVar9;
    do {
      uVar6 = *(uint *)(iVar8 + 4);
      uVar3 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      FUN_01284394(iVar8,pcVar5,uVar3);
      if (uVar6 == 0x7fffffff) goto LAB_00ec4408;
      pcVar5 = pcVar5 + uVar3;
      uVar4 = uVar4 - uVar3;
    } while (uVar4 != 0);
    local_64 = 0x100;
    if (iVar9 == 0) {
      uVar4 = 1;
      pcVar5 = "}";
      do {
        uVar6 = *(uint *)(iVar8 + 4);
        uVar3 = uVar6 ^ 0x7fffffff;
        if (uVar4 < uVar3) {
          uVar3 = uVar4;
        }
        FUN_01284394(iVar8,pcVar5,uVar3);
        bVar7 = false;
        if (uVar6 == 0x7fffffff) goto LAB_00ec4408;
        pcVar5 = pcVar5 + uVar3;
        uVar4 = uVar4 - uVar3;
      } while (uVar4 != 0);
      local_64 = 0;
    }
    else {
      bVar7 = true;
    }
    while( true ) {
      uVar10 = FUN_01ad5f64(&local_58);
      piVar1 = (int *)((ulonglong)uVar10 >> 0x20);
      iVar8 = (int)uVar10;
      if (iVar8 == 0) break;
      if (!bVar7) {
        uVar4 = 1;
        iVar9 = *piVar2;
        pcVar5 = ",";
        do {
          uVar6 = *(uint *)(iVar9 + 4);
          uVar3 = uVar6 ^ 0x7fffffff;
          if (uVar4 < uVar3) {
            uVar3 = uVar4;
          }
          FUN_01284394(iVar9,pcVar5,uVar3);
          if (uVar6 == 0x7fffffff) goto LAB_00ec4410;
          pcVar5 = pcVar5 + uVar3;
          uVar4 = uVar4 - uVar3;
        } while (uVar4 != 0);
      }
      FUN_0096b2b0(&local_30,*piVar2,*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 8));
      if ((char)local_30 != '\x04') {
        uVar4 = local_30;
        piVar2 = local_2c;
        goto LAB_00ec4428;
      }
      iVar8 = *piVar2;
      uVar4 = 1;
      local_64 = 0x200;
      pcVar5 = ":";
      do {
        uVar6 = *(uint *)(iVar8 + 4);
        uVar3 = uVar6 ^ 0x7fffffff;
        if (uVar4 < uVar3) {
          uVar3 = uVar4;
        }
        FUN_01284394(iVar8,pcVar5,uVar3);
        if (uVar6 == 0x7fffffff) goto LAB_00ec4410;
        pcVar5 = pcVar5 + uVar3;
        uVar4 = uVar4 - uVar3;
      } while (uVar4 != 0);
      iVar8 = *piVar2;
      uVar4 = 1;
      pcVar5 = "{";
      do {
        uVar6 = *(uint *)(iVar8 + 4);
        uVar3 = uVar6 ^ 0x7fffffff;
        if (uVar4 < uVar3) {
          uVar3 = uVar4;
        }
        FUN_01284394(iVar8,pcVar5,uVar3);
        if (uVar6 == 0x7fffffff) goto LAB_00ec4410;
        pcVar5 = pcVar5 + uVar3;
        uVar4 = uVar4 - uVar3;
      } while (uVar4 != 0);
      local_30 = 0x100;
      local_2c = piVar2;
      iVar8 = FUN_0096b5ec(&local_30,"default",7,piVar1[0xf],piVar1[0x10]);
      if (iVar8 != 0) {
        return iVar8;
      }
      if ((piVar1[8] != -0x80000000) &&
         (iVar8 = FUN_00ebc430(&local_30,"description",0xb), iVar8 != 0)) {
        return iVar8;
      }
      if ((piVar1[0xb] != -0x80000000) &&
         (iVar8 = FUN_00ec3204(&local_30,&DAT_0056cb60), iVar8 != 0)) {
        return iVar8;
      }
      if ((*piVar1 != 0) && (iVar8 = FUN_011e01bc(piVar1,&local_30), iVar8 != 0)) {
        return iVar8;
      }
      if ((local_30 & 1) != 0) goto LAB_00ec4430;
      if ((local_30 & 0xff00) != 0) {
        uVar4 = 1;
        iVar8 = *local_2c;
        pcVar5 = "}";
        do {
          uVar6 = *(uint *)(iVar8 + 4);
          uVar3 = uVar6 ^ 0x7fffffff;
          if (uVar4 < uVar3) {
            uVar3 = uVar4;
          }
          FUN_01284394(iVar8,pcVar5,uVar3);
          if (uVar6 == 0x7fffffff) goto LAB_00ec4410;
          pcVar5 = pcVar5 + uVar3;
          uVar4 = uVar4 - uVar3;
        } while (uVar4 != 0);
      }
      bVar7 = false;
    }
    if (local_64 != 0) {
      uVar4 = 1;
      pcVar5 = "}";
      iVar8 = *piVar2;
      do {
        uVar6 = *(uint *)(iVar8 + 4);
        uVar3 = uVar6 ^ 0x7fffffff;
        if (uVar4 < uVar3) {
          uVar3 = uVar4;
        }
        FUN_01284394(iVar8,pcVar5,uVar3);
        if (uVar6 == 0x7fffffff) goto LAB_00ec4410;
        pcVar5 = pcVar5 + uVar3;
        uVar4 = uVar4 - uVar3;
      } while (uVar4 != 0);
    }
  }
  if ((param_1[4] != 0) && (iVar8 = FUN_011e01bc(param_1 + 4,&local_60), iVar8 != 0)) {
    return iVar8;
  }
  if ((local_60 & 1) != 0) {
LAB_00ec4430:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffc0);
  }
  if ((local_60 & 0xff00) == 0) {
    return 0;
  }
  uVar4 = 1;
  iVar8 = *local_5c;
  pcVar5 = "}";
  while( true ) {
    uVar6 = *(uint *)(iVar8 + 4);
    uVar3 = uVar6 ^ 0x7fffffff;
    if (uVar4 < uVar3) {
      uVar3 = uVar4;
    }
    FUN_01284394(iVar8,pcVar5,uVar3);
    if (uVar6 == 0x7fffffff) break;
    pcVar5 = pcVar5 + uVar3;
    uVar4 = uVar4 - uVar3;
    if (uVar4 == 0) {
      return 0;
    }
  }
  uVar4 = 2;
  piVar2 = &DAT_01d2e7b8;
LAB_00ec4428:
  iVar8 = FUN_01966f50(uVar4,piVar2);
  return iVar8;
LAB_00ec4408:
  uVar4 = 2;
  piVar2 = &DAT_01d2e7b8;
  goto LAB_00ec4428;
LAB_00ec4410:
  uVar4 = 2;
  piVar2 = &DAT_01d2e7b8;
  goto LAB_00ec4428;
LAB_00ec43f8:
  local_58 = 2;
  local_54 = &DAT_01d2e7b8;
LAB_00ec43fc:
  iVar8 = FUN_01966f50(local_58,local_54);
  return iVar8;
}

