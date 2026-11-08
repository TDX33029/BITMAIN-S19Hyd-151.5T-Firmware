// FUN_00644e90 @ 00644e90 size=208 calls_out=4 calls_in=3
// strings: 

void FUN_00644e90(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,uint param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 local_140 [2];
  undefined4 local_138;
  undefined4 local_12c;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_e4;
  int local_d0 [28];
  undefined1 auStack_60 [72];
  
  if (*(int *)(param_2 + 0x10) == -0x80000000) {
    puVar2 = &DAT_80000005;
    if (param_4 == 0x18) {
      iVar1 = thunk_FUN_01bed842(param_3,&DAT_0052cf49,0x18);
      puVar2 = &DAT_80000005;
      if (iVar1 == 0) {
        puVar2 = &DAT_80000004;
      }
    }
  }
  else {
    puVar2 = &DAT_80000005;
    if ((param_5 & 1) != 0) {
      local_120 = param_6;
      local_e4 = 3;
      local_118 = 0x80000003;
      local_12c = 0x80000003;
      local_138 = 0x80000003;
      local_11c = 0;
      local_140[0] = 1;
      FUN_01a60d04(auStack_60,param_3,param_4);
      FUN_01a4b734(local_d0,param_2,auStack_60,local_140);
      if (local_d0[0] != 4) {
        FUN_005f6530(local_d0);
      }
    }
  }
  *param_1 = puVar2;
  return;
}

