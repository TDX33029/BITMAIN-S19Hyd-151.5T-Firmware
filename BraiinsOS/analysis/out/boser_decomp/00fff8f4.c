// FUN_00fff8f4 @ 00fff8f4 size=168 calls_out=4 calls_in=1
// strings: 

void FUN_00fff8f4(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_28 [16];
  
  if (*param_2 == 0) {
    *param_1 = 0;
    FUN_00fff208(param_3);
    return;
  }
  if (*param_2 == 1) {
    iVar2 = param_2[1];
    iVar3 = param_2[2];
    FUN_00f1e8e8(auStack_28,param_3);
    uVar1 = FUN_011d8f14(iVar2,iVar3,auStack_28);
    FUN_00fff208(param_3);
    *param_1 = 1;
    param_1[1] = uVar1;
    param_1[2] = &DAT_01c1c900;
  }
  else {
    uVar1 = FUN_011d9048(param_2[1],param_2[2],param_3);
    *param_1 = 2;
    param_1[1] = uVar1;
    param_1[2] = &DAT_01c21f74;
  }
  return;
}

