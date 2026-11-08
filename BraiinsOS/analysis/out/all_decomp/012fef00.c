// FUN_012fef00 @ 012fef00 size=816 calls_out=8 calls_in=2
// strings: 

void FUN_012fef00(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int local_30;
  uint local_2c;
  byte local_28;
  undefined2 uStack_27;
  undefined1 uStack_25;
  
LAB_012fef20:
  if (*(int *)(param_3 + 0x38) == *(int *)(param_3 + 0x3c)) {
    FUN_0132e9b8(&local_30,param_3);
    if (local_30 != 4) {
      *param_1 = local_30;
      param_1[2] = CONCAT13(uStack_25,CONCAT21(uStack_27,local_28));
      *(char *)((int)param_1 + 7) = (char)(local_2c >> 0x18);
      *(char *)(param_1 + 1) = (char)local_2c;
      *(short *)((int)param_1 + 5) = (short)(local_2c >> 8);
      return;
    }
    if (*(int *)(param_3 + 0x3c) == *(int *)(param_3 + 0x38)) {
      *param_1 = 4;
      return;
    }
  }
  FUN_0129a648(&local_30,param_3);
  uVar4 = (uint)local_28;
  if (local_30 != 4) {
    *(undefined1 *)((int)param_1 + 0xb) = uStack_25;
    *(undefined2 *)((int)param_1 + 9) = uStack_27;
    *(byte *)(param_1 + 2) = local_28;
    *param_1 = local_30;
    param_1[1] = local_2c;
    return;
  }
  puVar5 = &switchD_012fef84::switchdataD_012fef88;
  switch(local_2c) {
  case 1:
    if (uVar4 != 0) {
LAB_012ff204:
      uVar3 = 1;
      local_2c = 0;
      local_30 = 1;
LAB_012ff224:
      *param_1 = local_30;
      param_1[2] = (int)puVar5;
      param_1[1] = local_2c | (uVar4 & 0xff) << 8 | uVar3;
      return;
    }
    FUN_0132e394(&local_30,param_3);
    if (local_30 != 4) {
LAB_012ff214:
      puVar5 = (uint *)CONCAT13(uStack_25,CONCAT21(uStack_27,local_28));
      uVar3 = local_2c & 0xff;
      uVar4 = local_2c >> 8;
      local_2c = local_2c & 0xffff0000;
      goto LAB_012ff224;
    }
    if (2 < local_2c) {
      uVar2 = 1;
      goto LAB_012ff128;
    }
    *(char *)(param_2 + 0x1c) = (char)local_2c;
    goto LAB_012fef20;
  case 2:
    if (uVar4 != 0) {
LAB_012ff1cc:
      *(byte *)((int)param_1 + 5) = local_28;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 1;
      return;
    }
    FUN_0132d400(&local_30,param_3);
    if (local_30 == 4) {
      *(undefined1 *)(param_2 + 0x18) = (undefined1)local_2c;
      goto LAB_012fef20;
    }
    break;
  case 3:
    if (uVar4 != 0) goto LAB_012ff1cc;
    FUN_0132d400(&local_30,param_3);
    if (local_30 == 4) {
      *(undefined1 *)(param_2 + 0x1a) = (undefined1)local_2c;
      goto LAB_012fef20;
    }
    break;
  case 4:
  case 7:
  case 8:
  case 9:
switchD_012fef84_caseD_4:
    FUN_01337f28(&local_30,local_2c,uVar4,param_3,param_2 + 0x10);
    goto joined_r0x012ff008;
  case 5:
    if (uVar4 != 0) goto LAB_012ff1cc;
    FUN_0132d400(&local_30,param_3);
    if (local_30 == 4) {
      *(undefined1 *)(param_2 + 0x19) = (undefined1)local_2c;
      goto LAB_012fef20;
    }
    break;
  case 6:
    if (uVar4 != 0) goto LAB_012ff204;
    FUN_0132e394(&local_30,param_3);
    if (local_30 != 4) goto LAB_012ff214;
    if (local_2c < 3) {
      *(char *)(param_2 + 0x1d) = (char)local_2c;
    }
    else {
      uVar2 = 6;
LAB_012ff128:
      uVar4 = local_2c;
      iVar1 = FUN_013353bc(param_2 + 0x10,uVar2);
      iVar6 = *(int *)(iVar1 + 0x20);
      if (iVar6 == *(int *)(iVar1 + 0x18)) {
        FUN_0132f4a4(iVar1 + 0x18);
      }
      puVar5 = (uint *)(*(int *)(iVar1 + 0x1c) + iVar6 * 8);
      *puVar5 = uVar4;
      puVar5[1] = (int)uVar4 >> 0x1f;
      *(int *)(iVar1 + 0x20) = iVar6 + 1;
    }
    goto LAB_012fef20;
  case 10:
    if (uVar4 != 0) goto LAB_012ff1cc;
    FUN_0132d400(&local_30,param_3);
    if (local_30 == 4) {
      *(undefined1 *)(param_2 + 0x1b) = (undefined1)local_2c;
      goto LAB_012fef20;
    }
    break;
  default:
    if (local_2c != 999) goto switchD_012fef84_caseD_4;
    FUN_01338e78(&local_30,uVar4,param_3,param_2);
joined_r0x012ff008:
    if (local_30 != 4) {
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = CONCAT13(uStack_25,CONCAT21(uStack_27,local_28));
      return;
    }
    goto LAB_012fef20;
  }
  param_1[2] = CONCAT13(uStack_25,CONCAT21(uStack_27,local_28));
  *(uint *)((int)param_1 + 5) = CONCAT13(local_28,local_2c._1_3_);
  *(undefined1 *)(param_1 + 1) = (undefined1)local_2c;
  *param_1 = local_30;
  return;
}

