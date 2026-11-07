// FUN_000803a8 @ 000803a8  size=84  callers=0
// program: bmminer


undefined4 FUN_000803a8(undefined4 param_1,char *param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  
  if (param_2 == (char *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    sVar1 = strlen(param_2);
    uVar2 = FUN_000803fc(param_1,param_2,sVar1);
  }
  return uVar2;
}

