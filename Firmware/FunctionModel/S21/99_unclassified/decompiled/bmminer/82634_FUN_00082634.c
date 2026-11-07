// FUN_00082634 @ 00082634  size=160  callers=0
// program: bmminer


int FUN_00082634(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char acStack_818 [2048];
  
  iVar1 = FUN_00083730(1,param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    iVar1 = FUN_00081200(param_1,0,param_2,param_3,param_4);
    return iVar1;
  }
  snprintf(acStack_818,0x800,"set_register_cache_value returns %d\n",iVar1);
  FUN_0004948c(3,acStack_818,0);
  return iVar1;
}

