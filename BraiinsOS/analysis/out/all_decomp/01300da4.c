// FUN_01300da4 @ 01300da4 size=296 calls_out=4 calls_in=3
// strings: 

void FUN_01300da4(int *param_1,int param_2,int param_3)

{
  int local_30;
  int local_2c;
  undefined4 local_28;
  
  do {
    while( true ) {
      if (*(int *)(param_3 + 0x38) == *(int *)(param_3 + 0x3c)) {
        FUN_0132e9b8(&local_30,param_3);
        if (local_30 != 4) {
          *param_1 = local_30;
          param_1[2] = local_28;
          *(char *)((int)param_1 + 7) = (char)((uint)local_2c >> 0x18);
          *(char *)(param_1 + 1) = (char)local_2c;
          *(short *)((int)param_1 + 5) = (short)((uint)local_2c >> 8);
          return;
        }
        if (*(int *)(param_3 + 0x3c) == *(int *)(param_3 + 0x38)) {
          *param_1 = 4;
          return;
        }
      }
      FUN_0129a648(&local_30,param_3);
      if (local_30 != 4) {
        *(undefined1 *)((int)param_1 + 0xb) = local_28._3_1_;
        *(undefined2 *)((int)param_1 + 9) = local_28._1_2_;
        *(undefined1 *)(param_1 + 2) = (undefined1)local_28;
        *param_1 = local_30;
        param_1[1] = local_2c;
        return;
      }
      if (local_2c == 999) break;
      FUN_01337f28(&local_30,local_2c,local_28 & 0xff,param_3,param_2 + 0x10);
      if (local_30 != 4) goto LAB_01300e5c;
    }
    FUN_01338e78(&local_30,local_28 & 0xff,param_3,param_2);
  } while (local_30 == 4);
LAB_01300e5c:
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

