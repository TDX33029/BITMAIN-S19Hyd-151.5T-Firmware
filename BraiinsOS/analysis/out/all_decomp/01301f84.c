// FUN_01301f84 @ 01301f84 size=604 calls_out=8 calls_in=2
// strings: 

void FUN_01301f84(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int extraout_r3;
  int iVar5;
  int local_30;
  uint local_2c;
  byte local_28;
  undefined2 uStack_27;
  undefined1 uStack_25;
  
  while( true ) {
    while( true ) {
      while( true ) {
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
        if (local_2c != 0x21) break;
        if (uVar4 != 0) {
          *(byte *)((int)param_1 + 5) = local_28;
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
      }
      if (local_2c == 0x22) break;
      if (local_2c == 999) {
        FUN_01338e78(&local_30,uVar4,param_3,param_2);
      }
      else {
        FUN_01337f28(&local_30,local_2c,uVar4,param_3,param_2 + 0x10);
      }
      if (local_30 != 4) {
        *param_1 = local_30;
        param_1[1] = local_2c;
        param_1[2] = CONCAT13(uStack_25,CONCAT21(uStack_27,local_28));
        return;
      }
    }
    if (uVar4 != 0) break;
    FUN_0132e394(&local_30,param_3);
    uVar4 = local_2c;
    if (local_30 != 4) {
      iVar1 = CONCAT13(uStack_25,CONCAT21(uStack_27,local_28));
      uVar3 = local_2c & 0xff;
      uVar4 = local_2c >> 8;
      local_2c = local_2c & 0xffff0000;
      goto LAB_013021c8;
    }
    if (local_2c < 3) {
      *(char *)(param_2 + 0x19) = (char)local_2c;
    }
    else {
      iVar1 = FUN_013353bc(param_2 + 0x10,0x22);
      iVar5 = *(int *)(iVar1 + 0x20);
      if (iVar5 == *(int *)(iVar1 + 0x18)) {
        FUN_0132f4a4(iVar1 + 0x18);
      }
      puVar2 = (uint *)(*(int *)(iVar1 + 0x1c) + iVar5 * 8);
      *puVar2 = uVar4;
      puVar2[1] = (int)uVar4 >> 0x1f;
      *(int *)(iVar1 + 0x20) = iVar5 + 1;
    }
  }
  uVar3 = 1;
  local_2c = 0;
  local_30 = 1;
  iVar1 = extraout_r3;
LAB_013021c8:
  *param_1 = local_30;
  param_1[1] = local_2c | (uVar4 & 0xff) << 8 | uVar3;
  param_1[2] = iVar1;
  return;
}

