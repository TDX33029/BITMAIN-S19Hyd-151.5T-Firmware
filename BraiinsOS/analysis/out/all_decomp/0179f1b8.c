// FUN_0179f1b8 @ 0179f1b8 size=428 calls_out=2 calls_in=2
// strings: 

uint FUN_0179f1b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int *param_6,uint param_7,int param_8,undefined4 param_9,undefined4 param_10,
                 undefined4 param_11)

{
  uint uVar1;
  uint uVar2;
  
  if (param_6 == (int *)0x0 || param_7 < 8) {
    if (param_8 == 2) {
      return 0xffffffe0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x11e8) = 1;
    *(undefined4 *)(param_1 + 0x11ec) = 4;
    *(undefined4 *)(param_1 + 0x404) = 0;
    *(undefined4 *)(param_1 + 0x11f0) = 8;
    *(undefined4 *)(param_1 + 0x11dc) = 0;
    *(undefined4 *)(param_1 + 0x11e0) = 0;
    *(undefined4 *)(param_1 + 0x11e4) = 0;
    if (param_8 != 1) {
      if (*param_6 == -0x13cf5bc9) {
LAB_0179f264:
        if (*(int *)(param_5 + 0x28) == 0) {
          uVar2 = param_6[1];
        }
        else {
          uVar2 = 0;
        }
        uVar1 = FUN_0179ee54(param_1,param_11,param_6,param_7);
        if (uVar1 < 0xffffff89) {
          FUN_01799b18(param_2,0,param_4,param_5,(int)param_6 + uVar1,param_7 - uVar1,param_9,
                       param_10);
          return uVar2;
        }
        return uVar1;
      }
      if (param_8 != 0) {
        if (param_8 == 2) {
          return 0xffffffe0;
        }
        goto LAB_0179f264;
      }
    }
    FUN_01799b18(param_2,param_3,param_4,param_5,param_6,param_7,param_9,param_10);
  }
  return 0;
}

