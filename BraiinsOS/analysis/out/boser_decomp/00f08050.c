// FUN_00f08050 @ 00f08050 size=128 calls_out=3 calls_in=1
// strings: 

void FUN_00f08050(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [44];
  byte local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_30;
  
  uVar6 = param_2[0x22];
  uVar7 = param_2[0x23];
  FUN_01bed4e2(auStack_b0,param_2,0x88);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  uVar4 = param_2[9];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  param_1[9] = uVar4;
  uVar1 = param_2[0xb];
  uVar2 = param_2[0xc];
  uVar3 = param_2[0xd];
  uVar4 = param_2[0xe];
  uVar5 = param_2[0xf];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar4;
  param_1[0xf] = uVar5;
  param_1[0x10] = uVar6;
  param_1[0x11] = uVar7;
  param_1[0x12] = local_30;
  if ((9 < local_44) && (local_3c != 0)) {
    thunk_FUN_01be4678(local_40);
  }
  FUN_01a8c248(auStack_70);
  return;
}

