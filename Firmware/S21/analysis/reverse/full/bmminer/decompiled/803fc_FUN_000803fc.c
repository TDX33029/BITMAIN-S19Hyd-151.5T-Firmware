// FUN_000803fc @ 000803fc  size=172  callers=2
// program: bmminer


undefined4 FUN_000803fc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_1 == (int *)0x0) || (*param_1 != 2)) || (param_2 == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0007d960(param_2,param_3);
    if (iVar1 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      FUN_0007d8e8(param_1[2]);
      param_1[2] = iVar1;
      param_1[3] = param_3;
      uVar2 = 0;
    }
  }
  return uVar2;
}

