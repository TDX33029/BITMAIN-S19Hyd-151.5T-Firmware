// FUN_01b9c7a8 @ 01b9c7a8 size=884 calls_out=2 calls_in=3
// strings: 

uint FUN_01b9c7a8(int param_1,uint *param_2,int param_3,int *param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  uint local_34;
  int local_2c;
  
  iVar8 = *(int *)(param_1 + 100);
  iVar12 = *(int *)(param_1 + 0xc0);
  uVar14 = 1 << (*(uint *)(param_1 + 0xbc) & 0xff);
  iVar13 = *(int *)(param_1 + 0x5c);
  iVar4 = *(int *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 0xc);
  uVar10 = (int)param_2 - iVar4;
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar10 - uVar6) {
    local_34 = uVar10 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_34 = uVar6;
  }
  piVar11 = *(int **)(param_1 + 0xb4);
  if (*(int *)(param_1 + 0x18) != 0) {
    local_34 = uVar6;
  }
  if (uVar14 < uVar10) {
    uVar6 = uVar10 - uVar14;
  }
  else {
    uVar6 = 0;
  }
  local_2c = 1 << (*(uint *)(param_1 + 0xc4) & 0xff);
  iVar9 = *(int *)(param_1 + 0xdc);
  uVar7 = -iVar12 + 0x40;
  uVar3 = *(uint *)(param_1 + 0x1c);
  do {
    if (uVar10 <= uVar3) break;
    lVar1 = (ulonglong)*(uint *)(iVar4 + uVar3) * 0xbf9b0000;
    uVar15 = *(int *)(iVar4 + uVar3 + 4) * -0x40650000 + *(uint *)(iVar4 + uVar3) * -0x30e44324 +
             (int)((ulonglong)lVar1 >> 0x20);
    uVar15 = (uint)lVar1 >> (uVar7 & 0xff) | uVar15 << (iVar12 - 0x20U & 0xff) |
             uVar15 >> (0x20U - iVar12 & 0xff);
    *(undefined4 *)(iVar8 + (uVar14 - 1 & uVar3) * 4) = *(undefined4 *)(iVar13 + uVar15 * 4);
    *(uint *)(iVar13 + uVar15 * 4) = uVar3;
    uVar3 = uVar3 + 1;
  } while (iVar9 == 0);
  uVar15 = *param_2;
  uVar3 = param_2[1];
  *(uint *)(param_1 + 0x1c) = uVar10;
  lVar1 = (ulonglong)uVar15 * 0xbf9b0000;
  uVar16 = (uint)lVar1;
  uVar15 = uVar3 * -0x40650000 + uVar15 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
  uVar3 = 3;
  for (uVar7 = *(uint *)(iVar13 + (uVar16 >> (uVar7 & 0xff) | uVar15 << (0x20 - uVar7 & 0xff) |
                                  uVar15 >> (-iVar12 + 0x20U & 0xff)) * 4);
      ((uVar2 = uVar3, local_2c != 0 && local_34 <= uVar7 &&
       (((*(int *)(iVar4 + uVar7 + (uVar3 - 3)) != *(int *)((int)param_2 + (uVar3 - 3)) ||
         (uVar2 = FUN_01b9b884(param_2,iVar4 + uVar7,param_3), uVar2 <= uVar3)) ||
        (*param_4 = (uVar10 + 3) - uVar7, uVar3 = uVar2, param_3 != (int)param_2 + uVar2)))) &&
      (uVar2 = uVar3, uVar6 < uVar7)); uVar7 = *(uint *)(iVar8 + (uVar7 & uVar14 - 1) * 4)) {
    local_2c = local_2c + -1;
    uVar3 = uVar2;
  }
  iVar12 = piVar11[0x19];
  iVar8 = piVar11[0x30];
  uVar14 = 1 << (piVar11[0x2f] & 0xffU);
  uVar3 = uVar14 - 1;
  uVar7 = piVar11[3];
  iVar13 = piVar11[1];
  iVar9 = *piVar11;
  uVar6 = iVar9 - iVar13;
  bVar17 = uVar14 < uVar6;
  if (bVar17) {
    uVar14 = uVar6 - uVar14;
  }
  if (!bVar17) {
    uVar14 = 0;
  }
  uVar15 = *(uint *)(piVar11[0x17] +
                    (uVar16 >> (0x40U - iVar8 & 0xff) | uVar15 << (iVar8 - 0x20U & 0xff) |
                    uVar15 >> (0x20U - iVar8 & 0xff)) * 4);
  do {
    if (local_2c == 0 || uVar15 < uVar7) {
      return uVar2;
    }
    if (*(uint *)(iVar13 + uVar15) == *param_2) {
      iVar8 = FUN_01b9b970(param_2 + 1,iVar13 + uVar15 + 4,param_3,iVar9,iVar4 + iVar5);
      uVar16 = iVar8 + 4;
      if ((uVar2 < uVar16) &&
         (*param_4 = ((3 - iVar5) + uVar10 + uVar6) - uVar15, uVar2 = uVar16,
         param_3 == (int)param_2 + uVar16)) {
        return uVar16;
      }
    }
    if (uVar15 <= uVar14) {
      return uVar2;
    }
    uVar15 = *(uint *)(iVar12 + (uVar15 & uVar3) * 4);
    local_2c = local_2c + -1;
  } while( true );
}

