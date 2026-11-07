// FUN_008fcd58 @ 008fcd58 size=2856 calls_out=14 calls_in=2
// strings: chain voltage was specified on miner with shared voltage control | SetGloba | SetGloba | lDefaultError | Shitcoin mining not supported on this machine family (assuming asic_boost=true)event open/bosminer/bosminer-config/src/body/base.rs:635event open/bosminer/bosminer-config/src/body/base.rs:602event open/bosminer/bosminer-config/src/body/base.rs:668event open/bosminer/bosminer-config/src/body/base.rs:704event open/bosminer/bosminer-config/src/body/base.rs:686event open/bosminer/bosminer-config/src/body/base.rs:716event open/bosminer/bosminer-config/src/body/base.rs:605event open/bosminer/bosminer-config/src/body/base.rs:624event open/bosminer/bosminer-config/src/body/base.rs:710 | BUG: impossible

void FUN_008fcd58(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  double *pdVar1;
  code *pcVar2;
  code *pcVar3;
  char cVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined *puVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  int local_d4;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  double local_c0;
  undefined1 auStack_b4 [12];
  double local_a8;
  undefined8 **local_a0;
  undefined4 local_9c;
  double *local_98;
  undefined8 *local_94;
  undefined **local_90;
  undefined4 *local_8c;
  undefined8 local_88;
  undefined *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined *local_70;
  double **local_6c;
  double *local_68;
  code *local_64;
  uint *local_60;
  code *local_5c;
  undefined8 **local_58;
  code *local_54;
  double *local_50;
  code *local_4c;
  undefined8 *local_48;
  undefined1 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 ***local_38;
  int local_34;
  
  uVar19 = *(uint *)(param_2 + 0x48);
  uVar14 = *(uint *)(param_2 + 0x4c);
  if (uVar14 == 0 && (1 < uVar19) <= uVar14) {
    dVar24 = *(double *)(param_2 + 0x50) * 1000000.0;
    local_cc = (uint)(0.0 < dVar24) * (int)(longlong)dVar24;
    if ((uVar19 & 1) == 0) {
      local_cc = *(uint *)(param_3 + 0xd8);
    }
    if ((*(uint *)(param_2 + 0x58) & 1) == 0) goto LAB_008fcde8;
    pdVar5 = (double *)(param_2 + 0x60);
    uVar11 = 0;
  }
  else {
    local_cc = *(uint *)(param_3 + 0xd8);
LAB_008fcde8:
    pdVar5 = (double *)(param_3 + 0xb8);
    uVar11 = 1;
  }
  uVar22 = local_cc;
  dVar24 = *pdVar5;
  bVar17 = 1;
  local_c4 = 0;
  local_c8 = uVar11;
  local_c0 = dVar24;
  if (*(int *)(param_2 + 0x88) == 1) {
    local_44 = &LAB_00fac484;
    local_48 = &local_88;
    local_60 = (uint *)0x0;
    local_64 = (code *)0x1;
    local_68 = (double *)0x0;
    local_88 = (double)CONCAT44(local_88._4_4_,param_4);
    iVar6 = FUN_00fa948c(&local_68,&DAT_01867a00,&DAT_00590e71,&local_48);
    puVar16 = local_60;
    pcVar2 = local_64;
    pdVar5 = local_68;
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_48,
                   &DAT_01867a18,&DAT_018af130);
    }
    iVar6 = *(int *)(param_2 + 0x8c);
    if (iVar6 != 0) {
      local_d4 = *(int *)(param_2 + 0x90);
      do {
        iVar13 = iVar6 + 0x1bc;
        uVar21 = (uint)*(ushort *)(iVar6 + 0x242);
        uVar20 = 0xffffffff;
        iVar18 = uVar21 * 0xc;
        do {
          if (iVar18 == 0) goto LAB_008fcf2c;
          puVar15 = *(undefined1 **)(iVar13 + 8);
          puVar12 = (uint *)puVar15;
          if (puVar16 < puVar15) {
            puVar12 = puVar16;
          }
          iVar7 = FUN_016dd50a(pcVar2,*(undefined4 *)(iVar13 + 4),puVar12);
          if (iVar7 == 0) {
            iVar7 = (int)puVar16 - (int)puVar15;
          }
          iVar18 = iVar18 + -0xc;
          uVar20 = uVar20 + 1;
          iVar13 = iVar13 + 0xc;
        } while ((char)((0 < iVar7) - (iVar7 < 0)) == '\x01');
        uVar21 = uVar20;
        if (0 < iVar7 == iVar7 < 0) {
          puVar16 = (uint *)(iVar6 + uVar20 * 0x28);
          goto joined_r0x008fcf70;
        }
LAB_008fcf2c:
        if (local_d4 == 0) goto LAB_008fd72c;
        local_d4 = local_d4 + -1;
        iVar6 = *(int *)(iVar6 + uVar21 * 4 + 0x248);
      } while( true );
    }
    puVar16 = (uint *)0x0;
    goto joined_r0x008fcf70;
  }
  goto LAB_008fd044;
LAB_008fd72c:
  puVar16 = (uint *)0x0;
joined_r0x008fcf70:
  if (pdVar5 != (double *)0x0) {
    thunk_FUN_016d3fb4(pcVar2);
  }
  if (puVar16 == (uint *)0x0) {
    bVar17 = 1;
  }
  else {
    if ((*puVar16 & 1) != 0) {
      uVar22 = (uint)(0.0 < *(double *)(puVar16 + 2) * 1000000.0) *
               (int)(longlong)(*(double *)(puVar16 + 2) * 1000000.0);
    }
    local_cc = uVar22;
    if (*(char *)(param_3 + 0x7c) == '\0') {
      if ((puVar16[4] & 1) != 0) {
        dVar24 = *(double *)(puVar16 + 6);
        uVar11 = 0;
      }
    }
    else if (puVar16[4] != 0 || puVar16[5] != 0) {
      local_68 = (double *)
                 FUN_009337b0("chain voltage was specified on miner with shared voltage control",
                              0x40);
      goto LAB_008fd0f8;
    }
    local_c4 = 0;
    bVar17 = (byte)puVar16[8] == 2 | (byte)puVar16[8];
    local_c8 = uVar11;
    local_c0 = dVar24;
  }
LAB_008fd044:
  if ((uVar22 < *(uint *)(param_3 + 0x54)) || (*(uint *)(param_3 + 0x58) < uVar22)) {
    local_68 = (double *)&local_cc;
    local_54 = FUN_00f5c9c8;
    local_5c = FUN_00f5c9c8;
    local_64 = FUN_00f5c9c8;
    local_60 = (uint *)(param_3 + 0x54);
    local_58 = (undefined8 **)(param_3 + 0x58);
    FUN_00600d2c(auStack_b4,&DAT_00575046,&local_68);
    local_68 = (double *)FUN_009337e4(auStack_b4);
    goto LAB_008fd0f8;
  }
  uVar19 = uVar19 ^ 3;
  uVar21 = uVar19;
  if (uVar19 != 0 || uVar14 != 0) {
    uVar21 = (uint)*(byte *)(param_2 + 0x80);
  }
  if (((((uVar19 != 0 || uVar14 != 0) && uVar21 != 2) && ((uVar21 & 1) == 0)) && (DAT_018d9130 < 4))
     && (DAT_018d9734 != '\0')) {
    puVar23 = &DAT_018ae394;
    pcVar10 = s_SetGloba_00414c05;
    if (DAT_018d9734 == '\x01') {
LAB_008fd1a8:
      DataMemoryBarrier(0xb);
      pcVar8 = pcVar10;
      if (DAT_018dd984 == 2) {
        pcVar8 = DAT_018daa74;
        puVar23 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar8 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      iVar6 = (**(code **)(puVar23 + 0x14))(pcVar8,DAT_018d972c);
      if (iVar6 == 0) goto LAB_008fd078;
    }
    else if (DAT_018d9734 != '\x02') {
      cVar4 = FUN_0169ac90(&DAT_018d972c);
      if (cVar4 == '\0') goto LAB_008fd078;
      if (cVar4 != '\x02') goto LAB_008fd1a8;
    }
    local_54 = (code *)DAT_018d972c;
    if (*(int *)(DAT_018d972c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01867620);
    }
    local_44 = *(undefined1 **)(DAT_018d972c + 0x20);
    local_40 = *(undefined4 *)(DAT_018d972c + 0x24);
    local_3c = *(undefined4 *)(DAT_018d972c + 0x28);
    local_8c = (undefined4 *)(DAT_018d972c + 0x1c);
    local_48 = (undefined8 *)*local_8c;
    local_88 = (double)CONCAT44(&local_a0,&local_48);
    local_94 = &local_88;
    local_58 = &local_94;
    local_38 = (undefined8 ***)0x0;
    local_90 = (undefined **)&DAT_00000001;
    local_80 = &DAT_018abb78;
    local_9c = 0x9f;
    local_a0 = (undefined8 **)0x347f71;
    local_64 = (code *)0x0;
    local_68 = (double *)0x1;
    DataMemoryBarrier(0xb);
    puVar23 = &DAT_018ae394;
    if (DAT_018dd984 == 2) {
      pcVar10 = DAT_018daa74;
      puVar23 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar10 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    iVar6 = (**(code **)(puVar23 + 0x28))(pcVar10,&local_68);
    if (iVar6 != 0) {
      (**(code **)(puVar23 + 0x2c))(pcVar10,&local_68);
    }
  }
LAB_008fd078:
  uVar11 = *(undefined4 *)(param_2 + 0x74);
  if ((*(uint *)(param_2 + 0x70) & 1) == 0) {
    uVar11 = 0x1e;
  }
  if (uVar19 == 0 && uVar14 == 0) {
    uVar11 = 0x1e;
  }
  FUN_008fd998(&local_68,uVar11);
  puVar16 = local_60;
  pcVar2 = local_64;
  pdVar5 = local_68;
  if (local_60 == (uint *)&DAT_3b9aca00) {
LAB_008fd0f8:
    param_1[2] = (int)&DAT_3b9aca00;
    *param_1 = (int)local_68;
    return;
  }
  uVar11 = *(undefined4 *)(param_2 + 0x7c);
  if ((*(uint *)(param_2 + 0x78) & 1) == 0) {
    uVar11 = 0x1e;
  }
  if (uVar19 == 0 && uVar14 == 0) {
    uVar11 = 0x1e;
  }
  FUN_008fd998(&local_68,uVar11);
  puVar12 = local_60;
  pcVar3 = local_64;
  pdVar1 = local_68;
  if (local_60 == (uint *)&DAT_3b9aca00) goto LAB_008fd0f8;
  local_a8 = *(double *)(param_3 + 0xb8);
  dVar25 = *(double *)(param_3 + 0x38);
  local_88 = local_c0;
  dVar24 = local_c0;
  if (NAN(local_c0)) {
    if (NAN(*(double *)(param_3 + 0x40))) goto LAB_008fd850;
  }
  else if (!NAN(dVar25)) {
    if (local_c0 <= dVar25) {
      if (local_c0 < dVar25) goto LAB_008fd394;
    }
    else if (local_c0 < dVar25) goto LAB_008fd44c;
    if (local_c0 <= *(double *)(param_3 + 0x40)) goto LAB_008fd850;
    if (local_c0 < *(double *)(param_3 + 0x40)) goto LAB_008fd44c;
  }
LAB_008fd394:
  dVar24 = local_c0 + 0.001;
  if (NAN(dVar24)) {
    if (NAN(*(double *)(param_3 + 0x40))) {
LAB_008fd84c:
      dVar24 = dVar25;
      goto LAB_008fd850;
    }
  }
  else if (!NAN(dVar25)) {
    if (dVar24 <= dVar25) {
      if (dVar24 < dVar25) goto LAB_008fd414;
      dVar26 = *(double *)(param_3 + 0x40);
    }
    else {
      if (dVar24 < dVar25) goto LAB_008fd44c;
      dVar26 = *(double *)(param_3 + 0x40);
    }
    if (dVar24 <= dVar26) goto LAB_008fd84c;
    if (dVar24 < dVar26) goto LAB_008fd44c;
  }
LAB_008fd414:
  dVar26 = local_c0 + -0.001;
  if (NAN(dVar26)) {
    dVar24 = *(double *)(param_3 + 0x40);
    if (NAN(*(double *)(param_3 + 0x40))) goto LAB_008fd850;
  }
  else if (!NAN(dVar25)) {
    if (dVar26 <= dVar25) {
      if (dVar26 < dVar25) goto LAB_008fd498;
    }
    else if (dVar26 < dVar25) goto LAB_008fd44c;
    dVar24 = *(double *)(param_3 + 0x40);
    if (dVar26 <= dVar24) goto LAB_008fd850;
    if (dVar26 < dVar24) {
LAB_008fd44c:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f934);
    }
  }
LAB_008fd498:
  local_68 = (double *)&local_88;
  local_54 = FUN_00f5cdb8;
  local_5c = FUN_00f5cdb8;
  local_64 = FUN_00f5cdb8;
  local_60 = (uint *)(param_3 + 0x38);
  local_58 = (undefined8 **)(param_3 + 0x40);
  FUN_00600d2c(&local_48,&DAT_0058434f,&local_68);
  puVar9 = (undefined4 *)FUN_00f5c7b4(&local_48);
  if ((DAT_018d9130 < 4) && (DAT_018d9740 != '\0')) {
    if (DAT_018d9740 == '\x01') {
LAB_008fd548:
      DataMemoryBarrier(0xb);
      puVar23 = &DAT_018ae394;
      pcVar10 = s_SetGloba_00414c05;
      if (DAT_018dd984 == 2) {
        pcVar10 = DAT_018daa74;
        puVar23 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar10 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      iVar6 = (**(code **)(puVar23 + 0x14))(pcVar10,DAT_018d9738);
      if (iVar6 == 0) goto LAB_008fd704;
    }
    else if (DAT_018d9740 != '\x02') {
      cVar4 = FUN_0169ac90(&DAT_018d9738);
      if (cVar4 == '\0') goto LAB_008fd704;
      if (cVar4 != '\x02') goto LAB_008fd548;
    }
    local_34 = DAT_018d9738;
    if (*(int *)(DAT_018d9738 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01867630);
    }
    local_68 = &local_c0;
    local_80 = *(undefined **)(DAT_018d9738 + 0x24);
    local_7c = *(undefined4 *)(DAT_018d9738 + 0x28);
    local_98 = (double *)(DAT_018d9738 + 0x1c);
    local_88 = *local_98;
    local_6c = &local_68;
    local_50 = &local_a8;
    local_78 = 0;
    local_70 = &DAT_0059492f;
    local_4c = FUN_00f5cdb8;
    local_54 = FUN_00f5cdb8;
    local_5c = FUN_00f5cdb8;
    local_64 = FUN_00f5cdb8;
    local_a0 = &local_94;
    local_8c = (undefined4 *)&DAT_018abb78;
    local_90 = &local_70;
    local_94 = &local_88;
    local_9c = 1;
    local_44 = (undefined1 *)0x0;
    local_48 = (undefined8 *)&DAT_00000001;
    local_38 = &local_a0;
    DataMemoryBarrier(0xb);
    pcVar10 = s_SetGloba_00414c05;
    puVar23 = &DAT_018ae394;
    if (DAT_018dd984 == 2) {
      pcVar10 = DAT_018daa74;
      puVar23 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar10 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    local_60 = (uint *)(param_3 + 0x38);
    local_58 = (undefined8 **)(param_3 + 0x40);
    iVar6 = (**(code **)(puVar23 + 0x28))(pcVar10,&local_48);
    if (iVar6 != 0) {
      (**(code **)(puVar23 + 0x2c))(pcVar10,&local_48);
    }
  }
LAB_008fd704:
  dVar24 = local_a8;
  (**(code **)*puVar9)();
LAB_008fd850:
  *(byte *)(param_1 + 0xb) = bVar17 & 1;
  *param_1 = (int)pdVar5;
  param_1[10] = uVar22;
  *(double *)(param_1 + 8) = dVar24;
  param_1[4] = (int)pdVar1;
  param_1[5] = (int)pcVar3;
  param_1[6] = (int)puVar12;
  param_1[1] = (int)pcVar2;
  param_1[2] = (int)puVar16;
  return;
}

