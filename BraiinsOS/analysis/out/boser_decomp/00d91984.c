// FUN_00d91984 @ 00d91984 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_00d91984(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  *param_1 = *(undefined4 *)(param_2 + 0x40);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  uVar4 = *(undefined4 *)(param_2 + 0x60);
  param_1[4] = *(undefined4 *)(param_2 + 0x50);
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x68);
  uVar2 = *(undefined4 *)(param_2 + 0x6c);
  uVar3 = *(undefined4 *)(param_2 + 0x70);
  uVar4 = *(undefined4 *)(param_2 + 0x74);
  param_1[9] = *(undefined4 *)(param_2 + 100);
  param_1[10] = uVar1;
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar4;
  FUN_0142e6dc(param_2);
  FUN_0178e884(*(undefined4 *)(param_2 + 0x78));
  return;
}

