// FUN_01a4c560 @ 01a4c560 size=84 calls_out=2 calls_in=5
// strings: 

void FUN_01a4c560(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 == *(int *)(param_1 + 0x18)) {
    FUN_019abd3c();
  }
  puVar3 = *(undefined4 **)(param_1 + 0x1c);
  if (iVar4 != 0) {
    FUN_01bed864(puVar3 + 3,puVar3,iVar4 * 0xc);
  }
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *puVar3 = *param_2;
  puVar3[1] = uVar1;
  puVar3[2] = uVar2;
  *(int *)(param_1 + 0x20) = iVar4 + 1;
  return;
}

