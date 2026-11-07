// FUN_01a54f64 @ 01a54f64 size=80 calls_out=2 calls_in=1
// strings: 

void FUN_01a54f64(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  
  FUN_01a4bbdc(param_1 + 8);
  pbVar2 = (byte *)(*(int *)(param_1 + 0x1c) + 0x65);
  for (iVar3 = *(int *)(param_1 + 0x20) * 0xc0; iVar3 != 0; iVar3 = iVar3 + -0xc0) {
    uVar1 = *(uint *)(pbVar2 + -0x65);
    bVar4 = uVar1 == 2;
    if (bVar4) {
      uVar1 = (uint)*pbVar2;
    }
    if (bVar4 && uVar1 == 1) {
      FUN_01a54f64(pbVar2 + -0x5d);
    }
    pbVar2 = pbVar2 + 0xc0;
  }
  return;
}

