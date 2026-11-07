// FUN_00752814 @ 00752814 size=600 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00752814(uint *param_1,undefined4 *param_2,uint param_3,uint *param_4)

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
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uStack_5c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar13 = param_2[4];
  uVar11 = param_2[5];
  uVar6 = FUN_009bd354(uVar13,uVar11,param_2[6],param_2[7]);
  if (param_2[2] == 0) {
    FUN_01137544(param_2,0,uVar13,uVar11);
  }
  puVar10 = (uint *)*param_2;
  uVar16 = param_2[1];
  bVar5 = false;
  iVar7 = 0;
  uVar14 = uVar6;
  do {
    uVar14 = uVar16 & uVar14;
    uVar17 = *(uint *)((int)puVar10 + uVar14);
    uVar8 = uVar17 ^ (uVar6 >> 0x19) * 0x1010101;
    uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
    while (uVar8 != 0) {
      uVar9 = uVar8 >> 8;
      uVar1 = uVar8 >> 0x10;
      uVar2 = uVar8 >> 0x18;
      uVar3 = uVar8 << 0x18;
      uVar8 = uVar8 - 1 & uVar8;
      uVar9 = uVar14 + ((uint)LZCOUNT(uVar3 | (uVar9 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2)
                       >> 3) & uVar16;
      if (param_3 == puVar10[uVar9 * -10 + -10]) {
        uVar6 = puVar10[uVar9 * -10 + -7];
        uVar14 = puVar10[uVar9 * -10 + -6];
        uVar16 = puVar10[uVar9 * -10 + -5];
        *param_1 = puVar10[uVar9 * -10 + -8];
        param_1[1] = uVar6;
        param_1[2] = uVar14;
        param_1[3] = uVar16;
        uVar6 = puVar10[uVar9 * -10 + -3];
        uVar14 = puVar10[uVar9 * -10 + -2];
        uVar16 = puVar10[uVar9 * -10 + -1];
        param_1[4] = puVar10[uVar9 * -10 + -4];
        param_1[5] = uVar6;
        param_1[6] = uVar14;
        param_1[7] = uVar16;
        uVar6 = param_4[1];
        uVar14 = param_4[2];
        uVar16 = param_4[3];
        puVar10[uVar9 * -10 + -8] = *param_4;
        puVar10[uVar9 * -10 + -7] = uVar6;
        puVar10[uVar9 * -10 + -6] = uVar14;
        puVar10[uVar9 * -10 + -5] = uVar16;
        uVar6 = param_4[5];
        uVar14 = param_4[6];
        uVar16 = param_4[7];
        puVar10[uVar9 * -10 + -4] = param_4[4];
        puVar10[uVar9 * -10 + -3] = uVar6;
        puVar10[uVar9 * -10 + -2] = uVar14;
        puVar10[uVar9 * -10 + -1] = uVar16;
        return;
      }
    }
    uVar8 = uVar17 & 0x80808080;
    if (bVar5) {
LAB_00752954:
      if ((uVar8 & uVar17 << 1) != 0) {
        uVar14 = (uint)*(char *)((int)puVar10 + uStack_5c);
        if (-1 < (int)uVar14) {
          uVar14 = *puVar10 & 0x80808080;
          uVar8 = LZCOUNT((*puVar10 & 0x80) << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                          (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18);
          uVar14 = (uint)*(byte *)((int)puVar10 + (uVar8 >> 3));
          uStack_5c = uVar8 >> 3;
        }
        uVar8 = param_4[1];
        uVar17 = param_4[2];
        uVar9 = param_4[3];
        puVar15 = (uint *)((uint)&uStack_48 | 4);
        *puVar15 = *param_4;
        puVar15[1] = uVar8;
        puVar15[2] = uVar17;
        puVar15[3] = uVar9;
        uVar8 = param_4[5];
        uVar17 = param_4[6];
        uVar9 = param_4[7];
        puVar15[4] = param_4[4];
        puVar15[5] = uVar8;
        puVar15[6] = uVar17;
        puVar15[7] = uVar9;
        iVar7 = param_2[2];
        iVar12 = param_2[3];
        bVar4 = (byte)(uVar6 >> 0x19);
        *(byte *)((int)puVar10 + uStack_5c) = bVar4;
        *(byte *)((int)puVar10 + (uVar16 & uStack_5c - 4) + 4) = bVar4;
        param_2[2] = iVar7 - (uVar14 & 1);
        param_2[3] = iVar12 + 1;
        puVar10[uStack_5c * -10 + -10] = param_3;
        puVar10[uStack_5c * -10 + -9] = uStack_48;
        puVar10[uStack_5c * -10 + -8] = uStack_44;
        puVar10[uStack_5c * -10 + -7] = uStack_40;
        puVar10[uStack_5c * -10 + -6] = uStack_3c;
        puVar10[uStack_5c * -10 + -5] = uStack_38;
        puVar10[uStack_5c * -10 + -4] = uStack_34;
        puVar10[uStack_5c * -10 + -3] = uStack_30;
        puVar10[uStack_5c * -10 + -2] = uStack_2c;
        puVar10[uStack_5c * -10 + -1] = uStack_28;
        param_1[2] = (uint)&DAT_3b9aca00;
        return;
      }
      bVar5 = true;
    }
    else {
      if (uVar8 != 0) {
        uStack_5c = uVar14 + ((uint)LZCOUNT((uVar17 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                            (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                    uVar16;
        goto LAB_00752954;
      }
      bVar5 = false;
    }
    iVar7 = iVar7 + 4;
    uVar14 = iVar7 + uVar14;
  } while( true );
}

