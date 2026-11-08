// FUN_019a3070 @ 019a3070 size=272 calls_out=5 calls_in=12
// strings: 

void FUN_019a3070(int *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int local_1bc;
  int local_1b8;
  undefined4 *local_1b4;
  undefined1 auStack_1b0 [388];
  int local_2c;
  undefined4 local_28;
  
  if (param_3 >> 7 < 3) {
    FUN_01bed4e2(auStack_1b0,param_2,param_3);
    auStack_1b0[param_3] = 0;
    FUN_012fbc58(&local_2c,auStack_1b0,param_3 + 1);
    if (local_2c == 1) {
      local_1b8 = 2;
      local_1b4 = &DAT_01d27a70;
      local_1bc = -0x7fffffff;
    }
    else {
      FUN_019a31b0(&local_1bc,local_28);
    }
  }
  else {
    FUN_019a3308(&local_1bc,param_2,param_3);
  }
  puVar1 = local_1b4;
  if (local_1bc != -0x7fffffff) {
    *param_1 = local_1bc;
    param_1[1] = local_1b8;
    param_1[2] = (int)local_1b4;
    return;
  }
  if ((char)local_1b8 == '\x03') {
    uVar3 = *local_1b4;
    puVar4 = (undefined4 *)local_1b4[1];
    pcVar2 = (code *)*puVar4;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar3);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_01be4678(uVar3);
    }
    thunk_FUN_01be4678(puVar1);
  }
  *param_1 = -0x80000000;
  return;
}

