// FUN_0003d42c @ 0003d42c  size=832  callers=0
// program: bmminer


undefined4 FUN_0003d42c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  char *__filename;
  uint param4;
  int iVar7;
  undefined4 *puVar8;
  FILE *local_82c;
  char local_828 [24];
  undefined4 uStack_810;
  char acStack_80c [4];
  undefined4 local_808;
  char acStack_804 [2016];
  
  if (4 < DAT_00087bbc) {
    builtin_strncpy(local_828,"[DEBUG] Free memory for ",0x18);
    uStack_810._0_1_ = 's';
    uStack_810._1_1_ = 'w';
    uStack_810._2_1_ = ' ';
    uStack_810._3_1_ = 's';
    builtin_strncpy(acStack_80c,"weep",4);
    local_808._0_1_ = '.';
    local_808._1_1_ = '\n';
    local_808._2_1_ = '\0';
    FUN_00032218(4,local_828,0);
  }
  puVar8 = DAT_00507488;
  if (DAT_00507488 == (undefined4 *)0x0) {
    DAT_00507488 = calloc(0x8114ac,1);
    if (DAT_00507488 == (undefined4 *)0x0) {
      if (3 < DAT_00087bbc) {
        builtin_strncpy(local_828,"Fail to allocate memory ",0x18);
        uStack_810._0_1_ = 'f';
        uStack_810._1_1_ = 'o';
        uStack_810._2_1_ = 'r';
        uStack_810._3_1_ = ' ';
        builtin_strncpy(acStack_80c,"sw s",4);
        local_808._0_1_ = 'w';
        local_808._1_1_ = 'e';
        local_808._2_1_ = 'e';
        local_808._3_1_ = 'p';
        builtin_strncpy(acStack_804," ctxt.\n",8);
        FUN_00032218(3,local_828,0);
LAB_0003d6dc:
        if (DAT_00507488 != (undefined4 *)0x0) {
LAB_0003d648:
          FUN_0003d224();
        }
      }
      FUN_0003a9e0(0xd,0xff);
      return 0xffffffff;
    }
    iVar1 = FUN_0002002c();
    if (iVar1 == 0) {
      puVar8 = DAT_00507488;
    }
    else {
      iVar7 = 0;
      do {
        iVar2 = FUN_0002006c();
        puVar8 = DAT_00507488;
        pvVar4 = malloc(iVar2 * 0x1a0);
        iVar2 = iVar7 + 0x202a2b;
        iVar7 = iVar7 + 1;
        puVar8[iVar2] = pvVar4;
        if (pvVar4 == (void *)0x0) {
          if (DAT_00087bbc < 4) goto LAB_0003d648;
          builtin_strncpy(local_828,"Fail to allocate memory ",0x18);
          uStack_810._0_1_ = 'f';
          uStack_810._1_1_ = 'o';
          uStack_810._2_1_ = 'r';
          uStack_810._3_1_ = ' ';
          builtin_strncpy(acStack_80c,"work",4);
          local_808._0_1_ = 's';
          local_808._1_1_ = '.';
          local_808._2_1_ = '\n';
          local_808._3_1_ = '\0';
          FUN_00032218(3,local_828,0);
          goto LAB_0003d6dc;
        }
      } while (iVar1 != iVar7);
    }
  }
  *puVar8 = param_1;
  __filename = (char *)*DAT_00507488;
  local_82c = fopen64(__filename,"r");
  if (local_82c == (FILE *)0x0) {
    if (3 < DAT_00087bbc) {
      snprintf(local_828,0x800,"Fail to open pattern file %s.\n",__filename);
      FUN_00032218(3,local_828,0);
    }
LAB_0003d550:
    FUN_0003a9e0(0x16,0xff);
    if (DAT_00087bbc < 4) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = 0xffffffff;
      builtin_strncpy(local_828,"Load pattern file failed",0x18);
      uStack_810._0_1_ = '.';
      uStack_810._1_1_ = '\n';
      uStack_810._2_1_ = '\0';
      FUN_00032218(3,local_828,0);
    }
  }
  else {
    iVar1 = FUN_0002002c();
    if (iVar1 != 0) {
      iVar7 = 0;
      do {
        iVar2 = FUN_0002006c();
        if (iVar2 == 0) {
          param4 = 0;
        }
        else {
          param4 = 0;
          iVar3 = 0;
          do {
            iVar5 = iVar3 + 1;
            iVar3 = FUN_0003d2bc(&local_82c,iVar7,iVar3,8);
            param4 = param4 + iVar3;
            iVar3 = iVar5;
          } while (iVar2 != iVar5);
        }
        iVar2 = FUN_0002006c();
        if (param4 < (uint)(iVar2 << 3)) {
          if (3 < DAT_00087bbc) {
            iVar1 = FUN_0002006c();
            snprintf(local_828,0x800,
                     "No enough work, asic = %d, work_count = %d, work_count_target = %d.\n",iVar7,
                     param4,iVar1 << 3);
            FUN_00032218(3,local_828,0);
          }
          fclose(local_82c);
          goto LAB_0003d550;
        }
        iVar7 = iVar7 + 1;
      } while (iVar1 != iVar7);
    }
    uVar6 = 0;
    fclose(local_82c);
  }
  FUN_0004a2c0();
  FUN_0004a1d0(4);
  return uVar6;
}

