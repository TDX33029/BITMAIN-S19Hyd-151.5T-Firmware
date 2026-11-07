// FUN_00020a48 @ 00020a48  size=372  callers=5
// program: cgminer


undefined4 FUN_00020a48(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  char local_128 [8];
  char acStack_120 [260];
  
  *param_2 = param_1;
  pcVar1 = strstr(param_1,"//");
  if (pcVar1 != (char *)0x0) {
    param_1 = pcVar1 + 2;
  }
  pcVar2 = strchr(param_1,0x5b);
  pcVar3 = strchr(param_1,0x5d);
  pcVar1 = pcVar3;
  if (pcVar2 >= pcVar3 || (pcVar2 == (char *)0x0 || pcVar3 == (char *)0x0)) {
    pcVar1 = param_1;
  }
  pcVar1 = strchr(pcVar1,0x3a);
  uVar4 = strlen(param_1);
  if (pcVar1 == (char *)0x0) {
    pcVar6 = (char *)0x0;
    iVar7 = 0;
  }
  else {
    iVar7 = ~((int)pcVar1 - (int)param_1) + uVar4;
    if (iVar7 < 1) {
      return 0;
    }
    pcVar6 = pcVar1 + 1;
    uVar4 = (int)pcVar1 - (int)param_1;
  }
  if ((int)uVar4 < 1) {
    return 0;
  }
  if (pcVar2 < pcVar3 && (pcVar2 != (char *)0x0 && pcVar3 != (char *)0x0)) {
    param_1 = param_1 + 1;
    uVar4 = uVar4 - 2;
  }
  snprintf(acStack_120,0xfe,"%.*s",uVar4,param_1);
  if (iVar7 == 0) {
    local_128[0] = '8';
    local_128[1] = '0';
    local_128[2] = 0;
  }
  else {
    snprintf(local_128,6,"%.*s",iVar7,pcVar6);
    pcVar1 = strpbrk(local_128,"/#");
    if (pcVar1 != (char *)0x0) {
      *pcVar1 = '\0';
    }
  }
  uVar5 = __strdup(local_128);
  *param_3 = uVar5;
  uVar5 = __strdup(acStack_120);
  *param_2 = uVar5;
  return 1;
}

