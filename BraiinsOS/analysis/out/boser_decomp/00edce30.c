// FUN_00edce30 @ 00edce30 size=1064 calls_out=5 calls_in=1
// strings: phaseRebootingCompletedFailed | stage | PREPARINGDOWNLOADING_IMAGEDOWNLOAD_FAILEDREBOOTINGCOMPLETEDFAILED | stage | stage | stage

int FUN_00edce30(char *param_1,undefined1 param_2,undefined1 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (*param_1 != '\0') {
    local_28 = 10;
    iVar2 = FUN_01966fbc(&local_28,0,0);
    return iVar2;
  }
  puVar5 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    FUN_01ac6cbc(*puVar5,",",1);
  }
  uVar3 = *puVar5;
  param_1[1] = '\x02';
  FUN_012650dc(&local_28,uVar3,"phaseRebootingCompletedFailed",5);
  if ((char)local_28 != '\x04') goto LAB_00edd178;
  FUN_01ac6cbc(*puVar5,":",1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2) {
  case 0:
    FUN_01ac6cbc(*puVar5,"{",1);
    FUN_012650dc(&local_28,*puVar5,"stage",5);
    if ((char)local_28 != '\x04') goto LAB_00edd178;
    FUN_01ac6cbc(*puVar5,":",1);
    uVar3 = 9;
    uVar4 = *puVar5;
    pcVar1 = "PREPARINGDOWNLOADING_IMAGEDOWNLOAD_FAILEDREBOOTINGCOMPLETEDFAILED";
    break;
  case 1:
    FUN_01ac6cbc(*puVar5,"{",1);
    FUN_012650dc(&local_28,*puVar5,"stage",5);
    if ((char)local_28 != '\x04') {
LAB_00edd178:
      iVar2 = FUN_01966f50(local_28,uStack_24);
      return iVar2;
    }
    FUN_01ac6cbc(*puVar5,":",1);
    iVar2 = FUN_00dab264(&DAT_00571118,8,*puVar5);
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_01ac6cbc(*puVar5,",",1);
    FUN_012650dc(&local_28,*puVar5,&DAT_0056e8e0,4);
    if ((char)local_28 != '\x04') goto LAB_00edd178;
    FUN_01ac6cbc(*puVar5,":",1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_3) {
    case 0:
      uVar3 = *puVar5;
      uVar4 = 0xb;
      pcVar1 = "DOWNLOADING";
      break;
    case 1:
switchD_00edcff4_caseD_1:
      uVar3 = *puVar5;
      pcVar1 = "VERIFYING";
LAB_00edd1c8:
      uVar4 = 9;
      break;
    case 2:
      uVar3 = *puVar5;
      pcVar1 = &DAT_005708f8;
      goto LAB_00edd230;
    case 3:
switchD_00edcff4_caseD_7:
      uVar3 = *puVar5;
      uVar4 = 7;
      pcVar1 = &DAT_00473f7b;
    }
    goto LAB_00edd238;
  case 2:
    FUN_01ac6cbc(*puVar5,"{",1);
    FUN_012650dc(&local_28,*puVar5,"stage",5);
    if ((char)local_28 != '\x04') goto LAB_00edd178;
    FUN_01ac6cbc(*puVar5,":",1);
    iVar2 = FUN_00dab264(&DAT_0056fb20,8,*puVar5);
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_01ac6cbc(*puVar5,",",1);
    FUN_012650dc(&local_28,*puVar5,&DAT_0056e8e0,4);
    if ((char)local_28 != '\x04') goto LAB_00edd178;
    FUN_01ac6cbc(*puVar5,":",1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_3) {
    case 0:
      uVar3 = *puVar5;
      pcVar1 = "REALIZING";
      goto LAB_00edd1c8;
    case 1:
      goto switchD_00edcff4_caseD_1;
    case 2:
      uVar3 = *puVar5;
      pcVar1 = &DAT_00570128;
      goto LAB_00edd230;
    case 3:
      uVar3 = *puVar5;
      uVar4 = 10;
      pcVar1 = "ACTIVATING";
      break;
    case 4:
      uVar3 = *puVar5;
      pcVar1 = "CLEANINGWifiMode/upgradereset_at/versionMin Diffvithkuqigrpc_weba\x1e";
LAB_00edd230:
      uVar4 = 8;
      break;
    case 5:
      uVar3 = *puVar5;
      uVar4 = 0x15;
      pcVar1 = "FINDING_GARBAGE_ROOTS";
      break;
    case 6:
      uVar3 = *puVar5;
      uVar4 = 0x1c;
      pcVar1 = "DETERMINING_GARBAGE_LIVENESS";
      break;
    case 7:
      goto switchD_00edcff4_caseD_7;
    }
LAB_00edd238:
    FUN_012650dc(&local_28,uVar3,pcVar1,uVar4);
    iVar2 = 0;
    if ((char)local_28 != '\x04') {
      iVar2 = FUN_01966f50(local_28,uStack_24);
    }
    goto LAB_00edd24c;
  case 3:
    FUN_01ac6cbc(*puVar5,"{",1);
    FUN_012650dc(&local_28,*puVar5,"stage",5);
    if ((char)local_28 != '\x04') goto LAB_00edd178;
    FUN_01ac6cbc(*puVar5,":",1);
    uVar3 = 7;
    uVar4 = *puVar5;
    pcVar1 = &DAT_00473f7b;
  }
  iVar2 = FUN_00dab264(pcVar1,uVar3,uVar4);
LAB_00edd24c:
  if (iVar2 == 0) {
    FUN_01ac6cbc(*puVar5,"}",1);
    iVar2 = 0;
  }
  return iVar2;
}

