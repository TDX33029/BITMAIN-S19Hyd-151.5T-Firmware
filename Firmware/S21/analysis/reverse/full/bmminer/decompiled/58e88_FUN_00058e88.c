// FUN_00058e88 @ 00058e88  size=832  callers=0
// program: bmminer


undefined4 FUN_00058e88(undefined4 param_1)

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
  FILE *local_202c;
  char local_2028 [24];
  undefined4 uStack_2010;
  char acStack_200c [4];
  undefined4 local_2008;
  char acStack_2004 [8160];
  
  if (4 < DAT_000be63c) {
    builtin_strncpy(local_2028,"[DEBUG] Free memory for ",0x18);
    uStack_2010._0_1_ = 's';
    uStack_2010._1_1_ = 'w';
    uStack_2010._2_1_ = ' ';
    uStack_2010._3_1_ = 's';
    builtin_strncpy(acStack_200c,"weep",4);
    local_2008._0_1_ = '.';
    local_2008._1_1_ = '\n';
    local_2008._2_1_ = '\0';
    FUN_0004948c(4,local_2028,0);
  }
  puVar8 = DAT_00944b80;
  if (DAT_00944b80 == (undefined4 *)0x0) {
    DAT_00944b80 = calloc(0x10054ac,1);
    if (DAT_00944b80 == (undefined4 *)0x0) {
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2028,"Fail to allocate memory ",0x18);
        uStack_2010._0_1_ = 'f';
        uStack_2010._1_1_ = 'o';
        uStack_2010._2_1_ = 'r';
        uStack_2010._3_1_ = ' ';
        builtin_strncpy(acStack_200c,"sw s",4);
        local_2008._0_1_ = 'w';
        local_2008._1_1_ = 'e';
        local_2008._2_1_ = 'e';
        local_2008._3_1_ = 'p';
        builtin_strncpy(acStack_2004," ctxt.\n",8);
        FUN_0004948c(3,local_2028,0);
LAB_00059138:
        if (DAT_00944b80 != (undefined4 *)0x0) {
LAB_000590a4:
          FUN_00058c9c();
        }
      }
      FUN_00056e88(0xd,0xff);
      return 0xffffffff;
    }
    iVar1 = FUN_0002a514();
    if (iVar1 == 0) {
      puVar8 = DAT_00944b80;
    }
    else {
      iVar7 = 0;
      do {
        iVar2 = FUN_0002a554();
        puVar8 = DAT_00944b80;
        pvVar4 = malloc(iVar2 * 0x2a0);
        iVar2 = iVar7 + 0x3fea2b;
        iVar7 = iVar7 + 1;
        puVar8[iVar2] = pvVar4;
        if (pvVar4 == (void *)0x0) {
          if (DAT_000be63c < 4) goto LAB_000590a4;
          builtin_strncpy(local_2028,"Fail to allocate memory ",0x18);
          uStack_2010._0_1_ = 'f';
          uStack_2010._1_1_ = 'o';
          uStack_2010._2_1_ = 'r';
          uStack_2010._3_1_ = ' ';
          builtin_strncpy(acStack_200c,"work",4);
          local_2008._0_1_ = 's';
          local_2008._1_1_ = '.';
          local_2008._2_1_ = '\n';
          local_2008._3_1_ = '\0';
          FUN_0004948c(3,local_2028,0);
          goto LAB_00059138;
        }
      } while (iVar1 != iVar7);
    }
  }
  *puVar8 = param_1;
  __filename = (char *)*DAT_00944b80;
  local_202c = fopen(__filename,"r");
  if (local_202c == (FILE *)0x0) {
    if (3 < DAT_000be63c) {
      snprintf(local_2028,0x2000,"Fail to open pattern file %s.\n",__filename);
      FUN_0004948c(3,local_2028,0);
    }
LAB_00058fac:
    FUN_00056e88(0x16,0xff);
    if (DAT_000be63c < 4) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = 0xffffffff;
      builtin_strncpy(local_2028,"Load pattern file failed",0x18);
      uStack_2010._0_1_ = '.';
      uStack_2010._1_1_ = '\n';
      uStack_2010._2_1_ = '\0';
      FUN_0004948c(3,local_2028,0);
    }
  }
  else {
    iVar1 = FUN_0002a514();
    if (iVar1 != 0) {
      iVar7 = 0;
      do {
        iVar2 = FUN_0002a554();
        if (iVar2 == 0) {
          param4 = 0;
        }
        else {
          param4 = 0;
          iVar3 = 0;
          do {
            iVar5 = iVar3 + 1;
            iVar3 = FUN_00058d34(&local_202c,iVar7,iVar3,8);
            param4 = param4 + iVar3;
            iVar3 = iVar5;
          } while (iVar2 != iVar5);
        }
        iVar2 = FUN_0002a554();
        if (param4 < (uint)(iVar2 << 3)) {
          if (3 < DAT_000be63c) {
            iVar1 = FUN_0002a554();
            snprintf(local_2028,0x2000,
                     "No enough work, asic = %d, work_count = %d, work_count_target = %d.\n",iVar7,
                     param4,iVar1 << 3);
            FUN_0004948c(3,local_2028,0);
          }
          fclose(local_202c);
          goto LAB_00058fac;
        }
        iVar7 = iVar7 + 1;
      } while (iVar1 != iVar7);
    }
    uVar6 = 0;
    fclose(local_202c);
  }
  FUN_0006b514();
  FUN_0006b458(4);
  return uVar6;
}

