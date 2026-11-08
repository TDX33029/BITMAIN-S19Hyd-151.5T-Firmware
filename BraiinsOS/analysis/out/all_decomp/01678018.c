// FUN_01678018 @ 01678018 size=188 calls_out=4 calls_in=0
// strings: 

void FUN_01678018(undefined4 *param_1)

{
  undefined1 auStack_150 [88];
  int local_f8 [28];
  int local_88 [2];
  undefined1 auStack_80 [84];
  int local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_01682b90(local_f8);
  if (local_f8[0] != 4) {
    FUN_01670f7c(local_88,local_f8);
    if (local_88[0] == 4) {
      FUN_016dd1aa(auStack_150,auStack_80,0x54);
      if (local_2c != 8) {
        param_1[0x18] = local_28;
        param_1[0x19] = uStack_24;
        param_1[0x1a] = uStack_20;
        param_1[0x1b] = uStack_1c;
        FUN_016dd1aa((uint)local_88 | 4,auStack_150,0x54);
        *param_1 = 1;
        FUN_016dd1aa(param_1 + 1,local_88,0x58);
        param_1[0x17] = local_2c;
        return;
      }
    }
    else {
      FUN_01677a20(local_88);
    }
  }
  *param_1 = 4;
  return;
}

