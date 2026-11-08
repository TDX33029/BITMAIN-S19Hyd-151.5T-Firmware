// FUN_00655d48 @ 00655d48 size=132 calls_out=2 calls_in=0
// strings: 

void FUN_00655d48(undefined4 *param_1,undefined1 *param_2,int param_3,uint param_4,uint param_5,
                 uint param_6)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  if ((param_6 < param_5) || (param_4 < param_6)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(param_5,param_6,param_4,&DAT_01c036c8);
  }
  uVar2 = FUN_00655b94(*param_2,param_2[1],param_2[2],param_3 + param_5,param_6 - param_5);
  uVar1 = 0;
  if ((uVar2 & 1) != 0) {
    uVar1 = 2;
    param_1[1] = (int)(uVar2 >> 0x20) + param_5;
  }
  *param_1 = uVar1;
  return;
}

