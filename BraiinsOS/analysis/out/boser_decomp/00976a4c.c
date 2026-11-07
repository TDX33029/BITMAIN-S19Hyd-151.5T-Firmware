// FUN_00976a4c @ 00976a4c size=112 calls_out=3 calls_in=0
// strings: 

void FUN_00976a4c(undefined4 *param_1)

{
  char *pcVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  int iVar2;
  undefined4 unaff_r4;
  
  FUN_019bb7e0(*param_1,param_1[1]);
  pcVar1 = (char *)(param_1 + 4);
  iVar2 = param_1[0x10];
  if (iVar2 == -0x80000000) {
    FUN_00949bc0(pcVar1);
    return;
  }
  FUN_019bb7e0(param_1[10],param_1[0xb],extraout_r2,extraout_r3,unaff_r4);
  FUN_019bb7e0(param_1[0xd],param_1[0xe]);
  if (*pcVar1 != '\x06') {
    FUN_00db4764(pcVar1);
  }
  FUN_019bb7e0(iVar2,param_1[0x11]);
  return;
}

