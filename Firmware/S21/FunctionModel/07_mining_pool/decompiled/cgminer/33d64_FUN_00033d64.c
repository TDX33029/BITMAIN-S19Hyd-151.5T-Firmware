// FUN_00033d64 @ 00033d64  size=1252  callers=5
// program: cgminer


char FUN_00033d64(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  pthread_rwlock_t *__rwlock;
  undefined4 uVar6;
  char *pcVar7;
  int local_830 [2];
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 local_818;
  undefined4 uStack_814;
  uint local_810;
  undefined4 uStack_80c;
  uint local_808;
  undefined4 uStack_804;
  undefined2 local_800;
  
  cVar1 = DAT_000686f1;
  if (DAT_00068c60 != '\0') {
    return '\0';
  }
  if (DAT_00072dc0 != 0) {
    return '\0';
  }
  if (*(int *)(param_1 + 0x150) != DAT_00068cac) {
    if (DAT_000686f1 == '\0') {
      return '\x01';
    }
    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 7)) {
      return DAT_000686f1;
    }
    local_828._0_1_ = 'W';
    local_828._1_1_ = 'o';
    local_828._2_1_ = 'r';
    local_828._3_1_ = 'k';
    uStack_824._0_1_ = ' ';
    uStack_824._1_1_ = 's';
    uStack_824._2_1_ = 't';
    uStack_824._3_1_ = 'a';
    uStack_820._0_1_ = 'l';
    uStack_820._1_1_ = 'e';
    uStack_820._2_1_ = ' ';
    uStack_820._3_1_ = 'd';
    uStack_81c._0_1_ = 'u';
    uStack_81c._1_1_ = 'e';
    uStack_81c._2_1_ = ' ';
    uStack_81c._3_1_ = 't';
    local_818._0_1_ = 'o';
    local_818._1_1_ = ' ';
    local_818._2_1_ = 'b';
    local_818._3_1_ = 'l';
    uStack_814._0_1_ = 'o';
    uStack_814._1_1_ = 'c';
    uStack_814._2_1_ = 'k';
    uStack_814._3_1_ = ' ';
    local_810._0_1_ = 'm';
    local_810._1_1_ = 'i';
    local_810._2_1_ = 's';
    local_810._3_1_ = 'm';
    uStack_80c._0_1_ = 'a';
    uStack_80c._1_1_ = 't';
    uStack_80c._2_1_ = 'c';
    uStack_80c._3_1_ = 'h';
    local_808 = local_808 & 0xffffff00;
    FUN_0001dd98(7,&local_828,0);
    return cVar1;
  }
  iVar5 = *(int *)(param_1 + 0x104);
  iVar3 = *(int *)(param_1 + 0x114);
  if (*(int *)(param_1 + 0x114) <= DAT_00068204) {
    iVar3 = DAT_00068208;
  }
  if ((param_2 != 0) || (*(char *)(iVar5 + 0x290) == '\0')) {
LAB_00033f5c:
    iVar3 = iVar3 - (int)(longlong)(*(double *)(iVar5 + 0x1c0) * 5.0 + 1.0);
    FUN_000206d8(local_830);
    cVar1 = DAT_000686f1;
    if (iVar3 < 5) {
      iVar3 = 5;
    }
    if (local_830[0] - *(int *)(param_1 + 0x108) < iVar3) {
      if (param_2 != 0 || DAT_00074f75 != '\x01') {
        return '\0';
      }
      iVar3 = FUN_0002fbd8();
      if (iVar5 == iVar3) {
        return '\0';
      }
      if (*(char *)(param_1 + 0x11a) != '\0') {
        return '\0';
      }
      if (DAT_00068af4 - 3U < 2) {
        return '\0';
      }
      if ((DAT_000686f1 != '\0') &&
         (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
        pcVar7 = "Work stale due to fail only pool mismatch";
LAB_000340bc:
        cVar1 = DAT_000686f1;
        local_828 = *(undefined4 *)pcVar7;
        uStack_824 = *(undefined4 *)(pcVar7 + 4);
        uStack_820 = *(undefined4 *)(pcVar7 + 8);
        uStack_81c = *(undefined4 *)(pcVar7 + 0xc);
        local_818 = *(undefined4 *)(pcVar7 + 0x10);
        uStack_814 = *(undefined4 *)(pcVar7 + 0x14);
        local_810 = *(uint *)(pcVar7 + 0x18);
        uStack_80c = *(undefined4 *)(pcVar7 + 0x1c);
        local_808 = *(uint *)(pcVar7 + 0x20);
        uStack_804 = *(undefined4 *)(pcVar7 + 0x24);
        local_800 = (undefined2)*(undefined4 *)(pcVar7 + 0x28);
        FUN_0001dd98(7,&local_828,0);
        return cVar1;
      }
    }
    else if ((DAT_000686f1 != '\0') &&
            (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
      local_828._0_1_ = 'W';
      local_828._1_1_ = 'o';
      local_828._2_1_ = 'r';
      local_828._3_1_ = 'k';
      uStack_824._0_1_ = ' ';
      uStack_824._1_1_ = 's';
      uStack_824._2_1_ = 't';
      uStack_824._3_1_ = 'a';
      uStack_820._0_1_ = 'l';
      uStack_820._1_1_ = 'e';
      uStack_820._2_1_ = ' ';
      uStack_820._3_1_ = 'd';
      uStack_81c._0_1_ = 'u';
      uStack_81c._1_1_ = 'e';
      uStack_81c._2_1_ = ' ';
      uStack_81c._3_1_ = 't';
      local_818._0_1_ = 'o';
      local_818._1_1_ = ' ';
      local_818._2_1_ = 'e';
      local_818._3_1_ = 'x';
      uStack_814._0_1_ = 'p';
      uStack_814._1_1_ = 'i';
      uStack_814._2_1_ = 'r';
      uStack_814._3_1_ = 'y';
      local_810 = local_810 & 0xffffff00;
      FUN_0001dd98(7,&local_828,0);
      return cVar1;
    }
    return '\x01';
  }
  if ((*(char *)(iVar5 + 0x291) == '\0') || (*(char *)(iVar5 + 0x293) == '\0')) {
    if (DAT_000686f1 == '\0') {
      return '\x01';
    }
    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 7)) {
      return '\x01';
    }
    local_828._0_1_ = 'W';
    local_828._1_1_ = 'o';
    local_828._2_1_ = 'r';
    local_828._3_1_ = 'k';
    uStack_824._0_1_ = ' ';
    uStack_824._1_1_ = 's';
    uStack_824._2_1_ = 't';
    uStack_824._3_1_ = 'a';
    uStack_820._0_1_ = 'l';
    uStack_820._1_1_ = 'e';
    uStack_820._2_1_ = ' ';
    uStack_820._3_1_ = 'd';
    uStack_81c._0_1_ = 'u';
    uStack_81c._1_1_ = 'e';
    uStack_81c._2_1_ = ' ';
    uStack_81c._3_1_ = 't';
    local_818._0_1_ = 'o';
    local_818._1_1_ = ' ';
    local_818._2_1_ = 's';
    local_818._3_1_ = 't';
    uStack_814._0_1_ = 'r';
    uStack_814._1_1_ = 'a';
    uStack_814._2_1_ = 't';
    uStack_814._3_1_ = 'u';
    local_810._0_1_ = 'm';
    local_810._1_1_ = ' ';
    local_810._2_1_ = 'i';
    local_810._3_1_ = 'n';
    uStack_80c._0_1_ = 'a';
    uStack_80c._1_1_ = 'c';
    uStack_80c._2_1_ = 't';
    uStack_80c._3_1_ = 'i';
    local_808 = CONCAT13(local_808._3_1_,0x6576);
    FUN_0001dd98(7,&local_828,0);
    return cVar1;
  }
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(iVar5 + 0xd4));
  if (iVar2 == 0) {
    __rwlock = (pthread_rwlock_t *)(iVar5 + 0xec);
    iVar2 = pthread_rwlock_rdlock(__rwlock);
    if (iVar2 != 0) goto LAB_000341c4;
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(iVar5 + 0xd4));
    if (iVar2 != 0) {
      piVar4 = __errno_location();
      uVar6 = 0x1424;
      pcVar7 = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
      goto LAB_000341f0;
    }
    iVar2 = strcmp(*(char **)(param_1 + 0x120),*(char **)(iVar5 + 0x2b0));
    if (iVar2 == 0) {
      iVar2 = pthread_rwlock_unlock(__rwlock);
      if (iVar2 == 0) {
        (*DAT_0006796c)();
        goto LAB_00033f5c;
      }
    }
    else {
      iVar3 = pthread_rwlock_unlock(__rwlock);
      if (iVar3 == 0) {
        (*DAT_0006796c)();
        if (DAT_000686f1 == '\0') {
          return '\x01';
        }
        if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 7)) {
          return '\x01';
        }
        pcVar7 = "Work stale due to stratum job_id mismatch";
        goto LAB_000340bc;
      }
    }
  }
  else {
    FUN_0002cbc0("stale_work",0x1424);
LAB_000341c4:
    FUN_0002dd20("stale_work",0x1424);
  }
  piVar4 = __errno_location();
  uVar6 = 0x142b;
  pcVar7 = "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d";
LAB_000341f0:
  snprintf((char *)&local_828,0x800,pcVar7,*piVar4,"cgminer.c","stale_work",uVar6);
  FUN_0001dd98(3,&local_828,1);
                    /* WARNING: Subroutine does not return */
  FUN_0002c290(1);
}

