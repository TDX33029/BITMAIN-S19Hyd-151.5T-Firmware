// FUN_00092674 @ 00092674  size=124  callers=0
// program: bmminer


undefined4 FUN_00092674(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_2 + 8) + 0x110) == 0) {
    uVar1 = FUN_0009774c(param_3,"(func=null)",0xb);
  }
  else {
    uVar1 = FUN_0009774c(param_3,*(undefined4 *)(*(int *)(param_2 + 8) + 0x118),
                         *(undefined4 *)(*(int *)(param_2 + 8) + 0x11c));
  }
  return uVar1;
}

