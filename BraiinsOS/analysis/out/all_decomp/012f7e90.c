// FUN_012f7e90 @ 012f7e90 size=408 calls_out=4 calls_in=3
// strings: 

void FUN_012f7e90(int *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
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
      uVar1 = local_28 & 0xff;
      if (local_30 != 4) {
        *(undefined1 *)((int)param_1 + 0xb) = local_28._3_1_;
        *(undefined2 *)((int)param_1 + 9) = local_28._1_2_;
        *(undefined1 *)(param_1 + 2) = (undefined1)local_28;
        *param_1 = local_30;
        param_1[1] = local_2c;
        return;
      }
      if (local_2c == 1) break;
      if (local_2c == 2) {
        if (uVar1 != 0) goto LAB_012f7fa8;
        FUN_0132e394(&local_30,param_3);
        if (local_30 != 4) goto LAB_012f7fc0;
        param_2[2] = 1;
        param_2[3] = local_2c;
      }
      else {
        FUN_01337f28(&local_30,local_2c,uVar1,param_3,param_2 + 4);
        if (local_30 != 4) {
          *param_1 = local_30;
          param_1[1] = local_2c;
          param_1[2] = local_28;
          return;
        }
      }
    }
    if (uVar1 != 0) {
LAB_012f7fa8:
      *(undefined1 *)((int)param_1 + 5) = (undefined1)local_28;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 1;
      return;
    }
    FUN_0132e394(&local_30,param_3);
    if (local_30 != 4) {
LAB_012f7fc0:
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = local_28;
      return;
    }
    *param_2 = 1;
    param_2[1] = local_2c;
  } while( true );
}

