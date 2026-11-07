// FUN_000284a8 @ 000284a8  size=184  callers=1
// program: cgminer


char * FUN_000284a8(char *param_1)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  sVar3 = strlen(param_1);
  pcVar4 = (char *)FUN_0001f860(sVar3 * 2 + 1,"cgminer.c","json_escape",0x176a);
  puVar5 = (undefined4 *)FUN_0001f860(8,"cgminer.c","json_escape",0x176b);
  *puVar5 = pcVar4;
  puVar5[1] = DAT_0006890c;
  DAT_0006890c = puVar5;
  cVar1 = *param_1;
  pcVar2 = pcVar4;
  while (cVar1 != '\0') {
    if (cVar1 == '\"' || cVar1 == '\\') {
      *pcVar2 = '\\';
      pcVar6 = pcVar2 + 2;
      pcVar2 = pcVar2 + 1;
    }
    else {
      pcVar6 = pcVar2 + 1;
    }
    *pcVar2 = *param_1;
    cVar1 = param_1[1];
    pcVar2 = pcVar6;
    param_1 = param_1 + 1;
  }
  *pcVar2 = '\0';
  return pcVar4;
}

