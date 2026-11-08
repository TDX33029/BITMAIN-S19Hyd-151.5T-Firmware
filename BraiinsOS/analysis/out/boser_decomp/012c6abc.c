// FUN_012c6abc @ 012c6abc size=116 calls_out=1 calls_in=4
// strings: 

undefined4 FUN_012c6abc(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_1c [3];
  
  uVar3 = *(uint *)(param_1 + 0x14);
  if (uVar3 < *(uint *)(param_1 + 0x10)) {
    do {
      uVar2 = *(byte *)(*(int *)(param_1 + 0xc) + uVar3) - 9;
      if ((0x17 < uVar2) || ((1 << (uVar2 & 0xff) & 0x800013U) == 0)) {
        local_1c[0] = 0x16;
        uVar1 = FUN_012c6b30(param_1,local_1c);
        return uVar1;
      }
      uVar3 = uVar3 + 1;
      *(uint *)(param_1 + 0x14) = uVar3;
    } while (*(uint *)(param_1 + 0x10) != uVar3);
  }
  return 0;
}

