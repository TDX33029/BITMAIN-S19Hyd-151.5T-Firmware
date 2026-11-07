// FUN_0003de10 @ 0003de10  size=1760  callers=1
// program: cgminer


void FUN_0003de10(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  char *__s2;
  int iVar14;
  undefined1 auStack_1224 [92];
  char acStack_11c8 [160];
  char acStack_1128 [2048];
  char acStack_928 [2308];
  
  if ((DAT_000686f1 != '\0') &&
     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    snprintf(acStack_928,0x800,"START %s","load_default_config_without_restart");
    FUN_0001dd98(7,acStack_928,0);
  }
  if (DAT_00068a18 != (void *)0x0) {
    free(DAT_00068a18);
  }
  DAT_00068a18 = (char *)FUN_0001f860(0x1000,"cgminer.c","load_default_config_without_restart",
                                      0x2eb7);
  FUN_0002b3d0();
  iVar2 = access(DAT_00068a18,4);
  pcVar10 = DAT_00068a18;
  if (iVar2 != 0) {
    free(DAT_00068a18);
    DAT_00068a18 = (char *)0x0;
    return;
  }
  if ((DAT_000686f1 != '\0') &&
     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    snprintf(acStack_928,0x800,"start %s\n","judge_load_config");
    FUN_0001dd98(7,acStack_928,0);
  }
  __s2 = acStack_928;
  memset(__s2,0,0x900);
  if (pcVar10 == (char *)0x0) {
    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) {
      return;
    }
    snprintf(acStack_1128,0x800,"%s: bad param","judge_load_config");
    FUN_0001dd98(3,acStack_1128,0);
    return;
  }
  piVar3 = (int *)FUN_0004815c(pcVar10,0,auStack_1224);
  if ((piVar3 == (int *)0x0) || (*piVar3 != 0)) {
    if ((DAT_00072da0 == '\0') && ((DAT_000686f0 == '\0' && (DAT_00067848 < 3)))) {
      return;
    }
    snprintf(acStack_1128,0x800,"%s: JSON decode of file \'%s\' failed\n %s","judge_load_config",
             pcVar10,acStack_11c8);
    FUN_0001dd98(3,acStack_1128,0);
    return;
  }
  if ((DAT_000686f1 != '\0') &&
     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    snprintf(acStack_1128,0x800,"%s: after json_load_file\n","judge_load_config");
    FUN_0001dd98(7,acStack_1128,0);
  }
  piVar4 = (int *)FUN_00048cac(piVar3,"pools");
  if ((piVar4 != (int *)0x0) && (*piVar4 == 1)) {
    iVar2 = FUN_00049018();
    uVar13 = 0;
    iVar5 = FUN_00049018(piVar4);
    pcVar10 = __s2;
    if (iVar5 != 0) {
      while (((piVar6 = (int *)FUN_00049034(piVar4,uVar13), piVar6 != (int *)0x0 &&
              (*piVar6 == 0 && uVar13 != 3)) &&
             ((piVar7 = (int *)FUN_00048cac(piVar6,&DAT_0004b2ec), piVar7 != (int *)0x0 &&
              (*piVar7 == 2))))) {
        pcVar8 = (char *)FUN_000491e0();
        snprintf(pcVar10,0x100,"%s",pcVar8);
        piVar7 = (int *)FUN_00048cac(piVar6,&DAT_0004b2f0);
        if ((piVar7 == (int *)0x0) || (*piVar7 != 2)) break;
        pcVar8 = (char *)FUN_000491e0();
        snprintf(pcVar10 + 0x100,0x100,"%s",pcVar8);
        piVar6 = (int *)FUN_00048cac(piVar6,&DAT_00054178);
        if ((piVar6 == (int *)0x0) || (*piVar6 != 2)) break;
        pcVar8 = (char *)FUN_000491e0();
        snprintf(pcVar10 + 0x200,0x100,"%s",pcVar8);
        if ((DAT_000686f1 != '\0') &&
           (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
          snprintf(acStack_1128,0x800,"%s\n%s\n%s\n",pcVar10,pcVar10 + 0x100,pcVar10 + 0x200);
          FUN_0001dd98(7,acStack_1128,0);
        }
        uVar13 = uVar13 + 1;
        uVar9 = FUN_00049018(piVar4);
        pcVar10 = pcVar10 + 0x300;
        if (uVar9 <= uVar13) break;
      }
    }
    if (iVar2 != DAT_00072e70) {
LAB_0003e448:
      uVar13 = 1;
      goto LAB_0003e144;
    }
    if (0 < iVar2) {
      piVar4 = (int *)(DAT_00072f14 + -4);
      iVar5 = 0;
      do {
        piVar4 = piVar4 + 1;
        iVar14 = *piVar4;
        iVar5 = iVar5 + 1;
        iVar12 = strcmp(*(char **)(iVar14 + 0xa4),__s2);
        if (iVar12 != 0) goto LAB_0003e448;
        iVar12 = strcmp(*(char **)(iVar14 + 0xac),__s2 + 0x100);
        pcVar10 = __s2 + 0x200;
        __s2 = __s2 + 0x300;
        if ((iVar12 != 0) || (iVar12 = strcmp(*(char **)(iVar14 + 0xb0),pcVar10), iVar12 != 0))
        goto LAB_0003e448;
      } while (iVar2 != iVar5);
    }
  }
  uVar13 = 0;
LAB_0003e144:
  piVar4 = (int *)FUN_00048cac(piVar3,"bitmain-freq-level");
  if ((piVar4 != (int *)0x0) && (*piVar4 == 2)) {
    pcVar10 = (char *)FUN_000491e0();
    lVar11 = strtol(pcVar10,(char **)0x0,10);
    if (lVar11 != DAT_00068210) {
      uVar13 = uVar13 | 2;
      DAT_00068210 = lVar11;
    }
  }
  if (piVar3[1] != -1) {
    piVar4 = piVar3 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      FUN_000495e4(piVar3);
    }
  }
  if ((DAT_000686f1 != '\0') &&
     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    snprintf(acStack_1128,0x800,"ret = 0x%x",uVar13);
    FUN_0001dd98(7,acStack_1128,0);
  }
  if (uVar13 == 2) {
    FUN_000427b4(&DAT_00068210,4);
    return;
  }
  if (uVar13 == 3) {
    FUN_000427b4(&DAT_00068210,4);
  }
  else if (uVar13 != 1) {
    return;
  }
  FUN_000298dc();
  return;
}

