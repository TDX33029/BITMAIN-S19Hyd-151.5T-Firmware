// FUN_01a61914 @ 01a61914 size=192 calls_out=4 calls_in=0
// strings: 

void FUN_01a61914(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_158 [88];
  int local_100 [28];
  int local_90 [2];
  undefined1 auStack_88 [84];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_01a4adf0(local_100);
  if (local_100[0] != 4) {
    FUN_01a56294(local_90,local_100);
    if (local_90[0] == 4) {
      FUN_01bed4e2(auStack_158,auStack_88,0x54);
      uVar1 = 4;
      if (local_34 != 8) {
        FUN_01bed4e2((uint)local_90 | 4,auStack_158,0x54);
        FUN_01bed4e2(param_1 + 1,local_90,0x58);
        param_1[0x17] = local_34;
        param_1[0x18] = local_30;
        param_1[0x19] = uStack_2c;
        param_1[0x1a] = uStack_28;
        param_1[0x1b] = uStack_24;
        uVar1 = 1;
      }
      goto LAB_01a619c8;
    }
    FUN_01a60b94(local_90);
  }
  uVar1 = 4;
LAB_01a619c8:
  *param_1 = uVar1;
  return;
}

