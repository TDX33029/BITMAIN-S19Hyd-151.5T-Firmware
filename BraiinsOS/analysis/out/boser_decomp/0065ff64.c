// FUN_0065ff64 @ 0065ff64 size=692 calls_out=1 calls_in=0
// strings: ByteClasses(ByteClasses({singletons})error parsing regexerror with capture groupsNFA contains Unicode word boundarycurrently captures must be disabled when compiling a reverse NFA

undefined4 FUN_0065ff64(int param_1,undefined4 *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  code *pcVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  
  bVar1 = *(byte *)(param_1 + 0xff);
  if (bVar1 == 0xff) {
                    /* WARNING: Could not recover jumptable at 0x006601e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_003d40cd,0x21);
    return uVar13;
  }
  iVar4 = param_2[1];
  uVar13 = *param_2;
  pcVar11 = *(code **)(iVar4 + 0xc);
  iVar5 = (*pcVar11)(uVar13,
                     "ByteClasses(ByteClasses({singletons})error parsing regexerror with capture groupsNFA contains Unicode word boundarycurrently captures must be disabled when compiling a reverse NFA"
                     ,0xc);
  if (iVar5 != 0) {
    return 1;
  }
  uVar15 = 0;
  uVar16 = 0;
LAB_0065ffcc:
  bVar3 = false;
  if (uVar16 == bVar1 + 1) {
    uVar13 = (*pcVar11)(uVar13,&DAT_0053341b,1);
    return uVar13;
  }
  local_37 = (undefined1)uVar16;
  if ((uVar16 == 0) || (iVar5 = (*pcVar11)(uVar13,&DAT_00533bc1,2), iVar5 == 0)) {
    local_30 = &LAB_01a7e8b0;
    local_34 = &local_37;
    iVar5 = FUN_012fa178(uVar13,iVar4,&DAT_005ae70c,&local_34);
    if (iVar5 != 0) {
      return 1;
    }
    uVar14 = 0xff0000;
    bVar17 = false;
    do {
      while( true ) {
        uVar6 = uVar14 >> 0x10;
        uVar7 = (uVar14 & 0xffff) >> 8;
        bVar2 = bVar17;
        do {
          uVar8 = uVar7;
          if ((bVar17) || (bVar17 = uVar6 <= uVar8, uVar6 < uVar8)) {
            uVar7 = (uVar15 & 0xffff) >> 8;
            if (!bVar3) {
              iVar5 = (*pcVar11)(uVar13,"]",1);
              uVar16 = uVar16 + 1;
              if (iVar5 != 0) {
                return 1;
              }
              goto LAB_0065ffcc;
            }
            uVar6 = uVar15;
            bVar17 = bVar2;
            bVar3 = false;
            goto LAB_006600e4;
          }
          uVar9 = 0xffff00ff;
          if (bVar17) {
            uVar9 = 0xffffff00;
          }
          uVar7 = uVar8 + 1;
          if (bVar17) {
            uVar7 = uVar8;
          }
          uVar12 = (uVar8 + 1 & 0xff) << 8;
          if (bVar17) {
            uVar12 = 0;
          }
          uVar14 = uVar14 & uVar9 | uVar12;
          bVar2 = (bool)(bVar2 & !bVar17 | bVar17);
        } while ((uint)*(byte *)(param_1 + uVar8) != (uVar16 & 0xff));
        uVar7 = uVar8;
        bVar17 = bVar2;
        if (bVar3) break;
LAB_00660168:
        bVar3 = true;
        uVar15 = (uVar7 & 0xff) << 8 | (uVar8 & 0xff) << 0x10;
      }
      uVar6 = uVar8 & 0xff;
      uVar7 = uVar15 >> 8;
      if ((uVar15 >> 0x10) + 1 == uVar6) goto LAB_00660168;
      uVar7 = uVar15 >> 8 & 0xff;
      uVar6 = uVar6 << 8 | uVar6 << 0x10;
      bVar3 = true;
LAB_006600e4:
      local_35 = (undefined1)(uVar15 >> 0x10);
      local_36 = (undefined1)uVar7;
      if (uVar7 == uVar15 >> 0x10) {
        puVar10 = &DAT_00590e5f;
      }
      else {
        local_2c = &local_35;
        local_28 = &LAB_01a7e8b0;
        puVar10 = &DAT_005a02f4;
      }
      local_30 = &LAB_01a7e8b0;
      local_34 = &local_36;
      iVar5 = FUN_012fa178(uVar13,iVar4,puVar10,&local_34);
      uVar15 = uVar6;
    } while (iVar5 == 0);
  }
  return 1;
}

