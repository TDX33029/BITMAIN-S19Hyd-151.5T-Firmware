// FUN_018be0dc @ 018be0dc size=192 calls_out=2 calls_in=1
// strings: 

void FUN_018be0dc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar1 = param_2[7];
  uVar2 = param_2[8];
  uVar9 = param_2[6];
  puVar3 = (undefined4 *)thunk_FUN_01be5118(0x28);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x28);
  }
  *puVar3 = 1;
  puVar3[1] = 1;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  uVar7 = param_3[4];
  uVar8 = param_3[5];
  puVar3[2] = *param_3;
  puVar3[3] = uVar4;
  puVar3[4] = uVar5;
  puVar3[5] = uVar6;
  puVar3[6] = uVar7;
  puVar3[7] = uVar8;
  puVar3[8] = uVar9;
  uVar4 = param_2[1];
  uVar6 = param_2[2];
  uVar9 = param_2[3];
  uVar5 = param_2[4];
  uVar7 = param_2[5];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar6;
  param_1[3] = uVar9;
  param_1[4] = uVar5;
  param_1[5] = uVar7;
  param_1[6] = puVar3;
  param_1[8] = uVar1;
  param_1[7] = &DAT_01d22828;
  param_1[9] = uVar2;
  return;
}

