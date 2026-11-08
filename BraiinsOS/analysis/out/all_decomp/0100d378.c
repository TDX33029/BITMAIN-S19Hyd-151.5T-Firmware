// FUN_0100d378 @ 0100d378 size=236 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_0100d378(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_3,param_2,&DAT_018821b4);
  }
  uVar1 = (uint)*(byte *)(param_1 + param_3);
  if (-1 < (char)*(byte *)(param_1 + param_3)) {
    return CONCAT44(1,uVar1);
  }
  uVar2 = param_3 + 1;
  if (param_2 <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,param_2,&DAT_018821c4);
  }
  if (uVar1 < 0xe0) {
    return CONCAT44(2,*(byte *)(param_1 + uVar2) & 0x3f | (uVar1 & 0x1f) << 6);
  }
  uVar3 = param_3 + 2;
  if (param_2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar3,param_2,&DAT_018821d4);
  }
  uVar2 = *(byte *)(param_1 + uVar3) & 0x3f | (*(byte *)(param_1 + uVar2) & 0x3f) << 6;
  if (uVar1 < 0xf0) {
    return CONCAT44(3,uVar2 | (uVar1 & 0x1f) << 0xc);
  }
  param_3 = param_3 + 3;
  if (param_2 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_3,param_2,&DAT_018821e4);
  }
  return CONCAT44(4,*(byte *)(param_1 + param_3) & 0x3f | uVar2 << 6 | (uVar1 & 7) << 0x12);
}

