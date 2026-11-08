// FUN_007091e8 @ 007091e8 size=92 calls_out=2 calls_in=0
// strings: 

void FUN_007091e8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_60 [80];
  
  FUN_019e6e74(auStack_60,&DAT_01c06c50,param_2[4],param_2[5],param_2[6],&DAT_01c06c50);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x50) = *param_2;
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  *(undefined4 *)(param_1 + 0x60) = param_2[4];
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  FUN_01bed4e2(param_1,auStack_60,0x50);
  return;
}

