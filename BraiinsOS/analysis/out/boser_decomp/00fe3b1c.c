// FUN_00fe3b1c @ 00fe3b1c size=276 calls_out=3 calls_in=0
// strings: 

void FUN_00fe3b1c(uint *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint local_30 [2];
  undefined8 local_28;
  undefined1 uStack_19;
  
  puVar2 = (uint *)(param_2 + 2);
  if (*param_2 == 1) {
    uVar3 = *puVar2;
    uVar1 = param_2[3];
    *param_1 = 0;
    param_1[2] = uVar3;
    param_1[3] = uVar1;
  }
  else {
    if (*param_2 != 2) {
      local_28 = *(undefined8 *)puVar2;
      local_30[0] = CONCAT31(local_30[0]._1_3_,3);
      uVar3 = FUN_01967538(local_30,&uStack_19,&DAT_01c2375c);
      local_30[0] = uVar3;
      FUN_0196bf0c(param_4,param_3);
      *param_1 = 1;
      param_1[1] = uVar3;
      return;
    }
    uVar3 = param_2[3];
    local_28 = *(undefined8 *)puVar2;
    if ((int)uVar3 < 0) {
      local_30[0] = CONCAT31(local_30[0]._1_3_,2);
      uVar1 = FUN_01967740(local_30,&uStack_19,&DAT_01c2375c);
      local_30[0] = uVar1;
      FUN_0196bf0c(param_4,param_3);
      param_1[1] = uVar1;
    }
    else {
      param_1[2] = *puVar2;
      param_1[3] = uVar3;
    }
    *param_1 = (uint)((int)uVar3 < 0);
  }
  return;
}

