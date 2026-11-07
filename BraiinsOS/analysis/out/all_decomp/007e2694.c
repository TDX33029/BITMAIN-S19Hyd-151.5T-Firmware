// FUN_007e2694 @ 007e2694 size=1992 calls_out=8 calls_in=2
// strings: 

void FUN_007e2694(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  bool bVar23;
  uint *local_3c;
  uint local_28;
  
  if (0x20 < param_2) {
    local_3c = param_6;
    do {
      uVar19 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_0082609c(param_1,uVar19,param_3,param_4,1);
          return;
        }
        puVar3 = param_1 + (uVar19 >> 3) * 4;
        if (uVar19 < 0x40) {
          uVar20 = param_1[(uVar19 >> 3) * 8 - (uVar19 >> 3)];
          uVar5 = *puVar3;
          uVar9 = *param_1;
          if (uVar9 < uVar5 != uVar5 < uVar20) {
            puVar3 = param_1 + ((uVar19 >> 3) * 8 - (uVar19 >> 3));
          }
          if (uVar9 < uVar5 != uVar9 < uVar20) {
            puVar3 = param_1;
          }
        }
        else {
          puVar3 = (uint *)FUN_00873ff8(param_1,puVar3);
        }
        uVar20 = (int)puVar3 - (int)param_1;
        local_28 = *puVar3;
        param_5 = param_5 + -1;
        if ((local_3c != (uint *)0x0) && (local_28 <= *local_3c)) break;
        if (param_4 < uVar19) goto LAB_007e2e40;
        puVar3 = param_3 + uVar19;
        param_2 = 0;
        puVar4 = param_1;
        uVar5 = uVar20 >> 2;
        while( true ) {
          iVar12 = uVar5 - 3;
          if (uVar5 < 3) {
            iVar12 = 0;
          }
          if (puVar4 < param_1 + iVar12) {
            uVar9 = *(uint *)((int)param_1 + uVar20);
            do {
              uVar13 = *puVar4;
              uVar16 = puVar4[1];
              uVar15 = puVar4[2];
              puVar8 = param_3;
              if (uVar9 <= uVar13) {
                puVar8 = puVar3 + -1;
              }
              uVar10 = puVar4[3];
              puVar4 = puVar4 + 4;
              puVar8[param_2] = uVar13;
              if (uVar9 > uVar13) {
                param_2 = param_2 + 1;
              }
              puVar8 = param_3;
              if (uVar9 <= uVar16) {
                puVar8 = puVar3 + -2;
              }
              puVar8[param_2] = uVar16;
              if (uVar9 > uVar16) {
                param_2 = param_2 + 1;
              }
              puVar8 = param_3;
              if (uVar9 <= uVar15) {
                puVar8 = puVar3 + -3;
              }
              puVar3 = puVar3 + -4;
              puVar8[param_2] = uVar15;
              if (uVar9 > uVar15) {
                param_2 = param_2 + 1;
              }
              puVar8 = puVar3;
              if (uVar10 < uVar9) {
                puVar8 = param_3;
              }
              puVar8[param_2] = uVar10;
              if (uVar10 < uVar9) {
                param_2 = param_2 + 1;
              }
            } while (puVar4 < param_1 + iVar12);
          }
          puVar8 = puVar4;
          if (puVar4 < param_1 + uVar5) {
            uVar9 = *(uint *)((int)param_1 + uVar20);
            do {
              puVar8 = puVar4 + 1;
              uVar16 = *puVar4;
              puVar3 = puVar3 + -1;
              bVar22 = uVar16 < uVar9;
              puVar4 = puVar3;
              if (bVar22) {
                puVar4 = param_3;
              }
              puVar4[param_2] = uVar16;
              if (bVar22) {
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
        iVar12 = uVar19 - param_2;
        if (iVar12 != 0) {
          puVar3 = param_3 + (uVar19 - 1);
          puVar4 = param_1 + param_2;
          iVar6 = iVar12;
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
        FUN_007e2694(param_1 + param_2,iVar12,param_3,param_4,param_5,&local_28);
        uVar19 = param_2;
        if (param_2 < 0x21) goto LAB_007e26b4;
      }
      if (param_4 < uVar19) goto LAB_007e2e40;
      puVar3 = param_3 + uVar19;
      uVar5 = 0;
      puVar4 = param_1;
      uVar9 = uVar20 >> 2;
      while( true ) {
        iVar12 = uVar9 - 3;
        if (uVar9 < 3) {
          iVar12 = 0;
        }
        if (puVar4 < param_1 + iVar12) {
          uVar16 = *(uint *)((int)param_1 + uVar20);
          do {
            uVar10 = *puVar4;
            uVar13 = puVar4[1];
            uVar15 = puVar4[2];
            puVar8 = param_3;
            if (uVar16 < uVar10) {
              puVar8 = puVar3 + -1;
            }
            uVar11 = puVar4[3];
            puVar4 = puVar4 + 4;
            puVar8[uVar5] = uVar10;
            if (uVar16 >= uVar10) {
              uVar5 = uVar5 + 1;
            }
            puVar8 = param_3;
            if (uVar16 < uVar13) {
              puVar8 = puVar3 + -2;
            }
            puVar8[uVar5] = uVar13;
            if (uVar16 >= uVar13) {
              uVar5 = uVar5 + 1;
            }
            puVar8 = param_3;
            if (uVar16 < uVar15) {
              puVar8 = puVar3 + -3;
            }
            puVar3 = puVar3 + -4;
            puVar8[uVar5] = uVar15;
            if (uVar16 >= uVar15) {
              uVar5 = uVar5 + 1;
            }
            puVar8 = puVar3;
            if (uVar11 <= uVar16) {
              puVar8 = param_3;
            }
            puVar8[uVar5] = uVar11;
            if (uVar11 <= uVar16) {
              uVar5 = uVar5 + 1;
            }
          } while (puVar4 < param_1 + iVar12);
        }
        puVar8 = puVar4;
        if (puVar4 < param_1 + uVar9) {
          uVar16 = *(uint *)((int)param_1 + uVar20);
          do {
            puVar8 = puVar4 + 1;
            uVar15 = *puVar4;
            puVar3 = puVar3 + -1;
            bVar22 = uVar15 <= uVar16;
            puVar4 = puVar3;
            if (bVar22) {
              puVar4 = param_3;
            }
            puVar4[uVar5] = uVar15;
            if (bVar22) {
              uVar5 = uVar5 + 1;
            }
            puVar4 = puVar8;
          } while (puVar8 < param_1 + uVar9);
        }
        if (uVar9 == uVar19) break;
        puVar4 = puVar8 + 1;
        puVar3 = puVar3 + -1;
        param_3[uVar5] = *puVar8;
        uVar5 = uVar5 + 1;
        uVar9 = uVar19;
      }
      FUN_016dd1aa(param_1,param_3,uVar5 << 2);
      param_2 = uVar19 - uVar5;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar5;
      puVar3 = param_3 + (uVar19 - 1);
      uVar20 = param_2;
      puVar4 = param_1;
      do {
        uVar20 = uVar20 - 1;
        *puVar4 = *puVar3;
        puVar3 = puVar3 + -1;
        puVar4 = puVar4 + 1;
      } while (uVar20 != 0);
      if (uVar19 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar5,uVar19,uVar19,&DAT_018af348);
      }
      local_3c = (uint *)0x0;
    } while (0x20 < param_2);
  }
LAB_007e26b4:
  uVar19 = param_2 >> 1;
  if (uVar19 == 0) {
    return;
  }
  puVar3 = param_3 + param_2;
  if (param_2 < 0x10) {
    if (param_2 < 8) {
      uVar20 = param_1[uVar19];
      *param_3 = *param_1;
      uVar5 = 1;
      param_3[uVar19] = uVar20;
      uVar20 = param_2 - uVar19;
      if (uVar19 < 2) goto LAB_007e2ce4;
    }
    else {
      puVar4 = param_1 + uVar19;
      uVar15 = 3;
      uVar20 = 2;
      uVar9 = (uint)(puVar4[1] < *puVar4);
      uVar5 = (uint)(puVar4[1] >= *puVar4);
      uVar16 = 2;
      if (puVar4[3] < puVar4[2]) {
        uVar15 = 2;
      }
      uVar13 = puVar4[uVar15];
      if (puVar4[3] < puVar4[2]) {
        uVar16 = 3;
      }
      uVar11 = puVar4[uVar5];
      uVar10 = uVar5;
      if (uVar13 < uVar11) {
        uVar10 = uVar16;
      }
      uVar17 = uVar16;
      uVar2 = puVar4[uVar9];
      if (puVar4[uVar16] < puVar4[uVar9]) {
        uVar17 = uVar5;
        uVar2 = puVar4[uVar16];
        uVar10 = uVar9;
      }
      uVar9 = uVar11;
      if (uVar13 >= uVar11 && uVar13 != uVar11) {
        uVar9 = uVar13;
      }
      if (uVar13 < uVar11) {
        uVar17 = uVar15;
      }
      uVar16 = (uint)(*param_1 <= param_1[1]);
      uVar15 = (uint)(*param_1 > param_1[1]);
      uVar5 = 3;
      if (param_1[3] < param_1[2]) {
        uVar5 = 2;
        uVar20 = 3;
      }
      uVar14 = param_1[uVar5];
      uVar11 = param_1[uVar16];
      uVar13 = uVar16;
      if (uVar14 < uVar11) {
        uVar13 = uVar20;
      }
      uVar21 = param_1[uVar15];
      if (param_1[uVar20] < param_1[uVar15]) {
        uVar21 = param_1[uVar20];
        uVar13 = uVar15;
        uVar20 = uVar16;
      }
      uVar16 = param_1[uVar13];
      if (uVar14 < uVar11) {
        uVar20 = uVar5;
      }
      uVar20 = param_1[uVar20];
      if (uVar14 >= uVar11 && uVar14 != uVar11) {
        uVar11 = uVar14;
      }
      param_3[3] = uVar11;
      uVar15 = puVar4[uVar10];
      uVar5 = uVar16;
      if (uVar20 >= uVar16 && uVar20 != uVar16) {
        uVar5 = uVar20;
      }
      uVar13 = puVar4[uVar17];
      if (uVar20 < uVar16) {
        uVar16 = uVar20;
      }
      param_3[2] = uVar5;
      param_3[1] = uVar16;
      *param_3 = uVar21;
      puVar4 = param_3 + uVar19;
      *puVar4 = uVar2;
      uVar20 = uVar15;
      if (uVar13 >= uVar15 && uVar13 != uVar15) {
        uVar20 = uVar13;
      }
      if (uVar13 < uVar15) {
        uVar15 = uVar13;
      }
      uVar5 = 4;
      puVar4[2] = uVar20;
      puVar4[1] = uVar15;
      puVar4[3] = uVar9;
      uVar20 = param_2 - uVar19;
      if (uVar19 < 5) goto LAB_007e2ce4;
    }
  }
  else {
    FUN_007f482c(param_1,param_3,puVar3);
    FUN_007f482c(param_1 + uVar19,param_3 + uVar19,puVar3 + 8);
    uVar5 = 8;
    uVar20 = param_2 - uVar19;
    if (uVar19 < 9) goto LAB_007e2ce4;
  }
  iVar12 = uVar5 << 2;
  uVar9 = uVar5;
  do {
    uVar16 = param_1[uVar9];
    param_3[uVar9] = uVar16;
    uVar15 = (param_3 + uVar9)[-1];
    if (uVar16 < uVar15) {
      iVar6 = iVar12;
      do {
        *(uint *)((int)param_3 + iVar6) = uVar15;
        if (iVar6 == 4) {
          puVar4 = param_3;
          goto LAB_007e2c8c;
        }
        iVar18 = iVar6 + -4;
        uVar15 = *(uint *)((int)param_3 + iVar6 + -8);
        iVar6 = iVar18;
      } while (uVar16 < uVar15);
      puVar4 = (uint *)((int)param_3 + iVar18);
LAB_007e2c8c:
      *puVar4 = uVar16;
    }
    uVar9 = uVar9 + 1;
    iVar12 = iVar12 + 4;
  } while (uVar9 != uVar19);
LAB_007e2ce4:
  puVar4 = param_3 + uVar19;
  if (uVar5 < uVar20) {
    iVar12 = uVar5 << 2;
    do {
      uVar9 = param_1[uVar19 + uVar5];
      puVar4[uVar5] = uVar9;
      uVar16 = (puVar4 + uVar5)[-1];
      if (uVar9 < uVar16) {
        iVar6 = iVar12;
        do {
          *(uint *)((int)puVar4 + iVar6) = uVar16;
          if (iVar6 == 4) {
            puVar8 = puVar4;
            goto LAB_007e2d00;
          }
          iVar18 = iVar6 + -4;
          uVar16 = *(uint *)((int)puVar4 + iVar6 + -8);
          iVar6 = iVar18;
        } while (uVar9 < uVar16);
        puVar8 = (uint *)((int)puVar4 + iVar18);
LAB_007e2d00:
        *puVar8 = uVar9;
      }
      uVar5 = uVar5 + 1;
      iVar12 = iVar12 + 4;
    } while (uVar5 != uVar20);
  }
  puVar3 = puVar3 + -1;
  puVar8 = puVar4 + -1;
  iVar12 = 0;
  do {
    uVar20 = *puVar8;
    bVar22 = *param_3 <= *puVar4;
    uVar9 = *puVar3;
    uVar5 = *param_3;
    if (!bVar22) {
      uVar5 = *puVar4;
    }
    *(uint *)((int)param_1 + iVar12) = uVar5;
    bVar23 = uVar9 < uVar20;
    param_3 = param_3 + bVar22;
    iVar6 = 0;
    if (bVar23) {
      iVar6 = -1;
    }
    if (!bVar23 && uVar9 != uVar20) {
      uVar20 = uVar9;
    }
    puVar8 = puVar8 + iVar6;
    puVar7 = (uint *)0x0;
    if (!bVar23) {
      puVar7 = (uint *)0xffffffff;
    }
    *(uint *)((int)param_1 + ((param_2 * 4 + -4) - iVar12)) = uVar20;
    puVar4 = puVar4 + !bVar22;
    puVar3 = puVar3 + (int)puVar7;
    iVar12 = iVar12 + 4;
    uVar19 = uVar19 - 1;
  } while (uVar19 != 0);
  puVar8 = puVar8 + 1;
  if ((param_2 & 1) != 0) {
    bVar22 = puVar8 <= param_3;
    puVar7 = puVar4;
    if (!bVar22) {
      puVar7 = param_3;
    }
    *(uint *)((int)param_1 + iVar12) = *puVar7;
    puVar7 = (uint *)(uint)!bVar22;
    puVar4 = puVar4 + bVar22;
    param_3 = param_3 + (int)puVar7;
  }
  if (param_3 == puVar8) {
    puVar7 = puVar3 + 1;
  }
  if (param_3 == puVar8 && puVar4 == puVar7) {
    return;
  }
  FUN_00fb7254();
LAB_007e2e40:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x7e2e40);
  (*pcVar1)();
}

