// FUN_00092314 @ 00092314  size=112  callers=0
// program: bmminer


undefined4 FUN_00092314(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 8) + 0x13c) == 0) {
    gettimeofday((timeval *)(*(int *)(param_2 + 8) + 0x13c),(__timezone_ptr_t)0x0);
  }
  uVar1 = FUN_00096db8(param_3,*(undefined4 *)(*(int *)(param_2 + 8) + 0x140),6);
  return uVar1;
}

