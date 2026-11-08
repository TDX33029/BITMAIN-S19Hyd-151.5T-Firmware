// FUN_01672b68 @ 01672b68 size=132 calls_out=3 calls_in=1
// strings: 

void FUN_01672b68(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar1 = (undefined4 *)FUN_01671160();
  uVar2 = *puVar1;
  iVar3 = puVar1[1];
  puVar1 = (undefined4 *)FUN_01671044();
  uVar2 = (**(code **)(iVar3 + 0xc))(uVar2);
  FUN_00653054(&uStack_38,puVar1[2],*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1 + 8,uVar2);
  *(undefined1 *)(param_1 + 0xc) = 0;
  *param_1 = &DAT_0056d238;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = uStack_38;
  param_1[5] = uStack_34;
  param_1[6] = local_30;
  param_1[7] = uStack_2c;
  param_1[8] = uStack_28;
  param_1[9] = uStack_24;
  param_1[10] = uStack_20;
  param_1[0xb] = uStack_1c;
  return;
}

