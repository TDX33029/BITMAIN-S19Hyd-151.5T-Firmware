// FUN_018feb1c @ 018feb1c size=124 calls_out=3 calls_in=1
// strings: 

void FUN_018feb1c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,code *param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar3 = (*param_4)(param_3);
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  uVar1 = (undefined4)uVar3;
  FUN_018fe59c(&local_58,uVar1,*(undefined4 *)(iVar2 + 0xc),param_5);
  FUN_018fe73c(&local_30,uVar1,*(undefined4 *)(iVar2 + 0xc));
  *param_1 = local_58;
  param_1[1] = uStack_54;
  param_1[2] = uStack_50;
  param_1[3] = uStack_4c;
  param_1[4] = local_48;
  param_1[5] = uStack_44;
  param_1[6] = uStack_40;
  param_1[7] = uStack_3c;
  param_1[8] = uStack_38;
  param_1[9] = local_30;
  param_1[10] = uStack_2c;
  param_1[0xb] = uStack_28;
  FUN_01443048(uVar1,iVar2);
  return;
}

