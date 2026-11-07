// FUN_0189c7e4 @ 0189c7e4 size=1032 calls_out=2 calls_in=2
// strings: 

void FUN_0189c7e4(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  uint local_2c;
  
  if (*param_2 != 1) {
    uVar10 = 2;
    if (*(char *)((int)param_2 + 0xe) == '\0') {
      bVar1 = *(byte *)(param_2 + 3);
      uVar15 = param_2[1];
      iVar13 = param_2[0xc];
      uVar12 = param_2[0xd];
      *(byte *)(param_2 + 3) = bVar1 ^ 1;
      if (uVar15 != 0) {
        if (uVar15 < uVar12) {
          if (*(char *)(iVar13 + uVar15) < -0x40) {
LAB_0189ca04:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(iVar13,uVar12,uVar15,uVar12,&DAT_01d28134);
          }
        }
        else if (uVar15 != uVar12) goto LAB_0189ca04;
      }
      if (uVar15 == uVar12) {
        if (bVar1 == 0) {
          *(undefined1 *)((int)param_2 + 0xe) = 1;
          goto LAB_0189cb8c;
        }
      }
      else {
        pbVar9 = (byte *)(iVar13 + uVar15);
        uVar12 = (uint)*pbVar9;
        if (0x7fffffff < (uint)(int)(char)*pbVar9) {
          if (uVar12 < 0xe0) {
            uVar12 = pbVar9[1] & 0x3f | (uVar12 & 0x1f) << 6;
          }
          else {
            uVar5 = pbVar9[2] & 0x3f | (pbVar9[1] & 0x3f) << 6;
            if (uVar12 < 0xf0) {
              uVar12 = uVar5 | (uVar12 & 0x1f) << 0xc;
            }
            else {
              uVar12 = pbVar9[3] & 0x3f | uVar5 << 6 | (uVar12 & 7) << 0x12;
            }
          }
        }
        if (bVar1 == 0) {
          iVar13 = 1;
          if (0x7f < uVar12) {
            iVar13 = 2;
          }
          uVar10 = 1;
          if ((0x7ff < uVar12) && (iVar13 = 4, uVar12 < 0x10000)) {
            iVar13 = 3;
          }
          param_2[1] = iVar13 + uVar15;
          param_1[1] = uVar15;
          param_1[2] = iVar13 + uVar15;
          goto LAB_0189cb8c;
        }
      }
      param_1[1] = uVar15;
      uVar10 = 0;
      param_1[2] = uVar15;
    }
    goto LAB_0189cb8c;
  }
  uVar12 = param_2[7];
  uVar10 = 2;
  uVar15 = param_2[0xd];
  if (uVar12 == uVar15) goto LAB_0189cb8c;
  uVar14 = param_2[0xf];
  iVar13 = param_2[0xc];
  uVar7 = uVar12 + (uVar14 - 1);
  uVar5 = uVar15;
  if (uVar7 < uVar15) {
    uVar3 = uVar12 + uVar14;
    uVar11 = param_2[4];
    uVar2 = param_2[6] + uVar12;
    uVar4 = param_2[9];
    uVar5 = uVar12;
    local_2c = uVar4;
LAB_0189c88c:
    if (uVar12 == uVar5) {
      uVar7 = *(byte *)(iVar13 + uVar7) & 0x3f;
      uVar5 = (uint)param_2[2] >> uVar7 | param_2[3] << (0x20 - uVar7 & 0xff);
      if (-1 < (int)(uVar7 - 0x20)) {
        uVar5 = (uint)param_2[3] >> (uVar7 - 0x20 & 0xff);
      }
      if ((uVar5 & 1) == 0) {
        uVar5 = uVar3;
      }
      else {
        uVar5 = uVar11;
        if (uVar11 < local_2c) {
          uVar5 = local_2c;
        }
        if (uVar4 == 0xffffffff) {
          uVar5 = uVar11;
        }
        uVar7 = uVar14;
        if (uVar14 < uVar5) {
          uVar7 = uVar5;
        }
        uVar8 = uVar5;
        do {
          uVar6 = uVar8;
          if (uVar7 == uVar6) {
            uVar5 = uVar4 + 1;
            uVar7 = uVar11;
            if (uVar4 + 1 != 0) {
              uVar5 = local_2c;
            }
            goto LAB_0189c974;
          }
          if (uVar15 <= uVar12 + uVar6) {
            uVar7 = uVar5 + uVar12;
            if (uVar5 + uVar12 < uVar15) {
              uVar7 = uVar15;
            }
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar7,uVar15,&DAT_01d27e34);
          }
          uVar8 = uVar6 + 1;
        } while (*(char *)(param_2[0xe] + uVar6) == *(char *)(iVar13 + uVar12 + uVar6));
        uVar5 = (uVar12 - uVar11) + 1 + uVar6;
      }
      uVar7 = 0;
      param_2[7] = uVar5;
      goto joined_r0x0189c9b8;
    }
  }
  if (uVar5 != 0) goto LAB_0189ca34;
  goto LAB_0189ca64;
  while( true ) {
    uVar7 = uVar7 - 1;
    if (uVar14 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar7,uVar14,&DAT_01d27e14);
    }
    uVar8 = uVar7 + uVar12;
    if (uVar15 <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar8,uVar15,&DAT_01d27e24);
    }
    if (*(char *)(param_2[0xe] + uVar7) != *(char *)(iVar13 + uVar8)) break;
LAB_0189c974:
    if (uVar7 <= uVar5) {
      uVar10 = 0;
      param_2[7] = uVar3;
      if (uVar4 != 0xffffffff) {
        param_2[9] = 0;
      }
      param_1[1] = uVar12;
      param_1[2] = uVar3;
      goto LAB_0189cb8c;
    }
  }
  param_2[7] = uVar2;
  uVar7 = uVar14 - param_2[6];
  uVar5 = uVar2;
joined_r0x0189c9b8:
  if (uVar4 != 0xffffffff) {
    param_2[9] = uVar7;
    local_2c = uVar7;
  }
  uVar7 = uVar5 + (uVar14 - 1);
  if (uVar15 <= uVar7) goto LAB_0189cb38;
  goto LAB_0189c88c;
LAB_0189cb38:
  uVar5 = uVar15;
LAB_0189ca34:
  uVar7 = uVar5;
  do {
    if (uVar7 < uVar15) {
      if (-0x41 < *(char *)(iVar13 + uVar7)) {
        uVar15 = uVar7;
        goto LAB_0189cb14;
      }
    }
    else if (uVar15 == uVar7) goto LAB_0189cb14;
    bVar16 = uVar7 != 0xffffffff;
    uVar7 = uVar7 + 1;
  } while (bVar16);
LAB_0189ca64:
  uVar15 = 0;
LAB_0189cb14:
  param_1[2] = uVar15;
  if (uVar5 <= uVar15) {
    uVar5 = uVar15;
  }
  param_1[1] = uVar12;
  param_2[7] = uVar5;
  uVar10 = 1;
LAB_0189cb8c:
  *param_1 = uVar10;
  return;
}

