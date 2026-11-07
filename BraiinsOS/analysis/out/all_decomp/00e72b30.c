// FUN_00e72b30 @ 00e72b30 size=972 calls_out=2 calls_in=0
// strings: 

int FUN_00e72b30(uint *param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
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
  
  if (*param_2 == 2 && param_2[1] == 0) {
    uVar2 = *param_1;
    uVar4 = param_1[1];
  }
  else {
    uVar4 = *param_1;
    *param_1 = uVar4 + 1;
    param_1[1] = param_1[1] + (uint)(0xfffffffe < uVar4);
    iVar3 = FUN_00e712cc(param_2,param_1);
    if (iVar3 != 0) {
      return iVar3;
    }
    uVar12 = 5;
    uVar4 = 5;
    if ((uint)param_2[0x5c] < 0x10000) {
      uVar12 = 3;
    }
    if ((uint)param_2[0x5c] < 0xfb) {
      uVar12 = 1;
    }
    uVar2 = *param_1 + uVar12;
    if ((uint)param_2[0x5d] < 0x10000) {
      uVar4 = 3;
    }
    if ((uint)param_2[0x5d] < 0xfb) {
      uVar4 = 1;
    }
    uVar9 = param_2[0x3b];
    uVar7 = uVar2 + uVar4;
    uVar5 = 1;
    uVar13 = 1;
    if (((uVar9 != 0 || uVar9 < (0xfa < (uint)param_2[0x3a])) &&
        (uVar13 = 3, uVar9 != 0 || uVar9 < (0xffff < (uint)param_2[0x3a]))) &&
       (uVar13 = 9, uVar9 == 0)) {
      uVar13 = 5;
    }
    uVar9 = uVar7 + uVar13;
    uVar10 = param_2[0x3d];
    if (((uVar10 != 0 || uVar10 < (0xfa < (uint)param_2[0x3c])) &&
        (uVar5 = 3, uVar10 != 0 || uVar10 < (0xffff < (uint)param_2[0x3c]))) &&
       (uVar5 = 9, uVar10 == 0)) {
      uVar5 = 5;
    }
    uVar14 = uVar9 + uVar5;
    uVar15 = param_2[0x3f];
    uVar17 = 1;
    uVar10 = 1;
    if (((uVar15 != 0 || uVar15 < (0xfa < (uint)param_2[0x3e])) &&
        (uVar10 = 3, uVar15 != 0 || uVar15 < (0xffff < (uint)param_2[0x3e]))) &&
       (uVar10 = 9, uVar15 == 0)) {
      uVar10 = 5;
    }
    uVar11 = param_2[0x40];
    uVar16 = uVar14 + uVar10;
    uVar8 = param_2[0x41];
    uVar15 = param_2[0x42];
    uVar6 = param_2[0x43];
    if (uVar6 != 0 || uVar6 < (uVar15 != 0 || uVar15 < (uVar8 != 0 || uVar8 < (0xfa < uVar11)))) {
      uVar17 = 3;
      bVar1 = uVar15 < (uVar8 != 0 || uVar8 < (0xffff < uVar11));
      uVar11 = uVar6 - (uVar15 == 0 && !bVar1);
      if (((uVar6 != 0 || uVar6 < (uVar15 != 0 || bVar1)) &&
          (uVar17 = 5, uVar6 != 0 || uVar6 < (uVar15 != 0 || uVar15 < (uVar8 != 0)))) &&
         (uVar17 = 0x11, uVar6 == 0 && (uVar15 != 0) <= uVar6)) {
        uVar17 = 9;
      }
    }
    uVar15 = uVar16 + uVar17;
    iVar3 = param_2[0x44];
    uVar4 = param_1[1] + (uint)CARRY4(*param_1,uVar12) + (uint)CARRY4(uVar2,uVar4) +
            (uint)CARRY4(uVar7,uVar13) + (uint)CARRY4(uVar9,uVar5) + (uint)CARRY4(uVar14,uVar10) +
            (uint)CARRY4(uVar16,uVar17);
    *param_1 = uVar15;
    param_1[1] = uVar4;
    if (iVar3 == -0x80000000) {
      *param_1 = uVar15 + 1;
      param_1[1] = uVar4 + (0xfffffffe < uVar15);
    }
    else {
      iVar3 = FUN_00ea158c(param_1,param_2[0x45],param_2[0x46],uVar11);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    uVar12 = param_2[0x49];
    uVar2 = 1;
    uVar4 = 1;
    if (((uVar12 != 0 || uVar12 < (0xfa < (uint)param_2[0x48])) &&
        (uVar4 = 3, uVar12 != 0 || uVar12 < (0xffff < (uint)param_2[0x48]))) &&
       (uVar4 = 9, uVar12 == 0)) {
      uVar4 = 5;
    }
    uVar9 = *param_1 + uVar4;
    uVar7 = param_2[0x4b];
    uVar5 = param_2[0x4c];
    uVar12 = param_2[0x4d];
    if (((uVar12 != 0 ||
          uVar12 < (uVar5 != 0 || uVar5 < (uVar7 != 0 || uVar7 < (0xfa < (uint)param_2[0x4a])))) &&
        (uVar2 = 3,
        uVar12 != 0 ||
        uVar12 < (uVar5 != 0 || uVar5 < (uVar7 != 0 || uVar7 < (0xffff < (uint)param_2[0x4a]))))) &&
       ((uVar2 = 5, uVar12 != 0 || uVar12 < (uVar5 != 0 || uVar5 < (uVar7 != 0)) &&
        (uVar2 = 0x11, uVar12 == 0 && (uVar5 != 0) <= uVar12)))) {
      uVar2 = 9;
    }
    uVar12 = uVar9 + uVar2;
    iVar3 = param_2[0x4e];
    uVar4 = param_1[1] + (uint)CARRY4(*param_1,uVar4) + (uint)CARRY4(uVar9,uVar2);
    *param_1 = uVar12;
    param_1[1] = uVar4;
    if (iVar3 == -0x80000000) {
      *param_1 = uVar12 + 1;
      param_1[1] = uVar4 + (0xfffffffe < uVar12);
    }
    else {
      iVar3 = FUN_00ea158c(param_1,param_2[0x4f],param_2[0x50]);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    uVar2 = param_2[0x53];
    uVar4 = 1;
    uVar12 = 1;
    if (((uVar2 != 0 || uVar2 < (0xfa < (uint)param_2[0x52])) &&
        (uVar12 = 3, uVar2 != 0 || uVar2 < (0xffff < (uint)param_2[0x52]))) &&
       (uVar12 = 9, uVar2 == 0)) {
      uVar12 = 5;
    }
    uVar9 = *param_1 + uVar12;
    uVar7 = param_2[0x55];
    uVar2 = param_2[0x56];
    uVar5 = param_2[0x57];
    if (((uVar5 != 0 ||
          uVar5 < (uVar2 != 0 || uVar2 < (uVar7 != 0 || uVar7 < (0xfa < (uint)param_2[0x54])))) &&
        (uVar4 = 3,
        uVar5 != 0 ||
        uVar5 < (uVar2 != 0 || uVar2 < (uVar7 != 0 || uVar7 < (0xffff < (uint)param_2[0x54]))))) &&
       ((uVar4 = 5, uVar5 != 0 || uVar5 < (uVar2 != 0 || uVar2 < (uVar7 != 0)) &&
        (uVar4 = 0x11, uVar5 == 0 && (uVar2 != 0) <= uVar5)))) {
      uVar4 = 9;
    }
    uVar2 = uVar9 + uVar4;
    iVar3 = param_2[0x58];
    uVar4 = param_1[1] + (uint)CARRY4(*param_1,uVar12) + (uint)CARRY4(uVar9,uVar4);
    *param_1 = uVar2;
    param_1[1] = uVar4;
    if (iVar3 != -0x80000000) {
      iVar3 = FUN_00ea158c(param_1,param_2[0x59],param_2[0x5a]);
      return iVar3;
    }
  }
  *param_1 = uVar2 + 1;
  param_1[1] = uVar4 + (0xfffffffe < uVar2);
  return 0;
}

