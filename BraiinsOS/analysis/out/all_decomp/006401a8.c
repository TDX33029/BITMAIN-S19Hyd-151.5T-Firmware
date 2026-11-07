// FUN_006401a8 @ 006401a8 size=876 calls_out=6 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_006401a8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  int unaff_r4;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  byte *local_2c;
  int local_28;
  
  FUN_015ed628(&local_3c,param_2,1,param_3,param_4);
  FUN_015ec424(&local_30,local_38,local_34);
  if (local_30 == -0x80000000) {
    *param_1 = local_3c;
    param_1[1] = local_38;
    param_1[2] = local_34;
    param_1[3] = (int)local_2c;
    param_1[4] = local_28;
    return;
  }
  pbVar10 = (byte *)0x0;
  pbVar6 = local_2c + local_28;
  if (local_28 == 0) {
    pbVar9 = (byte *)0x0;
    pbVar12 = local_2c;
joined_r0x0064035c:
    do {
      do {
        pbVar5 = pbVar6;
        if (pbVar12 == pbVar5) goto LAB_00640468;
        pbVar6 = pbVar5 + -1;
        uVar16 = (uint)(char)*pbVar6;
        if (0x7fffffff < uVar16) {
          pbVar6 = pbVar5 + -2;
          bVar1 = *pbVar6;
          if ((char)bVar1 < -0x40) {
            pbVar6 = pbVar5 + -3;
            bVar2 = *pbVar6;
            if ((char)bVar2 < -0x40) {
              pbVar6 = pbVar5 + -4;
              uVar13 = (int)(char)bVar2 & 0x3fU | (*pbVar6 & 7) << 6;
            }
            else {
              uVar13 = bVar2 & 0xf;
            }
            uVar13 = (int)(char)bVar1 & 0x3fU | uVar13 << 6;
          }
          else {
            uVar13 = bVar1 & 0x1f;
          }
          uVar16 = uVar16 & 0x3f | uVar13 << 6;
        }
      } while ((uVar16 - 9 < 5) || (uVar16 == 0x20));
      if (uVar16 < 0x80) goto LAB_00640460;
      uVar13 = uVar16 >> 8;
      if (0x1f < uVar13) {
        if (uVar13 == 0x20) {
          bVar1 = (&DAT_0041951b)[uVar16 & 0xff] & 2;
joined_r0x00640448:
          if (bVar1 == 0) goto LAB_00640460;
        }
        else if (!(uVar13 == 0x30 && uVar16 == 0x3000)) goto LAB_00640460;
        goto joined_r0x0064035c;
      }
      if (uVar13 == 0) {
        bVar1 = (&DAT_0041951b)[uVar16 & 0xff] & 1;
        goto joined_r0x00640448;
      }
      if ((uVar13 != 0x16) || (uVar16 != 0x1680)) goto LAB_00640460;
    } while( true );
  }
  pbVar9 = pbVar10;
  pbVar10 = local_2c;
  do {
    pbVar12 = pbVar10 + 1;
    uVar16 = (uint)*pbVar10;
    if (0x7fffffff < (uint)(int)(char)*pbVar10) {
      if (uVar16 < 0xe0) {
        uVar16 = pbVar10[1] & 0x3f | (uVar16 & 0x1f) << 6;
        pbVar12 = pbVar10 + 2;
      }
      else {
        uVar13 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
        if (uVar16 < 0xf0) {
          uVar16 = uVar13 | (uVar16 & 0x1f) << 0xc;
          pbVar12 = pbVar10 + 3;
        }
        else {
          pbVar12 = pbVar10 + 4;
          uVar16 = pbVar10[3] & 0x3f | uVar13 << 6 | (uVar16 & 7) << 0x12;
        }
      }
    }
    pbVar10 = pbVar9 + ((int)pbVar12 - (int)pbVar10);
    if ((4 < uVar16 - 9) && (uVar16 != 0x20)) {
      if (uVar16 < 0x80) goto joined_r0x0064035c;
      uVar13 = uVar16 >> 8;
      if (uVar13 < 0x20) {
        if (uVar13 == 0) {
          bVar1 = (&DAT_0041951b)[uVar16 & 0xff] & 1;
          goto joined_r0x00640338;
        }
        if ((uVar13 != 0x16) || (uVar16 != 0x1680)) goto joined_r0x0064035c;
      }
      else if (uVar13 == 0x20) {
        bVar1 = (&DAT_0041951b)[uVar16 & 0xff] & 2;
joined_r0x00640338:
        if (bVar1 == 0) goto joined_r0x0064035c;
      }
      else if ((uVar13 != 0x30) || (uVar16 != 0x3000)) goto joined_r0x0064035c;
    }
    pbVar9 = pbVar10;
    pbVar10 = pbVar12;
  } while (pbVar12 != pbVar6);
  iVar17 = 1;
  iVar19 = 0;
  pbVar6 = local_2c;
LAB_006404b4:
  FUN_016dd1aa(iVar17,pbVar6,iVar19);
  if (local_30 != 0) {
    thunk_FUN_016d3fb4(local_2c);
  }
  *param_1 = -0x7fffffff;
  param_1[1] = iVar19;
  param_1[2] = iVar17;
  param_1[3] = iVar19;
  if (local_3c == 0) {
    return;
  }
  if (local_38 == 0) {
    return;
  }
  local_30 = iVar19;
  local_2c = (byte *)iVar17;
  local_28 = iVar19;
  iVar19 = FUN_016d3bc8();
  uVar16 = *(byte *)(local_38 + -3) & 0x1f;
  if (((*(byte *)(iVar19 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar19 + 0x14) & 0xfffff000, iVar17 = uVar13 - 0x10, uVar13 == 0)) {
    iVar17 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar19 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar13 = (uint)(*(byte *)(local_38 + -3) >> 5);
  iVar18 = *(int *)(iVar19 + 8) + 0x10;
  iVar14 = iVar17 * uVar16 + iVar17 + -4;
  iVar17 = iVar18 + iVar14;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar13 = *(uint *)(iVar17 + -4);
    if (uVar13 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar17 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar17 - local_38) < uVar13) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar17 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar18 + iVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar1 = *(byte *)(iVar19 + 0x14);
  uVar13 = 1 << uVar16;
  *(undefined1 *)(local_38 + -3) = 0xff;
  *(undefined2 *)(local_38 + -2) = 0;
  do {
    uVar15 = *(uint *)(iVar19 + 0x10);
    uVar11 = *(uint *)(iVar19 + 0xc) | uVar15;
    if ((uVar13 & uVar11) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar15 == 0) || (uVar11 + uVar13 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar19,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar8;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar8 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar19 + 0x10) = uVar13 + uVar15;
      return;
    }
    puVar20 = (uint *)(iVar19 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar20);
      uVar11 = *puVar20;
      if (uVar15 != uVar11) goto LAB_016d409c;
      bVar4 = (bool)hasExclusiveAccess(puVar20);
    } while (!bVar4);
    *puVar20 = uVar13 + uVar15;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar15 == uVar11) {
      return;
    }
  } while( true );
LAB_00640460:
  pbVar10 = pbVar5 + ((int)pbVar10 - (int)pbVar12);
LAB_00640468:
  iVar19 = (int)pbVar10 - (int)pbVar9;
  uVar7 = 0;
  if (iVar19 < 0) {
LAB_00640474:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar7,iVar19);
  }
  pbVar6 = local_2c + (int)pbVar9;
  if (pbVar10 == pbVar9) {
    iVar17 = 1;
    iVar19 = 0;
  }
  else {
    iVar17 = thunk_FUN_016d4a50(iVar19,pbVar6);
    if (iVar17 == 0) {
      uVar7 = 1;
      goto LAB_00640474;
    }
  }
  goto LAB_006404b4;
}

