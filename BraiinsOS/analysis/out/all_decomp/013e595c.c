// FUN_013e595c @ 013e595c size=1520 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_013e595c(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint3 uVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  code *pcVar12;
  char *pcVar13;
  code *pcVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 uVar17;
  uint **ppuVar18;
  uint **ppuVar19;
  code *pcVar20;
  int local_48;
  int local_44;
  int iStack_40;
  uint local_3c;
  uint *local_38;
  code *local_34;
  uint **local_30;
  code *local_2c;
  uint **local_28;
  
  puVar15 = (uint *)*param_1;
  uVar16 = param_1[1];
  puVar8 = (undefined1 *)((int)puVar15 + -9);
  if ((puVar8 < (undefined1 *)0x5) || (puVar15 == (uint *)&DAT_00000020)) {
LAB_013e5980:
    local_30 = &local_38;
    local_2c = FUN_00face84;
    local_38 = puVar15;
    FUN_00600d2c(&local_48,&DAT_00593f96,&local_30);
    if (uVar16 - 9 < 5) goto LAB_013e59b0;
LAB_013e5de8:
    uVar11 = uVar16 - 9;
    if (uVar16 == 0x20) goto LAB_013e59b0;
    if (0x7f < uVar16) {
      uVar11 = uVar16 >> 8;
      if (uVar11 < 0x20) {
        if (uVar11 == 0) {
          bVar1 = (&DAT_0041951b)[uVar16 & 0xff];
          bVar3 = bVar1 & 1;
joined_r0x013e5e6c:
          uVar11 = (uint)bVar1;
          if (bVar3 != 0) goto LAB_013e59b0;
        }
        else if ((uVar11 == 0x16) && (uVar16 == 0x1680)) goto LAB_013e59b0;
      }
      else {
        if (uVar11 == 0x20) {
          bVar1 = (&DAT_0041951b)[uVar16 & 0xff];
          bVar3 = bVar1 & 2;
          goto joined_r0x013e5e6c;
        }
        if ((uVar11 == 0x30) && (uVar16 == 0x3000)) goto LAB_013e59b0;
      }
    }
    if (uVar16 >= 0x20) {
      uVar11 = uVar16 - 0x7f;
    }
    if (uVar16 < 0x20 || uVar11 < 0x21) goto LAB_013e59b0;
    uVar7 = 0;
    if (uVar16 < 0x80) {
      ppuVar18 = (uint **)&DAT_00000001;
LAB_013e5e94:
      local_30 = (uint **)CONCAT31(uVar7,(char)uVar16);
    }
    else {
      uVar6 = (undefined1)uVar16;
      uVar4 = (undefined1)(uVar16 >> 6);
      if (uVar16 < 0x800) {
        local_30 = (uint **)((CONCAT11(uVar6,uVar4) & 0x3fff | 0x8000) | 0xc0);
        ppuVar18 = (uint **)&SUB_00000002;
      }
      else {
        uVar5 = (undefined1)(uVar16 >> 0xc);
        if (uVar16 >> 0x10 != 0) {
          uVar16 = uVar16 >> 0x12 | 0xfffffff0;
          ppuVar18 = (uint **)&DAT_00000004;
          uVar7 = CONCAT21(CONCAT11(uVar6,uVar4),uVar5) & 0x3f3f3f | 0x808080;
          goto LAB_013e5e94;
        }
        ppuVar18 = (uint **)0x3;
        local_30 = (uint **)((CONCAT21(CONCAT11(uVar6,uVar4),uVar5) & 0xff3fff | 0x8000) & 0x3fffff
                            | 0x8000e0);
      }
    }
    pcVar12 = (code *)thunk_FUN_016d4a50(ppuVar18);
    if (pcVar12 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,ppuVar18);
    }
    FUN_016dd1aa(pcVar12,&local_30,ppuVar18);
    bVar2 = false;
  }
  else {
    if (&DAT_00000080 <= puVar15) {
      puVar8 = (undefined1 *)((uint)puVar15 >> 8);
      if (puVar8 < (undefined1 *)0x20) {
        if (puVar8 == (undefined1 *)0x0) {
          bVar1 = (&DAT_0041951b)[(uint)puVar15 & 0xff];
          bVar3 = bVar1 & 1;
          goto joined_r0x013e5cf4;
        }
        if ((puVar8 == (undefined1 *)0x16) && (puVar15 == (uint *)0x1680)) goto LAB_013e5980;
      }
      else if (puVar8 == (undefined1 *)0x20) {
        bVar1 = (&DAT_0041951b)[(uint)puVar15 & 0xff];
        bVar3 = bVar1 & 2;
joined_r0x013e5cf4:
        puVar8 = (undefined1 *)(uint)bVar1;
        if (bVar3 != 0) goto LAB_013e5980;
      }
      else if (puVar8 == (undefined1 *)0x30 && puVar15 == (uint *)0x3000) goto LAB_013e5980;
    }
    if (puVar15 >= &DAT_00000020) {
      puVar8 = (undefined1 *)((int)puVar15 + -0x7f);
    }
    if (puVar15 < &DAT_00000020 || puVar8 < (undefined1 *)0x21) goto LAB_013e5980;
    if (puVar15 < (uint *)0x80) {
      local_30 = (uint **)((uint)puVar15 & 0xff);
      iVar9 = 1;
    }
    else {
      uVar6 = SUB41(puVar15,0);
      uVar4 = (undefined1)((uint)puVar15 >> 6);
      if (puVar15 < (uint *)0x800) {
        local_30 = (uint **)((CONCAT11(uVar6,uVar4) & 0x3fff | 0x8000) | 0xc0);
        iVar9 = 2;
      }
      else {
        uVar5 = (undefined1)((uint)puVar15 >> 0xc);
        if ((uint)puVar15 >> 0x10 == 0) {
          iVar9 = 3;
          local_30 = (uint **)((CONCAT21(CONCAT11(uVar6,uVar4),uVar5) & 0xff3fff | 0x8000) &
                               0x3fffff | 0x8000e0);
        }
        else {
          iVar9 = 4;
          local_30 = (uint **)(CONCAT31(CONCAT21(CONCAT11(uVar6,uVar4),uVar5),
                                        (char)((uint)puVar15 >> 0x12)) & 0x3f3f3fff | 0x808080f0);
        }
      }
    }
    iVar10 = thunk_FUN_016d4a50(iVar9);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar9);
    }
    FUN_016dd1aa(iVar10,&local_30,iVar9);
    local_48 = iVar9;
    local_44 = iVar10;
    iStack_40 = iVar9;
    if (4 < uVar16 - 9) goto LAB_013e5de8;
LAB_013e59b0:
    local_38 = &local_3c;
    local_34 = FUN_00face84;
    local_3c = uVar16;
    FUN_00600d2c(&local_30,&DAT_00593f96,&local_38);
    bVar2 = local_30 == (uint **)0x0;
    ppuVar18 = local_28;
    pcVar12 = local_2c;
  }
  ppuVar19 = (uint **)*param_2;
  pcVar20 = (code *)param_2[1];
  pcVar14 = *(code **)(pcVar20 + 0xc);
  iVar9 = (*pcVar14)(ppuVar19,&DAT_003cf228,0x11);
  uVar17 = 1;
  if (iVar9 != 0) goto LAB_013e5a10;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar9 = (*pcVar14)(ppuVar19,&DAT_00414a79,3);
    if (((iVar9 != 0) || (iVar9 = (*pcVar14)(ppuVar19,&DAT_003cf220,5), iVar9 != 0)) ||
       ((iVar9 = (*pcVar14)(ppuVar19,&DAT_00414a7c,2), iVar9 != 0 ||
        ((((iVar9 = FUN_00faa4e8(local_44,iStack_40,ppuVar19,pcVar20), iVar9 != 0 ||
           (iVar9 = (*pcVar14)(ppuVar19,&DAT_0041950f,2), iVar9 != 0)) ||
          (iVar9 = (*pcVar14)(ppuVar19,&DAT_003cf225,3), iVar9 != 0)) ||
         ((iVar9 = (*pcVar14)(ppuVar19,&DAT_00414a7c,2), iVar9 != 0 ||
          (iVar9 = FUN_00faa4e8(pcVar12,ppuVar18,ppuVar19,pcVar20), iVar9 != 0))))))))
    goto LAB_013e5a10;
    uVar17 = 2;
    pcVar13 = " }";
LAB_013e5ccc:
    uVar17 = (*pcVar14)(ppuVar19,pcVar13,uVar17);
  }
  else {
    iVar9 = (*pcVar14)(ppuVar19,&DAT_00414a7e,3);
    if (iVar9 != 0) goto LAB_013e5a10;
    local_38 = (uint *)CONCAT31(local_38._1_3_,1);
    local_30 = ppuVar19;
    local_2c = pcVar20;
    local_28 = &local_38;
    iVar9 = FUN_00fb1f64(&local_30,&DAT_003cf220,5);
    if (((iVar9 == 0) && (iVar9 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar9 == 0)) &&
       (iVar9 = FUN_00faa4e8(local_44,iStack_40,&local_30,&DAT_01880dc4), iVar9 == 0)) {
      iVar9 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
      uVar17 = 1;
      if (iVar9 != 0) goto LAB_013e5a10;
      local_38 = (uint *)CONCAT31(local_38._1_3_,1);
      local_30 = ppuVar19;
      local_2c = pcVar20;
      local_28 = &local_38;
      iVar9 = FUN_00fb1f64(&local_30,&DAT_003cf225,3);
      if (((iVar9 == 0) && (iVar9 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar9 == 0)) &&
         (iVar9 = FUN_00faa4e8(pcVar12,ppuVar18,&local_30,&DAT_01880dc4), iVar9 == 0)) {
        iVar9 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
        uVar17 = 1;
        if (iVar9 != 0) goto LAB_013e5a10;
        pcVar13 = "}";
        goto LAB_013e5ccc;
      }
    }
    uVar17 = 1;
  }
LAB_013e5a10:
  if (!bVar2) {
    thunk_FUN_016d3fb4(pcVar12);
  }
  if (local_48 != 0) {
    thunk_FUN_016d3fb4(local_44);
  }
  return uVar17;
}

