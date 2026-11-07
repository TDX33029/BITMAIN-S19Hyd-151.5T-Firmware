// FUN_00033570 @ 00033570  size=608  callers=2
// program: bmminer


undefined4 FUN_00033570(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  int *piVar1;
  int iVar2;
  char *__src;
  char *pcVar3;
  size_t sVar4;
  size_t __n;
  char local_2020 [20];
  uint local_200c;
  
  piVar1 = (int *)FUN_0007eb20(param_2,param_3);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 2)) {
    if ((*param_3 == 'u') && (((param_3[1] == 'r' && (param_3[2] == 'l')) && (param_3[3] == '\0'))))
    {
      pcVar3 = (char *)FUN_00080310();
      sVar4 = strlen(pcVar3);
      __n = sVar4 + 1;
      param_1[1] = __n;
      pcVar3 = malloc(sVar4 + 2);
      *param_1 = pcVar3;
    }
    else {
      iVar2 = strcmp(param_3,"user");
      if (iVar2 == 0) {
        pcVar3 = (char *)FUN_00080310(piVar1);
        sVar4 = strlen(pcVar3);
        __n = sVar4 + 1;
        param_1[3] = __n;
        pcVar3 = malloc(sVar4 + 2);
        param_1[2] = pcVar3;
      }
      else {
        iVar2 = strcmp(param_3,"pass");
        if (iVar2 != 0) {
          if (((DAT_00a5d20d == '\0') && (DAT_008c702d == '\0')) && (DAT_000be644 < 3)) {
            return 0xffffffff;
          }
          builtin_strncpy(local_2020,"not get item support",0x14);
          local_200c = local_200c & 0xffffff00;
          FUN_0004948c(3,local_2020,0);
          return 0xffffffff;
        }
        pcVar3 = (char *)FUN_00080310(piVar1);
        sVar4 = strlen(pcVar3);
        __n = sVar4 + 1;
        param_1[5] = __n;
        pcVar3 = malloc(sVar4 + 2);
        param_1[4] = pcVar3;
      }
    }
    memset(pcVar3,0,__n);
    __src = (char *)FUN_00080310(piVar1);
    strcpy(pcVar3,__src);
    return 0;
  }
  if ((DAT_008c702e == '\0') ||
     (((DAT_00a5d20d == '\0' && (DAT_008c702d == '\0')) && (DAT_000be644 < 7)))) {
    return 0xffffffff;
  }
  builtin_strncpy(local_2020,"pool array item fail",0x14);
  local_200c._0_1_ = 'e';
  local_200c._1_1_ = 'd';
  local_200c._2_1_ = '\n';
  local_200c._3_1_ = '\0';
  FUN_0004948c(7,local_2020,0);
  return 0xffffffff;
}

