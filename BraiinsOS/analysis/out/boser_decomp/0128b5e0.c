// FUN_0128b5e0 @ 0128b5e0 size=284 calls_out=1 calls_in=1
// strings: 

bool FUN_0128b5e0(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (param_2 & 0x1fff) >> 4;
  uVar2 = FUN_0128e728((int)param_2 >> 0xd,uVar4,param_2 & 0xf);
  uVar1 = (int)uVar2 >> 10;
  if ((*(int *)(param_1 + 0x28) != 1) || (*(uint *)(param_1 + 0x2c) == uVar1)) {
    if ((uVar1 < 0x80000000) || (*(uint *)(param_1 + 0x30) != 0)) {
      if ((int)uVar1 < 0) {
        return false;
      }
      if ((*(uint *)(param_1 + 0x30) & (uint)(*(uint *)(param_1 + 0x34) != uVar1 / 100)) != 0) {
        return false;
      }
      if ((*(int *)(param_1 + 0x38) == 1) && (*(uint *)(param_1 + 0x3c) != uVar1 % 100)) {
        return false;
      }
    }
    else if (*(int *)(param_1 + 0x38) != 0) {
      return false;
    }
    if ((*(int *)(param_1 + 0x60) != 1) || (*(uint *)(param_1 + 100) == (uVar2 & 0x3ff) >> 4)) {
      iVar3 = uVar4 + (param_2 & 7);
      return *(byte *)(param_1 + 0xa8) == 7 ||
             (uint)*(byte *)(param_1 + 0xa8) ==
             (iVar3 + ((uint)((short)iVar3 * 0x2493) >> 0x10) * -7 & 0xffff);
    }
  }
  return false;
}

