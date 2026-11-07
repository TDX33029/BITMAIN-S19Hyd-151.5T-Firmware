// FUN_0002921c @ 0002921c  size=248  callers=2
// program: cgminer


char * FUN_0002921c(char *param_1)

{
  int *piVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  undefined1 auStack_114 [92];
  char acStack_b8 [164];
  
  if (DAT_00068a18 == 0) {
    DAT_00068a18 = __strdup();
  }
  DAT_00068a1c = DAT_00068a1c + 1;
  if (10 < DAT_00068a1c) {
    return "Too many levels of JSON includes (limit 10) or a loop";
  }
  piVar1 = (int *)FUN_0004815c(param_1,0,auStack_114);
  if ((piVar1 == (int *)0x0) || (*piVar1 != 0)) {
    sVar2 = strlen(param_1);
    sVar3 = strlen(acStack_b8);
    sVar2 = sVar2 + sVar3 + 0x23;
    pcVar4 = (char *)FUN_0001f860(sVar2,"cgminer.c","load_config",0x88e);
    snprintf(pcVar4,sVar2,"JSON decode of file \'%s\' failed\n %s",param_1,acStack_b8);
    return pcVar4;
  }
  DAT_00068a20 = 1;
  pcVar4 = (char *)FUN_00029318(piVar1,1);
  return pcVar4;
}

