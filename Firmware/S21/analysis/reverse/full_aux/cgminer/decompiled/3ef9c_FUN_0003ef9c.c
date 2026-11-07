// FUN_0003ef9c @ 0003ef9c  size=92  callers=1
// program: cgminer


bool FUN_0003ef9c(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_1c [2];
  
  DAT_00076308 = *param_2;
  local_1c[0] = 0;
  do {
    iVar1 = FUN_0003f108(param_1,param_2,local_1c,param_3);
  } while (iVar1 == 1);
  return iVar1 == 0;
}

