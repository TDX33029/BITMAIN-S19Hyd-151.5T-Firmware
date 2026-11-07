// FUN_012400d0 @ 012400d0 size=56 calls_out=0 calls_in=1
// strings: 

void FUN_012400d0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 auStack_48 [8];
  int iStack_40;
  int iStack_3c;
  undefined *puStack_34;
  undefined *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined **ppuStack_24;
  undefined1 *puStack_20;
  undefined4 auStack_1c [3];
  
  if (param_3 == 0 && param_4 == 0) {
    *param_1 = 2;
    uVar1 = 0;
  }
  else {
    if (param_3 != 1 || param_4 != 0) {
      puStack_2c = auStack_48;
      auStack_48[0] = 1;
      ppuStack_24 = &puStack_34;
      auStack_1c[0] = 0;
      puStack_30 = &DAT_01d064b8;
      puStack_34 = &DAT_01cfa4b4;
      puStack_20 = &LAB_0196b2a4;
      uStack_28 = 0x1963220;
      iStack_40 = param_3;
      iStack_3c = param_4;
      FUN_01a41b24(param_1,&DAT_0058eb0d,&puStack_2c,auStack_1c);
      return;
    }
    *param_1 = 2;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}

