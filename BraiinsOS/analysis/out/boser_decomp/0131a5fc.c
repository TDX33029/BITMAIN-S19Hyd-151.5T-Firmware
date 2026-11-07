// FUN_0131a5fc @ 0131a5fc size=68 calls_out=2 calls_in=6
// strings: 

void FUN_0131a5fc(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 0x408) != 0) {
    FUN_0131a060(*(int *)(iVar1 + 4) + 0x20,iVar1 + 8);
  }
  FUN_0131a1c4(*(int *)(iVar1 + 4) + 0x20,param_1);
  return;
}

