// FUN_019a581c @ 019a581c size=220 calls_out=4 calls_in=35
// strings: 

void FUN_019a581c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 local_1c0;
  undefined4 *local_1bc;
  undefined4 local_1b4;
  undefined1 auStack_1b0 [388];
  int local_2c;
  undefined4 local_28;
  
  local_1b4 = param_2;
  if (param_4 >> 7 < 3) {
    FUN_01bed4e2(auStack_1b0,param_3,param_4);
    auStack_1b0[param_4] = 0;
    FUN_012fbc58(&local_2c,auStack_1b0,param_4 + 1);
    if (local_2c == 1) {
      local_1c0 = 2;
      local_1bc = &DAT_01d27a70;
    }
    else {
      FUN_01980058(&local_1c0,local_28,param_2);
    }
  }
  else {
    FUN_019a0974(&local_1c0,param_3,param_4,&local_1b4);
  }
  if ((char)local_1c0 == '\x04') {
    param_1[1] = local_1bc;
    *(undefined1 *)param_1 = 4;
    return;
  }
  *param_1 = local_1c0;
  param_1[1] = local_1bc;
  return;
}

