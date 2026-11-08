// FUN_00ded94c @ 00ded94c size=292 calls_out=3 calls_in=1
// strings: 

void FUN_00ded94c(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar3 = param_2[2];
  iVar1 = param_2[3];
  iVar5 = *param_2;
  iVar6 = param_2[1];
  if (iVar6 == iVar1) {
    iVar4 = iVar5;
  }
  else {
    iVar4 = 0;
    do {
      puVar2 = (undefined4 *)(iVar6 + iVar4);
      param_2[1] = (int)(puVar2 + 0xb);
      local_58 = *puVar2;
      uStack_54 = puVar2[1];
      uStack_50 = puVar2[2];
      local_48 = puVar2[3];
      uStack_44 = puVar2[4];
      uStack_40 = puVar2[5];
      uStack_3c = puVar2[6];
      local_38 = puVar2[7];
      uStack_34 = puVar2[8];
      uStack_30 = puVar2[9];
      uStack_2c = puVar2[10];
      puVar2 = (undefined4 *)(iVar5 + iVar4);
      FUN_00b0de70(&local_88);
      iVar4 = iVar4 + 0x2c;
      *puVar2 = local_88;
      puVar2[1] = uStack_84;
      puVar2[2] = uStack_80;
      puVar2[3] = uStack_7c;
      puVar2[4] = uStack_78;
      puVar2[5] = local_74;
      puVar2[6] = uStack_70;
      puVar2[7] = uStack_6c;
      puVar2[8] = uStack_68;
      puVar2[9] = uStack_64;
      puVar2[10] = uStack_60;
    } while (iVar6 + iVar4 != iVar1);
    iVar6 = iVar6 + iVar4;
    iVar4 = iVar5 + iVar4;
  }
  param_2[1] = 4;
  param_2[2] = 0;
  *param_2 = 4;
  param_2[3] = 4;
  FUN_00dedae4(iVar6,((uint)(iVar1 - iVar6) >> 2) * -0x45d1745d);
  *param_1 = iVar3;
  param_1[1] = iVar5;
  param_1[2] = ((uint)(iVar4 - iVar5) >> 2) * -0x45d1745d;
  FUN_00dedaa4(param_2);
  return;
}

