// FUN_00d91ba0 @ 00d91ba0 size=48 calls_out=2 calls_in=1
// strings: 

void FUN_00d91ba0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  uVar4 = *(undefined4 *)(param_2 + 0x50);
  uVar5 = *(undefined4 *)(param_2 + 0x54);
  *param_1 = *(undefined4 *)(param_2 + 0x40);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  uVar1 = *(undefined4 *)(param_2 + 0x5c);
  uVar2 = *(undefined4 *)(param_2 + 0x60);
  uVar3 = *(undefined4 *)(param_2 + 100);
  uVar4 = *(undefined4 *)(param_2 + 0x68);
  uVar5 = *(undefined4 *)(param_2 + 0x6c);
  param_1[6] = *(undefined4 *)(param_2 + 0x58);
  param_1[7] = uVar1;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  FUN_0142e6dc(param_2);
  FUN_0178e884(*(undefined4 *)(param_2 + 0x70));
  return;
}

