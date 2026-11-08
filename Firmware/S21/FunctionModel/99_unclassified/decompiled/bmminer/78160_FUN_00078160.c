// FUN_00078160 @ 00078160  size=96  callers=0
// program: bmminer


undefined4 FUN_00078160(void *param_1,size_t param_2,int *param_3)

{
  size_t sVar1;
  undefined4 uVar2;
  
  sVar1 = write(*param_3,param_1,param_2);
  if (sVar1 == param_2) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

