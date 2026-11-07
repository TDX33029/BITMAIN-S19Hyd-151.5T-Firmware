// FUN_01ab42ec @ 01ab42ec size=108 calls_out=3 calls_in=1
// strings: 

void FUN_01ab42ec(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  int iVar5;
  undefined4 *puVar6;
  
  if (param_1[1] != 0) {
    thunk_FUN_01be4678(*param_1);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  iVar2 = param_1[2];
  iVar3 = param_1[3];
  iVar5 = iVar3 + 1;
  puVar6 = (undefined4 *)(iVar2 + 4);
  while (iVar5 = iVar5 + -1, iVar5 != 0) {
    puVar1 = puVar6 + -1;
    uVar4 = *puVar6;
    puVar6 = puVar6 + 5;
    FUN_01ab438c(*puVar1,uVar4,param_3,param_4,unaff_r4);
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
  }
  if (iVar3 == 0) {
    return;
  }
  thunk_FUN_01be4678(iVar2);
  return;
}

