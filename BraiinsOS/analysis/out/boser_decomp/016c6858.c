// FUN_016c6858 @ 016c6858 size=808 calls_out=3 calls_in=0
// strings: ByteClasses(ByteClasses({singletons})error parsing regexerror with capture groupsNFA contains Unicode word boundarycurrently captures must be disabled when compiling a reverse NFA

undefined4 FUN_016c6858(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint **ppuVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  int local_6c;
  uint **local_64;
  int local_5c [3];
  uint **local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint *local_34;
  undefined *local_30;
  uint *local_2c;
  undefined *local_28;
  
  if (*(char *)(param_1 + 0xff) == -1) {
                    /* WARNING: Could not recover jumptable at 0x016c6b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_2[1] + 0xc))
                      (*param_2,
                       "ByteClasses({singletons})error parsing regexerror with capture groupsNFA contains Unicode word boundarycurrently captures must be disabled when compiling a reverse NFA"
                       ,0x19);
    return uVar3;
  }
  uVar3 = *param_2;
  iVar12 = param_2[1];
  pcVar9 = *(code **)(iVar12 + 0xc);
  iVar4 = (*pcVar9)(uVar3,
                    "ByteClasses(ByteClasses({singletons})error parsing regexerror with capture groupsNFA contains Unicode word boundarycurrently captures must be disabled when compiling a reverse NFA"
                    ,0xc);
  if (iVar4 != 0) {
    return 1;
  }
  local_5c[2] = 0;
  local_5c[1] = 0;
  local_5c[0] = param_1;
LAB_016c68d0:
  ppuVar5 = (uint **)FUN_016c2b5c(local_5c);
  if (((uint)ppuVar5 & 0xff) == 2) {
    ppuVar5 = (uint **)((uint)local_64 & 0xffffff00 | 2);
  }
  else {
    local_6c = local_5c[2];
    local_5c[2] = local_5c[2] + 1;
  }
  if (((uint)ppuVar5 & 0xff) == 2) {
    uVar3 = (*pcVar9)(uVar3,&DAT_0053341b,1);
    return uVar3;
  }
  if ((local_6c != 0) && (iVar4 = (*pcVar9)(uVar3,&DAT_00533bc1,2), iVar4 != 0)) {
    return 1;
  }
  local_34 = (uint *)(((uint)ppuVar5 & 0xffff) >> 8);
  if (((uint)ppuVar5 & 1) != 0) {
    local_34 = (uint *)((uint)ppuVar5 >> 0x10);
  }
  local_4c = &LAB_01a6a304;
  local_50 = &local_34;
  iVar4 = FUN_012fa178(uVar3,iVar12,&DAT_005ae70c,&local_50);
  if (iVar4 != 0) {
    return 1;
  }
  local_44 = CONCAT31(local_44._1_3_,2);
  local_48 = 0;
  local_50 = ppuVar5;
  local_4c = (undefined1 *)param_1;
  do {
    while( true ) {
      uVar6 = FUN_016c2c60(&local_50);
      uVar2 = local_40;
      uVar1 = local_44;
      uVar7 = local_44 & 0xff;
      if ((uVar6 & 0xff) == 2) break;
      if (uVar7 == 2) {
        local_44 = uVar6;
      }
      else {
        uVar11 = (local_40 & 0xffff) >> 8;
        uVar10 = uVar6 >> 8 & 0xff;
        if ((local_40 & 1) != 0) {
          uVar11 = local_40 >> 0x10;
        }
        bVar13 = (uVar6 & 1) == 0;
        if (bVar13) {
          uVar11 = uVar11 + 1;
        }
        else {
          uVar10 = uVar6 >> 0x10;
        }
        if (!bVar13 || uVar11 != uVar10) {
          local_44 = uVar6;
          local_40 = uVar6;
          goto LAB_016c6a38;
        }
      }
      local_40 = uVar6;
    }
    local_44 = CONCAT31(local_44._1_3_,2);
LAB_016c6a38:
    if (uVar7 == 2) break;
    local_38 = uVar2;
    local_3c = uVar1;
    if (uVar7 == (uVar2 & 0xff)) {
      if ((uVar2 & 1) == 0) {
        if ((uVar1 >> 8 & 0xff) == (uVar2 >> 8 & 0xff)) goto LAB_016c6abc;
        goto LAB_016c6a70;
      }
      if (0xffff < (uVar1 ^ uVar2)) goto LAB_016c6a70;
LAB_016c6abc:
      puVar8 = &DAT_00590e5f;
    }
    else {
LAB_016c6a70:
      local_2c = &local_38;
      local_28 = &DAT_016c6bac;
      puVar8 = &DAT_005a02f4;
    }
    local_30 = &DAT_016c6bac;
    local_34 = &local_3c;
    iVar4 = FUN_012fa178(uVar3,iVar12,puVar8,&local_34);
    if (iVar4 != 0) {
      return 1;
    }
  } while( true );
  iVar4 = (*pcVar9)(uVar3,"]",1);
  local_64 = ppuVar5;
  if (iVar4 != 0) {
    return 1;
  }
  goto LAB_016c68d0;
}

