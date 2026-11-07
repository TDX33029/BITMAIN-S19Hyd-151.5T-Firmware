// FUN_0143d22c @ 0143d22c size=60 calls_out=2 calls_in=1
// strings: 

void FUN_0143d22c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [136];
  
  FUN_010a55c4(auStack_98);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x88) = *param_2;
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  FUN_016dd1aa(param_1,auStack_98,0x88);
  return;
}

