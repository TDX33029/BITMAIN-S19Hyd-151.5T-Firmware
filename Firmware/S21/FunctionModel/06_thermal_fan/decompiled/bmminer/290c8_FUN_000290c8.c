// FUN_000290c8 @ 000290c8  size=1376  callers=1
// program: bmminer


undefined4 FUN_000290c8(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint param3;
  char *pcVar6;
  char *pcVar7;
  undefined4 local_2028;
  undefined4 local_2024;
  char acStack_2020 [8188];
  
  piVar1 = (int *)FUN_0007eb20(param_1,&DAT_0009c740);
  pcVar7 = DAT_00a4ed98;
  if ((piVar1 == (int *)0x0) || (*piVar1 != 1)) {
    iVar2 = strcmp(DAT_00a4ed98,"H6HB70801");
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = strcmp(pcVar7,"H6HB70802");
    if (iVar2 == 0) {
      return 0;
    }
    if (DAT_000be63c < 4) {
      return 0xffffffff;
    }
    local_2028._0_1_ = 'g';
    local_2028._1_1_ = 'e';
    local_2028._2_1_ = 't';
    local_2028._3_1_ = ' ';
    local_2024._0_1_ = 'f';
    local_2024._1_1_ = 'a';
    local_2024._2_1_ = 'n';
    local_2024._3_1_ = ' ';
    builtin_strncpy(acStack_2020,"failed\n",8);
    FUN_0004948c(3,&local_2028,0);
    return 0xffffffff;
  }
  if (4 < DAT_000be63c) {
    local_2028 = 0x3a6e6166;
    local_2024 = CONCAT22(local_2024._2_2_,10);
    FUN_0004948c(4,&local_2028,0);
  }
  pcVar6 = (char *)0x0;
  pcVar7 = (char *)0x0;
  for (param3 = 0; uVar3 = FUN_0007f66c(piVar1), param3 < uVar3; param3 = param3 + 1) {
    piVar4 = (int *)FUN_0007f6b8(piVar1,param3);
    if ((piVar4 == (int *)0x0) || (*piVar4 != 0)) {
      if (DAT_000be63c < 4) {
        return 0xffffffff;
      }
      snprintf((char *)&local_2028,0x2000,"get array %d failed\n",param3);
      goto LAB_00029360;
    }
    piVar5 = (int *)FUN_0007eb20(piVar4,"id");
    if ((piVar5 == (int *)0x0) || (*piVar5 != 3)) {
      if (DAT_000be63c < 4) {
        return 0xffffffff;
      }
      snprintf((char *)&local_2028,0x2000,"get arrya %d id failed\n",param3);
      goto LAB_00029360;
    }
    if (4 < DAT_000be63c) {
      iVar2 = FUN_000807e0();
      snprintf((char *)&local_2028,0x2000,"id: %d\n",iVar2);
      FUN_0004948c(4,&local_2028,0);
    }
    piVar5 = (int *)FUN_0007eb20(piVar4,"position");
    if ((piVar5 == (int *)0x0) || (*piVar5 != 2)) {
      if (DAT_000be63c < 4) {
        return 0xffffffff;
      }
      snprintf((char *)&local_2028,0x2000,"get arrya %d position failed\n",param3);
      goto LAB_00029360;
    }
    if (4 < DAT_000be63c) {
      pcVar7 = (char *)FUN_00080310();
      snprintf((char *)&local_2028,0x2000,"position: %s\n",pcVar7);
      FUN_0004948c(4,&local_2028,0);
    }
    pcVar7 = (char *)FUN_00080310(piVar5);
    piVar4 = (int *)FUN_0007eb20(piVar4,"direction");
    if ((piVar4 == (int *)0x0) || (*piVar4 != 2)) {
      if (DAT_000be63c < 4) {
        return 0xffffffff;
      }
      snprintf((char *)&local_2028,0x2000,"get arrya%d direction failed\n",param3);
      goto LAB_00029360;
    }
    if (4 < DAT_000be63c) {
      pcVar6 = (char *)FUN_00080310();
      snprintf((char *)&local_2028,0x2000,"direction: %s\n",pcVar6);
      FUN_0004948c(4,&local_2028,0);
    }
    pcVar6 = (char *)FUN_00080310(piVar4);
  }
  DAT_00a4ee00 = param3;
  iVar2 = strncmp(pcVar7,"right",5);
  if (iVar2 == 0) {
    iVar2 = strncmp(pcVar6,"in",2);
    if (iVar2 == 0) {
      DAT_00a4edfc = 0;
      return 0;
    }
    iVar2 = strncmp(pcVar7,"left",4);
    if (iVar2 == 0) {
LAB_00029498:
      iVar2 = strncmp(pcVar6,"out",2);
      if (iVar2 == 0) {
        DAT_00a4edfc = 0;
        return 0;
      }
      iVar2 = strncmp(pcVar6,"in",2);
    }
    else {
      iVar2 = strncmp(pcVar6,"out",2);
    }
    if (iVar2 == 0) {
      DAT_00a4edfc = 1;
      return 0;
    }
    iVar2 = strncmp(pcVar7,"up",2);
    if (iVar2 == 0) goto LAB_000294ec;
LAB_00029588:
    iVar2 = strncmp(pcVar7,"down",4);
    if (iVar2 != 0) goto LAB_000295dc;
    iVar2 = strncmp(pcVar6,"out",3);
    if (iVar2 == 0) {
      DAT_00a4edfc = 2;
      return 0;
    }
    iVar2 = strncmp(pcVar6,"in",2);
  }
  else {
    iVar2 = strncmp(pcVar7,"left",4);
    if (iVar2 == 0) goto LAB_00029498;
    iVar2 = strncmp(pcVar7,"up",2);
    if (iVar2 != 0) goto LAB_00029588;
    iVar2 = strncmp(pcVar6,"in",2);
    if (iVar2 == 0) {
      DAT_00a4edfc = 2;
      return 0;
    }
LAB_000294ec:
    iVar2 = strncmp(pcVar7,"down",4);
    if (iVar2 == 0) {
      iVar2 = strncmp(pcVar6,"out",3);
      if (iVar2 == 0) {
        DAT_00a4edfc = 2;
        return 0;
      }
      goto LAB_000295dc;
    }
    iVar2 = strncmp(pcVar6,"out",3);
  }
  if (iVar2 == 0) {
    DAT_00a4edfc = 3;
    return 0;
  }
LAB_000295dc:
  if (DAT_000be63c < 4) {
    return 0xffffffff;
  }
  snprintf((char *)&local_2028,0x2000,"unkonwn wind position %s, direction %s\n",pcVar7,pcVar6);
LAB_00029360:
  FUN_0004948c(3,&local_2028,0);
  return 0xffffffff;
}

