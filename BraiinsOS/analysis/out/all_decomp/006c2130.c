// FUN_006c2130 @ 006c2130 size=856 calls_out=6 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_006c2130(int *param_1,undefined4 param_2,undefined4 param_3)

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
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_4c;
  byte *local_48;
  int local_44;
  byte *local_40;
  int local_3c;
  undefined1 auStack_34 [12];
  undefined4 *local_28;
  undefined4 *local_24;
  
  uStack_54 = param_2;
  uStack_50 = param_3;
  FUN_015ec424(&local_4c);
  if (local_4c == -0x80000000) {
    local_3c = local_44;
    local_24 = &DAT_0157d360;
    local_28 = &uStack_54;
    local_40 = local_48;
    FUN_00600d2c(auStack_34,&DAT_0057635b,&local_28);
    iVar17 = FUN_0074e794(&local_40,auStack_34);
    *param_1 = -0x80000000;
    param_1[1] = iVar17;
    return;
  }
  pbVar10 = (byte *)0x0;
  pbVar6 = local_48 + local_44;
  if (local_44 == 0) {
    pbVar9 = (byte *)0x0;
    pbVar12 = local_48;
joined_r0x006c22a4:
    do {
      do {
        pbVar5 = pbVar6;
        if (pbVar12 == pbVar5) goto LAB_006c23b0;
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
      if (uVar16 < 0x80) goto LAB_006c23a8;
      uVar13 = uVar16 >> 8;
      if (0x1f < uVar13) {
        if (uVar13 == 0x20) {
          bVar1 = (&DAT_0041951b)[uVar16 & 0xff] & 2;
joined_r0x006c2390:
          if (bVar1 == 0) goto LAB_006c23a8;
        }
        else if (!(uVar13 == 0x30 && uVar16 == 0x3000)) goto LAB_006c23a8;
        goto joined_r0x006c22a4;
      }
      if (uVar13 == 0) {
        bVar1 = (&DAT_0041951b)[uVar16 & 0xff] & 1;
        goto joined_r0x006c2390;
      }
      if ((uVar13 != 0x16) || (uVar16 != 0x1680)) goto LAB_006c23a8;
    } while( true );
  }
  pbVar9 = pbVar10;
  pbVar10 = local_48;
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
      if (uVar16 < 0x80) goto joined_r0x006c22a4;
      uVar13 = uVar16 >> 8;
      if (uVar13 < 0x20) {
        if (uVar13 == 0) {
          bVar1 = (&DAT_0041951b)[uVar16 & 0xff] & 1;
          goto joined_r0x006c2280;
        }
        if ((uVar13 != 0x16) || (uVar16 != 0x1680)) goto joined_r0x006c22a4;
      }
      else if (uVar13 == 0x20) {
        bVar1 = (&DAT_0041951b)[uVar16 & 0xff] & 2;
joined_r0x006c2280:
        if (bVar1 == 0) goto joined_r0x006c22a4;
      }
      else if ((uVar13 != 0x30) || (uVar16 != 0x3000)) goto joined_r0x006c22a4;
    }
    pbVar9 = pbVar10;
    pbVar10 = pbVar12;
  } while (pbVar12 != pbVar6);
  iVar19 = 1;
  iVar17 = 0;
  pbVar6 = local_48;
LAB_006c23f4:
  FUN_016dd1aa(iVar19,pbVar6,iVar17);
  *param_1 = iVar17;
  param_1[1] = iVar19;
  param_1[2] = iVar17;
  if (local_4c == 0) {
    return;
  }
  if (local_48 == (byte *)0x0) {
    return;
  }
  iVar17 = FUN_016d3bc8();
  uVar16 = local_48[-3] & 0x1f;
  if (((*(byte *)(iVar17 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar17 + 0x14) & 0xfffff000, iVar19 = uVar13 - 0x10, uVar13 == 0)) {
    iVar19 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar17 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar13 = (uint)(local_48[-3] >> 5);
  iVar18 = *(int *)(iVar17 + 8) + 0x10;
  iVar14 = iVar19 * uVar16 + iVar19 + -4;
  iVar19 = iVar18 + iVar14;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar13 = *(uint *)(iVar19 + -4);
    if (uVar13 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar19 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar19 - (int)local_48) < uVar13) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar19 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar18 + iVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar1 = *(byte *)(iVar17 + 0x14);
  uVar13 = 1 << uVar16;
  local_48[-3] = 0xff;
  local_48[-0xffffffff00000002] = 0;
  local_48[-0xffffffff00000001] = 0;
  do {
    uVar15 = *(uint *)(iVar17 + 0x10);
    uVar11 = *(uint *)(iVar17 + 0xc) | uVar15;
    if ((uVar13 & uVar11) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar15 == 0) || (uVar11 + uVar13 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar17,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (local_24 == (undefined4 *)0x0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar8;
      FUN_016d6ac4(local_28,local_24);
      *puVar8 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar17 + 0x10) = uVar13 + uVar15;
      return;
    }
    puVar20 = (uint *)(iVar17 + 0x10);
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
LAB_006c23a8:
  pbVar10 = pbVar5 + ((int)pbVar10 - (int)pbVar12);
LAB_006c23b0:
  iVar17 = (int)pbVar10 - (int)pbVar9;
  uVar7 = 0;
  if (-1 < iVar17) {
    pbVar6 = local_48 + (int)pbVar9;
    iVar19 = 1;
    if ((pbVar10 == pbVar9) || (iVar19 = thunk_FUN_016d4a50(iVar17,pbVar6), iVar19 != 0))
    goto LAB_006c23f4;
    uVar7 = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar7,iVar17);
}

