// FUN_01bd43e8 @ 01bd43e8 size=1404 calls_out=11 calls_in=1
// strings: 

undefined8 FUN_01bd43e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  uint uVar5;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint local_770;
  int local_76c;
  int local_768;
  int local_764;
  int local_760;
  int local_75c;
  int local_758;
  int local_754;
  int local_750;
  undefined1 auStack_74c [32];
  undefined1 auStack_72c [32];
  undefined1 auStack_70c [32];
  undefined1 auStack_6ec [32];
  int local_6cc;
  uint local_6c8;
  uint local_6c4;
  uint local_6c0;
  uint local_6bc;
  uint local_6b8;
  uint local_6b4;
  uint local_6b0;
  undefined1 auStack_6ac [32];
  undefined1 auStack_68c [32];
  undefined1 auStack_66c [32];
  undefined1 auStack_64c [32];
  undefined1 auStack_62c [32];
  undefined1 auStack_60c [32];
  undefined1 auStack_5ec [32];
  undefined1 auStack_5cc [1440];
  int local_2c;
  
  puVar15 = auStack_5cc;
  local_2c = DAT_01d53560;
  FUN_01bd3f50(auStack_68c,0x660,&PTR_01d3b2b0,0);
  FUN_01bd3efc(auStack_62c,param_3);
  uVar12 = 2;
  FUN_01bd3efc(auStack_60c,param_4);
  FUN_01bd3b08(auStack_5ec,&DAT_00564a84);
  do {
    if ((uVar12 & 1) == 0) {
      iVar4 = (uVar12 >> 1) * 0x60;
      FUN_01bd3cb8(puVar15,puVar15 + 0x20,puVar15 + 0x40,auStack_68c + iVar4,
                   auStack_68c + iVar4 + 0x20,auStack_68c + iVar4 + 0x40);
    }
    else {
      FUN_01bd4000(puVar15,puVar15 + 0x20,puVar15 + 0x40,auStack_62c,auStack_60c,auStack_5ec,0,
                   puVar15 + -0x60,puVar15 + -0x40,puVar15 + -0x20);
    }
    uVar12 = uVar12 + 1;
    puVar15 = puVar15 + 0x60;
  } while (uVar12 != 0x11);
  FUN_01bed93e(auStack_74c,0,0x60);
  bVar1 = true;
  iVar4 = 0xff;
  while( true ) {
    FUN_01bf0fd4(iVar4,5);
    iVar7 = iVar4 + -1;
    if (extraout_r1 == 0) {
      iVar2 = FUN_01bd3ecc(param_2,iVar4 + 4);
      iVar2 = FUN_01bd3ecc(param_2,iVar4 + 3,iVar2 << 5);
      iVar2 = FUN_01bd3ecc(param_2,iVar4 + 2,extraout_r2 | iVar2 << 4);
      iVar3 = FUN_01bd3ecc(param_2,iVar4 + 1);
      iVar4 = FUN_01bd3ecc(param_2,iVar4);
      uVar12 = FUN_01bd3ecc(param_2,iVar7);
      uVar6 = extraout_r2_00 | uVar12 | iVar2 << 3 | iVar3 << 2 | iVar4 << 1;
      uVar12 = uVar6 >> 5;
      uVar6 = uVar12 - 1 & uVar6 | uVar12 * (0x3f - uVar6);
      uVar13 = (uVar6 & 1) + (uVar6 >> 1);
      FUN_01bd3f50(auStack_6ec,0x60);
      uVar6 = 0;
      puVar15 = auStack_68c;
      do {
        FUN_01bd3b3c(auStack_6ec,uVar13 ^ uVar6,puVar15);
        FUN_01bd3b3c(&local_6cc,uVar13 ^ uVar6,puVar15 + 0x20,&local_6cc);
        uVar5 = uVar13 ^ uVar6;
        uVar6 = uVar6 + 1;
        FUN_01bd3b3c(auStack_6ac,uVar5,puVar15 + 0x40);
        puVar15 = puVar15 + 0x60;
      } while (uVar6 != 0x11);
      uVar6 = -local_6cc;
      iVar4 = (local_6cc != 0) + local_6c8;
      uVar13 = -iVar4;
      uVar8 = (uint)(iVar4 != 0) + (uint)CARRY4((uint)(local_6cc != 0),local_6c8);
      iVar4 = uVar8 + local_6c4;
      uVar5 = -iVar4;
      uVar9 = (uint)(iVar4 != 0) + (uint)CARRY4(uVar8,local_6c4);
      iVar4 = uVar9 + local_6c0;
      uVar8 = -iVar4;
      uVar10 = (uint)(iVar4 != 0) + (uint)CARRY4(uVar9,local_6c0);
      iVar4 = uVar10 + local_6bc;
      uVar9 = -iVar4;
      uVar14 = (uint)(iVar4 != 0) + (uint)CARRY4(uVar10,local_6bc);
      iVar4 = uVar14 + local_6b8;
      uVar10 = -iVar4;
      uVar11 = (uint)(iVar4 != 0) + (uint)CARRY4(uVar14,local_6b8);
      iVar4 = uVar11 + local_6b4;
      uVar14 = -iVar4;
      uVar11 = (uint)(iVar4 != 0) + (uint)CARRY4(uVar11,local_6b4);
      iVar4 = uVar11 + local_6b0;
      FUN_01bd0bf4(&local_770,(iVar4 != 0) + CARRY4(uVar11,local_6b0),0,0xffffffff);
      local_76c = uVar6 + local_770;
      uVar6 = (uint)CARRY4(uVar6,local_770);
      uVar11 = uVar6 + local_770;
      local_768 = uVar11 + uVar13;
      uVar6 = (uint)CARRY4(uVar6,local_770) + (uint)CARRY4(uVar11,uVar13);
      uVar13 = uVar6 + local_770;
      local_764 = uVar13 + uVar5;
      uVar6 = (uint)CARRY4(uVar6,local_770) + (uint)CARRY4(uVar13,uVar5);
      local_760 = uVar6 + uVar8;
      uVar6 = (uint)CARRY4(uVar6,uVar8);
      local_75c = uVar6 + uVar9;
      uVar6 = (uint)CARRY4(uVar6,uVar9);
      local_758 = uVar6 + uVar10;
      uVar6 = (uint)CARRY4(uVar6,uVar10);
      uVar13 = uVar6 + (local_770 & 1);
      local_754 = uVar13 + uVar14;
      local_750 = (local_770 + CARRY4(uVar6,local_770 & 1) + (uint)CARRY4(uVar13,uVar14)) - iVar4;
      FUN_01bd3b3c(&local_6cc,uVar12,&local_6cc,&local_76c);
      if (bVar1) {
        FUN_01bd3b08(auStack_74c,auStack_6ec);
        FUN_01bd3b08(auStack_72c,&local_6cc);
        FUN_01bd3b08(auStack_70c,auStack_6ac);
      }
      else {
        FUN_01bd4000(auStack_74c,auStack_72c,auStack_70c,auStack_74c,auStack_72c,auStack_70c,0,
                     auStack_6ec,&local_6cc,auStack_6ac);
      }
      bVar1 = false;
    }
    if (iVar7 == -1) break;
    if (!bVar1) {
      FUN_01bd3cb8(auStack_74c,auStack_72c,auStack_70c,auStack_74c,auStack_72c,auStack_70c);
    }
    iVar4 = iVar7;
  }
  FUN_01bd3efc(param_1,auStack_74c);
  FUN_01bd3efc(param_1 + 0x20,auStack_72c);
  FUN_01bd3efc(param_1 + 0x40,auStack_70c);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

