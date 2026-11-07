// FUN_0005facc @ 0005facc  size=68  callers=1
// program: bmminer


int FUN_0005facc(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00065368(*param_1);
  if (iVar1 == 0) {
    FUN_000658a8(2,"src/mdc.c",0x79,"zc_hashtable_get fail");
    return 0;
  }
  return iVar1 + 0x401;
}

