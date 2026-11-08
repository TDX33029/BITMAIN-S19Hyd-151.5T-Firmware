// FUN_01b8b1dc @ 01b8b1dc size=296 calls_out=3 calls_in=2
// strings: 

uint FUN_01b8b1dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int *param_6,uint param_7,int param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11)

{
  uint uVar1;
  undefined4 extraout_r1;
  uint uVar2;
  
  if ((param_6 == (int *)0x0 || 6 < param_7) && (param_6 != (int *)0x0 && param_7 != 7)) {
    FUN_01b88480(param_1,param_3);
    if (param_8 != 1) {
      if (*param_6 == -0x13cf5bc9) {
LAB_01b8b29c:
        if (*(int *)(param_5 + 0x28) == 0) {
          uVar2 = param_6[1];
        }
        else {
          uVar2 = 0;
        }
        uVar1 = FUN_01b8aef4(param_1,param_11,param_6,param_7);
        if (uVar1 < 0xffffff89) {
          FUN_01b875ec(param_2,0,param_4,param_5,(int)param_6 + uVar1,param_7 - uVar1,param_9,
                       param_10);
          return uVar2;
        }
        return uVar1;
      }
      if (param_8 != 0) {
        if (param_8 == 2) {
          return 0xffffffe0;
        }
        goto LAB_01b8b29c;
      }
    }
    FUN_01b875ec(param_2,extraout_r1,param_4,param_5,param_6,param_7,param_9,param_10);
  }
  else if (param_8 == 2) {
    return 0xffffffe0;
  }
  return 0;
}

