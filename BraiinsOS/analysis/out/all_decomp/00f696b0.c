// FUN_00f696b0 @ 00f696b0 size=284 calls_out=1 calls_in=1
// strings: 

bool FUN_00f696b0(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (int)param_2 >> 0xd;
  uVar2 = (param_2 & 0x1fff) >> 3;
  if (0x2dc < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,0x2dd,&DAT_01880224);
  }
  uVar3 = (uVar2 + (byte)""[uVar2] & 0x3f) >> 1;
  if ((*(int *)(param_1 + 0x10) == 0) || (*(uint *)(param_1 + 0x14) == uVar1)) {
    if ((uVar1 < 0x80000000) || (*(int *)(param_1 + 0x18) != 0)) {
      if ((int)uVar1 < 0) {
        return false;
      }
      if (*(int *)(param_1 + 0x18) == 1 && *(uint *)(param_1 + 0x1c) != uVar1 / 100) {
        return false;
      }
      if ((*(int *)(param_1 + 0x20) == 1) && (*(uint *)(param_1 + 0x24) != uVar1 % 100)) {
        return false;
      }
    }
    else if (*(int *)(param_1 + 0x20) != 0) {
      return false;
    }
    if ((*(int *)(param_1 + 0x48) != 1) ||
       (*(uint *)(param_1 + 0x4c) == uVar2 + (byte)""[uVar2] >> 6)) {
      uVar1 = uVar3;
      if (*(int *)(param_1 + 0x70) != 0) {
        uVar1 = *(uint *)(param_1 + 0x74);
      }
      return uVar1 == uVar3;
    }
  }
  return false;
}

