// FUN_00b794e4 @ 00b794e4 size=2360 calls_out=8 calls_in=2
// strings: 

void FUN_00b794e4(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 undefined4 *param_6)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint *puVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  bool bVar28;
  undefined4 *local_40;
  uint *local_28;
  
  if (0x20 < param_2) {
    local_40 = param_6;
    do {
      uVar24 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_00b78fb0(param_1,uVar24,param_3,param_4,1);
          return;
        }
        if (uVar24 < 0x40) {
          uVar14 = *(uint *)param_1[(uVar24 >> 3) * 8 - (uVar24 >> 3)];
          uVar21 = *(uint *)param_1[(uVar24 >> 3) * 4];
          uVar15 = *(uint *)*param_1;
          puVar2 = param_1 + (uVar24 >> 3) * 4;
          if (uVar15 < uVar21 != uVar21 < uVar14) {
            puVar2 = param_1 + ((uVar24 >> 3) * 8 - (uVar24 >> 3));
          }
          if (uVar15 < uVar21 != uVar15 < uVar14) {
            puVar2 = param_1;
          }
        }
        else {
          puVar2 = (undefined4 *)FUN_00b7a1c4(param_1);
        }
        uVar14 = (int)puVar2 - (int)param_1;
        local_28 = (uint *)*puVar2;
        param_5 = param_5 + -1;
        if ((local_40 != (undefined4 *)0x0) && (*local_28 <= *(uint *)*local_40)) break;
        if (param_4 < uVar24) goto LAB_00b79e00;
        puVar4 = param_3 + uVar24;
        param_2 = 0;
        puVar2 = param_1;
        uVar21 = uVar14 >> 2;
        while( true ) {
          iVar27 = uVar21 - 3;
          if (uVar21 < 3) {
            iVar27 = 0;
          }
          puVar6 = puVar2;
          if (puVar2 < param_1 + iVar27) {
            uVar15 = **(uint **)((int)param_1 + uVar14);
            do {
              puVar9 = (uint *)*puVar6;
              puVar11 = (uint *)puVar6[1];
              puVar7 = (uint *)puVar6[2];
              puVar20 = (uint *)puVar6[3];
              puVar6 = puVar6 + 4;
              bVar28 = uVar15 <= *puVar9;
              puVar2 = param_3;
              if (bVar28) {
                puVar2 = puVar4 + -1;
              }
              puVar2[param_2] = puVar9;
              if (!bVar28) {
                param_2 = param_2 + 1;
              }
              bVar28 = uVar15 <= *puVar11;
              puVar2 = param_3;
              if (bVar28) {
                puVar2 = puVar4 + -2;
              }
              puVar2[param_2] = puVar11;
              if (!bVar28) {
                param_2 = param_2 + 1;
              }
              uVar18 = *puVar20;
              bVar28 = uVar15 <= *puVar7;
              puVar2 = param_3;
              if (bVar28) {
                puVar2 = puVar4 + -3;
              }
              puVar4 = puVar4 + -4;
              puVar2[param_2] = puVar7;
              if (!bVar28) {
                param_2 = param_2 + 1;
              }
              bVar28 = uVar18 < uVar15;
              puVar2 = puVar4;
              if (bVar28) {
                puVar2 = param_3;
              }
              puVar2[param_2] = puVar20;
              if (bVar28) {
                param_2 = param_2 + 1;
              }
            } while (puVar6 < param_1 + iVar27);
          }
          if (puVar6 < param_1 + uVar21) {
            uVar15 = **(uint **)((int)param_1 + uVar14);
            puVar2 = puVar6;
            do {
              puVar6 = puVar2 + 1;
              puVar4 = puVar4 + -1;
              bVar28 = *(uint *)*puVar2 < uVar15;
              puVar8 = puVar4;
              if (bVar28) {
                puVar8 = param_3;
              }
              puVar8[param_2] = (uint *)*puVar2;
              if (bVar28) {
                param_2 = param_2 + 1;
              }
              puVar2 = puVar6;
            } while (puVar6 < param_1 + uVar21);
          }
          if (uVar21 == uVar24) break;
          puVar4 = puVar4 + -1;
          puVar2 = puVar6 + 1;
          puVar4[param_2] = *puVar6;
          uVar21 = uVar24;
        }
        FUN_016dd1aa(param_1,param_3,param_2 << 2);
        iVar27 = uVar24 - param_2;
        if (iVar27 != 0) {
          puVar2 = param_3 + (uVar24 - 1);
          puVar4 = param_1 + param_2;
          iVar12 = iVar27;
          do {
            iVar12 = iVar12 + -1;
            *puVar4 = *puVar2;
            puVar2 = puVar2 + -1;
            puVar4 = puVar4 + 1;
          } while (iVar12 != 0);
        }
        if (param_2 == 0) break;
        if (uVar24 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
        }
        FUN_00b794e4(param_1 + param_2,iVar27,param_3,param_4,param_5,&local_28);
        uVar24 = param_2;
        if (param_2 < 0x21) goto LAB_00b79504;
      }
      if (param_4 < uVar24) goto LAB_00b79e00;
      puVar4 = param_3 + uVar24;
      uVar15 = 0;
      puVar2 = param_1;
      uVar21 = uVar14 >> 2;
      while( true ) {
        iVar27 = uVar21 - 3;
        if (uVar21 < 3) {
          iVar27 = 0;
        }
        puVar6 = puVar2;
        if (puVar2 < param_1 + iVar27) {
          uVar18 = **(uint **)((int)param_1 + uVar14);
          do {
            puVar9 = (uint *)*puVar6;
            puVar7 = (uint *)puVar6[1];
            puVar11 = (uint *)puVar6[2];
            puVar20 = (uint *)puVar6[3];
            puVar6 = puVar6 + 4;
            bVar28 = uVar18 < *puVar9;
            puVar2 = param_3;
            if (bVar28) {
              puVar2 = puVar4 + -1;
            }
            puVar2[uVar15] = puVar9;
            if (!bVar28) {
              uVar15 = uVar15 + 1;
            }
            bVar28 = uVar18 < *puVar7;
            puVar2 = param_3;
            if (bVar28) {
              puVar2 = puVar4 + -2;
            }
            puVar2[uVar15] = puVar7;
            if (!bVar28) {
              uVar15 = uVar15 + 1;
            }
            uVar16 = *puVar20;
            bVar28 = uVar18 < *puVar11;
            puVar2 = param_3;
            if (bVar28) {
              puVar2 = puVar4 + -3;
            }
            puVar4 = puVar4 + -4;
            puVar2[uVar15] = puVar11;
            if (!bVar28) {
              uVar15 = uVar15 + 1;
            }
            bVar28 = uVar16 <= uVar18;
            puVar2 = puVar4;
            if (bVar28) {
              puVar2 = param_3;
            }
            puVar2[uVar15] = puVar20;
            if (bVar28) {
              uVar15 = uVar15 + 1;
            }
          } while (puVar6 < param_1 + iVar27);
        }
        if (puVar6 < param_1 + uVar21) {
          uVar18 = **(uint **)((int)param_1 + uVar14);
          puVar2 = puVar6;
          do {
            puVar6 = puVar2 + 1;
            puVar4 = puVar4 + -1;
            bVar28 = *(uint *)*puVar2 <= uVar18;
            puVar8 = puVar4;
            if (bVar28) {
              puVar8 = param_3;
            }
            puVar8[uVar15] = (uint *)*puVar2;
            if (bVar28) {
              uVar15 = uVar15 + 1;
            }
            puVar2 = puVar6;
          } while (puVar6 < param_1 + uVar21);
        }
        if (uVar21 == uVar24) break;
        puVar2 = puVar6 + 1;
        puVar4 = puVar4 + -1;
        param_3[uVar15] = *puVar6;
        uVar15 = uVar15 + 1;
        uVar21 = uVar24;
      }
      FUN_016dd1aa(param_1,param_3,uVar15 << 2);
      param_2 = uVar24 - uVar15;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar15;
      puVar2 = param_3 + (uVar24 - 1);
      uVar14 = param_2;
      puVar4 = param_1;
      do {
        uVar14 = uVar14 - 1;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + -1;
        puVar4 = puVar4 + 1;
      } while (uVar14 != 0);
      if (uVar24 < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar15,uVar24,uVar24,&DAT_018af348);
      }
      local_40 = (undefined4 *)0x0;
    } while (0x20 < param_2);
  }
LAB_00b79504:
  uVar24 = param_2 >> 1;
  if (uVar24 == 0) {
    return;
  }
  puVar2 = param_3 + param_2;
  if (param_2 < 0x10) {
    if (param_2 < 8) {
      uVar14 = 1;
      uVar10 = *param_1;
      param_3[uVar24] = param_1[uVar24];
      *param_3 = uVar10;
      uVar21 = param_2 - uVar24;
      if (uVar24 < 2) goto LAB_00b79c30;
    }
    else {
      uVar18 = 3;
      uVar21 = (uint)(*(uint *)*param_1 <= *(uint *)param_1[1]);
      uVar15 = (uint)(*(uint *)*param_1 > *(uint *)param_1[1]);
      uVar14 = 2;
      if (*(uint *)param_1[3] < *(uint *)param_1[2]) {
        uVar18 = 2;
      }
      if (*(uint *)param_1[3] < *(uint *)param_1[2]) {
        uVar14 = 3;
      }
      uVar19 = *(uint *)param_1[uVar21];
      uVar25 = *(uint *)param_1[uVar18];
      uVar16 = uVar21;
      if (uVar25 < uVar19) {
        uVar16 = uVar14;
      }
      uVar22 = 2;
      puVar11 = (uint *)param_1[uVar15];
      if (*(uint *)param_1[uVar14] < *(uint *)param_1[uVar15]) {
        puVar11 = (uint *)param_1[uVar14];
        uVar16 = uVar15;
        uVar14 = uVar21;
      }
      puVar20 = (uint *)param_1[uVar16];
      if (uVar25 < uVar19) {
        uVar14 = uVar18;
      }
      puVar7 = (uint *)param_1[uVar14];
      uVar14 = *puVar7;
      uVar15 = *puVar20;
      puVar4 = param_1 + uVar24;
      puVar9 = (uint *)param_1[uVar18];
      if (uVar25 < uVar19) {
        puVar9 = (uint *)param_1[uVar21];
      }
      uVar21 = 3;
      if (*(uint *)puVar4[3] < *(uint *)puVar4[2]) {
        uVar22 = 3;
        uVar21 = 2;
      }
      puVar3 = (uint *)puVar4[uVar22];
      uVar16 = (uint)(*(uint *)*puVar4 <= *(uint *)puVar4[1]);
      uVar19 = (uint)(*(uint *)*puVar4 > *(uint *)puVar4[1]);
      puVar23 = (uint *)puVar4[uVar19];
      uVar25 = *puVar3;
      uVar26 = *puVar23;
      uVar18 = uVar22;
      if (uVar25 < uVar26) {
        uVar18 = uVar16;
      }
      bVar28 = *(uint *)puVar4[uVar21] < *(uint *)puVar4[uVar16];
      puVar17 = (uint *)puVar4[uVar21];
      if (bVar28) {
        puVar17 = (uint *)puVar4[uVar16];
      }
      *param_3 = puVar11;
      if (bVar28) {
        uVar16 = uVar22;
        uVar18 = uVar21;
      }
      param_3[3] = puVar9;
      if (uVar25 < uVar26) {
        uVar16 = uVar19;
      }
      puVar9 = (uint *)puVar4[uVar16];
      puVar11 = (uint *)puVar4[uVar18];
      if (uVar25 < uVar26) {
        puVar23 = puVar3;
      }
      uVar21 = *puVar9;
      puVar3 = puVar20;
      if (uVar14 < uVar15) {
        puVar3 = puVar7;
        puVar7 = puVar20;
      }
      param_3[2] = puVar7;
      uVar14 = *puVar11;
      param_3[1] = puVar3;
      puVar20 = puVar9;
      if (uVar14 < uVar21) {
        puVar20 = puVar11;
        puVar11 = puVar9;
      }
      puVar4 = param_3 + uVar24;
      *puVar4 = puVar23;
      uVar14 = 4;
      puVar4[1] = puVar20;
      puVar4[2] = puVar11;
      puVar4[3] = puVar17;
      uVar21 = param_2 - uVar24;
      if (uVar24 < 5) goto LAB_00b79c30;
    }
  }
  else {
    FUN_00b79e44(param_1,param_3,puVar2);
    FUN_00b79e44(param_1 + uVar24,param_3 + uVar24,puVar2 + 8);
    uVar14 = 8;
    uVar21 = param_2 - uVar24;
    if (uVar24 < 9) goto LAB_00b79c30;
  }
  iVar27 = uVar14 << 2;
  uVar15 = uVar14;
  do {
    puVar20 = (uint *)param_1[uVar15];
    param_3[uVar15] = puVar20;
    puVar11 = (uint *)(param_3 + uVar15)[-1];
    uVar18 = *puVar20;
    if (uVar18 < *puVar11) {
      iVar12 = iVar27;
      do {
        *(uint **)((int)param_3 + iVar12) = puVar11;
        if (iVar12 == 4) {
          puVar4 = param_3;
          goto LAB_00b79bcc;
        }
        iVar5 = iVar12 + -4;
        puVar11 = *(uint **)((int)param_3 + iVar12 + -8);
        iVar12 = iVar5;
      } while (uVar18 < *puVar11);
      puVar4 = (undefined4 *)((int)param_3 + iVar5);
LAB_00b79bcc:
      *puVar4 = puVar20;
    }
    uVar15 = uVar15 + 1;
    iVar27 = iVar27 + 4;
  } while (uVar15 != uVar24);
LAB_00b79c30:
  puVar4 = param_3 + uVar24;
  if (uVar14 < uVar21) {
    iVar27 = 4;
    puVar6 = puVar4;
    uVar15 = uVar14;
    do {
      puVar20 = (uint *)param_1[uVar24 + uVar15];
      puVar4[uVar15] = puVar20;
      puVar11 = (uint *)(puVar4 + uVar15)[-1];
      uVar18 = *puVar20;
      if (uVar18 < *puVar11) {
        iVar12 = iVar27;
        puVar8 = puVar6;
        do {
          puVar8[uVar14] = puVar11;
          if (uVar14 * 4 == iVar12) {
            puVar8 = puVar4;
            goto LAB_00b79c60;
          }
          iVar12 = iVar12 + 4;
          puVar13 = puVar8 + -1;
          puVar11 = (uint *)puVar8[uVar14 - 2];
          puVar8 = puVar13;
        } while (uVar18 < *puVar11);
        puVar8 = puVar13 + uVar14;
LAB_00b79c60:
        *puVar8 = puVar20;
      }
      uVar15 = uVar15 + 1;
      iVar27 = iVar27 + -4;
      puVar6 = puVar6 + 1;
    } while (uVar15 != uVar21);
  }
  puVar6 = puVar4 + -1;
  iVar27 = 0;
  puVar2 = puVar2 + -1;
  do {
    puVar11 = (uint *)*puVar2;
    bVar28 = *(uint *)*param_3 <= *(uint *)*puVar4;
    puVar20 = (uint *)*param_3;
    if (!bVar28) {
      puVar20 = (uint *)*puVar4;
    }
    puVar7 = (uint *)*puVar6;
    *(uint **)((int)param_1 + iVar27) = puVar20;
    param_3 = param_3 + bVar28;
    puVar4 = puVar4 + !bVar28;
    bVar28 = *puVar11 < *puVar7;
    if (bVar28) {
      puVar11 = puVar7;
    }
    *(uint **)((int)param_1 + ((param_2 * 4 + -4) - iVar27)) = puVar11;
    iVar12 = 0;
    if (bVar28) {
      iVar12 = -1;
    }
    puVar6 = puVar6 + iVar12;
    puVar8 = (undefined4 *)0x0;
    if (!bVar28) {
      puVar8 = (undefined4 *)0xffffffff;
    }
    iVar27 = iVar27 + 4;
    puVar2 = puVar2 + (int)puVar8;
    uVar24 = uVar24 - 1;
  } while (uVar24 != 0);
  puVar6 = puVar6 + 1;
  if ((param_2 & 1) != 0) {
    bVar28 = puVar6 <= param_3;
    puVar8 = puVar4;
    if (!bVar28) {
      puVar8 = param_3;
    }
    *(undefined4 *)((int)param_1 + iVar27) = *puVar8;
    puVar8 = (undefined4 *)(uint)!bVar28;
    puVar4 = puVar4 + bVar28;
    param_3 = param_3 + (int)puVar8;
  }
  if (param_3 == puVar6) {
    puVar8 = puVar2 + 1;
  }
  if (param_3 == puVar6 && puVar4 == puVar8) {
    return;
  }
  FUN_00fb7254();
LAB_00b79e00:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xb79e00);
  (*pcVar1)();
}

