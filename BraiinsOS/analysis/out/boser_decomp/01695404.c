// FUN_01695404 @ 01695404 size=3260 calls_out=11 calls_in=2
// strings: 

void FUN_01695404(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  bool bVar29;
  undefined4 *local_64;
  int local_44;
  uint local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30 [3];
  
  uVar11 = param_2;
  if (0x20 < param_2) {
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_016960e8(param_1,uVar11,param_3,param_4,1);
          return;
        }
        puVar9 = param_1 + (uVar11 >> 3) * 0x10;
        puVar7 = param_1 + ((uVar11 >> 3) * 8 - (uVar11 >> 3)) * 4;
        if (uVar11 < 0x40) {
          uVar12 = puVar9[2];
          uVar17 = param_1[1];
          uVar24 = param_1[2];
          uVar16 = puVar9[1];
          uVar15 = uVar12;
          if (uVar24 < uVar12) {
            uVar15 = uVar24;
          }
          iVar5 = FUN_01bed842(uVar17,uVar16,uVar15);
          if (iVar5 == 0) {
            iVar5 = uVar24 - uVar12;
          }
          uVar18 = puVar7[1];
          cVar26 = iVar5 < 0;
          cVar28 = 0 < iVar5;
          if (iVar5 == 0) {
            cVar28 = *(char *)(param_1 + 3);
          }
          uVar15 = puVar7[2];
          if (iVar5 == 0) {
            cVar26 = *(char *)(puVar9 + 3);
          }
          uVar19 = uVar15;
          if (uVar24 < uVar15) {
            uVar19 = uVar24;
          }
          iVar5 = FUN_01bed842(uVar17,uVar18,uVar19);
          if (iVar5 == 0) {
            iVar5 = uVar24 - uVar15;
          }
          if (iVar5 == 0) {
            bVar4 = *(char *)(param_1 + 3) - *(char *)(puVar7 + 3);
          }
          else {
            bVar4 = (0 < iVar5) - (iVar5 < 0);
          }
          puVar6 = param_1;
          if (-1 < (char)(bVar4 ^ cVar28 - cVar26)) {
            uVar24 = uVar15;
            if (uVar12 < uVar15) {
              uVar24 = uVar12;
            }
            iVar5 = FUN_01bed842(uVar16,uVar18,uVar24);
            if (iVar5 == 0) {
              iVar5 = uVar12 - uVar15;
            }
            cVar27 = iVar5 < 0;
            cVar2 = 0 < iVar5;
            if (iVar5 == 0) {
              cVar27 = *(char *)(puVar7 + 3);
              cVar2 = *(char *)(puVar9 + 3);
            }
            puVar6 = puVar9;
            if ((char)(cVar2 - cVar27 ^ cVar28 - cVar26) < '\0') {
              puVar6 = puVar7;
            }
          }
        }
        else {
          puVar6 = (undefined4 *)FUN_01694198(param_1,puVar9,puVar7);
        }
        param_5 = param_5 + -1;
        local_38 = *puVar6;
        uStack_34 = puVar6[1];
        local_30[0] = puVar6[2];
        local_30[1] = puVar6[3];
        uVar15 = (uint)((int)puVar6 - (int)param_1) >> 4;
        if (param_6 == 0) break;
        uVar24 = puVar6[2];
        uVar19 = *(uint *)(param_6 + 8);
        uVar12 = uVar24;
        if (uVar19 < uVar24) {
          uVar12 = uVar19;
        }
        uVar12 = FUN_01bed842(*(undefined4 *)(param_6 + 4),puVar6[1],uVar12);
        if (uVar12 == 0) {
          uVar12 = uVar19 - uVar24;
        }
        if (uVar12 == 0) {
          if (*(byte *)(param_6 + 0xc) < *(byte *)(puVar6 + 3)) break;
        }
        else if (0x7fffffff < uVar12) break;
LAB_01695b0c:
        if (param_4 < uVar11) goto LAB_01696090;
        puVar7 = param_3 + uVar11 * 4;
        uVar12 = 0;
        puVar9 = param_1;
        while( true ) {
          iVar5 = uVar15 - 3;
          if (uVar15 < 3) {
            iVar5 = 0;
          }
          if (puVar9 < param_1 + iVar5 * 4) {
            iVar10 = 0;
            local_40 = 0;
            do {
              uVar22 = puVar6[2];
              uVar19 = *(uint *)((int)puVar9 + (8 - iVar10));
              uVar24 = uVar19;
              if (uVar22 < uVar19) {
                uVar24 = uVar22;
              }
              uVar24 = FUN_01bed842(puVar6[1],*(undefined4 *)((int)puVar9 + (4 - iVar10)),uVar24);
              if (uVar24 == 0) {
                uVar24 = uVar22 - uVar19;
              }
              if (uVar24 == 0) {
                uVar24 = 0;
                if (*(byte *)((int)puVar9 + (0xc - iVar10)) <= *(byte *)(puVar6 + 3)) {
                  uVar24 = 1;
                }
              }
              else {
                uVar24 = ~uVar24 >> 0x1f;
              }
              puVar14 = (undefined4 *)((int)puVar9 + local_40);
              puVar13 = param_3;
              if (uVar24 == 0) {
                puVar13 = (undefined4 *)((int)puVar7 + iVar10 + -0x10);
              }
              puVar13 = puVar13 + uVar12 * 4;
              uVar16 = puVar14[1];
              uVar17 = puVar14[2];
              uVar18 = puVar14[3];
              *puVar13 = *puVar14;
              puVar13[1] = uVar16;
              puVar13[2] = uVar17;
              puVar13[3] = uVar18;
              uVar21 = *(uint *)((int)puVar9 + (0x18 - iVar10));
              uVar22 = puVar6[2];
              uVar19 = uVar21;
              if (uVar22 < uVar21) {
                uVar19 = uVar22;
              }
              uVar19 = FUN_01bed842(puVar6[1],*(undefined4 *)((int)puVar9 + (0x14 - iVar10)),uVar19)
              ;
              if (uVar19 == 0) {
                uVar19 = uVar22 - uVar21;
              }
              if (uVar19 == 0) {
                uVar19 = 0;
                if (*(byte *)((int)puVar9 + (0x1c - iVar10)) <= *(byte *)(puVar6 + 3)) {
                  uVar19 = 1;
                }
              }
              else {
                uVar19 = ~uVar19 >> 0x1f;
              }
              puVar13 = param_3;
              if (uVar19 == 0) {
                puVar13 = (undefined4 *)((int)puVar7 + iVar10 + -0x20);
              }
              uVar16 = *(undefined4 *)((int)puVar9 + (0x14 - iVar10));
              uVar17 = *(undefined4 *)((int)puVar9 + (0x18 - iVar10));
              uVar18 = *(undefined4 *)((int)puVar9 + (0x1c - iVar10));
              puVar13 = puVar13 + (uVar12 + uVar24) * 4;
              *puVar13 = *(undefined4 *)((int)puVar9 + (0x10 - iVar10));
              puVar13[1] = uVar16;
              puVar13[2] = uVar17;
              puVar13[3] = uVar18;
              uVar21 = *(uint *)((int)puVar9 + (0x28 - iVar10));
              uVar23 = puVar6[2];
              uVar22 = uVar21;
              if (uVar23 < uVar21) {
                uVar22 = uVar23;
              }
              uVar22 = FUN_01bed842(puVar6[1],*(undefined4 *)((int)puVar9 + (0x24 - iVar10)),uVar22)
              ;
              if (uVar22 == 0) {
                uVar22 = uVar23 - uVar21;
              }
              if (uVar22 == 0) {
                uVar22 = 0;
                if (*(byte *)((int)puVar9 + (0x2c - iVar10)) <= *(byte *)(puVar6 + 3)) {
                  uVar22 = 1;
                }
              }
              else {
                uVar22 = ~uVar22 >> 0x1f;
              }
              iVar25 = uVar12 + uVar24 + uVar19;
              puVar13 = param_3;
              if (uVar22 == 0) {
                puVar13 = (undefined4 *)((int)puVar7 + iVar10 + -0x30);
              }
              puVar13 = puVar13 + iVar25 * 4;
              uVar16 = puVar14[9];
              uVar17 = puVar14[10];
              uVar18 = puVar14[0xb];
              *puVar13 = puVar14[8];
              puVar13[1] = uVar16;
              puVar13[2] = uVar17;
              puVar13[3] = uVar18;
              uVar19 = *(uint *)((int)puVar9 + (0x38 - iVar10));
              uVar24 = puVar6[2];
              uVar12 = uVar19;
              if (uVar24 < uVar19) {
                uVar12 = uVar24;
              }
              uVar12 = FUN_01bed842(puVar6[1],*(undefined4 *)((int)puVar9 + (0x34 - iVar10)),uVar12)
              ;
              if (uVar12 == 0) {
                uVar12 = uVar24 - uVar19;
              }
              if (uVar12 == 0) {
                uVar12 = 0;
                if (*(byte *)((int)puVar9 + (0x3c - iVar10)) <= *(byte *)(puVar6 + 3)) {
                  uVar12 = 1;
                }
              }
              else {
                uVar12 = ~uVar12 >> 0x1f;
              }
              iVar8 = 0x30 - iVar10;
              iVar25 = iVar25 + uVar22;
              puVar13 = param_3;
              if (uVar12 == 0) {
                puVar13 = (undefined4 *)((int)puVar7 + iVar10 + -0x40);
              }
              puVar13 = puVar13 + iVar25 * 4;
              uVar16 = *(undefined4 *)((int)puVar9 + (0x34 - iVar10));
              uVar17 = *(undefined4 *)((int)puVar9 + (0x38 - iVar10));
              uVar18 = *(undefined4 *)((int)puVar9 + (0x3c - iVar10));
              iVar10 = iVar10 + -0x40;
              *puVar13 = *(undefined4 *)((int)puVar9 + iVar8);
              puVar13[1] = uVar16;
              puVar13[2] = uVar17;
              puVar13[3] = uVar18;
              uVar12 = iVar25 + uVar12;
              local_40 = local_40 + 0x40;
            } while ((undefined4 *)((int)puVar9 + local_40) < param_1 + iVar5 * 4);
            puVar7 = (undefined4 *)((int)puVar7 + iVar10);
            puVar9 = (undefined4 *)((int)puVar9 + local_40);
          }
          if (puVar9 < param_1 + uVar15 * 4) {
            iVar10 = 0;
            iVar5 = 0;
            do {
              puVar13 = (undefined4 *)((int)puVar9 - iVar5);
              uVar19 = puVar13[2];
              uVar22 = puVar6[2];
              uVar24 = uVar19;
              if (uVar22 < uVar19) {
                uVar24 = uVar22;
              }
              uVar24 = FUN_01bed842(puVar6[1],puVar13[1],uVar24);
              if (uVar24 == 0) {
                uVar24 = uVar22 - uVar19;
              }
              if (uVar24 == 0) {
                uVar24 = 0;
                if (*(byte *)(puVar13 + 3) <= *(byte *)(puVar6 + 3)) {
                  uVar24 = 1;
                }
              }
              else {
                uVar24 = ~uVar24 >> 0x1f;
              }
              iVar10 = iVar10 + 0x10;
              puVar14 = param_3;
              if (uVar24 == 0) {
                puVar14 = (undefined4 *)((int)puVar7 + iVar5 + -0x10);
              }
              uVar16 = puVar13[1];
              uVar17 = puVar13[2];
              uVar18 = puVar13[3];
              puVar14 = puVar14 + uVar12 * 4;
              iVar5 = iVar5 + -0x10;
              *puVar14 = *puVar13;
              puVar14[1] = uVar16;
              puVar14[2] = uVar17;
              puVar14[3] = uVar18;
              uVar12 = uVar12 + uVar24;
            } while ((undefined4 *)((int)puVar9 + iVar10) < param_1 + uVar15 * 4);
            puVar7 = (undefined4 *)((int)puVar7 + iVar5);
            puVar9 = (undefined4 *)((int)puVar9 + iVar10);
          }
          if (uVar15 == uVar11) break;
          puVar13 = param_3 + uVar12 * 4;
          uVar16 = puVar9[1];
          uVar17 = puVar9[2];
          uVar18 = puVar9[3];
          puVar7 = puVar7 + -4;
          *puVar13 = *puVar9;
          puVar13[1] = uVar16;
          puVar13[2] = uVar17;
          puVar13[3] = uVar18;
          puVar9 = puVar9 + 4;
          uVar12 = uVar12 + 1;
          uVar15 = uVar11;
        }
        FUN_01bed4e2(param_1,param_3,uVar12 << 4);
        param_2 = uVar11 - uVar12;
        if (param_2 == 0) {
          return;
        }
        puVar7 = param_3 + uVar11 * 4 + -4;
        uVar15 = param_2;
        puVar9 = param_1 + uVar12 * 4;
        do {
          uVar16 = *puVar7;
          uVar17 = puVar7[1];
          uVar18 = puVar7[2];
          uVar20 = puVar7[3];
          puVar7 = puVar7 + -4;
          uVar15 = uVar15 - 1;
          *puVar9 = uVar16;
          puVar9[1] = uVar17;
          puVar9[2] = uVar18;
          puVar9[3] = uVar20;
          puVar9 = puVar9 + 4;
        } while (uVar15 != 0);
        if (uVar11 < uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar12,uVar11,uVar11,&DAT_01d30598);
        }
        param_1 = param_1 + uVar12 * 4;
        param_6 = 0;
        uVar11 = param_2;
        if (param_2 < 0x21) goto LAB_01695428;
      }
      if (param_4 < uVar11) goto LAB_01696090;
      local_40 = 0;
      local_64 = param_3 + uVar11 * 4;
      uVar12 = uVar15;
      puVar9 = param_1;
      while( true ) {
        iVar5 = uVar12 - 3;
        if (uVar12 < 3) {
          iVar5 = 0;
        }
        if (puVar9 < param_1 + iVar5 * 4) {
          iVar10 = 0;
          local_44 = 0;
          do {
            uVar22 = puVar6[2];
            uVar19 = *(uint *)((int)puVar9 + (8 - iVar10));
            uVar24 = uVar22;
            if (uVar19 < uVar22) {
              uVar24 = uVar19;
            }
            iVar25 = FUN_01bed842(*(undefined4 *)((int)puVar9 + (4 - iVar10)),puVar6[1],uVar24);
            if (iVar25 == 0) {
              iVar25 = uVar19 - uVar22;
            }
            cVar28 = iVar25 < 0;
            cVar26 = 0 < iVar25;
            if (iVar25 == 0) {
              cVar28 = *(char *)(puVar6 + 3);
              cVar26 = *(char *)((int)puVar9 + (0xc - iVar10));
            }
            puVar13 = (undefined4 *)((int)puVar9 + local_44);
            puVar7 = param_3;
            if (-1 < (char)(cVar26 - cVar28)) {
              puVar7 = (undefined4 *)((int)local_64 + iVar10 + -0x10);
            }
            uVar16 = puVar13[1];
            uVar17 = puVar13[2];
            uVar18 = puVar13[3];
            puVar7 = puVar7 + local_40 * 4;
            *puVar7 = *puVar13;
            puVar7[1] = uVar16;
            puVar7[2] = uVar17;
            puVar7[3] = uVar18;
            uVar22 = puVar6[2];
            uVar19 = *(uint *)((int)puVar9 + (0x18 - iVar10));
            uVar24 = uVar22;
            if (uVar19 < uVar22) {
              uVar24 = uVar19;
            }
            iVar25 = FUN_01bed842(*(undefined4 *)((int)puVar9 + (0x14 - iVar10)),puVar6[1],uVar24);
            if (iVar25 == 0) {
              iVar25 = uVar19 - uVar22;
            }
            cVar27 = iVar25 < 0;
            cVar2 = 0 < iVar25;
            if (iVar25 == 0) {
              cVar27 = *(char *)(puVar6 + 3);
              cVar2 = *(char *)((int)puVar9 + (0x1c - iVar10));
            }
            iVar25 = local_40 + ((byte)(cVar26 - cVar28) >> 7);
            puVar7 = param_3;
            if (-1 < (char)(cVar2 - cVar27)) {
              puVar7 = (undefined4 *)((int)local_64 + iVar10 + -0x20);
            }
            uVar16 = *(undefined4 *)((int)puVar9 + (0x14 - iVar10));
            uVar17 = *(undefined4 *)((int)puVar9 + (0x18 - iVar10));
            uVar18 = *(undefined4 *)((int)puVar9 + (0x1c - iVar10));
            puVar7 = puVar7 + iVar25 * 4;
            *puVar7 = *(undefined4 *)((int)puVar9 + (0x10 - iVar10));
            puVar7[1] = uVar16;
            puVar7[2] = uVar17;
            puVar7[3] = uVar18;
            uVar22 = puVar6[2];
            uVar19 = *(uint *)((int)puVar9 + (0x28 - iVar10));
            uVar24 = uVar22;
            if (uVar19 < uVar22) {
              uVar24 = uVar19;
            }
            iVar8 = FUN_01bed842(*(undefined4 *)((int)puVar9 + (0x24 - iVar10)),puVar6[1],uVar24);
            if (iVar8 == 0) {
              iVar8 = uVar19 - uVar22;
            }
            cVar28 = iVar8 < 0;
            cVar26 = 0 < iVar8;
            if (iVar8 == 0) {
              cVar28 = *(char *)(puVar6 + 3);
              cVar26 = *(char *)((int)puVar9 + (0x2c - iVar10));
            }
            iVar25 = iVar25 + (uint)((byte)(cVar2 - cVar27) >> 7);
            puVar7 = param_3;
            if (-1 < (char)(cVar26 - cVar28)) {
              puVar7 = (undefined4 *)((int)local_64 + iVar10 + -0x30);
            }
            uVar16 = puVar13[9];
            uVar17 = puVar13[10];
            uVar18 = puVar13[0xb];
            puVar7 = puVar7 + iVar25 * 4;
            *puVar7 = puVar13[8];
            puVar7[1] = uVar16;
            puVar7[2] = uVar17;
            puVar7[3] = uVar18;
            uVar22 = puVar6[2];
            uVar19 = *(uint *)((int)puVar9 + (0x38 - iVar10));
            uVar24 = uVar22;
            if (uVar19 < uVar22) {
              uVar24 = uVar19;
            }
            iVar8 = FUN_01bed842(*(undefined4 *)((int)puVar9 + (0x34 - iVar10)),puVar6[1],uVar24);
            if (iVar8 == 0) {
              iVar8 = uVar19 - uVar22;
            }
            iVar3 = 0x30 - iVar10;
            bVar4 = 0 < iVar8;
            puVar7 = (undefined4 *)(uint)(iVar8 < 0);
            if (iVar8 == 0) {
              bVar4 = *(byte *)((int)puVar9 + (0x3c - iVar10));
              puVar7 = puVar6;
            }
            if (iVar8 == 0) {
              puVar7 = (undefined4 *)(uint)*(byte *)(puVar7 + 3);
            }
            iVar25 = iVar25 + (uint)((byte)(cVar26 - cVar28) >> 7);
            puVar13 = param_3;
            if (-1 < (char)((uint)bVar4 - (int)puVar7)) {
              puVar13 = (undefined4 *)((int)local_64 + iVar10 + -0x40);
            }
            uVar16 = *(undefined4 *)((int)puVar9 + (0x34 - iVar10));
            uVar17 = *(undefined4 *)((int)puVar9 + (0x38 - iVar10));
            uVar18 = *(undefined4 *)((int)puVar9 + (0x3c - iVar10));
            puVar13 = puVar13 + iVar25 * 4;
            local_40 = iVar25 + (((uint)bVar4 - (int)puVar7 & 0xff) >> 7);
            iVar10 = iVar10 + -0x40;
            *puVar13 = *(undefined4 *)((int)puVar9 + iVar3);
            puVar13[1] = uVar16;
            puVar13[2] = uVar17;
            puVar13[3] = uVar18;
            local_44 = local_44 + 0x40;
          } while ((undefined4 *)((int)puVar9 + local_44) < param_1 + iVar5 * 4);
          local_64 = (undefined4 *)((int)local_64 + iVar10);
          puVar9 = (undefined4 *)((int)puVar9 + local_44);
        }
        if (puVar9 < param_1 + uVar12 * 4) {
          iVar5 = 0;
          iVar10 = 0;
          do {
            puVar7 = (undefined4 *)((int)puVar9 - iVar10);
            uVar19 = puVar7[2];
            uVar22 = puVar6[2];
            uVar24 = uVar22;
            if (uVar19 < uVar22) {
              uVar24 = uVar19;
            }
            iVar25 = FUN_01bed842(puVar7[1],puVar6[1],uVar24);
            if (iVar25 == 0) {
              iVar25 = uVar19 - uVar22;
            }
            cVar28 = iVar25 < 0;
            cVar26 = 0 < iVar25;
            if (iVar25 == 0) {
              cVar28 = *(char *)(puVar6 + 3);
              cVar26 = *(char *)(puVar7 + 3);
            }
            iVar5 = iVar5 + 0x10;
            puVar13 = param_3;
            if (-1 < (char)(cVar26 - cVar28)) {
              puVar13 = (undefined4 *)((int)local_64 + iVar10 + -0x10);
            }
            uVar16 = puVar7[1];
            uVar17 = puVar7[2];
            uVar18 = puVar7[3];
            puVar13 = puVar13 + local_40 * 4;
            local_40 = local_40 + ((byte)(cVar26 - cVar28) >> 7);
            iVar10 = iVar10 + -0x10;
            *puVar13 = *puVar7;
            puVar13[1] = uVar16;
            puVar13[2] = uVar17;
            puVar13[3] = uVar18;
          } while ((undefined4 *)((int)puVar9 + iVar5) < param_1 + uVar12 * 4);
          local_64 = (undefined4 *)((int)local_64 + iVar10);
          puVar9 = (undefined4 *)((int)puVar9 + iVar5);
        }
        if (uVar12 == uVar11) break;
        local_64 = local_64 + -4;
        uVar16 = puVar9[1];
        uVar17 = puVar9[2];
        uVar18 = puVar9[3];
        puVar7 = local_64 + local_40 * 4;
        *puVar7 = *puVar9;
        puVar7[1] = uVar16;
        puVar7[2] = uVar17;
        puVar7[3] = uVar18;
        puVar9 = puVar9 + 4;
        uVar12 = uVar11;
      }
      FUN_01bed4e2(param_1,param_3,local_40 << 4);
      iVar5 = uVar11 - local_40;
      if (iVar5 != 0) {
        puVar7 = param_3 + uVar11 * 4 + -4;
        puVar9 = param_1 + local_40 * 4;
        iVar10 = iVar5;
        do {
          uVar16 = *puVar7;
          uVar17 = puVar7[1];
          uVar18 = puVar7[2];
          uVar20 = puVar7[3];
          puVar7 = puVar7 + -4;
          iVar10 = iVar10 + -1;
          *puVar9 = uVar16;
          puVar9[1] = uVar17;
          puVar9[2] = uVar18;
          puVar9[3] = uVar20;
          puVar9 = puVar9 + 4;
        } while (iVar10 != 0);
      }
      if (local_40 == 0) goto LAB_01695b0c;
      if (uVar11 < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_01695404(param_1 + local_40 * 4,iVar5,param_3,param_4,param_5,&local_38);
      uVar11 = local_40;
      param_2 = local_40;
    } while (0x20 < local_40);
  }
LAB_01695428:
  if (1 < param_2) {
    if (param_4 < param_2 + 0x10) {
LAB_01696090:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1696090);
      (*pcVar1)();
    }
    uVar11 = param_2 >> 1;
    if (param_2 < 0x10) {
      puVar7 = param_3 + uVar11 * 4;
      puVar9 = param_1 + uVar11 * 4;
      if (param_2 < 8) {
        uVar16 = param_1[1];
        uVar17 = param_1[2];
        uVar18 = param_1[3];
        *param_3 = *param_1;
        param_3[1] = uVar16;
        param_3[2] = uVar17;
        param_3[3] = uVar18;
        uVar16 = puVar9[1];
        uVar17 = puVar9[2];
        uVar18 = puVar9[3];
        *puVar7 = *puVar9;
        puVar7[1] = uVar16;
        puVar7[2] = uVar17;
        puVar7[3] = uVar18;
        uVar15 = 1;
      }
      else {
        FUN_01694444();
        FUN_01694444(puVar9,puVar7);
        uVar15 = 4;
      }
    }
    else {
      FUN_01694770(param_1,param_3,param_3 + param_2 * 4);
      FUN_01694770(param_1 + uVar11 * 4,param_3 + uVar11 * 4,param_3 + param_2 * 4 + 0x20);
      uVar15 = 8;
    }
    local_30[0] = 0;
    iVar5 = 0;
    local_30[1] = uVar11;
    do {
      iVar10 = local_30[iVar5];
      uVar12 = uVar11;
      if (iVar10 != 0) {
        uVar12 = param_2 - uVar11;
      }
      if (uVar15 < uVar12) {
        puVar7 = param_1 + uVar15 * 4 + iVar10 * 4;
        puVar9 = param_3 + uVar15 * 4 + iVar10 * 4;
        iVar25 = uVar12 - uVar15;
        do {
          uVar16 = puVar7[1];
          uVar17 = puVar7[2];
          uVar18 = puVar7[3];
          *puVar9 = *puVar7;
          puVar9[1] = uVar16;
          puVar9[2] = uVar17;
          puVar9[3] = uVar18;
          FUN_0169433c(param_3 + iVar10 * 4,puVar9);
          puVar7 = puVar7 + 4;
          puVar9 = puVar9 + 4;
          iVar25 = iVar25 + -1;
        } while (iVar25 != 0);
      }
      bVar29 = iVar5 == 0;
      iVar5 = 1;
    } while (bVar29);
    FUN_016947a8(param_3,param_2,param_1);
  }
  return;
}

