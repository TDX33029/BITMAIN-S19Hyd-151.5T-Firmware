// FUN_00644cc0 @ 00644cc0 size=248 calls_out=5 calls_in=2
// strings: boost | normal

void FUN_00644cc0(int *param_1,int param_2,byte param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  int local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int local_154;
  undefined4 local_140 [2];
  undefined1 auStack_138 [104];
  int local_d0 [28];
  undefined1 auStack_60 [72];
  
  if (*(int *)(param_2 + 0x10) != -0x80000000) {
    if (param_3 == 2) {
      local_154 = 8;
      local_1a8 = -0x7ffffffe;
    }
    else {
      if ((param_3 & 1) == 0) {
        uVar2 = 6;
        pcVar1 = "normal";
      }
      else {
        uVar2 = 5;
        pcVar1 = "boost";
      }
      FUN_01a5bfb4(&local_1a8,pcVar1,uVar2);
    }
    if (local_154 == 8) {
      if (param_3 != 2 || local_1a8 != -0x7ffffffe) {
        *param_1 = local_1a8;
        param_1[1] = iStack_1a4;
        param_1[2] = iStack_1a0;
        return;
      }
    }
    else {
      FUN_01bed4e2(auStack_138,&local_1a8,0x68);
      local_140[0] = 1;
      FUN_01a60d04(auStack_60,&DAT_00570768,8);
      FUN_01a4b734(local_d0,param_2,auStack_60,local_140);
      if (local_d0[0] != 4) {
        FUN_005f6530(local_d0);
      }
    }
  }
  *param_1 = (int)&DAT_80000005;
  return;
}

