// FUN_009b22f8 @ 009b22f8 size=1732 calls_out=19 calls_in=0
// strings: a Display implementation returned an error unexpectedly

void FUN_009b22f8(int *param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int unaff_r8;
  int *piVar18;
  undefined4 **ppuVar19;
  int unaff_r11;
  int iVar20;
  undefined8 uVar21;
  int **local_90;
  int *local_8c;
  undefined4 **local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int *local_74;
  int local_70;
  int *local_68;
  undefined1 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  undefined4 **local_38;
  int *local_34;
  int local_30;
  undefined4 local_2c;
  
  iVar4 = *param_1;
  iVar5 = *param_2;
  iVar16 = -0x80000000;
  if (iVar5 == -0x80000000) {
    ppuVar19 = (undefined4 **)0x80000000;
  }
  else {
    ppuVar19 = (undefined4 **)param_2[2];
    iVar6 = param_2[1];
    if (ppuVar19 == (undefined4 **)0x0) {
      unaff_r8 = 1;
    }
    else {
      unaff_r8 = thunk_FUN_016d4a50(ppuVar19);
      if (unaff_r8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,ppuVar19);
      }
    }
    FUN_016dd1aa(unaff_r8,iVar6,ppuVar19);
  }
  iVar6 = *param_3;
  if (iVar6 == -0x80000000) {
    iVar7 = *param_4;
    piVar18 = param_2;
  }
  else {
    piVar18 = (int *)param_3[1];
    iVar16 = param_3[2];
    if (iVar16 == 0) {
      unaff_r11 = 1;
    }
    else {
      unaff_r11 = thunk_FUN_016d4a50(iVar16);
      if (unaff_r11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar16);
      }
    }
    FUN_016dd1aa(unaff_r11,piVar18,iVar16);
    iVar7 = *param_4;
  }
  if (iVar7 == -0x80000000) {
    iVar14 = -0x80000000;
  }
  else {
    iVar12 = param_4[1];
    iVar14 = param_4[2];
    if (iVar14 == 0) {
      piVar18 = (int *)&DAT_00000001;
    }
    else {
      piVar18 = (int *)thunk_FUN_016d4a50(iVar14);
      if (piVar18 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar14);
      }
    }
    FUN_016dd1aa(piVar18,iVar12,iVar14);
  }
  puVar8 = (uint *)(DAT_018d7fac + 0xc);
  piVar15 = (int *)(DAT_018d7fac + 8);
  uVar9 = *(uint *)(DAT_018d7fac + 0xc);
  do {
    local_90 = ppuVar19;
    local_8c = (int *)unaff_r8;
    local_88 = ppuVar19;
    local_84 = iVar16;
    local_80 = unaff_r11;
    local_7c = iVar16;
    local_78 = iVar14;
    local_74 = piVar18;
    local_70 = iVar14;
    if (0xfffffffe < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724(&DAT_0034abe5,0xf,&DAT_0186a960);
    }
    uVar10 = *puVar8;
    if (*puVar8 == uVar9) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar8);
        if (bVar1) {
          *puVar8 = uVar9 + 1;
          DataMemoryBarrier(0xb);
          uVar21 = thunk_FUN_016de0ee(puVar8,0x1b0);
          iVar16 = (int)uVar21 + (int)((ulonglong)uVar21 >> 0x20);
          if ((*(char *)(iVar16 + 8) != '\x01') && (iVar16 = FUN_00a30258(iVar16,0), iVar16 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_015f853c(&DAT_018ae900);
          }
          uVar9 = *(uint *)(iVar16 + 4);
          uVar10 = *(uint *)(*piVar15 + (uVar9 & 0xff) * 4);
          local_64 = false;
          DataMemoryBarrier(0xb);
          if (uVar10 == 0) goto LAB_009b2534;
          uVar11 = uVar9;
          goto LAB_009b24fc;
        }
        uVar10 = *puVar8;
      } while (*puVar8 == uVar9);
    }
    uVar9 = uVar10;
    ClearExclusiveLocal();
  } while( true );
  while( true ) {
    uVar2 = uVar11 & 0xffff;
    uVar11 = uVar11 >> 8;
    uVar10 = *(uint *)((uVar10 & 0xfffffffe) + (uVar2 >> 8) * 4);
    DataMemoryBarrier(0xb);
    if (uVar10 == 0) break;
LAB_009b24fc:
    if ((uVar10 & 1) == 0) {
      local_64 = *(uint *)(uVar10 + 0xc) == uVar9;
      break;
    }
  }
LAB_009b2534:
  local_68 = piVar15;
  uVar21 = FUN_009bd354(DAT_018d7f98,DAT_018d7f9c,DAT_018d7fa0,DAT_018d7fa4,iVar4);
  uVar3 = DAT_018d7fa8;
  piVar18 = (int *)((uint)&local_60 | 4);
  *piVar18 = (int)local_90;
  piVar18[1] = (int)local_8c;
  piVar18[2] = (int)local_88;
  piVar18[3] = local_84;
  piVar18[4] = local_80;
  piVar18[5] = local_7c;
  piVar18[6] = local_78;
  piVar18[7] = (int)local_74;
  piVar18[8] = local_70;
  local_60 = iVar4;
  piVar18 = (int *)thunk_FUN_016d4a50(0x28);
  if (piVar18 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x28);
  }
  *piVar18 = local_60;
  piVar18[1] = local_5c;
  piVar18[2] = local_58;
  piVar18[3] = local_54;
  piVar18[4] = local_50;
  piVar18[5] = local_4c;
  piVar18[6] = local_48;
  piVar18[7] = local_44;
  piVar18[8] = iStack_40;
  piVar18[9] = iStack_3c;
  FUN_009bf7b0(&local_38,uVar3,piVar18,local_48,uVar21,&local_68);
  iVar16 = local_30;
  piVar18 = local_34;
  if (local_38 == (undefined4 **)0x0) {
    FUN_009bff30(&local_38);
    FUN_009ccb08(piVar15);
  }
  else {
    if (local_38 != (undefined4 **)0x1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_0186a11c);
    }
    FUN_009ccb08(piVar15);
    FUN_009be640(piVar18,iVar16);
    if (iVar16 != -1) {
      piVar18 = (int *)(iVar16 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar18;
        bVar1 = (bool)hasExclusiveAccess(piVar18);
      } while (!bVar1);
      *piVar18 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        thunk_FUN_016d3fb4(iVar16);
      }
    }
  }
  local_58 = 0;
  local_60 = 0;
  local_5c = 1;
  local_38 = (undefined4 **)*param_1;
  local_8c = (int *)&LAB_00fac484;
  local_90 = (int **)&local_38;
  iVar14 = FUN_00fa948c(&local_60,&DAT_01869a8c,&DAT_00590e71,&local_90);
  iVar12 = local_58;
  iVar4 = local_5c;
  iVar16 = local_60;
  if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_90,
                 &DAT_01869ab4,&DAT_018af130);
  }
  iVar20 = 0;
  iVar17 = 1;
  iVar14 = 1;
  iVar13 = 0;
  if (iVar5 != -0x80000000) {
    iVar13 = param_2[2];
    iVar5 = param_2[1];
    if ((iVar13 != 0) && (iVar14 = thunk_FUN_016d4a50(iVar13), iVar14 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar13);
    }
    FUN_016dd1aa(iVar14,iVar5,iVar13);
  }
  if (iVar6 != -0x80000000) {
    iVar20 = param_3[2];
    iVar5 = param_3[1];
    if (iVar20 == 0) {
      iVar17 = 1;
    }
    else {
      iVar17 = thunk_FUN_016d4a50(iVar20);
      if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar20);
      }
    }
    FUN_016dd1aa(iVar17,iVar5,iVar20);
  }
  if (iVar7 == -0x80000000) {
    iVar7 = 1;
    iVar6 = 0;
  }
  else {
    iVar5 = param_4[1];
    iVar6 = param_4[2];
    if (iVar6 == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = thunk_FUN_016d4a50(iVar6);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar6);
      }
    }
    FUN_016dd1aa(iVar7,iVar5,iVar6);
  }
  local_5c = iVar12;
  local_60 = iVar4;
  local_58 = iVar14;
  local_54 = iVar13;
  local_50 = iVar17;
  local_4c = iVar20;
  local_48 = iVar7;
  local_44 = iVar6;
  FUN_009b564c(&local_38,DAT_018d8048 + 8,&local_60,4);
  if (local_38 != (undefined4 **)0x5) {
    local_84 = local_2c;
    local_88 = (undefined4 **)local_30;
    local_8c = local_34;
    local_90 = local_38;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_90,&DAT_01869dec,&DAT_01886b2c);
  }
  do {
    bVar1 = (bool)hasExclusiveAccess(local_34 + 2);
  } while (!bVar1);
  local_34[2] = 0;
  local_34[3] = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *local_34;
    bVar1 = (bool)hasExclusiveAccess(local_34);
  } while (!bVar1);
  *local_34 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c0df4();
  }
  if (iVar6 != 0) {
    thunk_FUN_016d3fb4(iVar7);
  }
  if (iVar20 != 0) {
    thunk_FUN_016d3fb4(iVar17);
  }
  if (iVar13 != 0) {
    thunk_FUN_016d3fb4(iVar14);
  }
  if (iVar16 != 0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  return;
}

