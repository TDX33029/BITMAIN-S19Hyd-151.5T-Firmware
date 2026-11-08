// FUN_00043074 @ 00043074  size=92  callers=1
// program: bmminer


bool FUN_00043074(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_1c [2];
  
  DAT_00b2d270 = *param_2;
  local_1c[0] = 0;
  do {
    iVar1 = FUN_000431e0(param_1,param_2,local_1c,param_3);
  } while (iVar1 == 1);
  return iVar1 == 0;
}

