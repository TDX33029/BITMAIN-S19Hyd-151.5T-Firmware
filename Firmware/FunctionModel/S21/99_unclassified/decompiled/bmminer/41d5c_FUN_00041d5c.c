// FUN_00041d5c @ 00041d5c  size=324  callers=3
// program: bmminer


char * FUN_00041d5c(char *param_1,undefined4 param_2)

{
  int *piVar1;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  char *pcVar5;
  undefined1 auStack_114 [92];
  char acStack_b8 [164];
  
  if (DAT_000c8edc == 0) {
    DAT_000c8edc = __strdup();
  }
  DAT_000c8ee0 = DAT_000c8ee0 + 1;
  if (DAT_000c8ee0 < 0xb) {
    piVar1 = (int *)FUN_0007d618(param_1,0,auStack_114);
    if ((piVar1 == (int *)0x0) || (*piVar1 != 0)) {
      sVar2 = strlen(param_1);
      sVar3 = strlen(acStack_b8);
      sVar2 = sVar2 + sVar3 + 0x23;
      pcVar5 = (char *)FUN_0004ae70(sVar2,"bmminer.c","load_config",0x3b1);
      snprintf(pcVar5,sVar2,"JSON decode of file \'%s\' failed\n %s",param_1,acStack_b8);
      return pcVar5;
    }
    iVar4 = FUN_00041ea4(piVar1,param_2,1);
    if (iVar4 != 0) {
      pcVar5 = (char *)FUN_0004ae70(200,"bmminer.c","load_config",0x3bc);
      FUN_0004c940(pcVar5,iVar4,200,"bmminer.c","load_config",0x3bd);
      return pcVar5;
    }
    pcVar5 = (char *)0x0;
  }
  else {
    pcVar5 = "Too many levels of JSON includes (limit 10) or a loop";
  }
  return pcVar5;
}

