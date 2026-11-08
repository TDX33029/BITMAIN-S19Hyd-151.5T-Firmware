// FUN_010eabe8 @ 010eabe8 size=1292 calls_out=6 calls_in=0
// strings: 

void FUN_010eabe8(undefined1 *param_1,byte **param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  code *pcVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined1 uVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  byte **ppbVar17;
  undefined4 *puVar18;
  byte **ppbVar19;
  byte **ppbVar20;
  byte *pbVar21;
  uint local_68;
  uint uStack_64;
  byte **ppbStack_60;
  undefined *local_58;
  undefined4 local_54;
  byte *local_50;
  int local_4c;
  undefined4 local_48;
  uint local_44;
  byte local_40;
  uint3 local_3f;
  uint local_3c;
  byte **local_38;
  code *local_34;
  undefined1 local_30;
  undefined2 uStack_2f;
  undefined1 uStack_2d;
  byte **local_2c;
  
  ppbVar19 = &local_50;
  local_34 = FUN_00fac4cc;
  local_58 = &DAT_00414725;
  local_30 = SUB41(&local_58,0);
  uStack_2f = (undefined2)((uint)&local_58 >> 8);
  uStack_2d = (undefined1)((uint)&local_58 >> 0x18);
  puVar18 = &DAT_0157d360;
  local_54 = 5;
  local_2c = (byte **)&DAT_0157d360;
  local_38 = param_2;
  FUN_00600d2c(ppbVar19,&DAT_00584234,&local_38);
  iVar8 = local_4c;
  uStack_2f = 0;
  uStack_2d = 0;
  local_38 = (byte **)0x0;
  local_2c = (byte **)((uint)local_2c & 0xffff0000);
  local_34 = (code *)0x1b6;
  local_30 = 1;
  FUN_015ec1bc(&local_40,&local_38,local_4c,local_48);
  uVar16 = local_3c;
  uVar13 = (uint)local_40;
  if (uVar13 == 4) {
    local_44 = local_3c;
    local_30 = 0;
    uStack_2f = 0;
    uStack_2d = 0;
    local_34 = (code *)0x1;
    local_38 = (byte **)0x0;
    FUN_015c4bfc(&local_40,&local_44,&local_38);
    pcVar6 = local_34;
    ppbVar20 = local_38;
    uVar13 = (uint)local_40;
    if (uVar13 == 4) {
      uVar4 = CONCAT13(uStack_2d,CONCAT21(uStack_2f,local_30));
      FUN_016dffb2(uVar16);
      uVar15 = (uint)pcVar6 >> 8;
      uVar13 = (uint)pcVar6 & 0xff;
    }
    else {
      if (local_38 != (byte **)0x0) {
        thunk_FUN_016d3fb4(local_34);
      }
      uVar15 = (uint)local_3f;
      FUN_016dffb2(uVar16);
      ppbVar20 = (byte **)&DAT_80000000;
      uVar4 = local_3c;
    }
  }
  else {
    ppbVar20 = (byte **)&DAT_80000000;
    uVar15 = (uint)local_3f;
    uVar4 = local_3c;
  }
  if (local_50 != (byte *)0x0) {
    thunk_FUN_016d3fb4(iVar8);
  }
  if (ppbVar20 == (byte **)&DAT_80000000) {
    pbVar14 = (byte *)(uVar15 | uVar4 << 0x18);
    puVar18 = (undefined4 *)(uVar4 >> 8);
    ppbVar17 = (byte **)0x0;
    goto LAB_010eb0b8;
  }
  pbVar21 = (byte *)(uVar15 << 8 | uVar13);
  pbVar11 = (byte *)0x0;
  pbVar10 = pbVar21 + uVar4;
  if (uVar4 == 0) {
    pbVar7 = (byte *)0x0;
    pbVar14 = pbVar21;
joined_r0x010eae84:
    do {
      do {
        pbVar5 = pbVar10;
        if (pbVar14 == pbVar5) goto LAB_010eaf9c;
        pbVar10 = pbVar5 + -1;
        uVar13 = (uint)(char)*pbVar10;
        if (0x7fffffff < uVar13) {
          pbVar10 = pbVar5 + -2;
          bVar1 = *pbVar10;
          if ((char)bVar1 < -0x40) {
            pbVar10 = pbVar5 + -3;
            bVar2 = *pbVar10;
            if ((char)bVar2 < -0x40) {
              pbVar10 = pbVar5 + -4;
              uVar16 = (int)(char)bVar2 & 0x3fU | (*pbVar10 & 7) << 6;
            }
            else {
              uVar16 = bVar2 & 0xf;
            }
            uVar16 = (int)(char)bVar1 & 0x3fU | uVar16 << 6;
          }
          else {
            uVar16 = bVar1 & 0x1f;
          }
          uVar13 = uVar13 & 0x3f | uVar16 << 6;
        }
      } while ((uVar13 - 9 < 5) || (uVar13 == 0x20));
      if (uVar13 < 0x80) goto LAB_010eaf88;
      uVar16 = uVar13 >> 8;
      if (0x1f < uVar16) {
        if (uVar16 == 0x20) {
          bVar1 = (&DAT_0041951b)[uVar13 & 0xff] & 2;
joined_r0x010eaf70:
          if (bVar1 == 0) goto LAB_010eaf88;
        }
        else if (uVar16 != 0x30 || uVar13 != 0x3000) goto LAB_010eaf88;
        goto joined_r0x010eae84;
      }
      if (uVar16 == 0) {
        bVar1 = (&DAT_0041951b)[uVar13 & 0xff] & 1;
        goto joined_r0x010eaf70;
      }
      if ((uVar16 != 0x16) || (uVar13 != 0x1680)) goto LAB_010eaf88;
    } while( true );
  }
  pbVar7 = pbVar11;
  pbVar11 = pbVar21;
  do {
    pbVar14 = pbVar11 + 1;
    uVar13 = (uint)*pbVar11;
    if (0x7fffffff < (uint)(int)(char)*pbVar11) {
      if (uVar13 < 0xe0) {
        uVar13 = pbVar11[1] & 0x3f | (uVar13 & 0x1f) << 6;
        pbVar14 = pbVar11 + 2;
      }
      else {
        uVar16 = pbVar11[2] & 0x3f | (pbVar11[1] & 0x3f) << 6;
        if (uVar13 < 0xf0) {
          uVar13 = uVar16 | (uVar13 & 0x1f) << 0xc;
          pbVar14 = pbVar11 + 3;
        }
        else {
          pbVar14 = pbVar11 + 4;
          uVar13 = pbVar11[3] & 0x3f | uVar16 << 6 | (uVar13 & 7) << 0x12;
        }
      }
    }
    pbVar11 = pbVar7 + ((int)pbVar14 - (int)pbVar11);
    if ((4 < uVar13 - 9) && (uVar13 != 0x20)) {
      if (uVar13 < 0x80) goto joined_r0x010eae84;
      uVar16 = uVar13 >> 8;
      if (uVar16 < 0x20) {
        if (uVar16 == 0) {
          bVar1 = (&DAT_0041951b)[uVar13 & 0xff] & 1;
joined_r0x010eae4c:
          if (bVar1 == 0) goto joined_r0x010eae84;
        }
        else if ((uVar16 != 0x16) || (uVar13 != 0x1680)) goto joined_r0x010eae84;
      }
      else {
        if (uVar16 == 0x20) {
          bVar1 = (&DAT_0041951b)[uVar13 & 0xff] & 2;
          goto joined_r0x010eae4c;
        }
        if ((uVar16 != 0x30) || (uVar13 != 0x3000)) goto joined_r0x010eae84;
      }
    }
    pbVar7 = pbVar11;
    pbVar11 = pbVar14;
  } while (pbVar14 != pbVar10);
  iVar8 = 0;
  pbVar10 = pbVar21;
LAB_010eafdc:
  local_34 = (code *)&DAT_0157d360;
  local_50 = pbVar10;
  local_4c = iVar8;
  local_38 = ppbVar19;
  FUN_00600d2c(&local_68,&DAT_00580007,&local_38);
  ppbVar17 = (byte **)0x1;
  bVar3 = false;
  puVar18 = (undefined4 *)(uStack_64 >> 8);
  pbVar14 = (byte *)(local_68 >> 8 | uStack_64 << 0x18);
  uVar13 = local_68 & 0xff;
  ppbVar19 = ppbStack_60;
  goto joined_r0x010eb0a0;
LAB_010eaf88:
  pbVar11 = pbVar5 + ((int)pbVar11 - (int)pbVar14);
LAB_010eaf9c:
  pbVar10 = pbVar21 + (int)pbVar7;
  iVar8 = (int)pbVar11 - (int)pbVar7;
  if (iVar8 != 1) goto LAB_010eafdc;
  ppbVar17 = (byte **)0x4;
  bVar3 = true;
  if (*pbVar10 == 0x30) {
    uVar13 = 0;
  }
  else {
    if (*pbVar10 != 0x31) goto LAB_010eafdc;
    uVar13 = 1;
  }
joined_r0x010eb0a0:
  if (ppbVar20 != (byte **)0x0) {
    thunk_FUN_016d3fb4(pbVar21);
  }
  uVar12 = (undefined1)uVar13;
  if (bVar3) {
    if (uVar13 != 0) {
      uVar12 = 1;
    }
    param_1[1] = uVar12;
    *param_1 = 0;
    return;
  }
LAB_010eb0b8:
  local_30 = (undefined1)((uint)pbVar14 >> 0x18);
  uStack_2d = (undefined1)((uint)puVar18 >> 0x10);
  local_34 = (code *)CONCAT31((int3)pbVar14,(char)uVar13);
  uStack_2f = SUB42(puVar18,0);
  local_38 = ppbVar17;
  local_2c = ppbVar19;
  uVar9 = FUN_010ea768(&local_38);
  *(undefined4 *)(param_1 + 4) = uVar9;
  *param_1 = 1;
  return;
}

