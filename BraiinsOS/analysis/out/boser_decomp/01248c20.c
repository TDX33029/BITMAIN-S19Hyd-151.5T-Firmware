// FUN_01248c20 @ 01248c20 size=1984 calls_out=10 calls_in=3
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_01248c20(int *param_1,char *param_2)

{
  bool bVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  char *pcVar20;
  uint uVar21;
  bool bVar22;
  undefined8 uVar23;
  int local_48;
  char *local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  char *local_30;
  uint local_2c;
  undefined1 uStack_25;
  
  uVar7 = *(uint *)(param_2 + 0x10);
  uVar9 = *(uint *)(param_2 + 0x14);
  if (uVar9 < uVar7) {
    do {
      uVar16 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar9);
      if ((0x17 < uVar16 - 9) || ((1 << (uVar16 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar16 == 0x22) {
          if (uVar7 <= uVar9) goto LAB_01248d54;
          goto LAB_01248d2c;
        }
        if (uVar16 != 0x7b) {
          local_48 = 10;
          goto LAB_01248c78;
        }
        cVar6 = param_2[0x24];
        param_2[0x24] = cVar6 + -1;
        if (cVar6 == '\x01') {
          local_48 = 0x18;
          goto LAB_01248c78;
        }
        uVar9 = uVar9 + 1;
        *(uint *)(param_2 + 0x14) = uVar9;
        if (uVar7 <= uVar9) goto LAB_01248d04;
        goto LAB_01248cdc;
      }
      uVar9 = uVar9 + 1;
      *(uint *)(param_2 + 0x14) = uVar9;
    } while (uVar7 != uVar9);
  }
  local_48 = 5;
LAB_01248c78:
  iVar8 = FUN_01964674(param_2,&local_48);
  goto LAB_01248c88;
LAB_01248d2c:
  uVar16 = *(byte *)(*(int *)(param_2 + 0xc) + uVar9) - 9;
  if ((0x17 < uVar16) || ((1 << (uVar16 & 0xff) & 0x800013U) == 0)) {
    if (*(byte *)(*(int *)(param_2 + 0xc) + uVar9) == 0x22) {
      param_2[8] = '\0';
      param_2[9] = '\0';
      param_2[10] = '\0';
      param_2[0xb] = '\0';
      *(uint *)(param_2 + 0x14) = uVar9 + 1;
      FUN_019686b4(&local_48,param_2 + 0xc,param_2);
      if (local_48 == 2) goto switchD_01248f14_default;
      FUN_01249f2c(&local_34,local_44,local_40);
      if ((char)local_34 != '\x01') {
        local_44 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(local_34._1_1_) {
        case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto switchD_01248f14_default;
      }
    }
    else {
      local_30 = (char *)FUN_019659c8(param_2,&uStack_25,&DAT_01c24a3c);
    }
    local_44 = (char *)FUN_01966f00(local_30,param_2);
    goto switchD_01248f14_default;
  }
  uVar9 = uVar9 + 1;
  *(uint *)(param_2 + 0x14) = uVar9;
  if (uVar7 == uVar9) {
LAB_01248d54:
    local_48 = 5;
    local_44 = (char *)FUN_01964674(param_2,&local_48);
switchD_01248f14_default:
    *param_1 = 5;
    param_1[1] = 0;
    param_1[2] = (int)local_44;
    return;
  }
  goto LAB_01248d2c;
LAB_01248cdc:
  uVar16 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar9);
  if ((0x17 < uVar16 - 9) || ((1 << (uVar16 - 9 & 0xff) & 0x800013U) == 0)) {
    if (uVar16 != 0x22) {
      if (uVar16 == 0x7d) {
        local_48 = 10;
      }
      else {
        local_48 = 0x11;
      }
      goto LAB_01248d08;
    }
    piVar19 = (int *)(param_2 + 0xc);
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    *(uint *)(param_2 + 0x14) = uVar9 + 1;
    FUN_019686b4(&local_48,piVar19,param_2);
    if (local_48 != 2) {
      FUN_01249f2c(&local_34,local_44,local_40);
      if ((char)local_34 != '\x01') {
        uVar7 = local_34 >> 8;
        iVar8 = FUN_01965c98(param_2);
        if (iVar8 != 0) goto LAB_01248e18;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar7 & 0xff) {
        case 0:
          uVar7 = *(uint *)(param_2 + 0x10);
          if (uVar7 <= *(uint *)(param_2 + 0x14)) goto LAB_01248ef0;
          uVar9 = *(uint *)(param_2 + 0x14) + 1;
          goto LAB_01248ec0;
        case 1:
          FUN_01224810(&local_48,param_2);
          if (local_48 != 1) {
            uVar23 = CONCAT44(uStack_3c,local_40);
            iVar8 = 1;
LAB_012490a0:
            *(undefined8 *)(param_1 + 2) = uVar23;
            goto LAB_012491e8;
          }
          break;
        case 2:
          FUN_01224810(&local_48,param_2);
          if (local_48 != 1) {
            uVar23 = CONCAT44(uStack_3c,local_40);
            iVar8 = 2;
            goto LAB_012490a0;
          }
          break;
        case 3:
          FUN_01224810(&local_48,param_2);
          if (local_48 != 1) {
            uVar23 = CONCAT44(uStack_3c,local_40);
            iVar8 = 3;
            goto LAB_012490a0;
          }
          break;
        case 4:
          FUN_01224810(&local_48,param_2);
          if (local_48 != 1) {
            uVar23 = CONCAT44(uStack_3c,local_40);
            iVar8 = 4;
            goto LAB_012490a0;
          }
        }
        param_1[2] = (int)local_44;
        goto LAB_012491e0;
      }
      local_44 = local_30;
    }
    iVar8 = FUN_01966f00(local_44,param_2);
    goto LAB_01248e18;
  }
  uVar9 = uVar9 + 1;
  *(uint *)(param_2 + 0x14) = uVar9;
  if (uVar7 == uVar9) {
LAB_01248d04:
    local_48 = 3;
LAB_01248d08:
    iVar8 = FUN_01964674(param_2,&local_48);
LAB_01248e18:
    cVar6 = param_2[0x24];
    param_1[2] = iVar8;
    *param_1 = 5;
    param_1[1] = 0;
    param_2[0x24] = cVar6 + '\x01';
    return;
  }
  goto LAB_01248cdc;
LAB_01248ec0:
  uVar16 = (uint)*(byte *)(*piVar19 + uVar9 + -1);
  uVar17 = uVar16 - 9;
  if ((uVar17 < 0x18) && ((1 << (uVar17 & 0xff) & 0x800013U) != 0)) goto code_r0x01248edc;
  if (uVar16 == 0x2d) {
    local_48 = 0xe;
    goto LAB_01248ef4;
  }
  local_2c = 0;
  local_34 = 0;
  local_30 = &DAT_00000001;
  if (uVar7 <= uVar9 - 1) {
LAB_01249170:
    local_48 = 0xd;
    iVar8 = FUN_01965294(param_2,&local_48);
    pcVar20 = &DAT_00000001;
    goto LAB_012491d0;
  }
  bVar2 = *(byte *)(*(int *)(param_2 + 0xc) + (uVar9 - 1));
  *(uint *)(param_2 + 0x14) = uVar9;
  if (bVar2 == 0x30) {
    iVar8 = 1;
    FUN_0132b898(&local_34,0,1,1,1);
    uVar16 = local_2c;
    pcVar20 = local_30;
    local_2c = 1;
    local_30[uVar16] = '0';
    if ((uVar7 <= uVar9) || (9 < *(byte *)(*piVar19 + uVar9) - 0x30)) goto LAB_012491a8;
    local_48 = 0xd;
    iVar8 = FUN_01964674(param_2,&local_48);
    goto LAB_012491d0;
  }
  if (8 < bVar2 - 0x31) goto LAB_01249170;
  FUN_0132b898(&local_34,0,1,1,1);
  uVar16 = local_2c;
  local_2c = 1;
  local_30[uVar16] = bVar2;
  iVar8 = *piVar19;
  pcVar20 = local_30;
  uVar16 = 0;
  while( true ) {
    if ((uVar7 <= uVar9 + uVar16) || (bVar2 = *(byte *)(iVar8 + uVar16 + uVar9), 9 < bVar2 - 0x30))
    break;
    uVar14 = uVar16 + 1;
    *(uint *)(param_2 + 0x14) = uVar9 + uVar16 + 1;
    uVar17 = uVar14;
    if (uVar14 == local_34) {
      FUN_0132b898(&local_34,uVar14,1,1,1);
      uVar17 = local_2c;
      pcVar20 = local_30;
    }
    pcVar20[uVar17] = bVar2;
    local_2c = uVar16 + 2;
    uVar16 = uVar14;
  }
  iVar8 = uVar16 + 1;
  if (iVar8 == 0) {
LAB_012491b8:
    pcVar20 = local_30;
    local_48 = 0xe;
    iVar8 = FUN_01965294(param_2,&local_48);
LAB_012491d0:
    FUN_019bb7e0(local_34,pcVar20);
    goto LAB_012491dc;
  }
  if (iVar8 == 1) {
LAB_012491a8:
    cVar6 = *local_30;
    if (cVar6 == '+' || cVar6 == '-') goto LAB_012491b8;
  }
  else {
    cVar6 = *local_30;
  }
  uVar9 = 0;
  uVar16 = 0;
  uVar7 = (uint)(cVar6 == '+');
  uVar17 = iVar8 - uVar7;
  uVar14 = 0;
  uVar18 = 0;
  if (uVar17 < 0x21) {
    while( true ) {
      if (uVar17 == 0) goto LAB_012492f8;
      uVar13 = (byte)local_30[uVar7] - 0x30;
      if (9 < uVar13) break;
      uVar7 = uVar7 + 1;
      lVar4 = (ulonglong)uVar16 * 10;
      uVar11 = (uint)((ulonglong)lVar4 >> 0x20);
      uVar21 = (uint)((ulonglong)uVar9 * 10);
      uVar10 = (uint)((ulonglong)uVar9 * 10 >> 0x20);
      uVar3 = (ulonglong)uVar14;
      uVar15 = (uint)(uVar3 * 10);
      lVar5 = lVar4 + CONCAT44(uVar15,uVar10);
      uVar16 = (uint)lVar5;
      uVar12 = (uint)((ulonglong)lVar5 >> 0x20);
      uVar9 = uVar21 + uVar13;
      bVar22 = CARRY4(uVar16,(uint)CARRY4(uVar21,uVar13));
      uVar16 = uVar16 + CARRY4(uVar21,uVar13);
      uVar14 = uVar12 + bVar22;
      uVar18 = (int)(uVar3 * 10 >> 0x20) + uVar18 * 10 +
               (uint)(CARRY4(uVar15,uVar11) ||
                     CARRY4(uVar15 + uVar11,(uint)CARRY4((uint)lVar4,uVar10))) +
               (uint)CARRY4(uVar12,(uint)bVar22);
      uVar17 = uVar17 - 1;
    }
    goto LAB_012491b8;
  }
  do {
    if (uVar17 == 0) {
LAB_012492f8:
      FUN_019bb7e0(local_34,local_30);
      param_1[3] = uVar16;
      iVar8 = 0;
      param_1[2] = uVar9;
      param_1[4] = uVar14;
      param_1[5] = uVar18;
      goto LAB_012491e8;
    }
    uVar13 = (uint)((ulonglong)uVar14 * 10);
    uVar10 = (uint)((ulonglong)uVar14 * 10 >> 0x20);
    uVar11 = (uint)((ulonglong)uVar18 * 10);
    uVar12 = (uint)((ulonglong)uVar9 * 10);
    uVar14 = (uint)((ulonglong)uVar9 * 10 >> 0x20);
    uVar9 = uVar10 + uVar11;
    lVar4 = (ulonglong)uVar16 * 10;
    uVar15 = (uint)((ulonglong)lVar4 >> 0x20);
    lVar5 = lVar4 + CONCAT44(uVar13,uVar14);
    uVar16 = (uint)lVar5;
    bVar22 = CARRY4(uVar13,uVar15) || CARRY4(uVar13 + uVar15,(uint)CARRY4((uint)lVar4,uVar14));
    uVar14 = (uint)((ulonglong)lVar5 >> 0x20);
    uVar13 = uVar9 + bVar22;
    if ((((int)((ulonglong)uVar18 * 10 >> 0x20) != 0 || CARRY4(uVar10,uVar11)) ||
         CARRY4(uVar9,(uint)bVar22)) || (uVar18 = (byte)local_30[uVar7] - 0x30, 9 < uVar18))
    goto LAB_012491b8;
    uVar9 = uVar12 + uVar18;
    uVar17 = uVar17 - 1;
    bVar22 = CARRY4(uVar16,(uint)CARRY4(uVar12,uVar18));
    uVar16 = uVar16 + CARRY4(uVar12,uVar18);
    uVar7 = uVar7 + 1;
    bVar1 = CARRY4(uVar14,(uint)bVar22);
    uVar14 = uVar14 + bVar22;
    uVar18 = uVar13 + bVar1;
    if (CARRY4(uVar13,(uint)bVar1)) goto LAB_012491b8;
  } while( true );
code_r0x01248edc:
  *(uint *)(param_2 + 0x14) = uVar9;
  uVar9 = uVar9 + 1;
  if (uVar9 - uVar7 == 1) goto LAB_01248ef0;
  goto LAB_01248ec0;
LAB_01248ef0:
  local_48 = 5;
LAB_01248ef4:
  iVar8 = FUN_01964674(param_2,&local_48);
LAB_012491dc:
  param_1[2] = iVar8;
LAB_012491e0:
  iVar8 = 5;
LAB_012491e8:
  cVar6 = param_2[0x24];
  *param_1 = iVar8;
  param_1[1] = 0;
  param_2[0x24] = cVar6 + '\x01';
  if (iVar8 == 5) {
    return;
  }
  uVar7 = *(uint *)(param_2 + 0x14);
  if (uVar7 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar9 = *(byte *)(*piVar19 + uVar7) - 9;
      if ((0x17 < uVar9) || ((1 << (uVar9 & 0xff) & 0x800013U) == 0)) {
        if (*(byte *)(*piVar19 + uVar7) == 0x7d) {
          *(uint *)(param_2 + 0x14) = uVar7 + 1;
          return;
        }
        local_48 = 10;
        goto LAB_01249244;
      }
      uVar7 = uVar7 + 1;
      *(uint *)(param_2 + 0x14) = uVar7;
    } while (*(uint *)(param_2 + 0x10) != uVar7);
  }
  local_48 = 3;
LAB_01249244:
  iVar8 = FUN_01965294(param_2,&local_48);
LAB_01248c88:
  *param_1 = 5;
  param_1[1] = 0;
  param_1[2] = iVar8;
  return;
}

