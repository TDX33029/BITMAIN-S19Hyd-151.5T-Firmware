// FUN_01271f14 @ 01271f14 size=52 calls_out=1 calls_in=1
// strings: 

int FUN_01271f14(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char acStack_50 [28];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  char acStack_28 [4];
  int iStack_24;
  
  iVar1 = FUN_01271d68(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
  }
  iVar2 = param_1[4];
  iVar1 = param_1[5];
  iStack_2c = param_1[6];
  param_1[4] = -0x80000000;
  if (iVar2 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
  }
  iStack_34 = iVar2;
  iStack_30 = iVar1;
  FUN_01274488(acStack_28,param_3);
  if (acStack_28[0] == '\x06') {
    FUN_019bb7e0(iVar2,iVar1);
  }
  else {
    FUN_0196b484(acStack_50,param_1 + 1,&iStack_34,acStack_28);
    iStack_24 = 0;
    if (acStack_50[0] != '\x06') {
      FUN_00db4764(acStack_50);
    }
  }
  return iStack_24;
}

