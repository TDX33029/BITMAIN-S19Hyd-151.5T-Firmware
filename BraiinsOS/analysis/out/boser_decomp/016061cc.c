// FUN_016061cc @ 016061cc size=224 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_016061cc(uint *param_1,int param_2,uint *param_3,int param_4)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *param_1;
  if (uVar3 == 0) {
    return 0;
  }
  if (uVar3 < 3) {
    uVar4 = *param_3;
    *(short *)(param_4 + 0x480) = *(short *)(param_4 + 0x480) + (short)uVar3;
    uVar5 = uVar4 + uVar3;
    if (CARRY4(uVar4,uVar3)) {
      return 1;
    }
    if (0x140 < uVar5) {
      return 1;
    }
    FUN_01bed93e(param_2 + uVar4,0);
  }
  else {
    if (uVar3 < 0xb) {
      uVar4 = *param_3;
      *(short *)(param_4 + 0x4a2) = *(short *)(param_4 + 0x4a2) + 1;
      if (0x13e < uVar4) {
        return 1;
      }
      iVar1 = uVar3 - 3;
      uVar2 = 0x11;
    }
    else {
      uVar4 = *param_3;
      *(short *)(param_4 + 0x4a4) = *(short *)(param_4 + 0x4a4) + 1;
      if (0x13e < uVar4) {
        return 1;
      }
      iVar1 = uVar3 - 0xb;
      uVar2 = 0x12;
    }
    uVar5 = uVar4 + 2;
    *(ushort *)(param_2 + uVar4) = uVar2 | (ushort)(iVar1 << 8);
  }
  *param_3 = uVar5;
  *param_1 = 0;
  return 0;
}

