// FUN_000801b0 @ 000801b0  size=80  callers=0
// program: bmminer


undefined4 FUN_000801b0(char *param_1)

{
  size_t sVar1;
  undefined4 uVar2;
  
  if (param_1 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    sVar1 = strlen(param_1);
    uVar2 = FUN_000800e8(param_1,sVar1,0);
  }
  return uVar2;
}

