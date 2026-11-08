// FUN_01aad2e8 @ 01aad2e8 size=396 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_01aad2e8(int *param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_70 [2];
  int local_68;
  undefined *local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar7 = 0;
  if (DAT_01d50f88 <= 5U - *param_2) {
    if (param_1[1] != 0) {
      iVar4 = *param_1;
      iVar8 = param_2[1];
      uVar6 = param_2[2];
      puVar5 = (undefined4 *)(iVar4 + 4);
      for (iVar3 = param_1[1] * 0xc; iVar3 != 0; iVar3 = iVar3 + -0xc) {
        if ((*(uint *)(iVar4 + 8) <= uVar6) &&
           (iVar1 = thunk_FUN_01bed842(*puVar5,iVar8), iVar1 == 0)) {
          return 0;
        }
        iVar4 = iVar4 + 0xc;
        puVar5 = puVar5 + 3;
      }
    }
    iVar3 = DAT_01d51af4;
    DataMemoryBarrier(0xb);
    iVar4 = *param_2;
    FUN_01aad7c0(&local_30,iVar4);
    local_54 = &DAT_01d2e8d4;
    local_64 = &DAT_005314e5;
    local_68 = 5 - iVar4;
    local_34 = 1;
    local_50 = 5;
    puVar5 = (undefined4 *)&UNK_01d2ee94;
    if (iVar3 == 2) {
      puVar5 = &DAT_01d50f7c;
    }
    local_5c = param_2[1];
    local_58 = param_2[2];
    local_60 = 10;
    local_3c = 0;
    local_44 = 0;
    local_70[0] = 0;
    local_48 = local_2c;
    local_4c = local_30;
    puVar2 = DAT_01d50f84;
    if ((iVar3 != 2) || (DAT_01d50f7c == 0)) {
      iVar4 = puVar5[1];
      if (iVar3 != 2) {
        puVar2 = &DAT_01d2e6fc;
      }
    }
    else {
      iVar4 = puVar5[1] + (*(int *)(DAT_01d50f84 + 8) - 1U & 0xfffffff8) + 8;
    }
    uVar7 = (**(code **)(puVar2 + 0x14))(iVar4,local_70);
  }
  return uVar7;
}

