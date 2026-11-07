// FUN_00752a6c @ 00752a6c size=588 calls_out=2 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00752a6c(uint *param_1,undefined4 *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uStack_3c;
  
  uVar6 = FUN_009bd354(param_2[4],param_2[5],param_2[6],param_2[7]);
  if (param_2[2] == 0) {
    FUN_00752cb8(param_2,param_2 + 4);
  }
  puVar10 = (uint *)*param_2;
  uVar14 = param_2[1];
  bVar5 = false;
  iVar7 = 0;
  uVar11 = uVar6;
  do {
    uVar11 = uVar14 & uVar11;
    uVar12 = *(uint *)((int)puVar10 + uVar11);
    uVar9 = uVar12 ^ (uVar6 >> 0x19) * 0x1010101;
    uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff;
    while (uVar9 != 0) {
      uVar8 = uVar9 >> 8;
      uVar1 = uVar9 >> 0x10;
      uVar2 = uVar9 >> 0x18;
      uVar3 = uVar9 << 0x18;
      uVar9 = uVar9 - 1 & uVar9;
      uVar8 = uVar11 + ((uint)LZCOUNT(uVar3 | (uVar8 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2)
                       >> 3) & uVar14;
      if (param_3 == puVar10[uVar8 * -0xe + -0xe]) {
        uVar6 = puVar10[uVar8 * -0xe + -0xc];
        uVar11 = puVar10[uVar8 * -0xe + -0xb];
        uVar14 = puVar10[uVar8 * -0xe + -10];
        *param_1 = puVar10[uVar8 * -0xe + -0xd];
        param_1[1] = uVar6;
        param_1[2] = uVar11;
        param_1[3] = uVar14;
        uVar6 = puVar10[uVar8 * -0xe + -8];
        uVar11 = puVar10[uVar8 * -0xe + -7];
        uVar14 = puVar10[uVar8 * -0xe + -6];
        param_1[4] = puVar10[uVar8 * -0xe + -9];
        param_1[5] = uVar6;
        param_1[6] = uVar11;
        param_1[7] = uVar14;
        uVar6 = puVar10[uVar8 * -0xe + -4];
        uVar11 = puVar10[uVar8 * -0xe + -3];
        uVar14 = puVar10[uVar8 * -0xe + -2];
        uVar9 = puVar10[uVar8 * -0xe + -1];
        param_1[8] = puVar10[uVar8 * -0xe + -5];
        param_1[9] = uVar6;
        param_1[10] = uVar11;
        param_1[0xb] = uVar14;
        param_1[0xc] = uVar9;
        uVar6 = param_4[1];
        uVar11 = param_4[2];
        uVar14 = param_4[3];
        puVar10[uVar8 * -0xe + -0xd] = *param_4;
        puVar10[uVar8 * -0xe + -0xc] = uVar6;
        puVar10[uVar8 * -0xe + -0xb] = uVar11;
        puVar10[uVar8 * -0xe + -10] = uVar14;
        uVar6 = param_4[5];
        uVar11 = param_4[6];
        uVar14 = param_4[7];
        puVar10[uVar8 * -0xe + -9] = param_4[4];
        puVar10[uVar8 * -0xe + -8] = uVar6;
        puVar10[uVar8 * -0xe + -7] = uVar11;
        puVar10[uVar8 * -0xe + -6] = uVar14;
        uVar6 = param_4[9];
        uVar11 = param_4[10];
        uVar14 = param_4[0xb];
        uVar9 = param_4[0xc];
        puVar10[uVar8 * -0xe + -5] = param_4[8];
        puVar10[uVar8 * -0xe + -4] = uVar6;
        puVar10[uVar8 * -0xe + -3] = uVar11;
        puVar10[uVar8 * -0xe + -2] = uVar14;
        puVar10[uVar8 * -0xe + -1] = uVar9;
        return;
      }
    }
    uVar9 = uVar12 & 0x80808080;
    if (bVar5) {
LAB_00752bb8:
      if ((uVar9 & uVar12 << 1) != 0) {
        uVar11 = (uint)*(char *)((int)puVar10 + uStack_3c);
        if (-1 < (int)uVar11) {
          uVar11 = *puVar10 & 0x80808080;
          uVar9 = LZCOUNT((*puVar10 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                          (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18);
          uVar11 = (uint)*(byte *)((int)puVar10 + (uVar9 >> 3));
          uStack_3c = uVar9 >> 3;
        }
        iVar7 = param_2[3];
        iVar13 = param_2[2];
        bVar4 = (byte)(uVar6 >> 0x19);
        *(byte *)((int)puVar10 + uStack_3c) = bVar4;
        param_2[2] = iVar13 - (uVar11 & 1);
        param_2[3] = iVar7 + 1;
        *(byte *)((int)puVar10 + (uVar14 & uStack_3c - 4) + 4) = bVar4;
        puVar10[uStack_3c * -0xe + -0xe] = param_3;
        uVar6 = param_4[1];
        uVar11 = param_4[2];
        uVar14 = param_4[3];
        puVar10[uStack_3c * -0xe + -0xd] = *param_4;
        puVar10[uStack_3c * -0xe + -0xc] = uVar6;
        puVar10[uStack_3c * -0xe + -0xb] = uVar11;
        puVar10[uStack_3c * -0xe + -10] = uVar14;
        uVar6 = param_4[5];
        uVar11 = param_4[6];
        uVar14 = param_4[7];
        puVar10[uStack_3c * -0xe + -9] = param_4[4];
        puVar10[uStack_3c * -0xe + -8] = uVar6;
        puVar10[uStack_3c * -0xe + -7] = uVar11;
        puVar10[uStack_3c * -0xe + -6] = uVar14;
        uVar6 = param_4[9];
        uVar11 = param_4[10];
        uVar14 = param_4[0xb];
        uVar9 = param_4[0xc];
        puVar10[uStack_3c * -0xe + -5] = param_4[8];
        puVar10[uStack_3c * -0xe + -4] = uVar6;
        puVar10[uStack_3c * -0xe + -3] = uVar11;
        puVar10[uStack_3c * -0xe + -2] = uVar14;
        puVar10[uStack_3c * -0xe + -1] = uVar9;
        *param_1 = 2;
        return;
      }
      bVar5 = true;
    }
    else {
      if (uVar9 != 0) {
        uStack_3c = uVar11 + ((uint)LZCOUNT((uVar12 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                            (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) &
                    uVar14;
        goto LAB_00752bb8;
      }
      bVar5 = false;
    }
    iVar7 = iVar7 + 4;
    uVar11 = iVar7 + uVar11;
  } while( true );
}

