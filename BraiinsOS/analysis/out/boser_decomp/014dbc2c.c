// FUN_014dbc2c @ 014dbc2c size=140 calls_out=1 calls_in=2
// strings: 

void FUN_014dbc2c(undefined1 *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 local_20 [8];
  int local_18;
  int local_14;
  
  if (param_3 == 0 && param_4 == 0) {
    uVar3 = 0;
    param_1[1] = 0;
  }
  else {
    if (param_3 == 1 && param_4 == 0) {
      uVar1 = 1;
    }
    else {
      if (param_3 != 2 || param_4 != 0) {
        uVar3 = 1;
        local_20[0] = 1;
        local_18 = param_3;
        local_14 = param_4;
        uVar2 = FUN_01967740(local_20,&DAT_01cfa0a4,&DAT_01d064b8);
        *(undefined4 *)(param_1 + 4) = uVar2;
        goto LAB_014dbc78;
      }
      uVar1 = 2;
    }
    uVar3 = 0;
    param_1[1] = uVar1;
  }
LAB_014dbc78:
  *param_1 = uVar3;
  return;
}

