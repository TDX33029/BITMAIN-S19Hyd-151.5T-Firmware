// FUN_01b9cea0 @ 01b9cea0 size=748 calls_out=2 calls_in=3
// strings: 

uint FUN_01b9cea0(int param_1,int *param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint unaff_r9;
  int iVar14;
  int iVar15;
  bool bVar16;
  int local_2c;
  
  iVar6 = *(int *)(param_1 + 100);
  iVar14 = *(int *)(param_1 + 4);
  uVar10 = 1 << (*(uint *)(param_1 + 0xbc) & 0xff);
  iVar4 = *(int *)(param_1 + 0xc);
  uVar11 = (int)param_2 - iVar14;
  uVar5 = *(uint *)(param_1 + 0x10);
  piVar12 = *(int **)(param_1 + 0xb4);
  uVar7 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  if (uVar7 < uVar11 - uVar5) {
    unaff_r9 = uVar11 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  if (uVar11 - uVar5 <= uVar7) {
    unaff_r9 = uVar5;
  }
  iVar15 = *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x18) != 0) {
    unaff_r9 = uVar5;
  }
  if (uVar10 < uVar11) {
    uVar7 = uVar11 - uVar10;
  }
  else {
    uVar7 = 0;
  }
  uVar5 = 0x20 - *(int *)(param_1 + 0xc0);
  local_2c = 1 << (*(uint *)(param_1 + 0xc4) & 0xff);
  iVar8 = *(int *)(param_1 + 0xdc);
  uVar9 = *(uint *)(param_1 + 0x1c);
  do {
    if (uVar11 <= uVar9) break;
    uVar1 = (uint)(*(int *)(iVar14 + uVar9) * -0x61c8864f) >> (uVar5 & 0xff);
    *(undefined4 *)(iVar6 + (uVar10 - 1 & uVar9) * 4) = *(undefined4 *)(iVar15 + uVar1 * 4);
    *(uint *)(iVar15 + uVar1 * 4) = uVar9;
    uVar9 = uVar9 + 1;
  } while (iVar8 == 0);
  *(uint *)(param_1 + 0x1c) = uVar11;
  uVar9 = *(uint *)(iVar15 + ((uint)(*param_2 * -0x61c8864f) >> (uVar5 & 0xff)) * 4);
  uVar5 = 3;
  for (; ((uVar1 = uVar5, local_2c != 0 && unaff_r9 <= uVar9 &&
          (((*(int *)(iVar14 + uVar9 + (uVar5 - 3)) != *(int *)((int)param_2 + (uVar5 - 3)) ||
            (uVar1 = FUN_01b9b884(param_2,iVar14 + uVar9,param_3), uVar1 <= uVar5)) ||
           (*param_4 = (uVar11 + 3) - uVar9, uVar5 = uVar1, param_3 != (int)param_2 + uVar1)))) &&
         (uVar1 = uVar5, uVar7 < uVar9)); uVar9 = *(uint *)(iVar6 + (uVar9 & uVar10 - 1) * 4)) {
    local_2c = local_2c + -1;
    uVar5 = uVar1;
  }
  iVar6 = piVar12[0x19];
  uVar10 = 1 << (piVar12[0x2f] & 0xffU);
  uVar5 = uVar10 - 1;
  uVar9 = piVar12[3];
  iVar15 = *piVar12;
  iVar8 = piVar12[1];
  uVar13 = *(uint *)(piVar12[0x17] +
                    ((uint)(*param_2 * -0x61c8864f) >> (0x20U - piVar12[0x30] & 0xff)) * 4);
  uVar7 = iVar15 - iVar8;
  bVar16 = uVar10 < uVar7;
  if (bVar16) {
    uVar10 = uVar7 - uVar10;
  }
  if (!bVar16) {
    uVar10 = 0;
  }
  do {
    if (local_2c == 0 || uVar13 < uVar9) {
      return uVar1;
    }
    if (*(int *)(iVar8 + uVar13) == *param_2) {
      iVar2 = FUN_01b9b970(param_2 + 1,iVar8 + uVar13 + 4,param_3,iVar15,iVar14 + iVar4);
      uVar3 = iVar2 + 4;
      if ((uVar1 < uVar3) &&
         (*param_4 = ((3 - iVar4) + uVar11 + uVar7) - uVar13, uVar1 = uVar3,
         param_3 == (int)param_2 + uVar3)) {
        return uVar3;
      }
    }
    if (uVar13 <= uVar10) {
      return uVar1;
    }
    uVar13 = *(uint *)(iVar6 + (uVar13 & uVar5) * 4);
    local_2c = local_2c + -1;
  } while( true );
}

