// FUN_00ddb7e8 @ 00ddb7e8 size=264 calls_out=3 calls_in=1
// strings: 

void FUN_00ddb7e8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 local_30;
  undefined4 *local_28;
  int *local_24;
  int *local_20;
  undefined1 *local_1c;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar2 = param_2[3];
  local_50 = param_2[4];
  local_4c = param_2[5];
  uStack_48 = param_2[6];
  FUN_00ddb94c(&local_28);
  if ((local_20 == (int *)0x4) && (*local_24 == 0x796e415f)) {
    if (local_28 != (undefined4 *)0x80000000) {
      FUN_019bb7e0();
    }
    uVar1 = param_2[5];
    uVar2 = param_2[6];
    param_1[4] = param_2[4];
    param_1[5] = uVar1;
    param_1[6] = uVar2;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
  }
  else {
    if (local_28 != (undefined4 *)0x80000000) {
      FUN_019bb7e0(local_28,local_24);
    }
    FUN_00ddb94c(&local_34);
    local_28 = &local_50;
    local_1c = &LAB_012b97d8;
    local_24 = (int *)&LAB_00632348;
    local_20 = &local_34;
    FUN_00664898(&local_40,&DAT_005bd155,&local_28);
    if (local_34 != -0x80000000) {
      FUN_019bb7e0(local_34,local_30);
    }
    param_1[4] = local_40;
    param_1[5] = uStack_3c;
    param_1[6] = uStack_38;
    *param_1 = uVar1;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar2;
    FUN_019bb7e0(local_50,local_4c);
  }
  return;
}

