// FUN_00f48468 @ 00f48468 size=3168 calls_out=8 calls_in=0
// strings: failed to parse datetime | a Display implementation returned an error unexpectedly | MapAccess::next_value called before next_keymap with a single keystring or mapstruct Response with 3 elements

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f48468(undefined4 *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined *puVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  undefined2 uVar14;
  byte ****ppppbVar15;
  int iVar16;
  undefined1 uVar17;
  uint unaff_r8;
  undefined1 unaff_r9;
  short sVar18;
  undefined2 uVar19;
  byte ****ppppbVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  byte ****local_5c;
  uint local_50;
  uint local_4c;
  byte ****local_48;
  byte ****local_44;
  undefined4 local_40;
  byte ****local_38;
  byte ****local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  puVar5 = *(uint **)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Response with 3 elements"
                 ,0x2c,&DAT_0188716c);
  }
  uVar11 = 0x15;
  if ((int)*puVar5 < 0) {
    uVar11 = *puVar5 ^ 0x80000000;
  }
  switch(uVar11) {
  case 0xc:
    local_48 = (byte ****)puVar5[2];
    uVar11 = puVar5[3];
    break;
  case 0xd:
    local_48 = (byte ****)puVar5[1];
    uVar11 = puVar5[2];
    break;
  case 0xe:
    goto LAB_00f484dc;
  case 0xf:
LAB_00f484dc:
    FUN_00f3ce3c(param_1,(int)register0x00000054 + -0x20,(int)register0x00000054 + -9,&DAT_0187f1c8)
    ;
    return;
  default:
    FUN_008f7820(param_1,puVar5,(int)register0x00000054 + -9,&DAT_0187f1c8);
    return;
  }
  if (uVar11 < 3) goto LAB_00f3ba60;
  local_44 = (byte ****)((int)local_48 + uVar11);
  bVar1 = *(byte *)local_48;
  uVar9 = (uint)bVar1;
  if ((uVar11 == (byte)(&DAT_0041414f)[uVar9]) ||
     (pbVar6 = (byte *)((int)local_48 + (uint)(byte)(&DAT_0041414f)[uVar9]),
     ppppbVar15 = (byte ****)(pbVar6 + (byte)(&DAT_0041414f)[*pbVar6]), ppppbVar15 == local_44)) {
LAB_00f3b098:
    if ((char)bVar1 < '\0') {
      uVar11 = *(byte *)((int)local_48 + 1) & 0x3f;
      if (uVar9 < 0xe0) {
        uVar9 = uVar11 | (uVar9 & 0x1f) << 6;
        local_48 = (byte ****)((int)local_48 + 2);
        goto joined_r0x00f3b118;
      }
      uVar11 = *(byte *)((int)local_48 + 2) & 0x3f | uVar11 << 6;
      if (uVar9 < 0xf0) {
        uVar11 = uVar11 | (uVar9 & 0x1f) << 0xc;
        local_48 = (byte ****)((int)local_48 + 3);
      }
      else {
        uVar11 = *(byte *)((int)local_48 + 3) & 0x3f | uVar11 << 6 | (uVar9 & 7) << 0x12;
        local_48 = local_48 + 1;
      }
      uVar9 = uVar11 - 0x30;
      uVar2 = (ushort)uVar9;
    }
    else {
      local_48 = (byte ****)((int)local_48 + 1);
joined_r0x00f3b118:
      uVar9 = uVar9 - 0x30;
      uVar2 = (ushort)uVar9;
    }
    if ((9 < uVar9) || (local_48 == local_44)) goto LAB_00f3ba60;
    ppppbVar15 = (byte ****)((int)local_48 + 1);
    uVar11 = (uint)*(byte *)local_48;
    if ((char)*(byte *)local_48 < '\0') {
      uVar9 = *(byte *)((int)local_48 + 1) & 0x3f;
      if (uVar11 < 0xe0) {
        uVar11 = uVar9 | (uVar11 & 0x1f) << 6;
        ppppbVar15 = (byte ****)((int)local_48 + 2);
        goto joined_r0x00f3b21c;
      }
      uVar9 = *(byte *)((int)local_48 + 2) & 0x3f | uVar9 << 6;
      if (uVar11 < 0xf0) {
        uVar9 = uVar9 | (uVar11 & 0x1f) << 0xc;
        ppppbVar15 = (byte ****)((int)local_48 + 3);
      }
      else {
        uVar9 = *(byte *)((int)local_48 + 3) & 0x3f | uVar9 << 6 | (uVar11 & 7) << 0x12;
        ppppbVar15 = local_48 + 1;
      }
      uVar11 = uVar9 - 0x30;
      uVar3 = (ushort)uVar11;
    }
    else {
joined_r0x00f3b21c:
      uVar11 = uVar11 - 0x30;
      uVar3 = (ushort)uVar11;
    }
    if ((9 < uVar11) || (ppppbVar15 == local_44)) goto LAB_00f3ba60;
    ppppbVar20 = (byte ****)((int)ppppbVar15 + 1);
    unaff_r8 = (uint)*(byte *)ppppbVar15;
    if (0x7fffffff < (uint)(int)(char)*(byte *)ppppbVar15) {
      uVar11 = *(byte *)((int)ppppbVar15 + 1) & 0x3f;
      if (unaff_r8 < 0xe0) {
        unaff_r8 = uVar11 | (unaff_r8 & 0x1f) << 6;
        ppppbVar20 = (byte ****)((int)ppppbVar15 + 2);
      }
      else {
        uVar11 = *(byte *)((int)ppppbVar15 + 2) & 0x3f | uVar11 << 6;
        if (unaff_r8 < 0xf0) {
          unaff_r8 = uVar11 | (unaff_r8 & 0x1f) << 0xc;
          ppppbVar20 = (byte ****)((int)ppppbVar15 + 3);
        }
        else {
          unaff_r8 = *(byte *)((int)ppppbVar15 + 3) & 0x3f | uVar11 << 6 | (unaff_r8 & 7) << 0x12;
          ppppbVar20 = ppppbVar15 + 1;
        }
      }
    }
    if ((9 < unaff_r8 - 0x30) || (ppppbVar20 == local_44)) goto LAB_00f3ba60;
    ppppbVar15 = (byte ****)((int)ppppbVar20 + 1);
    uVar9 = (uint)*(byte *)ppppbVar20;
    if (0x7fffffff < (uint)(int)(char)*(byte *)ppppbVar20) {
      uVar11 = *(byte *)((int)ppppbVar20 + 1) & 0x3f;
      if (uVar9 < 0xe0) {
        uVar9 = uVar11 | (uVar9 & 0x1f) << 6;
        ppppbVar15 = (byte ****)((int)ppppbVar20 + 2);
      }
      else {
        uVar11 = *(byte *)((int)ppppbVar20 + 2) & 0x3f | uVar11 << 6;
        if (uVar9 < 0xf0) {
          uVar9 = uVar11 | (uVar9 & 0x1f) << 0xc;
          ppppbVar15 = (byte ****)((int)ppppbVar20 + 3);
        }
        else {
          uVar9 = *(byte *)((int)ppppbVar20 + 3) & 0x3f | uVar11 << 6 | (uVar9 & 7) << 0x12;
          ppppbVar15 = ppppbVar20 + 1;
        }
      }
    }
    if ((9 < uVar9 - 0x30) || (ppppbVar15 == local_44)) goto LAB_00f3ba60;
    local_48 = (byte ****)((int)ppppbVar15 + 1);
    uVar11 = (uint)*(byte *)ppppbVar15;
    if (0x7fffffff < (uint)(int)(char)*(byte *)ppppbVar15) {
      local_48 = (byte ****)((int)ppppbVar15 + 2);
      uVar7 = *(byte *)((int)ppppbVar15 + 1) & 0x3f;
      if (uVar11 < 0xe0) {
        uVar11 = uVar7 | (uVar11 & 0x1f) << 6;
      }
      else {
        local_48 = (byte ****)((int)ppppbVar15 + 3);
        uVar7 = *(byte *)((int)ppppbVar15 + 2) & 0x3f | uVar7 << 6;
        if (uVar11 < 0xf0) {
          uVar11 = uVar7 | (uVar11 & 0x1f) << 0xc;
        }
        else {
          local_48 = ppppbVar15 + 1;
          uVar11 = *(byte *)((int)ppppbVar15 + 3) & 0x3f | uVar7 << 6 | (uVar11 & 7) << 0x12;
        }
      }
    }
    if (uVar11 != 0x2d) goto LAB_00f3ba60;
    uVar25 = FUN_01668e84(&local_48);
    if ((uVar25 & 1) != 0) goto LAB_00f3ba60;
    uVar26 = FUN_01668e84(&local_48);
    unaff_r9 = (undefined1)(uVar26 >> 0x20);
    if ((uVar26 & 1) != 0) goto LAB_00f3ba60;
    uVar27 = FUN_00f65b48(&local_48);
    if (((uVar27 & 1) == 0) || ((int)(uVar27 >> 0x20) != 0x2d)) goto LAB_00f3ba60;
    uVar27 = FUN_01668e84(&local_48);
    if ((uVar27 & 1) != 0) goto LAB_00f3ba60;
    uVar28 = FUN_01668e84(&local_48);
    if (((uVar28 & 1) != 0) ||
       (uVar7 = (int)(uVar26 >> 0x20) + (int)(uVar25 >> 0x20) * 10, (uVar7 - 0xd & 0xff) < 0xf4))
    goto LAB_00f3ba60;
    uVar11 = 0x20;
    uVar9 = (short)(uVar2 & 0xff) * 1000 + (short)(uVar3 & 0xff) * 100 +
            (unaff_r8 * 10 + 0x20 & 0xff) + (uVar9 - 0x30 & 0xff);
    iVar16 = (int)(uVar28 >> 0x20) + (int)(uVar27 >> 0x20) * 10;
    if ((uVar9 & 3) == 0) {
      if (((uVar9 * 0x5c29 & 0xffff) >> 2 | uVar9 * 0x170a4000 & 0xffff) < 0x290) {
        uVar22 = uVar7 & 0xff;
        uVar8 = 0x1f;
        if (uVar22 < 0xc) {
          uVar11 = 1;
          if ((1 << uVar22 & 0xa50U) == 0) {
            if ((uVar22 == 2) &&
               (uVar8 = 0x1c, ((uVar9 * 0x5c29 & 0xffff) >> 4 | uVar9 * 0x5c29000 & 0xffff) < 0xa4))
            {
              uVar8 = 0x1d;
            }
          }
          else {
            uVar8 = 0x1e;
          }
        }
      }
      else {
        uVar22 = uVar7 - 2 & 0xff;
        uVar8 = 0x1f;
        if (uVar22 < 10) {
          puVar4 = &DAT_0041f1a8;
          goto LAB_00f3b84c;
        }
      }
    }
    else {
      uVar22 = uVar7 - 2 & 0xff;
      uVar8 = 0x1f;
      if (uVar22 < 10) {
        puVar4 = &DAT_0041f19e;
LAB_00f3b84c:
        uVar8 = (uint)(byte)puVar4[uVar22];
      }
    }
    uVar13 = (undefined1)uVar11;
    if (uVar8 <= (iVar16 - 1U & 0xff)) goto LAB_00f3ba60;
    ppppbVar15 = (byte ****)(iVar16 * 0x1000000);
    local_50 = (uint)ppppbVar15 | (uVar7 & 0xff) << 0x10 | uVar9 & 0xffff;
    if (local_48 != local_44) {
      bVar1 = *(byte *)local_48;
      uVar9 = (uint)bVar1;
      bVar23 = false;
      sVar18 = 1;
      goto joined_r0x00f3b000;
    }
    uVar19 = 2;
    uVar12 = 0;
    sVar18 = 1;
  }
  else {
    uVar11 = (uint)(char)*(byte *)ppppbVar15;
    uVar7 = (uint)*(byte *)ppppbVar15;
    if ((int)uVar11 < 0) {
      uVar8 = *(byte *)((int)ppppbVar15 + 1) & 0x3f;
      if (uVar7 < 0xe0) {
        uVar7 = uVar8 | (uVar7 & 0x1f) << 6;
      }
      else {
        uVar11 = *(byte *)((int)ppppbVar15 + 2) & 0x3f;
        uVar8 = uVar11 | uVar8 << 6;
        if (uVar7 < 0xf0) {
          uVar7 = uVar8 | (uVar7 & 0x1f) << 0xc;
        }
        else {
          uVar7 = *(byte *)((int)ppppbVar15 + 3) & 0x3f | uVar8 << 6 | (uVar7 & 7) << 0x12;
        }
      }
    }
    if (uVar7 != 0x3a) goto LAB_00f3b098;
    bVar23 = true;
    sVar18 = 0;
joined_r0x00f3b000:
    ppppbVar15 = (byte ****)(int)(char)bVar1;
    uVar7 = uVar9;
    if ((byte ****)0x7fffffff < ppppbVar15) {
      uVar11 = *(byte *)((int)local_48 + 1) & 0x3f;
      if (uVar9 < 0xe0) {
        uVar7 = uVar11 | (uVar9 & 0x1f) << 6;
      }
      else {
        uVar11 = *(byte *)((int)local_48 + 2) & 0x3f | uVar11 << 6;
        if (uVar9 < 0xf0) {
          uVar7 = uVar11 | (uVar9 & 0x1f) << 0xc;
        }
        else {
          uVar11 = *(byte *)((int)local_48 + 3) & 0x3f | uVar11 << 6;
          uVar7 = uVar11 | (uVar9 & 7) << 0x12;
        }
      }
    }
    uVar13 = (undefined1)uVar11;
    if (bVar23) {
LAB_00f3b2c0:
      ppppbVar20 = local_48;
    }
    else {
      if ((uVar7 != 0x20) && (uVar7 != 0x74 && uVar7 != 0x54)) {
        uVar19 = 2;
        uVar12 = 0;
        goto LAB_00f3b338;
      }
      if (local_48 == local_44) goto LAB_00f3b2c0;
      ppppbVar20 = (byte ****)((int)local_48 + 1);
      if ((((byte ****)0x7fffffff < ppppbVar15) &&
          (ppppbVar20 = (byte ****)((int)local_48 + 2), 0xdf < uVar9)) &&
         (ppppbVar20 = (byte ****)((int)local_48 + 3), 0xef < uVar9)) {
        ppppbVar20 = local_48 + 1;
      }
    }
    local_48 = ppppbVar20;
    if (local_48 == local_44) goto LAB_00f3ba60;
    ppppbVar15 = (byte ****)((int)local_48 + 1);
    uVar11 = (uint)*(byte *)local_48;
    if (0x7fffffff < (uint)(int)(char)*(byte *)local_48) {
      uVar9 = *(byte *)((int)local_48 + 1) & 0x3f;
      if (uVar11 < 0xe0) {
        uVar11 = uVar9 | (uVar11 & 0x1f) << 6;
        ppppbVar15 = (byte ****)((int)local_48 + 2);
      }
      else {
        uVar9 = *(byte *)((int)local_48 + 2) & 0x3f | uVar9 << 6;
        if (uVar11 < 0xf0) {
          uVar11 = uVar9 | (uVar11 & 0x1f) << 0xc;
          ppppbVar15 = (byte ****)((int)local_48 + 3);
        }
        else {
          uVar11 = *(byte *)((int)local_48 + 3) & 0x3f | uVar9 << 6 | (uVar11 & 7) << 0x12;
          ppppbVar15 = local_48 + 1;
        }
      }
    }
    if ((9 < uVar11 - 0x30) || (ppppbVar15 == local_44)) goto LAB_00f3ba60;
    local_48 = (byte ****)((int)ppppbVar15 + 1);
    uVar9 = (uint)*(byte *)ppppbVar15;
    if (0x7fffffff < (uint)(int)(char)*(byte *)ppppbVar15) {
      local_48 = (byte ****)((int)ppppbVar15 + 2);
      uVar7 = *(byte *)((int)ppppbVar15 + 1) & 0x3f;
      if (uVar9 < 0xe0) {
        uVar9 = uVar7 | (uVar9 & 0x1f) << 6;
      }
      else {
        local_48 = (byte ****)((int)ppppbVar15 + 3);
        uVar7 = *(byte *)((int)ppppbVar15 + 2) & 0x3f | uVar7 << 6;
        if (uVar9 < 0xf0) {
          uVar9 = uVar7 | (uVar9 & 0x1f) << 0xc;
        }
        else {
          local_48 = ppppbVar15 + 1;
          uVar9 = *(byte *)((int)ppppbVar15 + 3) & 0x3f | uVar7 << 6 | (uVar9 & 7) << 0x12;
        }
      }
    }
    if (9 < uVar9 - 0x30) goto LAB_00f3ba60;
    uVar25 = FUN_00f65b48(&local_48);
    if (((uVar25 & 1) == 0) || ((int)(uVar25 >> 0x20) != 0x3a)) goto LAB_00f3ba60;
    uVar25 = FUN_01668e84(&local_48);
    if ((uVar25 & 1) != 0) goto LAB_00f3ba60;
    uVar26 = FUN_01668e84(&local_48);
    uVar13 = (undefined1)(uVar26 >> 0x20);
    if ((uVar26 & 1) != 0) goto LAB_00f3ba60;
    uVar27 = FUN_00f65b48(&local_48);
    if (((uVar27 & 1) == 0) || ((int)(uVar27 >> 0x20) != 0x3a)) goto LAB_00f3ba60;
    uVar27 = FUN_01668e84(&local_48);
    if ((uVar27 & 1) != 0) goto LAB_00f3ba60;
    uVar28 = FUN_01668e84(&local_48);
    ppppbVar15 = local_48;
    if ((uVar28 & 1) != 0) goto LAB_00f3ba60;
    local_5c = local_44;
    local_34 = local_44;
    local_38 = local_48;
    uVar29 = FUN_00f65b48(&local_38);
    if (((uVar29 & 1) == 0) || ((int)(uVar29 >> 0x20) != 0x2e)) {
      local_4c = 0;
    }
    else {
      FUN_00f65b48(&local_48);
      uVar7 = (int)local_44 - (int)local_48;
      if (uVar7 == 0) goto LAB_00f3ba60;
      uVar8 = 0;
      local_4c = 0;
      ppppbVar15 = local_48;
      do {
        ppppbVar20 = (byte ****)((int)ppppbVar15 + 1);
        uVar22 = *(byte *)ppppbVar15 - 0x30 & 0xff;
        if (9 < uVar22) goto LAB_00f3b8e4;
        if (uVar8 < 9) {
          iVar16 = 1;
          if (uVar8 != 8) {
            iVar21 = 10;
            for (uVar10 = 8 - uVar8; ((uVar10 & 1) == 0 || (iVar16 = iVar21 * iVar16, uVar10 != 1));
                uVar10 = uVar10 >> 1) {
              iVar21 = iVar21 * iVar21;
            }
          }
          local_4c = iVar16 * uVar22 + local_4c;
        }
        uVar8 = uVar8 + 1;
        ppppbVar15 = ppppbVar20;
      } while (ppppbVar20 != local_44);
      uVar8 = uVar7;
LAB_00f3b8e4:
      if (uVar8 == 0) goto LAB_00f3ba60;
      if (uVar8 < uVar7) {
        if ((char)*(byte *)((int)local_48 + uVar8) < -0x40) {
LAB_00f3b908:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac();
        }
      }
      else if (uVar8 != uVar7) goto LAB_00f3b908;
      ppppbVar15 = (byte ****)((int)local_48 + uVar8);
      local_5c = (byte ****)((int)local_48 + uVar7);
      local_48 = ppppbVar15;
      local_44 = local_5c;
    }
    unaff_r8 = (uVar9 + uVar11 * 10) - 0x10;
    uVar17 = (undefined1)unaff_r8;
    uVar11 = unaff_r8 & 0xff;
    bVar24 = 0x17 < uVar11;
    bVar23 = uVar11 == 0x18;
    if (uVar11 < 0x19) {
      uVar11 = (int)(uVar26 >> 0x20) + (int)(uVar25 >> 0x20) * 10;
      uVar13 = (undefined1)uVar11;
      uVar11 = uVar11 & 0xff;
      bVar24 = 0x3a < uVar11;
      bVar23 = uVar11 == 0x3b;
    }
    if (bVar24 && !bVar23) goto LAB_00f3ba60;
    uVar11 = (int)(uVar28 >> 0x20) + (int)(uVar27 >> 0x20) * 10;
    unaff_r9 = (undefined1)uVar11;
    uVar11 = uVar11 & 0xff;
    bVar24 = 0x3b < uVar11;
    bVar23 = uVar11 == 0x3c;
    if (uVar11 < 0x3d) {
      bVar24 = 0x3b9ac9fe < local_4c;
      bVar23 = local_4c == 999999999;
    }
    if (bVar24 && !bVar23) goto LAB_00f3ba60;
    uVar19 = 2;
    uVar12 = 1;
    if (sVar18 != 0) {
      local_34 = local_5c;
      local_38 = ppppbVar15;
      uVar25 = FUN_00f65b48(&local_38);
      iVar16 = (int)(uVar25 >> 0x20);
      if ((uVar25 & 1) != 0) {
        if ((longlong)uVar25 < 0x5a00000000) {
          if (iVar16 == 0x2b) {
            iVar16 = 1;
          }
          else {
            if (iVar16 != 0x2d) goto LAB_00f3ba60;
            iVar16 = 0xffff;
          }
          FUN_00f65b48(&local_48);
          uVar25 = FUN_01668e84(&local_48);
          if ((uVar25 & 1) != 0) goto LAB_00f3ba60;
          uVar26 = FUN_01668e84(&local_48);
          if ((uVar26 & 1) != 0) goto LAB_00f3ba60;
          uVar27 = FUN_00f65b48(&local_48);
          if (((uVar27 & 1) == 0) || ((int)(uVar27 >> 0x20) != 0x3a)) goto LAB_00f3ba60;
          uVar27 = FUN_01668e84(&local_48);
          uVar11 = (uint)(uVar27 >> 0x20);
          if ((uVar27 & 1) != 0) goto LAB_00f3ba60;
          uVar27 = FUN_01668e84(&local_48);
          if (((uVar27 & 1) != 0) ||
             (iVar16 = (((uVar11 & 0xff) * 4 + (uVar11 & 0xff)) * 2 +
                        (((uint)(uVar26 >> 0x20) & 0xff) + ((uint)(uVar25 >> 0x20) & 0xff) * 10) *
                        0x3c + ((uint)(uVar27 >> 0x20) & 0xff)) * iVar16,
             uVar14 = (undefined2)iVar16, 0xb40 < (iVar16 + 0x5a0U & 0xffff))) goto LAB_00f3ba60;
          uVar12 = 1;
          uVar19 = 1;
          uVar11 = FUN_00f65b48(&local_48);
          if ((uVar11 & 1) != 0) goto LAB_00f3ba60;
          goto LAB_00f3b348;
        }
        if (iVar16 != 0x5a && iVar16 != 0x7a) goto LAB_00f3ba60;
        FUN_00f65b48(&local_48);
        uVar19 = 0;
        uVar12 = 1;
      }
    }
  }
LAB_00f3b338:
  uVar14 = SUB42(ppppbVar15,0);
  uVar17 = (undefined1)unaff_r8;
  uVar11 = FUN_00f65b48(&local_48);
  if ((uVar11 & 1) == 0) {
LAB_00f3b348:
    *(uint *)((int)param_1 + 0x16) = local_50;
    *param_1 = 2;
    param_1[1] = uVar12;
    *(short *)(param_1 + 5) = sVar18;
    *(undefined2 *)((int)param_1 + 0x12) = uVar14;
    *(undefined2 *)(param_1 + 4) = uVar19;
    *(undefined1 *)((int)param_1 + 0xe) = unaff_r9;
    *(undefined1 *)((int)param_1 + 0xd) = uVar13;
    *(undefined1 *)(param_1 + 3) = uVar17;
    param_1[2] = local_4c;
    return;
  }
LAB_00f3ba60:
  local_34 = (byte ****)&DAT_0187e9d8;
  local_38 = (byte ****)&local_48;
  local_40 = 0;
  local_48 = (byte ****)0x0;
  local_2c = 0;
  local_44 = (byte ****)0x1;
  local_30 = &DAT_60000020;
  iVar16 = FUN_00faace8(&local_38,"failed to parse datetime",0x18);
  if (iVar16 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                 &DAT_0187e9f0);
  }
  param_1[7] = 4;
  param_1[3] = local_48;
  param_1[4] = local_44;
  param_1[5] = local_40;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0x80000000;
  *param_1 = 0;
  return;
}

