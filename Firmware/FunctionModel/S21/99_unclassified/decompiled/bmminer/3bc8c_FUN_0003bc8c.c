// FUN_0003bc8c @ 0003bc8c  size=100  callers=2
// program: bmminer


void FUN_0003bc8c(undefined4 param_1,int param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = FUN_0003b270();
  if (499 < param_2 - 100U) {
    param_2 = 500;
  }
  *(int *)(iVar1 + 0xc) = param_2;
  FUN_0003b2b4(iVar1,"Content-Type","text/plain");
  sVar2 = strlen(param_3);
  *(char **)(iVar1 + 4) = param_3;
  *(size_t *)(iVar1 + 8) = sVar2;
  FUN_0003b6dc(param_1,iVar1);
  FUN_0003a96c(param_1);
  return;
}

