// FUN_01a7ec50 @ 01a7ec50 size=2416 calls_out=5 calls_in=2
// strings: 

void FUN_01a7ec50(undefined4 *param_1,int param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  ushort *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  undefined *puVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  byte *pbVar27;
  undefined1 *puVar28;
  uint *puVar29;
  bool bVar30;
  undefined4 local_38;
  int local_34;
  uint local_30;
  uint local_28;
  
  puVar28 = (undefined1 *)0x1a7ec7c;
  FUN_018a7af8(&local_38,(param_4 + 3 >> 2) * 3);
  cVar4 = *(char *)(param_2 + 1);
  uVar14 = param_4 & 3;
  cVar5 = *(char *)(param_2 + 2);
  param_2 = param_2 + 0x43;
  if (uVar14 == 1) {
    puVar28 = (undefined1 *)(param_4 - 1);
    uVar12 = (uint)(byte)puVar28[param_3];
    if ((uVar12 == 0x3d) || (*(char *)(param_2 + uVar12) != -1)) goto LAB_01a7ecb8;
    uVar15 = 0;
  }
  else {
LAB_01a7ecb8:
    uVar17 = param_4 - uVar14;
    uVar12 = 0;
    if (param_4 < uVar14) {
      uVar17 = 0;
    }
    uVar23 = uVar17 - 4;
    if (uVar17 < 4) {
      uVar23 = 0;
    }
    if (uVar14 != 0) {
      uVar23 = uVar17;
    }
    uVar14 = uVar23 >> 2;
    uVar17 = uVar14 * 3;
    if (uVar17 <= local_30) {
      uVar16 = uVar23 & 0x7fffffe0;
      if (param_4 < uVar16) {
        puVar22 = &DAT_01c07c10;
LAB_01a7f594:
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar12,uVar16,param_4,puVar22);
      }
      if (uVar16 != 0) {
        iVar26 = -(uVar23 & 0xffffffe0);
        uVar12 = 0;
        uVar21 = 0;
        do {
          if (local_30 / 0x18 == uVar21) {
            puVar22 = &UNK_01c07c50;
            uVar16 = (local_30 / 0x18) * 0x18 + 0x18;
            goto LAB_01a7f574;
          }
          pbVar27 = (byte *)(param_3 + uVar21 * 0x20);
          uVar24 = (uint)*pbVar27;
          bVar6 = *(byte *)(param_2 + uVar24);
          if (bVar6 == 0xff) {
            puVar28 = (undefined1 *)(uVar21 << 5);
LAB_01a7f328:
            uVar15 = uVar24 << 8;
            goto LAB_01a7f4f0;
          }
          uVar24 = (uint)pbVar27[1];
          bVar7 = *(byte *)(param_2 + uVar24);
          if (bVar7 == 0xff) {
            puVar28 = (undefined1 *)(uVar21 << 5 | 1);
            goto LAB_01a7f328;
          }
          uVar24 = (uint)pbVar27[2];
          bVar8 = *(byte *)(param_2 + uVar24);
          if (bVar8 == 0xff) {
            puVar28 = (undefined1 *)(uVar21 << 5 | 2);
            goto LAB_01a7f328;
          }
          uVar24 = (uint)pbVar27[3];
          bVar9 = *(byte *)(param_2 + uVar24);
          if (bVar9 == 0xff) {
            uVar14 = 3;
LAB_01a7f31c:
            puVar28 = (undefined1 *)(uVar14 | uVar21 << 5);
            goto LAB_01a7f328;
          }
          uVar24 = (uint)pbVar27[4];
          bVar10 = *(byte *)(param_2 + uVar24);
          if (bVar10 == 0xff) {
            uVar14 = 4;
            goto LAB_01a7f31c;
          }
          uVar24 = (uint)pbVar27[5];
          bVar11 = *(byte *)(param_2 + uVar24);
          if (bVar11 == 0xff) {
            uVar14 = 5;
            goto LAB_01a7f31c;
          }
          uVar24 = (uint)pbVar27[6];
          pbVar20 = (byte *)(param_2 + uVar24);
          if (*pbVar20 == 0xff) {
            uVar14 = 6;
            goto LAB_01a7f31c;
          }
          uVar24 = (uint)pbVar27[7];
          if (*(byte *)(param_2 + uVar24) == 0xff) {
            uVar14 = 7;
            goto LAB_01a7f31c;
          }
          uVar18 = (uint)*pbVar20 << 0x16;
          puVar29 = (uint *)(local_34 + uVar12);
          uVar15 = (uint)pbVar27[8];
          *(ushort *)(puVar29 + 1) =
               (ushort)(((uVar18 & 0xff0000 | (uint)*(byte *)(param_2 + uVar24) << 0x10) >> 0x10) <<
                       8) |
               (ushort)(byte)((byte)(((uint)bVar11 << 0x1c) >> 0x18) | (byte)(uVar18 >> 0x18));
          uVar18 = (uint)bVar7 << 0x14 | (uint)bVar6 << 0x1a;
          uVar19 = uVar18 | (uint)bVar8 << 0xe;
          bVar6 = *(byte *)(param_2 + uVar15);
          uVar24 = (uint)bVar10 << 2;
          *puVar29 = (uVar24 & 0xff | (uint)(bVar11 >> 4)) << 0x18 |
                     ((uVar19 | (uint)bVar9 << 8 | uVar24) >> 8 & 0xff) << 0x10 |
                     ((uVar19 & 0xff0000) >> 0x10) << 8 | uVar18 >> 0x18;
          if (bVar6 == 0xff) {
            uVar14 = 8;
LAB_01a7f4e0:
            uVar15 = uVar15 << 8;
            puVar28 = (undefined1 *)(uVar14 | uVar21 << 5);
            goto LAB_01a7f4f0;
          }
          uVar15 = (uint)pbVar27[9];
          bVar7 = *(byte *)(param_2 + uVar15);
          if (bVar7 == 0xff) {
            uVar14 = 9;
            goto LAB_01a7f4e0;
          }
          uVar15 = (uint)pbVar27[10];
          bVar8 = *(byte *)(param_2 + uVar15);
          if (bVar8 == 0xff) {
            uVar14 = 10;
            goto LAB_01a7f4e0;
          }
          uVar15 = (uint)pbVar27[0xb];
          bVar9 = *(byte *)(param_2 + uVar15);
          if (bVar9 == 0xff) {
            uVar14 = 0xb;
            goto LAB_01a7f4e0;
          }
          uVar15 = (uint)pbVar27[0xc];
          bVar10 = *(byte *)(param_2 + uVar15);
          if (bVar10 == 0xff) {
            uVar14 = 0xc;
            goto LAB_01a7f4e0;
          }
          uVar15 = (uint)pbVar27[0xd];
          bVar11 = *(byte *)(param_2 + uVar15);
          if (bVar11 == 0xff) {
            uVar14 = 0xd;
            goto LAB_01a7f4e0;
          }
          uVar15 = (uint)pbVar27[0xe];
          pbVar20 = (byte *)(param_2 + uVar15);
          if (*pbVar20 == 0xff) {
            uVar14 = 0xe;
            goto LAB_01a7f4e0;
          }
          uVar15 = (uint)pbVar27[0xf];
          pbVar1 = (byte *)(param_2 + uVar15);
          if (*pbVar1 == 0xff) {
            uVar14 = 0xf;
            goto LAB_01a7f4e0;
          }
          uVar24 = (uint)*pbVar20 << 0x16;
          uVar15 = (uint)pbVar27[0x10];
          *(ushort *)((int)puVar29 + 10) =
               (ushort)(((uVar24 & 0xff0000 | (uint)*pbVar1 << 0x10) >> 0x10) << 8) |
               (ushort)(byte)((byte)(((uint)bVar11 << 0x1c) >> 0x18) | (byte)(uVar24 >> 0x18));
          uVar18 = (uint)bVar7 << 0x14 | (uint)bVar6 << 0x1a;
          uVar19 = uVar18 | (uint)bVar8 << 0xe;
          bVar6 = *(byte *)(param_2 + uVar15);
          uVar24 = (uint)bVar10 << 2;
          *(uint *)((int)puVar29 + 6) =
               (uVar24 & 0xff | (uint)(bVar11 >> 4)) << 0x18 |
               ((uVar19 | (uint)bVar9 << 8 | uVar24) >> 8 & 0xff) << 0x10 |
               ((uVar19 & 0xff0000) >> 0x10) << 8 | uVar18 >> 0x18;
          if (bVar6 == 0xff) {
            uVar14 = 0x10;
            goto LAB_01a7f4e0;
          }
          uVar15 = (uint)pbVar27[0x11];
          bVar7 = *(byte *)(param_2 + uVar15);
          if (bVar7 == 0xff) {
            uVar14 = 0x11;
            goto LAB_01a7f4e0;
          }
          uVar15 = (uint)pbVar27[0x12];
          bVar8 = *(byte *)(param_2 + uVar15);
          if (bVar8 == 0xff) {
            uVar14 = 0x12;
            goto LAB_01a7f4e0;
          }
          uVar15 = (uint)pbVar27[0x13];
          bVar9 = *(byte *)(param_2 + uVar15);
          if (bVar9 == 0xff) {
            uVar14 = 0x13;
            goto LAB_01a7f4e0;
          }
          uVar15 = (uint)pbVar27[0x14];
          bVar10 = *(byte *)(param_2 + uVar15);
          if (bVar10 == 0xff) {
            uVar14 = 0x14;
            goto LAB_01a7f4e0;
          }
          uVar15 = (uint)pbVar27[0x15];
          bVar11 = *(byte *)(param_2 + uVar15);
          if (bVar11 == 0xff) {
            uVar14 = 0x15;
            goto LAB_01a7f4e0;
          }
          uVar15 = (uint)pbVar27[0x16];
          pbVar20 = (byte *)(param_2 + uVar15);
          if (*pbVar20 == 0xff) {
            uVar14 = 0x16;
            goto LAB_01a7f4e0;
          }
          uVar15 = (uint)pbVar27[0x17];
          pbVar1 = (byte *)(param_2 + uVar15);
          if (*pbVar1 == 0xff) {
            uVar14 = 0x17;
            goto LAB_01a7f4e0;
          }
          uVar24 = (uint)*pbVar20 << 0x16;
          uVar15 = (uint)pbVar27[0x18];
          *(ushort *)(puVar29 + 4) =
               (ushort)(((uVar24 & 0xff0000 | (uint)*pbVar1 << 0x10) >> 0x10) << 8) |
               (ushort)(byte)((byte)(((uint)bVar11 << 0x1c) >> 0x18) | (byte)(uVar24 >> 0x18));
          uVar18 = (uint)bVar7 << 0x14 | (uint)bVar6 << 0x1a;
          uVar19 = uVar18 | (uint)bVar8 << 0xe;
          bVar6 = *(byte *)(param_2 + uVar15);
          uVar24 = (uint)bVar10 << 2;
          puVar29[3] = (uVar24 & 0xff | (uint)(bVar11 >> 4)) << 0x18 |
                       ((uVar19 | (uint)bVar9 << 8 | uVar24) >> 8 & 0xff) << 0x10 |
                       ((uVar19 & 0xff0000) >> 0x10) << 8 | uVar18 >> 0x18;
          if (bVar6 == 0xff) {
            uVar14 = 0x18;
            goto LAB_01a7f4e0;
          }
          uVar15 = (uint)pbVar27[0x19];
          bVar7 = *(byte *)(param_2 + uVar15);
          if (bVar7 == 0xff) {
            uVar14 = 0x19;
            goto LAB_01a7f4e0;
          }
          uVar15 = (uint)pbVar27[0x1a];
          bVar8 = *(byte *)(param_2 + uVar15);
          if (bVar8 == 0xff) {
            uVar14 = 0x1a;
            goto LAB_01a7f4e0;
          }
          uVar15 = (uint)pbVar27[0x1b];
          bVar9 = *(byte *)(param_2 + uVar15);
          if (bVar9 == 0xff) {
            uVar14 = 0x1b;
            goto LAB_01a7f4e0;
          }
          uVar15 = (uint)pbVar27[0x1c];
          bVar10 = *(byte *)(param_2 + uVar15);
          if (bVar10 == 0xff) {
            uVar14 = 0x1c;
            goto LAB_01a7f4e0;
          }
          uVar15 = (uint)pbVar27[0x1d];
          bVar11 = *(byte *)(param_2 + uVar15);
          if (bVar11 == 0xff) {
            uVar14 = 0x1d;
            goto LAB_01a7f4e0;
          }
          uVar15 = (uint)pbVar27[0x1e];
          pbVar20 = (byte *)(param_2 + uVar15);
          if (*pbVar20 == 0xff) {
            uVar14 = 0x1e;
            goto LAB_01a7f4e0;
          }
          uVar15 = (uint)pbVar27[0x1f];
          if (*(byte *)(param_2 + uVar15) == 0xff) {
            uVar14 = 0x1f;
            goto LAB_01a7f4e0;
          }
          uVar24 = (uint)*pbVar20 << 0x16;
          *(ushort *)((int)puVar29 + 0x16) =
               (ushort)(((uVar24 & 0xff0000 | (uint)*(byte *)(param_2 + uVar15) << 0x10) >> 0x10) <<
                       8) |
               (ushort)(byte)((byte)(((uint)bVar11 << 0x1c) >> 0x18) | (byte)(uVar24 >> 0x18));
          uVar15 = (uint)bVar7 << 0x14 | (uint)bVar6 << 0x1a;
          uVar18 = uVar15 | (uint)bVar8 << 0xe;
          uVar24 = (uint)bVar10 << 2;
          *(uint *)((int)puVar29 + 0x12) =
               (uVar24 & 0xff | (uint)(bVar11 >> 4)) << 0x18 |
               ((uVar18 | (uint)bVar9 << 8 | uVar24) >> 8 & 0xff) << 0x10 |
               ((uVar18 & 0xff0000) >> 0x10) << 8 | uVar15 >> 0x18;
          uVar21 = uVar21 + 1;
          uVar12 = uVar12 + 0x18;
          iVar26 = iVar26 + 0x20;
        } while (iVar26 != 0);
      }
      uVar12 = (uVar16 >> 2) * 3;
      if (uVar14 < uVar16 >> 2) {
        puVar22 = &DAT_01c07c20;
        uVar16 = uVar17;
LAB_01a7f574:
        param_4 = local_30;
        goto LAB_01a7f594;
      }
      if (param_4 < uVar23) {
        puVar22 = &DAT_01c07c30;
        uVar12 = uVar16;
        uVar16 = uVar23;
        goto LAB_01a7f594;
      }
      if ((uVar23 & 0x1c) != 0) {
        iVar25 = 0;
        uVar21 = uVar17 + (uVar16 >> 2) * -3;
        iVar26 = (uVar14 & 7) * -4;
        uVar14 = 0;
        do {
          if (uVar21 < uVar14 + 3) {
            puVar22 = &DAT_01c07c40;
            uVar12 = uVar14;
            uVar16 = uVar14 + 3;
            param_4 = uVar21;
            goto LAB_01a7f594;
          }
          pbVar20 = (byte *)(param_3 + uVar16 + iVar25 * 4);
          uVar15 = (uint)*pbVar20;
          pbVar27 = (byte *)(param_2 + uVar15);
          if (*pbVar27 == 0xff) {
            puVar28 = (undefined1 *)(uVar16 + iVar25 * 4);
LAB_01a7f260:
            uVar15 = uVar15 << 8;
            goto LAB_01a7f4f0;
          }
          uVar15 = (uint)pbVar20[1];
          pbVar1 = (byte *)(param_2 + uVar15);
          if (*pbVar1 == 0xff) {
            puVar28 = (undefined1 *)(uVar16 + iVar25 * 4 | 1);
            goto LAB_01a7f260;
          }
          uVar15 = (uint)pbVar20[2];
          pbVar2 = (byte *)(param_2 + uVar15);
          if (*pbVar2 == 0xff) {
            puVar28 = (undefined1 *)(uVar16 + iVar25 * 4 | 2);
            goto LAB_01a7f260;
          }
          uVar15 = (uint)pbVar20[3];
          bVar6 = *(byte *)(param_2 + uVar15);
          if (bVar6 == 0xff) {
            puVar28 = (undefined1 *)(uVar16 + iVar25 * 4 | 3);
            goto LAB_01a7f260;
          }
          uVar15 = (uint)*pbVar1 << 0x14 | (uint)*pbVar27 << 0x1a;
          uVar24 = (uint)*pbVar2 << 0xe;
          puVar13 = (ushort *)(local_34 + uVar12 + uVar14);
          iVar25 = iVar25 + 1;
          *puVar13 = (ushort)(((uVar15 | uVar24) >> 0x10 & 0xff) << 8) |
                     (ushort)(byte)(uVar15 >> 0x18);
          iVar26 = iVar26 + 4;
          *(byte *)(puVar13 + 1) = (byte)(uVar24 >> 8) | bVar6;
          uVar14 = uVar14 + 3;
        } while (iVar26 != 0);
      }
      uVar12 = 0;
      uVar14 = 0;
      local_28 = 0;
      uVar15 = 0;
      if (uVar23 != param_4) {
        uVar16 = 0;
        pbVar20 = (byte *)(param_3 + param_4);
        pbVar27 = (byte *)(param_3 + uVar23);
        uVar21 = 0;
        do {
          iVar26 = 0;
          while( true ) {
            uVar24 = uVar14 + iVar26;
            uVar15 = (uint)pbVar27[iVar26];
            if (uVar15 != 0x3d) break;
            uVar18 = uVar24;
            if (uVar24 < 2) goto LAB_01a7f26c;
            bVar30 = iVar26 == 0;
            iVar26 = iVar26 + 1;
            if (bVar30) {
              uVar16 = uVar24;
            }
            if (pbVar27 + iVar26 == pbVar20) {
              uVar14 = (int)pbVar20 - (int)pbVar27;
              uVar15 = uVar21;
              goto LAB_01a7f27c;
            }
          }
          uVar18 = uVar16;
          if (iVar26 != 0) {
LAB_01a7f26c:
            puVar28 = (undefined1 *)(uVar18 + uVar23);
            uVar15 = 0x3d00;
            goto LAB_01a7f4f0;
          }
          if (*(char *)(param_2 + uVar15) == -1) {
            puVar28 = (undefined1 *)(uVar24 + uVar23);
            uVar15 = uVar15 << 8;
            goto LAB_01a7f4f0;
          }
          if (uVar12 == 4) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(4,4,&DAT_01c07c00);
          }
          pbVar27 = pbVar27 + iVar26 + 1;
          *(char *)((int)&local_28 + uVar12) = *(char *)(param_2 + uVar15);
          uVar14 = uVar24 + 1;
          uVar12 = uVar12 + 1;
          uVar21 = uVar15;
        } while (pbVar27 != pbVar20);
        uVar14 = 0;
      }
LAB_01a7f27c:
      if ((param_4 == 0) || (1 < uVar12)) {
        if (cVar5 != '\0') {
          if (cVar5 == '\x01') {
            uVar14 = uVar14 + uVar12 & 3;
          }
          if (uVar14 != 0) {
            puVar28 = (undefined1 *)0x0;
            uVar15 = 3;
            goto LAB_01a7f4f0;
          }
        }
        uVar14 = (local_28 >> 8 & 0xff) << 0x14 | local_28 << 0x1a |
                 (local_28 >> 0x10 & 0xff) << 0xe | (local_28 >> 0x18) << 8;
        uVar16 = uVar12 * 6 >> 3;
        if ((cVar4 != '\0') || (uVar14 << (uVar12 * 6 & 0x18) == 0)) {
          if (1 < uVar12) {
            if (uVar16 < 2) {
              uVar16 = 1;
            }
            do {
              uVar12 = 5;
              if (local_30 <= uVar17) {
                uVar12 = 4;
              }
              puVar28 = (undefined1 *)(local_34 + uVar17);
              uVar15 = 5;
              if ((~uVar12 & 1) != 0) {
                uVar15 = uVar12;
              }
              if ((~uVar15 & 1) != 0) goto LAB_01a7f4f0;
              uVar17 = uVar17 + 1;
              uVar16 = uVar16 - 1;
              *puVar28 = (char)(uVar14 >> 0x18);
              uVar14 = uVar14 << 8;
            } while (uVar16 != 0);
          }
          if (uVar17 <= local_30) {
            local_30 = uVar17;
          }
          *param_1 = local_38;
          param_1[1] = local_34;
          param_1[2] = local_30;
          return;
        }
        uVar15 = uVar15 << 8 | 2;
        puVar28 = (undefined1 *)(uVar23 + uVar12 + -1);
      }
      else {
        puVar28 = (undefined1 *)(uVar12 + uVar23);
        uVar15 = 1;
      }
      goto LAB_01a7f4f0;
    }
    uVar15 = 4;
  }
  uVar15 = uVar15 | uVar12 << 8;
LAB_01a7f4f0:
  if ((uVar15 & 0xff) == 4) {
    FUN_01a7f5f4();
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xfdee,0x1a7f5c0);
    (*pcVar3)();
  }
  *param_1 = 0x80000000;
  param_1[1] = uVar15;
  param_1[2] = puVar28;
  FUN_019bb7e0(local_38,local_34);
  return;
}

