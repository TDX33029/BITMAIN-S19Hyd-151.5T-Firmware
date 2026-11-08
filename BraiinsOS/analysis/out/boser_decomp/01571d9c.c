// FUN_01571d9c @ 01571d9c size=156 calls_out=1 calls_in=4
// strings: 

void FUN_01571d9c(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4,
                 undefined4 *param_5,int *param_6,undefined4 param_7)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar6 = *(undefined4 *)(param_2 + 0x48);
  uVar7 = *(undefined4 *)(param_2 + 0x4c);
  do {
    iVar3 = *param_6;
    bVar2 = (bool)hasExclusiveAccess(param_6);
  } while (!bVar2);
  *param_6 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1571e34);
    (*pcVar1)();
  }
  FUN_015263b8(param_1 + 0x17,param_2 + 0x5c);
  param_1[0x13] = uVar7;
  param_1[0x12] = uVar6;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  param_1[0x14] = *param_3;
  param_1[0x15] = uVar6;
  param_1[0x16] = uVar7;
  uVar6 = param_5[1];
  uVar7 = param_5[2];
  uVar4 = param_5[3];
  *param_1 = *param_5;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[3] = uVar4;
  uVar6 = param_5[5];
  uVar7 = param_5[6];
  uVar4 = param_5[7];
  uVar5 = param_5[8];
  param_1[4] = param_5[4];
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar4;
  param_1[8] = uVar5;
  uVar6 = param_5[10];
  uVar7 = param_5[0xb];
  uVar4 = param_5[0xc];
  uVar5 = param_5[0xd];
  param_1[9] = param_5[9];
  param_1[10] = uVar6;
  param_1[0xb] = uVar7;
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar5;
  *(undefined1 *)(param_1 + 0x22) = param_4;
  param_1[0x11] = param_7;
  param_1[0x10] = param_6;
  param_1[0xf] = param_7;
  param_1[0xe] = param_6;
  return;
}

