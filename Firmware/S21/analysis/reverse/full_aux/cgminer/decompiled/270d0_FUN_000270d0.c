// FUN_000270d0 @ 000270d0  size=1016  callers=2
// program: cgminer


uint FUN_000270d0(int *param_1)

{
  bool bVar1;
  size_t sVar2;
  uint uVar3;
  void *__ptr;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  undefined1 auStack_2914 [252];
  char local_2818 [2048];
  char acStack_2018 [8192];
  
  iVar4 = DAT_00072dcc;
  DAT_00072dcc = DAT_00072dcc + 1;
  sprintf(acStack_2018,"{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}",
          iVar4);
  sVar2 = strlen(acStack_2018);
  uVar3 = FUN_000214d4(param_1,acStack_2018,sVar2);
  if (uVar3 != 0) {
    while (uVar5 = FUN_0001f2cc(param_1[0x93],2), uVar5 != 0) {
      __ptr = (void *)FUN_00021888(param_1);
      if (__ptr == (void *)0x0) {
        return 0;
      }
      iVar4 = FUN_000264e0(param_1,__ptr);
      if (iVar4 == 0) {
        iVar4 = FUN_00047e04(__ptr,0,auStack_2914);
        free(__ptr);
        piVar6 = (int *)FUN_00048cac(iVar4,"result");
        piVar7 = (int *)FUN_00048cac(iVar4,"error");
        if ((piVar6 == (int *)0x0) || (*piVar6 == 6)) {
          if (piVar7 != (int *)0x0) goto LAB_00027290;
          pcVar8 = malloc(0x11);
          if (pcVar8 != (char *)0x0) {
            builtin_strncpy(pcVar8,"(unknown reason)",0x11);
          }
        }
        else {
          if ((piVar7 == (int *)0x0) || (*piVar7 == 7)) {
            if ((DAT_00072da0 != '\0') || ((DAT_000686f0 != '\0' || (5 < DAT_00067848)))) {
              snprintf(local_2818,0x800,"Stratum extranonce subscribe for pool %d",*param_1);
              FUN_0001dd98(6,local_2818,0);
            }
            goto LAB_000273d4;
          }
LAB_00027290:
          pcVar8 = (char *)FUN_0001f360(piVar7,1);
          if (((pcVar8 != (char *)0x0) ||
              (pcVar8 = (char *)FUN_000491e0(piVar7), pcVar8 != (char *)0x0)) &&
             ((iVar9 = strcmp(pcVar8,
                              "Method \'subscribe\' not found for service \'mining.extranonce\'"),
              iVar9 == 0 || (iVar9 = strcmp(pcVar8,"Unrecognized request provided"), iVar9 == 0))))
          {
            if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
              snprintf(local_2818,0x800,"Cannot subscribe to mining.extranonce for pool %d",*param_1
                      );
              FUN_0001dd98(6,local_2818,0);
            }
            goto LAB_000273d4;
          }
          pcVar8 = (char *)FUN_00045c20(piVar7,3);
        }
        if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
          snprintf(local_2818,0x800,"Pool %d JSON extranonce subscribe failed: %s",*param_1,pcVar8);
          FUN_0001dd98(6,local_2818,0);
        }
        uVar5 = 0;
        free(pcVar8);
LAB_000273d4:
        if (iVar4 == 0) {
          return uVar5;
        }
        if (*(int *)(iVar4 + 4) == -1) {
          return uVar5;
        }
        piVar6 = (int *)(iVar4 + 4);
        DataMemoryBarrier(0xb);
        do {
          iVar9 = *piVar6;
          bVar1 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar1);
        *piVar6 = iVar9 + -1;
        if (iVar9 + -1 == 0) {
          FUN_000495e4(iVar4);
          return uVar5;
        }
        return uVar5;
      }
      free(__ptr);
    }
    uVar5 = (uint)DAT_000686f1;
    if ((uVar5 != 0) &&
       (((uVar3 = uVar5, DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
      builtin_strncpy(local_2818,"Timed out waiting for response extranonce.subscribe",0x34);
      FUN_0001dd98(7,local_2818,0);
    }
  }
  return uVar3;
}

