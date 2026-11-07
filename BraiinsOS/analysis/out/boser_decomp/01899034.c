// FUN_01899034 @ 01899034 size=72 calls_out=2 calls_in=1
// strings: 

void FUN_01899034(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (0xc < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar1,0xc,&DAT_01d21b9c);
  }
  FUN_01bd5160(param_2,param_2,param_3,param_1 + 0x10,uVar1);
  return;
}

