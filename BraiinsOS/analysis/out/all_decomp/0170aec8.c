// FUN_0170aec8 @ 0170aec8 size=544 calls_out=1 calls_in=2
// strings: 

undefined8
FUN_0170aec8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5,
            int param_6,undefined4 *param_7)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  
  if (param_1 < param_7) {
    if (param_7 < param_1 + 8) goto LAB_0170b0bc;
  }
  else if ((param_1 != param_7) && (param_1 < param_7 + 8)) goto LAB_0170b0bc;
  puVar13 = param_7 + 8;
  uVar5 = param_7[1];
  uVar9 = param_7[2];
  uVar10 = param_7[3];
  *param_1 = *param_7;
  param_1[1] = uVar5;
  param_1[2] = uVar9;
  param_1[3] = uVar10;
  uVar5 = param_7[5];
  uVar9 = param_7[6];
  uVar10 = param_7[7];
  param_1[4] = param_7[4];
  param_1[5] = uVar5;
  param_1[6] = uVar9;
  param_1[7] = uVar10;
  if (param_3 < puVar13) {
    if (puVar13 < param_3 + 8) goto LAB_0170b0bc;
  }
  else if ((param_3 != puVar13) && (param_3 < param_7 + 0x10)) goto LAB_0170b0bc;
  puVar13 = param_7 + 0x10;
  uVar5 = param_7[9];
  uVar9 = param_7[10];
  uVar10 = param_7[0xb];
  *param_3 = param_7[8];
  param_3[1] = uVar5;
  param_3[2] = uVar9;
  param_3[3] = uVar10;
  uVar5 = param_7[0xd];
  uVar9 = param_7[0xe];
  uVar10 = param_7[0xf];
  param_3[4] = param_7[0xc];
  param_3[5] = uVar5;
  param_3[6] = uVar9;
  param_3[7] = uVar10;
  if (param_2 < puVar13) {
    if (puVar13 < param_2 + 0x10) {
LAB_0170b0bc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x170b0bc);
      (*pcVar1)();
    }
  }
  else if ((param_2 != puVar13) && (param_2 < param_7 + 0x20)) goto LAB_0170b0bc;
  do {
    uVar5 = puVar13[1];
    puVar11 = puVar13 + 4;
    uVar9 = puVar13[2];
    uVar10 = puVar13[3];
    *param_2 = *puVar13;
    param_2[1] = uVar5;
    param_2[2] = uVar9;
    param_2[3] = uVar10;
    puVar13 = puVar11;
    param_2 = param_2 + 4;
  } while (puVar11 != param_7 + 0x20);
  pbVar14 = (byte *)((int)param_7 + 0x7f);
  pbVar4 = (byte *)((int)param_7 + 0x2ff);
  piVar12 = (int *)(param_5 + 0x404);
  do {
    pbVar6 = pbVar14;
    piVar7 = piVar12 + -0x100;
    do {
      piVar8 = piVar7;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar6;
      piVar8[-1] = bVar2 & 0xf;
      bVar3 = *pbVar6;
      piVar8[-1] = 4 - (bVar2 & 0xf);
      *piVar8 = 4 - (uint)(bVar3 >> 4);
      piVar7 = piVar8 + 2;
    } while (piVar8 + 2 != piVar12);
    pbVar14 = pbVar14 + 0x80;
    piVar12 = piVar8 + 0x102;
  } while (pbVar14 != pbVar4);
  piVar12 = (int *)(param_6 + 0x404);
  do {
    piVar7 = piVar12 + -0x100;
    pbVar14 = pbVar4;
    do {
      pbVar14 = pbVar14 + 1;
      bVar2 = *pbVar14;
      piVar7[-1] = bVar2 & 0xf;
      bVar3 = *pbVar14;
      piVar7[-1] = 4 - (bVar2 & 0xf);
      piVar8 = piVar7 + 2;
      *piVar7 = 4 - (uint)(bVar3 >> 4);
      piVar7 = piVar8;
    } while (piVar12 != piVar8);
    pbVar4 = pbVar4 + 0x80;
    piVar12 = piVar12 + 0x100;
  } while ((byte *)((int)param_7 + 0x5ff) != pbVar4);
  puVar13 = param_7 + 0x180;
  do {
    puVar11 = puVar13 + 0x68;
    FUN_0170298c(param_4,puVar13);
    param_4 = param_4 + 0x400;
    puVar13 = puVar11;
  } while (puVar11 != param_7 + 0x3f0);
  return 0;
}

