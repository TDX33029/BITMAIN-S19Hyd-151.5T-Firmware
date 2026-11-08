// FUN_014c1acc @ 014c1acc size=752 calls_out=0 calls_in=2
// strings: 

void FUN_014c1acc(int *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  
  bVar1 = *(byte *)(param_1[1] + 0x2b);
  bVar2 = *(byte *)(*param_1 + 0x2b);
  uVar6 = (uint)*(uint3 *)(param_1[1] + 0x29);
  uVar9 = (uint)*(uint3 *)(*param_1 + 0x29);
  uVar7 = uVar6 & 0xff;
  uVar4 = uVar9 & 0xff;
  uVar3 = (uint)(uVar7 < uVar4);
  if ((uVar7 == uVar4) &&
     (uVar4 = (uVar9 & 0xffff) >> 8, uVar6 = (uVar6 & 0xffff) >> 8, uVar3 = (uint)(uVar6 < uVar4),
     uVar6 == uVar4)) {
    if (bVar1 == 0) {
      uVar3 = (uint)(bVar2 != 0);
    }
    else {
      uVar3 = (uint)(bVar1 < bVar2);
    }
  }
  bVar1 = *(byte *)(param_1[2] + 0x2b);
  bVar2 = *(byte *)(param_1[3] + 0x2b);
  uVar9 = (uint)*(uint3 *)(param_1[2] + 0x29);
  uVar4 = (uint)*(uint3 *)(param_1[3] + 0x29);
  uVar7 = uVar9 & 0xff;
  uVar6 = uVar4 & 0xff;
  bVar14 = uVar6 < uVar7;
  if ((uVar6 == uVar7) &&
     (uVar6 = (uVar9 & 0xffff) >> 8, uVar4 = (uVar4 & 0xffff) >> 8, bVar14 = uVar4 < uVar6,
     uVar4 == uVar6)) {
    if (bVar2 == 0) {
      bVar14 = bVar1 != 0;
    }
    else {
      bVar14 = bVar2 < bVar1;
    }
  }
  iVar5 = 8;
  if (bVar14) {
    iVar5 = 0xc;
  }
  piVar12 = (int *)((int)param_1 + iVar5);
  piVar11 = param_1 + uVar3;
  bVar1 = *(byte *)(*piVar12 + 0x2b);
  bVar2 = *(byte *)(*piVar11 + 0x2b);
  uVar4 = (uint)*(uint3 *)(*piVar12 + 0x29);
  iVar5 = 0xc;
  if (bVar14) {
    iVar5 = 8;
  }
  uVar6 = (uint)*(uint3 *)(*piVar11 + 0x29);
  piVar13 = (int *)((int)param_1 + iVar5);
  uVar9 = uVar4 & 0xff;
  uVar7 = uVar6 & 0xff;
  bVar14 = uVar9 < uVar7;
  param_1 = param_1 + (uVar3 ^ 1);
  if ((uVar9 == uVar7) &&
     (uVar3 = (uVar6 & 0xffff) >> 8, uVar4 = (uVar4 & 0xffff) >> 8, bVar14 = uVar4 < uVar3,
     uVar4 == uVar3)) {
    if (bVar1 == 0) {
      bVar14 = bVar2 != 0;
    }
    else {
      bVar14 = bVar1 < bVar2;
    }
  }
  bVar1 = *(byte *)(*param_1 + 0x2b);
  bVar2 = *(byte *)(*piVar13 + 0x2b);
  uVar4 = (uint)*(uint3 *)(*param_1 + 0x29);
  uVar6 = (uint)*(uint3 *)(*piVar13 + 0x29);
  uVar7 = uVar4 & 0xff;
  uVar3 = uVar6 & 0xff;
  bVar15 = uVar3 < uVar7;
  if ((uVar3 == uVar7) &&
     (uVar4 = (uVar4 & 0xffff) >> 8, uVar3 = (uVar6 & 0xffff) >> 8, bVar15 = uVar3 < uVar4,
     uVar3 == uVar4)) {
    if (bVar2 == 0) {
      bVar15 = bVar1 != 0;
    }
    else {
      bVar15 = bVar2 < bVar1;
    }
  }
  piVar8 = param_1;
  if (bVar15) {
    piVar8 = piVar12;
  }
  piVar10 = piVar12;
  if (bVar14) {
    piVar10 = param_1;
    piVar8 = piVar11;
  }
  if (bVar15) {
    piVar10 = piVar13;
  }
  bVar1 = *(byte *)(*piVar8 + 0x2b);
  bVar2 = *(byte *)(*piVar10 + 0x2b);
  uVar4 = (uint)*(uint3 *)(*piVar8 + 0x29);
  uVar7 = (uint)*(uint3 *)(*piVar10 + 0x29);
  uVar6 = uVar4 & 0xff;
  uVar3 = uVar7 & 0xff;
  bVar16 = uVar3 < uVar6;
  if ((uVar3 == uVar6) &&
     (uVar4 = (uVar4 & 0xffff) >> 8, uVar3 = (uVar7 & 0xffff) >> 8, bVar16 = uVar3 < uVar4,
     uVar3 == uVar4)) {
    if (bVar2 == 0) {
      bVar16 = bVar1 != 0;
    }
    else {
      bVar16 = bVar2 < bVar1;
    }
  }
  if (bVar14) {
    piVar11 = piVar12;
  }
  *param_2 = *piVar11;
  piVar11 = piVar10;
  if (bVar16) {
    piVar11 = piVar8;
    piVar8 = piVar10;
  }
  param_2[1] = *piVar8;
  param_2[2] = *piVar11;
  if (bVar15) {
    piVar13 = param_1;
  }
  param_2[3] = *piVar13;
  return;
}

