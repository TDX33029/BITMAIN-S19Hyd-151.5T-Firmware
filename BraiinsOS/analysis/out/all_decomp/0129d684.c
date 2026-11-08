// FUN_0129d684 @ 0129d684 size=516 calls_out=5 calls_in=2
// strings: 

void FUN_0129d684(int *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int iStack_34;
  undefined8 local_30;
  
LAB_0129d6d4:
  do {
    while( true ) {
      if (*(int *)(param_3 + 0x38) == *(int *)(param_3 + 0x3c)) {
        FUN_0132e9b8(&local_40,param_3);
        if (local_40 != 4) {
          param_1[2] = local_38;
          *param_1 = local_40;
          *(char *)(param_1 + 1) = (char)local_3c;
          *(char *)((int)param_1 + 7) = (char)((uint)local_3c >> 0x18);
          *(short *)((int)param_1 + 5) = (short)((uint)local_3c >> 8);
          return;
        }
        if (*(int *)(param_3 + 0x3c) == *(int *)(param_3 + 0x38)) {
          *param_1 = 4;
          return;
        }
      }
      FUN_0129a648(&local_40,param_3);
      uVar1 = local_38 & 0xff;
      if (local_40 != 4) {
        *(undefined1 *)((int)param_1 + 0xb) = local_38._3_1_;
        *(undefined2 *)((int)param_1 + 9) = local_38._1_2_;
        *(undefined1 *)(param_1 + 2) = (undefined1)local_38;
        *param_1 = local_40;
        param_1[1] = local_3c;
        return;
      }
      if (local_3c != 1) break;
      if (uVar1 != 0) {
LAB_0129d7d4:
        *(undefined1 *)((int)param_1 + 5) = (undefined1)local_38;
        *(undefined1 *)(param_1 + 1) = 1;
        *param_1 = 1;
        return;
      }
      FUN_0132e710(&local_40,param_3);
      if (local_40 != 0) {
        param_1[1] = local_38;
        param_1[2] = iStack_34;
        *param_1 = local_3c;
        return;
      }
      param_2[2] = local_38;
      param_2[3] = iStack_34;
      *param_2 = 1;
      param_2[1] = 0;
    }
    if (local_3c == 2) {
      if (uVar1 != 1) goto LAB_0129d7d4;
      FUN_0132e008(&local_40,param_3,&local_30,8);
      if (local_40 != 4) goto LAB_0129d858;
      param_2[4] = 1;
      param_2[5] = 0;
      *(undefined8 *)(param_2 + 6) = local_30;
      goto LAB_0129d6d4;
    }
    FUN_01337f28(&local_40,local_3c,uVar1,param_3,param_2 + 8);
    if (local_40 != 4) {
LAB_0129d858:
      param_1[1] = local_3c;
      *param_1 = local_40;
      param_1[2] = local_38;
      return;
    }
  } while( true );
}

