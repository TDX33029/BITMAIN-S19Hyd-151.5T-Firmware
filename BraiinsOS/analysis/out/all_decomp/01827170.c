// FUN_01827170 @ 01827170 size=680 calls_out=3 calls_in=1
// strings: 

uint FUN_01827170(int param_1,uint *param_2)

{
  int iVar1;
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
  int *piVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_2c;
  
  local_38 = param_2[6];
  local_40 = param_2[4];
  local_34 = param_2[7];
  local_2c = DAT_018ddaf8;
  local_3c = param_2[5];
  local_44 = param_2[3];
  local_50 = *param_2;
  local_4c = param_2[1];
  local_48 = param_2[2];
  uVar6 = ~(uint)(local_34 < 0x7fffffff) & local_34 >> 0x1f;
  uVar5 = (uint)(local_44 < 0x5d576e73) & ~uVar6 |
          (uint)((local_3c & local_38 & local_40) != 0xffffffff) & ~uVar6 |
          (uint)(local_34 < 0x7fffffff);
  if (local_44 < 0x5d576e74) {
    uVar2 = 0;
  }
  else {
    uVar2 = ~uVar5 & 1;
  }
  if (local_48 < 0x57a4501d) {
    uVar13 = ~(uVar2 | uVar6) & 1;
  }
  else {
    uVar13 = 0;
  }
  uVar13 = uVar13 | uVar5;
  if (local_48 < 0x57a4501e) {
    uVar5 = 0;
  }
  else {
    uVar5 = ~uVar13 & 1;
  }
  uVar5 = uVar5 | uVar2 | uVar6;
  if (local_4c < 0xdfe92f46) {
    uVar6 = ~uVar5 & 1;
  }
  else {
    uVar6 = 0;
  }
  bVar16 = 0x681b209f < local_50;
  bVar15 = local_50 == 0x681b20a0;
  if (local_50 < 0x681b20a1) {
    bVar16 = 0xdfe92f45 < local_4c;
    bVar15 = local_4c == 0xdfe92f46;
  }
  uVar5 = uVar5 | (uint)(bVar16 && !bVar15) & ~(uVar6 | uVar13);
  uVar13 = ~local_50 & 1 ^ uVar5;
  FUN_01823fd8(&local_50,uVar13);
  iVar1 = FUN_01820188(&local_50,uVar5);
  uVar9 = local_44 * 0x10000000 + (local_48 >> 4);
  uVar10 = local_48 * 0x10000000 + (local_4c >> 4);
  uVar8 = local_40 * 0x10000000 + (local_44 >> 4);
  uVar7 = local_3c * 0x10000000 + (local_40 >> 4);
  uVar11 = local_4c * 0x10000000 + (local_50 >> 4);
  uVar14 = local_34 * 0x10000000 + (local_38 >> 4);
  uVar2 = local_38 * 0x10000000 + (local_3c >> 4);
  piVar12 = (int *)(param_1 + -4);
  uVar5 = local_50 & 0xf;
  uVar6 = local_34;
  do {
    uVar6 = uVar6 >> 4;
    uVar3 = ~(uVar11 & 0xf) & 1;
    uVar4 = uVar3 + (uVar11 & 0xf);
    piVar12 = piVar12 + 1;
    *piVar12 = iVar1 * (uVar5 + uVar3 * -0x10);
    uVar11 = uVar10 * 0x10000000 + (uVar11 >> 4);
    uVar10 = uVar9 * 0x10000000 + (uVar10 >> 4);
    uVar9 = uVar8 * 0x10000000 + (uVar9 >> 4);
    uVar8 = uVar7 * 0x10000000 + (uVar8 >> 4);
    uVar7 = uVar2 * 0x10000000 + (uVar7 >> 4);
    uVar2 = uVar14 * 0x10000000 + (uVar2 >> 4);
    uVar14 = uVar6 * 0x10000000 + (uVar14 >> 4);
    uVar5 = uVar4;
  } while (piVar12 != (int *)(param_1 + 0x7c));
  *(uint *)(param_1 + 0x80) = uVar4 * iVar1;
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar13;
}

