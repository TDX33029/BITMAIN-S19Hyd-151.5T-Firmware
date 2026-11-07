// FUN_0065d854 @ 0065d854 size=3408 calls_out=4 calls_in=1
// strings: invalid match span

void FUN_0065d854(int param_1,uint *param_2,undefined4 *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint local_34;
  uint local_30;
  
  uVar18 = *param_2;
  uVar14 = param_2[1];
  *param_3 = 0;
  if (uVar14 < uVar18) {
    return;
  }
  cVar1 = (char)param_2[4];
  if ((*(int *)(param_1 + 0x1c) == 0) || (cVar1 != '\0')) {
    if (param_3[4] != 1) {
      iVar11 = 0x13c;
      if (cVar1 != '\0') {
        iVar11 = 0x140;
      }
      uVar9 = *(uint *)(param_1 + iVar11);
      if ((uVar9 != 0) && (uVar9 <= *(uint *)(param_1 + 0x138))) {
        uVar12 = param_3[7];
        uVar15 = *(uint *)(param_1 + 8);
        if (param_3[6] == 0) {
          uVar12 = 0;
        }
        if (uVar15 < uVar9) goto LAB_0065e3b4;
        uVar15 = uVar15 - uVar9;
        if (uVar15 == 0) goto LAB_0065e4e8;
        iVar11 = *(int *)(param_1 + 0x28);
        pbVar6 = (byte *)(*(int *)(param_1 + 4) + uVar9 * 4);
        bVar2 = *pbVar6;
        uVar16 = (uint)bVar2;
        if (uVar16 == 0xff) {
          uVar4 = iVar11 + 2;
          if (uVar15 <= uVar4) goto LAB_0065d9c4;
        }
        else {
          iVar13 = uVar16 + (bVar2 >> 2);
          uVar4 = iVar13 + 2;
          if ((bVar2 & 3) != 0) {
            uVar4 = iVar13 + 3;
          }
          if (uVar15 <= uVar4) goto LAB_0065e568;
        }
        uVar4 = *(uint *)(pbVar6 + uVar4 * 4);
        if (0x7fffffff < uVar4) {
          uVar4 = 1;
        }
        if (uVar12 < uVar4) {
          param_3[6] = 1;
          param_3[7] = uVar12 + 1;
          if (uVar16 == 0xff) {
            uVar14 = iVar11 + 2;
          }
          else {
            iVar11 = uVar16 + (bVar2 >> 2);
            uVar14 = iVar11 + 2;
            if ((bVar2 & 3) != 0) {
              uVar14 = iVar11 + 3;
            }
          }
          local_34 = uVar12;
          if (uVar15 <= uVar14) goto LAB_0065e548;
          if ((int)*(uint *)(pbVar6 + uVar14 * 4) < 0) {
            if (uVar12 != 0) goto LAB_0065e3f4;
            uVar14 = *(uint *)(pbVar6 + uVar14 * 4) & 0x7fffffff;
          }
          else {
            uVar14 = uVar12 + 1 + uVar14;
            if (uVar15 <= uVar14) goto LAB_0065e558;
            uVar14 = *(uint *)(pbVar6 + uVar14 * 4);
          }
          uVar9 = *(uint *)(param_1 + 0x14);
          if (uVar9 <= uVar14) goto LAB_0065e53c;
          uVar9 = *(uint *)(*(int *)(param_1 + 0x10) + uVar14 * 4);
          if (uVar9 <= uVar18) {
            *param_3 = 1;
            param_3[1] = uVar18 - uVar9;
            param_3[2] = uVar18;
            param_3[3] = uVar14;
            return;
          }
          goto LAB_0065e39c;
        }
      }
      param_3[4] = 1;
      param_3[5] = uVar9;
      param_3[6] = 0;
      param_3[8] = uVar18;
      *param_3 = 0;
LAB_0065dbb0:
      if (uVar14 <= uVar18) {
LAB_0065ddc0:
        param_3[4] = 1;
        param_3[5] = uVar9;
        return;
      }
      uVar15 = param_2[3];
      uVar16 = param_2[2];
      uVar12 = uVar15;
      if (uVar15 < uVar18) {
        uVar12 = uVar18;
      }
      uVar4 = uVar9;
LAB_0065dbe0:
      if (uVar18 == uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar12,uVar15,&DAT_01c03ca8);
      }
      uVar5 = *(uint *)(param_1 + 8);
      if (uVar5 <= uVar4) {
LAB_0065e494:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar4,uVar5,&DAT_01d09180);
      }
      iVar11 = *(int *)(param_1 + 4);
      uVar10 = (uint)*(byte *)(param_1 + 0x2c + (uint)*(byte *)(uVar16 + uVar18));
      do {
        uVar9 = *(uint *)(iVar11 + uVar4 * 4);
        if ((uVar9 & 0xff) == 0xfe) {
          if (uVar10 == (uVar9 & 0xffff) >> 8) goto LAB_0065dda4;
        }
        else if ((uVar9 & 0xff) == 0xff) {
          uVar9 = uVar10 + 2 + uVar4;
          if (uVar5 <= uVar9) goto LAB_0065e44c;
          uVar9 = *(uint *)(iVar11 + uVar9 * 4);
          if (uVar9 != 1) goto LAB_0065dd58;
        }
        else {
          uVar17 = (uVar9 & 0xff) >> 2;
          if ((uVar9 & 3) != 0) {
            uVar17 = uVar17 + 1;
          }
          uVar9 = uVar4 + 2;
          if (uVar5 < uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(uVar9,uVar5,uVar5,&DAT_01d09190);
          }
          if (uVar5 - uVar9 < uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar17,uVar5 - uVar9,&DAT_01d091a0);
          }
          iVar13 = uVar17 << 2;
          iVar3 = 0;
          while (iVar8 = iVar3, iVar13 != 0) {
            uVar19 = *(uint *)(iVar11 + uVar9 * 4 + iVar8 * 4);
            if (uVar10 == (uVar19 & 0xff)) {
              uVar4 = uVar17 + uVar9 + iVar8 * 4;
              if (uVar5 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar4,uVar5,&DAT_01d091e0);
              }
              goto LAB_0065dd54;
            }
            if (uVar10 == (uVar19 & 0xffff) >> 8) {
              uVar4 = uVar17 + uVar9 + iVar8 * 4 + 1;
              if (uVar5 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar4,uVar5,&DAT_01d091d0);
              }
              goto LAB_0065dd54;
            }
            if (uVar10 == (uVar19 & 0xffffff) >> 0x10) {
              uVar4 = uVar17 + uVar9 + iVar8 * 4 + 2;
              if (uVar5 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar4,uVar5,&DAT_01d091c0);
              }
              goto LAB_0065dd54;
            }
            iVar13 = iVar13 + -4;
            iVar3 = iVar8 + 1;
            if (uVar10 == uVar19 >> 0x18) {
              uVar4 = uVar17 + uVar9 + iVar8 * 4 + 3;
              if (uVar5 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar4,uVar5,&DAT_01d091b0);
              }
              goto LAB_0065dd54;
            }
          }
        }
        if (cVar1 != '\0') {
          param_3[4] = 1;
          param_3[5] = 0;
          return;
        }
        uVar4 = uVar4 + 1;
        if (uVar5 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar4,uVar5,&DAT_01d09210);
        }
        uVar4 = *(uint *)(iVar11 + uVar4 * 4);
        if (uVar5 <= uVar4) goto LAB_0065e494;
      } while( true );
    }
    uVar9 = param_3[5];
    if (param_3[6] == 0) {
      uVar18 = param_3[8];
      goto LAB_0065dbb0;
    }
    uVar15 = *(uint *)(param_1 + 8);
    if (uVar15 < uVar9) {
LAB_0065e3b4:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar9,uVar15,uVar15,&DAT_01d09240);
    }
    uVar15 = uVar15 - uVar9;
    if (uVar15 == 0) goto LAB_0065e4e8;
    uVar16 = param_3[7];
    iVar11 = *(int *)(param_1 + 0x28);
    pbVar6 = (byte *)(*(int *)(param_1 + 4) + uVar9 * 4);
    bVar2 = *pbVar6;
    uVar12 = (uint)bVar2;
    if (uVar12 == 0xff) {
      uVar4 = iVar11 + 2;
      if (uVar15 <= uVar4) {
LAB_0065d9c4:
        puVar7 = &DAT_01d08f48;
        goto LAB_0065e570;
      }
    }
    else {
      iVar13 = uVar12 + (bVar2 >> 2);
      uVar4 = iVar13 + 2;
      if ((bVar2 & 3) != 0) {
        uVar4 = iVar13 + 3;
      }
      if (uVar15 <= uVar4) {
LAB_0065e568:
        puVar7 = &DAT_01d08f38;
LAB_0065e570:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar4,uVar15,puVar7);
      }
    }
    uVar18 = *(uint *)(pbVar6 + uVar4 * 4);
    if (0x7fffffff < uVar18) {
      uVar18 = 1;
    }
    if (uVar18 <= uVar16) {
      param_3[6] = 0;
      *param_3 = 0;
      uVar18 = param_3[8] + 1;
      param_3[8] = uVar18;
      goto LAB_0065dbb0;
    }
    uVar18 = param_3[8];
    param_3[6] = 1;
    param_3[7] = uVar16 + 1;
    if (uVar12 == 0xff) {
      uVar14 = iVar11 + 2;
    }
    else {
      iVar11 = uVar12 + (bVar2 >> 2);
      uVar14 = iVar11 + 2;
      if ((bVar2 & 3) != 0) {
        uVar14 = iVar11 + 3;
      }
    }
    local_34 = uVar16;
    if (uVar15 <= uVar14) {
LAB_0065e548:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar14,uVar15,&DAT_01d08ef8);
    }
    if ((int)*(uint *)(pbVar6 + uVar14 * 4) < 0) {
      if (uVar16 != 0) {
LAB_0065e3f4:
                    /* WARNING: Subroutine does not return */
        FUN_01304210(0,&DAT_00533278,&local_34,0);
      }
      uVar14 = *(uint *)(pbVar6 + uVar14 * 4) & 0x7fffffff;
    }
    else {
      uVar14 = uVar16 + 1 + uVar14;
      if (uVar15 <= uVar14) {
LAB_0065e558:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar14,uVar15,&DAT_01d08f08);
      }
      uVar14 = *(uint *)(pbVar6 + uVar14 * 4);
    }
    uVar9 = *(uint *)(param_1 + 0x14);
    if (uVar9 <= uVar14) {
LAB_0065e53c:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar14,uVar9,&DAT_01d09220);
    }
    goto LAB_0065e218;
  }
  if (param_3[4] != 1) {
    uVar9 = *(uint *)(param_1 + 0x13c);
    if ((uVar9 != 0) && (uVar9 <= *(uint *)(param_1 + 0x138))) {
      uVar12 = param_3[7];
      uVar15 = *(uint *)(param_1 + 8);
      if (param_3[6] == 0) {
        uVar12 = 0;
      }
      if (uVar15 < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar9,uVar15,uVar15,&DAT_01d09240);
      }
      uVar15 = uVar15 - uVar9;
      if (uVar15 == 0) goto LAB_0065e4e8;
      iVar11 = *(int *)(param_1 + 0x28);
      pbVar6 = (byte *)(*(int *)(param_1 + 4) + uVar9 * 4);
      bVar2 = *pbVar6;
      uVar16 = (uint)bVar2;
      if (uVar16 == 0xff) {
        uVar4 = iVar11 + 2;
        if (uVar15 <= uVar4) goto LAB_0065da30;
      }
      else {
        iVar13 = uVar16 + (bVar2 >> 2);
        uVar4 = iVar13 + 2;
        if ((bVar2 & 3) != 0) {
          uVar4 = iVar13 + 3;
        }
        if (uVar15 <= uVar4) goto LAB_0065e57c;
      }
      uVar4 = *(uint *)(pbVar6 + uVar4 * 4);
      if (0x7fffffff < uVar4) {
        uVar4 = 1;
      }
      if (uVar12 < uVar4) {
        param_3[6] = 1;
        param_3[7] = uVar12 + 1;
        if (uVar16 == 0xff) {
          uVar14 = iVar11 + 2;
        }
        else {
          iVar11 = uVar16 + (bVar2 >> 2);
          uVar14 = iVar11 + 2;
          if ((bVar2 & 3) != 0) {
            uVar14 = iVar11 + 3;
          }
        }
        local_34 = uVar12;
        if (uVar15 <= uVar14) goto LAB_0065e548;
        if ((int)*(uint *)(pbVar6 + uVar14 * 4) < 0) {
          if (uVar12 != 0) goto LAB_0065e3f4;
          uVar14 = *(uint *)(pbVar6 + uVar14 * 4) & 0x7fffffff;
        }
        else {
          uVar14 = uVar12 + 1 + uVar14;
          if (uVar15 <= uVar14) goto LAB_0065e558;
          uVar14 = *(uint *)(pbVar6 + uVar14 * 4);
        }
        uVar9 = *(uint *)(param_1 + 0x14);
        if (uVar9 <= uVar14) goto LAB_0065e53c;
        uVar9 = *(uint *)(*(int *)(param_1 + 0x10) + uVar14 * 4);
        if (uVar9 <= uVar18) {
          *param_3 = 1;
          param_3[1] = uVar18 - uVar9;
          param_3[2] = uVar18;
          param_3[3] = uVar14;
          return;
        }
        goto LAB_0065e39c;
      }
    }
    param_3[4] = 1;
    param_3[5] = uVar9;
    param_3[6] = 0;
    param_3[8] = uVar18;
    *param_3 = 0;
LAB_0065de50:
    if (uVar14 <= uVar18) {
LAB_0065e09c:
      param_3[4] = 1;
      param_3[5] = uVar9;
      return;
    }
    uVar15 = param_2[3];
    uVar16 = param_2[2];
    uVar12 = uVar9;
LAB_0065de74:
    if (uVar15 <= uVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar18,uVar15,&DAT_01c03ca8);
    }
    uVar5 = *(uint *)(param_1 + 8);
    if (uVar5 <= uVar12) {
LAB_0065e470:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar12,uVar5,&DAT_01d09180);
    }
    iVar11 = *(int *)(param_1 + 4);
    uVar4 = (uint)*(byte *)(param_1 + 0x2c + (uint)*(byte *)(uVar16 + uVar18));
    do {
      uVar9 = *(uint *)(iVar11 + uVar12 * 4);
      if ((uVar9 & 0xff) == 0xfe) {
        if (uVar4 == (uVar9 & 0xffff) >> 8) goto LAB_0065e084;
      }
      else if ((uVar9 & 0xff) == 0xff) {
        uVar9 = uVar4 + 2 + uVar12;
        if (uVar5 <= uVar9) {
LAB_0065e44c:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar9,uVar5,&DAT_01d09200);
        }
        uVar9 = *(uint *)(iVar11 + uVar9 * 4);
        if (uVar9 != 1) goto LAB_0065dfd8;
      }
      else {
        uVar10 = (uVar9 & 0xff) >> 2;
        if ((uVar9 & 3) != 0) {
          uVar10 = uVar10 + 1;
        }
        uVar9 = uVar12 + 2;
        if (uVar5 < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar9,uVar5,uVar5,&DAT_01d09190);
        }
        if (uVar5 - uVar9 < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar10,uVar5 - uVar9,&DAT_01d091a0);
        }
        iVar13 = uVar10 << 2;
        iVar3 = 0;
        while (iVar8 = iVar3, iVar13 != 0) {
          uVar17 = *(uint *)(iVar11 + uVar9 * 4 + iVar8 * 4);
          if (uVar4 == (uVar17 & 0xff)) {
            uVar12 = uVar10 + uVar9 + iVar8 * 4;
            if (uVar5 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar12,uVar5,&DAT_01d091e0);
            }
            goto LAB_0065dfd4;
          }
          if (uVar4 == (uVar17 & 0xffff) >> 8) {
            uVar12 = uVar10 + uVar9 + iVar8 * 4 + 1;
            if (uVar5 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar12,uVar5,&DAT_01d091d0);
            }
            goto LAB_0065dfd4;
          }
          if (uVar4 == (uVar17 & 0xffffff) >> 0x10) {
            uVar12 = uVar10 + uVar9 + iVar8 * 4 + 2;
            if (uVar5 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar12,uVar5,&DAT_01d091c0);
            }
            goto LAB_0065dfd4;
          }
          iVar13 = iVar13 + -4;
          iVar3 = iVar8 + 1;
          if (uVar4 == uVar17 >> 0x18) {
            uVar12 = uVar10 + uVar9 + iVar8 * 4 + 3;
            if (uVar5 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar12,uVar5,&DAT_01d091b0);
            }
            goto LAB_0065dfd4;
          }
        }
      }
      uVar12 = uVar12 + 1;
      if (uVar5 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar12,uVar5,&DAT_01d09210);
      }
      uVar12 = *(uint *)(iVar11 + uVar12 * 4);
      if (uVar5 <= uVar12) goto LAB_0065e470;
    } while( true );
  }
  uVar9 = param_3[5];
  if (param_3[6] == 0) {
    uVar18 = param_3[8];
    goto LAB_0065de50;
  }
  uVar15 = *(uint *)(param_1 + 8);
  if (uVar15 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar9,uVar15,uVar15,&DAT_01d09240);
  }
  uVar15 = uVar15 - uVar9;
  if (uVar15 == 0) {
LAB_0065e4e8:
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0,0,&DAT_01d08f28);
  }
  uVar16 = param_3[7];
  pbVar6 = (byte *)(*(int *)(param_1 + 4) + uVar9 * 4);
  iVar11 = *(int *)(param_1 + 0x28);
  bVar2 = *pbVar6;
  uVar12 = (uint)bVar2;
  if (uVar12 == 0xff) {
    uVar4 = iVar11 + 2;
    if (uVar15 <= uVar4) {
LAB_0065da30:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar4,uVar15,&DAT_01d08f48);
    }
  }
  else {
    iVar13 = uVar12 + (bVar2 >> 2);
    uVar4 = iVar13 + 2;
    if ((bVar2 & 3) != 0) {
      uVar4 = iVar13 + 3;
    }
    if (uVar15 <= uVar4) {
LAB_0065e57c:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar4,uVar15,&DAT_01d08f38);
    }
  }
  uVar18 = *(uint *)(pbVar6 + uVar4 * 4);
  if (0x7fffffff < uVar18) {
    uVar18 = 1;
  }
  if (uVar18 <= uVar16) {
    param_3[6] = 0;
    *param_3 = 0;
    uVar18 = param_3[8] + 1;
    param_3[8] = uVar18;
    goto LAB_0065de50;
  }
  uVar18 = param_3[8];
  param_3[6] = 1;
  param_3[7] = uVar16 + 1;
  if (uVar12 == 0xff) {
    uVar14 = iVar11 + 2;
  }
  else {
    iVar11 = uVar12 + (bVar2 >> 2);
    uVar14 = iVar11 + 2;
    if ((bVar2 & 3) != 0) {
      uVar14 = iVar11 + 3;
    }
  }
  local_34 = uVar16;
  if (uVar15 <= uVar14) goto LAB_0065e548;
  if ((int)*(uint *)(pbVar6 + uVar14 * 4) < 0) {
    if (uVar16 != 0) goto LAB_0065e3f4;
    uVar14 = *(uint *)(pbVar6 + uVar14 * 4) & 0x7fffffff;
  }
  else {
    uVar14 = uVar16 + 1 + uVar14;
    if (uVar15 <= uVar14) goto LAB_0065e558;
    uVar14 = *(uint *)(pbVar6 + uVar14 * 4);
  }
  uVar9 = *(uint *)(param_1 + 0x14);
  if (uVar9 <= uVar14) goto LAB_0065e53c;
  iVar11 = *(int *)(param_1 + 0x10);
  goto LAB_0065e21c;
LAB_0065dda4:
  uVar4 = uVar4 + 2;
  if (uVar5 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar4,uVar5,&DAT_01d091f0);
  }
LAB_0065dd54:
  uVar9 = *(uint *)(iVar11 + uVar4 * 4);
LAB_0065dd58:
  if (uVar9 <= *(uint *)(param_1 + 0x134)) {
    param_3[4] = 1;
    param_3[5] = uVar9;
    if (uVar9 == 0) {
      return;
    }
    if (uVar9 <= *(uint *)(param_1 + 0x138)) {
      param_3[6] = 1;
      param_3[7] = 1;
      if (uVar5 < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar9,uVar5,uVar5,&DAT_01d09230);
      }
      if (uVar5 == uVar9) goto LAB_0065e4e8;
      pbVar6 = (byte *)(iVar11 + uVar9 * 4);
      uVar5 = uVar5 - uVar9;
      goto LAB_0065e1ac;
    }
  }
  uVar18 = uVar18 + 1;
  param_3[8] = uVar18;
  uVar4 = uVar9;
  if (uVar18 == uVar14) goto LAB_0065ddc0;
  goto LAB_0065dbe0;
LAB_0065e084:
  uVar12 = uVar12 + 2;
  if (uVar5 <= uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar12,uVar5,&DAT_01d091f0);
  }
LAB_0065dfd4:
  uVar9 = *(uint *)(iVar11 + uVar12 * 4);
LAB_0065dfd8:
  if (*(uint *)(param_1 + 0x134) < uVar9) {
    uVar4 = uVar18 + 1;
LAB_0065e068:
    param_3[8] = uVar4;
    uVar12 = uVar9;
    uVar18 = uVar4;
    if (uVar14 <= uVar4) goto LAB_0065e09c;
    goto LAB_0065de74;
  }
  param_3[4] = 1;
  param_3[5] = uVar9;
  if (uVar9 == 0) {
    return;
  }
  if (*(uint *)(param_1 + 0x138) < uVar9) {
    (**(code **)(*(int *)(param_1 + 0x20) + 0x10))
              (&local_34,
               *(int *)(param_1 + 0x1c) + (*(int *)(*(int *)(param_1 + 0x20) + 8) - 1U & 0xfffffff8)
               + 8,uVar16,uVar15,uVar18,uVar14);
    if (local_34 == 0) {
      return;
    }
    uVar4 = local_30;
    if (local_30 <= uVar18) {
      uVar4 = uVar18 + 1;
    }
    goto LAB_0065e068;
  }
  param_3[6] = 1;
  param_3[7] = 1;
  if (uVar5 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar9,uVar5,uVar5,&DAT_01d09230);
  }
  if (uVar5 == uVar9) goto LAB_0065e4e8;
  pbVar6 = (byte *)(iVar11 + uVar9 * 4);
  uVar5 = uVar5 - uVar9;
LAB_0065e1ac:
  bVar2 = *pbVar6;
  if (bVar2 == 0xff) {
    uVar14 = *(int *)(param_1 + 0x28) + 2;
  }
  else {
    iVar11 = (uint)bVar2 + (uint)(bVar2 >> 2);
    uVar14 = iVar11 + 2;
    if ((bVar2 & 3) != 0) {
      uVar14 = iVar11 + 3;
    }
  }
  if (uVar5 <= uVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar14,uVar5,&DAT_01d08ef8);
  }
  if ((int)*(uint *)(pbVar6 + uVar14 * 4) < 0) {
    uVar14 = *(uint *)(pbVar6 + uVar14 * 4) & 0x7fffffff;
  }
  else {
    uVar14 = uVar14 + 1;
    if (uVar5 <= uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar14,uVar5,&DAT_01d08f08);
    }
    uVar14 = *(uint *)(pbVar6 + uVar14 * 4);
  }
  uVar9 = *(uint *)(param_1 + 0x14);
  if (uVar9 <= uVar14) goto LAB_0065e53c;
LAB_0065e218:
  iVar11 = *(int *)(param_1 + 0x10);
LAB_0065e21c:
  uVar18 = uVar18 + 1;
  uVar9 = *(uint *)(iVar11 + uVar14 * 4);
  if (uVar9 <= uVar18) {
    *param_3 = 1;
    param_3[1] = uVar18 - uVar9;
    param_3[2] = uVar18;
    param_3[3] = uVar14;
    return;
  }
LAB_0065e39c:
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("invalid match span",0x25,&DAT_01d08fa8);
}

