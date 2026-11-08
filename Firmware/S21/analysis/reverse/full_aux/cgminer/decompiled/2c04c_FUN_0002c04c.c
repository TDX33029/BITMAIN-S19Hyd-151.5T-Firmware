// FUN_0002c04c @ 0002c04c  size=112  callers=2
// program: cgminer


int FUN_0002c04c(int param_1,void *param_2,size_t param_3,void *param_4,int param_5,size_t param_6)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
LAB_0002c0b0:
    iVar2 = param_1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x160);
    while( true ) {
      iVar2 = iVar1;
      iVar1 = memcmp((void *)(param_1 + 0x80),param_2,param_3);
      if ((iVar1 == 0) && (iVar1 = memcmp((void *)(param_1 + param_5),param_4,param_6), iVar1 == 0))
      goto LAB_0002c0b0;
      if (iVar2 == 0) break;
      iVar1 = *(int *)(iVar2 + 0x160);
      param_1 = iVar2;
    }
  }
  return iVar2;
}

