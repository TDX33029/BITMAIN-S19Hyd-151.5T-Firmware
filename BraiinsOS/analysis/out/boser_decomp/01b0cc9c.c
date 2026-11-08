// FUN_01b0cc9c @ 01b0cc9c size=436 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_01b0cc9c(uint *param_1)

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
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  
  uVar9 = *param_1;
  uVar16 = param_1[1];
  uVar15 = param_1[2];
  uVar14 = param_1[3];
  uVar13 = param_1[4];
  uVar12 = param_1[5];
  uVar11 = param_1[6];
  uVar10 = param_1[7];
  uVar1 = FUN_01b0cc3c(uVar9,param_1);
  uVar9 = uVar9 ^ uVar1;
  uVar2 = FUN_01b0cc3c(uVar16);
  uVar16 = uVar16 ^ uVar2;
  uVar3 = FUN_01b0cc3c(uVar15);
  uVar15 = uVar15 ^ uVar3;
  uVar4 = FUN_01b0cc3c(uVar14);
  uVar14 = uVar14 ^ uVar4;
  uVar5 = FUN_01b0cc3c(uVar13);
  uVar13 = uVar13 ^ uVar5;
  uVar6 = FUN_01b0cc3c(uVar12);
  uVar12 = uVar12 ^ uVar6;
  uVar7 = FUN_01b0cc3c(uVar11);
  uVar11 = uVar11 ^ uVar7;
  uVar8 = FUN_01b0cc3c(uVar10);
  uVar10 = uVar10 ^ uVar8;
  uVar17 = FUN_01b0cc6c(uVar9);
  *(uint *)((ulonglong)uVar17 >> 0x20) = (uint)uVar17 ^ uVar1 ^ uVar10;
  uVar17 = FUN_01b0cc6c(uVar16);
  *(uint *)((int)((ulonglong)uVar17 >> 0x20) + 4) = (uint)uVar17 ^ uVar2 ^ uVar9 ^ uVar10;
  uVar17 = FUN_01b0cc6c(uVar15);
  *(uint *)((int)((ulonglong)uVar17 >> 0x20) + 8) = (uint)uVar17 ^ uVar3 ^ uVar16;
  uVar17 = FUN_01b0cc6c(uVar14);
  *(uint *)((int)((ulonglong)uVar17 >> 0x20) + 0xc) = (uint)uVar17 ^ uVar4 ^ uVar15 ^ uVar10;
  uVar17 = FUN_01b0cc6c(uVar13);
  *(uint *)((int)((ulonglong)uVar17 >> 0x20) + 0x10) = (uint)uVar17 ^ uVar5 ^ uVar14 ^ uVar10;
  uVar17 = FUN_01b0cc6c(uVar12);
  *(uint *)((int)((ulonglong)uVar17 >> 0x20) + 0x14) = (uint)uVar17 ^ uVar6 ^ uVar13;
  uVar17 = FUN_01b0cc6c(uVar11);
  *(uint *)((int)((ulonglong)uVar17 >> 0x20) + 0x18) = (uint)uVar17 ^ uVar7 ^ uVar12;
  uVar17 = FUN_01b0cc6c(uVar10);
  *(uint *)((int)((ulonglong)uVar17 >> 0x20) + 0x1c) = (uint)uVar17 ^ uVar8 ^ uVar11;
  return 0;
}

