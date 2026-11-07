// FUN_005e79fc @ 005e79fc size=3160 calls_out=20 calls_in=1
// strings: SetGloba | lDefaultError | lDefaultError | SetGloba | SetGloba | SetGloba

/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_005e79fc(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 ******ppppppuVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  undefined8 *puVar11;
  int ***pppiVar12;
  undefined4 ******ppppppuVar13;
  undefined4 *******pppppppuVar14;
  undefined4 uVar15;
  undefined *puVar16;
  undefined4 *******pppppppuVar17;
  uint uVar18;
  int ***pppiVar19;
  int iVar20;
  int iVar21;
  undefined8 uVar22;
  int local_c84;
  int *local_c70 [34];
  undefined4 local_be8;
  undefined4 uStack_be4;
  undefined4 uStack_be0;
  undefined4 uStack_bdc;
  undefined4 local_bd8;
  undefined4 uStack_bd4;
  undefined4 local_bd0;
  undefined4 uStack_bcc;
  undefined4 local_bc8;
  undefined4 uStack_bc4;
  undefined4 uStack_bc0;
  undefined4 uStack_bbc;
  undefined4 uStack_bb8;
  int **local_bb0 [178];
  int ***local_8e8;
  int iStack_8e4;
  undefined4 uStack_8e0;
  undefined4 *******local_8d8;
  undefined4 local_8d4;
  int *local_8d0;
  int ***local_610;
  int local_60c;
  undefined4 local_608;
  undefined4 *******local_600;
  int ***local_5fc;
  undefined4 *******local_5f8;
  int ***pppiStack_5f4;
  int local_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  int ***local_338;
  int iStack_334;
  undefined4 uStack_330;
  undefined4 *******local_328;
  int ***local_324;
  undefined4 *******local_320;
  int ***local_31c;
  int local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  int local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_30;
  
  if (*(uint *)(param_2 + 8) != 2) {
    iVar3 = *(int *)(param_2 + 0xc);
    if ((*(uint *)(param_2 + 8) & 1) != 0) {
      iVar3 = iVar3 + (*(int *)(*(int *)(param_2 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_2 + 0x10) + 0x30))(iVar3,param_2);
  }
  puVar11 = (undefined8 *)(param_2 + 0x20);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xab)) {
  case 0:
    *(undefined1 *)(param_2 + 0xaa) = 1;
    *(undefined2 *)(param_2 + 0xa8) = 0;
    DataMemoryBarrier(0xb);
    puVar16 = DAT_018daa78;
    piVar9 = DAT_018daa74;
    if (DAT_018dd984 != 2) {
      puVar16 = &DAT_018ae394;
      piVar9 = (int *)s_SetGloba_00414c05;
    }
    uVar18 = DAT_018dd984 == 2 & DAT_018daa70;
    piVar8 = piVar9;
    if (uVar18 == 1) {
      piVar8 = (int *)((int)piVar9 + (*(int *)(puVar16 + 8) - 1U & 0xfffffff8) + 8);
    }
    (**(code **)(puVar16 + 0x44))(&local_328,piVar8);
    pppiVar19 = local_324;
    if (local_328 == (undefined4 *******)0x0) {
      local_324 = local_31c;
      local_328 = local_320;
      if (uVar18 == 0) {
        uVar22 = (**(code **)(puVar16 + 0x38))(piVar9,&local_328);
        uVar15 = 0;
      }
      else {
        uVar22 = (**(code **)(puVar16 + 0x38))
                           ((char *)((int)piVar9 + (*(int *)(puVar16 + 8) - 1U & 0xfffffff8) + 8),
                            &local_328);
        do {
          iVar3 = *piVar9;
          bVar2 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar2);
        *piVar9 = iVar3 + 1;
        uVar15 = 1;
        if (iVar3 < 0) goto LAB_005e86d0;
      }
      *(int ****)(param_2 + 0x38) = pppiVar19;
      *(undefined4 *)(param_2 + 0x28) = uVar15;
      *(int **)(param_2 + 0x2c) = piVar9;
      *(undefined **)(param_2 + 0x30) = puVar16;
      *puVar11 = uVar22;
    }
    else {
      *(undefined4 *)(param_2 + 0x38) = 0;
      *(undefined4 *)(param_2 + 0x28) = 2;
    }
    *(undefined1 *)(param_2 + 0xa9) = 1;
    FUN_0162609c(&local_328,puVar11);
    piVar8 = (int *)(param_2 + 0x70);
    if ((char)local_310 == '\x02') {
      FUN_01625cd0(&local_600,*(undefined4 *)(param_2 + 0x7c),*piVar8,
                   *(undefined4 *)(param_2 + 0x74),*(undefined4 *)(param_2 + 0x78),
                   *(undefined4 *)(param_2 + 0x7c),*(undefined1 *)(param_2 + 0x88));
    }
    else {
      local_600 = local_328;
      local_5fc = local_324;
      local_5f8 = local_320;
      pppiStack_5f4 = local_31c;
      local_5f0 = local_318;
      uStack_5ec = local_314;
      uStack_5e8 = local_310;
      uStack_5e4 = uStack_30c;
    }
    *piVar8 = (int)local_600;
    *(int ****)(param_2 + 0x74) = local_5fc;
    *(undefined4 ********)(param_2 + 0x78) = local_5f8;
    *(int ****)(param_2 + 0x7c) = pppiStack_5f4;
    *(int *)(param_2 + 0x80) = local_5f0;
    *(undefined4 *)(param_2 + 0x84) = uStack_5ec;
    *(undefined4 *)(param_2 + 0x88) = uStack_5e8;
    *(undefined4 *)(param_2 + 0x8c) = uStack_5e4;
    local_bb0[0] = local_c70;
    iVar3 = *(int *)(param_2 + 0x38);
    local_c70[0] = piVar8;
    if (iVar3 != 0) {
      ppppppuVar13 = *(undefined4 *******)(iVar3 + 0x1c);
      if (*(int *)(iVar3 + 0x20) != 0) {
        iVar21 = *(int *)(iVar3 + 0x20) << 3;
        iVar20 = 0;
        do {
          ppppppuVar4 = ppppppuVar13 + iVar20 * 2;
          if ((ppppppuVar4[1] == (undefined4 *****)0xc) &&
             (iVar5 = thunk_FUN_016dd50a(*ppppppuVar4,&DAT_0041249a,0xc), iVar5 == 0)) {
            local_324 = *(int ****)(iVar3 + 0x20);
            local_320 = *(undefined4 ********)(iVar3 + 0x24);
            local_31c = *(int ****)(iVar3 + 0x28);
            local_5f8 = (undefined4 *******)&DAT_0187ac30;
            local_5fc = local_bb0;
            local_8d4 = 1;
            local_8d8 = &local_600;
            local_600 = &local_328;
            local_8d0 = (int *)(iVar3 + 0x1c);
            local_328 = (undefined4 *******)ppppppuVar13;
            local_318 = iVar20;
            FUN_01694880(puVar11,&local_8d8);
            break;
          }
          iVar20 = iVar20 + 1;
          iVar21 = iVar21 + -8;
        } while (iVar21 != 0);
      }
    }
    local_31c = (int ***)0x0;
    local_30 = 0;
    local_324 = (int ***)&DAT_00000001;
    local_328 = (undefined4 *******)&DAT_00000001;
    local_320 = (undefined4 *******)&DAT_0000001e;
    piVar6 = (int *)thunk_FUN_016d4a50(0x300);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x300);
    }
    FUN_016dd1aa(piVar6,&local_328,0x300);
    do {
      iVar3 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar3 + 1;
    if (iVar3 < 0) {
LAB_005e86d0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x5e86d0);
      (*pcVar1)();
    }
    *(int *)(param_2 + 0xa0) = (int)piVar6;
    *(undefined1 *)(param_2 + 0xa8) = 1;
    piVar9 = (int *)(*(int *)(*(int *)(param_2 + 0xa4) + 8) + 8);
    do {
      iVar3 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar3 + 1;
    piVar9 = *(int **)(param_2 + 0xa4);
    *(int *)(param_2 + 0xb0) = iVar3;
    *(undefined4 *)(param_2 + 0xb4) = 0;
    *(undefined1 *)(param_2 + 0xc0) = 1;
    *(int **)(param_2 + 0xb8) = (int *)(param_2 + 0xa0);
    *(int **)(param_2 + 0xbc) = piVar9 + 1;
    local_308 = *piVar8;
    uStack_304 = *(undefined4 *)(param_2 + 0x74);
    uStack_300 = *(undefined4 *)(param_2 + 0x78);
    uStack_2fc = *(undefined4 *)(param_2 + 0x7c);
    uStack_2f8 = *(undefined4 *)(param_2 + 0x80);
    uStack_2f4 = *(undefined4 *)(param_2 + 0x84);
    local_2f0 = *(undefined4 *)(param_2 + 0x88);
    uStack_2ec = *(undefined4 *)(param_2 + 0x8c);
    uStack_2e8 = *(undefined4 *)(param_2 + 0x90);
    uStack_2e4 = *(undefined4 *)(param_2 + 0x94);
    uStack_2e0 = *(undefined4 *)(param_2 + 0x98);
    uStack_2dc = *(undefined4 *)(param_2 + 0x9c);
    *(undefined1 *)(param_2 + 0xa9) = 0;
    local_328 = *(undefined4 ********)puVar11;
    local_324 = *(int ****)(param_2 + 0x24);
    local_320 = *(undefined4 ********)(param_2 + 0x28);
    local_31c = *(int ****)(param_2 + 0x2c);
    local_318 = *(int *)(param_2 + 0x30);
    local_314 = *(undefined4 *)(param_2 + 0x34);
    local_310 = *(undefined4 *)(param_2 + 0x38);
    uStack_30c = *(undefined4 *)(param_2 + 0x3c);
    *(undefined1 *)(param_2 + 0xaa) = 0;
    local_2d8 = *(undefined4 *)(param_2 + 0x40);
    uStack_2d4 = *(undefined4 *)(param_2 + 0x44);
    uStack_2d0 = *(undefined4 *)(param_2 + 0x48);
    uStack_2cc = *(undefined4 *)(param_2 + 0x4c);
    uStack_2c8 = *(undefined4 *)(param_2 + 0x50);
    uStack_2c4 = *(undefined4 *)(param_2 + 0x54);
    local_2c0 = *(undefined4 *)(param_2 + 0x58);
    uStack_2bc = *(undefined4 *)(param_2 + 0x5c);
    uStack_2b8 = *(undefined4 *)(param_2 + 0x60);
    uStack_2b4 = *(undefined4 *)(param_2 + 100);
    uStack_2b0 = *(undefined4 *)(param_2 + 0x68);
    uStack_2ac = *(undefined4 *)(param_2 + 0x6c);
    *(undefined1 *)(param_2 + 0xa8) = 0;
    FUN_016dd1aa(&local_8d8,&local_328,0x80);
    FUN_016dd1aa(param_2 + 200,&local_8d8,0x80);
    *(int *)(param_2 + 0x148) = iVar3;
    *(undefined4 *)(param_2 + 0x14c) = 0;
    *(undefined1 *)(param_2 + 0x22c) = 0;
    *(int **)(param_2 + 0x228) = piVar9;
    *(int **)(param_2 + 0x150) = piVar6;
LAB_005e7f3c:
    *(undefined1 *)(param_2 + 0x22d) = 1;
    FUN_016dd1aa(param_2 + 0x158,param_2 + 200,0x90);
    *(int **)(param_2 + 0x1e8) = piVar9;
    *(undefined1 *)(param_2 + 0x224) = 0;
LAB_005e7f6c:
    uVar18 = 1;
    *(int **)(param_2 + 0x1f0) = piVar9;
    *(undefined4 *)(param_2 + 500) = 1;
    *(int **)(param_2 + 0x1ec) = piVar9;
    *(undefined1 *)(param_2 + 0x200) = 0;
LAB_005e7f8c:
    *(int **)(param_2 + 0x1f8) = piVar9;
    *(uint *)(param_2 + 0x1fc) = uVar18;
    iVar3 = *piVar9;
    if (*(uint *)(iVar3 + 0x94) < uVar18) goto LAB_005e7fa4;
LAB_005e7fd0:
    *(uint *)(param_2 + 0x218) = uVar18;
    *(uint *)(param_2 + 0x21c) = uVar18;
    *(undefined1 *)(param_2 + 0x220) = 0;
    *(undefined4 *)(param_2 + 0x210) = 0;
    *(undefined4 *)(param_2 + 0x214) = 0;
    *(int *)(param_2 + 0x204) = iVar3 + 0x80;
    *(undefined4 *)(param_2 + 0x208) = 0;
switchD_005e7c34_caseD_4:
    uVar18 = FUN_0163c8bc(param_2 + 0x204,param_3);
    pppiVar19 = (int ***)(uVar18 & 0xff);
    if (pppiVar19 != (int ***)&SUB_00000002) {
      FUN_0163c790(param_2 + 0x204);
      if (*(int *)(param_2 + 0x208) != 0) {
        (**(code **)(*(int *)(param_2 + 0x208) + 0xc))(*(undefined4 *)(param_2 + 0x20c));
      }
      *(undefined1 *)(param_2 + 0x200) = 1;
      if ((uVar18 & 1) != 0) goto LAB_005e8064;
      pppppppuVar17 = &local_328;
      *(undefined1 *)(param_2 + 0x224) = 1;
      *(undefined1 *)(param_2 + 0x22d) = 0;
      uVar15 = *(undefined4 *)(param_2 + 0x1ec);
      FUN_016dd1aa(pppppppuVar17,param_2 + 0x158,0x90);
      FUN_00ebfdf4(uVar15,pppppppuVar17);
      pppppppuVar14 = (undefined4 *******)0x3;
      *(undefined2 *)(param_2 + 0x22c) = 1;
      goto LAB_005e810c;
    }
    *(undefined1 *)(param_2 + 0x200) = 4;
    *(undefined1 *)(param_2 + 0x224) = 3;
    *(undefined1 *)(param_2 + 0x22c) = 3;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187a164);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187a164);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x22c)) {
    case 0:
      piVar9 = *(int **)(param_2 + 0x228);
      goto LAB_005e7f3c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187ab10);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187ab10);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x224)) {
    case 0:
      piVar9 = *(int **)(param_2 + 0x1e8);
      goto LAB_005e7f6c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187ab20);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187ab20);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x200)) {
    case 0:
      piVar9 = *(int **)(param_2 + 0x1f0);
      uVar18 = *(uint *)(param_2 + 500);
      goto LAB_005e7f8c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187ab00);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187ab00);
    case 3:
      uVar18 = *(uint *)(param_2 + 0x1fc);
      iVar3 = **(int **)(param_2 + 0x1f8);
      if (uVar18 <= *(uint *)(iVar3 + 0x94)) goto LAB_005e7fd0;
      break;
    case 4:
      goto switchD_005e7c34_caseD_4;
    }
LAB_005e7fa4:
    *(undefined1 *)(param_2 + 0x200) = 1;
LAB_005e8064:
    *(undefined1 *)(param_2 + 0x224) = 1;
    pppppppuVar17 = *(undefined4 ********)(param_2 + 0x158);
    pppiVar19 = *(int ****)(param_2 + 0x15c);
    *(undefined1 *)(param_2 + 0x22d) = 0;
    pppppppuVar14 = *(undefined4 ********)(param_2 + 0x160);
    FUN_016dd1aa(&local_600,param_2 + 0x164,0x84);
    *(undefined1 *)(param_2 + 0x22c) = 1;
    if (pppppppuVar14 != (undefined4 *******)&DAT_00000004) {
LAB_005e810c:
      local_c84 = param_2 + 200;
      FUN_016dd1aa(local_c70,&local_600,0x84);
      FUN_005c2e9c(local_c84);
      if (pppppppuVar14 == (undefined4 *******)0x3) {
        local_bd0 = *(undefined4 *)(param_2 + 0xb0);
        uStack_bcc = *(undefined4 *)(param_2 + 0xb4);
        local_bc8 = *(undefined4 *)(param_2 + 0xb8);
        uStack_bc4 = *(undefined4 *)(param_2 + 0xbc);
        uStack_bc0 = *(undefined4 *)(param_2 + 0xc0);
        uStack_bbc = *(undefined4 *)(param_2 + 0xc4);
        *(undefined4 *)(param_2 + 0xb0) = local_be8;
        *(undefined4 *)(param_2 + 0xb4) = uStack_be4;
        *(undefined4 *)(param_2 + 0xb8) = uStack_be0;
        *(undefined4 *)(param_2 + 0xbc) = uStack_bdc;
        *(undefined4 *)(param_2 + 0xc0) = local_bd8;
        *(undefined4 *)(param_2 + 0xc4) = uStack_bd4;
        *(undefined4 *)(param_2 + 200) = local_bd0;
        *(undefined4 *)(param_2 + 0xcc) = uStack_bcc;
        *(undefined4 *)(param_2 + 0xd0) = local_bc8;
        *(undefined4 *)(param_2 + 0xd4) = uStack_bc4;
        *(undefined4 *)(param_2 + 0xd8) = uStack_bc0;
        *(undefined4 *)(param_2 + 0xdc) = uStack_bbc;
        *(undefined4 *)(param_2 + 0xe0) = uStack_bb8;
        *(undefined1 *)(param_2 + 0xe4) = 0;
        goto switchD_005e7b74_caseD_0;
      }
      local_328 = pppppppuVar17;
      local_324 = pppiVar19;
      local_320 = pppppppuVar14;
      FUN_016dd1aa(&local_31c,local_c70,0x84);
      FUN_005becd4(&local_328);
      iVar3 = **(int **)(param_2 + 0xb8);
      if (iVar3 != 0) {
        puVar10 = (uint *)(iVar3 + 0x2f8);
        do {
          uVar18 = *puVar10;
          bVar2 = (bool)hasExclusiveAccess(puVar10);
        } while (!bVar2);
        *puVar10 = uVar18 | 4;
        DataMemoryBarrier(0xb);
        if ((uVar18 & 10) == 8) {
          (**(code **)(*(int *)(iVar3 + 0x2e8) + 8))(*(undefined4 *)(iVar3 + 0x2ec));
        }
      }
      if (*(char *)(param_2 + 0xc0) == '\x01') {
        FUN_0162766c(&local_328,*(undefined4 *)(param_2 + 0xbc),*(undefined4 *)(param_2 + 0xb0),
                     *(undefined4 *)(param_2 + 0xb4));
      }
      iVar3 = *(int *)(param_2 + 0xa0);
      pppiVar12 = (int ***)0x0;
      pppppppuVar14 = (undefined4 *******)&DAT_0000001d;
      pppppppuVar17 = (undefined4 *******)&DAT_80000000;
      if (iVar3 != 0) {
        puVar10 = (uint *)(iVar3 + 0x2f8);
        do {
          uVar18 = *puVar10;
          bVar2 = (bool)hasExclusiveAccess(puVar10);
        } while (!bVar2);
        *puVar10 = uVar18 | 4;
        DataMemoryBarrier(0xb);
        if ((uVar18 & 10) == 8) {
          (**(code **)(*(int *)(iVar3 + 0x2e8) + 8))(*(undefined4 *)(iVar3 + 0x2ec));
        }
        if ((uVar18 & 2) != 0) {
          FUN_016dd1aa(&local_328,(undefined4 *)(iVar3 + 8),0x2e0);
          *(undefined4 *)(iVar3 + 8) = 0x1e;
          *(undefined4 *)(iVar3 + 0xc) = 0;
          if (local_328 != (undefined4 *******)&DAT_0000001e || local_324 != (int ***)0x0) {
            FUN_00e7b808(&local_328);
          }
        }
        piVar9 = *(int **)(param_2 + 0xa0);
        if (piVar9 == (int *)0x0) {
          pppppppuVar17 = (undefined4 *******)&DAT_80000000;
        }
        else {
          pppppppuVar17 = (undefined4 *******)&DAT_80000000;
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar9;
            bVar2 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar2);
          *piVar9 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00e457a8(*(undefined4 *)(param_2 + 0xa0));
          }
        }
      }
      goto LAB_005e856c;
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xe4)) {
    case 0:
switchD_005e7b74_caseD_0:
      puVar7 = (undefined4 *)(param_2 + 0xb8);
      *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_2 + 200);
      *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(param_2 + 0xcc);
      *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_2 + 0xd0);
      *(undefined4 *)(param_2 + 0xbc) = *(undefined4 *)(param_2 + 0xd4);
      *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(param_2 + 0xd8);
      *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(param_2 + 0xdc);
      *(undefined4 **)(param_2 + 0xe0) = puVar7;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187a18c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187a18c);
    case 3:
      puVar7 = *(undefined4 **)(param_2 + 0xe0);
    }
    FUN_00e7c0d4(&local_328,*puVar7,*param_3);
    pppppppuVar17 = local_320;
    pppiVar19 = local_324;
    pppppppuVar14 = local_328;
    if (local_328 == (undefined4 *******)&DAT_0000001f && local_324 == (int ***)0x0) {
      *(undefined1 *)(param_2 + 0xe4) = 3;
      *param_1 = 0x1e;
      param_1[1] = 0;
      uVar18 = *(uint *)(param_2 + 8);
      *(undefined1 *)(param_2 + 0xab) = 4;
      goto joined_r0x005e81e8;
    }
    local_610 = local_31c;
    local_60c = local_318;
    local_608 = local_314;
    FUN_016dd1aa(&local_8d8,&local_310,0x2c8);
    pppiVar12 = (int ***)0x0;
    *(undefined1 *)(param_2 + 0xc0) = 0;
    if (pppppppuVar14 == (undefined4 *******)&DAT_0000001e && pppiVar19 == (int ***)0x0) {
      pppppppuVar14 = (undefined4 *******)&DAT_0000001d;
      pppppppuVar17 = (undefined4 *******)&DAT_80000000;
      iVar3 = **(int **)(param_2 + 0xb8);
    }
    else {
      local_338 = local_610;
      iStack_334 = local_60c;
      uStack_330 = local_608;
      FUN_016dd1aa(&local_600,&local_8d8,0x2c8);
      iVar3 = **(int **)(param_2 + 0xb8);
      pppiVar12 = pppiVar19;
    }
    if (iVar3 != 0) {
      puVar10 = (uint *)(iVar3 + 0x2f8);
      do {
        uVar18 = *puVar10;
        bVar2 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar2);
      *puVar10 = uVar18 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar18 & 10) == 8) {
        (**(code **)(*(int *)(iVar3 + 0x2e8) + 8))(*(undefined4 *)(iVar3 + 0x2ec));
      }
    }
    if (*(char *)(param_2 + 0xc0) == '\x01') {
      FUN_0162766c(&local_328,*(undefined4 *)(param_2 + 0xbc),*(undefined4 *)(param_2 + 0xb0),
                   *(undefined4 *)(param_2 + 0xb4));
    }
    local_8e8 = local_338;
    iStack_8e4 = iStack_334;
    uStack_8e0 = uStack_330;
    FUN_016dd1aa(local_bb0,&local_600,0x2c8);
    *(undefined1 *)(param_2 + 0xe4) = 1;
    iVar3 = *(int *)(param_2 + 0xa0);
    if (iVar3 != 0) {
      puVar10 = (uint *)(iVar3 + 0x2f8);
      do {
        uVar18 = *puVar10;
        bVar2 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar2);
      *puVar10 = uVar18 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar18 & 10) == 8) {
        (**(code **)(*(int *)(iVar3 + 0x2e8) + 8))(*(undefined4 *)(iVar3 + 0x2ec));
      }
      if ((uVar18 & 2) != 0) {
        FUN_016dd1aa(&local_328,(undefined4 *)(iVar3 + 8),0x2e0);
        *(undefined4 *)(iVar3 + 8) = 0x1e;
        *(undefined4 *)(iVar3 + 0xc) = 0;
        if (local_328 != (undefined4 *******)&DAT_0000001e || local_324 != (int ***)0x0) {
          FUN_00e7b808(&local_328);
        }
      }
      piVar9 = *(int **)(param_2 + 0xa0);
      if (piVar9 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar9;
          bVar2 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar2);
        *piVar9 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00e457a8(*(undefined4 *)(param_2 + 0xa0));
        }
      }
    }
LAB_005e856c:
    *(undefined1 *)(param_2 + 0xa8) = 0;
    *(undefined1 *)(param_2 + 0xa9) = 0;
    *param_1 = pppppppuVar14;
    param_1[3] = local_8e8;
    param_1[4] = iStack_8e4;
    param_1[5] = uStack_8e0;
    param_1[1] = pppiVar12;
    param_1[2] = pppppppuVar17;
    FUN_016dd1aa(param_1 + 6,local_bb0,0x2c8);
    uVar18 = *(uint *)(param_2 + 8);
    *(undefined1 *)(param_2 + 0xab) = 1;
    goto joined_r0x005e81e8;
  }
  *param_1 = 0x1e;
  param_1[1] = 0;
  uVar18 = *(uint *)(param_2 + 8);
  *(undefined1 *)(param_2 + 0xab) = 3;
joined_r0x005e81e8:
  if (uVar18 == 2) {
    return DAT_018dd947;
  }
  iVar3 = *(int *)(param_2 + 0xc);
  if ((uVar18 & 1) != 0) {
    iVar3 = iVar3 + (*(int *)(*(int *)(param_2 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
  }
  (**(code **)(*(int *)(param_2 + 0x10) + 0x34))(iVar3,param_2);
  return DAT_018dd947;
}

