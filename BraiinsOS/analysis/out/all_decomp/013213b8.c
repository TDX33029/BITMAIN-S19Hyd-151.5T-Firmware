// FUN_013213b8 @ 013213b8 size=464 calls_out=5 calls_in=2
// strings: 

void FUN_013213b8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int local_30;
  undefined1 local_2c;
  char cStack_2b;
  undefined2 uStack_2a;
  char local_28;
  undefined2 uStack_27;
  undefined1 uStack_25;
  
  if (*(int *)(param_3 + 0x38) != *(int *)(param_3 + 0x3c)) goto LAB_01321438;
LAB_01321414:
  do {
    FUN_0132e9b8(&local_30,param_3);
    if (local_30 != 4) {
      *param_1 = local_30;
      param_1[2] = CONCAT13(uStack_25,CONCAT21(uStack_27,local_28));
      *(char *)((int)param_1 + 7) = (char)((ushort)uStack_2a >> 8);
      *(undefined1 *)(param_1 + 1) = local_2c;
      *(short *)((int)param_1 + 5) = (short)(CONCAT22(uStack_2a,CONCAT11(cStack_2b,local_2c)) >> 8);
      return;
    }
    if (*(int *)(param_3 + 0x3c) == *(int *)(param_3 + 0x38)) {
      *param_1 = 4;
      return;
    }
LAB_01321438:
    do {
      while( true ) {
        FUN_0129a648(&local_30,param_3);
        iVar1 = CONCAT22(uStack_2a,CONCAT11(cStack_2b,local_2c));
        if (local_30 != 4) {
          *(undefined1 *)((int)param_1 + 0xb) = uStack_25;
          *(undefined2 *)((int)param_1 + 9) = uStack_27;
          *(char *)(param_1 + 2) = local_28;
          *param_1 = local_30;
          param_1[1] = iVar1;
          return;
        }
        if (iVar1 != 1) break;
        if (local_28 != '\x02') {
          cStack_2b = local_28;
          local_2c = 1;
          local_30 = 1;
          goto LAB_01321554;
        }
        *(undefined4 *)(param_2 + 8) = 0;
        *(undefined1 *)(param_2 + 0xc) = 1;
        FUN_0132e8a8(&local_30,param_3,param_2);
joined_r0x013214c8:
        if (local_30 != 4) {
LAB_01321554:
          *param_1 = local_30;
          param_1[1] = CONCAT22(uStack_2a,CONCAT11(cStack_2b,local_2c));
          param_1[2] = CONCAT13(uStack_25,CONCAT21(uStack_27,local_28));
          return;
        }
        if (*(int *)(param_3 + 0x38) == *(int *)(param_3 + 0x3c)) goto LAB_01321414;
      }
      if (iVar1 != 2) {
        FUN_01337f28(&local_30,iVar1,local_28,param_3,param_2 + 0x10);
        goto joined_r0x013214c8;
      }
      if (local_28 != '\0') {
        *(char *)((int)param_1 + 5) = local_28;
        *(undefined1 *)(param_1 + 1) = 1;
        *param_1 = 1;
        return;
      }
      FUN_0132d400(&local_30,param_3);
      if (local_30 != 4) {
        param_1[2] = CONCAT13(uStack_25,CONCAT21(uStack_27,local_28));
        *(uint *)((int)param_1 + 5) = CONCAT13(local_28,CONCAT21(uStack_2a,cStack_2b));
        *(undefined1 *)(param_1 + 1) = local_2c;
        *param_1 = local_30;
        return;
      }
      *(undefined1 *)(param_2 + 0x18) = local_2c;
    } while (*(int *)(param_3 + 0x38) != *(int *)(param_3 + 0x3c));
  } while( true );
}

