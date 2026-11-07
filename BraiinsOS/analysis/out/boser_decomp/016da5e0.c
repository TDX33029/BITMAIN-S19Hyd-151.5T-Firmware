// FUN_016da5e0 @ 016da5e0 size=192 calls_out=2 calls_in=1
// strings: 

void FUN_016da5e0(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_3c [7];
  
  puVar2 = param_2 + 1;
  uVar4 = *param_2 + 0x7ffffffe;
  if (uVar4 == 0) {
    uVar4 = param_2[2];
    uVar1 = param_2[3];
    uVar3 = param_2[4];
    param_1[1] = *puVar2;
    param_1[2] = uVar4;
    param_1[3] = uVar1;
    param_1[4] = uVar3;
    uVar4 = param_2[6];
    uVar1 = param_2[7];
    uVar3 = param_2[8];
    param_1[5] = param_2[5];
    param_1[6] = uVar4;
    param_1[7] = uVar1;
    param_1[8] = uVar3;
    *param_1 = 0x22;
  }
  else {
    uVar1 = uVar4;
    if (*param_2 < 0x80000002) {
      uVar1 = 4;
    }
    if (2 < uVar1 - 1) {
      if (uVar1 == 0) {
        puVar2 = param_2 + 2;
      }
      else {
        puVar2 = param_2 + 7;
      }
    }
    local_3c[0] = 3;
    FUN_016d4540(&local_80,param_3,param_4,puVar2,local_3c);
    *param_1 = local_80;
    param_1[1] = uStack_7c;
    param_1[2] = uStack_78;
    param_1[3] = uStack_74;
    param_1[4] = uStack_70;
    param_1[5] = local_6c;
    param_1[6] = uStack_68;
    param_1[7] = uStack_64;
    param_1[8] = uStack_60;
    param_1[9] = uStack_5c;
    param_1[10] = local_58;
    param_1[0xb] = uStack_54;
    param_1[0xc] = uStack_50;
    param_1[0xd] = uStack_4c;
    param_1[0xe] = uStack_48;
    param_1[0xf] = uStack_44;
    if (3 < uVar4) {
      FUN_016d8154(param_2);
      return;
    }
  }
  return;
}

