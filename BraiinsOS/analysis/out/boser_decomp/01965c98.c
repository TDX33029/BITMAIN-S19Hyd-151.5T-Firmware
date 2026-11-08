// FUN_01965c98 @ 01965c98 size=136 calls_out=1 calls_in=44
// strings: 

undefined4 FUN_01965c98(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_1c [3];
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 < *(uint *)(param_1 + 0x10)) {
    do {
      uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + uVar2);
      uVar4 = uVar3 - 9;
      if ((0x17 < uVar4) || ((1 << (uVar4 & 0xff) & 0x800013U) == 0)) {
        if (uVar3 == 0x3a) {
          *(uint *)(param_1 + 0x14) = uVar2 + 1;
          return 0;
        }
        local_1c[0] = 6;
        goto LAB_01965cec;
      }
      uVar2 = uVar2 + 1;
      *(uint *)(param_1 + 0x14) = uVar2;
    } while (*(uint *)(param_1 + 0x10) != uVar2);
  }
  local_1c[0] = 3;
LAB_01965cec:
  uVar1 = FUN_01964674(param_1,local_1c);
  return uVar1;
}

