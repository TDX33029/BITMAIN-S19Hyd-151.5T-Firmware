// FUN_01304eec @ 01304eec size=432 calls_out=5 calls_in=2
// strings: 

void FUN_01304eec(int *param_1,int param_2,int param_3)

{
  int local_30;
  int local_2c;
  char local_28;
  undefined2 uStack_27;
  undefined1 uStack_25;
  
  if (*(int *)(param_3 + 0x38) != *(int *)(param_3 + 0x3c)) goto LAB_01304f68;
LAB_01304f44:
  do {
    FUN_0132e9b8(&local_30,param_3);
    if (local_30 != 4) {
      *param_1 = local_30;
      param_1[2] = CONCAT13(uStack_25,CONCAT21(uStack_27,local_28));
      *(char *)((int)param_1 + 7) = (char)((uint)local_2c >> 0x18);
      *(char *)(param_1 + 1) = (char)local_2c;
      *(short *)((int)param_1 + 5) = (short)((uint)local_2c >> 8);
      return;
    }
    if (*(int *)(param_3 + 0x3c) == *(int *)(param_3 + 0x38)) {
      *param_1 = 4;
      return;
    }
LAB_01304f68:
    do {
      while( true ) {
        FUN_0129a648(&local_30,param_3);
        if (local_30 != 4) {
          *(undefined1 *)((int)param_1 + 0xb) = uStack_25;
          *(undefined2 *)((int)param_1 + 9) = uStack_27;
          *(char *)(param_1 + 2) = local_28;
          *param_1 = local_30;
          param_1[1] = local_2c;
          return;
        }
        if (local_2c != 0x21) break;
        if (local_28 != '\0') {
          *(char *)((int)param_1 + 5) = local_28;
          *(undefined1 *)(param_1 + 1) = 1;
          *param_1 = 1;
          return;
        }
        FUN_0132d400(&local_30,param_3);
        if (local_30 != 4) {
          param_1[2] = CONCAT13(uStack_25,CONCAT21(uStack_27,local_28));
          *(uint *)((int)param_1 + 5) = CONCAT13(local_28,local_2c._1_3_);
          *(undefined1 *)(param_1 + 1) = (undefined1)local_2c;
          *param_1 = local_30;
          return;
        }
        *(undefined1 *)(param_2 + 0x18) = (undefined1)local_2c;
        if (*(int *)(param_3 + 0x38) == *(int *)(param_3 + 0x3c)) goto LAB_01304f44;
      }
      if (local_2c == 999) {
        FUN_01338e78(&local_30,local_28,param_3,param_2);
      }
      else {
        FUN_01337f28(&local_30,local_2c,local_28,param_3,param_2 + 0x10);
      }
      if (local_30 != 4) {
        *param_1 = local_30;
        param_1[1] = local_2c;
        param_1[2] = CONCAT13(uStack_25,CONCAT21(uStack_27,local_28));
        return;
      }
    } while (*(int *)(param_3 + 0x38) != *(int *)(param_3 + 0x3c));
  } while( true );
}

