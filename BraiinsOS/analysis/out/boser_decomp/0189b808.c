// FUN_0189b808 @ 0189b808 size=192 calls_out=2 calls_in=1
// strings: internal error: entered unreachable code

void FUN_0189b808(undefined4 param_1,code *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint local_1c;
  
  local_1c = 0;
  FUN_01899698(param_4,&local_1c,&LAB_0189b984,&LAB_0189b994);
  uVar1 = local_1c;
  (*param_2)(param_1,0x30);
  if (0x7f < uVar1) {
    uVar2 = 0x81;
    if (0xff < uVar1) {
      if (0xffff < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d21f4c);
      }
      (*param_2)(param_1,0x82);
      uVar2 = uVar1 >> 8;
    }
    (*param_2)(param_1,uVar2);
  }
  (*param_2)(param_1,uVar1);
  FUN_01899698(param_4,param_1,param_2,param_3);
  return;
}

