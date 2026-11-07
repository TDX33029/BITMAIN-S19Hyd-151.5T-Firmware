// FUN_00947348 @ 00947348 size=2124 calls_out=10 calls_in=4
// strings: 

/* WARNING: Switch with 1 destination removed at 0x00947810 : 5 cases all go to same destination */

void FUN_00947348(int *param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  int local_48;
  char *local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint local_34;
  char *local_30;
  uint local_2c;
  undefined1 uStack_25;
  
  uVar6 = *(uint *)(param_2 + 0x10);
  uVar13 = *(uint *)(param_2 + 0x14);
  if (uVar13 < uVar6) {
    do {
      uVar19 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar13);
      if ((0x17 < uVar19 - 9) || ((1 << (uVar19 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar19 == 0x22) {
          if (uVar6 <= uVar13) goto LAB_00947474;
          goto LAB_0094744c;
        }
        if (uVar19 != 0x7b) {
          local_48 = 10;
          goto LAB_009473a4;
        }
        cVar10 = *(char *)(param_2 + 0x24) + -1;
        *(char *)(param_2 + 0x24) = cVar10;
        if (cVar10 == '\0') {
          local_48 = 0x18;
          goto LAB_009473a4;
        }
        uVar13 = uVar13 + 1;
        *(uint *)(param_2 + 0x14) = uVar13;
        if (uVar6 <= uVar13) goto LAB_00947420;
        piVar16 = (int *)(param_2 + 0xc);
        goto LAB_009473f8;
      }
      uVar13 = uVar13 + 1;
      *(uint *)(param_2 + 0x14) = uVar13;
    } while (uVar6 != uVar13);
  }
  local_48 = 5;
LAB_009473a4:
  iVar7 = FUN_008f9984(param_2,&local_48);
  goto LAB_00947a5c;
LAB_0094744c:
  uVar19 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar13);
  uVar17 = uVar19 - 9;
  if ((0x17 < uVar17) || ((1 << (uVar17 & 0xff) & 0x800013U) == 0)) {
    if (uVar19 == 0x22) {
      *(undefined4 *)(param_2 + 8) = 0;
      *(uint *)(param_2 + 0x14) = uVar13 + 1;
      FUN_0157e384(&local_48,(int *)(param_2 + 0xc),param_2);
      if (local_48 == 2) goto LAB_00947550;
      FUN_0094a918(&local_34,local_44,local_40);
      if ((char)local_34 != '\x01') {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        local_48 = CONCAT31(local_48._1_3_,0xd);
        iVar7 = FUN_0157cc00(&local_48,&DAT_01878148,&DAT_018ab990);
        goto LAB_00947a5c;
      }
    }
    else {
      local_30 = (char *)FUN_005b8238(param_2,&uStack_25,&DAT_01867468);
    }
    local_44 = (char *)FUN_00e959bc(local_30,param_2);
    goto LAB_00947550;
  }
  uVar13 = uVar13 + 1;
  *(uint *)(param_2 + 0x14) = uVar13;
  if (uVar6 == uVar13) {
LAB_00947474:
    local_48 = 5;
    local_44 = (char *)FUN_008f9984(param_2,&local_48);
LAB_00947550:
    *param_1 = 5;
    param_1[1] = 0;
    param_1[2] = (int)local_44;
    return;
  }
  goto LAB_0094744c;
LAB_009473f8:
  uVar19 = *(byte *)(*piVar16 + uVar13) - 9;
  if (0x19 < uVar19) {
LAB_00947a80:
    if (*(byte *)(*piVar16 + uVar13) == 0x7d) {
      local_48 = 10;
    }
    else {
      local_48 = 0x11;
    }
    goto LAB_00947424;
  }
  if ((1 << (uVar19 & 0xff) & 0x800013U) == 0) {
    if (uVar19 != 0x19) goto LAB_00947a80;
    *(undefined4 *)(param_2 + 8) = 0;
    *(uint *)(param_2 + 0x14) = uVar13 + 1;
    FUN_0157e384(&local_48,piVar16,param_2);
    if (local_48 != 2) {
      FUN_0094a918(&local_34,local_44,local_40);
      if ((char)local_34 != '\x01') {
        uVar6 = local_34 >> 8;
        iVar7 = FUN_01114eb4(param_2);
        if (iVar7 != 0) goto LAB_009474f4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar6 & 0xff) {
        case 0:
          uVar6 = *(uint *)(param_2 + 0x10);
          if (uVar6 <= *(uint *)(param_2 + 0x14)) goto LAB_00947674;
          iVar7 = *(uint *)(param_2 + 0x14) + 2;
          iVar20 = *piVar16;
          goto LAB_009475a8;
        case 1:
          FUN_008fab2c(&local_48,param_2);
          if (local_48 == 0) {
            iVar7 = 1;
            *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_3c,local_40);
            goto LAB_009479d4;
          }
          break;
        case 2:
          FUN_008fab2c(&local_48,param_2);
          if (local_48 == 0) {
            iVar7 = 2;
            *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_3c,local_40);
            goto LAB_009479d4;
          }
          break;
        case 3:
          FUN_008fab2c(&local_48,param_2);
          if (local_48 == 0) {
            iVar7 = 3;
            *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_3c,local_40);
            goto LAB_009479d4;
          }
          break;
        case 4:
          FUN_008fab2c(&local_48,param_2);
          if (local_48 == 0) {
            iVar7 = 4;
            *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_3c,local_40);
            goto LAB_009479d4;
          }
        }
        param_1[2] = (int)local_44;
        goto LAB_009479cc;
      }
      local_44 = local_30;
    }
    iVar7 = FUN_00e959bc(local_44,param_2);
    goto LAB_009474f4;
  }
  uVar13 = uVar13 + 1;
  *(uint *)(param_2 + 0x14) = uVar13;
  if (uVar6 == uVar13) {
LAB_00947420:
    local_48 = 3;
LAB_00947424:
    iVar7 = FUN_008f9984(param_2,&local_48);
LAB_009474f4:
    cVar10 = *(char *)(param_2 + 0x24);
    param_1[2] = iVar7;
    *param_1 = 5;
    param_1[1] = 0;
    *(char *)(param_2 + 0x24) = cVar10 + '\x01';
    return;
  }
  goto LAB_009473f8;
LAB_009475a8:
  iVar21 = iVar20 + iVar7;
  bVar2 = *(byte *)(iVar21 + -2);
  uVar13 = (uint)bVar2;
  switch(uVar13) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    break;
  default:
    local_2c = 0;
    local_34 = 0;
    local_30 = &DAT_00000001;
    if (iVar7 - 2U < uVar6) {
      uVar19 = iVar7 - 1;
      *(uint *)(param_2 + 0x14) = uVar19;
      if (uVar13 == 0x30) {
        FUN_00933680(&local_34,0,1,1);
        uVar13 = local_2c;
        pcVar9 = local_30;
        local_2c = 1;
        local_30[uVar13] = '0';
        if (uVar6 <= uVar19) goto LAB_00947988;
        if (*(byte *)(iVar20 + uVar19) - 0x30 < 10) {
          local_48 = 0xd;
          iVar7 = FUN_008f9984(param_2,&local_48);
          goto LAB_009479b8;
        }
        cVar10 = *local_30;
        if (!(cVar10 == '+' || cVar10 == '-')) goto LAB_00947af8;
        goto LAB_0094799c;
      }
      if (uVar13 - 0x31 < 9) {
        FUN_00933680(&local_34,0,1,1);
        uVar13 = local_2c;
        local_2c = 1;
        local_30[uVar13] = bVar2;
        if (uVar6 <= uVar19) goto LAB_00947988;
        iVar20 = uVar6 - (iVar7 - 2U);
        pcVar9 = local_30;
        uVar13 = 0;
        goto LAB_009478cc;
      }
    }
    local_48 = 0xd;
    iVar7 = FUN_005b8c9c(param_2,&local_48);
    pcVar9 = &DAT_00000001;
    goto LAB_009479b8;
  case 0x2d:
    local_48 = 0xe;
    goto LAB_00947678;
  }
  iVar21 = iVar7 + -1;
  iVar7 = iVar7 + 1;
  *(int *)(param_2 + 0x14) = iVar21;
  if (iVar7 - uVar6 == 2) goto LAB_00947674;
  goto LAB_009475a8;
LAB_00947674:
  local_48 = 5;
LAB_00947678:
  iVar7 = FUN_008f9984(param_2,&local_48);
LAB_009479c8:
  param_1[2] = iVar7;
LAB_009479cc:
  iVar7 = 5;
  goto LAB_009479d4;
  while( true ) {
    uVar17 = uVar13 + 1;
    *(uint *)(param_2 + 0x14) = iVar7 + uVar13;
    uVar19 = uVar17;
    if (uVar17 == local_34) {
      FUN_00933680(&local_34,uVar17,1,1);
      uVar19 = local_2c;
      pcVar9 = local_30;
    }
    pcVar9[uVar19] = bVar2;
    local_2c = uVar13 + 2;
    iVar8 = (iVar7 - uVar6) + uVar13;
    uVar13 = uVar17;
    if (iVar8 == 0) break;
LAB_009478cc:
    bVar2 = *(byte *)(iVar21 + uVar13 + -1);
    if (9 < bVar2 - 0x30) {
      iVar20 = uVar13 + 1;
      break;
    }
  }
  if (iVar20 == 1) {
LAB_00947988:
    cVar10 = *local_30;
    if (cVar10 != '+' && cVar10 != '-') {
LAB_00947af8:
      iVar20 = 1;
      goto LAB_00947b00;
    }
LAB_0094799c:
    pcVar9 = local_30;
    local_48 = 0xe;
    iVar7 = FUN_005b8c9c(param_2,&local_48);
LAB_009479b8:
    if (local_34 != 0) {
      thunk_FUN_016d3fb4(pcVar9);
    }
    goto LAB_009479c8;
  }
  cVar10 = *local_30;
LAB_00947b00:
  uVar6 = (uint)(cVar10 == '+');
  uVar13 = iVar20 - uVar6;
  if (0x20 < uVar13) {
    uVar19 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar22 = 0;
    do {
      if (uVar13 == 0) goto LAB_00947c34;
      uVar14 = (uint)((ulonglong)uVar18 * 10);
      uVar11 = (uint)((ulonglong)uVar18 * 10 >> 0x20);
      uVar12 = (uint)((ulonglong)uVar22 * 10);
      uVar15 = (uint)((ulonglong)uVar19 * 10);
      uVar23 = (uint)((ulonglong)uVar19 * 10 >> 0x20);
      uVar19 = uVar11 + uVar12;
      lVar4 = (ulonglong)uVar17 * 10;
      uVar18 = (uint)((ulonglong)lVar4 >> 0x20);
      lVar5 = lVar4 + CONCAT44(uVar14,uVar23);
      uVar17 = (uint)lVar5;
      bVar25 = CARRY4(uVar14,uVar18) || CARRY4(uVar14 + uVar18,(uint)CARRY4((uint)lVar4,uVar23));
      uVar18 = (uint)((ulonglong)lVar5 >> 0x20);
      uVar14 = uVar19 + bVar25;
      if ((((int)((ulonglong)uVar22 * 10 >> 0x20) != 0 || CARRY4(uVar11,uVar12)) ||
           CARRY4(uVar19,(uint)bVar25)) || (uVar22 = (byte)local_30[uVar6] - 0x30, 9 < uVar22))
      break;
      uVar19 = uVar15 + uVar22;
      uVar13 = uVar13 - 1;
      bVar25 = CARRY4(uVar17,(uint)CARRY4(uVar15,uVar22));
      uVar17 = uVar17 + CARRY4(uVar15,uVar22);
      uVar6 = uVar6 + 1;
      bVar1 = CARRY4(uVar18,(uint)bVar25);
      uVar18 = uVar18 + bVar25;
      uVar22 = uVar14 + bVar1;
    } while (!CARRY4(uVar14,(uint)bVar1));
    goto LAB_0094799c;
  }
  uVar19 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar22 = 0;
  for (; uVar13 != 0; uVar13 = uVar13 - 1) {
    uVar14 = (byte)local_30[uVar6] - 0x30;
    if (9 < uVar14) goto LAB_0094799c;
    uVar6 = uVar6 + 1;
    uVar24 = (uint)((ulonglong)uVar19 * 10);
    uVar23 = (uint)((ulonglong)uVar19 * 10 >> 0x20);
    lVar4 = (ulonglong)uVar17 * 10;
    uVar11 = (uint)((ulonglong)lVar4 >> 0x20);
    uVar3 = (ulonglong)uVar18;
    uVar15 = (uint)(uVar3 * 10);
    lVar5 = lVar4 + CONCAT44(uVar15,uVar23);
    uVar17 = (uint)lVar5;
    uVar12 = (uint)((ulonglong)lVar5 >> 0x20);
    uVar19 = uVar24 + uVar14;
    bVar25 = CARRY4(uVar17,(uint)CARRY4(uVar24,uVar14));
    uVar17 = uVar17 + CARRY4(uVar24,uVar14);
    uVar18 = uVar12 + bVar25;
    uVar22 = (int)(uVar3 * 10 >> 0x20) + uVar22 * 10 +
             (uint)(CARRY4(uVar15,uVar11) ||
                   CARRY4(uVar15 + uVar11,(uint)CARRY4((uint)lVar4,uVar23))) +
             (uint)CARRY4(uVar12,(uint)bVar25);
  }
LAB_00947c34:
  if (local_34 != 0) {
    thunk_FUN_016d3fb4(local_30);
  }
  iVar7 = 0;
  param_1[4] = uVar18;
  param_1[2] = uVar19;
  param_1[3] = uVar17;
  param_1[5] = uVar22;
LAB_009479d4:
  cVar10 = *(char *)(param_2 + 0x24);
  *param_1 = iVar7;
  param_1[1] = 0;
  *(char *)(param_2 + 0x24) = cVar10 + '\x01';
  if (iVar7 != 5) {
    uVar6 = *(uint *)(param_2 + 0x14);
    if (uVar6 < *(uint *)(param_2 + 0x10)) {
      do {
        uVar13 = *(byte *)(*piVar16 + uVar6) - 9;
        if ((0x17 < uVar13) || ((1 << (uVar13 & 0xff) & 0x800013U) == 0)) {
          if (*(byte *)(*piVar16 + uVar6) == 0x7d) {
            *(uint *)(param_2 + 0x14) = uVar6 + 1;
            return;
          }
          local_48 = 10;
          goto LAB_00947a4c;
        }
        uVar6 = uVar6 + 1;
        *(uint *)(param_2 + 0x14) = uVar6;
      } while (*(uint *)(param_2 + 0x10) != uVar6);
    }
    local_48 = 3;
LAB_00947a4c:
    iVar7 = FUN_005b8c9c(param_2,&local_48);
LAB_00947a5c:
    *param_1 = 5;
    param_1[1] = 0;
    param_1[2] = iVar7;
  }
  return;
}

