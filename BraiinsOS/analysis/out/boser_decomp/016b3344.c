// FUN_016b3344 @ 016b3344 size=160 calls_out=2 calls_in=2
// strings: 

void FUN_016b3344(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if ((uVar1 <= param_2) ||
     (uVar2 = ~(-1 << (*(uint *)(param_1 + 0x15c) & 0x1f)), (param_2 & uVar2) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_004ce828,0x29,&DAT_01d087bc);
  }
  if ((uVar1 <= param_4) || ((param_4 & uVar2) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_004ce83c,0x25,&DAT_01d087cc);
  }
  if ((param_3 & 1) == 0) {
    param_3 = (uint)*(byte *)(param_1 + (param_3 >> 8 & 0xff) + 0x5c);
  }
  else {
    param_3 = param_3 >> 0x10;
  }
  param_3 = param_3 + param_2;
  if (uVar1 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_3,uVar1,&DAT_01d087dc);
  }
  *(uint *)(*(int *)(param_1 + 0x54) + param_3 * 4) = param_4;
  return;
}

