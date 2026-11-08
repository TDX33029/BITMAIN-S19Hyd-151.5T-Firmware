// FUN_016594dc @ 016594dc size=2552 calls_out=21 calls_in=1
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_016594dc(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  short sVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined4 ****ppppuVar5;
  undefined8 *puVar6;
  undefined4 ****ppppuVar7;
  uint ***pppuVar8;
  undefined1 *puVar9;
  uint ****ppppuVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  char *pcVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  uint extraout_r2;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  undefined *puVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  uint uVar25;
  uint ****ppppuVar26;
  uint ****ppppuVar27;
  uint ****ppppuVar28;
  int iVar29;
  int iVar30;
  uint ****ppppuVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  bool bVar37;
  bool bVar38;
  undefined8 uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  int local_130;
  int local_124;
  undefined4 *****local_100;
  undefined8 *local_fc;
  undefined8 uStack_f8;
  uint ****local_f0;
  undefined4 uStack_ec;
  ulonglong uStack_e8;
  int iStack_e0;
  undefined4 local_dc;
  undefined1 *local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined4 local_cc;
  uint uStack_c8;
  undefined4 ****local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 ****local_b0;
  int local_ac;
  int local_a8;
  uint ****local_a0;
  undefined8 *local_9c;
  undefined8 local_98;
  uint ****local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  int iStack_80;
  uint ****local_78;
  undefined8 *local_74;
  undefined8 local_70;
  uint ****local_68;
  undefined4 local_64;
  undefined8 local_60;
  int local_58;
  undefined4 ****local_54;
  undefined4 local_50;
  uint local_4c;
  undefined8 local_48;
  uint ***local_40;
  undefined1 *local_3c;
  uint local_38;
  undefined1 *local_34;
  int local_30;
  undefined4 local_2c;
  uint local_28;
  
  local_78 = (uint ****)*param_1;
  local_68 = (uint ****)param_1[3];
  local_70._4_4_ = (undefined1 *)((int)local_78 + param_1[1] + 1);
  local_70._0_4_ = (undefined4 *****)(local_78 + 1);
  local_74 = (undefined8 *)(~(uint)*local_78 & 0x80808080);
  uVar39 = FUN_0165afa8(&local_78);
  if ((int)uVar39 != 0) {
    uVar24 = 0;
    ppppuVar10 = (uint ****)((int)local_68 + 1);
    if (local_68 == (uint ****)0xffffffff) {
      ppppuVar10 = (uint ****)&DAT_ffffffff;
    }
    ppppuVar27 = ppppuVar10;
    if (ppppuVar10 < &DAT_00000005) {
      ppppuVar27 = (uint ****)&SUB_00000004;
    }
    bVar38 = (uint ****)0x1ffffffe < ppppuVar10;
    bVar37 = ppppuVar10 == (uint ****)0x1fffffff;
    uVar35 = (int)ppppuVar27 * 8;
    if (ppppuVar10 < (uint ****)0x20000000) {
      bVar38 = 0x7ffffffb < uVar35;
      bVar37 = uVar35 == 0x7ffffffc;
    }
    if (bVar38 && !bVar37) {
LAB_01659560:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar24,uVar35);
    }
    uVar24 = 4;
    puVar11 = (undefined8 *)FUN_01298504(uVar35,4);
    if (puVar11 == (undefined8 *)0x0) goto LAB_01659560;
    *puVar11 = uVar39;
    local_98._0_4_ = (uint ****)&DAT_00000001;
    iVar34 = 0;
    local_100 = (undefined4 *****)local_78;
    local_fc = local_74;
    uStack_f8._0_4_ = (uint ****)(undefined4 *****)local_70;
    uStack_f8._4_4_ = (int)local_70._4_4_;
    local_f0 = local_68;
    local_a0 = ppppuVar27;
    local_9c = puVar11;
    while( true ) {
      ppppuVar27 = (uint ****)local_98;
      uVar39 = FUN_0165afa8(&local_100);
      puVar6 = local_9c;
      ppppuVar10 = local_a0;
      if ((int)uVar39 == 0) break;
      if (ppppuVar27 == local_a0) {
        iVar19 = (int)local_f0 + 1;
        if (local_f0 == (uint ****)0xffffffff) {
          iVar19 = -1;
        }
        FUN_006520b4(&local_a0,ppppuVar27,iVar19,4,8);
        puVar11 = local_9c;
      }
      *(int *)(puVar11 + (int)ppppuVar27) = (int)uVar39;
      local_98._0_4_ = (uint ****)((int)ppppuVar27 + 1);
      *(int *)((int)puVar11 + iVar34 + 0xc) = (int)((ulonglong)uVar39 >> 0x20);
      iVar34 = iVar34 + 8;
    }
    if (ppppuVar27 != (uint ****)&DAT_00000001) {
      puVar11 = local_9c;
      if (ppppuVar27 == (uint ****)0x0) goto LAB_01659574;
      if (&DAT_00000014 < ppppuVar27) {
        FUN_0165b4b0(local_9c,ppppuVar27);
      }
      else {
        do {
          FUN_0165ba20(puVar6,puVar11 + 1);
          iVar34 = iVar34 + -8;
          puVar11 = puVar11 + 1;
        } while (iVar34 != 0);
      }
    }
    puVar12 = (undefined4 *)FUN_006c8e68();
    bVar37 = false;
    *(undefined2 *)((int)puVar12 + 0x5e) = 0;
    uVar3 = ZEXT48(puVar12);
    puVar13 = puVar6 + (int)ppppuVar27;
    *puVar12 = 0;
    local_124 = 0;
    puVar11 = puVar6;
    ppppuVar26 = ppppuVar10;
LAB_01659698:
    do {
      local_130 = (int)(uVar3 >> 0x20);
      if (bVar37) {
        ppppuVar28 = ppppuVar27;
        ppppuVar31 = ppppuVar26;
        if (ppppuVar26 == (uint ****)0x0) goto LAB_01659814;
      }
      else {
        if (puVar11 == puVar13) goto LAB_01659814;
        ppppuVar31 = *(uint *****)puVar11;
        ppppuVar28 = *(uint *****)((int)puVar11 + 4);
        puVar11 = puVar11 + 1;
      }
      if (puVar11 == puVar13) {
        ppppuVar26 = (uint ****)0x0;
        break;
      }
      ppppuVar26 = *(uint *****)puVar11;
      ppppuVar27 = *(uint *****)((int)puVar11 + 4);
      puVar11 = puVar11 + 1;
      if (ppppuVar31[2] != ppppuVar26[2]) break;
      iVar34 = thunk_FUN_01bed842(ppppuVar31[1],ppppuVar26[1]);
      bVar37 = true;
    } while (iVar34 == 0);
    uVar35 = (uint)*(ushort *)((int)puVar12 + 0x5e);
    if (uVar35 < 0xb) {
      *(ushort *)((int)puVar12 + 0x5e) = *(ushort *)((int)puVar12 + 0x5e) + 1;
      puVar12[uVar35 + 0xc] = ppppuVar28;
      puVar12[uVar35 + 1] = ppppuVar31;
LAB_01659800:
      bVar37 = true;
      local_124 = local_124 + 1;
      goto LAB_01659698;
    }
    iVar34 = 0;
    do {
      puVar12 = (undefined4 *)*puVar12;
      if (puVar12 == (undefined4 *)0x0) {
        uVar40 = FUN_0165a85c((int)uVar3,local_130);
        uVar3 = uVar40;
        break;
      }
      iVar34 = iVar34 + 1;
      uVar40 = CONCAT44(iVar34,puVar12);
    } while (10 < *(ushort *)((int)puVar12 + 0x5e));
    iVar19 = (int)uVar40;
    puVar12 = (undefined4 *)FUN_006c8e68();
    iVar29 = (int)(uVar40 >> 0x20) + -1;
    uVar41 = ZEXT48(puVar12);
    *(undefined2 *)((int)puVar12 + 0x5e) = 0;
    *puVar12 = 0;
    iVar34 = iVar29;
    while( true ) {
      piVar18 = (int *)uVar41;
      if (iVar34 == 0) break;
      uVar41 = FUN_0165a85c();
      iVar34 = iVar34 + -1;
    }
    if ((int)(uVar41 >> 0x20) == iVar29) {
      uVar35 = (uint)*(ushort *)(iVar19 + 0x5e);
      if (uVar35 < 0xb) {
        sVar2 = *(ushort *)(iVar19 + 0x5e) + 1;
        *(short *)(iVar19 + 0x5e) = sVar2;
        *(uint *****)(iVar19 + (uVar35 + 0xc) * 4) = ppppuVar28;
        *(uint *****)(iVar19 + (uVar35 + 1) * 4) = ppppuVar31;
        *(int **)(iVar19 + (uVar35 + 0x19) * 4) = piVar18;
        *(short *)(piVar18 + 0x17) = sVar2;
        *piVar18 = iVar19;
        while( true ) {
          iVar34 = (int)(uVar40 >> 0x20);
          puVar12 = (undefined4 *)uVar40;
          if (iVar34 == 0) break;
          uVar40 = CONCAT44(iVar34 + -1,puVar12[*(ushort *)((int)puVar12 + 0x5e) + 0x18]);
        }
        goto LAB_01659800;
      }
      uVar24 = 0x20;
      pcVar15 = "assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements";
      puVar22 = &DAT_01d305d8;
    }
    else {
      uVar24 = 0x30;
      puVar22 = &DAT_01d305c8;
      pcVar15 = &DAT_00533a41;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(pcVar15,uVar24,puVar22);
  }
  ppppuVar10 = (uint ****)0x0;
  puVar11 = (undefined8 *)&SUB_00000004;
LAB_01659574:
  FUN_0134aee0(ppppuVar10,puVar11,4,8);
  local_124 = 0;
  uVar3 = (ulonglong)extraout_r2 << 0x20;
  goto LAB_016599d0;
LAB_01659814:
  FUN_0134aee0(ppppuVar10,puVar6,4,8);
  uVar40 = uVar3;
  if (local_130 != 0) {
    do {
      iVar34 = (int)uVar40;
      uVar35 = (uint)*(ushort *)(iVar34 + 0x5e);
      if (uVar35 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00533a28,0x19,&DAT_01d305a8);
      }
      iVar29 = (int)(uVar40 >> 0x20) + -1;
      iVar19 = *(int *)(iVar34 + (uVar35 + 0x18) * 4);
      uVar16 = (uint)*(ushort *)(iVar19 + 0x5e);
      if (uVar16 < 5) {
        iVar14 = *(int *)(iVar34 + (uVar35 + 0x17) * 4);
        uVar32 = -uVar16 + 5;
        uVar25 = (uint)*(ushort *)(iVar14 + 0x5e);
        if (uVar25 < uVar32) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(&DAT_00533acc,0x27,&DAT_01d30618);
        }
        iVar20 = uVar25 - uVar32;
        iVar30 = iVar19 + 4;
        iVar1 = uVar16 * 4;
        *(short *)(iVar14 + 0x5e) = (short)iVar20;
        *(undefined2 *)(iVar19 + 0x5e) = 5;
        FUN_01bed864(iVar30 + uVar32 * 4,iVar30,iVar1);
        iVar36 = iVar19 + 0x30;
        FUN_01bed864(iVar36 + uVar32 * 4,iVar36,iVar1);
        iVar17 = iVar20 + 1;
        iVar33 = uVar25 - iVar17;
        if (iVar33 != -uVar16 + 4) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
        }
        FUN_01bed4e2(iVar30,iVar14 + 4 + iVar17 * 4);
        FUN_01bed4e2(iVar36,iVar14 + 0x30 + iVar17 * 4,iVar33 * 4);
        uVar24 = *(undefined4 *)(iVar14 + 4 + iVar20 * 4);
        uVar21 = *(undefined4 *)(iVar34 + uVar35 * 4);
        uVar23 = *(undefined4 *)(iVar34 + (uVar35 + 0xb) * 4);
        *(undefined4 *)(iVar34 + (uVar35 + 0xb) * 4) = *(undefined4 *)(iVar14 + 0x30 + iVar20 * 4);
        *(undefined4 *)(iVar34 + uVar35 * 4) = uVar24;
        *(undefined4 *)(iVar36 + iVar33 * 4) = uVar23;
        *(undefined4 *)(iVar19 + uVar32 * 4) = uVar21;
        if (iVar29 == 0) break;
        iVar34 = iVar19 + 0x60;
        FUN_01bed864(iVar34 + uVar32 * 4,iVar34,iVar1 + 4);
        FUN_01bed4e2(iVar34,iVar14 + iVar17 * 4 + 0x60,uVar32 * 4);
        iVar34 = 0;
        do {
          piVar18 = *(int **)(iVar19 + (iVar34 + 0x18) * 4);
          *(short *)(piVar18 + 0x17) = (short)iVar34;
          iVar34 = iVar34 + 1;
          *piVar18 = iVar19;
        } while (iVar34 != 6);
      }
      uVar40 = CONCAT44(iVar29,iVar19);
    } while (iVar29 != 0);
  }
LAB_016599d0:
  bVar37 = (int)uVar3 == 0;
  if (bVar37) {
    local_124 = 0;
  }
  local_78 = (uint ****)(uint)!bVar37;
  local_64 = 0;
  local_74 = (undefined8 *)0x0;
  local_68 = local_78;
  local_58 = local_124;
  local_60 = uVar3;
  local_70 = uVar3;
  local_d8 = (undefined1 *)thunk_FUN_01be5118(1);
  if (local_d8 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1);
  }
  *local_d8 = 0x2c;
  local_100 = (undefined4 *****)local_78;
  local_fc = local_74;
  local_f0 = local_68;
  uStack_ec = local_64;
  iStack_e0 = local_58;
  local_d4 = 1;
  local_dc = 1;
  local_d0 = -0x80000000;
  uStack_f8 = local_70;
  uStack_e8 = local_60;
  if (local_78 != (uint ****)0x2) {
    uVar39 = FUN_0165b2d8(&local_100);
    if ((uint ***)uVar39 != (uint ***)0x0) {
      local_78 = &local_40;
      local_70._4_4_ = &LAB_0193a90c;
      local_74 = (undefined8 *)&LAB_0193a90c;
      local_a0 = (uint ****)((ulonglong)uVar39 >> 0x20);
      local_70._0_4_ = &local_a0;
      local_40 = (uint ***)uVar39;
      FUN_00664898(&local_c0,&DAT_00598886);
      uVar21 = local_d4;
      puVar4 = local_d8;
      uVar24 = local_dc;
      if (local_c0 != (undefined4 ****)0x80000000) {
        local_b0 = local_c0;
        local_ac = iStack_bc;
        local_a8 = iStack_b8;
        local_a0 = (uint ****)local_100;
        local_9c = local_fc;
        local_90 = local_f0;
        uStack_8c = uStack_ec;
        iStack_80 = iStack_e0;
        local_98 = uStack_f8;
        uStack_88 = uStack_e8;
        if (local_d0 == -0x7fffffff) {
          if (local_100 != (undefined4 *****)0x2) {
            uVar39 = FUN_0165b2d8(&local_a0);
            if ((int)uVar39 != 0) {
              local_70._0_4_ = &local_54;
              local_78 = (uint ****)((int)&local_48 + 4);
              local_70._4_4_ = &LAB_0193a90c;
              local_74 = (undefined8 *)&LAB_0193a90c;
              local_54 = (undefined4 ****)((ulonglong)uVar39 >> 0x20);
              local_48._4_4_ = (int)uVar39;
              FUN_00664898(&local_30,&DAT_00598886,&local_78);
              iVar34 = local_30;
              goto LAB_01659bf8;
            }
            goto LAB_01659c44;
          }
        }
        else {
          local_2c = local_cc;
          local_28 = uStack_c8;
          iVar34 = local_d0;
LAB_01659bf8:
          uVar35 = local_28;
          uVar23 = local_2c;
          if (iVar34 != -0x80000000) {
            if ((uint)((int)local_b0 - local_a8) < local_28) {
              FUN_006520b4(&local_b0,local_a8,local_28,1,1);
            }
            iVar19 = local_a8;
            FUN_01bed4e2(local_ac + local_a8,uVar23,uVar35);
            local_a8 = iVar19 + uVar35;
            FUN_0134bd64(iVar34,uVar23);
          }
LAB_01659c44:
          if (local_a0 != (uint ****)0x2) {
            local_78 = local_a0;
            puVar12 = (undefined4 *)((uint)&local_a0 | 4);
            local_74 = (undefined8 *)*puVar12;
            local_70._0_4_ = (undefined4 *****)puVar12[1];
            local_70._4_4_ = (undefined1 *)puVar12[2];
            local_68 = (uint ****)puVar12[3];
            local_64 = puVar12[4];
            local_60._0_4_ = puVar12[5];
            local_60._4_4_ = puVar12[6];
            local_58 = puVar12[7];
            while( true ) {
              uVar39 = FUN_0165b2d8(&local_78);
              if ((int)uVar39 == 0) break;
              local_38 = (int)&local_48 + 4;
              local_34 = &LAB_0193a90c;
              local_3c = &LAB_0193a90c;
              local_40 = (uint ***)&local_48;
              local_48 = uVar39;
              FUN_00664898(&local_54,&DAT_00598886,&local_40);
              FUN_006666fc(&local_40,puVar4,uVar21);
              uVar35 = local_38;
              puVar9 = local_3c;
              pppuVar8 = local_40;
              if ((uint)((int)local_b0 - local_a8) < local_38) {
                FUN_006520b4(&local_b0,local_a8,local_38,1,1);
              }
              iVar19 = local_a8;
              iVar34 = local_ac;
              ppppuVar5 = local_b0;
              FUN_01bed4e2(local_ac + local_a8,puVar9,uVar35);
              iVar19 = iVar19 + uVar35;
              local_a8 = iVar19;
              FUN_0134bd64(pppuVar8,puVar9);
              uVar35 = local_4c;
              uVar23 = local_50;
              ppppuVar7 = local_54;
              if ((uint)((int)ppppuVar5 - iVar19) < local_4c) {
                FUN_006520b4(&local_b0,iVar19,local_4c,1,1);
                iVar34 = local_ac;
                iVar19 = local_a8;
              }
              FUN_01bed4e2(iVar34 + iVar19,uVar23,uVar35);
              local_a8 = iVar19 + uVar35;
              FUN_0134bd64(ppppuVar7,uVar23);
            }
            do {
              FUN_0165b318(&local_40,&local_78);
            } while (local_40 != (uint ***)0x0);
          }
        }
        FUN_0134bd64(uVar24,puVar4);
        local_78 = local_b0;
        local_74 = (undefined8 *)local_ac;
        local_70._0_4_ = (undefined4 *****)local_a8;
        goto LAB_01659af0;
      }
    }
  }
  local_70._0_4_ = (undefined4 *****)0x0;
  local_78 = (undefined4 ****)0x0;
  local_74 = (undefined8 *)0x1;
  FUN_0165af2c(&local_100);
LAB_01659af0:
  local_fc = (undefined8 *)&LAB_00632348;
  local_100 = &local_78;
  uVar24 = FUN_012fa178(param_2,&DAT_01c0ff80,&DAT_00590e5f,&local_100);
  FUN_0134bd64(local_78,local_74);
  return uVar24;
}

