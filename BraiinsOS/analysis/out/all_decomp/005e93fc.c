// FUN_005e93fc @ 005e93fc size=764 calls_out=0 calls_in=2
// strings: 

void FUN_005e93fc(uint *param_1)

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
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  
  uVar8 = *param_1;
  uVar7 = param_1[2];
  uVar19 = param_1[7];
  uVar24 = param_1[4];
  uVar1 = param_1[6] ^ param_1[5];
  uVar12 = uVar1 ^ uVar8;
  uVar9 = uVar24 ^ uVar7;
  uVar4 = uVar19 ^ param_1[1];
  uVar13 = uVar4 ^ uVar9;
  uVar6 = uVar19 ^ uVar7;
  uVar7 = uVar13 ^ param_1[3] ^ uVar7;
  uVar26 = uVar13 ^ param_1[3] ^ param_1[6];
  uVar5 = uVar19 ^ uVar24;
  uVar10 = uVar7 ^ uVar1;
  uVar25 = uVar26 ^ uVar5;
  uVar2 = uVar10 & uVar6 ^ uVar25 & uVar5;
  uVar3 = (uVar12 ^ uVar24) & uVar8 ^ uVar6 ^ uVar10 ^ uVar7 & uVar13 ^ uVar2;
  uVar17 = uVar12 ^ param_1[1];
  uVar1 = uVar25 ^ uVar1;
  uVar14 = (uVar10 ^ uVar25) & uVar9 ^ uVar25 & uVar5;
  uVar20 = uVar1 ^ uVar17 & uVar12 ^ uVar1 & uVar4 ^ uVar4 ^ uVar14;
  uVar14 = uVar26 ^ (uVar7 ^ uVar8) & (uVar17 ^ uVar6) ^ uVar7 & uVar13 ^ uVar14;
  uVar22 = uVar14 ^ uVar3;
  uVar14 = uVar20 & uVar14;
  uVar2 = uVar1 ^ (uVar25 ^ uVar8) & (uVar12 ^ uVar19) ^ uVar1 & uVar4 ^ uVar19 ^ uVar2;
  uVar11 = (uVar14 ^ uVar3) & (uVar2 ^ uVar20);
  uVar3 = (uVar2 ^ uVar14) & uVar22 ^ uVar3;
  uVar26 = (uVar11 ^ uVar14) & uVar2;
  uVar11 = uVar11 ^ uVar2;
  uVar20 = uVar26 ^ uVar20;
  uVar22 = (uVar26 ^ uVar2 ^ uVar14) & uVar3 ^ uVar22;
  uVar21 = uVar20 ^ uVar11;
  uVar1 = (uVar22 ^ uVar3) & uVar1;
  uVar14 = uVar1 ^ uVar22 & uVar12;
  uVar15 = uVar22 ^ uVar21;
  uVar16 = uVar3 ^ uVar11;
  uVar27 = (uVar15 ^ uVar16) & (uVar10 ^ uVar25) ^ uVar14;
  uVar26 = uVar27 ^ uVar16 & uVar25;
  uVar23 = (uVar15 ^ uVar16) & uVar9 ^ uVar16 & uVar5;
  uVar18 = uVar23 ^ uVar21 & (uVar17 ^ uVar6);
  uVar2 = uVar18 ^ uVar20 & uVar13;
  param_1[7] = uVar2 ^ uVar26;
  uVar13 = uVar20 & uVar7 ^ uVar11 & uVar8;
  uVar4 = (uVar22 ^ uVar3) & uVar4;
  uVar27 = uVar15 & uVar10 ^ uVar13 ^ uVar4 ^ uVar27;
  uVar9 = uVar27 ^ uVar3 & (uVar12 ^ uVar19);
  param_1[5] = uVar15 & uVar6 ^ uVar16 & uVar5 ^ uVar26 ^ uVar9;
  param_1[2] = uVar18 ^ uVar11 & (uVar12 ^ uVar24) ^ uVar9;
  uVar2 = uVar21 & (uVar7 ^ uVar8) ^ uVar20 & uVar7 ^ uVar14 ^ uVar2;
  param_1[4] = uVar2;
  uVar1 = uVar13 ^ uVar3 & (uVar25 ^ uVar8) ^ uVar1;
  uVar3 = uVar23 ^ uVar22 & uVar17 ^ uVar1;
  *param_1 = uVar3 ^ uVar4;
  param_1[1] = uVar3 ^ uVar27;
  param_1[6] = uVar2 ^ uVar26;
  param_1[3] = uVar2 ^ uVar1;
  return;
}

