// FUN_015da950 @ 015da950 size=656 calls_out=3 calls_in=1
// strings: 

void FUN_015da950(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint local_54;
  
  param_2 = (undefined4 *)*param_2;
  puVar14 = (uint *)param_1[2];
  iVar10 = param_1[4];
  iVar16 = *param_1;
  uVar18 = param_1[1];
LAB_015da984:
  if (uVar18 == 0) {
    puVar11 = puVar14;
    if (iVar10 == 0) {
      return;
    }
    do {
      puVar14 = puVar11 + 1;
      uVar18 = *puVar11;
      iVar16 = iVar16 + -0x30;
      puVar11 = puVar14;
    } while ((uVar18 & 0x80808080) == 0x80808080);
    uVar18 = uVar18 & 0x80808080 ^ 0x80808080;
  }
  uVar15 = LZCOUNT(uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
                   uVar18 >> 0x18);
  iVar17 = iVar16 + ((uVar15 >> 3) * -2 - (uVar15 >> 3)) * 4;
  uVar15 = FUN_015f7484(param_2[4],param_2[5],param_2[6],param_2[7],*(undefined4 *)(iVar17 + -8),
                        *(undefined4 *)(iVar17 + -4));
  if (param_2[2] == 0) {
    FUN_015d95d4(param_2,1,param_2 + 4);
  }
  uVar18 = uVar18 - 1 & uVar18;
  iVar12 = 0;
  puVar11 = (uint *)*param_2;
  uVar19 = param_2[1];
  bVar5 = false;
  uVar13 = uVar15;
  do {
    uVar13 = uVar19 & uVar13;
    uVar6 = *(uint *)((int)puVar11 + uVar13);
    uVar7 = uVar6 ^ (uVar15 >> 0x19) * 0x1010101;
    uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
    while (uVar7 != 0) {
      uVar9 = uVar7 >> 8;
      uVar1 = uVar7 >> 0x10;
      uVar2 = uVar7 >> 0x18;
      uVar3 = uVar7 << 0x18;
      uVar7 = uVar7 - 1 & uVar7;
      if ((*(int *)(iVar17 + -4) ==
           *(int *)(puVar11[-1 - (uVar13 + ((uint)LZCOUNT(uVar3 | (uVar9 & 0xff) << 0x10 |
                                                          (uVar1 & 0xff) << 8 | uVar2) >> 3) &
                                 uVar19)] + 8)) &&
         (iVar8 = thunk_FUN_01bed842(*(undefined4 *)(iVar17 + -8),
                                     *(undefined4 *)
                                      (puVar11[-1 - (uVar13 + ((uint)LZCOUNT(uVar3 | (uVar9 & 0xff)
                                                                                     << 0x10 |
                                                                             (uVar1 & 0xff) << 8 |
                                                                             uVar2) >> 3) & uVar19)]
                                      + 4)), iVar8 == 0)) goto LAB_015dab98;
    }
    uVar9 = uVar6 & 0x80808080;
    uVar7 = local_54;
    if (bVar5) {
LAB_015dab10:
      if ((uVar9 & uVar6 << 1) != 0) break;
      bVar5 = true;
      local_54 = uVar7;
    }
    else {
      if (uVar9 != 0) {
        uVar7 = uVar13 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                        (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) & uVar19;
        goto LAB_015dab10;
      }
      bVar5 = false;
    }
    iVar12 = iVar12 + 4;
    uVar13 = iVar12 + uVar13;
  } while( true );
  uVar13 = (uint)*(char *)((int)puVar11 + uVar7);
  if (-1 < (int)uVar13) {
    uVar13 = *puVar11 & 0x80808080;
    uVar7 = LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                    uVar13 >> 0x18);
    uVar13 = (uint)*(byte *)((int)puVar11 + (uVar7 >> 3));
    uVar7 = uVar7 >> 3;
  }
  iVar12 = param_2[3];
  iVar8 = param_2[2];
  bVar4 = (byte)(uVar15 >> 0x19);
  *(byte *)((int)puVar11 + uVar7) = bVar4;
  param_2[2] = iVar8 - (uVar13 & 1);
  param_2[3] = iVar12 + 1;
  *(byte *)((int)puVar11 + (uVar19 & uVar7 - 4) + 4) = bVar4;
  puVar11[-1 - uVar7] = iVar17 - 0xc;
LAB_015dab98:
  iVar10 = iVar10 + -1;
  goto LAB_015da984;
}

