// FUN_0170a770 @ 0170a770 size=440 calls_out=2 calls_in=2
// strings: 

undefined8
FUN_0170a770(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5,
            int param_6,undefined4 *param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_1 < param_7) {
    if (param_7 < param_1 + 8) goto LAB_0170a8fc;
  }
  else if ((param_1 != param_7) && (param_1 < param_7 + 8)) goto LAB_0170a8fc;
  puVar5 = param_7 + 8;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = param_7[3];
  *param_1 = *param_7;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  uVar2 = param_7[5];
  uVar3 = param_7[6];
  uVar4 = param_7[7];
  param_1[4] = param_7[4];
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  if (param_3 < puVar5) {
    if (puVar5 < param_3 + 8) goto LAB_0170a8fc;
  }
  else if ((param_3 != puVar5) && (param_3 < param_7 + 0x10)) goto LAB_0170a8fc;
  puVar5 = param_7 + 0x10;
  uVar2 = param_7[9];
  uVar3 = param_7[10];
  uVar4 = param_7[0xb];
  *param_3 = param_7[8];
  param_3[1] = uVar2;
  param_3[2] = uVar3;
  param_3[3] = uVar4;
  uVar2 = param_7[0xd];
  uVar3 = param_7[0xe];
  uVar4 = param_7[0xf];
  param_3[4] = param_7[0xc];
  param_3[5] = uVar2;
  param_3[6] = uVar3;
  param_3[7] = uVar4;
  if (param_2 < puVar5) {
    if (puVar5 < param_2 + 0x10) {
LAB_0170a8fc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x170a8fc);
      (*pcVar1)();
    }
  }
  else if ((param_2 != puVar5) && (param_2 < param_7 + 0x20)) goto LAB_0170a8fc;
  do {
    uVar2 = puVar5[1];
    puVar6 = puVar5 + 4;
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    *param_2 = *puVar5;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    param_2 = param_2 + 4;
    puVar5 = puVar6;
  } while (puVar6 != param_7 + 0x20);
  puVar5 = param_7 + 0x20;
  do {
    puVar6 = puVar5 + 0x18;
    FUN_01702bb4(param_5,puVar5);
    param_5 = param_5 + 0x400;
    puVar5 = puVar6;
  } while (puVar6 != param_7 + 0x80);
  puVar5 = param_7 + 0x80;
  do {
    puVar6 = puVar5 + 0x18;
    FUN_01702bb4(param_6,puVar5);
    param_6 = param_6 + 0x400;
    puVar5 = puVar6;
  } while (puVar6 != param_7 + 0xe0);
  puVar5 = param_7 + 0xe0;
  do {
    puVar6 = puVar5 + 0x68;
    FUN_0170298c(param_4,puVar5);
    param_4 = param_4 + 0x400;
    puVar5 = puVar6;
  } while (param_7 + 0x280 != puVar6);
  return 0;
}

