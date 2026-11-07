// FUN_0141de40 @ 0141de40 size=208 calls_out=4 calls_in=3
// strings: 

void FUN_0141de40(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 auStack_20 [8];
  
  FUN_0137ede4(&local_4c,param_3,param_4,param_2);
  if ((local_4c & 1) == 0) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    if (*(uint *)(param_2 + 0x28) <= local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(local_44,*(uint *)(param_2 + 0x28),&DAT_01d2f42c);
    }
    piVar1 = (int *)(*(int *)(param_2 + 0x24) + local_44 * 0x34);
    if (*piVar1 != 0) {
      FUN_0141ce48(param_2,piVar1[1]);
    }
    FUN_0141d9b4(&local_4c,param_2,local_48,local_44);
    *param_1 = local_40;
    param_1[1] = uStack_3c;
    param_1[2] = uStack_38;
    param_1[3] = uStack_34;
    param_1[4] = uStack_30;
    if (local_2c != 0) {
      (**(code **)(local_2c + 0x10))(auStack_20,local_28,local_24);
    }
  }
  return;
}

