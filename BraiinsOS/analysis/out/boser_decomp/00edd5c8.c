// FUN_00edd5c8 @ 00edd5c8 size=2328 calls_out=5 calls_in=1
// strings: a UUID string | phaseRebootingCompletedFailed | a UUID string | PREPARINGDOWNLOADING_IMAGEDOWNLOAD_FAILEDREBOOTINGCOMPLETEDFAILED | a UUID string | DOWNLOADING

int FUN_00edd5c8(char *param_1,undefined1 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_38;
  int *local_34;
  uint local_30;
  int *local_2c;
  
  if (*param_1 != '\0') goto LAB_00eddad8;
  piVar7 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar4 = 1;
    iVar3 = *piVar7;
    pcVar5 = ",";
    do {
      uVar6 = *(uint *)(iVar3 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar3,pcVar5,uVar2);
      if (uVar6 == 0x7fffffff) goto LAB_00eddb00;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
    } while (uVar4 != 0);
  }
  iVar3 = *piVar7;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar3,"phaseRebootingCompletedFailed",5);
  if ((char)local_30 != '\x04') goto LAB_00eddb0c;
  uVar4 = 1;
  iVar3 = *piVar7;
  pcVar5 = ":";
  do {
    uVar6 = *(uint *)(iVar3 + 4);
    uVar2 = uVar6 ^ 0x7fffffff;
    if (uVar4 < uVar2) {
      uVar2 = uVar4;
    }
    FUN_01284394(iVar3,pcVar5,uVar2);
    if (uVar6 == 0x7fffffff) goto LAB_00eddb00;
    pcVar5 = pcVar5 + uVar2;
    uVar4 = uVar4 - uVar2;
  } while (uVar4 != 0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2) {
  case 0:
    uVar4 = 1;
    iVar3 = *piVar7;
    pcVar5 = "{";
    do {
      uVar6 = *(uint *)(iVar3 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar3,pcVar5,uVar2);
      if (uVar6 == 0x7fffffff) goto LAB_00edded8;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
    } while (uVar4 != 0);
    local_30 = 0x100;
    local_2c = piVar7;
    iVar3 = FUN_00ede1fc(&local_30,
                         "PREPARINGDOWNLOADING_IMAGEDOWNLOAD_FAILEDREBOOTINGCOMPLETEDFAILED",9);
    if (iVar3 != 0) {
      return iVar3;
    }
    if ((local_30 & 0xff00) == 0) {
      return 0;
    }
    if ((local_30 & 1) != 0) {
      return 0;
    }
    uVar4 = 1;
    iVar3 = *local_2c;
    pcVar5 = "}";
    while( true ) {
      uVar6 = *(uint *)(iVar3 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar3,pcVar5,uVar2);
      if (uVar6 == 0x7fffffff) break;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
      if (uVar4 == 0) {
        return 0;
      }
    }
    break;
  case 1:
    uVar4 = 1;
    iVar3 = *piVar7;
    pcVar5 = "{";
    do {
      uVar6 = *(uint *)(iVar3 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar3,pcVar5,uVar2);
      if (uVar6 == 0x7fffffff) goto LAB_00edded8;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
    } while (uVar4 != 0);
    local_38 = 0x100;
    local_34 = piVar7;
    iVar3 = FUN_00ede1fc(&local_38,&DAT_00571118,8);
    piVar7 = local_34;
    if (iVar3 != 0) {
      return iVar3;
    }
    if ((char)local_38 != '\0') {
LAB_00eddad8:
      local_30 = 10;
      iVar3 = FUN_01966fbc(&local_30,0,0);
      return iVar3;
    }
    if (local_38._1_1_ != '\x01') {
      uVar4 = 1;
      iVar3 = *local_34;
      pcVar5 = ",";
      do {
        uVar6 = *(uint *)(iVar3 + 4);
        uVar2 = uVar6 ^ 0x7fffffff;
        if (uVar4 < uVar2) {
          uVar2 = uVar4;
        }
        FUN_01284394(iVar3,pcVar5,uVar2);
        if (uVar6 == 0x7fffffff) goto LAB_00edded8;
        pcVar5 = pcVar5 + uVar2;
        uVar4 = uVar4 - uVar2;
      } while (uVar4 != 0);
    }
    local_38._0_2_ = CONCAT11(2,(char)local_38);
    FUN_0096b2b0(&local_30,*piVar7,&DAT_0056e8e0,4);
    if ((char)local_30 != '\x04') {
LAB_00eddd9c:
      uVar4 = local_30;
      piVar7 = local_2c;
      goto LAB_00eddee4;
    }
    uVar4 = 1;
    iVar3 = *piVar7;
    pcVar5 = ":";
    do {
      uVar6 = *(uint *)(iVar3 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar3,pcVar5,uVar2);
      if (uVar6 == 0x7fffffff) goto LAB_00edded8;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
    } while (uVar4 != 0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_3) {
    case 0:
      iVar3 = *piVar7;
      uVar1 = 0xb;
      pcVar5 = "DOWNLOADING";
      break;
    case 1:
      iVar3 = *piVar7;
      uVar1 = 9;
      pcVar5 = "VERIFYING";
      break;
    case 2:
      iVar3 = *piVar7;
      uVar1 = 8;
      pcVar5 = &DAT_005708f8;
      break;
    case 3:
      iVar3 = *piVar7;
      uVar1 = 7;
      pcVar5 = &DAT_00473f7b;
    }
    FUN_0096b2b0(&local_30,iVar3,pcVar5,uVar1);
    iVar3 = 0;
    if ((char)local_30 != '\x04') {
      iVar3 = FUN_01966f50(local_30,local_2c);
    }
    if (iVar3 != 0) {
      return iVar3;
    }
    if ((local_38 & 0xff00) == 0) {
      return 0;
    }
    if ((local_38 & 1) != 0) {
      return 0;
    }
    uVar4 = 1;
    iVar3 = *piVar7;
    pcVar5 = "}";
    while( true ) {
      uVar6 = *(uint *)(iVar3 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar3,pcVar5,uVar2);
      if (uVar6 == 0x7fffffff) break;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
      if (uVar4 == 0) {
        return 0;
      }
    }
    break;
  case 2:
    uVar4 = 1;
    iVar3 = *piVar7;
    pcVar5 = "{";
    do {
      uVar6 = *(uint *)(iVar3 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar3,pcVar5,uVar2);
      if (uVar6 == 0x7fffffff) goto LAB_00edded8;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
    } while (uVar4 != 0);
    local_38 = 0x100;
    local_34 = piVar7;
    iVar3 = FUN_00ede1fc(&local_38,&DAT_0056fb20,8);
    piVar7 = local_34;
    if (iVar3 != 0) {
      return iVar3;
    }
    if ((char)local_38 != '\0') goto LAB_00eddad8;
    if (local_38._1_1_ != '\x01') {
      uVar4 = 1;
      iVar3 = *local_34;
      pcVar5 = ",";
      do {
        uVar6 = *(uint *)(iVar3 + 4);
        uVar2 = uVar6 ^ 0x7fffffff;
        if (uVar4 < uVar2) {
          uVar2 = uVar4;
        }
        FUN_01284394(iVar3,pcVar5,uVar2);
        if (uVar6 == 0x7fffffff) goto LAB_00edded8;
        pcVar5 = pcVar5 + uVar2;
        uVar4 = uVar4 - uVar2;
      } while (uVar4 != 0);
    }
    local_38._0_2_ = CONCAT11(2,(char)local_38);
    FUN_0096b2b0(&local_30,*piVar7,&DAT_0056e8e0,4);
    if ((char)local_30 != '\x04') goto LAB_00eddd9c;
    uVar4 = 1;
    iVar3 = *piVar7;
    pcVar5 = ":";
    do {
      uVar6 = *(uint *)(iVar3 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar3,pcVar5,uVar2);
      if (uVar6 == 0x7fffffff) goto LAB_00edded8;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
    } while (uVar4 != 0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_3) {
    case 0:
      iVar3 = *piVar7;
      pcVar5 = "REALIZING";
      goto LAB_00edde0c;
    case 1:
      iVar3 = *piVar7;
      pcVar5 = "VERIFYING";
LAB_00edde0c:
      uVar1 = 9;
      break;
    case 2:
      iVar3 = *piVar7;
      pcVar5 = &DAT_00570128;
      goto LAB_00edddc4;
    case 3:
      iVar3 = *piVar7;
      uVar1 = 10;
      pcVar5 = "ACTIVATING";
      break;
    case 4:
      iVar3 = *piVar7;
      pcVar5 = "CLEANINGWifiMode/upgradereset_at/versionMin Diffvithkuqigrpc_weba\x1e";
LAB_00edddc4:
      uVar1 = 8;
      break;
    case 5:
      iVar3 = *piVar7;
      uVar1 = 0x15;
      pcVar5 = "FINDING_GARBAGE_ROOTS";
      break;
    case 6:
      iVar3 = *piVar7;
      uVar1 = 0x1c;
      pcVar5 = "DETERMINING_GARBAGE_LIVENESS";
      break;
    case 7:
      iVar3 = *piVar7;
      uVar1 = 7;
      pcVar5 = &DAT_00473f7b;
    }
    FUN_0096b2b0(&local_30,iVar3,pcVar5,uVar1);
    iVar3 = 0;
    if ((char)local_30 != '\x04') {
      iVar3 = FUN_01966f50(local_30,local_2c);
    }
    if (((iVar3 == 0) && (iVar3 = 0, (local_38 & 0xff00) != 0)) && ((local_38 & 1) == 0)) {
      uVar4 = 1;
      iVar8 = *piVar7;
      pcVar5 = "}";
      do {
        uVar6 = *(uint *)(iVar8 + 4);
        uVar2 = uVar6 ^ 0x7fffffff;
        if (uVar4 < uVar2) {
          uVar2 = uVar4;
        }
        FUN_01284394(iVar8,pcVar5,uVar2);
        if (uVar6 == 0x7fffffff) goto LAB_00edded8;
        pcVar5 = pcVar5 + uVar2;
        uVar4 = uVar4 - uVar2;
      } while (uVar4 != 0);
    }
    return iVar3;
  case 3:
    uVar4 = 1;
    iVar3 = *piVar7;
    pcVar5 = "{";
    do {
      uVar6 = *(uint *)(iVar3 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar3,pcVar5,uVar2);
      if (uVar6 == 0x7fffffff) goto LAB_00edded8;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
    } while (uVar4 != 0);
    local_30 = 0x100;
    local_2c = piVar7;
    iVar3 = FUN_00ede1fc(&local_30,&DAT_00473f7b,7);
    if (iVar3 != 0) {
      return iVar3;
    }
    if ((local_30 & 0xff00) == 0) {
      return 0;
    }
    if ((local_30 & 1) != 0) {
      return 0;
    }
    uVar4 = 1;
    iVar3 = *local_2c;
    pcVar5 = "}";
    while( true ) {
      uVar6 = *(uint *)(iVar3 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar3,pcVar5,uVar2);
      if (uVar6 == 0x7fffffff) break;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
      if (uVar4 == 0) {
        return 0;
      }
    }
  }
LAB_00edded8:
  uVar4 = 2;
  piVar7 = &DAT_01d2e7b8;
LAB_00eddee4:
  iVar3 = FUN_01966f50(uVar4,piVar7);
  return iVar3;
LAB_00eddb00:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
LAB_00eddb0c:
  iVar3 = FUN_01966f50(local_30,local_2c);
  return iVar3;
}

