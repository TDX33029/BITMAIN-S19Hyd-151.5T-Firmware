// FUN_01aa7468 @ 01aa7468 size=648 calls_out=6 calls_in=1
// strings: 

uint FUN_01aa7468(short *param_1,uint param_2,char param_3)

{
  uint uVar1;
  byte *local_3c;
  int local_38;
  short *local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_014faff8(&local_3c,param_1,param_2,0x3a);
  if (local_3c == (byte *)0x0) {
    uVar1 = 9;
  }
  else {
    if ((local_38 != 0) && ((*local_3c & 0xdf) - 0x41 < 0x1a)) {
      do {
        local_38 = local_38 + -1;
        local_3c = local_3c + 1;
        if (local_38 == 0) {
          if ((local_30 < 2) || (*local_34 != 0x2f2f)) {
            FUN_014fb0e8(&local_2c,local_34,local_30,0x3f,0x23);
            if (local_2c == 0) {
              uVar1 = FUN_01aa76f4(local_34,local_30);
              return uVar1;
            }
            uVar1 = FUN_01aa76f4(local_2c,local_28);
          }
          else {
            FUN_014fb0e8(&local_2c,local_34 + 1,local_30 - 2,0x3f,0x23);
            if (local_2c == 0) {
              uVar1 = FUN_01aa6d68(local_34 + 1,local_30 - 2);
              return uVar1;
            }
            uVar1 = FUN_01aa6d68(local_2c,local_28);
          }
          if ((uVar1 & 0xff) == 0xb) {
            uVar1 = FUN_01aa6a48(local_24,local_20,local_1c,param_3 != '\x01');
            return uVar1;
          }
          return uVar1;
        }
      } while ((-1 < (char)*local_3c) && ((""[(char)*local_3c] & 1U) != 0));
    }
    uVar1 = 0;
  }
  if (param_3 == '\x02') {
    if ((param_2 < 2) || (*param_1 != 0x2f2f)) {
      FUN_014fb0e8(&local_2c,param_1,param_2,0x3f,0x23);
      if (local_2c == 0) {
        uVar1 = FUN_01aa6cc4(param_1,param_2);
        return uVar1;
      }
      uVar1 = FUN_01aa6cc4(local_2c,local_28);
    }
    else {
      FUN_014fb0e8(&local_2c,param_1 + 1,param_2 - 2,0x3f,0x23);
      if (local_2c == 0) {
        uVar1 = FUN_01aa6d68(param_1 + 1,param_2 - 2);
        return uVar1;
      }
      uVar1 = FUN_01aa6d68(local_2c,local_28);
    }
    if ((uVar1 & 0xff) == 0xb) {
      uVar1 = FUN_01aa6a48(local_24,local_20,local_1c,1);
    }
  }
  return uVar1;
}

