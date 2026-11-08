// FUN_0001af70 @ 0001af70  size=2196  callers=1
// program: cgminer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001af70(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint in_fpscr;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined2 local_854 [2];
  ulong local_850;
  undefined4 uStack_84c;
  ulong local_848;
  undefined4 uStack_844;
  ulong local_840;
  undefined4 uStack_83c;
  char acStack_838 [2052];
  
  local_850 = 0;
  uStack_84c = 0;
  local_848 = 0;
  uStack_844 = 0;
  local_840 = 0;
  uStack_83c = 0;
  local_854[0] = 0;
  if (param_1 == 0 || param_2 == 0) {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
      snprintf(acStack_838,0x800,"%s: input bad api param\n","get_summary_old");
      FUN_0001dd98(3,acStack_838,0);
    }
    return 0x80000002;
  }
  FUN_000427b4(local_854,1);
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00076310);
  if (iVar1 != 0) {
    piVar5 = __errno_location();
    snprintf(acStack_838,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar5,"api_new.c"
             ,"get_summary_old",0x2ed);
    FUN_0001dd98(3,acStack_838,1);
    FUN_0003c34c(1);
  }
  FUN_00016a60(param_1,1,0xb,*(undefined4 *)(param_2 + 8));
  uVar2 = FUN_00048fb8();
  uVar3 = FUN_00048c28();
  FUN_0004ad64((undefined4)DAT_000681d0,DAT_000681d0._4_4_);
  uVar4 = FUN_00049408();
  FUN_00049a4c(uVar3,"Elapsed",uVar4);
  sscanf(&DAT_00076434,"%lf",&local_850);
  dVar6 = (double)CONCAT44(uStack_84c,local_850) * 100.0;
  FUN_0004ad64(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
  dVar6 = (double)FUN_0004accc();
  uVar4 = FUN_0004948c(SUB84(dVar6 / 100.0,0));
  FUN_00049a4c(uVar3,"GHS 5s",uVar4);
  sscanf(&DAT_00076454,"%lf",&local_840);
  dVar6 = (double)CONCAT44(uStack_83c,local_840) * 100.0;
  FUN_0004ad64(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
  dVar6 = (double)FUN_0004accc();
  uVar4 = FUN_0004948c(SUB84(dVar6 / 100.0,0));
  FUN_00049a4c(uVar3,"GHS av",uVar4);
  sscanf(&DAT_00076444,"%lf",&local_848);
  dVar6 = (double)CONCAT44(uStack_844,local_848) * 100.0;
  FUN_0004ad64(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
  dVar6 = (double)FUN_0004accc();
  uVar4 = FUN_0004948c(SUB84(dVar6 / 100.0,0));
  FUN_00049a4c(uVar3,"GHS 30m",uVar4);
  uVar4 = FUN_00049408(DAT_00076084,0);
  FUN_00049a4c(uVar3,"Found Blocks",uVar4);
  uVar4 = FUN_00049408(DAT_00074f98,DAT_00074f9c);
  FUN_00049a4c(uVar3,"Getwork",uVar4);
  uVar4 = FUN_00049408(DAT_00072f00,DAT_00072f04);
  FUN_00049a4c(uVar3,"Accepted",uVar4);
  uVar4 = FUN_00049408(DAT_00074fc8,DAT_00074fcc);
  FUN_00049a4c(uVar3,"Rejected",uVar4);
  uVar4 = FUN_00049408(DAT_00076070,(int)DAT_00076070 >> 0x1f);
  FUN_00049a4c(uVar3,"Hardware Errors",uVar4);
  dVar6 = DAT_00074f38 + _DAT_00074fc0 + DAT_00072f08;
  uVar8 = FUN_0004ad64(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
  DAT_00072ddc = (int)((ulonglong)uVar8 >> 0x20);
  DAT_00072dd8 = (uint)uVar8;
  dVar6 = (double)FUN_0004accc(DAT_00072f00,DAT_00072f04);
  in_fpscr = in_fpscr & 0xfffffff;
  if ((double)CONCAT44(DAT_000681d0._4_4_,(undefined4)DAT_000681d0) != 0.0) {
    dVar6 = dVar6 / (double)CONCAT44(DAT_000681d0._4_4_,(undefined4)DAT_000681d0);
  }
  dVar6 = dVar6 * 60.0 * 100.0;
  FUN_0004ad64(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
  dVar6 = (double)FUN_0004accc();
  dVar6 = (dVar6 / 100.0) * 100.0;
  FUN_0004ad64(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
  dVar6 = (double)FUN_0004accc();
  uVar4 = FUN_0004948c(SUB84(dVar6 / 100.0,0));
  FUN_00049a4c(uVar3,"Utility",uVar4);
  uVar4 = FUN_00049408(DAT_00075018,DAT_0007501c);
  FUN_00049a4c(uVar3,"Discarded",uVar4);
  uVar4 = FUN_00049408(DAT_000762d8,DAT_000762dc);
  FUN_00049a4c(uVar3,"Stale",uVar4);
  uVar4 = FUN_00049408(DAT_00072f18,0);
  FUN_00049a4c(uVar3,"Get Failures",uVar4);
  uVar4 = FUN_00049408(DAT_00072f24,0);
  FUN_00049a4c(uVar3,"Local Work",uVar4);
  uVar4 = FUN_00049408(DAT_00072dbc,0);
  FUN_00049a4c(uVar3,"Remote Failures",uVar4);
  uVar4 = FUN_00049408(DAT_000761e8,0);
  FUN_00049a4c(uVar3,"Network Blocks",uVar4);
  FUN_0004ad64(SUB84(DAT_00072d98 * 100.0,0),(int)((ulonglong)(DAT_00072d98 * 100.0) >> 0x20));
  dVar6 = (double)FUN_0004accc();
  uVar4 = FUN_0004948c(SUB84(dVar6 / 100.0,0));
  FUN_00049a4c(uVar3,"Total MH",uVar4);
  dVar6 = (double)FUN_0004accc(DAT_00072dd8,DAT_00072ddc);
  in_fpscr = in_fpscr & 0xfffffff;
  if ((double)CONCAT44(DAT_000681d0._4_4_,(undefined4)DAT_000681d0) != 0.0) {
    dVar6 = dVar6 / (double)CONCAT44(DAT_000681d0._4_4_,(undefined4)DAT_000681d0);
  }
  dVar6 = dVar6 * 60.0 * 100.0;
  FUN_0004ad64(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
  dVar6 = (double)FUN_0004accc();
  uVar4 = FUN_0004948c(SUB84(dVar6 / 100.0,0));
  FUN_00049a4c(uVar3,"Work Utility",uVar4);
  FUN_0004ad64(SUB84(DAT_00074f38 * 100.0,0),(int)((ulonglong)(DAT_00074f38 * 100.0) >> 0x20));
  dVar6 = (double)FUN_0004accc();
  uVar4 = FUN_0004948c(SUB84(dVar6 / 100.0,0));
  FUN_00049a4c(uVar3,"Difficulty Accepted",uVar4);
  FUN_0004ad64(SUB84(_DAT_00074fc0 * 100.0,0),(int)((ulonglong)(_DAT_00074fc0 * 100.0) >> 0x20));
  dVar6 = (double)FUN_0004accc();
  uVar4 = FUN_0004948c(SUB84(dVar6 / 100.0,0));
  FUN_00049a4c(uVar3,"Difficulty Rejected",uVar4);
  FUN_0004ad64(SUB84(DAT_00072f08 * 100.0,0),(int)((ulonglong)(DAT_00072f08 * 100.0) >> 0x20));
  dVar6 = (double)FUN_0004accc();
  uVar4 = FUN_0004948c(SUB84(dVar6 / 100.0,0));
  FUN_00049a4c(uVar3,"Difficulty Stale",uVar4);
  uVar4 = FUN_00049408(DAT_00068b10,DAT_00068b14);
  FUN_00049a4c(uVar3,"Best Share",uVar4);
  iVar1 = DAT_00072ddc + ((int)DAT_00076070 >> 0x1f) + (uint)CARRY4(DAT_00072dd8,DAT_00076070);
  if (DAT_00072dd8 + DAT_00076070 == 0 && iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    dVar7 = (double)VectorSignedToFloat(DAT_00076070,(byte)(in_fpscr >> 0x16) & 3);
    dVar6 = (double)FUN_0004accc(DAT_00072dd8 + DAT_00076070,iVar1);
    dVar6 = (dVar7 / dVar6) * 100.0;
    FUN_0004ad64(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
    dVar6 = (double)FUN_0004accc();
    uVar4 = SUB84(dVar6 / 100.0,0);
  }
  uVar4 = FUN_0004948c(uVar4);
  FUN_00049a4c(uVar3,"Device Hardware%",uVar4);
  if (DAT_00072dd8 == 0 && DAT_00072ddc == 0) {
    uVar4 = 0;
  }
  else {
    dVar6 = (double)FUN_0004accc();
    dVar6 = (_DAT_00074fc0 / dVar6) * 100.0;
    FUN_0004ad64(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
    dVar6 = (double)FUN_0004accc();
    uVar4 = SUB84(dVar6 / 100.0,0);
  }
  uVar4 = FUN_0004948c(uVar4);
  FUN_00049a4c(uVar3,"Device Rejected%",uVar4);
  dVar6 = _DAT_00074fc0 + DAT_00074f38 + DAT_00072f08;
  if (dVar6 == 0.0) {
    uVar4 = 0;
  }
  else {
    dVar6 = (_DAT_00074fc0 / dVar6) * 100.0;
    FUN_0004ad64(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
    dVar6 = (double)FUN_0004accc();
    uVar4 = SUB84(dVar6 / 100.0,0);
  }
  uVar4 = FUN_0004948c(uVar4);
  FUN_00049a4c(uVar3,"Pool Rejected%",uVar4);
  dVar6 = DAT_00074f38 + _DAT_00074fc0 + DAT_00072f08;
  if (dVar6 == 0.0) {
    uVar4 = 0;
  }
  else {
    dVar6 = (DAT_00072f08 / dVar6) * 100.0;
    FUN_0004ad64(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
    dVar6 = (double)FUN_0004accc();
    uVar4 = SUB84(dVar6 / 100.0,0);
  }
  uVar4 = FUN_0004948c(uVar4);
  FUN_00049a4c(uVar3,"Pool Stale%",uVar4);
  uVar4 = FUN_00049408(DAT_00076090,DAT_00076090 >> 0x1f);
  FUN_00049a4c(uVar3,"Last getwork",uVar4);
  FUN_00049f0c(uVar2,uVar3);
  FUN_00049a4c(param_1,"SUMMARY",uVar2);
  uVar2 = FUN_00049408(1,0);
  FUN_00049a4c(param_1,&DAT_0004b220,uVar2);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00076310);
  if (iVar1 != 0) {
    piVar5 = __errno_location();
    snprintf(acStack_838,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar5,
             "api_new.c","get_summary_old",0x335);
    FUN_0001dd98(3,acStack_838,1);
    FUN_0003c34c(1);
  }
  (*DAT_0006796c)();
  return 0;
}

