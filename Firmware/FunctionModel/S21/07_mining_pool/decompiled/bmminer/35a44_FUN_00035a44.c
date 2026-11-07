// FUN_00035a44 @ 00035a44  size=1300  callers=1
// program: bmminer


void FUN_00035a44(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  char *pcVar4;
  size_t sVar5;
  char cVar6;
  char *pcVar7;
  char cVar8;
  char local_2028 [20];
  undefined4 local_2014;
  char acStack_2010 [8];
  uint local_2008;
  undefined2 local_2004;
  
  iVar1 = FUN_00034f98();
  if (iVar1 == -1) {
    if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
      builtin_strncpy(local_2028,"pool.json not existe",0x14);
      local_2014._0_1_ = 'd';
      local_2014._1_1_ = ' ';
      local_2014._2_1_ = 'd';
      local_2014._3_1_ = 'o';
      builtin_strncpy(acStack_2010," nothing",8);
      local_2008 = local_2008 & 0xffffff00;
      FUN_0004948c(3,local_2028,0);
    }
  }
  else {
    iVar2 = FUN_00035258(param_1);
    if (iVar2 == 0) {
      if (*(void **)(param_2 + 0x78) != (void *)0x0) {
        free(*(void **)(param_2 + 0x78));
      }
      if (*(void **)(param_2 + 0x80) != (void *)0x0) {
        free(*(void **)(param_2 + 0x80));
      }
      if (*(void **)(param_2 + 0x88) != (void *)0x0) {
        free(*(void **)(param_2 + 0x88));
      }
      cVar6 = DAT_00a5d20d;
      if (iVar1 == 0) {
        iVar1 = 0;
        do {
          iVar2 = param_1[1];
          *(size_t *)(param_2 + 0x7c) = iVar2 + 1U;
          pcVar4 = malloc(param_1[1]);
          *(char **)(param_2 + 0x78) = pcVar4;
          memset(pcVar4,0,iVar2 + 1U);
          pcVar7 = (char *)*param_1;
          sVar5 = strlen(pcVar7);
          memcpy(pcVar4,pcVar7,sVar5);
          if ((DAT_008c702e != '\0') &&
             (((cVar6 != '\0' || (DAT_008c702d != '\0')) || (cVar6 = '\0', 6 < DAT_000be644)))) {
            snprintf(local_2028,0x2000,"spool[%d].url:[%s], read[%s]",iVar1,pcVar4,pcVar7);
            FUN_0004948c(7,local_2028,0);
            cVar6 = DAT_00a5d20d;
          }
          cVar8 = DAT_008c702e;
          iVar2 = param_1[3];
          *(size_t *)(param_2 + 0x84) = iVar2 + 1U;
          pcVar4 = malloc(param_1[3]);
          *(char **)(param_2 + 0x80) = pcVar4;
          memset(pcVar4,0,iVar2 + 1U);
          pcVar7 = (char *)param_1[2];
          sVar5 = strlen(pcVar7);
          memcpy(pcVar4,pcVar7,sVar5);
          if ((cVar8 != '\0') &&
             (((cVar6 != '\0' || (DAT_008c702d != '\0')) || (cVar6 = '\0', 6 < DAT_000be644)))) {
            snprintf(local_2028,0x2000,"spool[%d].user:[%s], read[%s]",iVar1,pcVar4,pcVar7);
            FUN_0004948c(7,local_2028,0);
            cVar6 = DAT_00a5d20d;
            cVar8 = DAT_008c702e;
          }
          iVar2 = param_1[5];
          *(size_t *)(param_2 + 0x8c) = iVar2 + 1U;
          pcVar4 = malloc(param_1[5]);
          *(char **)(param_2 + 0x88) = pcVar4;
          memset(pcVar4,0,iVar2 + 1U);
          pcVar7 = (char *)param_1[4];
          sVar5 = strlen(pcVar7);
          memcpy(pcVar4,pcVar7,sVar5);
          if ((cVar8 != '\0') &&
             (((cVar6 != '\0' || (DAT_008c702d != '\0')) || (cVar6 = '\0', 6 < DAT_000be644)))) {
            snprintf(local_2028,0x2000,"spool[%d].pass:[%s], read[%s]",iVar1,pcVar4,pcVar7);
            FUN_0004948c(7,local_2028,0);
            cVar6 = DAT_00a5d20d;
          }
          iVar1 = iVar1 + 1;
          param_1 = param_1 + 6;
          param_2 = param_2 + 0x18;
        } while (iVar1 != 3);
        if (((cVar6 == '\0') && (DAT_008c702d == '\0')) && (DAT_000be644 < 3)) {
          return;
        }
        builtin_strncpy(local_2028,"recover to safe pool",0x14);
        local_2014._0_1_ = ' ';
        local_2014._1_1_ = 'c';
        local_2014._2_1_ = 'o';
        local_2014._3_1_ = 'n';
        builtin_strncpy(acStack_2010,"fig",4);
        FUN_0004948c(3,local_2028,0);
        return;
      }
    }
    else if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (cVar6 = '\0', 2 < DAT_000be644))
    {
      builtin_strncpy(local_2028,"load safe pool faile",0x14);
      local_2014 = CONCAT22(local_2014._2_2_,100);
      FUN_0004948c(3,local_2028,0);
      cVar6 = DAT_00a5d20d;
    }
    iVar1 = param_2;
    do {
      *(undefined4 *)(iVar1 + 0x7c) = 4;
      iVar2 = iVar1 + 0x18;
      puVar3 = calloc(4,1);
      *(undefined2 **)(iVar1 + 0x78) = puVar3;
      *(undefined4 *)(iVar1 + 0x84) = 4;
      *puVar3 = 0x5245;
      *(undefined1 *)(puVar3 + 1) = 0x52;
      puVar3 = calloc(4,1);
      *(undefined4 *)(iVar1 + 0x8c) = 4;
      *(undefined2 **)(iVar1 + 0x80) = puVar3;
      *(undefined1 *)(puVar3 + 1) = 0x52;
      *puVar3 = 0x5245;
      puVar3 = calloc(4,1);
      *(undefined2 **)(iVar1 + 0x88) = puVar3;
      *(undefined1 *)(puVar3 + 1) = 0x52;
      *puVar3 = 0x5245;
      iVar1 = iVar2;
    } while (param_2 + 0x48 != iVar2);
    if (((cVar6 != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
      builtin_strncpy(local_2028,"verify failed use in",0x14);
      local_2014._0_1_ = 'v';
      local_2014._1_1_ = 'a';
      local_2014._2_1_ = 'l';
      local_2014._3_1_ = 'i';
      builtin_strncpy(acStack_2010,"d pool c",8);
      local_2008._0_1_ = 'o';
      local_2008._1_1_ = 'n';
      local_2008._2_1_ = 'f';
      local_2008._3_1_ = 'i';
      local_2004 = 0x67;
      FUN_0004948c(3,local_2028,0);
      return;
    }
  }
  return;
}

