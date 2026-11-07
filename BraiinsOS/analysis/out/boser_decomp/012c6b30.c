// FUN_012c6b30 @ 012c6b30 size=68 calls_out=2 calls_in=61
// strings: 

void FUN_012c6b30(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(int *)(param_1 + 0x14) + 1;
  if (uVar1 <= uVar2) {
    uVar2 = uVar1;
  }
  uVar3 = FUN_019679bc(*(undefined4 *)(param_1 + 0xc),uVar1,uVar2);
  FUN_01966fbc(param_2,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  return;
}

