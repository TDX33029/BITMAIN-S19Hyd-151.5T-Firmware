// FUN_016062ac @ 016062ac size=208 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_016062ac(int param_1,int param_2,uint *param_3,int param_4)

{
  ushort uVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  byte local_13;
  byte local_12;
  byte local_11;
  
  uVar1 = *(ushort *)(param_1 + 4);
  uVar4 = (uint)uVar1;
  if (uVar4 != 0) {
    if (uVar4 < 3) {
      local_13 = *(byte *)(param_1 + 6);
      psVar2 = (short *)(param_4 + 0x480 + (uint)local_13 * 2);
      *psVar2 = *psVar2 + uVar1;
      uVar3 = *param_3;
      if ((CARRY4(uVar3,uVar4)) || (0x140 < uVar3 + uVar4)) {
        return 1;
      }
      local_12 = local_13;
      local_11 = local_13;
      FUN_01bed4e2(param_2 + uVar3,&local_13);
      *param_3 = uVar3 + uVar4;
    }
    else {
      uVar4 = *param_3;
      *(short *)(param_4 + 0x4a0) = *(short *)(param_4 + 0x4a0) + 1;
      if (0x13e < uVar4) {
        return 1;
      }
      *param_3 = uVar4 + 2;
      *(ushort *)(param_2 + uVar4) = (uVar1 - 3) * 0x100 | 0x10;
    }
    *(undefined2 *)(param_1 + 4) = 0;
  }
  return 0;
}

