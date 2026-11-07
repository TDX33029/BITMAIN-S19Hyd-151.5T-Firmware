// FUN_0005206c @ 0005206c  size=88  callers=1
// program: bmminer


undefined4 FUN_0005206c(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  snprintf(param_3,0xb,"%p",param_2);
  iVar1 = FUN_000533e8(param_1,param_3);
  if (iVar1 == 0) {
    uVar2 = FUN_00056300();
    uVar2 = FUN_00053154(param_1,param_3,uVar2);
    return uVar2;
  }
  return 0xffffffff;
}

