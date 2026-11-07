// FUN_00055fa4 @ 00055fa4  size=52  callers=0
// program: bmminer


undefined4 FUN_00055fa4(undefined4 param_1,char *param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  
  if (param_2 == (char *)0x0) {
    return 0xffffffff;
  }
  sVar1 = strlen(param_2);
  uVar2 = FUN_00055f40(param_1,param_2,sVar1);
  return uVar2;
}

