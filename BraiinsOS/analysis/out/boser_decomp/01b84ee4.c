// FUN_01b84ee4 @ 01b84ee4 size=140 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01b84ee4(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 0x24) < param_2) {
    if (*(uint *)(param_1 + 0x24) == 0) {
      uVar1 = *(uint *)(param_1 + 8);
      *(uint *)(param_1 + 0x10) = uVar1;
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 4) & 0xffffffc0;
      uVar2 = uVar1 + (-uVar1 & 0x3f);
      if (*(uint *)(param_1 + 4) < uVar2) {
        return 0xffffffc0;
      }
      *(uint *)(param_1 + 8) = uVar2;
      *(uint *)(param_1 + 0xc) = uVar2;
      if (uVar1 < uVar2) {
        *(uint *)(param_1 + 0x10) = uVar2;
      }
    }
    *(uint *)(param_1 + 0x24) = param_2;
  }
  return 0;
}

