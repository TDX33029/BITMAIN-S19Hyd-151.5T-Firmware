// FUN_0178b820 @ 0178b820 size=300 calls_out=0 calls_in=0
// strings: 

void FUN_0178b820(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  if (*param_2 == 1) {
    if ((char)param_2[9] == '\x02') {
      local_40 = CONCAT31(local_40._1_3_,2);
    }
    else {
      (**(code **)param_2[5])(&local_38,param_2 + 8,param_2[6],param_2[7]);
      local_28 = CONCAT31(local_28._1_3_,(char)param_2[9]);
      local_50 = local_38;
      uStack_4c = uStack_34;
      uStack_48 = uStack_30;
      uStack_44 = uStack_2c;
      local_40 = local_28;
    }
    (**(code **)param_2[1])(&local_38,param_2 + 4,param_2[2],param_2[3]);
    param_1[5] = local_50;
    param_1[6] = uStack_4c;
    param_1[7] = uStack_48;
    param_1[8] = uStack_44;
    param_1[9] = local_40;
    param_1[1] = local_38;
    param_1[2] = uStack_34;
    param_1[3] = uStack_30;
    param_1[4] = uStack_2c;
    uVar1 = 1;
  }
  else {
    if ((char)param_2[9] == '\x02') {
      local_40 = CONCAT31(local_40._1_3_,2);
    }
    else {
      (**(code **)param_2[5])(&local_38,param_2 + 8,param_2[6],param_2[7]);
      local_28 = CONCAT31(local_28._1_3_,(char)param_2[9]);
      local_50 = local_38;
      uStack_4c = uStack_34;
      uStack_48 = uStack_30;
      uStack_44 = uStack_2c;
      local_40 = local_28;
    }
    (**(code **)param_2[1])(&local_38,param_2 + 4,param_2[2],param_2[3]);
    param_1[5] = local_50;
    param_1[6] = uStack_4c;
    param_1[7] = uStack_48;
    param_1[8] = uStack_44;
    param_1[9] = local_40;
    param_1[1] = local_38;
    param_1[2] = uStack_34;
    param_1[3] = uStack_30;
    param_1[4] = uStack_2c;
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}

