// FUN_007ac760 @ 007ac760 size=296 calls_out=3 calls_in=1
// strings: 

void FUN_007ac760(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int unaff_r6;
  int iVar2;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  
  if (*(char *)(param_2 + 0xab) == '\0') {
    iVar2 = *(int *)(param_2 + 0x44);
    local_2c = *(undefined4 *)(param_2 + 0x40);
    if (iVar2 == 0) {
      unaff_r6 = *(int *)(param_2 + 0x4c);
    }
    if (iVar2 == 0 && unaff_r6 == 0) {
      local_28 = *(undefined4 *)(param_2 + 0x48);
      local_30 = *(undefined4 *)(param_2 + 0x98);
      local_34 = 0x8074b50;
      FUN_007b01f0(&local_20,param_3,&local_34,0x10);
      if (((char)local_20 != '\x04') && ((local_20 & 0xff) != 4)) {
        *param_1 = 0x80000001;
        param_1[1] = local_20;
        param_1[2] = local_1c;
        return;
      }
      uVar1 = 0x80000007;
    }
    else {
      if (param_4 != 0) {
        local_34 = *(undefined4 *)(param_2 + 0x98);
        local_24 = *(undefined4 *)(param_2 + 0x4c);
        local_28 = *(undefined4 *)(param_2 + 0x48);
        local_30 = local_2c;
        local_2c = iVar2;
        goto LAB_007ac7e0;
      }
      FUN_01af9864(param_1 + 1,&DAT_003e14aa,0x45);
      uVar1 = 0x80000001;
    }
    *param_1 = uVar1;
  }
  else {
    local_28 = *(undefined4 *)(param_2 + 0x48);
    local_24 = *(undefined4 *)(param_2 + 0x4c);
    local_34 = *(undefined4 *)(param_2 + 0x98);
    local_30 = *(undefined4 *)(param_2 + 0x40);
    local_2c = *(int *)(param_2 + 0x44);
LAB_007ac7e0:
    FUN_007af284(param_1,&local_34);
  }
  return;
}

