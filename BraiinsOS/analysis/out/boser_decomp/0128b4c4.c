// FUN_0128b4c4 @ 0128b4c4 size=276 calls_out=1 calls_in=1
// strings: 

uint FUN_0128b4c4(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_2 & 0x1fff) >> 3;
  if (0x2dc < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar2,0x2dd,&DAT_01d2a928);
  }
  uVar1 = (int)param_2 >> 0xd;
  if ((*(int *)(param_1 + 0x10) != 1) || (*(uint *)(param_1 + 0x14) == uVar1)) {
    if ((uVar1 < 0x80000000) || (*(uint *)(param_1 + 0x18) != 0)) {
      if ((int)uVar1 < 0) {
        return 0;
      }
      if ((*(uint *)(param_1 + 0x18) & (uint)(*(uint *)(param_1 + 0x1c) != uVar1 / 100)) != 0) {
        return 0;
      }
      if ((*(int *)(param_1 + 0x20) == 1) && (*(uint *)(param_1 + 0x24) != uVar1 % 100)) {
        return 0;
      }
    }
    else if (*(int *)(param_1 + 0x20) != 0) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x48) != 1) ||
       (*(uint *)(param_1 + 0x4c) == uVar2 + (byte)""[uVar2] >> 6)) {
      return *(uint *)(param_1 + 0x70) ^ 1 |
             (uint)(*(uint *)(param_1 + 0x74) ==
                   ((param_2 >> 3) + (uint)(byte)""[uVar2] & 0x3f) >> 1);
    }
  }
  return 0;
}

