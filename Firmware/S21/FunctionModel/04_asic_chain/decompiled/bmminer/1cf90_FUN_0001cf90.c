// FUN_0001cf90 @ 0001cf90  size=688  callers=3
// program: bmminer


undefined4 FUN_0001cf90(uint param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  char local_2020 [8196];
  
  if ((DAT_000c0410 == 0) || (*(char *)(DAT_000c0410 + 0x1c) == '\0')) {
    if (DAT_000be63c < 5) {
      return 0xffffffff;
    }
    snprintf(local_2020,0x2000,"No work mode voltage, chain = %d, mode = %d.\n",param_1,param_2);
    FUN_0004948c(4,local_2020,0);
    return 0xffffffff;
  }
  iVar5 = *(int *)(DAT_000c0410 + param_1 * 4);
  iVar1 = (**(code **)(iVar5 + 0xc4))(iVar5);
  iVar5 = (**(code **)(iVar5 + 0xcc))(iVar5);
  iVar2 = FUN_0002c3f4();
  if ((iVar2 != 0) && (iVar2 = FUN_0002c414(), iVar2 != 0)) {
    iVar5 = FUN_0002c514(param_1 & 0xff);
    iVar1 = FUN_0002c4fc(param_1 & 0xff);
  }
  pcVar3 = (char *)FUN_0002a4e4();
  iVar2 = strcmp(pcVar3,"H6HB70601");
  if (iVar2 != 0) {
    pcVar3 = (char *)FUN_0002a4e4();
    iVar2 = strcmp(pcVar3,"H6HB70602");
    if (iVar2 != 0) {
      pcVar3 = (char *)FUN_0002a4e4();
      iVar2 = strcmp(pcVar3,"H6HB70501");
      if (iVar2 != 0) {
        pcVar3 = (char *)FUN_0002a4e4();
        iVar2 = strcmp(pcVar3,"H6HB70801");
        if (iVar2 != 0) {
          pcVar3 = (char *)FUN_0002a4e4();
          iVar2 = strcmp(pcVar3,"H6HB70802");
          if (iVar2 != 0) {
            piVar4 = &DAT_000c02c4;
            while ((piVar4[-1] == 0 ||
                   (*piVar4 != iVar5 ||
                    (param_3 == (int *)0x0 || (*piVar4 == 0 || piVar4[-1] != iVar1))))) {
              piVar4 = piVar4 + 2;
              if (piVar4 == &DAT_000c0404) {
                if (DAT_000be63c < 5) {
                  return 0xfffffffe;
                }
                builtin_strncpy(local_2020,"voltage level not match",0x18);
                FUN_0004948c(4,local_2020,0);
                return 0xfffffffe;
              }
            }
            goto LAB_0001d234;
          }
        }
      }
    }
  }
  if ((((iVar1 < DAT_000c0400) || (DAT_000c0408 < iVar1)) || (iVar5 < DAT_000c0404)) ||
     (param_3 == (int *)0x0 || DAT_000c040c < iVar5)) {
    if (DAT_000be63c < 5) {
      return 0xfffffffe;
    }
    builtin_strncpy(local_2020,"voltage level out of range",0x1b);
    FUN_0004948c(4,local_2020,0);
    return 0xfffffffe;
  }
LAB_0001d234:
  *param_3 = iVar1;
  return 0;
}

