// FUN_018c5744 @ 018c5744 size=132 calls_out=4 calls_in=0
// strings: 

void FUN_018c5744(undefined4 *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*param_4 == -0x7ffffffd) {
    FUN_018dff10(*param_3 + 0x30,param_4 + 1);
    *(undefined1 *)param_1 = 0x14;
    param_1[1] = param_2;
    param_1[2] = &DAT_01d22a78;
  }
  else {
    FUN_018c4990(&local_28,param_4,&DAT_00523488,1);
    *param_1 = local_28;
    param_1[1] = uStack_24;
    param_1[2] = uStack_20;
    param_1[3] = uStack_1c;
    FUN_018c4ac4(param_4);
    thunk_FUN_01be4678(param_2);
  }
  return;
}

