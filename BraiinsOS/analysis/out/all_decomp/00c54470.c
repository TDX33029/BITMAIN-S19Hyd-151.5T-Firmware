// FUN_00c54470 @ 00c54470 size=1392 calls_out=8 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c54470(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  double *pdVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  bool bVar22;
  double in_d0;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  int local_94;
  uint local_90;
  double *local_84;
  uint *local_70;
  uint *local_68;
  uint local_64;
  int local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  uVar27 = thunk_FUN_016de0ee(param_1,0x2c0);
  puVar13 = (uint *)((int)uVar27 + (int)((ulonglong)uVar27 >> 0x20));
  if ((char)puVar13[4] == '\0') {
    FUN_015f62e4(&local_48);
    *puVar13 = local_48;
    puVar13[1] = uStack_44;
    puVar13[2] = uStack_40;
    puVar13[3] = uStack_3c;
    *(undefined1 *)(puVar13 + 4) = 1;
  }
  local_58 = *puVar13;
  local_54 = puVar13[1];
  local_50 = puVar13[2];
  local_4c = puVar13[3];
  local_64 = 0;
  local_60 = 0;
  *puVar13 = local_58 + 1;
  puVar13[1] = local_54 + (0xfffffffe < local_58);
  local_5c = 0;
  local_68 = &DAT_005674cc;
  if (param_5 != 0) {
    FUN_00c54a6c(&local_68,param_5,&local_58);
    iVar4 = 0;
LAB_00c54894:
    uVar20 = param_4 + iVar4 * 0x18;
    uVar17 = *(uint *)(uVar20 + 0x10);
    uVar15 = *(uint *)(uVar20 + 0x14);
    uVar8 = FUN_00c54f90(local_58,local_54,local_50,local_4c,uVar17,uVar15);
    if (local_60 == 0) {
      FUN_00c54a6c(&local_68,1,&local_58);
    }
    iVar21 = 0;
    bVar22 = false;
    uVar10 = uVar8;
    do {
      uVar10 = local_64 & uVar10;
      uVar14 = *(uint *)((int)local_68 + uVar10);
      uVar5 = uVar14 ^ (uVar8 >> 0x19) * 0x1010101;
      uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
      while (uVar5 != 0) {
        uVar12 = uVar10 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                         (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                 local_64;
        uVar5 = uVar5 - 1 & uVar5;
        if ((uVar17 == local_68[uVar12 * -3 + -3]) && (uVar15 == local_68[uVar12 * -3 + -2]))
        goto LAB_00c54868;
      }
      uVar5 = uVar14 & 0x80808080;
      uVar12 = local_90;
      if (bVar22) {
LAB_00c547dc:
        if ((uVar5 & uVar14 << 1) != 0) goto LAB_00c5480c;
        bVar22 = true;
        local_90 = uVar12;
      }
      else {
        if (uVar5 != 0) {
          uVar12 = uVar10 + ((uint)LZCOUNT((uVar14 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                           (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                   local_64;
          goto LAB_00c547dc;
        }
        bVar22 = false;
      }
      iVar21 = iVar21 + 4;
      uVar10 = iVar21 + uVar10;
    } while( true );
  }
  local_70 = &DAT_005674cc;
  local_84 = (double *)&DAT_00000001;
  uVar8 = local_50;
  uVar15 = local_4c;
  uVar17 = local_64;
  uVar20 = local_58;
  uVar10 = local_54;
joined_r0x00c54980:
  local_68 = local_70;
  local_64 = uVar17;
  local_58 = uVar20;
  local_54 = uVar10;
  local_50 = uVar8;
  local_4c = uVar15;
  if (param_3 == 0) {
    param_3 = 0;
    iVar4 = 8;
LAB_00c54988:
    bVar22 = uVar17 != 0;
    *param_1 = param_3;
    param_1[1] = iVar4;
    if (bVar22) {
      local_84 = (double *)(uVar17 * 3);
    }
    param_1[2] = param_3;
    if (bVar22) {
      param_3 = uVar17 + (int)local_84 * 4;
    }
    if (bVar22 && param_3 != -0x11) {
      thunk_FUN_016d3fb4(local_70 + (-3 - (int)local_84));
      return;
    }
    return;
  }
  iVar4 = thunk_FUN_016d4a50(param_3 * 0x18);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(8,param_3 * 0x18);
  }
  iVar21 = 0;
LAB_00c545c4:
  if (local_84 == (double *)0x0) {
    pdVar16 = (double *)(param_2 + iVar21 * 0x18);
    uVar12 = *(uint *)(pdVar16 + 2);
    puVar13 = *(uint **)((int)pdVar16 + 0x14);
    uVar5 = FUN_00c54f90(uVar20,uVar10,uVar8,uVar15,uVar12,puVar13);
    uVar14 = uVar5 >> 0x19;
    local_94 = 0;
    while( true ) {
      uVar5 = uVar17 & uVar5;
      uVar11 = *(uint *)((int)local_70 + uVar5);
      uVar6 = uVar11 ^ uVar14 * 0x1010101;
      uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
      while (uVar6 != 0) {
        uVar7 = uVar6 >> 8;
        uVar18 = uVar6 >> 0x10;
        uVar1 = uVar6 >> 0x18;
        uVar2 = uVar6 << 0x18;
        uVar6 = uVar6 - 1 & uVar6;
        uVar7 = uVar5 + ((uint)LZCOUNT(uVar2 | (uVar7 & 0xff) << 0x10 | (uVar18 & 0xff) << 8 | uVar1
                                      ) >> 3) & uVar17;
        puVar9 = local_70 + uVar7 * -3 + -3;
        uVar18 = *puVar9;
        if (uVar12 == uVar18) {
          puVar9 = (uint *)puVar9[1];
        }
        if (uVar12 == uVar18 && puVar13 == puVar9) {
          iVar19 = iVar21 + 1;
          dVar25 = *pdVar16;
          dVar26 = pdVar16[1];
          dVar23 = *(double *)local_70[uVar7 * -3 + -1];
          dVar24 = ((double *)local_70[uVar7 * -3 + -1])[1];
          pdVar16 = (double *)(iVar4 + iVar21 * 0x18);
          *(uint *)(pdVar16 + 2) = uVar12;
          *(uint **)((int)pdVar16 + 0x14) = puVar13;
          *pdVar16 = (1.0 - in_d0) * dVar23 + in_d0 * dVar25;
          pdVar16[1] = (1.0 - in_d0) * dVar24 + in_d0 * dVar26;
          iVar21 = iVar19;
          if (iVar19 != param_3) goto LAB_00c545c4;
          local_84 = pdVar16;
          goto LAB_00c54988;
        }
      }
      if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
      local_94 = local_94 + 4;
      uVar5 = uVar5 + local_94;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8(&DAT_0034f5fc,0x76,&DAT_01870ac4);
LAB_00c5480c:
  uVar10 = (uint)*(char *)((int)local_68 + uVar12);
  if (-1 < (int)uVar10) {
    uVar10 = *local_68 & 0x80808080;
    uVar12 = LZCOUNT((*local_68 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                     (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18);
    uVar10 = (uint)*(byte *)((int)local_68 + (uVar12 >> 3));
    uVar12 = uVar12 >> 3;
  }
  bVar3 = (byte)(uVar8 >> 0x19);
  *(byte *)((int)local_68 + uVar12) = bVar3;
  *(byte *)((int)local_68 + (local_64 & uVar12 - 4) + 4) = bVar3;
  local_60 = local_60 - (uVar10 & 1);
  local_68[uVar12 * -3 + -3] = uVar17;
  local_5c = local_5c + 1;
  local_68[uVar12 * -3 + -2] = uVar15;
LAB_00c54868:
  iVar4 = iVar4 + 1;
  local_68[uVar12 * -3 + -1] = uVar20;
  if (iVar4 == param_5) goto LAB_00c5493c;
  goto LAB_00c54894;
LAB_00c5493c:
  local_84 = (double *)(uint)(local_5c == 0);
  uVar8 = local_50;
  uVar15 = local_4c;
  local_70 = local_68;
  uVar17 = local_64;
  uVar20 = local_58;
  uVar10 = local_54;
  goto joined_r0x00c54980;
}

