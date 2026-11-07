// FUN_000447f0 @ 000447f0  size=100  callers=1
// program: bmminer


int FUN_000447f0(int param_1,int param_2)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x634) + 0x748 + *(int *)(param_1 + 0x6bc) * 0x20;
  pcVar1 = (char *)__strdup(param_2 + iVar3);
  sVar2 = strlen(pcVar1);
  iVar3 = iVar3 + 1 + sVar2;
  free(pcVar1);
  pcVar1 = (char *)__strdup(param_2 + iVar3);
  sVar2 = strlen(pcVar1);
  free(pcVar1);
  return sVar2 + 0x11 + iVar3;
}

