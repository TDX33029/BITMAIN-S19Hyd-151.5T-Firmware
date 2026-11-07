// FUN_014c1df4 @ 014c1df4 size=440 calls_out=1 calls_in=2
// strings: 

void FUN_014c1df4(int *param_1,uint param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  bool bVar19;
  
  uVar16 = param_2 >> 1;
  piVar17 = param_1 + uVar16;
  piVar3 = param_1 + (param_2 - 1);
  piVar12 = piVar17 + -1;
  piVar9 = param_3 + (param_2 - 1);
  do {
    bVar1 = *(byte *)(*piVar17 + 0x2b);
    bVar2 = *(byte *)(*param_1 + 0x2b);
    uVar15 = (uint)*(uint3 *)(*piVar17 + 0x29);
    uVar6 = (uint)*(uint3 *)(*param_1 + 0x29);
    uVar13 = uVar15 & 0xff;
    uVar10 = uVar6 & 0xff;
    uVar14 = (uint)(uVar13 < uVar10);
    if ((uVar13 == uVar10) &&
       (uVar6 = (uVar6 & 0xffff) >> 8, uVar10 = (uVar15 & 0xffff) >> 8,
       uVar14 = (uint)(uVar10 < uVar6), uVar10 == uVar6)) {
      if (bVar1 == 0) {
        uVar14 = (uint)(bVar2 != 0);
      }
      else {
        uVar14 = (uint)(bVar1 < bVar2);
      }
    }
    piVar8 = param_1;
    if (uVar14 != 0) {
      piVar8 = piVar17;
    }
    iVar11 = *piVar12;
    iVar7 = *piVar3;
    piVar5 = param_3 + 1;
    *param_3 = *piVar8;
    bVar1 = *(byte *)(iVar11 + 0x2b);
    bVar2 = *(byte *)(iVar7 + 0x2b);
    uVar10 = (uint)*(uint3 *)(iVar11 + 0x29);
    uVar6 = (uint)*(uint3 *)(iVar7 + 0x29);
    uVar13 = uVar10 & 0xff;
    uVar18 = uVar6 & 0xff;
    uVar15 = (uint)(uVar18 < uVar13);
    if ((uVar18 == uVar13) &&
       (uVar10 = (uVar10 & 0xffff) >> 8, uVar6 = (uVar6 & 0xffff) >> 8,
       uVar15 = (uint)(uVar6 < uVar10), uVar6 == uVar10)) {
      if (bVar2 == 0) {
        uVar15 = (uint)(bVar1 != 0);
      }
      else {
        uVar15 = (uint)(bVar2 < bVar1);
      }
    }
    piVar17 = piVar17 + uVar14;
    param_1 = param_1 + (uVar14 ^ 1);
    piVar8 = piVar3;
    if (uVar15 != 0) {
      piVar8 = piVar12;
    }
    piVar4 = piVar3 + uVar15;
    piVar12 = piVar12 + -uVar15;
    *piVar9 = *piVar8;
    piVar3 = piVar4 + -1;
    uVar16 = uVar16 - 1;
    param_3 = piVar5;
    piVar9 = piVar9 + -1;
  } while (uVar16 != 0);
  piVar12 = piVar12 + 1;
  if ((param_2 & 1) != 0) {
    bVar19 = param_1 < piVar12;
    piVar9 = piVar17;
    if (bVar19) {
      piVar9 = param_1;
    }
    *piVar5 = *piVar9;
    param_1 = param_1 + bVar19;
    piVar17 = piVar17 + !bVar19;
  }
  piVar9 = param_1;
  if (param_1 == piVar12) {
    piVar9 = piVar4;
  }
  if (param_1 != piVar12 || piVar17 != piVar9) {
    FUN_01307140();
  }
  return;
}

