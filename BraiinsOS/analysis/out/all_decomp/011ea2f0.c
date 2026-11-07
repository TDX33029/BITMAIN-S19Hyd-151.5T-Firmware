// FUN_011ea2f0 @ 011ea2f0 size=1336 calls_out=12 calls_in=1
// strings: else | else

undefined8 FUN_011ea2f0(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  uint uVar14;
  int local_488;
  int local_484;
  undefined1 auStack_480 [136];
  undefined1 local_3f8;
  int local_3f0;
  undefined4 local_3ec;
  undefined1 auStack_3e8 [104];
  int local_380;
  undefined4 local_37c;
  undefined1 auStack_378 [104];
  int local_310;
  undefined4 local_30c;
  undefined1 auStack_308 [104];
  int local_2a0;
  undefined4 local_29c;
  undefined1 auStack_298 [104];
  int local_230;
  undefined4 local_22c;
  undefined1 auStack_228 [104];
  undefined1 auStack_1c0 [112];
  undefined1 auStack_150 [112];
  int local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int local_98;
  undefined4 local_94;
  undefined1 auStack_90 [108];
  
  iVar6 = *param_2;
  if (iVar6 != 0) {
    local_488 = param_2[1];
    iVar5 = iVar6;
    local_484 = local_488;
    do {
      uVar1 = *(ushort *)(iVar5 + 0x192);
      iVar11 = iVar5 + 0x10c;
      uVar8 = 0xffffffff;
      iVar9 = (uint)uVar1 * 0xc;
      do {
        if (iVar9 == 0) {
          uVar8 = (uint)uVar1;
          goto LAB_011ea3b0;
        }
        uVar14 = *(uint *)(iVar11 + 8);
        uVar7 = uVar14;
        if (1 < uVar14) {
          uVar7 = 2;
        }
        iVar3 = FUN_016dd50a("if",*(undefined4 *)(iVar11 + 4),uVar7);
        if (iVar3 == 0) {
          iVar3 = 2 - uVar14;
        }
        iVar9 = iVar9 + -0xc;
        uVar8 = uVar8 + 1;
        iVar11 = iVar11 + 0xc;
      } while ((char)((0 < iVar3) - (iVar3 < 0)) == '\x01');
      if (0 < iVar3 == iVar3 < 0) {
        iVar9 = 0;
        uVar10 = 0;
        pcVar13 = (char *)(iVar5 + uVar8 * 0x18);
        if (*pcVar13 != '\x05') goto LAB_011ea808;
        FUN_0119d4b4(auStack_480,param_1,"if",2);
        local_3f0 = 2;
        iVar5 = iVar6;
        iVar9 = local_488;
        goto LAB_011ea42c;
      }
LAB_011ea3b0:
      if (local_484 == 0) break;
      local_484 = local_484 + -1;
      iVar5 = *(int *)(iVar5 + uVar8 * 4 + 0x198);
    } while( true );
  }
  iVar9 = 0;
  uVar10 = 0;
  goto LAB_011ea808;
LAB_011ea42c:
  uVar1 = *(ushort *)(iVar5 + 0x192);
  iVar3 = iVar5 + 0x10c;
  uVar8 = 0xffffffff;
  iVar11 = (uint)uVar1 * 0xc;
  do {
    if (iVar11 == 0) {
      uVar8 = (uint)uVar1;
      goto LAB_011ea4ac;
    }
    uVar14 = *(uint *)(iVar3 + 8);
    uVar7 = uVar14;
    if (3 < uVar14) {
      uVar7 = 4;
    }
    iVar4 = FUN_016dd50a(&DAT_00566d80,*(undefined4 *)(iVar3 + 4),uVar7);
    if (iVar4 == 0) {
      iVar4 = 4 - uVar14;
    }
    iVar11 = iVar11 + -0xc;
    uVar8 = uVar8 + 1;
    iVar3 = iVar3 + 0xc;
  } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
  if (0 < iVar4 == iVar4 < 0) {
    pcVar12 = (char *)(iVar5 + uVar8 * 0x18);
    iVar5 = 2;
    if (*pcVar12 != '\x05') goto LAB_011ea570;
    FUN_0119d4b4(&local_230,param_1,&DAT_00566d80,4);
    FUN_011e5598(&local_380,&local_230,pcVar12 + 4);
    if (local_380 == 2) {
      iVar9 = FUN_011f0ab8();
      FUN_01161600(&local_230);
      uVar10 = 1;
      goto LAB_011ea800;
    }
    local_3ec = local_37c;
    local_3f0 = local_380;
    FUN_016dd1aa(auStack_3e8,auStack_378,0x68);
    FUN_01161600(&local_230);
    iVar5 = local_380;
    goto LAB_011ea570;
  }
LAB_011ea4ac:
  if (iVar9 == 0) goto LAB_011ea56c;
  iVar9 = iVar9 + -1;
  iVar5 = *(int *)(iVar5 + uVar8 * 4 + 0x198);
  goto LAB_011ea42c;
LAB_011ea56c:
  iVar5 = 2;
LAB_011ea570:
  local_310 = 2;
  do {
    uVar1 = *(ushort *)(iVar6 + 0x192);
    iVar11 = iVar6 + 0x10c;
    uVar8 = 0xffffffff;
    iVar9 = (uint)uVar1 * 0xc;
    do {
      if (iVar9 == 0) {
        uVar8 = (uint)uVar1;
        goto LAB_011ea610;
      }
      uVar14 = *(uint *)(iVar11 + 8);
      uVar7 = uVar14;
      if (3 < uVar14) {
        uVar7 = 4;
      }
      iVar3 = FUN_016dd50a("else",*(undefined4 *)(iVar11 + 4),uVar7);
      if (iVar3 == 0) {
        iVar3 = 4 - uVar14;
      }
      iVar9 = iVar9 + -0xc;
      uVar8 = uVar8 + 1;
      iVar11 = iVar11 + 0xc;
    } while ((char)((0 < iVar3) - (iVar3 < 0)) == '\x01');
    if (0 < iVar3 == iVar3 < 0) {
      pcVar12 = (char *)(iVar6 + uVar8 * 0x18);
      iVar6 = 2;
      if (*pcVar12 != '\x05') goto LAB_011ea6d0;
      FUN_0119d4b4(&local_230,param_1,"else",4);
      FUN_011e5598(&local_2a0,&local_230,pcVar12 + 4);
      if (local_2a0 == 2) {
        iVar9 = FUN_011f0ab8();
        FUN_01161600(&local_230);
        goto LAB_011ea778;
      }
      local_30c = local_29c;
      local_310 = local_2a0;
      FUN_016dd1aa(auStack_308,auStack_298,0x68);
      FUN_01161600(&local_230);
      iVar6 = local_2a0;
      goto LAB_011ea6d0;
    }
LAB_011ea610:
    if (local_488 == 0) break;
    local_488 = local_488 + -1;
    iVar6 = *(int *)(iVar6 + uVar8 * 4 + 0x198);
  } while( true );
  iVar6 = 2;
LAB_011ea6d0:
  uVar2 = FUN_01352d48(local_3f8,pcVar13);
  FUN_0125acb4(&local_b0,auStack_480,pcVar13,uVar2);
  if (local_b0 == 0) {
    iVar9 = FUN_011f0ab8();
joined_r0x011ea76c:
    if (iVar6 != 2) {
      FUN_011e792c(&local_310);
    }
LAB_011ea778:
    uVar10 = 1;
    if (iVar5 != 2) {
      FUN_011e792c(&local_3f0);
    }
  }
  else {
    local_c8 = local_b0;
    local_c4 = local_ac;
    uStack_c0 = local_a8;
    uStack_bc = uStack_a4;
    uStack_b8 = uStack_a0;
    FUN_011e5598(&local_98,auStack_480,pcVar13 + 4);
    if (local_98 == 2) {
      iVar9 = FUN_011f0ab8(local_94);
      FUN_011e4f30(&local_c8);
      goto joined_r0x011ea76c;
    }
    FUN_016dd1aa(auStack_228,auStack_90,0x68);
    FUN_016dd1aa(auStack_1c0,&local_3f0,0x70);
    FUN_016dd1aa(auStack_150,&local_310,0x70);
    local_e0 = local_c8;
    uStack_dc = local_c4;
    uStack_d8 = uStack_c0;
    uStack_d4 = uStack_bc;
    uStack_d0 = uStack_b8;
    local_22c = local_94;
    local_230 = local_98;
    iVar9 = thunk_FUN_016d4a50(0x164);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x164);
    }
    FUN_016dd1aa(iVar9,&local_230,0x164);
    uVar10 = 0;
  }
LAB_011ea800:
  FUN_01161600(auStack_480);
LAB_011ea808:
  return CONCAT44(iVar9,uVar10);
}

