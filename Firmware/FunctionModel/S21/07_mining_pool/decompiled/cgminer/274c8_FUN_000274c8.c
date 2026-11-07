// FUN_000274c8 @ 000274c8  size=752  callers=2
// program: cgminer


int FUN_000274c8(int *param_1)

{
  bool bVar1;
  int param3;
  size_t sVar2;
  int iVar3;
  int iVar4;
  void *__ptr;
  int *piVar5;
  int *piVar6;
  char *param4;
  int iVar7;
  undefined1 auStack_291c [252];
  char acStack_2820 [2048];
  char acStack_2020 [8196];
  
  iVar3 = DAT_00072dcc;
  DAT_00072dcc = DAT_00072dcc + 1;
  sprintf(acStack_2020,
          "{\"id\": %d, \"method\": \"mining.authorize\", \"params\": [\"%s\", \"%s\"]}",iVar3,
          (char *)param_1[0x2b],(char *)param_1[0x2c]);
  sVar2 = strlen(acStack_2020);
  iVar3 = FUN_000214d4(param_1,acStack_2020,sVar2);
  if (iVar3 != 0) {
    while (__ptr = (void *)FUN_00021888(param_1), __ptr != (void *)0x0) {
      iVar4 = FUN_000264e0(param_1,__ptr);
      if (iVar4 == 0) {
        iVar4 = FUN_00047e04(__ptr,0,auStack_291c);
        free(__ptr);
        piVar5 = (int *)FUN_00048cac(iVar4,"result");
        piVar6 = (int *)FUN_00048cac(iVar4,"error");
        if ((piVar5 == (int *)0x0) || (*piVar5 == 6)) {
          if (piVar6 != (int *)0x0) goto LAB_000275dc;
          param4 = malloc(0x11);
          if (param4 != (char *)0x0) {
            builtin_strncpy(param4,"(unknown reason)",0x11);
          }
        }
        else {
          if ((piVar6 == (int *)0x0) || (*piVar6 == 7)) {
            if ((DAT_00072da0 != '\0') || ((DAT_000686f0 != '\0' || (5 < DAT_00067848)))) {
              snprintf(acStack_2820,0x800,"Stratum authorisation success for pool %d",*param_1);
              FUN_0001dd98(6,acStack_2820,0);
            }
            param3 = DAT_000761f0;
            DAT_000686f2 = 1;
            *(undefined1 *)((int)param_1 + 99) = 1;
            iVar7 = DAT_00072dcc;
            if (param3 != 0) {
              DAT_00072dcc = DAT_00072dcc + 1;
              sprintf(acStack_2020,
                      "{\"id\": %d, \"method\": \"mining.suggest_difficulty\", \"params\": [%d]}",
                      iVar7,param3);
              sVar2 = strlen(acStack_2020);
              FUN_000214d4(param_1,acStack_2020,sVar2);
            }
            goto LAB_00027634;
          }
LAB_000275dc:
          param4 = (char *)FUN_00045c20(piVar6,3);
        }
        if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
          snprintf(acStack_2820,0x800,"pool %d JSON stratum auth failed: %s",*param_1,param4);
          FUN_0001dd98(6,acStack_2820,0);
        }
        free(param4);
        FUN_00021370(param_1);
        iVar3 = 0;
LAB_00027634:
        if (iVar4 == 0) {
          return iVar3;
        }
        if (*(int *)(iVar4 + 4) == -1) {
          return iVar3;
        }
        piVar5 = (int *)(iVar4 + 4);
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar7 + -1;
        if (iVar7 + -1 == 0) {
          FUN_000495e4(iVar4);
          return iVar3;
        }
        return iVar3;
      }
      free(__ptr);
    }
  }
  return 0;
}

