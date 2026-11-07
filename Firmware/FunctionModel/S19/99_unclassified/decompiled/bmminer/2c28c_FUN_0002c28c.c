// FUN_0002c28c @ 0002c28c  size=240  callers=2
// program: bmminer


char * FUN_0002c28c(char *param_1)

{
  int *piVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  undefined1 auStack_114 [92];
  char acStack_b8 [164];
  
  if (DAT_0008a348 == 0) {
    DAT_0008a348 = __strdup();
  }
  DAT_0008a34c = DAT_0008a34c + 1;
  if (10 < DAT_0008a34c) {
    return "Too many levels of JSON includes (limit 10) or a loop";
  }
  piVar1 = (int *)FUN_00054e88(param_1,0,auStack_114);
  if ((piVar1 == (int *)0x0) || (*piVar1 != 0)) {
    sVar2 = strlen(param_1);
    sVar3 = strlen(acStack_b8);
    sVar2 = sVar2 + sVar3 + 0x23;
    pcVar4 = (char *)FUN_00033990(sVar2,"bmminer.c","load_config",0x386);
    snprintf(pcVar4,sVar2,"JSON decode of file \'%s\' failed\n %s",param_1,acStack_b8);
    return pcVar4;
  }
  pcVar4 = (char *)FUN_0002c380(piVar1,1);
  return pcVar4;
}

