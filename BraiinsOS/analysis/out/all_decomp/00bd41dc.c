// FUN_00bd41dc @ 00bd41dc size=1112 calls_out=2 calls_in=6
// strings: 

void FUN_00bd41dc(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  uint local_2c;
  
  if (*param_2 != 1) {
    uVar6 = 2;
    if (*(char *)((int)param_2 + 0xe) != '\0') goto LAB_00bd44b0;
    bVar1 = *(byte *)(param_2 + 3);
    uVar15 = param_2[1];
    iVar13 = param_2[0xc];
    uVar12 = param_2[0xd];
    *(byte *)(param_2 + 3) = bVar1 ^ 1;
    if (uVar15 != 0) {
      if (uVar15 < uVar12) {
        if (*(char *)(iVar13 + uVar15) < -0x40) {
LAB_00bd42c8:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(iVar13,uVar12,uVar15,uVar12,&DAT_018aeb58);
        }
      }
      else if (uVar15 != uVar12) goto LAB_00bd42c8;
    }
    if (uVar15 == uVar12) {
      if (bVar1 == 0) {
        *(undefined1 *)((int)param_2 + 0xe) = 1;
        *param_1 = 2;
        return;
      }
    }
    else {
      pbVar4 = (byte *)(iVar13 + uVar15);
      uVar12 = (uint)*pbVar4;
      if (0x7fffffff < (uint)(int)(char)*pbVar4) {
        if (uVar12 < 0xe0) {
          uVar12 = pbVar4[1] & 0x3f | (uVar12 & 0x1f) << 6;
        }
        else {
          uVar8 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
          if (0xef < uVar12) {
            uVar12 = pbVar4[3] & 0x3f | uVar8 << 6 | (uVar12 & 7) << 0x12;
            if (bVar1 != 0) goto LAB_00bd4578;
            goto LAB_00bd45ac;
          }
          uVar12 = uVar8 | (uVar12 & 0x1f) << 0xc;
        }
      }
      if (bVar1 == 0) {
LAB_00bd45ac:
        iVar13 = 1;
        if (0x7f < uVar12) {
          iVar13 = 2;
        }
        if ((0x7ff < uVar12) && (iVar13 = 4, uVar12 < 0x10000)) {
          iVar13 = 3;
        }
        param_1[1] = uVar15;
        param_1[2] = iVar13 + uVar15;
        param_2[1] = iVar13 + uVar15;
        *param_1 = 1;
        return;
      }
    }
LAB_00bd4578:
    param_1[1] = uVar15;
    param_1[2] = uVar15;
    *param_1 = 0;
    return;
  }
  uVar12 = param_2[7];
  uVar6 = 2;
  uVar15 = param_2[0xd];
  if (uVar12 == uVar15) {
LAB_00bd44b0:
    *param_1 = uVar6;
    return;
  }
  uVar14 = param_2[0xf];
  iVar13 = param_2[0xc];
  uVar9 = uVar12 + (uVar14 - 1);
  uVar8 = uVar15;
  if (uVar9 < uVar15) {
    uVar5 = uVar12 + uVar14;
    uVar11 = param_2[4];
    uVar7 = param_2[9];
    uVar3 = param_2[6] + uVar12;
    uVar8 = uVar12;
    local_2c = uVar7;
LAB_00bd4310:
    if (uVar12 == uVar8) {
      uVar9 = *(byte *)(iVar13 + uVar9) & 0x3f;
      uVar8 = (uint)param_2[2] >> uVar9 | param_2[3] << (0x20 - uVar9 & 0xff);
      if (-1 < (int)(uVar9 - 0x20)) {
        uVar8 = (uint)param_2[3] >> (uVar9 - 0x20 & 0xff);
      }
      if ((uVar8 & 1) == 0) {
        uVar9 = 0;
        param_2[7] = uVar5;
        uVar8 = uVar5;
      }
      else {
        uVar9 = uVar11;
        if (uVar11 < local_2c) {
          uVar9 = local_2c;
        }
        if (uVar7 == 0xffffffff) {
          uVar9 = uVar11;
        }
        uVar10 = uVar14;
        if (uVar14 < uVar9) {
          uVar10 = uVar9;
        }
        uVar2 = uVar9;
        do {
          uVar8 = uVar2;
          if (uVar10 == uVar8) {
            uVar8 = uVar11;
            uVar9 = uVar7 + 1;
            if (uVar7 + 1 != 0) {
              uVar9 = local_2c;
            }
            goto LAB_00bd43e4;
          }
          if (uVar15 <= uVar12 + uVar8) {
            uVar8 = uVar9 + uVar12;
            if (uVar9 + uVar12 < uVar15) {
              uVar8 = uVar15;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar8,uVar15,&DAT_018aeb30);
          }
          uVar2 = uVar8 + 1;
        } while (*(char *)(param_2[0xe] + uVar8) == *(char *)(iVar13 + uVar12 + uVar8));
        uVar8 = (uVar12 - uVar11) + 1 + uVar8;
        param_2[7] = uVar8;
        uVar9 = 0;
      }
      goto joined_r0x00bd43bc;
    }
  }
  if (uVar8 == 0) {
    uVar15 = 0;
    uVar8 = 0;
    goto LAB_00bd4550;
  }
  goto LAB_00bd4444;
  while( true ) {
    uVar8 = uVar8 - 1;
    if (uVar14 <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar8,uVar14,&DAT_018aeb10);
    }
    uVar10 = uVar8 + uVar12;
    if (uVar15 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar10,uVar15,&DAT_018aeb20);
    }
    if (*(char *)(param_2[0xe] + uVar8) != *(char *)(iVar13 + uVar10)) break;
LAB_00bd43e4:
    if (uVar8 <= uVar9) {
      param_2[7] = uVar5;
      uVar6 = 0;
      param_1[1] = uVar12;
      if (uVar7 != 0xffffffff) {
        param_2[9] = 0;
      }
      param_1[2] = uVar5;
      goto LAB_00bd44b0;
    }
  }
  param_2[7] = uVar3;
  uVar9 = uVar14 - param_2[6];
  uVar8 = uVar3;
joined_r0x00bd43bc:
  if (uVar7 != 0xffffffff) {
    param_2[9] = uVar9;
    local_2c = uVar9;
  }
  uVar9 = uVar8 + (uVar14 - 1);
  if (uVar15 <= uVar9) goto LAB_00bd4590;
  goto LAB_00bd4310;
LAB_00bd4590:
  uVar8 = uVar15;
LAB_00bd4444:
  uVar9 = uVar8;
  do {
    if (uVar9 < uVar15) {
      if (-0x41 < *(char *)(iVar13 + uVar9)) {
        uVar15 = uVar9;
LAB_00bd4478:
        if (uVar8 <= uVar15) {
          uVar8 = uVar15;
        }
        goto LAB_00bd4550;
      }
    }
    else if (uVar15 == uVar9) goto LAB_00bd4478;
    bVar16 = uVar9 != 0xffffffff;
    uVar9 = uVar9 + 1;
  } while (bVar16);
  uVar15 = 0;
LAB_00bd4550:
  param_2[7] = uVar8;
  param_1[2] = uVar15;
  param_1[1] = uVar12;
  *param_1 = 1;
  return;
}

