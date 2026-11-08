// FUN_016dd1aa @ 016dd1aa size=732 calls_out=0 calls_in=3382
// strings: 

uint * FUN_016dd1aa(uint *param_1,uint *param_2,uint param_3,byte param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar9;
  int iVar10;
  uint unaff_r6;
  uint uVar11;
  uint unaff_r7;
  uint uVar12;
  uint unaff_r8;
  uint uVar13;
  uint unaff_r9;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte in_r12;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  
  puVar1 = param_1;
  puVar3 = param_2;
  if (3 < param_3) {
    uVar8 = -(int)param_2 & 3;
    if (uVar8 != 0) {
      bVar22 = (-(int)param_2 & 2U) != 0;
      uVar18 = (int)param_2 * -0x80000000;
      bVar21 = (int)uVar18 < 0;
      param_3 = param_3 - uVar8;
      if (bVar21) {
        uVar8 = (uint)(byte)*param_2;
        param_2 = (uint *)((int)param_2 + 1);
      }
      if (bVar22) {
        pbVar4 = (byte *)((int)param_2 + 1);
        unaff_r4 = (uint)(byte)*param_2;
        param_2 = (uint *)((int)param_2 + 2);
        uVar18 = (uint)*pbVar4;
      }
      if (bVar21) {
        puVar1 = (uint *)((int)param_1 + 1);
        *(byte *)param_1 = (byte)uVar8;
      }
      if (bVar22) {
        pbVar4 = (byte *)((int)puVar1 + 1);
        *(byte *)puVar1 = (byte)unaff_r4;
        puVar1 = (uint *)((int)puVar1 + 2);
        *pbVar4 = (byte)uVar18;
      }
    }
    param_4 = (byte)uVar8;
    in_r12 = (byte)((uint)puVar1 ^ (uint)param_2);
    if ((((uint)puVar1 ^ (uint)param_2) & 3) == 0) {
      uVar8 = -(int)puVar1 & 0x1c;
      if (uVar8 != 0) {
        if (param_3 < uVar8) {
          uVar8 = param_3 & 0x1c;
        }
        bVar22 = (uVar8 & 0x10) != 0;
        bVar21 = (int)(uVar8 << 0x1c) < 0;
        if (bVar22) {
          unaff_r4 = *param_2;
          unaff_r5 = param_2[1];
          unaff_r6 = param_2[2];
          unaff_r7 = param_2[3];
          param_2 = param_2 + 4;
        }
        if (bVar21) {
          unaff_r8 = *param_2;
          unaff_r9 = param_2[1];
          param_2 = param_2 + 2;
        }
        puVar3 = puVar1;
        if (bVar22) {
          *puVar1 = unaff_r4;
          puVar1[1] = unaff_r5;
          puVar1[2] = unaff_r6;
          puVar1[3] = unaff_r7;
          puVar3 = puVar1 + 4;
        }
        if (bVar21) {
          *puVar3 = unaff_r8;
          puVar3[1] = unaff_r9;
          puVar3 = puVar3 + 2;
        }
        puVar1 = puVar3;
        if ((uVar8 & 4) != 0) {
          puVar1 = puVar3 + 1;
          *puVar3 = *param_2;
          param_2 = param_2 + 1;
        }
        param_3 = param_3 - uVar8;
      }
      uVar7 = param_3 - 0x20;
      uVar18 = uVar7;
      if (0x1f < param_3) {
        do {
          uVar7 = uVar18;
          unaff_r4 = *param_2;
          unaff_r5 = param_2[1];
          unaff_r6 = param_2[2];
          unaff_r7 = param_2[3];
          unaff_r8 = param_2[4];
          unaff_r9 = param_2[5];
          uVar18 = param_2[6];
          uVar16 = param_2[7];
          param_2 = param_2 + 8;
          *puVar1 = unaff_r4;
          puVar1[1] = unaff_r5;
          puVar1[2] = unaff_r6;
          puVar1[3] = unaff_r7;
          puVar1[4] = unaff_r8;
          puVar1[5] = unaff_r9;
          puVar1[6] = uVar18;
          puVar1[7] = uVar16;
          puVar1 = puVar1 + 8;
          uVar18 = uVar7 - 0x20;
        } while (0x1f < uVar7);
      }
      if ((uVar7 & 0x1f) != 0) {
        bVar22 = (uVar7 & 0x10) != 0;
        bVar21 = (int)(uVar7 << 0x1c) < 0;
        if (bVar22) {
          unaff_r4 = *param_2;
          unaff_r5 = param_2[1];
          unaff_r6 = param_2[2];
          unaff_r7 = param_2[3];
          param_2 = param_2 + 4;
        }
        if (bVar21) {
          unaff_r8 = *param_2;
          unaff_r9 = param_2[1];
          param_2 = param_2 + 2;
        }
        if (bVar22) {
          *puVar1 = unaff_r4;
          puVar1[1] = unaff_r5;
          puVar1[2] = unaff_r6;
          puVar1[3] = unaff_r7;
          puVar1 = puVar1 + 4;
        }
        if (bVar21) {
          *puVar1 = unaff_r8;
          puVar1[1] = unaff_r9;
          puVar1 = puVar1 + 2;
        }
        bVar22 = (uVar7 & 4) != 0;
        bVar21 = (int)(uVar7 << 0x1e) < 0;
        puVar3 = param_2;
        if (bVar22) {
          puVar3 = param_2 + 1;
          uVar8 = *param_2;
        }
        puVar5 = puVar3;
        if (bVar21) {
          puVar5 = (uint *)((int)puVar3 + 2);
          unaff_r4 = (uint)(ushort)*puVar3;
        }
        puVar3 = puVar1;
        if (bVar22) {
          puVar3 = puVar1 + 1;
          *puVar1 = uVar8;
        }
        puVar1 = puVar3;
        if (bVar21) {
          puVar1 = (uint *)((int)puVar3 + 2);
          *(short *)puVar3 = (short)unaff_r4;
        }
        if ((uVar7 & 1) != 0) {
          *(byte *)puVar1 = (byte)*puVar5;
        }
      }
      return param_1;
    }
    puVar3 = param_2;
    if (3 < param_3) {
      uVar18 = -(int)puVar1 & 3;
      in_r12 = (byte)(uVar18 * 8);
      uVar7 = uVar18 * -8 + 0x20;
      puVar3 = param_2 + 1;
      uVar8 = *param_2;
      param_3 = param_3 - 4;
      puVar5 = puVar1;
      if ((int)puVar1 * -0x80000000 < 0) {
        puVar5 = (uint *)((int)puVar1 + 1);
        *(byte *)puVar1 = (byte)uVar8;
        uVar8 = uVar8 >> 8;
      }
      if ((-(int)puVar1 & 2U) != 0) {
        pbVar4 = (byte *)((int)puVar5 + 1);
        *(byte *)puVar5 = (byte)uVar8;
        puVar5 = (uint *)((int)puVar5 + 2);
        *pbVar4 = (byte)(uVar8 >> 8);
        uVar8 = uVar8 >> 0x10;
      }
      puVar2 = puVar5;
      puVar6 = puVar3;
      if (3 < param_3) {
LAB_016dd2d4:
        if (((uint)puVar2 & 0x1c) != 0) goto code_r0x016dd2da;
        uVar16 = param_3 - 0x20;
        if (0x1f < param_3) {
          if (uVar18 == 3) {
            puVar3 = puVar6 + 1;
            uVar20 = *puVar6;
            do {
              uVar9 = *puVar3;
              uVar11 = puVar3[1];
              uVar12 = puVar3[2];
              uVar13 = puVar3[3];
              uVar14 = puVar3[4];
              uVar15 = puVar3[5];
              uVar17 = puVar3[6];
              bVar22 = 0x1f < uVar16;
              uVar16 = uVar16 - 0x20;
              puVar6 = puVar3 + 7;
              uVar19 = uVar20;
              if (bVar22) {
                puVar6 = puVar3 + 8;
                uVar19 = puVar3[7];
              }
              *puVar2 = uVar8 | uVar20 << 8;
              puVar2[1] = uVar20 >> 0x18 | uVar9 << 8;
              puVar2[2] = uVar9 >> 0x18 | uVar11 << 8;
              puVar2[3] = uVar11 >> 0x18 | uVar12 << 8;
              puVar2[4] = uVar12 >> 0x18 | uVar13 << 8;
              puVar2[5] = uVar13 >> 0x18 | uVar14 << 8;
              puVar2[6] = uVar14 >> 0x18 | uVar15 << 8;
              puVar2[7] = uVar15 >> 0x18 | uVar17 << 8;
              puVar2 = puVar2 + 8;
              uVar8 = uVar17 >> 0x18;
              puVar3 = puVar6;
              uVar20 = uVar19;
            } while (bVar22);
          }
          else if (uVar18 == 1) {
            puVar3 = puVar6 + 1;
            uVar20 = *puVar6;
            do {
              uVar9 = *puVar3;
              uVar11 = puVar3[1];
              uVar12 = puVar3[2];
              uVar13 = puVar3[3];
              uVar14 = puVar3[4];
              uVar15 = puVar3[5];
              uVar17 = puVar3[6];
              bVar22 = 0x1f < uVar16;
              uVar16 = uVar16 - 0x20;
              puVar6 = puVar3 + 7;
              uVar19 = uVar20;
              if (bVar22) {
                puVar6 = puVar3 + 8;
                uVar19 = puVar3[7];
              }
              *puVar2 = uVar8 | uVar20 << 0x18;
              puVar2[1] = uVar20 >> 8 | uVar9 << 0x18;
              puVar2[2] = uVar9 >> 8 | uVar11 << 0x18;
              puVar2[3] = uVar11 >> 8 | uVar12 << 0x18;
              puVar2[4] = uVar12 >> 8 | uVar13 << 0x18;
              puVar2[5] = uVar13 >> 8 | uVar14 << 0x18;
              puVar2[6] = uVar14 >> 8 | uVar15 << 0x18;
              puVar2[7] = uVar15 >> 8 | uVar17 << 0x18;
              puVar2 = puVar2 + 8;
              uVar8 = uVar17 >> 8;
              puVar3 = puVar6;
              uVar20 = uVar19;
            } while (bVar22);
          }
          else {
            puVar3 = puVar6 + 1;
            uVar20 = *puVar6;
            do {
              uVar9 = *puVar3;
              uVar11 = puVar3[1];
              uVar12 = puVar3[2];
              uVar13 = puVar3[3];
              uVar14 = puVar3[4];
              uVar15 = puVar3[5];
              uVar17 = puVar3[6];
              bVar22 = 0x1f < uVar16;
              uVar16 = uVar16 - 0x20;
              puVar6 = puVar3 + 7;
              uVar19 = uVar20;
              if (bVar22) {
                puVar6 = puVar3 + 8;
                uVar19 = puVar3[7];
              }
              *puVar2 = uVar8 | uVar20 << 0x10;
              puVar2[1] = uVar20 >> 0x10 | uVar9 << 0x10;
              puVar2[2] = uVar9 >> 0x10 | uVar11 << 0x10;
              puVar2[3] = uVar11 >> 0x10 | uVar12 << 0x10;
              puVar2[4] = uVar12 >> 0x10 | uVar13 << 0x10;
              puVar2[5] = uVar13 >> 0x10 | uVar14 << 0x10;
              puVar2[6] = uVar14 >> 0x10 | uVar15 << 0x10;
              puVar2[7] = uVar15 >> 0x10 | uVar17 << 0x10;
              puVar2 = puVar2 + 8;
              uVar8 = uVar17 >> 0x10;
              puVar3 = puVar6;
              uVar20 = uVar19;
            } while (bVar22);
          }
        }
        in_r12 = (byte)(0x20 - uVar7);
        puVar5 = puVar2;
        puVar3 = puVar6;
        for (param_3 = uVar16 + 0x20; 3 < param_3; param_3 = param_3 - 4) {
          uVar16 = *puVar3 << (uVar7 & 0xff) | uVar8;
          uVar8 = *puVar3 >> (0x20 - uVar7 & 0xff);
          *puVar5 = uVar16;
          puVar5 = puVar5 + 1;
          puVar3 = puVar3 + 1;
        }
      }
LAB_016dd440:
      iVar10 = (int)puVar1 * -0x80000000;
      puVar1 = puVar5;
      if (iVar10 < 0) {
        puVar1 = (uint *)((int)puVar5 + 1);
        *(byte *)puVar5 = (byte)uVar8;
        uVar8 = uVar8 >> 8;
      }
      param_4 = (byte)uVar8;
      if ((uVar18 * -0x40000000 & 0x80000000) != 0) {
        pbVar4 = (byte *)((int)puVar1 + 1);
        *(byte *)puVar1 = param_4;
        param_4 = (byte)(uVar8 >> 8);
        puVar1 = (uint *)((int)puVar1 + 2);
        *pbVar4 = param_4;
      }
    }
  }
  bVar22 = (param_3 & 2) != 0;
  param_3 = param_3 << 0x1f;
  bVar21 = (int)param_3 < 0;
  puVar5 = puVar3;
  if (bVar21) {
    puVar5 = (uint *)((int)puVar3 + 1);
    param_3 = (uint)(byte)*puVar3;
  }
  if (bVar22) {
    param_4 = (byte)*puVar5;
    in_r12 = *(byte *)((int)puVar5 + 1);
  }
  puVar3 = puVar1;
  if (bVar21) {
    puVar3 = (uint *)((int)puVar1 + 1);
    *(byte *)puVar1 = (byte)param_3;
  }
  if (bVar22) {
    *(byte *)puVar3 = param_4;
    *(byte *)((int)puVar3 + 1) = in_r12;
  }
  return param_1;
code_r0x016dd2da:
  puVar3 = puVar6 + 1;
  param_3 = param_3 - 4;
  uVar16 = *puVar6 << (uVar7 & 0xff) | uVar8;
  uVar8 = *puVar6 >> uVar18 * 8;
  puVar5 = puVar2 + 1;
  *puVar2 = uVar16;
  puVar2 = puVar5;
  puVar6 = puVar3;
  if (param_3 < 4) goto LAB_016dd440;
  goto LAB_016dd2d4;
}

