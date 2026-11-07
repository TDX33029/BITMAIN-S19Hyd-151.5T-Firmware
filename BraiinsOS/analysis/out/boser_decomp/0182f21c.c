// FUN_0182f21c @ 0182f21c size=228 calls_out=1 calls_in=3
// strings: 

void FUN_0182f21c(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_lr;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar4 = param_3[2];
  if (*param_2 == 0) {
    FUN_01428c44(&local_1c,uVar4);
    local_30 = *param_3;
    uStack_2c = param_3[1];
    uStack_28 = param_3[2];
    uStack_24 = param_3[3];
    local_38 = local_18;
    uStack_34 = local_14;
    uVar2 = 2;
    unaff_lr = local_1c;
  }
  else {
    if (*param_2 == 1) {
      puVar1 = (uint *)(param_2 + 2);
      unaff_lr = *puVar1;
      uVar3 = param_2[3];
      if (uVar3 == 0 && (uVar4 <= unaff_lr) <= uVar3) {
        *puVar1 = 0;
        param_2[3] = 0;
        local_30 = *param_3;
        uStack_2c = param_3[1];
        uStack_28 = param_3[2];
        uStack_24 = param_3[3];
        uVar2 = 1;
        goto LAB_0182f2c4;
      }
      *puVar1 = unaff_lr - uVar4;
      param_2[3] = uVar3 - (unaff_lr < uVar4);
    }
    local_30 = *param_3;
    uStack_2c = param_3[1];
    uStack_28 = param_3[2];
    uStack_24 = param_3[3];
    uVar2 = 0;
  }
LAB_0182f2c4:
  *param_1 = uVar2;
  param_1[1] = local_30;
  param_1[2] = uStack_2c;
  param_1[3] = uStack_28;
  param_1[4] = uStack_24;
  param_1[5] = unaff_lr;
  param_1[6] = local_38;
  param_1[7] = uStack_34;
  param_1[8] = &DAT_00531047;
  param_1[9] = 2;
  return;
}

