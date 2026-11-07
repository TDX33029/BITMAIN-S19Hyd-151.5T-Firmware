// FUN_00018d84 @ 00018d84  size=68  callers=0
// program: bmminer


void FUN_00018d84(undefined4 param_1,undefined4 param_2)

{
  char *__s1;
  int iVar1;
  
  __s1 = (char *)FUN_0001fffc();
  iVar1 = strcmp(__s1,"BHB28601");
  if (iVar1 == 0) {
    FUN_000180f4(param_1,1,param_2);
    return;
  }
  FUN_000180f4(param_1,0,param_2);
  return;
}

