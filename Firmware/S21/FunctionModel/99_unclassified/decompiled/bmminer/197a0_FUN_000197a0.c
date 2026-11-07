// FUN_000197a0 @ 000197a0  size=112  callers=7
// program: bmminer


void FUN_000197a0(undefined4 param_1,undefined4 param_2)

{
  char *__s1;
  int iVar1;
  
  __s1 = (char *)FUN_0002a4e4();
  iVar1 = strcmp(__s1,"BHB28601");
  if (iVar1 == 0) {
    FUN_00017628(param_1,1,param_2);
    return;
  }
  if (DAT_000bfb48 == 3) {
    FUN_00019760(param_1,param_2);
    return;
  }
  FUN_00017628(param_1,0,param_2);
  return;
}

