// FUN_01298e08 @ 01298e08 size=136 calls_out=3 calls_in=3
// strings: 

void FUN_01298e08(uint *param_1,uint param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  uVar8 = param_1[2];
  if (uVar8 < param_2) {
    FUN_00666488(param_2,uVar8,&DAT_01ce26c4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1298e8c);
    (*pcVar1)();
  }
  if (uVar8 == *param_1) {
    FUN_01969b6c(param_1);
  }
  puVar5 = (undefined4 *)(param_1[1] + param_2 * 0x18);
  if (param_2 < uVar8) {
    FUN_01bed864(puVar5 + 6,puVar5,(uVar8 - param_2) * 0x18);
  }
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar6 = param_3[4];
  uVar7 = param_3[5];
  *puVar5 = *param_3;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  puVar5[4] = uVar6;
  puVar5[5] = uVar7;
  param_1[2] = uVar8 + 1;
  return;
}

