// FUN_00080268 @ 00080268  size=76  callers=18
// program: bmminer


undefined4 FUN_00080268(char *param_1)

{
  size_t sVar1;
  undefined4 uVar2;
  
  if (param_1 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    sVar1 = strlen(param_1);
    uVar2 = FUN_000802b4(param_1,sVar1);
  }
  return uVar2;
}

