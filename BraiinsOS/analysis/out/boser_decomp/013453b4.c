// FUN_013453b4 @ 013453b4 size=236 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_013453b4(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_3,param_2,&DAT_01ce6a9c);
  }
  uVar1 = (uint)*(byte *)(param_1 + param_3);
  if (-1 < (char)*(byte *)(param_1 + param_3)) {
    return CONCAT44(1,uVar1);
  }
  uVar2 = param_3 + 1;
  if (param_2 <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar2,param_2,&DAT_01ce6aac);
  }
  if (uVar1 < 0xe0) {
    return CONCAT44(2,*(byte *)(param_1 + uVar2) & 0x3f | (uVar1 & 0x1f) << 6);
  }
  uVar3 = param_3 + 2;
  if (param_2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar3,param_2,&DAT_01ce6abc);
  }
  uVar2 = *(byte *)(param_1 + uVar3) & 0x3f | (*(byte *)(param_1 + uVar2) & 0x3f) << 6;
  if (uVar1 < 0xf0) {
    return CONCAT44(3,uVar2 | (uVar1 & 0x1f) << 0xc);
  }
  param_3 = param_3 + 3;
  if (param_2 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_3,param_2,&DAT_01ce6acc);
  }
  return CONCAT44(4,*(byte *)(param_1 + param_3) & 0x3f | uVar2 << 6 | (uVar1 & 7) << 0x12);
}

