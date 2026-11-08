// FUN_000302e8 @ 000302e8  size=236  callers=0
// program: cgminer


char * FUN_000302e8(undefined4 param_1)

{
  char *pcVar1;
  void *pvVar2;
  int iVar3;
  
  if ((DAT_00068b8c == 0) && (DAT_00068b90 == 0)) {
    DAT_00068b94 = DAT_00068b94 + 1;
    if (DAT_00072e70 < DAT_00068b94) {
      FUN_0003009c();
    }
    iVar3 = *(int *)(DAT_00072f14 + (DAT_00068b94 + 0x3fffffff) * 4);
    pcVar1 = (char *)__strdup(param_1);
    FUN_0003e61c(param_1,iVar3 + 0xa8);
    pcVar1 = strtok(pcVar1,":");
    *(char **)(iVar3 + 0xac) = pcVar1;
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "Failed to find : delimited user info";
    }
    else {
      pcVar1 = strtok((char *)0x0,":");
      *(char **)(iVar3 + 0xb0) = pcVar1;
      if (pcVar1 == (char *)0x0) {
        pvVar2 = calloc(1,1);
        *(void **)(iVar3 + 0xb0) = pvVar2;
        pcVar1 = (char *)0x0;
      }
      else {
        pcVar1 = (char *)0x0;
      }
    }
  }
  else {
    pcVar1 = "Use only user + pass or userpass, but not both";
  }
  return pcVar1;
}

