// FUN_009d2870 @ 009d2870 size=136 calls_out=1 calls_in=2
// strings: 

void FUN_009d2870(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  
  if (param_1[3] <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_0056c0e8,0x20,&DAT_01d20e1c);
  }
  if (param_1[3] <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_0056c748,0x20,&DAT_01d20e2c);
  }
  param_3 = param_1[2] + param_3;
  param_2 = param_1[2] + param_2;
  uVar7 = *param_1;
  uVar1 = param_3 - uVar7;
  if (param_3 < uVar7) {
    uVar1 = param_3;
  }
  puVar4 = (undefined4 *)(param_1[1] + uVar1 * 8);
  uVar1 = param_2 - uVar7;
  if (param_2 < uVar7) {
    uVar1 = param_2;
  }
  puVar5 = (undefined4 *)(param_1[1] + uVar1 * 8);
  uVar3 = *puVar5;
  uVar2 = puVar4[1];
  uVar6 = puVar5[1];
  *puVar5 = *puVar4;
  puVar5[1] = uVar2;
  *puVar4 = uVar3;
  puVar4[1] = uVar6;
  return;
}

