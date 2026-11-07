// FUN_01aa42f8 @ 01aa42f8 size=640 calls_out=4 calls_in=11
// strings: 

void FUN_01aa42f8(uint *param_1,undefined4 *param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint local_64;
  int local_54;
  
  uVar8 = param_2[4];
  uVar10 = param_2[5];
  uVar12 = param_2[6];
  uVar14 = param_2[7];
  uVar16 = param_3[1];
  uVar17 = param_3[2];
  uVar3 = FUN_01adafd4(uVar8,uVar10,uVar12,uVar14,uVar16,uVar17);
  if (param_2[2] == 0) {
    FUN_01aa37a0(param_2,1,uVar8,uVar10,uVar12,uVar14);
  }
  uVar15 = param_2[1];
  puVar18 = (uint *)*param_2;
  bVar2 = false;
  local_54 = 0;
  uVar9 = uVar3;
  do {
    uVar9 = uVar15 & uVar9;
    uVar13 = *(uint *)((int)puVar18 + uVar9);
    uVar4 = uVar13 ^ (uVar3 >> 0x19) * 0x1010101;
    for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar5 = uVar9 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                     (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar15;
      if ((uVar17 == puVar18[uVar5 * -6 + -4]) &&
         (iVar6 = thunk_FUN_01bed842(uVar16,puVar18[uVar5 * -6 + -5],uVar17), iVar6 == 0)) {
        uVar3 = puVar18[uVar5 * -6 + -2];
        uVar17 = puVar18[uVar5 * -6 + -1];
        *param_1 = puVar18[uVar5 * -6 + -3];
        param_1[1] = uVar3;
        param_1[2] = uVar17;
        uVar3 = param_4[1];
        uVar17 = param_4[2];
        puVar18[uVar5 * -6 + -3] = *param_4;
        puVar18[uVar5 * -6 + -2] = uVar3;
        puVar18[uVar5 * -6 + -1] = uVar17;
        FUN_019bb7e0(*param_3,uVar16);
        return;
      }
    }
    uVar4 = uVar13 & 0x80808080;
    if (bVar2) {
LAB_01aa4444:
      if ((uVar4 & uVar13 << 1) != 0) {
        uVar16 = (uint)*(char *)((int)puVar18 + local_64);
        if (-1 < (int)uVar16) {
          uVar16 = *puVar18 & 0x80808080;
          uVar17 = LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                           (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18);
          uVar16 = (uint)*(byte *)((int)puVar18 + (uVar17 >> 3));
          local_64 = uVar17 >> 3;
        }
        uVar17 = *param_3;
        uVar4 = param_3[1];
        uVar5 = param_3[2];
        uVar9 = *param_4;
        uVar13 = param_4[1];
        uVar11 = param_4[2];
        iVar6 = param_2[2];
        iVar7 = param_2[3];
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar18 + local_64) = bVar1;
        param_2[2] = iVar6 - (uVar16 & 1);
        *(byte *)((int)puVar18 + (uVar15 & local_64 - 4) + 4) = bVar1;
        param_2[3] = iVar7 + 1;
        puVar18[local_64 * -6 + -6] = uVar17;
        puVar18[local_64 * -6 + -5] = uVar4;
        puVar18[local_64 * -6 + -4] = uVar5;
        puVar18[local_64 * -6 + -3] = uVar9;
        puVar18[local_64 * -6 + -2] = uVar13;
        puVar18[local_64 * -6 + -1] = uVar11;
        *param_1 = 0x80000000;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar4 != 0) {
        local_64 = uVar9 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                          (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                   uVar15;
        goto LAB_01aa4444;
      }
      bVar2 = false;
    }
    local_54 = local_54 + 4;
    uVar9 = local_54 + uVar9;
  } while( true );
}

