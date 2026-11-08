// FUN_01233920 @ 01233920 size=120 calls_out=1 calls_in=3
// strings: 

void FUN_01233920(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 local_18 [8];
  int local_10;
  int local_c;
  
  if (param_3 == 0 && param_4 == 0) {
    *param_1 = 2;
    uVar1 = 0;
  }
  else {
    if (param_3 != 1 || param_4 != 0) {
      local_18[0] = 1;
      local_10 = param_3;
      local_c = param_4;
      FUN_0123bf08(param_1,local_18,&DAT_01cfa36c,&DAT_01d064b8);
      return;
    }
    *param_1 = 2;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}

