// FUN_017977b8 @ 017977b8 size=188 calls_out=0 calls_in=2
// strings: 

uint FUN_017977b8(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 0x24) < param_3) {
    if (*(uint *)(param_1 + 0x24) == 0) {
      uVar2 = *(uint *)(param_1 + 8);
      *(uint *)(param_1 + 0x10) = uVar2;
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 4) & 0xffffffc0;
      uVar1 = uVar2 + (-uVar2 & 0x3f);
      if (*(uint *)(param_1 + 4) < uVar1) {
        return 0;
      }
      *(uint *)(param_1 + 8) = uVar1;
      *(uint *)(param_1 + 0xc) = uVar1;
      if (uVar2 < uVar1) {
        *(uint *)(param_1 + 0x10) = uVar1;
      }
    }
    *(uint *)(param_1 + 0x24) = param_3;
  }
  if (param_2 != 0) {
    uVar1 = *(int *)(param_1 + 0x14) - param_2;
    if (*(uint *)(param_1 + 0xc) <= uVar1) {
      *(uint *)(param_1 + 0x14) = uVar1;
      if (uVar1 < *(uint *)(param_1 + 0x10)) {
        *(uint *)(param_1 + 0x10) = uVar1;
      }
      return uVar1;
    }
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  return 0;
}

