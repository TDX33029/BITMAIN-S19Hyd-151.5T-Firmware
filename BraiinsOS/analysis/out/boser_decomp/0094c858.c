// FUN_0094c858 @ 0094c858 size=64 calls_out=1 calls_in=9
// strings: 

void FUN_0094c858(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_01ad2cec((undefined4 *)(param_2 + 0x60));
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  uVar4 = param_3[4];
  uVar5 = param_3[5];
  *(undefined4 *)(param_2 + 0x60) = *param_3;
  *(undefined4 *)(param_2 + 100) = uVar1;
  *(undefined4 *)(param_2 + 0x68) = uVar2;
  *(undefined4 *)(param_2 + 0x6c) = uVar3;
  *(undefined4 *)(param_2 + 0x70) = uVar4;
  *(undefined4 *)(param_2 + 0x74) = uVar5;
  uVar1 = param_3[7];
  uVar2 = param_3[8];
  uVar3 = param_3[9];
  uVar4 = param_3[10];
  uVar5 = param_3[0xb];
  *(undefined4 *)(param_2 + 0x78) = param_3[6];
  *(undefined4 *)(param_2 + 0x7c) = uVar1;
  *(undefined4 *)(param_2 + 0x80) = uVar2;
  *(undefined4 *)(param_2 + 0x84) = uVar3;
  *(undefined4 *)(param_2 + 0x88) = uVar4;
  *(undefined4 *)(param_2 + 0x8c) = uVar5;
  FUN_01bed4e2(param_1,param_2,0x130);
  return;
}

