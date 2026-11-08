// FUN_0166f1d0 @ 0166f1d0 size=628 calls_out=4 calls_in=1
// strings: 

void FUN_0166f1d0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
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
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  bool bVar18;
  ulonglong uVar19;
  uint local_58;
  
  uVar3 = FUN_01676128(param_1 + 4);
  if (param_1[2] == 0) {
    FUN_01666644(param_1,param_1 + 4);
  }
  uVar14 = param_1[1];
  uVar4 = param_2[1];
  uVar11 = param_2[2];
  puVar17 = (uint *)*param_1;
  uVar5 = param_2[4];
  uVar12 = param_2[5];
  bVar2 = false;
  iVar15 = 0;
  uVar10 = param_2[0xd];
  uVar16 = uVar3;
  do {
    uVar16 = uVar14 & uVar16;
    uVar6 = *(uint *)((int)puVar17 + uVar16);
    uVar7 = uVar6 ^ (uVar3 >> 0x19) * 0x1010101;
    for (uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar8 = uVar16 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                      (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar14;
      if (uVar11 == puVar17[uVar8 * -0xe + -0xc]) {
        uVar9 = thunk_FUN_01bed842(uVar4,puVar17[uVar8 * -0xe + -0xd],uVar11);
        bVar18 = uVar9 == 0;
        if (bVar18) {
          uVar9 = puVar17[uVar8 * -0xe + -9];
        }
        if (bVar18 && uVar12 == uVar9) {
          uVar19 = thunk_FUN_01bed842(uVar5,puVar17[uVar8 * -0xe + -10],uVar12);
          bVar18 = (int)uVar19 == 0;
          if (bVar18) {
            uVar19 = (ulonglong)CONCAT14((char)uVar10,(uint)(byte)puVar17[uVar8 * -0xe + -1]);
          }
          if (bVar18 && (int)(uVar19 >> 0x20) == (int)uVar19) {
            FUN_019bb7e0(*param_2,uVar4);
            FUN_019bb7e0(param_2[3],uVar5);
            return;
          }
        }
      }
    }
    uVar7 = uVar6 & 0x80808080;
    if (bVar2) {
LAB_0166f350:
      if ((uVar7 & uVar6 << 1) != 0) {
        uVar10 = (uint)*(char *)((int)puVar17 + local_58);
        if (-1 < (int)uVar10) {
          uVar10 = *puVar17 & 0x80808080;
          uVar16 = LZCOUNT((*puVar17 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                           (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18);
          uVar10 = (uint)*(byte *)((int)puVar17 + (uVar16 >> 3));
          local_58 = uVar16 >> 3;
        }
        iVar15 = param_1[3];
        iVar13 = param_1[2];
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar17 + local_58) = bVar1;
        param_1[2] = iVar13 - (uVar10 & 1);
        param_1[3] = iVar15 + 1;
        *(byte *)((int)puVar17 + (uVar14 & local_58 - 4) + 4) = bVar1;
        uVar3 = param_2[1];
        uVar10 = param_2[2];
        uVar16 = param_2[3];
        puVar17[local_58 * -0xe + -0xe] = *param_2;
        puVar17[local_58 * -0xe + -0xd] = uVar3;
        puVar17[local_58 * -0xe + -0xc] = uVar10;
        puVar17[local_58 * -0xe + -0xb] = uVar16;
        uVar3 = param_2[5];
        uVar10 = param_2[6];
        uVar16 = param_2[7];
        uVar4 = param_2[8];
        puVar17[local_58 * -0xe + -10] = param_2[4];
        puVar17[local_58 * -0xe + -9] = uVar3;
        puVar17[local_58 * -0xe + -8] = uVar10;
        puVar17[local_58 * -0xe + -7] = uVar16;
        puVar17[local_58 * -0xe + -6] = uVar4;
        uVar3 = param_2[10];
        uVar10 = param_2[0xb];
        uVar16 = param_2[0xc];
        uVar4 = param_2[0xd];
        puVar17[local_58 * -0xe + -5] = param_2[9];
        puVar17[local_58 * -0xe + -4] = uVar3;
        puVar17[local_58 * -0xe + -3] = uVar10;
        puVar17[local_58 * -0xe + -2] = uVar16;
        puVar17[local_58 * -0xe + -1] = uVar4;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar7 != 0) {
        local_58 = uVar16 + ((uint)LZCOUNT((uVar6 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                           (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                   uVar14;
        goto LAB_0166f350;
      }
      bVar2 = false;
    }
    iVar15 = iVar15 + 4;
    uVar16 = iVar15 + uVar16;
  } while( true );
}

