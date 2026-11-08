// FUN_01b29750 @ 01b29750 size=480 calls_out=6 calls_in=1
// strings: 

void FUN_01b29750(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  FUN_01b0c708(param_3,param_1 + param_2 * 0x20);
  FUN_01b0cbc4(param_3);
  FUN_01b0cab8(param_3);
  FUN_01b0c74c(param_3);
  FUN_01b0cab8(param_3);
  while (param_2 = param_2 + -1, param_2 != 0) {
    FUN_01b0c708(param_3,param_1 + param_2 * 0x20);
    uVar8 = *param_3;
    uVar7 = param_3[1];
    uVar5 = param_3[7];
    uVar11 = param_3[3];
    uVar13 = FUN_01b0cc6c(uVar8,param_3[2]);
    uVar10 = param_3[4];
    uVar14 = FUN_01b0cc6c(uVar7);
    uVar6 = param_3[5];
    uVar15 = FUN_01b0cc6c((int)((ulonglong)uVar14 >> 0x20));
    uVar1 = FUN_01b0cc6c(uVar11);
    uVar9 = param_3[6];
    uVar2 = FUN_01b0cc6c(uVar10);
    uVar3 = FUN_01b0cc6c(uVar6);
    uVar4 = FUN_01b0cc6c(uVar9);
    uVar16 = FUN_01b0cc6c(uVar5,uVar9 ^ uVar4);
    uVar4 = (uint)((ulonglong)uVar16 >> 0x20);
    uVar12 = uVar5 ^ (uint)uVar16;
    *param_3 = uVar8 ^ uVar4;
    param_3[2] = (uint)uVar13 ^ uVar8 ^ (uint)((ulonglong)uVar13 >> 0x20) ^ uVar12;
    param_3[1] = uVar7 ^ uVar4 ^ uVar12;
    param_3[3] = uVar4 ^ (uint)uVar14 ^ uVar7 ^ uVar11;
    param_3[4] = (uint)uVar15 ^ (uint)((ulonglong)uVar15 >> 0x20) ^ uVar10 ^ uVar4 ^ uVar12;
    param_3[5] = uVar1 ^ uVar11 ^ uVar6 ^ uVar12;
    param_3[6] = uVar2 ^ uVar10 ^ uVar9;
    param_3[7] = uVar6 ^ uVar5 ^ uVar3;
    FUN_01b0cc9c(param_3);
    FUN_01b0cbc4(param_3);
    FUN_01b0cab8(param_3);
    FUN_01b0c74c(param_3);
    FUN_01b0cab8(param_3);
  }
  FUN_01b0c708(param_3,param_1);
  return;
}

