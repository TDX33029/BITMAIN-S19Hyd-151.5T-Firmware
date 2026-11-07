// FUN_00019dc8 @ 00019dc8  size=1024  callers=1
// program: bmminer


undefined4 FUN_00019dc8(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char *__s2;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined1 auStack_924 [252];
  char local_828 [2052];
  
  iVar8 = 0;
  do {
    iVar2 = FUN_000201d8(iVar8);
    if (iVar2 != 0) {
      FUN_0004999c(iVar8);
      FUN_00034a5c(10);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 4);
  memset(&DAT_0008908c,0,0x140);
  piVar3 = (int *)FUN_00054e88("/etc/levels.json",0,auStack_924);
  if ((piVar3 == (int *)0x0) || (*piVar3 != 0)) {
    if (DAT_00087bbc < 4) {
      return 0xffffffff;
    }
    snprintf(local_828,0x800,"load vol-freq config file %s failed\n","/etc/levels.json");
    FUN_00032218(3,local_828,0);
    return 0xffffffff;
  }
  piVar4 = (int *)FUN_000559d4(piVar3,"miner");
  if ((piVar4 == (int *)0x0) || (*piVar4 != 2)) {
    if (DAT_00087bbc < 5) {
      return 0xfffffffe;
    }
    pcVar7 = "failed to get miner type in %s\n";
LAB_00019f14:
    uVar9 = 0xfffffffe;
    snprintf(local_828,0x800,pcVar7,"/etc/levels.json");
    FUN_00032218(4,local_828,0);
  }
  else {
    if (4 < DAT_00087bbc) {
      pcVar7 = (char *)FUN_00055f08();
      snprintf(local_828,0x800,"miner type in %s is %s","/etc/levels.json",pcVar7);
      FUN_00032218(4,local_828,0);
    }
    pcVar7 = (char *)FUN_00055f08(piVar4);
    pcVar7 = strstr(&DAT_0008a528,pcVar7);
    if (pcVar7 != (char *)0x0) {
      __s2 = (char *)FUN_00055f08(piVar4);
      iVar8 = strcasecmp(pcVar7,__s2);
      if (iVar8 == 0) {
        uVar12 = FUN_000559d4(piVar3,"levels");
        pcVar7 = (char *)((ulonglong)uVar12 >> 0x20);
        piVar4 = (int *)uVar12;
        if ((piVar4 != (int *)0x0) && (*piVar4 == 1)) {
          uVar10 = 0;
          iVar8 = 0;
          while( true ) {
            uVar5 = FUN_00055d40(piVar4,pcVar7);
            uVar11 = uVar10 + 1;
            if (0x27 < iVar8 || uVar5 <= uVar10) break;
            uVar9 = FUN_00055d5c(piVar4,uVar10);
            pcVar7 = "frequency";
            uVar10 = uVar11;
            if (*piVar3 == 0) {
              uVar12 = FUN_000559d4();
              pcVar7 = (char *)((ulonglong)uVar12 >> 0x20);
              if (((int *)uVar12 != (int *)0x0) && (*(int *)uVar12 == 3)) {
                uVar6 = FUN_00056164();
                (&DAT_00089090)[iVar8 * 2] = uVar6;
                uVar12 = FUN_000559d4(uVar9,"voltage");
                pcVar7 = (char *)((ulonglong)uVar12 >> 0x20);
                if (((int *)uVar12 != (int *)0x0) && (*(int *)uVar12 == 3)) {
                  uVar12 = FUN_00056164();
                  pcVar7 = (char *)((ulonglong)uVar12 >> 0x20);
                  (&DAT_0008908c)[iVar8 * 2] = (int)uVar12;
                  iVar8 = iVar8 + 1;
                }
              }
            }
          }
          iVar8 = 0;
          do {
            iVar2 = iVar8 + 1;
            if ((((&DAT_0008908c)[iVar8 * 2] != 0) && ((&DAT_00089090)[iVar8 * 2] != 0)) &&
               (4 < DAT_00087bbc)) {
              snprintf(local_828,0x800,"level %d, voltage = %d frequency = %d",iVar2,
                       (&DAT_0008908c)[iVar8 * 2],(&DAT_00089090)[iVar8 * 2]);
              FUN_00032218(4,local_828,0);
            }
            iVar8 = iVar2;
          } while (iVar2 != 0x28);
          if (piVar3[1] == -1) {
            return 0;
          }
          piVar4 = piVar3 + 1;
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar4;
            bVar1 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar1);
          *piVar4 = iVar8 + -1;
          if (iVar8 + -1 == 0) {
            FUN_0005630c(piVar3);
            return 0;
          }
          return 0;
        }
        if (DAT_00087bbc < 5) {
          return 0xfffffffe;
        }
        pcVar7 = "failed to get levels in %s\n";
        goto LAB_00019f14;
      }
    }
    if (DAT_00087bbc < 4) {
      uVar9 = 0xfffffffd;
    }
    else {
      uVar9 = 0xfffffffd;
      builtin_strncpy(local_828,"miner type not match",0x15);
      FUN_00032218(3,local_828,0);
    }
  }
  return uVar9;
}

