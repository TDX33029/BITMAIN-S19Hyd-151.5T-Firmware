// FUN_00021028 @ 00021028  size=840  callers=2
// program: cgminer


undefined1 FUN_00021028(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char *__s1;
  undefined4 uVar5;
  size_t sVar6;
  int iVar7;
  undefined1 uVar8;
  int local_924 [23];
  char acStack_8c8 [160];
  char acStack_828 [2052];
  
  iVar2 = FUN_00047e04(param_2,0,local_924);
  if (iVar2 == 0) {
    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 6)) {
      return 0;
    }
    snprintf(acStack_828,0x800,"JSON decode failed(%d): %s",local_924[0],acStack_8c8);
    FUN_0001dd98(6,acStack_828,0);
    return 0;
  }
  piVar3 = (int *)FUN_00048cac(iVar2,"result");
  piVar4 = (int *)FUN_00048cac(iVar2,"error");
  if (((piVar3 != (int *)0x0) && (*piVar3 != 7)) && ((piVar4 == (int *)0x0 || (*piVar4 == 7)))) {
    FUN_00048f14(piVar3);
    __s1 = (char *)FUN_00048f94();
    if (__s1 != (char *)0x0) {
      uVar8 = 0;
      do {
        FUN_00048fac(__s1);
        piVar4 = (int *)FUN_00048fa0();
        if (piVar4 == (int *)0x0) break;
        iVar7 = strcasecmp(__s1,"version-rolling");
        if ((iVar7 == 0) && (sVar6 = strlen(__s1), sVar6 == 0xf)) {
          if (*piVar4 != 5) {
            if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
              snprintf(acStack_828,0x800,"Pool %d don\'t support ab!",*param_1);
              FUN_0001dd98(5,acStack_828,0);
            }
            *(undefined1 *)(param_1 + 0xa5) = 0;
            uVar8 = 1;
            param_1[0xa6] = 1;
            break;
          }
          if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
            snprintf(acStack_828,0x800,"POOL %d support ab mode!",*param_1);
            FUN_0001dd98(5,acStack_828,0);
          }
        }
        else {
          iVar7 = strcasecmp(__s1,"version-rolling.mask");
          if ((iVar7 == 0) && (sVar6 = strlen(__s1), sVar6 == 0x14)) {
            uVar8 = 1;
            uVar5 = FUN_000491e0(piVar4);
            FUN_00020de0(param_1,uVar5);
          }
          else if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
            snprintf(acStack_828,0x800,"JSON-RPC unexpected mining.configure value: %s",__s1);
            FUN_0001dd98(3,acStack_828,0);
          }
        }
        uVar5 = FUN_00048fac(__s1);
        FUN_00048f60(piVar3,uVar5);
        __s1 = (char *)FUN_00048f94();
      } while (__s1 != (char *)0x0);
      goto LAB_0002109c;
    }
  }
  uVar8 = 0;
LAB_0002109c:
  if (*(int *)(iVar2 + 4) != -1) {
    piVar3 = (int *)(iVar2 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar7 + -1;
    if (iVar7 + -1 == 0) {
      FUN_000495e4(iVar2);
    }
  }
  return uVar8;
}

