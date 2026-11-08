// FUN_0131e7d4 @ 0131e7d4 size=472 calls_out=6 calls_in=2
// strings: 

void FUN_0131e7d4(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  do {
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
    switch(local_2c) {
    case 1:
      iVar2 = param_2;
      goto LAB_0131e8f8;
    case 2:
      iVar2 = param_2 + 0xc;
LAB_0131e8f8:
      FUN_01338310(&local_30,uVar1,param_3,iVar2);
      break;
    case 3:
      if (uVar1 != 2) {
LAB_0131e9a0:
        local_2c = CONCAT31(CONCAT21(local_2c._2_2_,(undefined1)local_28),1);
        local_30 = 1;
        goto LAB_0131e9b0;
      }
      *(undefined4 *)(param_2 + 0x20) = 0;
      *(undefined1 *)(param_2 + 0x24) = 1;
      FUN_0132e8a8(&local_30,param_3,param_2 + 0x18);
      break;
    case 4:
      if (uVar1 != 2) goto LAB_0131e9a0;
      *(undefined4 *)(param_2 + 0x30) = 0;
      *(undefined1 *)(param_2 + 0x34) = 1;
      FUN_0132e8a8(&local_30,param_3,param_2 + 0x28);
      break;
    default:
      FUN_01337f28(&local_30,local_2c,uVar1,param_3,param_2 + 0x48);
      break;
    case 6:
      FUN_013388b0(&local_30,uVar1,param_3,param_2 + 0x38);
    }
  } while (local_30 == 4);
LAB_0131e9b0:
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

