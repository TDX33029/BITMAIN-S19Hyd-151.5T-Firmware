// FUN_017088b0 @ 017088b0 size=644 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_017088b0(uint *param_1,uint *param_2)

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
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  uVar8 = param_2[2];
  uVar13 = *param_1;
  uVar11 = param_1[1];
  uVar4 = param_2[3];
  uVar16 = FUN_017037cc(uVar13,uVar8);
  uVar1 = (uint)uVar16;
  uVar17 = FUN_017037cc(uVar11,uVar4);
  uVar2 = (uint)(uVar17 >> 0x20);
  uVar18 = FUN_017037cc(uVar13 ^ uVar11,uVar8 ^ uVar4);
  uVar9 = *param_2;
  uVar15 = param_2[1];
  uVar18 = uVar18 ^ uVar16 ^ uVar17;
  uVar5 = (uint)uVar18 ^ (uint)(uVar16 >> 0x20);
  uVar12 = param_1[2];
  uVar6 = (uint)(uVar18 >> 0x20) ^ (uint)uVar17;
  uVar7 = param_1[3];
  uVar16 = FUN_017037cc(uVar12,uVar9);
  uVar17 = FUN_017037cc(uVar7,uVar15);
  uVar3 = (uint)(uVar17 >> 0x20);
  uVar18 = FUN_017037cc(uVar12 ^ uVar7,uVar9 ^ uVar15);
  uVar18 = uVar18 ^ uVar16 ^ uVar17;
  uVar14 = (uint)uVar18 ^ (uint)(uVar16 >> 0x20);
  uVar10 = (uint)(uVar18 >> 0x20) ^ (uint)uVar17;
  uVar17 = FUN_017037cc(uVar13 ^ uVar12,uVar8 ^ uVar9);
  uVar19 = FUN_017037cc(uVar7 ^ uVar11,uVar4 ^ uVar15);
  uVar18 = FUN_017037cc(uVar13 ^ uVar12 ^ uVar7 ^ uVar11,uVar8 ^ uVar9 ^ uVar4 ^ uVar15);
  uVar18 = uVar18 ^ uVar17 ^ uVar19;
  uVar4 = (uint)uVar18 ^ (uint)(uVar17 >> 0x20) ^ uVar5 ^ uVar2 ^ uVar14;
  uVar7 = uVar4 ^ uVar1 << 0x1f ^ uVar1 << 0x1e ^ uVar1 << 0x19;
  uVar8 = (uint)uVar17 ^ uVar1 ^ uVar6 ^ (uint)uVar16;
  param_1[1] = (uint)(uVar19 >> 0x20) ^ uVar5 ^ uVar2 ^ uVar14 ^ uVar3 ^ uVar5 >> 1 ^ uVar5 >> 2 ^
               uVar5 >> 7 ^ uVar8 << 0x1f ^ uVar8 << 0x1e ^ uVar8 << 0x19;
  param_1[3] = uVar7 ^ uVar3 ^ uVar7 >> 1 ^ uVar7 >> 2 ^ uVar7 >> 7;
  *param_1 = (uint)(uVar18 >> 0x20) ^ (uint)uVar19 ^ uVar1 ^ uVar6 ^ (uint)uVar16 ^ uVar10 ^
             (uVar1 >> 1 | uVar5 << 0x1f) ^ (uVar1 >> 2 | uVar5 << 0x1e) ^
             (uVar1 >> 7 | uVar5 << 0x19);
  param_1[2] = uVar8 ^ uVar10 ^ (uVar8 >> 1 | uVar4 << 0x1f) ^ (uVar8 >> 2 | uVar4 << 0x1e) ^
               (uVar8 >> 7 | uVar4 << 0x19);
  return 0;
}

