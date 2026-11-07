// FUN_0008c730 @ 0008c730  size=108  callers=1
// program: bmminer


int FUN_0008c730(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_000952d0(*param_1,param_2);
  if (iVar1 == 0) {
    FUN_00095b4c(2,"src/mdc.c",0x86,"zc_hashtable_get fail");
    iVar1 = 0;
  }
  return iVar1;
}

