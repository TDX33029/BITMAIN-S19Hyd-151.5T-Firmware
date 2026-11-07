// FUN_0007aea4 @ 0007aea4  size=84  callers=2
// program: bmminer


undefined4 FUN_0007aea4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 4) == param_1 + 0x14) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  return uVar1;
}

