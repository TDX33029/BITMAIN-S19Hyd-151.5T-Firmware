// FUN_0001aad0 @ 0001aad0  size=1148  callers=0
// program: cgminer


undefined4 FUN_0001aad0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  double dVar7;
  undefined8 uVar8;
  undefined2 local_854 [2];
  ulong local_850;
  undefined4 uStack_84c;
  ulong local_848;
  undefined4 uStack_844;
  ulong local_840;
  undefined4 uStack_83c;
  ulong local_838;
  undefined4 uStack_834;
  char local_830 [2056];
  
  local_850 = 0;
  uStack_84c = 0;
  local_830[4] = '\0';
  local_830[5] = '\0';
  local_830[6] = '\0';
  local_830[7] = '\0';
  local_830[0] = '\0';
  local_830[1] = '\0';
  local_830[2] = '\0';
  local_830[3] = '\0';
  local_854[0] = 0;
  local_848 = 0;
  uStack_844 = 0;
  local_840 = 0;
  uStack_83c = 0;
  local_838 = 0;
  uStack_834 = 0;
  if (param_2 == 0) {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
      snprintf(local_830 + 8,0x800,"%s: input bad api param\n","get_summary");
      FUN_0001dd98(3,local_830 + 8,0);
    }
    return 0x80000002;
  }
  FUN_000427b4(local_854,1);
  FUN_00016de4(param_1,param_2);
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00076310);
  if (iVar1 != 0) {
    piVar6 = __errno_location();
    snprintf(local_830 + 8,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar6,
             "api_new.c","get_summary",0x159);
    FUN_0001dd98(3,local_830 + 8,1);
    FUN_0003c34c(1);
  }
  FUN_00016920(param_1);
  uVar2 = FUN_00048fb8();
  uVar8 = FUN_00048c28();
  uVar3 = (undefined4)uVar8;
  if (DAT_00076330 < 2) {
    if (DAT_00076330 == 1) {
      FUN_0003d1f0(uVar3,(int)((ulonglong)uVar8 >> 0x20));
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
    }
  }
  else {
    uVar8 = FUN_0004ad64((undefined4)DAT_000681d0,DAT_000681d0._4_4_);
  }
  uVar4 = FUN_00049408((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  FUN_00049a4c(uVar3,"elapsed",uVar4);
  sscanf(&DAT_00076434,"%lf",&local_850);
  dVar7 = (double)CONCAT44(uStack_84c,local_850) * 100.0;
  FUN_0004ad64(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20));
  dVar7 = (double)FUN_0004accc();
  uVar4 = FUN_0004948c(SUB84(dVar7 / 100.0,0));
  FUN_00049a4c(uVar3,"rate_5s",uVar4);
  sscanf(&DAT_00076444,"%lf",&local_848);
  dVar7 = (double)CONCAT44(uStack_844,local_848) * 100.0;
  FUN_0004ad64(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20));
  dVar7 = (double)FUN_0004accc();
  uVar4 = FUN_0004948c(SUB84(dVar7 / 100.0,0));
  FUN_00049a4c(uVar3,"rate_30m",uVar4);
  sscanf(&DAT_00076454,"%lf",&local_840);
  dVar7 = (double)CONCAT44(uStack_83c,local_840) * 100.0;
  FUN_0004ad64(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20));
  dVar7 = (double)FUN_0004accc();
  uVar4 = FUN_0004948c(SUB84(dVar7 / 100.0,0));
  FUN_00049a4c(uVar3,"rate_avg",uVar4);
  sscanf(&DAT_00076464,"%lf",&local_838);
  dVar7 = (double)CONCAT44(uStack_834,local_838) * 100.0;
  FUN_0004ad64(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20));
  dVar7 = (double)FUN_0004accc();
  uVar4 = FUN_0004948c(SUB84(dVar7 / 100.0,0));
  FUN_00049a4c(uVar3,"rate_ideal",uVar4);
  snprintf(local_830,8,"%s/s",&DAT_00076474);
  uVar4 = FUN_000491bc(local_830);
  FUN_00049a4c(uVar3,"rate_unit",uVar4);
  uVar4 = FUN_00049408(DAT_00076070,DAT_00076070 >> 0x1f);
  FUN_00049a4c(uVar3,"hw_all",uVar4);
  uVar4 = FUN_00049408(DAT_00068b10,DAT_00068b14);
  FUN_00049a4c(uVar3,"bestshare",uVar4);
  iVar1 = FUN_00048fb8();
  if ((iVar1 != 0) && (DAT_000673d0 != 0)) {
    piVar6 = &DAT_000673d0;
    do {
      uVar4 = FUN_00048c28();
      uVar5 = FUN_000491bc(*piVar6);
      FUN_00049a4c(uVar4,&DAT_0004b1e8,uVar5);
      (*(code *)piVar6[1])(uVar4,piVar6);
      FUN_00049f0c(iVar1,uVar4);
      piVar6 = piVar6 + 6;
    } while (*piVar6 != 0);
  }
  FUN_00049a4c(uVar3,"status",iVar1);
  FUN_00049f0c(uVar2,uVar3);
  FUN_00049a4c(param_1,"SUMMARY",uVar2);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00076310);
  if (iVar1 != 0) {
    piVar6 = __errno_location();
    snprintf(local_830 + 8,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar6,
             "api_new.c","get_summary",0x18e);
    FUN_0001dd98(3,local_830 + 8,1);
    FUN_0003c34c(1);
  }
  (*DAT_0006796c)();
  return 0;
}

