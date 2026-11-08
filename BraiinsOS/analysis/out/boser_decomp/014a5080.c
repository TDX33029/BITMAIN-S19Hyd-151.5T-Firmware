// FUN_014a5080 @ 014a5080 size=96 calls_out=2 calls_in=2
// strings: 

void FUN_014a5080(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar1 = *(undefined1 *)(param_2 + 5);
  uVar2 = param_2[3];
  FUN_006666fc(&local_30,uVar2,param_2[4]);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  param_1[0xc] = local_30;
  param_1[0xd] = uStack_2c;
  param_1[0xe] = uStack_28;
  param_1[2] = 0x80000000;
  FUN_019bb7e0(param_2[2],uVar2);
  return;
}

