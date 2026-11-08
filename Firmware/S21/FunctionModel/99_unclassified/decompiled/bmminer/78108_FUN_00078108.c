// FUN_00078108 @ 00078108  size=88  callers=0
// program: bmminer


undefined4 FUN_00078108(void *param_1,size_t param_2,FILE *param_3)

{
  size_t sVar1;
  undefined4 uVar2;
  
  sVar1 = fwrite(param_1,param_2,1,param_3);
  if (sVar1 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

