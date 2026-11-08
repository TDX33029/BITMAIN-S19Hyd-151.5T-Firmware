// FUN_01605814 @ 01605814 size=156 calls_out=2 calls_in=1
// strings: assertion failed: bits <= ((1u32 << len) - 1u32)

void FUN_01605814(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 >> (param_3 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: bits <= ((1u32 << len) - 1u32)",0x30,&DAT_01d05af0);
  }
  param_3 = param_1[4] + param_3;
  uVar4 = param_1[3] | param_2 << (param_1[4] & 0x1fU);
  param_1[3] = uVar4;
  if (7 < param_3) {
    uVar1 = param_1[1];
    uVar3 = param_1[2];
    iVar2 = *param_1;
    uVar5 = uVar1;
    if (uVar1 < uVar3) {
      uVar5 = uVar3;
    }
    do {
      if (uVar5 == uVar3) {
        param_1[4] = param_3;
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar5,uVar1,&DAT_01d05b00);
      }
      *(char *)(iVar2 + uVar3) = (char)uVar4;
      param_3 = param_3 - 8;
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 >> 8;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
    } while (7 < param_3);
  }
  param_1[4] = param_3;
  return;
}

