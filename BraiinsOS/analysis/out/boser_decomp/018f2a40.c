// FUN_018f2a40 @ 018f2a40 size=332 calls_out=3 calls_in=2
// strings: 

uint FUN_018f2a40(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint extraout_r2;
  int iVar2;
  uint uVar3;
  uint local_70;
  int local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar2 = *param_2;
  if (iVar2 == 0) {
    uVar1 = param_2[2];
    uVar3 = uVar1;
  }
  else {
    uVar1 = param_2[3] - param_2[2];
    uVar3 = param_2[2];
  }
  if (uVar1 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    uVar1 = uVar3;
    if (iVar2 != 0) {
      uVar1 = param_2[3] - uVar3;
    }
    local_70 = FUN_01914e24(param_1 + 500,uVar1);
    param_3 = extraout_r2;
    if (iVar2 == 0) goto LAB_018f2ae8;
  }
  else {
    if (iVar2 == 0) {
      local_70 = uVar3;
LAB_018f2ae8:
      local_68 = param_2[1];
      if (local_70 <= uVar3) {
        uVar3 = local_70;
      }
      iVar2 = 0;
      local_60 = param_3;
      goto LAB_018f2afc;
    }
    local_70 = param_2[3] - uVar3;
  }
  local_68 = param_2[1];
  local_60 = uVar3 + local_70;
  if ((uint)param_2[3] < uVar3 + local_70) {
    local_60 = param_2[3];
  }
LAB_018f2afc:
  local_5c = *(undefined4 *)(param_1 + 0x244);
  local_54 = CONCAT11(local_54._1_1_,3);
  local_58 = CONCAT22(local_58._2_2_,4);
  local_6c = iVar2;
  local_64 = uVar3;
  while (FUN_0191e464(&local_38,&local_6c), local_38 == 1) {
    local_4c = local_34;
    uStack_48 = uStack_30;
    uStack_44 = uStack_2c;
    uStack_40 = uStack_28;
    local_3c = local_54;
    local_50 = local_58;
    FUN_018f23e0(param_1,&local_50);
  }
  return local_70;
}

