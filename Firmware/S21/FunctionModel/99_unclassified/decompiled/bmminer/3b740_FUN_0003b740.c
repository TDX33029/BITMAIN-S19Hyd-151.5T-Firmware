// FUN_0003b740 @ 0003b740  size=1356  callers=0
// program: bmminer


void FUN_0003b740(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  size_t __n;
  size_t __n_00;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  char acStack_e230 [24576];
  char local_8230 [12];
  undefined4 local_8224;
  char local_8220 [24564];
  char *local_222c;
  void *local_2228;
  int local_2224;
  char acStack_221c [4];
  undefined1 auStack_2218 [496];
  char local_2028 [24];
  uint local_2010;
  char acStack_200c [8168];
  
  memset(local_8230,0,0x6000);
  piVar7 = *(int **)(param_1 + 0x70);
  if ((piVar7 == (int *)0x0) || (iVar5 = *(int *)(param_1 + 0x78), iVar5 < 1)) {
    local_2224 = 4;
    sVar4 = 0;
    local_2228 = (void *)0x0;
    __n = 0;
    pcVar9 = (char *)0x0;
    __n_00 = 0;
    local_222c = (char *)0x0;
  }
  else {
    iVar10 = piVar7[2];
    iVar11 = *piVar7;
    __n_00 = piVar7[1];
    if (iVar10 == 2) {
      sVar4 = __n_00;
      iVar8 = iVar11;
    }
    else {
      iVar3 = 0;
      piVar6 = piVar7;
      do {
        iVar3 = iVar3 + 1;
        if (iVar3 == iVar5) {
          local_2224 = 4;
          sVar4 = 0;
          local_2228 = (void *)0x0;
          goto LAB_0003b7e8;
        }
        iVar8 = piVar6[3];
        sVar4 = piVar6[4];
        piVar1 = piVar6 + 5;
        piVar6 = piVar6 + 3;
      } while (*piVar1 != 2);
    }
    local_2224 = sVar4 + 4;
    local_2228 = (void *)(*(int *)(param_1 + 0x18) + iVar8);
LAB_0003b7e8:
    if (iVar10 == 1) {
      __n = __n_00;
      iVar8 = iVar11;
    }
    else {
      iVar3 = 0;
      piVar6 = piVar7;
      do {
        iVar3 = iVar3 + 1;
        if (iVar3 == iVar5) {
          __n = 0;
          pcVar9 = (char *)0x0;
          goto LAB_0003b828;
        }
        iVar8 = piVar6[3];
        __n = piVar6[4];
        piVar1 = piVar6 + 5;
        piVar6 = piVar6 + 3;
      } while (*piVar1 != 1);
    }
    pcVar9 = (char *)(*(int *)(param_1 + 0x18) + iVar8);
LAB_0003b828:
    if (iVar10 != 7) {
      iVar10 = 0;
      do {
        iVar10 = iVar10 + 1;
        if (iVar10 == iVar5) {
          __n_00 = 0;
          local_222c = (char *)0x0;
          goto LAB_0003b86c;
        }
        iVar11 = piVar7[3];
        __n_00 = piVar7[4];
        piVar6 = piVar7 + 5;
        piVar7 = piVar7 + 3;
      } while (*piVar6 != 7);
    }
    local_222c = (char *)(*(int *)(param_1 + 0x18) + iVar11);
  }
LAB_0003b86c:
  memset(acStack_221c,0x48,500);
  memcpy(auStack_2218,local_2228,sVar4);
  pcVar2 = DAT_000c71a4;
  acStack_221c[local_2224] = '\0';
  if (DAT_000c71a4 == (code *)0x0) {
    if ((DAT_008c702e != '\0') &&
       (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
      builtin_strncpy(local_2028,"No 6060 test case found.",0x18);
      local_2010 = local_2010 & 0xffffff00;
      FUN_0004948c(7,local_2028,0);
    }
    builtin_strncpy(local_8230,"No 6060 test",0xc);
    local_8224._0_1_ = ' ';
    local_8224._1_1_ = 'c';
    local_8224._2_1_ = 'a';
    local_8224._3_1_ = 's';
    builtin_strncpy(local_8220,"e found",8);
  }
  else {
    iVar5 = strncmp(pcVar9,"POST",__n);
    pcVar9 = local_222c;
    if (__n == 4 && iVar5 == 0) {
      snprintf(acStack_e230,0x6000,"%s/%s",acStack_221c,local_222c);
      memcpy(local_8230,pcVar9,__n_00);
      iVar5 = (*DAT_000c71a4)(acStack_e230,local_8230,0x6000);
      if (iVar5 != 0) {
        if ((DAT_008c702e != '\0') &&
           (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
          builtin_strncpy(local_2028,"http_test_case exit for ",0x18);
          local_2010._0_1_ = 'E';
          local_2010._1_1_ = 'r';
          local_2010._2_1_ = 'r';
          local_2010._3_1_ = 'o';
          builtin_strncpy(acStack_200c,"r cmd!",7);
          FUN_0004948c(7,local_2028,0);
        }
        builtin_strncpy(local_8230,"error 6060 c",0xc);
        local_8224._0_1_ = 'm';
        local_8224._1_1_ = 'd';
        local_8224._2_1_ = '\0';
      }
    }
    else {
      iVar5 = (*pcVar2)(acStack_221c,local_8230,0x6000);
      if (iVar5 != 0) {
        if ((DAT_008c702e != '\0') &&
           (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
          builtin_strncpy(local_2028,"http_test_case exit for ",0x18);
          local_2010._0_1_ = 'E';
          local_2010._1_1_ = 'r';
          local_2010._2_1_ = 'r';
          local_2010._3_1_ = 'o';
          builtin_strncpy(acStack_200c,"r cmd!",7);
          FUN_0004948c(7,local_2028,0);
        }
        builtin_strncpy(local_8230,"error 6060 c",0xc);
        local_8224._0_1_ = 'm';
        local_8224._1_1_ = 'd';
        local_8224._2_1_ = '\0';
      }
    }
  }
  iVar5 = FUN_0003b270();
  *(undefined4 *)(iVar5 + 0xc) = 200;
  FUN_0003b2b4(iVar5,"Content-Type","text/plain");
  sVar4 = strlen(local_8230);
  *(char **)(iVar5 + 4) = local_8230;
  *(size_t *)(iVar5 + 8) = sVar4;
  FUN_0003b6dc(param_1,iVar5);
  return;
}

