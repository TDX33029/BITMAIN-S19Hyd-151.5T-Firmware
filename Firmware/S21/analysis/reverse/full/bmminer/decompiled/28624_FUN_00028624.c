// FUN_00028624 @ 00028624  size=1500  callers=1
// program: bmminer


undefined4 FUN_00028624(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  char local_2018 [4];
  undefined4 local_2014;
  char acStack_2010 [8];
  uint local_2008;
  undefined4 local_2004;
  undefined4 local_2000;
  undefined4 uStack_1ffc;
  
  piVar1 = (int *)FUN_0007eb20(param_1,&DAT_0009be24);
  if ((piVar1 == (int *)0x0) || (*piVar1 != 0)) {
    if (DAT_000be63c < 4) {
      return 0xffffffff;
    }
    builtin_strncpy(local_2018,"get ",4);
    local_2014._0_1_ = 'a';
    local_2014._1_1_ = 's';
    local_2014._2_1_ = 'i';
    local_2014._3_1_ = 'c';
    builtin_strncpy(acStack_2010," failed\n",8);
    local_2008 = local_2008 & 0xffffff00;
    FUN_0004948c(3,local_2018,0);
    return 0xffffffff;
  }
  if (4 < DAT_000be63c) {
    builtin_strncpy(local_2018,"asic",4);
    local_2014 = CONCAT13(local_2014._3_1_,0xa3a);
    FUN_0004948c(4,local_2018);
  }
  piVar2 = (int *)FUN_0007eb20(piVar1,"asic_id");
  if ((piVar2 == (int *)0x0) || (*piVar2 != 2)) {
    if (DAT_000be63c < 4) {
      return 0xffffffff;
    }
    builtin_strncpy(local_2018,"get ",4);
    local_2014._0_1_ = 'a';
    local_2014._1_1_ = 's';
    local_2014._2_1_ = 'i';
    local_2014._3_1_ = 'c';
    builtin_strncpy(acStack_2010,"_id fail",8);
    local_2008._0_1_ = 'e';
    local_2008._1_1_ = 'd';
    local_2008._2_1_ = '\n';
    local_2008._3_1_ = '\0';
    FUN_0004948c(3,local_2018,0);
    return 0xffffffff;
  }
  if (4 < DAT_000be63c) {
    pcVar3 = (char *)FUN_00080310();
    snprintf(local_2018,0x2000,"asic_id: %s\n",pcVar3);
    FUN_0004948c(4,local_2018,0);
  }
  piVar2 = (int *)FUN_0007eb20(piVar1,"asic_addr");
  if ((piVar2 == (int *)0x0) || (*piVar2 != 2)) {
    if (DAT_000be63c < 4) {
      return 0xffffffff;
    }
    builtin_strncpy(local_2018,"get ",4);
    local_2014._0_1_ = 'a';
    local_2014._1_1_ = 's';
    local_2014._2_1_ = 'i';
    local_2014._3_1_ = 'c';
    builtin_strncpy(acStack_2010,"_addr fa",8);
    local_2008._0_1_ = 'i';
    local_2008._1_1_ = 'l';
    local_2008._2_1_ = 'e';
    local_2008._3_1_ = 'd';
    local_2004 = CONCAT22(local_2004._2_2_,10);
    FUN_0004948c(3,local_2018,0);
    return 0xffffffff;
  }
  if (4 < DAT_000be63c) {
    pcVar3 = (char *)FUN_00080310();
    snprintf(local_2018,0x2000,"asic_addr : %s\n",pcVar3);
    FUN_0004948c(4,local_2018,0);
  }
  pcVar3 = (char *)FUN_00080310(piVar2);
  DAT_00a4edc4 = strtol(pcVar3,(char **)0x0,0);
  if (DAT_00a4edc4 == 0) {
    if (DAT_000be63c < 4) {
      return 0xffffffff;
    }
    builtin_strncpy(local_2018,"conv",4);
    local_2014._0_1_ = 'e';
    local_2014._1_1_ = 'r';
    local_2014._2_1_ = 't';
    local_2014._3_1_ = ' ';
    builtin_strncpy(acStack_2010,"asic_add",8);
    local_2008._0_1_ = 'r';
    local_2008._1_1_ = ' ';
    local_2008._2_1_ = 'f';
    local_2008._3_1_ = 'a';
    local_2004._0_1_ = 'i';
    local_2004._1_1_ = 'l';
    local_2004._2_1_ = 'e';
    local_2004._3_1_ = 'd';
    local_2000 = CONCAT22(local_2000._2_2_,10);
    FUN_0004948c(3,local_2018,0);
    return 0xffffffff;
  }
  if (4 < DAT_000be63c) {
    snprintf(local_2018,0x2000,"asic_addr 0x%x\n",DAT_00a4edc4);
    FUN_0004948c(4,local_2018,0);
  }
  piVar2 = (int *)FUN_0007eb20(piVar1,"asic_core_num");
  if ((piVar2 == (int *)0x0) || (*piVar2 != 3)) {
    if (DAT_000be63c < 4) {
      return 0xffffffff;
    }
    builtin_strncpy(local_2018,"get ",4);
    local_2014._0_1_ = 'a';
    local_2014._1_1_ = 's';
    local_2014._2_1_ = 'i';
    local_2014._3_1_ = 'c';
    builtin_strncpy(acStack_2010,"_core_nu",8);
    local_2008._0_1_ = 'm';
    local_2008._1_1_ = ' ';
    local_2008._2_1_ = 'f';
    local_2008._3_1_ = 'a';
    local_2004._0_1_ = 'i';
    local_2004._1_1_ = 'l';
    local_2004._2_1_ = 'e';
    local_2004._3_1_ = 'd';
    local_2000 = CONCAT22(local_2000._2_2_,10);
    FUN_0004948c(3,local_2018,0);
    return 0xffffffff;
  }
  if (4 < DAT_000be63c) {
    iVar4 = FUN_000807e0();
    snprintf(local_2018,0x2000,"asic_core_num: %d\n",iVar4);
    FUN_0004948c(4,local_2018,0);
  }
  DAT_00a4edc8 = FUN_000807e0(piVar2);
  piVar2 = (int *)FUN_0007eb20(piVar1,"asic_small_core_num");
  if ((piVar2 == (int *)0x0) || (*piVar2 != 3)) {
    if (DAT_000be63c < 4) {
      return 0xffffffff;
    }
    pcVar3 = "get asic_small_core_num failed\n";
  }
  else {
    if (4 < DAT_000be63c) {
      iVar4 = FUN_000807e0();
      snprintf(local_2018,0x2000,"asic_small_core_num: %d\n",iVar4);
      FUN_0004948c(4,local_2018,0);
    }
    DAT_00a4edcc = FUN_000807e0(piVar2);
    piVar2 = (int *)FUN_0007eb20(piVar1,"core_small_core_num");
    if ((piVar2 != (int *)0x0) && (*piVar2 == 3)) {
      if (4 < DAT_000be63c) {
        iVar4 = FUN_000807e0();
        snprintf(local_2018,0x2000,"core_small_core_num: %d\n",iVar4);
        FUN_0004948c(4,local_2018,0);
      }
      DAT_00a4edd0 = FUN_000807e0(piVar2);
      piVar2 = (int *)FUN_0007eb20(piVar1,"asic_domain_num");
      if ((piVar2 != (int *)0x0) && (*piVar2 == 3)) {
        if (4 < DAT_000be63c) {
          iVar4 = FUN_000807e0();
          snprintf(local_2018,0x2000,"asic_domain_num : %d\n",iVar4);
          FUN_0004948c(4,local_2018,0);
        }
        DAT_00a4edd4 = FUN_000807e0(piVar2);
        piVar1 = (int *)FUN_0007eb20(piVar1,"asic_addr_interval");
        if ((piVar1 == (int *)0x0) || (*piVar1 != 3)) {
          if (DAT_000be63c < 4) {
            return 0xffffffff;
          }
          builtin_strncpy(local_2018,"get ",4);
          local_2014._0_1_ = 'a';
          local_2014._1_1_ = 's';
          local_2014._2_1_ = 'i';
          local_2014._3_1_ = 'c';
          builtin_strncpy(acStack_2010,"_addr_in",8);
          local_2008._0_1_ = 't';
          local_2008._1_1_ = 'e';
          local_2008._2_1_ = 'r';
          local_2008._3_1_ = 'v';
          local_2004._0_1_ = 'a';
          local_2004._1_1_ = 'l';
          local_2004._2_1_ = ' ';
          local_2004._3_1_ = 'f';
          local_2000._0_1_ = 'a';
          local_2000._1_1_ = 'i';
          local_2000._2_1_ = 'l';
          local_2000._3_1_ = 'e';
          uStack_1ffc = CONCAT13(uStack_1ffc._3_1_,0xa64);
          FUN_0004948c(3,local_2018,0);
          return 0xffffffff;
        }
        if (4 < DAT_000be63c) {
          iVar4 = FUN_000807e0();
          snprintf(local_2018,0x2000,"asic_addr_interval : %d\n",iVar4);
          FUN_0004948c(4,local_2018,0);
        }
        DAT_00a4edd8 = FUN_000807e0(piVar1);
        return 0;
      }
      if (DAT_000be63c < 4) {
        return 0xffffffff;
      }
      builtin_strncpy(local_2018,"get ",4);
      local_2014._0_1_ = 'a';
      local_2014._1_1_ = 's';
      local_2014._2_1_ = 'i';
      local_2014._3_1_ = 'c';
      builtin_strncpy(acStack_2010,"_domain_",8);
      local_2008._0_1_ = 'n';
      local_2008._1_1_ = 'u';
      local_2008._2_1_ = 'm';
      local_2008._3_1_ = ' ';
      local_2004._0_1_ = 'f';
      local_2004._1_1_ = 'a';
      local_2004._2_1_ = 'i';
      local_2004._3_1_ = 'l';
      local_2000._0_1_ = 'e';
      local_2000._1_1_ = 'd';
      local_2000._2_1_ = '\n';
      local_2000._3_1_ = '\0';
      goto LAB_000289d8;
    }
    if (DAT_000be63c < 4) {
      return 0xffffffff;
    }
    pcVar3 = "get core_small_core_num failed\n";
  }
  local_2018 = *(char (*) [4])pcVar3;
  local_2014 = *(undefined4 *)(pcVar3 + 4);
  acStack_2010._0_4_ = *(undefined4 *)(pcVar3 + 8);
  acStack_2010._4_4_ = *(undefined4 *)(pcVar3 + 0xc);
  local_2008 = *(uint *)(pcVar3 + 0x10);
  local_2004 = *(undefined4 *)(pcVar3 + 0x14);
  local_2000 = *(undefined4 *)(pcVar3 + 0x18);
  uStack_1ffc = *(undefined4 *)(pcVar3 + 0x1c);
LAB_000289d8:
  FUN_0004948c(3,local_2018,0);
  return 0xffffffff;
}

