// FUN_01af38d8 @ 01af38d8 size=140 calls_out=2 calls_in=2
// strings: 

void FUN_01af38d8(undefined4 *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_30 [8];
  
  uVar3 = 0x80000000;
  local_30[0] = 0x80000000;
  if (param_3 != 0) {
    uVar1 = (uint)*param_2;
    if ((uVar1 < 8) && ((param_3 + -1 != 0 || (uVar1 == 0)))) {
      if (param_3 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0xffffffff,0,&DAT_01d303d4);
      }
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = (uint)(param_2 + 1)[param_3 + -2] & ~(-1 << uVar1);
      }
      if (uVar1 == 0 || uVar2 == 0) {
        uVar3 = 0x8000002d;
        param_1[1] = param_2 + 1;
        param_1[2] = param_3 + -1;
      }
    }
  }
  *param_1 = uVar3;
  FUN_01aeb5f4(local_30);
  return;
}

