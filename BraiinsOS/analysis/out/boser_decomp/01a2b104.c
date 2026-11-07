// FUN_01a2b104 @ 01a2b104 size=44 calls_out=0 calls_in=0
// strings: 

void FUN_01a2b104(uint *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = *(uint *)(param_2 + 0x38) != 2 && (*(uint *)(param_2 + 0x38) & 1) != 0;
  if (bVar1) {
    uVar2 = *(uint *)(param_2 + 0x44);
    param_1[2] = *(uint *)(param_2 + 0x40);
    param_1[3] = uVar2;
  }
  *param_1 = (uint)bVar1;
  param_1[1] = 0;
  return;
}

