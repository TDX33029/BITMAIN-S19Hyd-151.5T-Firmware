// FUN_014fb978 @ 014fb978 size=1032 calls_out=2 calls_in=2
// strings: 

void FUN_014fb978(undefined4 *param_1,int *param_2)

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
LAB_014fbb98:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(iVar13,uVar12,uVar15,uVar12,&DAT_018ab560);
          }
        }
        else if (uVar15 != uVar12) goto LAB_014fbb98;
      }
      if (uVar15 == uVar12) {
        if (bVar1 == 0) {
          *(undefined1 *)((int)param_2 + 0xe) = 1;
          goto LAB_014fbd20;
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
          goto LAB_014fbd20;
        }
      }
      param_1[1] = uVar15;
      uVar10 = 0;
      param_1[2] = uVar15;
    }
    goto LAB_014fbd20;
  }
  uVar12 = param_2[7];
  uVar10 = 2;
  uVar15 = param_2[0xd];
  if (uVar12 == uVar15) goto LAB_014fbd20;
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
LAB_014fba20:
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
            goto LAB_014fbb08;
          }
          if (uVar15 <= uVar12 + uVar6) {
            uVar7 = uVar5 + uVar12;
            if (uVar5 + uVar12 < uVar15) {
              uVar7 = uVar15;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar7,uVar15,&DAT_018ab238);
          }
          uVar8 = uVar6 + 1;
        } while (*(char *)(param_2[0xe] + uVar6) == *(char *)(iVar13 + uVar12 + uVar6));
        uVar5 = (uVar12 - uVar11) + 1 + uVar6;
      }
      uVar7 = 0;
      param_2[7] = uVar5;
      goto joined_r0x014fbb4c;
    }
  }
  if (uVar5 != 0) goto LAB_014fbbc8;
  goto LAB_014fbbf8;
  while( true ) {
    uVar7 = uVar7 - 1;
    if (uVar14 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar7,uVar14,&DAT_018ab218);
    }
    uVar8 = uVar7 + uVar12;
    if (uVar15 <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar8,uVar15,&DAT_018ab228);
    }
    if (*(char *)(param_2[0xe] + uVar7) != *(char *)(iVar13 + uVar8)) break;
LAB_014fbb08:
    if (uVar7 <= uVar5) {
      uVar10 = 0;
      param_2[7] = uVar3;
      if (uVar4 != 0xffffffff) {
        param_2[9] = 0;
      }
      param_1[1] = uVar12;
      param_1[2] = uVar3;
      goto LAB_014fbd20;
    }
  }
  param_2[7] = uVar2;
  uVar7 = uVar14 - param_2[6];
  uVar5 = uVar2;
joined_r0x014fbb4c:
  if (uVar4 != 0xffffffff) {
    param_2[9] = uVar7;
    local_2c = uVar7;
  }
  uVar7 = uVar5 + (uVar14 - 1);
  if (uVar15 <= uVar7) goto LAB_014fbccc;
  goto LAB_014fba20;
LAB_014fbccc:
  uVar5 = uVar15;
LAB_014fbbc8:
  uVar7 = uVar5;
  do {
    if (uVar7 < uVar15) {
      if (-0x41 < *(char *)(iVar13 + uVar7)) {
        uVar15 = uVar7;
        goto LAB_014fbca8;
      }
    }
    else if (uVar15 == uVar7) goto LAB_014fbca8;
    bVar16 = uVar7 != 0xffffffff;
    uVar7 = uVar7 + 1;
  } while (bVar16);
LAB_014fbbf8:
  uVar15 = 0;
LAB_014fbca8:
  param_1[2] = uVar15;
  if (uVar5 <= uVar15) {
    uVar5 = uVar15;
  }
  param_1[1] = uVar12;
  param_2[7] = uVar5;
  uVar10 = 1;
LAB_014fbd20:
  *param_1 = uVar10;
  return;
}

