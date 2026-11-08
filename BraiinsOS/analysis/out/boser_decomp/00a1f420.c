// FUN_00a1f420 @ 00a1f420 size=252 calls_out=4 calls_in=1
// strings: HashChainAutotuningSetter

void FUN_00a1f420(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c;
  undefined4 local_28;
  undefined4 *local_20;
  undefined1 *local_1c;
  int *local_18;
  undefined1 *local_14;
  
  FUN_00b19a54(&local_20);
  puVar1 = local_1c;
  if ((local_18 == (int *)0x19) &&
     (iVar2 = thunk_FUN_01bed842("HashChainAutotuningSetter",local_1c,0x19), iVar2 == 0)) {
    if (local_20 != (undefined4 *)0x80000000) {
      FUN_019bb7e0(local_20,puVar1);
    }
    uVar3 = param_2[5];
    uVar4 = param_2[6];
    param_1[4] = param_2[4];
    param_1[5] = uVar3;
    param_1[6] = uVar4;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
  }
  else {
    if (local_20 != (undefined4 *)0x80000000) {
      FUN_019bb7e0(local_20,local_1c);
    }
    FUN_00b19a54(&local_2c);
    local_20 = param_2 + 4;
    local_14 = &LAB_012b97d8;
    local_1c = &LAB_00632348;
    local_18 = &local_2c;
    FUN_00664898(&local_38,&DAT_005bd155,&local_20);
    if (local_2c != -0x80000000) {
      FUN_019bb7e0(local_2c,local_28);
    }
    param_1[4] = local_38;
    param_1[5] = uStack_34;
    param_1[6] = uStack_30;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    FUN_019bb7e0(param_2[4],param_2[5]);
  }
  return;
}

