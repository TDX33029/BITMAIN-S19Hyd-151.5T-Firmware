// FUN_00028c00 @ 00028c00  size=1224  callers=1
// program: bmminer


undefined4 FUN_00028c00(undefined4 param_1)

{
  int *piVar1;
  char *__s;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_2018;
  undefined4 uStack_2014;
  undefined4 uStack_2010;
  undefined4 uStack_200c;
  undefined4 local_2008;
  undefined4 local_2004;
  uint local_2000;
  char acStack_1ffc [8164];
  
  piVar1 = (int *)FUN_0007eb20(param_1,"machine");
  if ((piVar1 == (int *)0x0) || (*piVar1 != 2)) {
    if (3 < DAT_000be63c) {
      local_2018._0_1_ = 'g';
      local_2018._1_1_ = 'e';
      local_2018._2_1_ = 't';
      local_2018._3_1_ = ' ';
      uStack_2014._0_1_ = 'm';
      uStack_2014._1_1_ = 'a';
      uStack_2014._2_1_ = 'c';
      uStack_2014._3_1_ = 'h';
      uStack_2010._0_1_ = 'i';
      uStack_2010._1_1_ = 'n';
      uStack_2010._2_1_ = 'e';
      uStack_2010._3_1_ = ' ';
      uStack_200c._0_1_ = 'f';
      uStack_200c._1_1_ = 'a';
      uStack_200c._2_1_ = 'i';
      uStack_200c._3_1_ = 'l';
      local_2008._0_1_ = 'e';
      local_2008._1_1_ = 'd';
      local_2008._2_1_ = '\n';
      local_2008._3_1_ = '\0';
      FUN_0004948c(3,&local_2018,0);
      return 0xffffffff;
    }
  }
  else {
    if (3 < DAT_000be63c) {
      pcVar4 = (char *)FUN_00080310();
      snprintf((char *)&local_2018,0x2000,"load machine %s conf\n",pcVar4);
      FUN_0004948c(3,&local_2018,0);
    }
    __s = (char *)FUN_00080310(piVar1);
    pcVar4 = DAT_00a4ed98;
    if (DAT_00a4ed98 == (char *)0x0) {
      sVar2 = strlen(__s);
      DAT_00a4ed98 = calloc(sVar2 + 1,1);
      if (DAT_00a4ed98 == (char *)0x0) {
        if (DAT_000be63c < 4) {
          return 0xffffffff;
        }
        local_2018._0_1_ = 'g';
        local_2018._1_1_ = 'e';
        local_2018._2_1_ = 't';
        local_2018._3_1_ = ' ';
        uStack_2014._0_1_ = 'm';
        uStack_2014._1_1_ = 'a';
        uStack_2014._2_1_ = 'c';
        uStack_2014._3_1_ = 'h';
        uStack_2010._0_1_ = 'i';
        uStack_2010._1_1_ = 'n';
        uStack_2010._2_1_ = 'e';
        uStack_2010._3_1_ = ' ';
        uStack_200c._0_1_ = 'f';
        uStack_200c._1_1_ = 'a';
        uStack_200c._2_1_ = 'i';
        uStack_200c._3_1_ = 'l';
        local_2008._0_1_ = 'e';
        local_2008._1_1_ = 'd';
        local_2008._2_1_ = ',';
        local_2008._3_1_ = ' ';
        local_2004._0_1_ = 'C';
        local_2004._1_1_ = 'a';
        local_2004._2_1_ = 'n';
        local_2004._3_1_ = 'n';
        local_2000._0_1_ = 'o';
        local_2000._1_1_ = 't';
        local_2000._2_1_ = ' ';
        local_2000._3_1_ = 'a';
        builtin_strncpy(acStack_1ffc,"llocate space\n",0xf);
        FUN_0004948c(3,&local_2018,0);
        return 0xffffffff;
      }
    }
    else {
      sVar2 = strlen(DAT_00a4ed98);
      memset(pcVar4,0,sVar2);
    }
    strcpy(DAT_00a4ed98,__s);
    if (4 < DAT_000be63c) {
      snprintf((char *)&local_2018,0x2000,"machine : %s \n",DAT_00a4ed98);
      FUN_0004948c(4,&local_2018,0);
    }
    piVar1 = (int *)FUN_0007eb20(param_1,"hw_version");
    if ((piVar1 == (int *)0x0) || (*piVar1 != 2)) {
      if (3 < DAT_000be63c) {
        pcVar4 = "get hw_version failed\n";
LAB_00028ce4:
        local_2018 = *(undefined4 *)pcVar4;
        uStack_2014 = *(undefined4 *)(pcVar4 + 4);
        uStack_2010 = *(undefined4 *)(pcVar4 + 8);
        uStack_200c = *(undefined4 *)(pcVar4 + 0xc);
        local_2008 = *(undefined4 *)(pcVar4 + 0x10);
        local_2004._0_3_ = (undefined3)*(undefined4 *)(pcVar4 + 0x14);
        FUN_0004948c(3,&local_2018,0);
        return 0xffffffff;
      }
    }
    else {
      if (4 < DAT_000be63c) {
        pcVar4 = (char *)FUN_00080310();
        snprintf((char *)&local_2018,0x2000,"hw_version: %s\n",pcVar4);
        FUN_0004948c(4,&local_2018,0);
      }
      piVar1 = (int *)FUN_0007eb20(param_1,"sw_version");
      if ((piVar1 == (int *)0x0) || (*piVar1 != 2)) {
        if (3 < DAT_000be63c) {
          pcVar4 = "get sw_version failed\n";
          goto LAB_00028ce4;
        }
      }
      else {
        if (4 < DAT_000be63c) {
          pcVar4 = (char *)FUN_00080310();
          snprintf((char *)&local_2018,0x2000,"sw_version: %s\n",pcVar4);
          FUN_0004948c(4,&local_2018,0);
        }
        pcVar4 = DAT_00a4ed98;
        iVar3 = strcmp(DAT_00a4ed98,"H6HB70601");
        if ((((iVar3 != 0) && (iVar3 = strcmp(pcVar4,"H6HB70602"), iVar3 != 0)) &&
            (iVar3 = strcmp(pcVar4,"H6HB70501"), iVar3 != 0)) &&
           ((iVar3 = strcmp(pcVar4,"H6HB70801"), iVar3 != 0 &&
            (iVar3 = strcmp(pcVar4,"H6HB70802"), iVar3 != 0)))) {
          return 0;
        }
        piVar1 = (int *)FUN_0007eb20(param_1,"power_target");
        if ((piVar1 == (int *)0x0) || (*piVar1 != 3)) {
          if (3 < DAT_000be63c) {
            local_2018._0_1_ = 'g';
            local_2018._1_1_ = 'e';
            local_2018._2_1_ = 't';
            local_2018._3_1_ = ' ';
            uStack_2014._0_1_ = 'p';
            uStack_2014._1_1_ = 'o';
            uStack_2014._2_1_ = 'w';
            uStack_2014._3_1_ = 'e';
            uStack_2010._0_1_ = 'r';
            uStack_2010._1_1_ = '_';
            uStack_2010._2_1_ = 't';
            uStack_2010._3_1_ = 'a';
            uStack_200c._0_1_ = 'r';
            uStack_200c._1_1_ = 'g';
            uStack_200c._2_1_ = 'e';
            uStack_200c._3_1_ = 't';
            local_2008._0_1_ = ' ';
            local_2008._1_1_ = 'f';
            local_2008._2_1_ = 'a';
            local_2008._3_1_ = 'i';
            local_2004._0_1_ = 'l';
            local_2004._1_1_ = 'e';
            local_2004._2_1_ = 'd';
            local_2004._3_1_ = '\n';
            local_2000 = local_2000 & 0xffffff00;
            FUN_0004948c(3,&local_2018,0);
            return 0xffffffff;
          }
        }
        else {
          DAT_00a4ed9c = FUN_000807e0();
          if (4 < DAT_000be63c) {
            snprintf((char *)&local_2018,0x2000,"power_target: %d\n",DAT_00a4ed9c);
            FUN_0004948c(4,&local_2018,0);
          }
          piVar1 = (int *)FUN_0007eb20(param_1,"jt_target");
          if ((piVar1 != (int *)0x0) && (*piVar1 == 2)) {
            if (4 < DAT_000be63c) {
              pcVar4 = (char *)FUN_00080310();
              snprintf((char *)&local_2018,0x2000,"jt_target: %s\n",pcVar4);
              FUN_0004948c(4,&local_2018,0);
            }
            pcVar4 = (char *)FUN_00080310(piVar1);
            DAT_00a4eda0 = strtod(pcVar4,(char **)0x0);
            return 0;
          }
          if (3 < DAT_000be63c) {
            local_2018._0_1_ = 'g';
            local_2018._1_1_ = 'e';
            local_2018._2_1_ = 't';
            local_2018._3_1_ = ' ';
            uStack_2014._0_1_ = 'j';
            uStack_2014._1_1_ = 't';
            uStack_2014._2_1_ = '_';
            uStack_2014._3_1_ = 't';
            uStack_2010._0_1_ = 'a';
            uStack_2010._1_1_ = 'r';
            uStack_2010._2_1_ = 'g';
            uStack_2010._3_1_ = 'e';
            uStack_200c._0_1_ = 't';
            uStack_200c._1_1_ = ' ';
            uStack_200c._2_1_ = 'f';
            uStack_200c._3_1_ = 'a';
            local_2008._0_1_ = 'i';
            local_2008._1_1_ = 'l';
            local_2008._2_1_ = 'e';
            local_2008._3_1_ = 'd';
            local_2004 = CONCAT22(local_2004._2_2_,10);
            FUN_0004948c(3,&local_2018,0);
          }
        }
      }
    }
  }
  return 0xffffffff;
}

