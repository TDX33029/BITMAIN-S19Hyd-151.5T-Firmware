// FUN_010d341c @ 010d341c size=2148 calls_out=8 calls_in=2
// strings: 

void FUN_010d341c(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,int param_6)

{
  code *pcVar1;
  byte bVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  int local_3c;
  uint local_28;
  
  if (0x20 < param_2) {
    local_3c = param_6;
    do {
      uVar19 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_010d4160(param_1,uVar19,param_3,param_4,1);
          return;
        }
        puVar3 = param_1 + (uVar19 >> 3) * 4;
        if (uVar19 < 0x40) {
          uVar5 = param_1[(uVar19 >> 3) * 8 - (uVar19 >> 3)];
          uVar21 = *param_1 >> 0x18;
          bVar23 = uVar21 < *puVar3 >> 0x18;
          if (bVar23 != *puVar3 >> 0x18 < uVar5 >> 0x18) {
            puVar3 = param_1 + ((uVar19 >> 3) * 8 - (uVar19 >> 3));
          }
          if (bVar23 != uVar21 < uVar5 >> 0x18) {
            puVar3 = param_1;
          }
        }
        else {
          puVar3 = (uint *)FUN_010d3ca8(param_1,puVar3);
        }
        uVar21 = (int)puVar3 - (int)param_1;
        local_28 = *puVar3;
        param_5 = param_5 + -1;
        if ((local_3c != 0) && (local_28 >> 0x18 <= (uint)*(byte *)(local_3c + 3))) break;
        if (param_4 < uVar19) goto LAB_010d3c64;
        puVar3 = param_3 + uVar19;
        param_2 = 0;
        puVar4 = param_1;
        uVar5 = uVar21 >> 2;
        while( true ) {
          iVar17 = uVar5 - 3;
          if (uVar5 < 3) {
            iVar17 = 0;
          }
          if (puVar4 < param_1 + iVar17) {
            uVar12 = (uint)*(byte *)((int)param_1 + uVar21 + 3);
            do {
              uVar15 = *puVar4;
              uVar22 = puVar4[1];
              uVar20 = puVar4[2];
              uVar14 = uVar15 >> 0x18;
              uVar9 = puVar4[3];
              puVar8 = param_3;
              if (uVar12 <= uVar14) {
                puVar8 = puVar3 + -1;
              }
              puVar4 = puVar4 + 4;
              puVar8[param_2] = uVar15;
              if (uVar14 < uVar12) {
                param_2 = param_2 + 1;
              }
              uVar14 = uVar22 >> 0x18;
              puVar8 = param_3;
              if (uVar12 <= uVar14) {
                puVar8 = puVar3 + -2;
              }
              puVar8[param_2] = uVar22;
              if (uVar14 < uVar12) {
                param_2 = param_2 + 1;
              }
              uVar14 = uVar20 >> 0x18;
              puVar8 = param_3;
              if (uVar12 <= uVar14) {
                puVar8 = puVar3 + -3;
              }
              puVar3 = puVar3 + -4;
              puVar8[param_2] = uVar20;
              if (uVar14 < uVar12) {
                param_2 = param_2 + 1;
              }
              uVar14 = uVar9 >> 0x18;
              puVar8 = puVar3;
              if (uVar14 < uVar12) {
                puVar8 = param_3;
              }
              puVar8[param_2] = uVar9;
              if (uVar14 < uVar12) {
                param_2 = param_2 + 1;
              }
            } while (puVar4 < param_1 + iVar17);
          }
          puVar8 = puVar4;
          if (puVar4 < param_1 + uVar5) {
            uVar12 = (uint)*(byte *)((int)param_1 + uVar21 + 3);
            do {
              puVar8 = puVar4 + 1;
              puVar3 = puVar3 + -1;
              uVar14 = *puVar4 >> 0x18;
              puVar7 = puVar3;
              if (uVar14 < uVar12) {
                puVar7 = param_3;
              }
              puVar7[param_2] = *puVar4;
              if (uVar14 < uVar12) {
                param_2 = param_2 + 1;
              }
              puVar4 = puVar8;
            } while (puVar8 < param_1 + uVar5);
          }
          if (uVar5 == uVar19) break;
          puVar3 = puVar3 + -1;
          puVar4 = puVar8 + 1;
          puVar3[param_2] = *puVar8;
          uVar5 = uVar19;
        }
        FUN_016dd1aa(param_1,param_3,param_2 << 2);
        iVar17 = uVar19 - param_2;
        if (iVar17 != 0) {
          puVar3 = param_3 + (uVar19 - 1);
          puVar4 = param_1 + param_2;
          iVar6 = iVar17;
          do {
            iVar6 = iVar6 + -1;
            *puVar4 = *puVar3;
            puVar3 = puVar3 + -1;
            puVar4 = puVar4 + 1;
          } while (iVar6 != 0);
        }
        if (param_2 == 0) break;
        if (uVar19 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
        }
        FUN_010d341c(param_1 + param_2,iVar17,param_3,param_4,param_5,&local_28);
        uVar19 = param_2;
        if (param_2 < 0x21) goto LAB_010d343c;
      }
      if (param_4 < uVar19) goto LAB_010d3c64;
      puVar3 = param_3 + uVar19;
      uVar5 = 0;
      puVar4 = param_1;
      uVar12 = uVar21 >> 2;
      while( true ) {
        iVar17 = uVar12 - 3;
        if (uVar12 < 3) {
          iVar17 = 0;
        }
        if (puVar4 < param_1 + iVar17) {
          uVar14 = (uint)*(byte *)((int)param_1 + uVar21 + 3);
          do {
            uVar15 = *puVar4;
            uVar20 = puVar4[1];
            uVar22 = puVar4[2];
            bVar23 = uVar14 < uVar15 >> 0x18;
            uVar9 = puVar4[3];
            puVar8 = param_3;
            if (bVar23) {
              puVar8 = puVar3 + -1;
            }
            puVar4 = puVar4 + 4;
            puVar8[uVar5] = uVar15;
            if (!bVar23) {
              uVar5 = uVar5 + 1;
            }
            bVar23 = uVar14 < uVar20 >> 0x18;
            puVar8 = param_3;
            if (bVar23) {
              puVar8 = puVar3 + -2;
            }
            puVar8[uVar5] = uVar20;
            if (!bVar23) {
              uVar5 = uVar5 + 1;
            }
            bVar23 = uVar14 < uVar22 >> 0x18;
            puVar8 = param_3;
            if (bVar23) {
              puVar8 = puVar3 + -3;
            }
            puVar3 = puVar3 + -4;
            puVar8[uVar5] = uVar22;
            if (!bVar23) {
              uVar5 = uVar5 + 1;
            }
            bVar23 = uVar9 >> 0x18 <= uVar14;
            puVar8 = puVar3;
            if (bVar23) {
              puVar8 = param_3;
            }
            puVar8[uVar5] = uVar9;
            if (bVar23) {
              uVar5 = uVar5 + 1;
            }
          } while (puVar4 < param_1 + iVar17);
        }
        puVar8 = puVar4;
        if (puVar4 < param_1 + uVar12) {
          bVar2 = *(byte *)((int)param_1 + uVar21 + 3);
          do {
            puVar8 = puVar4 + 1;
            puVar3 = puVar3 + -1;
            bVar23 = *puVar4 >> 0x18 <= (uint)bVar2;
            puVar7 = puVar3;
            if (bVar23) {
              puVar7 = param_3;
            }
            puVar7[uVar5] = *puVar4;
            if (bVar23) {
              uVar5 = uVar5 + 1;
            }
            puVar4 = puVar8;
          } while (puVar8 < param_1 + uVar12);
        }
        if (uVar12 == uVar19) break;
        puVar4 = puVar8 + 1;
        puVar3 = puVar3 + -1;
        param_3[uVar5] = *puVar8;
        uVar5 = uVar5 + 1;
        uVar12 = uVar19;
      }
      FUN_016dd1aa(param_1,param_3,uVar5 << 2);
      param_2 = uVar19 - uVar5;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar5;
      puVar3 = param_3 + (uVar19 - 1);
      uVar21 = param_2;
      puVar4 = param_1;
      do {
        uVar21 = uVar21 - 1;
        *puVar4 = *puVar3;
        puVar3 = puVar3 + -1;
        puVar4 = puVar4 + 1;
      } while (uVar21 != 0);
      if (uVar19 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar5,uVar19,uVar19,&DAT_018af348);
      }
      local_3c = 0;
    } while (0x20 < param_2);
  }
LAB_010d343c:
  uVar19 = param_2 >> 1;
  if (uVar19 == 0) {
    return;
  }
  puVar3 = param_3 + param_2;
  if (param_2 < 0x10) {
    if (param_2 < 8) {
      uVar21 = param_1[uVar19];
      *param_3 = *param_1;
      uVar5 = 1;
      param_3[uVar19] = uVar21;
      uVar21 = param_2 - uVar19;
      if (uVar19 < 2) goto LAB_010d3ae4;
    }
    else {
      uVar21 = 3;
      uVar5 = 2;
      if (*(byte *)((int)param_1 + uVar19 * 4 + 0xf) < *(byte *)((int)param_1 + uVar19 * 4 + 0xb)) {
        uVar21 = 2;
        uVar5 = 3;
      }
      bVar23 = *(byte *)((int)param_1 + uVar19 * 4 + 3) <= *(byte *)((int)param_1 + uVar19 * 4 + 7);
      uVar15 = (uint)bVar23;
      uVar20 = param_1[uVar19 + uVar15];
      uVar9 = (uint)!bVar23;
      iVar17 = uVar19 + uVar5;
      uVar22 = param_1[uVar19 + uVar9];
      uVar12 = param_1[uVar19 + uVar21] >> 0x18;
      uVar14 = uVar15;
      if (uVar12 < uVar20 >> 0x18) {
        uVar14 = uVar5;
      }
      if (param_1[iVar17] >> 0x18 < uVar22 >> 0x18) {
        uVar5 = uVar15;
        uVar14 = uVar9;
        uVar22 = param_1[iVar17];
      }
      bVar23 = uVar12 < uVar20 >> 0x18;
      if (bVar23) {
        uVar5 = uVar21;
      }
      uVar21 = param_1[uVar19 + uVar21];
      if (bVar23) {
        uVar21 = uVar20;
      }
      uVar12 = 3;
      uVar9 = 2;
      if (*(byte *)((int)param_1 + 0xf) < *(byte *)((int)param_1 + 0xb)) {
        uVar12 = 2;
        uVar9 = 3;
      }
      bVar23 = *(byte *)((int)param_1 + 3) <= *(byte *)((int)param_1 + 7);
      uVar15 = (uint)bVar23;
      uVar13 = param_1[uVar15];
      uVar11 = (uint)!bVar23;
      uVar20 = param_1[uVar12] >> 0x18;
      uVar10 = uVar15;
      if (uVar20 < uVar13 >> 0x18) {
        uVar10 = uVar9;
      }
      bVar23 = param_1[uVar11] >> 0x18 <= param_1[uVar9] >> 0x18;
      uVar16 = param_1[uVar11];
      if (!bVar23) {
        uVar16 = param_1[uVar9];
      }
      uVar5 = param_1[uVar19 + uVar5];
      if (bVar23) {
        uVar11 = uVar10;
        uVar15 = uVar9;
      }
      uVar11 = param_1[uVar11];
      uVar9 = param_1[uVar12];
      if (uVar20 < uVar13 >> 0x18) {
        uVar9 = uVar13;
        uVar15 = uVar12;
      }
      uVar12 = param_1[uVar15];
      *param_3 = uVar16;
      param_3[3] = uVar9;
      uVar9 = param_1[uVar19 + uVar14];
      uVar14 = uVar11;
      if (uVar12 >> 0x18 < uVar11 >> 0x18) {
        uVar14 = uVar12;
        uVar12 = uVar11;
      }
      param_3[1] = uVar14;
      param_3[2] = uVar12;
      puVar4 = param_3 + uVar19;
      *puVar4 = uVar22;
      uVar12 = uVar9;
      if (uVar5 >> 0x18 < uVar9 >> 0x18) {
        uVar12 = uVar5;
        uVar5 = uVar9;
      }
      puVar4[2] = uVar5;
      puVar4[1] = uVar12;
      uVar5 = 4;
      puVar4[3] = uVar21;
      uVar21 = param_2 - uVar19;
      if (uVar19 < 5) goto LAB_010d3ae4;
    }
  }
  else {
    FUN_010d3e4c(param_1,param_3,puVar3);
    FUN_010d3e4c(param_1 + uVar19,param_3 + uVar19,puVar3 + 8);
    uVar5 = 8;
    uVar21 = param_2 - uVar19;
    if (uVar19 < 9) goto LAB_010d3ae4;
  }
  iVar17 = uVar5 << 2;
  uVar12 = uVar5;
  do {
    uVar22 = param_1[uVar12];
    param_3[uVar12] = uVar22;
    uVar14 = (param_3 + uVar12)[-1];
    if (uVar22 >> 0x18 < uVar14 >> 0x18) {
      iVar6 = iVar17;
      do {
        *(uint *)((int)param_3 + iVar6) = uVar14;
        if (iVar6 == 4) {
          puVar4 = param_3;
          goto LAB_010d3a84;
        }
        iVar18 = iVar6 + -4;
        uVar14 = *(uint *)((int)param_3 + iVar6 + -8);
        iVar6 = iVar18;
      } while (uVar22 >> 0x18 < uVar14 >> 0x18);
      puVar4 = (uint *)((int)param_3 + iVar18);
LAB_010d3a84:
      *puVar4 = uVar22;
    }
    uVar12 = uVar12 + 1;
    iVar17 = iVar17 + 4;
  } while (uVar12 != uVar19);
LAB_010d3ae4:
  puVar4 = param_3 + uVar19;
  if (uVar5 < uVar21) {
    iVar17 = uVar5 << 2;
    do {
      uVar14 = param_1[uVar19 + uVar5];
      puVar4[uVar5] = uVar14;
      uVar12 = (puVar4 + uVar5)[-1];
      if (uVar14 >> 0x18 < uVar12 >> 0x18) {
        iVar6 = iVar17;
        do {
          *(uint *)((int)puVar4 + iVar6) = uVar12;
          if (iVar6 == 4) {
            puVar8 = puVar4;
            goto LAB_010d3b04;
          }
          iVar18 = iVar6 + -4;
          uVar12 = *(uint *)((int)puVar4 + iVar6 + -8);
          iVar6 = iVar18;
        } while (uVar14 >> 0x18 < uVar12 >> 0x18);
        puVar8 = (uint *)((int)puVar4 + iVar18);
LAB_010d3b04:
        *puVar8 = uVar14;
      }
      uVar5 = uVar5 + 1;
      iVar17 = iVar17 + 4;
    } while (uVar5 != uVar21);
  }
  puVar8 = puVar4 + -1;
  iVar17 = 0;
  puVar3 = puVar3 + -1;
  do {
    uVar21 = *puVar3;
    bVar23 = *puVar4 >> 0x18 < *param_3 >> 0x18;
    uVar5 = *param_3;
    if (bVar23) {
      uVar5 = *puVar4;
    }
    uVar12 = *puVar8;
    *(uint *)((int)param_1 + iVar17) = uVar5;
    bVar24 = uVar21 >> 0x18 < uVar12 >> 0x18;
    puVar4 = puVar4 + bVar23;
    iVar6 = 0;
    if (bVar24) {
      iVar6 = -1;
      uVar21 = uVar12;
    }
    puVar8 = puVar8 + iVar6;
    puVar7 = (uint *)0x0;
    if (!bVar24) {
      puVar7 = (uint *)0xffffffff;
    }
    param_3 = param_3 + !bVar23;
    *(uint *)((int)param_1 + ((param_2 * 4 + -4) - iVar17)) = uVar21;
    puVar3 = puVar3 + (int)puVar7;
    iVar17 = iVar17 + 4;
    uVar19 = uVar19 - 1;
  } while (uVar19 != 0);
  puVar8 = puVar8 + 1;
  if ((param_2 & 1) != 0) {
    bVar23 = puVar8 <= param_3;
    puVar7 = puVar4;
    if (!bVar23) {
      puVar7 = param_3;
    }
    *(uint *)((int)param_1 + iVar17) = *puVar7;
    puVar7 = (uint *)(uint)!bVar23;
    puVar4 = puVar4 + bVar23;
    param_3 = param_3 + (int)puVar7;
  }
  if (param_3 == puVar8) {
    puVar7 = puVar3 + 1;
  }
  if (param_3 == puVar8 && puVar4 == puVar7) {
    return;
  }
  FUN_00fb7254();
LAB_010d3c64:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x10d3c64);
  (*pcVar1)();
}

