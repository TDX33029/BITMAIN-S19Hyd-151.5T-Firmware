// FUN_00782638 @ 00782638 size=256 calls_out=3 calls_in=1
// strings: 

void FUN_00782638(undefined4 *param_1,int param_2)

{
  int iVar1;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 **local_38;
  undefined1 *local_34;
  undefined4 uStack_30;
  undefined4 **local_28;
  undefined1 *local_24;
  int *local_20;
  undefined1 *local_1c;
  
  if (*(int *)(param_2 + 0x1c) != 0) {
    iVar1 = FUN_007632f4(param_2 + 0xc);
    local_64 = *(int *)(iVar1 + -0x18);
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
    if (local_64 != -0x80000000) {
      local_60 = *(undefined4 *)(iVar1 + -0x14);
      local_5c = *(undefined4 *)(iVar1 + -0x10);
      local_38 = (undefined4 **)&local_58;
      local_58 = *(undefined4 *)(iVar1 + -0xc);
      local_54 = *(undefined4 *)(iVar1 + -8);
      uStack_50 = *(undefined4 *)(iVar1 + -4);
      local_34 = &LAB_00632348;
      FUN_00664898(&local_28,&DAT_005b3d9f,&local_38);
      local_38 = local_28;
      local_34 = local_24;
      uStack_30 = local_20;
      local_20 = &local_64;
      local_1c = &LAB_00632348;
      local_24 = &LAB_00632348;
      local_28 = &local_38;
      FUN_00664898(&local_48,&DAT_003e0e46,&local_28);
      FUN_019bb7e0(local_38,local_34);
      *param_1 = local_48;
      param_1[1] = uStack_44;
      param_1[2] = uStack_40;
      FUN_019bb7e0(local_58,local_54);
      FUN_019bb7e0(local_64,local_60);
      return;
    }
  }
  *param_1 = 0x80000000;
  return;
}

