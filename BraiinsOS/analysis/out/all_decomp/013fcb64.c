// FUN_013fcb64 @ 013fcb64 size=3532 calls_out=8 calls_in=2
// strings: 

void FUN_013fcb64(ushort *param_1,uint param_2,ushort *param_3,uint param_4,int param_5,
                 byte *param_6)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort uVar9;
  ushort *puVar10;
  uint uVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort *puVar15;
  ushort uVar16;
  int iVar17;
  ushort *puVar18;
  int iVar19;
  ushort uVar20;
  ushort *puVar21;
  ushort *puVar22;
  byte *pbVar23;
  ushort *puVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ushort *puVar29;
  uint uVar30;
  uint uVar31;
  bool bVar32;
  bool bVar33;
  byte *local_48;
  int local_40;
  byte local_26;
  byte local_25;
  
  if (0x20 < param_2) {
    local_48 = param_6;
    local_40 = param_5;
LAB_013fcc0c:
    uVar31 = param_2;
    do {
      if (local_40 == 0) {
        FUN_013fad9c(param_1,uVar31,param_3,param_4,1);
        return;
      }
      puVar15 = (ushort *)((int)param_1 + (uVar31 & 0x3ffffff8));
      puVar12 = param_1 + ((uVar31 & 0xfffffff8) - (uVar31 >> 3));
      if (uVar31 < 0x40) {
        bVar3 = (byte)*puVar15;
        bVar4 = (byte)*param_1;
        bVar2 = (byte)*puVar12;
        bVar33 = bVar3 <= bVar4;
        if (bVar4 == bVar3) {
          bVar33 = *(byte *)((int)puVar15 + 1) <= *(byte *)((int)param_1 + 1);
        }
        bVar32 = bVar2 <= bVar4;
        if (bVar4 == bVar2) {
          bVar32 = *(byte *)((int)puVar12 + 1) <= *(byte *)((int)param_1 + 1);
        }
        puVar10 = param_1;
        if (!bVar33 == !bVar32) {
          bVar32 = bVar2 <= bVar3;
          if (bVar3 == bVar2) {
            bVar32 = *(byte *)((int)puVar12 + 1) <= *(byte *)((int)puVar15 + 1);
          }
          puVar10 = puVar15;
          if (!bVar33 != !bVar32) {
            puVar10 = puVar12;
          }
        }
      }
      else {
        puVar10 = (ushort *)FUN_013fd958(param_1);
      }
      local_26 = (byte)*puVar10;
      local_25 = *(byte *)((int)puVar10 + 1);
      local_40 = local_40 + -1;
      uVar26 = (uint)((int)puVar10 - (int)param_1) >> 1;
      if (local_48 != (byte *)0x0) {
        bVar33 = local_26 <= *local_48;
        if (*local_48 == local_26) {
          bVar33 = local_25 <= local_48[1];
        }
        if (bVar33) goto LAB_013fcfa4;
      }
      if (param_4 < uVar31) goto LAB_013fd914;
      puVar15 = param_3 + uVar31;
      param_2 = 0;
      puVar12 = param_1;
      uVar28 = uVar26;
      while( true ) {
        iVar25 = uVar28 - 3;
        if (uVar28 < 3) {
          iVar25 = 0;
        }
        if (puVar12 < param_1 + iVar25) {
          bVar3 = (byte)*puVar10;
          bVar4 = *(byte *)((int)puVar10 + 1);
          do {
            bVar2 = *(byte *)((int)puVar12 + 3);
            uVar6 = puVar12[1];
            bVar33 = bVar3 <= (byte)*puVar12;
            if ((byte)*puVar12 == bVar3) {
              bVar33 = bVar4 <= *(byte *)((int)puVar12 + 1);
            }
            puVar14 = param_3;
            if (!bVar33 == 0) {
              puVar14 = puVar15 + -1;
            }
            iVar19 = param_2 + !bVar33;
            uVar16 = puVar12[1];
            puVar14[param_2] = *puVar12;
            bVar33 = bVar3 <= (byte)uVar6;
            if ((byte)uVar6 == bVar3) {
              bVar33 = bVar4 <= bVar2;
            }
            puVar14 = param_3;
            if (!bVar33 == 0) {
              puVar14 = puVar15 + -2;
            }
            iVar17 = iVar19 + (uint)!bVar33;
            bVar2 = *(byte *)((int)puVar12 + 5);
            puVar14[iVar19] = uVar16;
            bVar33 = bVar3 <= (byte)puVar12[2];
            if ((byte)puVar12[2] == bVar3) {
              bVar33 = bVar4 <= bVar2;
            }
            puVar14 = param_3;
            if (!bVar33 == 0) {
              puVar14 = puVar15 + -3;
            }
            puVar15 = puVar15 + -4;
            iVar19 = iVar17 + (uint)!bVar33;
            bVar2 = *(byte *)((int)puVar12 + 7);
            puVar14[iVar17] = puVar12[2];
            puVar14 = puVar12 + 3;
            puVar13 = puVar12 + 3;
            puVar12 = puVar12 + 4;
            bVar33 = bVar3 <= (byte)*puVar14;
            if ((byte)*puVar14 == bVar3) {
              bVar33 = bVar4 <= bVar2;
            }
            param_2 = iVar19 + (uint)!bVar33;
            puVar14 = puVar15;
            if (!bVar33 != 0) {
              puVar14 = param_3;
            }
            puVar14[iVar19] = *puVar13;
          } while (puVar12 < param_1 + iVar25);
        }
        puVar14 = puVar12;
        if (puVar12 < param_1 + uVar28) {
          uVar6 = *puVar10;
          bVar3 = *(byte *)((int)puVar10 + 1);
          do {
            puVar15 = puVar15 + -1;
            uVar16 = *puVar12;
            bVar33 = (byte)uVar6 <= (byte)*puVar12;
            if ((byte)*puVar12 == (byte)uVar6) {
              bVar33 = bVar3 <= *(byte *)((int)puVar12 + 1);
            }
            puVar14 = puVar15;
            if (!bVar33 != 0) {
              puVar14 = param_3;
            }
            puVar12 = puVar12 + 1;
            puVar14 = puVar14 + param_2;
            param_2 = param_2 + !bVar33;
            *puVar14 = uVar16;
            puVar14 = puVar12;
          } while (puVar12 < param_1 + uVar28);
        }
        if (uVar28 == uVar31) break;
        puVar15 = puVar15 + -1;
        puVar12 = puVar14 + 1;
        puVar15[param_2] = *puVar14;
        uVar28 = uVar31;
      }
      FUN_016dd1aa(param_1,param_3,param_2 << 1);
      iVar25 = uVar31 - param_2;
      if (iVar25 != 0) {
        puVar15 = param_3 + (uVar31 - 1);
        puVar12 = param_1 + param_2;
        iVar19 = iVar25;
        do {
          iVar19 = iVar19 + -1;
          *puVar12 = *puVar15;
          puVar15 = puVar15 + -1;
          puVar12 = puVar12 + 1;
        } while (iVar19 != 0);
      }
      if (param_2 == 0) goto LAB_013fcfa4;
      if (uVar31 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
      }
      FUN_013fcb64(param_1 + param_2,iVar25,param_3,param_4,local_40,&local_26);
      uVar31 = param_2;
      if (param_2 < 0x21) break;
    } while( true );
  }
LAB_013fcb88:
  if (param_2 < 2) {
    return;
  }
  if (param_4 < param_2 + 0x10) goto LAB_013fd914;
  puVar15 = param_3 + param_2;
  uVar31 = param_2 >> 1;
  if (param_2 < 0x10) {
    if (param_2 < 8) {
      *param_3 = *param_1;
      uVar26 = 1;
      param_3[uVar31] = param_1[uVar31];
      uVar28 = param_2 - uVar31;
      if (1 < uVar31) goto LAB_013fd604;
    }
    else {
      bVar33 = (byte)param_1[2] <= (byte)param_1[3];
      if ((byte)param_1[3] == (byte)param_1[2]) {
        bVar33 = *(byte *)((int)param_1 + 5) <= *(byte *)((int)param_1 + 7);
      }
      bVar32 = (byte)*param_1 <= (byte)param_1[1];
      if ((byte)param_1[1] == (byte)*param_1) {
        bVar32 = *(byte *)((int)param_1 + 1) <= *(byte *)((int)param_1 + 3);
      }
      uVar26 = (uint)!bVar32;
      uVar28 = 3;
      puVar12 = param_1 + uVar26;
      if (!bVar33) {
        uVar28 = 2;
      }
      puVar10 = param_1 + uVar28;
      uVar11 = 2;
      uVar27 = uVar26 ^ 1;
      if (!bVar33) {
        uVar11 = 3;
      }
      puVar14 = param_1 + uVar27;
      puVar13 = param_1 + uVar11;
      bVar33 = (byte)*puVar14 <= (byte)*puVar10;
      if ((byte)*puVar10 == (byte)*puVar14) {
        bVar33 = *(byte *)((int)puVar14 + 1) <= *(byte *)((int)puVar10 + 1);
      }
      puVar24 = puVar14;
      if (!bVar33) {
        puVar24 = puVar13;
      }
      uVar30 = uVar27;
      puVar8 = puVar10;
      if (!bVar33) {
        uVar30 = uVar11;
        puVar8 = puVar14;
      }
      bVar32 = (byte)*puVar12 <= (byte)*puVar13;
      if ((byte)*puVar13 == (byte)*puVar12) {
        bVar32 = *(byte *)((int)puVar12 + 1) <= *(byte *)((int)puVar13 + 1);
      }
      if (bVar32) {
        uVar27 = uVar11;
        puVar18 = puVar12;
        puVar14 = puVar13;
        puVar12 = puVar24;
        uVar26 = uVar30;
      }
      else {
        puVar18 = puVar13;
      }
      if (!bVar33) {
        puVar14 = puVar10;
      }
      uVar6 = param_1[uVar26];
      if (!bVar33) {
        uVar27 = uVar28;
      }
      uVar20 = param_1[uVar27];
      uVar16 = *puVar18;
      bVar3 = *(byte *)((int)puVar12 + 1);
      uVar26 = 2;
      bVar4 = *(byte *)((int)puVar14 + 1);
      puVar10 = param_1 + uVar31;
      bVar33 = (byte)puVar10[2] <= (byte)puVar10[3];
      if ((byte)puVar10[3] == (byte)puVar10[2]) {
        bVar33 = *(byte *)((int)puVar10 + 5) <= *(byte *)((int)puVar10 + 7);
      }
      uVar28 = 3;
      bVar32 = (byte)*puVar10 <= (byte)puVar10[1];
      if ((byte)puVar10[1] == (byte)*puVar10) {
        bVar32 = *(byte *)((int)puVar10 + 1) <= *(byte *)((int)puVar10 + 3);
      }
      uVar11 = (uint)!bVar32;
      puVar13 = puVar10 + uVar11;
      uVar27 = uVar11 ^ 1;
      if (!bVar33) {
        uVar28 = 2;
      }
      puVar24 = puVar10 + uVar28;
      if (!bVar33) {
        uVar26 = 3;
      }
      puVar18 = puVar10 + uVar27;
      puVar21 = puVar10 + uVar26;
      bVar33 = (byte)*puVar18 <= (byte)*puVar24;
      if ((byte)*puVar24 == (byte)*puVar18) {
        bVar33 = *(byte *)((int)puVar18 + 1) <= *(byte *)((int)puVar24 + 1);
      }
      puVar29 = puVar18;
      uVar30 = uVar27;
      if (!bVar33) {
        puVar29 = puVar21;
        uVar30 = uVar26;
      }
      bVar32 = (byte)*puVar13 <= (byte)*puVar21;
      if ((byte)*puVar21 == (byte)*puVar13) {
        bVar32 = *(byte *)((int)puVar13 + 1) <= *(byte *)((int)puVar21 + 1);
      }
      puVar22 = puVar21;
      puVar7 = puVar13;
      if (!bVar32) {
        puVar22 = puVar18;
        puVar7 = puVar21;
        uVar26 = uVar27;
        puVar29 = puVar13;
        uVar30 = uVar11;
      }
      if (bVar33) {
        uVar28 = uVar26;
        puVar18 = puVar24;
      }
      else {
        puVar22 = puVar24;
      }
      uVar9 = puVar10[uVar30];
      param_3[3] = *puVar8;
      uVar5 = *puVar18;
      bVar33 = (byte)uVar6 <= (byte)uVar20;
      if ((byte)uVar20 == (byte)uVar6) {
        bVar33 = bVar3 <= bVar4;
      }
      uVar6 = puVar10[uVar28];
      puVar10 = puVar14;
      if (!bVar33) {
        puVar10 = puVar12;
        puVar12 = puVar14;
      }
      uVar20 = *puVar10;
      param_3[1] = *puVar12;
      param_3[2] = uVar20;
      uVar20 = *puVar7;
      bVar33 = (byte)uVar9 <= (byte)uVar6;
      if ((byte)uVar6 == (byte)uVar9) {
        bVar33 = *(byte *)((int)puVar29 + 1) <= *(byte *)((int)puVar22 + 1);
      }
      puVar12 = puVar22;
      if (!bVar33) {
        puVar12 = puVar29;
        puVar29 = puVar22;
      }
      *param_3 = uVar16;
      uVar26 = 4;
      uVar6 = *puVar12;
      uVar16 = *puVar29;
      puVar12 = param_3 + uVar31;
      *puVar12 = uVar20;
      puVar12[3] = uVar5;
      puVar12[1] = uVar16;
      puVar12[2] = uVar6;
      uVar28 = param_2 - uVar31;
      if (4 < uVar31) {
LAB_013fd604:
        iVar25 = uVar26 << 1;
        uVar27 = uVar26;
        do {
          uVar6 = param_1[uVar27];
          puVar12 = param_3 + uVar27;
          *puVar12 = uVar6;
          uVar20 = (ushort)(byte)puVar12[-1];
          uVar16 = uVar6 & 0xff;
          bVar33 = uVar16 <= uVar20 && uVar20 != uVar16;
          if (uVar20 == uVar16) {
            bVar33 = uVar6 >> 8 < (ushort)*(byte *)((int)puVar12 + -1);
          }
          if (bVar33) {
            iVar19 = iVar25;
            do {
              pbVar23 = (byte *)((int)param_3 + iVar19);
              *(undefined2 *)pbVar23 = *(undefined2 *)(pbVar23 + -2);
              if (iVar19 == 2) {
                puVar12 = param_3;
                goto LAB_013fd614;
              }
              uVar20 = (ushort)pbVar23[-4];
              iVar19 = iVar19 + -2;
              bVar33 = uVar16 <= uVar20 && uVar20 != uVar16;
              if (uVar20 == uVar16) {
                bVar33 = uVar6 >> 8 < (ushort)pbVar23[-3];
              }
            } while (bVar33);
            puVar12 = (ushort *)((int)param_3 + iVar19);
LAB_013fd614:
            *puVar12 = uVar6;
          }
          uVar27 = uVar27 + 1;
          iVar25 = iVar25 + 2;
        } while (uVar27 != uVar31);
      }
    }
  }
  else {
    FUN_013f6ef4(param_1,param_3,puVar15);
    FUN_013f6ef4(param_1 + uVar31,param_3 + uVar31,puVar15 + 8);
    uVar26 = 8;
    uVar28 = param_2 - uVar31;
    if (8 < uVar31) goto LAB_013fd604;
  }
  puVar12 = param_3 + uVar31;
  if (uVar26 < uVar28) {
    iVar25 = 2;
    puVar10 = puVar12;
    uVar27 = uVar26;
    do {
      uVar6 = param_1[uVar31 + uVar27];
      puVar14 = puVar12 + uVar27;
      *puVar14 = uVar6;
      uVar16 = (ushort)(byte)puVar14[-1];
      uVar20 = uVar6 & 0xff;
      bVar33 = uVar20 <= uVar16 && uVar16 != uVar20;
      if (uVar16 == uVar20) {
        bVar33 = uVar6 >> 8 < (ushort)*(byte *)((int)puVar14 + -1);
      }
      if (bVar33) {
        iVar19 = iVar25;
        puVar14 = puVar10;
        do {
          puVar13 = puVar14 + uVar26;
          *puVar13 = puVar13[-1];
          if (uVar26 * 2 == iVar19) {
            puVar14 = puVar12;
            goto LAB_013fd6f0;
          }
          iVar19 = iVar19 + 2;
          uVar16 = (ushort)(byte)puVar13[-2];
          puVar14 = puVar14 + -1;
          bVar33 = uVar20 <= uVar16 && uVar16 != uVar20;
          if (uVar16 == uVar20) {
            bVar33 = uVar6 >> 8 < (ushort)*(byte *)((int)puVar13 + -3);
          }
        } while (bVar33);
        puVar14 = puVar14 + uVar26;
LAB_013fd6f0:
        *puVar14 = uVar6;
      }
      uVar27 = uVar27 + 1;
      iVar25 = iVar25 + -2;
      puVar10 = puVar10 + 1;
    } while (uVar27 != uVar28);
  }
  puVar10 = puVar12 + -1;
  iVar25 = 0;
  do {
    puVar14 = puVar15 + -1;
    bVar33 = (byte)*param_3 <= (byte)*puVar12;
    if ((byte)*puVar12 == (byte)*param_3) {
      bVar33 = *(byte *)((int)param_3 + 1) <= *(byte *)((int)puVar12 + 1);
    }
    uVar26 = (uint)!bVar33;
    uVar6 = *puVar10;
    puVar13 = param_3;
    if (uVar26 != 0) {
      puVar13 = puVar12;
    }
    uVar16 = *puVar14;
    puVar12 = puVar12 + uVar26;
    *(ushort *)((int)param_1 + iVar25) = *puVar13;
    bVar33 = (byte)uVar6 <= (byte)uVar16;
    if ((byte)uVar16 == (byte)uVar6) {
      bVar33 = *(byte *)((int)puVar10 + 1) <= *(byte *)((int)puVar15 + -1);
    }
    uVar28 = (uint)!bVar33;
    puVar15 = puVar14;
    if (uVar28 != 0) {
      puVar15 = puVar10;
    }
    puVar10 = puVar10 + -uVar28;
    uVar31 = uVar31 - 1;
    *(ushort *)((int)param_1 + ((param_2 * 2 + -2) - iVar25)) = *puVar15;
    iVar25 = iVar25 + 2;
    param_3 = param_3 + (uVar26 ^ 1);
    puVar15 = puVar14 + uVar28;
  } while (uVar31 != 0);
  puVar10 = puVar10 + 1;
  puVar14 = puVar15;
  if ((param_2 & 1) != 0) {
    bVar33 = param_3 < puVar10;
    puVar14 = puVar12;
    if (bVar33) {
      puVar14 = param_3;
    }
    *(ushort *)((int)param_1 + iVar25) = *puVar14;
    puVar14 = (ushort *)(uint)bVar33;
    param_3 = param_3 + (int)puVar14;
    puVar12 = puVar12 + !bVar33;
  }
  if (param_3 == puVar10) {
    puVar14 = puVar15;
  }
  if (param_3 == puVar10 && puVar12 == puVar14) {
    return;
  }
  FUN_00fb7254();
LAB_013fd914:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x13fd914);
  (*pcVar1)();
LAB_013fcfa4:
  if (param_4 < uVar31) goto LAB_013fd914;
  puVar12 = param_3 + uVar31;
  uVar28 = 0;
  puVar15 = param_1;
  while( true ) {
    iVar25 = uVar26 - 3;
    if (uVar26 < 3) {
      iVar25 = 0;
    }
    if (puVar15 < param_1 + iVar25) {
      bVar3 = (byte)*puVar10;
      bVar4 = *(byte *)((int)puVar10 + 1);
      do {
        bVar2 = *(byte *)((int)puVar15 + 3);
        uVar6 = puVar15[1];
        bVar33 = bVar3 < (byte)*puVar15;
        if (bVar3 == (byte)*puVar15) {
          bVar33 = bVar4 < *(byte *)((int)puVar15 + 1);
        }
        puVar14 = param_3;
        if (!bVar33 == 0) {
          puVar14 = puVar12 + -1;
        }
        puVar14[uVar28] = *puVar15;
        iVar19 = uVar28 + !bVar33;
        bVar33 = bVar3 < (byte)uVar6;
        if (bVar3 == (byte)uVar6) {
          bVar33 = bVar4 < bVar2;
        }
        puVar14 = param_3;
        if (!bVar33 == 0) {
          puVar14 = puVar12 + -2;
        }
        iVar17 = iVar19 + (uint)!bVar33;
        puVar14[iVar19] = puVar15[1];
        bVar33 = bVar3 < (byte)puVar15[2];
        if (bVar3 == (byte)puVar15[2]) {
          bVar33 = bVar4 < *(byte *)((int)puVar15 + 5);
        }
        puVar14 = param_3;
        if (!bVar33 == 0) {
          puVar14 = puVar12 + -3;
        }
        puVar12 = puVar12 + -4;
        iVar19 = iVar17 + (uint)!bVar33;
        bVar2 = *(byte *)((int)puVar15 + 7);
        puVar14[iVar17] = puVar15[2];
        puVar14 = puVar15 + 3;
        puVar13 = puVar15 + 3;
        puVar15 = puVar15 + 4;
        bVar33 = bVar3 < (byte)*puVar14;
        if (bVar3 == (byte)*puVar14) {
          bVar33 = bVar4 < bVar2;
        }
        uVar28 = iVar19 + (uint)!bVar33;
        puVar14 = puVar12;
        if (!bVar33 != 0) {
          puVar14 = param_3;
        }
        puVar14[iVar19] = *puVar13;
      } while (puVar15 < param_1 + iVar25);
    }
    if (puVar15 < param_1 + uVar26) {
      uVar6 = *puVar10;
      bVar3 = *(byte *)((int)puVar10 + 1);
      do {
        puVar12 = puVar12 + -1;
        uVar16 = *puVar15;
        bVar33 = (byte)uVar6 < (byte)*puVar15;
        if ((byte)uVar6 == (byte)*puVar15) {
          bVar33 = bVar3 < *(byte *)((int)puVar15 + 1);
        }
        puVar14 = puVar12;
        if (!bVar33 != 0) {
          puVar14 = param_3;
        }
        puVar15 = puVar15 + 1;
        puVar14 = puVar14 + uVar28;
        uVar28 = uVar28 + !bVar33;
        *puVar14 = uVar16;
      } while (puVar15 < param_1 + uVar26);
    }
    if (uVar26 == uVar31) break;
    puVar14 = param_3 + uVar28;
    uVar28 = uVar28 + 1;
    puVar12 = puVar12 + -1;
    *puVar14 = *puVar15;
    puVar15 = puVar15 + 1;
    uVar26 = uVar31;
  }
  FUN_016dd1aa(param_1,param_3,uVar28 << 1);
  param_2 = uVar31 - uVar28;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + uVar28;
  puVar15 = param_3 + (uVar31 - 1);
  uVar26 = param_2;
  puVar12 = param_1;
  do {
    uVar26 = uVar26 - 1;
    *puVar12 = *puVar15;
    puVar15 = puVar15 + -1;
    puVar12 = puVar12 + 1;
  } while (uVar26 != 0);
  if (uVar31 < uVar28) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar28,uVar31,uVar31,&DAT_018af348);
  }
  local_48 = (byte *)0x0;
  if (param_2 < 0x21) goto LAB_013fcb88;
  goto LAB_013fcc0c;
}

