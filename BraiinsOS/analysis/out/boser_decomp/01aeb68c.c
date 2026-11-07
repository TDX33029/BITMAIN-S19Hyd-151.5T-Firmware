// FUN_01aeb68c @ 01aeb68c size=268 calls_out=2 calls_in=1
// strings: 

void FUN_01aeb68c(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_40 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_8c = 0;
  uStack_94 = param_2;
  local_90 = param_3;
  FUN_01aedd8c(local_40,&uStack_94,0xffffffff);
  if (local_40[0] == 0) {
    puVar1 = (undefined4 *)((uint)local_40 | 4);
    local_88 = *puVar1;
    uStack_84 = puVar1[1];
    uStack_80 = puVar1[2];
    uStack_7c = puVar1[3];
    local_78 = puVar1[4];
    uStack_74 = puVar1[5];
    uStack_70 = puVar1[6];
    uStack_6c = puVar1[7];
    if (local_8c != local_90) {
      uVar2 = param_4[1];
      uVar3 = param_4[2];
      uVar4 = param_4[3];
      param_1[2] = *param_4;
      param_1[3] = uVar2;
      param_1[4] = uVar3;
      param_1[5] = uVar4;
      uVar2 = param_4[5];
      uVar3 = param_4[6];
      uVar4 = param_4[7];
      param_1[6] = param_4[4];
      param_1[7] = uVar2;
      param_1[8] = uVar3;
      param_1[9] = uVar4;
      *param_1 = 1;
      return;
    }
    param_1[1] = local_88;
    param_1[2] = uStack_84;
    param_1[3] = uStack_80;
    param_1[4] = uStack_7c;
    uVar2 = 0;
    param_1[5] = local_78;
    param_1[6] = uStack_74;
    param_1[7] = uStack_70;
    param_1[8] = uStack_6c;
    local_68 = local_88;
    uStack_64 = uStack_84;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    local_58 = local_78;
    uStack_54 = uStack_74;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
  }
  else {
    puVar1 = (undefined4 *)((uint)&local_68 | 4);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    puVar1[4] = local_28;
    puVar1[5] = uStack_24;
    puVar1[6] = uStack_20;
    puVar1[7] = uStack_1c;
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    param_1[2] = *puVar1;
    param_1[3] = uVar2;
    param_1[4] = uVar3;
    param_1[5] = uVar4;
    uVar2 = puVar1[5];
    uVar3 = puVar1[6];
    uVar4 = puVar1[7];
    param_1[6] = puVar1[4];
    param_1[7] = uVar2;
    param_1[8] = uVar3;
    param_1[9] = uVar4;
    uVar2 = 1;
  }
  *param_1 = uVar2;
  FUN_01aeb5f4(param_4);
  return;
}

