// FUN_00048bec @ 00048bec  size=32  callers=5
// program: bmminer


bool FUN_00048bec(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return false;
  }
  iVar1 = FUN_000490b8(*param_1);
  return iVar1 != 0;
}

