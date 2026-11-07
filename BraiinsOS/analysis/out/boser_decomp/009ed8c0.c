// FUN_009ed8c0 @ 009ed8c0 size=180 calls_out=2 calls_in=49
// strings: 

void FUN_009ed8c0(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined1 *local_18;
  undefined1 **local_14;
  
  local_18 = (undefined1 *)&local_28;
  if (*param_2 == 0) {
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    uVar4 = param_3[4];
    *param_1 = *param_3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_1[4] = uVar4;
    uVar1 = param_3[6];
    uVar2 = param_3[7];
    uVar3 = param_3[8];
    uVar4 = param_3[9];
    param_1[5] = param_3[5];
    param_1[6] = uVar1;
    param_1[7] = uVar2;
    param_1[8] = uVar3;
    param_1[9] = uVar4;
    uVar1 = param_3[0xb];
    uVar2 = param_3[0xc];
    uVar3 = param_3[0xd];
    uVar4 = param_3[0xe];
    param_1[10] = param_3[10];
    param_1[0xb] = uVar1;
    param_1[0xc] = uVar2;
    param_1[0xd] = uVar3;
    param_1[0xe] = uVar4;
  }
  else {
    local_20 = 0;
    local_28 = 0;
    uStack_24 = 4;
    local_14 = &local_18;
    FUN_00b68674(param_2 + 1,&local_14);
    param_1[10] = local_28;
    param_1[0xb] = uStack_24;
    param_1[0xc] = local_20;
    uVar1 = param_3[5];
    uVar2 = param_3[6];
    param_1[4] = param_3[4];
    param_1[5] = uVar1;
    param_1[6] = uVar2;
    uVar1 = param_3[0xe];
    param_1[0xd] = param_3[0xd];
    param_1[0xe] = uVar1;
    uVar1 = param_3[8];
    uVar2 = param_3[9];
    param_1[7] = param_3[7];
    param_1[8] = uVar1;
    param_1[9] = uVar2;
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *param_1 = *param_3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    FUN_00b68790(param_3 + 10);
  }
  return;
}

