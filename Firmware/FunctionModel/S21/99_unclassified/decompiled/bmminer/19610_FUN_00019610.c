// FUN_00019610 @ 00019610  size=68  callers=1
// program: bmminer


void FUN_00019610(undefined4 param_1,undefined4 param_2)

{
  char *__s1;
  int iVar1;
  
  __s1 = (char *)FUN_0002a4e4();
  iVar1 = strcmp(__s1,"BHB28601");
  if (iVar1 == 0) {
    FUN_000187b0(param_1,1,param_2);
    return;
  }
  FUN_000187b0(param_1,0,param_2);
  return;
}

