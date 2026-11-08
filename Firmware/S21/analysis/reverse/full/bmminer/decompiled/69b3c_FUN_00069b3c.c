// FUN_00069b3c @ 00069b3c  size=72  callers=4
// program: bmminer


undefined4 FUN_00069b3c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == param_1 + 4) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
  }
  return uVar1;
}

