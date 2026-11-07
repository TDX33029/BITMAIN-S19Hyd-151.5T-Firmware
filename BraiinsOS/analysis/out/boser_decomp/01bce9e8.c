// FUN_01bce9e8 @ 01bce9e8 size=556 calls_out=5 calls_in=2
// strings: 

void FUN_01bce9e8(int param_1,uint param_2,uint *param_3)

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
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  FUN_01bce560(param_3,param_1);
  uVar7 = 1;
  while( true ) {
    if (param_2 <= uVar7) break;
    FUN_01bce5a4(param_3);
    FUN_01bce910(param_3);
    uVar13 = param_3[2];
    uVar8 = *param_3;
    uVar14 = param_3[1];
    uVar12 = param_3[3];
    uVar11 = param_3[4];
    uVar1 = FUN_01bce988(uVar8);
    uVar8 = uVar8 ^ uVar1;
    uVar2 = FUN_01bce988(uVar14);
    uVar14 = uVar14 ^ uVar2;
    uVar10 = param_3[5];
    uVar3 = FUN_01bce988(uVar13);
    uVar13 = uVar13 ^ uVar3;
    uVar9 = param_3[6];
    uVar4 = FUN_01bce988(uVar12);
    uVar12 = uVar12 ^ uVar4;
    uVar5 = FUN_01bce988(uVar11,param_3[7]);
    uVar11 = uVar11 ^ uVar5;
    uVar6 = FUN_01bce988(uVar10);
    uVar10 = uVar10 ^ uVar6;
    uVar15 = FUN_01bce988(uVar9);
    uVar9 = uVar9 ^ (uint)uVar15;
    uVar16 = FUN_01bce988((int)((ulonglong)uVar15 >> 0x20));
    uVar17 = FUN_01bce9b8(uVar8,(uint)((ulonglong)uVar16 >> 0x20) ^ (uint)uVar16);
    *param_3 = uVar1 ^ (uint)uVar17 ^ (uint)((ulonglong)uVar17 >> 0x20);
    uVar17 = FUN_01bce9b8(uVar14);
    param_3[1] = uVar2 ^ (uint)uVar17 ^ uVar8 ^ (uint)((ulonglong)uVar17 >> 0x20);
    uVar1 = FUN_01bce9b8(uVar13);
    param_3[2] = uVar3 ^ uVar1 ^ uVar14;
    uVar17 = FUN_01bce9b8(uVar12);
    param_3[3] = uVar4 ^ (uint)uVar17 ^ uVar13 ^ (uint)((ulonglong)uVar17 >> 0x20);
    uVar17 = FUN_01bce9b8(uVar11);
    param_3[4] = (uint)uVar17 ^ uVar5 ^ uVar12 ^ (uint)((ulonglong)uVar17 >> 0x20);
    uVar1 = FUN_01bce9b8(uVar10);
    param_3[5] = uVar6 ^ uVar1 ^ uVar11;
    uVar17 = FUN_01bce9b8(uVar9);
    param_3[6] = (uint)uVar15 ^ (uint)uVar17 ^ uVar10;
    uVar1 = FUN_01bce9b8((int)((ulonglong)uVar17 >> 0x20));
    param_3[7] = (uint)uVar16 ^ uVar1 ^ uVar9;
    FUN_01bce560(param_3,param_1 + uVar7 * 0x20);
    uVar7 = uVar7 + 1;
  }
  FUN_01bce5a4(param_3);
  FUN_01bce910(param_3);
  FUN_01bce560(param_3,param_1 + param_2 * 0x20);
  return;
}

