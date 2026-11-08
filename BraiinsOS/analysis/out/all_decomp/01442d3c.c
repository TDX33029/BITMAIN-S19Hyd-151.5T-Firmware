// FUN_01442d3c @ 01442d3c size=300 calls_out=2 calls_in=0
// strings: 

void FUN_01442d3c(undefined4 param_1,int *param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 != 1) {
    uVar5 = param_3[2];
    local_38 = *param_4;
    uStack_34 = param_4[1];
    uStack_30 = param_4[2];
    uStack_2c = param_4[3];
    uStack_28 = param_4[4];
    if (uVar5 == *param_3) {
      FUN_0102ccf4(param_3);
    }
    puVar3 = (undefined4 *)(param_3[1] + uVar5 * 0x24);
    *puVar3 = 0;
    puVar3[1] = param_1;
    puVar3[2] = 0;
    puVar3[3] = param_1;
    puVar3[4] = local_38;
    puVar3[5] = uStack_34;
    puVar3[6] = uStack_30;
    puVar3[7] = uStack_2c;
    puVar3[8] = uStack_28;
    param_3[2] = uVar5 + 1;
    *param_2 = 1;
    param_2[1] = uVar5;
    param_2[2] = uVar5;
    return;
  }
  uVar5 = param_3[2];
  uVar6 = param_2[2];
  local_38 = *param_4;
  uStack_34 = param_4[1];
  uStack_30 = param_4[2];
  uStack_2c = param_4[3];
  uStack_28 = param_4[4];
  if (uVar5 == *param_3) {
    FUN_0102ccf4(param_3);
  }
  uVar1 = param_3[1];
  puVar4 = &local_38;
  puVar3 = (undefined4 *)(uVar1 + uVar5 * 0x24);
  *puVar3 = 1;
  puVar3[1] = uVar6;
  puVar3[2] = 0;
  puVar3[3] = param_1;
  if (uVar6 <= uVar5) {
    puVar4 = (undefined4 *)&DAT_00000001;
  }
  puVar3[4] = local_38;
  puVar3[5] = uStack_34;
  puVar3[6] = uStack_30;
  puVar3[7] = uStack_2c;
  puVar3[8] = uStack_28;
  param_3[2] = uVar5 + 1;
  if (uVar5 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar6,uVar5 + 1,&DAT_018a6304);
  }
  param_2[2] = uVar5;
  iVar2 = uVar1 + uVar6 * 0x24;
  *param_2 = (int)puVar4;
  *(undefined4 **)(iVar2 + 8) = puVar4;
  *(uint *)(iVar2 + 0xc) = uVar5;
  return;
}

