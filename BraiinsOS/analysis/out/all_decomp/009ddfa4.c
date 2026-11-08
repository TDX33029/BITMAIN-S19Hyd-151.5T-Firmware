// FUN_009ddfa4 @ 009ddfa4 size=1708 calls_out=17 calls_in=0
// strings: lock poisonedPatternIDError

undefined4 FUN_009ddfa4(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  char cVar20;
  int iVar21;
  uint uVar22;
  undefined4 *puVar23;
  uint uVar24;
  bool bVar25;
  undefined8 uVar26;
  uint local_c0;
  int local_8c;
  uint local_88;
  uint local_84;
  undefined4 *local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  undefined4 local_2c;
  
  iVar3 = FUN_016a0564(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),param_2);
  iVar4 = 0;
  if (iVar3 != 0) {
    cVar20 = '\x02';
    bVar25 = *(char *)(param_1 + 0x110) != '\0';
    bVar1 = 0;
    if (bVar25) {
      bVar1 = *(byte *)(param_2 + 0x3c);
    }
    if (bVar25 && (bVar1 & 2) != 0) {
      iVar4 = *(int *)(param_1 + 0x2c);
      local_88 = 6;
      local_8c = param_2;
      if (iVar4 != 0) {
        iVar3 = iVar4 * 0x28;
        iVar11 = *(int *)(param_1 + 0x28) + iVar4 * 0x28;
        iVar4 = *(int *)(param_1 + 0x28);
LAB_009de0f0:
        iVar5 = FUN_016a88f4(iVar4,param_2);
        iVar21 = iVar4 + 0x28;
        if ((iVar5 == 0) || (FUN_016a9570(&local_50,&local_8c,&local_88,iVar4), local_30 == 6))
        goto LAB_009de0e4;
        local_78 = local_50;
        uStack_74 = uStack_4c;
        uStack_70 = uStack_48;
        uStack_6c = uStack_44;
        local_68 = local_40;
        local_64 = uStack_3c;
        uStack_60 = uStack_38;
        uStack_5c = uStack_34;
        local_58 = local_30;
        local_54 = local_2c;
        puVar6 = (undefined4 *)thunk_FUN_016d4a50(0xa0);
        if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(8,0xa0);
        }
        *puVar6 = local_78;
        puVar6[1] = uStack_74;
        puVar6[2] = uStack_70;
        puVar6[3] = uStack_6c;
        puVar6[4] = local_68;
        puVar6[5] = local_64;
        puVar6[6] = uStack_60;
        puVar6[7] = uStack_5c;
        puVar6[8] = local_58;
        puVar6[9] = local_54;
        local_84 = 4;
        uVar10 = 1;
        local_80 = puVar6;
        while (local_7c = uVar10, iVar21 != iVar11) {
          iVar4 = iVar21;
          while( true ) {
            iVar3 = FUN_016a88f4(iVar4,param_2);
            iVar21 = iVar4 + 0x28;
            if ((iVar3 != 0) && (FUN_016a9570(&local_50,&local_8c,&local_88,iVar4), local_30 != 6))
            break;
            iVar4 = iVar21;
            if (iVar21 == iVar11) goto LAB_009de260;
          }
          local_78 = local_50;
          uStack_74 = uStack_4c;
          uStack_70 = uStack_48;
          uStack_6c = uStack_44;
          local_68 = local_40;
          local_64 = uStack_3c;
          uStack_60 = uStack_38;
          uStack_5c = uStack_34;
          local_58 = local_30;
          local_54 = local_2c;
          if (uVar10 == local_84) {
            FUN_016a8688(&local_84,uVar10,1,8,0x28);
            puVar6 = local_80;
          }
          puVar23 = puVar6 + uVar10 * 10;
          *puVar23 = local_78;
          puVar23[1] = uStack_74;
          puVar23[2] = uStack_70;
          puVar23[3] = uStack_6c;
          puVar23[4] = local_68;
          puVar23[5] = local_64;
          puVar23[6] = uStack_60;
          puVar23[7] = uStack_5c;
          puVar23[8] = local_58;
          puVar23[9] = local_54;
          uVar10 = uVar10 + 1;
        }
LAB_009de260:
        uVar17 = local_84;
        goto LAB_009de274;
      }
      uVar17 = 0;
      puVar6 = (undefined4 *)&DAT_00000008;
      goto LAB_009de4b8;
    }
    goto LAB_009ddfe4;
  }
  goto LAB_009de02c;
LAB_009de0e4:
  iVar3 = iVar3 + -0x28;
  iVar4 = iVar21;
  if (iVar3 == 0) goto LAB_009de268;
  goto LAB_009de0f0;
LAB_009de4ec:
  uVar16 = (uint)*(char *)((int)puVar9 + local_c0);
  if (-1 < (int)uVar16) {
    uVar16 = *puVar9 & 0x80808080;
    uVar14 = LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
                     uVar16 >> 0x18);
    uVar16 = (uint)*(byte *)((int)puVar9 + (uVar14 >> 3));
    local_c0 = uVar14 >> 3;
  }
  *(uint *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) - (uVar16 & 1);
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  bVar1 = (byte)(uVar8 >> 0x19);
  *(byte *)((int)puVar9 + local_c0) = bVar1;
  *(byte *)((int)puVar9 + (uVar13 & local_c0 - 4) + 4) = bVar1;
  puVar9[local_c0 * -6 + -6] = uVar19;
  puVar9[local_c0 * -6 + -1] = uVar10;
  puVar9[local_c0 * -6 + -5] = uVar15;
  puVar9[local_c0 * -6 + -4] = uVar7;
  puVar9[local_c0 * -6 + -3] = uVar17;
  puVar9[local_c0 * -6 + -2] = (uint)puVar6;
  if (uVar22 == 0) {
LAB_009de46c:
    if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
      *(undefined1 *)(param_1 + 0x68) = 1;
    }
  }
LAB_009de484:
  DataMemoryBarrier(0xb);
  do {
    uVar10 = *puVar18;
    bVar25 = (bool)hasExclusiveAccess(puVar18);
  } while (!bVar25);
  *puVar18 = uVar10 + 0xc0000001;
  iVar4 = 0;
  if (0x3fffffff < uVar10 + 0xc0000001) {
    iVar4 = FUN_015e9814(puVar18);
  }
  goto LAB_009ddff8;
LAB_009de268:
  puVar6 = (undefined4 *)&DAT_00000008;
  uVar10 = 0;
  uVar17 = 0;
LAB_009de274:
  uVar7 = local_88;
  if (local_88 == 6) {
    uVar7 = 5;
  }
  if (local_88 == 6 && uVar10 == 0) {
LAB_009de4b8:
    FUN_0169d57c(puVar6,0);
    if (uVar17 != 0) {
      thunk_FUN_016d3fb4(puVar6);
    }
LAB_009ddfe4:
    iVar4 = FUN_016a0564(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),param_2);
    if (iVar4 == 0) {
      cVar20 = *(char *)(param_1 + 0x110);
    }
  }
  else {
    puVar18 = (uint *)(param_1 + 0x60);
    if (*puVar18 == 0) {
      bVar25 = (bool)hasExclusiveAccess(puVar18);
      if (!bVar25) goto LAB_009de4e0;
      *puVar18 = 0x3fffffff;
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_009de4e0:
      FUN_015f5ff4(puVar18);
    }
    uVar22 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar2 = *(char *)(param_1 + 0x68);
    }
    else {
      uVar22 = FUN_015bf3f8();
      uVar22 = uVar22 ^ 1;
      cVar2 = *(char *)(param_1 + 0x68);
    }
    if (cVar2 == '\0') {
      uVar15 = *(uint *)(param_2 + 0x28);
      uVar19 = *(uint *)(param_2 + 0x24);
      uVar8 = FUN_016a7474(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                           *(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),uVar19,
                           uVar15);
      if (*(int *)(param_1 + 0x78) == 0) {
        FUN_0169f9cc(param_1 + 0x70,(undefined4 *)(param_1 + 0x80));
      }
      uVar13 = *(uint *)(param_1 + 0x74);
      puVar9 = *(uint **)(param_1 + 0x70);
      iVar4 = 0;
      bVar25 = false;
      uVar16 = uVar8;
      do {
        uVar16 = uVar13 & uVar16;
        uVar24 = *(uint *)((int)puVar9 + uVar16);
        uVar14 = uVar24 ^ (uVar8 >> 0x19) * 0x1010101;
        uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff;
        while (uVar14 != 0) {
          uVar12 = uVar16 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                           (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                   uVar13;
          uVar14 = uVar14 - 1 & uVar14;
          if (uVar19 == puVar9[uVar12 * -6 + -6]) {
            uVar19 = puVar9[uVar12 * -6 + -4];
            uVar16 = puVar9[uVar12 * -6 + -3];
            uVar15 = puVar9[uVar12 * -6 + -2];
            uVar8 = puVar9[uVar12 * -6 + -1];
            puVar9[uVar12 * -6 + -1] = uVar10;
            puVar9[uVar12 * -6 + -2] = (uint)puVar6;
            puVar9[uVar12 * -6 + -3] = uVar17;
            puVar9[uVar12 * -6 + -4] = uVar7;
            if ((uVar19 != 6) && (FUN_0169d57c(uVar15,uVar8), uVar16 != 0)) {
              thunk_FUN_016d3fb4(uVar15);
            }
            if (uVar22 != 0) goto LAB_009de484;
            goto LAB_009de46c;
          }
        }
        uVar14 = uVar24 & 0x80808080;
        if (bVar25) {
LAB_009de3ec:
          if ((uVar14 & uVar24 << 1) != 0) goto LAB_009de4ec;
          bVar25 = true;
        }
        else {
          if (uVar14 != 0) {
            local_c0 = uVar16 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                               (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3)
                       & uVar13;
            goto LAB_009de3ec;
          }
          bVar25 = false;
        }
        iVar4 = iVar4 + 4;
        uVar16 = iVar4 + uVar16;
      } while( true );
    }
    if (((DAT_018dd988 & 0x7fffffff) == 0) || (iVar4 = FUN_015bf3f8(), iVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724("lock poisonedPatternIDError",0xd,&DAT_018ae8f0);
    }
    cVar20 = *(char *)(param_1 + 0x110);
    FUN_016a6218(puVar18,uVar22);
    FUN_0169d57c(puVar6,uVar10);
    iVar4 = 0;
    if (uVar17 != 0) {
      iVar4 = thunk_FUN_016d3fb4(puVar6);
    }
  }
LAB_009ddff8:
  if (cVar20 == '\0') {
LAB_009de02c:
    uVar26 = thunk_FUN_016de0ee(iVar4,0x80);
    iVar4 = (int)uVar26 + (int)((ulonglong)uVar26 >> 0x20);
    if (*(int *)(iVar4 + 8) != 0) {
LAB_009de570:
                    /* WARNING: Subroutine does not return */
      FUN_00fb715c(&DAT_018ae4d8);
    }
    if (*(char *)(iVar4 + 0xc) == '\x02') {
      *(undefined1 *)(iVar4 + 0xc) = 1;
    }
    else if (*(char *)(iVar4 + 0xc) == '\x03') {
      *(undefined1 *)(iVar4 + 0xc) = 0;
    }
  }
  else {
    uVar26 = thunk_FUN_016de0ee(iVar4,0x80);
    iVar4 = (int)uVar26 + (int)((ulonglong)uVar26 >> 0x20);
    if (*(int *)(iVar4 + 8) != 0) goto LAB_009de570;
    cVar2 = *(char *)(iVar4 + 0xc);
    if ((cVar2 == '\x03') || (bVar25 = cVar20 != '\x02', cVar20 = '\x01', bVar25 && cVar2 == '\x02')
       ) {
      *(char *)(iVar4 + 0xc) = cVar20;
    }
    else if (cVar2 == '\0') {
      *(undefined1 *)(iVar4 + 0xc) = 1;
    }
  }
  *(undefined4 *)(iVar4 + 8) = 0;
  return 2;
}

