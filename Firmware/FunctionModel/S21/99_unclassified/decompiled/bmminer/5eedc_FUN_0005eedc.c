// FUN_0005eedc @ 0005eedc  size=92  callers=1
// program: bmminer


bool FUN_0005eedc(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_1c [2];
  
  DAT_012a294c = *param_2;
  local_1c[0] = 0;
  do {
    iVar1 = FUN_0005f048(param_1,param_2,local_1c,param_3);
  } while (iVar1 == 1);
  return iVar1 == 0;
}

