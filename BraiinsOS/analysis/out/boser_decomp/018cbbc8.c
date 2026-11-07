// FUN_018cbbc8 @ 018cbbc8 size=192 calls_out=3 calls_in=2
// strings: 

void FUN_018cbbc8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  
  FUN_0193a93c(&local_30);
  uVar3 = local_28;
  FUN_018e1c64(&local_30);
  FUN_018a79f4(&local_30,0,0x30,&DAT_01d23290);
  uVar4 = local_28;
  uVar2 = local_2c;
  uVar1 = local_30;
  FUN_0193a93c(&local_40,param_4,param_5);
  if (param_6 == 0) {
    local_30 = 0x80000000;
  }
  else {
    FUN_0193a93c(&local_30,param_6,param_7);
  }
  iVar5 = uVar4 - uVar3;
  *param_1 = uVar1;
  if (uVar4 < uVar3) {
    iVar5 = 0;
  }
  param_1[1] = uVar2;
  param_1[9] = iVar5;
  param_1[2] = uVar4;
  param_1[3] = local_40;
  param_1[4] = uStack_3c;
  param_1[5] = uStack_38;
  param_1[6] = local_30;
  param_1[7] = local_2c;
  param_1[8] = local_28;
  return;
}

