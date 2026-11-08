// FUN_0189b730 @ 0189b730 size=204 calls_out=2 calls_in=1
// strings: internal error: entered unreachable code

void FUN_0189b730(undefined4 param_1,code *param_2,code *UNRECOVERED_JUMPTABLE,byte *param_4,
                 int param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0,0,&DAT_01d217ec);
  }
  bVar1 = *param_4;
  (*param_2)(param_1,2);
  uVar3 = param_5 + (uint)(bVar1 >> 7);
  if (0x7f < uVar3) {
    uVar2 = 0x81;
    if (0xff < uVar3) {
      if (0xffff < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d21f4c);
      }
      (*param_2)(param_1,0x82);
      uVar2 = uVar3 >> 8;
    }
    (*param_2)(param_1,uVar2);
  }
  (*param_2)(param_1,uVar3);
  if (0x7fffffff < (uint)(int)(char)bVar1) {
    (*param_2)(param_1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0189b7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_4,param_5);
  return;
}

