// FUN_0001a700 @ 0001a700  size=964  callers=0
// program: cgminer


undefined4 FUN_0001a700(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  undefined2 local_83c [2];
  char local_838 [8];
  undefined4 local_830;
  undefined4 local_82c;
  char acStack_828 [2052];
  
  local_82c = 0;
  local_838[0] = '\0';
  local_838[1] = '\0';
  local_838[2] = '\0';
  local_838[3] = '\0';
  local_838[4] = '\0';
  local_838[5] = '\0';
  local_838[6] = '\0';
  local_838[7] = '\0';
  local_830 = 0;
  local_83c[0] = 0;
  if (param_2 == 0) {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
      snprintf(acStack_828,0x800,"%s: input bad api param\n","get_rate");
      FUN_0001dd98(3,acStack_828,0);
    }
    return 0x80000002;
  }
  FUN_000427b4(local_83c,1);
  FUN_00016de4(param_1,param_2);
  FUN_00016920(param_1);
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00076310);
  if (iVar1 != 0) {
    piVar10 = __errno_location();
    snprintf(acStack_828,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar10,
             "api_new.c","get_rate",0x271);
    FUN_0001dd98(3,acStack_828,1);
    FUN_0003c34c(1);
  }
  iVar1 = DAT_00077d2c;
  iVar9 = DAT_00077d2c;
  if (0x17 < DAT_00077d2c) {
    iVar9 = 0x18;
  }
  uVar2 = FUN_00048fb8();
  uVar3 = FUN_00048c28();
  snprintf((char *)&local_830,8,"%s/s",&DAT_00076474);
  uVar4 = FUN_000491bc(&local_830);
  FUN_00049a4c(uVar3,&DAT_0004b9e8,uVar4);
  uVar4 = FUN_00048fb8();
  if (0 < iVar1) {
    iVar8 = 0;
    iVar11 = 0xf;
    do {
      local_838[0] = '\0';
      local_838[1] = '\0';
      local_838[2] = '\0';
      local_838[3] = '\0';
      iVar8 = iVar8 + 1;
      local_838[4] = '\0';
      local_838[5] = '\0';
      local_838[6] = '\0';
      local_838[7] = '\0';
      snprintf(local_838,8,"%dmin",iVar11);
      uVar5 = FUN_000491bc(local_838);
      FUN_00049f0c(uVar4,uVar5);
      iVar11 = iVar11 + 0xf;
    } while (iVar8 < iVar9);
  }
  FUN_00049a4c(uVar3,"xAxis",uVar4);
  uVar4 = FUN_00048fb8();
  if (0 < DAT_0007632c) {
    piVar10 = &DAT_000765ec;
    iVar11 = 0;
    do {
      uVar5 = FUN_00048c28();
      iVar8 = 0;
      local_838[0] = '\0';
      local_838[1] = '\0';
      local_838[2] = '\0';
      local_838[3] = '\0';
      local_838[4] = '\0';
      local_838[5] = '\0';
      local_838[6] = '\0';
      local_838[7] = '\0';
      snprintf(local_838,8,"chain%d",piVar10[-0x57]);
      uVar6 = FUN_000491bc(local_838);
      FUN_00049a4c(uVar5,&DAT_0004ba08,uVar6);
      uVar6 = FUN_00048fb8();
      if (0 < iVar1) {
        piVar12 = piVar10;
        do {
          piVar12 = piVar12 + 1;
          iVar8 = iVar8 + 1;
          uVar7 = FUN_00049408(*piVar12,*piVar12 >> 0x1f);
          FUN_00049f0c(uVar6,uVar7);
        } while (iVar8 < iVar9);
      }
      iVar11 = iVar11 + 1;
      FUN_00049a4c(uVar5,&DAT_0004ba10,uVar6);
      FUN_00049f0c(uVar4,uVar5);
      piVar10 = piVar10 + 0x184;
    } while (iVar11 < DAT_0007632c);
  }
  FUN_00049a4c(uVar3,"series",uVar4);
  FUN_00049f0c(uVar2,uVar3);
  FUN_00049a4c(param_1,&DAT_0004ba20,uVar2);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00076310);
  if (iVar1 != 0) {
    piVar10 = __errno_location();
    snprintf(acStack_828,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar10,
             "api_new.c","get_rate",0x298);
    FUN_0001dd98(3,acStack_828,1);
    FUN_0003c34c(1);
  }
  (*DAT_0006796c)();
  return 0;
}

