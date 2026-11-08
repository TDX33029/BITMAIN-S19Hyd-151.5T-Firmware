// FUN_019c49f8 @ 019c49f8 size=840 calls_out=2 calls_in=1
// strings: 

void FUN_019c49f8(uint *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6,uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,
                 uint param_12,uint param_13,uint param_14,uint param_15,uint param_16,uint param_17
                 ,uint param_18,uint param_19,uint param_20,uint param_21,uint param_22)

{
  float fVar1;
  float fVar2;
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
  float fVar22;
  
  FUN_01bed4e2(param_1,param_1 + 0x14,0x50);
  uVar11 = param_5 - param_21;
  uVar3 = param_6 - (param_22 + (param_21 > param_5));
  param_1[0x26] = param_21;
  param_1[0x27] = param_22;
  if (param_6 <= param_22 && (uint)(param_21 <= param_5) <= param_6 - param_22) {
    uVar11 = 0;
    uVar3 = 0;
  }
  uVar17 = param_3 - param_19;
  param_1[0x17] = uVar3;
  uVar15 = param_4 - (param_20 + (param_19 > param_3));
  param_1[0x25] = param_20;
  param_1[0x24] = param_19;
  if (param_4 <= param_20 && (uint)(param_19 <= param_3) <= param_4 - param_20) {
    uVar15 = 0;
    uVar17 = 0;
  }
  uVar7 = uVar17 + uVar11;
  uVar4 = uVar15 + uVar3 + (uint)CARRY4(uVar17,uVar11);
  if (CARRY4(uVar15,uVar3) || CARRY4(uVar15 + uVar3,(uint)CARRY4(uVar17,uVar11))) {
    uVar7 = 0xffffffff;
    uVar4 = 0xffffffff;
  }
  param_1[0x18] = param_7;
  uVar3 = uVar7 + param_7;
  param_1[0x19] = param_8;
  uVar5 = uVar4 + param_8 + (uint)CARRY4(uVar7,param_7);
  if (CARRY4(uVar4,param_8) || CARRY4(uVar4 + param_8,(uint)CARRY4(uVar7,param_7))) {
    uVar3 = 0xffffffff;
    uVar5 = 0xffffffff;
  }
  param_1[0x1e] = param_13;
  uVar7 = uVar3 + param_13;
  param_1[0x1f] = param_14;
  uVar4 = uVar5 + param_14 + (uint)CARRY4(uVar3,param_13);
  if (CARRY4(uVar5,param_14) || CARRY4(uVar5 + param_14,(uint)CARRY4(uVar3,param_13))) {
    uVar7 = 0xffffffff;
    uVar4 = 0xffffffff;
  }
  param_1[0x20] = param_15;
  uVar5 = uVar7 + param_15;
  param_1[0x21] = param_16;
  uVar3 = uVar4 + param_16 + (uint)CARRY4(uVar7,param_15);
  param_1[0x1b] = param_10;
  if (CARRY4(uVar4,param_16) || CARRY4(uVar4 + param_16,(uint)CARRY4(uVar7,param_15))) {
    uVar3 = 0xffffffff;
    uVar5 = 0xffffffff;
  }
  param_1[0x1a] = param_9;
  uVar7 = uVar5 + param_9;
  uVar4 = uVar3 + param_10 + (uint)CARRY4(uVar5,param_9);
  uVar16 = param_1[0x12];
  if (CARRY4(uVar3,param_10) || CARRY4(uVar3 + param_10,(uint)CARRY4(uVar5,param_9))) {
    uVar7 = 0xffffffff;
    uVar4 = 0xffffffff;
  }
  param_1[0x1c] = param_11;
  uVar6 = uVar7 + param_11;
  param_1[0x1d] = param_12;
  uVar8 = uVar4 + param_12 + (uint)CARRY4(uVar7,param_11);
  if (CARRY4(uVar4,param_12) || CARRY4(uVar4 + param_12,(uint)CARRY4(uVar7,param_11))) {
    uVar6 = 0xffffffff;
    uVar8 = 0xffffffff;
  }
  uVar7 = uVar6 + param_19;
  uVar20 = param_1[0x13];
  uVar4 = uVar8 + param_20 + (uint)CARRY4(uVar6,param_19);
  if (CARRY4(uVar8,param_20) || CARRY4(uVar8 + param_20,(uint)CARRY4(uVar6,param_19))) {
    uVar7 = 0xffffffff;
    uVar4 = 0xffffffff;
  }
  uVar6 = uVar7 + param_21;
  uVar8 = uVar4 + param_22 + (uint)CARRY4(uVar7,param_21);
  if (CARRY4(uVar4,param_22) || CARRY4(uVar4 + param_22,(uint)CARRY4(uVar7,param_21))) {
    uVar6 = 0xffffffff;
    uVar8 = 0xffffffff;
  }
  param_1[0x22] = param_17;
  uVar7 = uVar6 + param_17;
  param_1[0x23] = param_18;
  uVar4 = uVar8 + param_18 + (uint)CARRY4(uVar6,param_17);
  if (CARRY4(uVar8,param_18) || CARRY4(uVar8 + param_18,(uint)CARRY4(uVar6,param_17))) {
    uVar7 = 0xffffffff;
    uVar4 = 0xffffffff;
  }
  uVar8 = *param_1;
  uVar9 = param_1[1];
  uVar12 = param_1[2];
  uVar18 = param_1[3];
  uVar6 = uVar8 + uVar12;
  uVar10 = uVar9 + uVar18 + (uint)CARRY4(uVar8,uVar12);
  uVar19 = param_1[0x11];
  uVar13 = param_1[4];
  if (CARRY4(uVar9,uVar18) || CARRY4(uVar9 + uVar18,(uint)CARRY4(uVar8,uVar12))) {
    uVar6 = 0xffffffff;
    uVar10 = 0xffffffff;
  }
  uVar8 = uVar6 + uVar13;
  uVar12 = param_1[5];
  uVar9 = uVar10 + uVar12 + (uint)CARRY4(uVar6,uVar13);
  uVar18 = param_1[10];
  if (CARRY4(uVar10,uVar12) || CARRY4(uVar10 + uVar12,(uint)CARRY4(uVar6,uVar13))) {
    uVar8 = 0xffffffff;
    uVar9 = 0xffffffff;
  }
  uVar6 = uVar8 + uVar18;
  uVar12 = param_1[0xb];
  uVar10 = uVar9 + uVar12 + (uint)CARRY4(uVar8,uVar18);
  uVar13 = param_1[0xc];
  if (CARRY4(uVar9,uVar12) || CARRY4(uVar9 + uVar12,(uint)CARRY4(uVar8,uVar18))) {
    uVar6 = 0xffffffff;
    uVar10 = 0xffffffff;
  }
  uVar21 = uVar6 + uVar13;
  uVar9 = param_1[0xd];
  uVar8 = uVar10 + uVar9 + (uint)CARRY4(uVar6,uVar13);
  uVar18 = param_1[7];
  uVar12 = param_1[6];
  if (CARRY4(uVar10,uVar9) || CARRY4(uVar10 + uVar9,(uint)CARRY4(uVar6,uVar13))) {
    uVar8 = 0xffffffff;
    uVar21 = 0xffffffff;
  }
  uVar6 = uVar21 + uVar12;
  uVar9 = uVar8 + uVar18 + (uint)CARRY4(uVar21,uVar12);
  uVar10 = param_1[8];
  if (CARRY4(uVar8,uVar18) || CARRY4(uVar8 + uVar18,(uint)CARRY4(uVar21,uVar12))) {
    uVar6 = 0xffffffff;
    uVar9 = 0xffffffff;
  }
  uVar12 = uVar6 + uVar10;
  uVar18 = param_1[9];
  uVar13 = uVar9 + uVar18 + (uint)CARRY4(uVar6,uVar10);
  uVar14 = param_1[0x10];
  if (CARRY4(uVar9,uVar18) || CARRY4(uVar9 + uVar18,(uint)CARRY4(uVar6,uVar10))) {
    uVar12 = 0xffffffff;
    uVar13 = 0xffffffff;
  }
  uVar6 = uVar12 + uVar14;
  uVar9 = uVar13 + uVar19 + (uint)CARRY4(uVar12,uVar14);
  if (CARRY4(uVar13,uVar19) || CARRY4(uVar13 + uVar19,(uint)CARRY4(uVar12,uVar14))) {
    uVar6 = 0xffffffff;
    uVar9 = 0xffffffff;
  }
  uVar10 = uVar6 + uVar16;
  uVar12 = uVar9 + uVar20 + (uint)CARRY4(uVar6,uVar16);
  uVar13 = param_1[0xe];
  if (CARRY4(uVar9,uVar20) || CARRY4(uVar9 + uVar20,(uint)CARRY4(uVar6,uVar16))) {
    uVar10 = 0xffffffff;
    uVar12 = 0xffffffff;
  }
  uVar20 = uVar10 + uVar13;
  uVar6 = param_1[0xf];
  uVar16 = uVar12 + uVar6 + (uint)CARRY4(uVar10,uVar13);
  if (CARRY4(uVar12,uVar6) || CARRY4(uVar12 + uVar6,(uint)CARRY4(uVar10,uVar13))) {
    uVar16 = 0xffffffff;
    uVar20 = 0xffffffff;
  }
  fVar1 = (float)FUN_01bf0958(uVar7 - uVar20,uVar4 - (uVar16 + (uVar7 < uVar20)));
  fVar2 = (float)FUN_01bf0958(uVar5 - uVar21,uVar3 - (uVar8 + (uVar5 < uVar21)));
  fVar22 = 0.0;
  if (uVar8 <= uVar3 && (uint)(uVar5 <= uVar21) <= uVar8 - uVar3) {
    fVar22 = fVar2;
  }
  fVar2 = 1.0;
  if (uVar16 <= uVar4 && (uint)(uVar7 <= uVar20) <= uVar16 - uVar4) {
    fVar2 = fVar1;
  }
  param_1[0x14] = uVar17;
  param_1[0x15] = uVar15;
  param_1[0x16] = uVar11;
  param_1[0x28] = uVar7;
  param_1[0x29] = uVar4;
  param_1[0x2a] = uVar20;
  param_1[0x2b] = uVar16;
  fVar22 = (fVar22 / fVar2) * 100.0;
  if (100.0 < fVar22) {
    fVar22 = 100.0;
  }
  param_1[0x2e] = (uint)fVar22;
  return;
}

