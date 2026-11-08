// FUN_016deab0 @ 016deab0 size=104 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_016deab0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  FUN_016dd606(param_2,0,0x24,param_4,param_4);
  param_2[3] = (uint)(2 < *(int *)(param_1 + 0x18));
  param_2[1] = *(int *)(param_1 + 0x34);
  iVar3 = DAT_018ddb24;
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar4 = DAT_018ddb10 + (-DAT_018ddb10 & DAT_018ddb24 - 1U);
    param_2[2] = iVar4;
    while ((iVar1 = FUN_016d6a6c(iVar4 - (iVar3 + DAT_018ddb24),DAT_018ddb24,DAT_018ddb24 << 1,0),
           iVar1 == -1 && (piVar2 = (int *)FUN_016d2bc8(), *piVar2 == 0xc))) {
      iVar3 = iVar3 + DAT_018ddb24;
    }
  }
  else {
    param_2[2] = *(int *)(param_1 + 0x2c);
    iVar3 = *(int *)(param_1 + 0x30);
  }
  *param_2 = iVar3;
  return 0;
}

