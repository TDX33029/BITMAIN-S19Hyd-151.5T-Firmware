// FUN_01623bf0 @ 01623bf0 size=64 calls_out=2 calls_in=34
// strings: 

undefined8 FUN_01623bf0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_01623a1c();
  uVar1 = uVar1 & 0xffff;
  if (uVar1 < 4 || param_2 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(4,uVar1,param_2,&DAT_01d060e8);
  }
  return CONCAT44(uVar1 - 4,param_1 + 4);
}

