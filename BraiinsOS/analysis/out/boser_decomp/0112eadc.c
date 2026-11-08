// FUN_0112eadc @ 0112eadc size=48 calls_out=2 calls_in=2
// strings: 

void FUN_0112eadc(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  FUN_0110f3c8();
  uVar1 = *(uint *)(param_1 + 0x18);
  bVar2 = uVar1 == 0;
  if (bVar2) {
    uVar1 = (uint)*(byte *)(param_1 + 100);
  }
  if (bVar2 && uVar1 == 3) {
    FUN_0110f420(param_1 + 0x20);
    return;
  }
  return;
}

