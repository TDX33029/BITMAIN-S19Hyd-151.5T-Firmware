// FUN_01b0cab8 @ 01b0cab8 size=148 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01b0cab8(uint *param_1)

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
  
  uVar10 = param_1[5];
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar8 = param_1[3];
  uVar6 = param_1[7];
  uVar7 = param_1[4];
  uVar9 = param_1[6];
  uVar5 = uVar1 ^ uVar8;
  uVar4 = uVar2 ^ uVar7;
  *param_1 = ~(uVar3 ^ uVar10 ^ uVar6);
  param_1[1] = uVar9 ^ uVar5;
  param_1[2] = ~(uVar6 ^ uVar4);
  param_1[3] = uVar1 ^ uVar3 ^ uVar10;
  param_1[4] = uVar2 ^ uVar8 ^ uVar9;
  param_1[5] = uVar3 ^ uVar7 ^ uVar6;
  param_1[6] = uVar10 ^ uVar5;
  param_1[7] = uVar9 ^ uVar4;
  return 0;
}

