// FUN_009d5784 @ 009d5784 size=3436 calls_out=20 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING: Type propagation algorithm not settling */

uint FUN_009d5784(float *param_1,int *param_2,float ******param_3,float param_4,undefined1 *param_5)

{
  char cVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 ******ppppppuVar4;
  char cVar5;
  float fVar6;
  undefined4 *******pppppppuVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  undefined1 uVar12;
  float *pfVar13;
  float *pfVar14;
  uint uVar15;
  undefined1 *puVar16;
  float fVar17;
  float *pfVar18;
  float *pfVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined *puVar22;
  char *pcVar23;
  bool bVar24;
  uint in_fpscr;
  float fVar25;
  float ******ppppppfVar26;
  float fVar27;
  float ******local_c4;
  undefined4 *******local_c0;
  float local_bc;
  undefined4 *local_b8;
  undefined4 *******local_b0;
  undefined1 *local_ac;
  float local_a4;
  undefined1 *local_a0;
  undefined4 *******local_9c;
  undefined4 *local_98;
  float *local_94;
  float *******local_90;
  undefined **local_8c;
  undefined4 *******local_88;
  undefined1 *local_84;
  float *******local_80;
  code *local_7c;
  float *local_78;
  undefined4 *local_74;
  float ******local_70;
  float local_6c;
  undefined1 *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined *local_58;
  float *******local_54;
  float *******local_50;
  undefined **local_4c;
  undefined4 *******local_48;
  
  if (*param_2 != -0x7ffffffb) {
    local_70 = (float ******)*param_2;
    local_6c = (float)param_2[1];
    local_68 = (undefined1 *)param_2[2];
    local_88 = (undefined4 *******)0x0;
    local_90 = (float *******)0x0;
    ppppppfVar26 = (float ******)0x5;
    if ((int)local_70 < 0) {
      ppppppfVar26 = local_70;
    }
    local_8c = (undefined **)0x1;
                    /* WARNING: Could not recover jumptable at 0x009d586c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (*(code *)(&DAT_009d5870 + *(int *)(&DAT_009d5870 + (int)ppppppfVar26 * 4)))
                      (*(int *)(&DAT_009d5870 + (int)ppppppfVar26 * 4),&UNK_00388f7d,0x2a);
    return uVar9;
  }
  pfVar19 = param_1 + 0xe;
  ppppppfVar26 = (float ******)param_2[1];
  pfVar18 = pfVar19;
  local_c0 = (undefined4 *******)ppppppfVar26;
  if (*(char *)(param_1 + 0x16) == '\0') {
    fVar6 = param_1[0x11];
    if (param_1[0x15] != 0.0) {
      param_1[0x15] = 0.0;
    }
    param_1[0x14] = 0.0;
    if (4 < (uint)fVar6) {
      fVar17 = param_1[0x10];
      do {
        fVar25 = (float)((int)fVar17 + 1);
        fVar6 = (float)((int)fVar6 - 1);
        fVar17 = (float)((int)fVar25 - (int)param_1[0xe]);
        if ((uint)fVar25 < (uint)param_1[0xe]) {
          fVar17 = fVar25;
        }
      } while (4 < (uint)fVar6);
LAB_009d5bec:
      param_1[0x10] = fVar17;
      param_1[0x11] = fVar6;
    }
LAB_009d5bf8:
    fVar6 = *pfVar18;
    fVar17 = pfVar18[3];
    if (fVar17 == fVar6) {
      FUN_009c43f8(pfVar18);
      fVar6 = *pfVar18;
      fVar17 = pfVar18[3];
    }
    fVar25 = (float)((int)pfVar18[2] + (int)fVar17);
    pfVar18[3] = (float)((int)fVar17 + 1);
    fVar17 = (float)((int)fVar25 - (int)fVar6);
    if ((uint)fVar25 < (uint)fVar6) {
      fVar17 = fVar25;
    }
    *(float *******)((int)pfVar18[1] + (int)fVar17 * 4) = ppppppfVar26;
    local_70 = (float ******)0x80000000;
    cVar1 = *(char *)(param_1 + 0x16);
  }
  else {
    if (*(char *)(param_1 + 0x16) != '\x01') {
      fVar6 = param_1[0x15];
      pfVar18 = param_1 + 0x12;
      if (4 < (uint)fVar6) {
        fVar17 = param_1[0x14];
        do {
          fVar25 = (float)((int)fVar17 + 1);
          fVar6 = (float)((int)fVar6 - 1);
          fVar17 = (float)((int)fVar25 - (int)param_1[0x12]);
          if ((uint)fVar25 < (uint)param_1[0x12]) {
            fVar17 = fVar25;
          }
        } while (4 < (uint)fVar6);
        param_1[0x14] = fVar17;
        param_1[0x15] = fVar6;
      }
      goto LAB_009d5bf8;
    }
    fVar6 = param_1[0x11];
    if (fVar6 == 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("BUG: Buffer is empty",0x29,&DAT_0186acf0);
    }
    fVar17 = param_1[0xe];
    fVar8 = param_1[0x10];
    pfVar2 = (float *)param_1[0xf];
    fVar25 = (float)((int)fVar8 - (int)fVar17);
    if ((uint)fVar8 < (uint)fVar17) {
      fVar25 = fVar8;
    }
    iVar10 = (int)fVar6 - ((int)fVar17 - (int)fVar25);
    uVar9 = 0;
    if ((uint)fVar6 < (uint)((int)fVar17 - (int)fVar25) || iVar10 == 0) {
      fVar17 = (float)((int)fVar25 + (int)fVar6);
    }
    else {
      uVar9 = iVar10 * 4;
    }
    if (fVar17 == fVar25) {
      fVar8 = -0.0;
    }
    else {
      pfVar11 = pfVar2 + (int)fVar25;
      fVar8 = -0.0;
      iVar10 = (int)fVar17 - (int)fVar25;
      do {
        fVar17 = *pfVar11;
        pfVar11 = pfVar11 + 1;
        iVar10 = iVar10 + -1;
        fVar8 = fVar8 + fVar17;
      } while (iVar10 != 0);
    }
    if (uVar9 != 0) {
      uVar9 = uVar9 >> 2;
      do {
        fVar17 = *pfVar2;
        pfVar2 = pfVar2 + 1;
        uVar9 = uVar9 - 1;
        fVar8 = fVar8 + fVar17;
      } while (uVar9 != 0);
    }
    fVar17 = param_1[0x15];
    fVar25 = (float)VectorUnsignedToFloat(fVar6,(byte)(in_fpscr >> 0x16) & 3);
    local_50 = (float *******)(fVar8 / fVar25);
    if (ABS((float)ppppppfVar26 - (float)local_50) <= 8.0) {
      if (fVar17 != 0.0) {
        param_1[0x15] = 0.0;
      }
      param_1[0x14] = 0.0;
      if (4 < (uint)fVar6) {
        fVar17 = param_1[0x10];
        do {
          fVar25 = (float)((int)fVar17 + 1);
          fVar6 = (float)((int)fVar6 - 1);
          fVar17 = (float)((int)fVar25 - (int)param_1[0xe]);
          if ((uint)fVar25 < (uint)param_1[0xe]) {
            fVar17 = fVar25;
          }
        } while (4 < (uint)fVar6);
        goto LAB_009d5bec;
      }
      goto LAB_009d5bf8;
    }
    fVar6 = param_1[0x12];
    if (4 < (uint)fVar17) {
      fVar25 = param_1[0x14];
      do {
        fVar8 = (float)((int)fVar25 + 1);
        fVar17 = (float)((int)fVar17 - 1);
        fVar25 = (float)((int)fVar8 - (int)fVar6);
        if ((uint)fVar8 < (uint)fVar6) {
          fVar25 = fVar8;
        }
      } while (4 < (uint)fVar17);
      param_1[0x14] = fVar25;
      param_1[0x15] = fVar17;
      fVar17 = 5.60519e-45;
    }
    if (fVar17 == fVar6) {
      FUN_009c43f8();
      fVar6 = param_1[0x12];
      fVar17 = param_1[0x15];
    }
    fVar25 = (float)((int)param_1[0x14] + (int)fVar17);
    param_1[0x15] = (float)((int)fVar17 + 1);
    fVar17 = (float)((int)fVar25 - (int)fVar6);
    if ((uint)fVar25 < (uint)fVar6) {
      fVar17 = fVar25;
    }
    *(float *******)((int)param_1[0x13] + (int)fVar17 * 4) = ppppppfVar26;
    local_88 = &local_50;
    local_84 = &LAB_00fb1efc;
    local_8c = (undefined **)&LAB_00fb1efc;
    local_90 = (float *******)&local_c0;
    FUN_00600d2c(&local_70,&DAT_0056f0eb,&local_90);
    cVar1 = *(char *)(param_1 + 0x16);
  }
  if (cVar1 != '\x02') {
    if (cVar1 == '\x01') {
      cVar1 = '\x01';
      bVar24 = (uint)param_1[0x15] < 5;
      goto LAB_009d5d08;
    }
    fVar6 = param_1[0x11];
    uVar12 = 0;
    if (3 < (uint)fVar6) {
      fVar25 = param_1[0xe];
      fVar8 = param_1[0x10];
      pfVar18 = (float *)param_1[0xf];
      fVar17 = (float)((int)fVar8 - (int)fVar25);
      if ((uint)fVar8 < (uint)fVar25) {
        fVar17 = fVar8;
      }
      fVar8 = (float)((int)fVar25 - (int)fVar17);
      pfVar2 = pfVar18 + (int)fVar17;
      iVar10 = (int)fVar6 - (int)fVar8;
      if ((uint)fVar6 < (uint)fVar8) {
        iVar10 = 0;
      }
      fVar27 = *pfVar2;
      if ((uint)fVar6 <= (uint)fVar8) {
        fVar25 = (float)((int)fVar17 + (int)fVar6);
      }
      pfVar11 = pfVar18 + iVar10;
      pfVar3 = pfVar18 + (int)fVar25;
      fVar6 = fVar27;
      do {
        if (pfVar3 == pfVar2) {
          if ((pfVar18 == pfVar11) ||
             (bVar24 = pfVar18 == (float *)0x0, pfVar13 = pfVar11, pfVar11 = pfVar3,
             pfVar2 = pfVar18, pfVar18 = pfVar3, bVar24)) goto LAB_009d5cf0;
        }
        else {
          pfVar13 = pfVar3;
        }
        pfVar3 = pfVar13;
        fVar17 = *pfVar2;
        pfVar2 = pfVar2 + 1;
        fVar27 = (float)FUN_016d5682(fVar27,fVar17);
        fVar6 = (float)FUN_016d55d4(fVar6,fVar17);
      } while( true );
    }
    goto LAB_009d5df4;
  }
  fVar6 = param_1[0x15];
  if (3 < (uint)fVar6) {
    fVar25 = param_1[0x12];
    fVar8 = param_1[0x14];
    pfVar18 = (float *)param_1[0x13];
    fVar17 = (float)((int)fVar8 - (int)fVar25);
    if ((uint)fVar8 < (uint)fVar25) {
      fVar17 = fVar8;
    }
    fVar8 = (float)((int)fVar25 - (int)fVar17);
    pfVar2 = pfVar18 + (int)fVar17;
    iVar10 = (int)fVar6 - (int)fVar8;
    if ((uint)fVar6 < (uint)fVar8) {
      iVar10 = 0;
    }
    fVar27 = *pfVar2;
    if ((uint)fVar6 <= (uint)fVar8) {
      fVar25 = (float)((int)fVar17 + (int)fVar6);
    }
    pfVar3 = pfVar18 + (int)fVar25;
    pfVar11 = pfVar18 + iVar10;
    fVar6 = fVar27;
    do {
      if (pfVar3 == pfVar2) {
        if ((pfVar18 == pfVar11) ||
           (pfVar13 = pfVar3, pfVar14 = pfVar3, pfVar2 = pfVar18, pfVar18 == (float *)0x0))
        goto LAB_009d5cf0;
      }
      else {
        pfVar13 = pfVar11;
        pfVar11 = pfVar3;
        pfVar14 = pfVar18;
      }
      pfVar3 = pfVar11;
      fVar17 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      fVar27 = (float)FUN_016d5682(fVar27,fVar17);
      fVar6 = (float)FUN_016d55d4(fVar6,fVar17);
      pfVar11 = pfVar13;
      pfVar18 = pfVar14;
    } while( true );
  }
LAB_009d5d24:
  if (local_70 != (float ******)0x80000000) goto LAB_009d5e00;
LAB_009d5d9c:
  puVar21 = (undefined1 *)0x1c;
  fVar6 = (float)thunk_FUN_016d4a50(0x1c);
  local_c4 = (float ******)0x1c;
  if (fVar6 == 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x1c);
  }
  FUN_016dd1aa(fVar6,&DAT_0034aff0,0x1c);
LAB_009d5e08:
  uVar9 = 0;
  if ((*(char *)(param_1 + 0x16) == '\x01') && (param_1[0x11] != 0.0)) {
    fVar25 = (float)(((int)param_1[0x11] + (int)param_1[0x10]) - 1);
    fVar17 = (float)((int)fVar25 - (int)param_1[0xe]);
    if ((uint)fVar25 < (uint)param_1[0xe]) {
      fVar17 = fVar25;
    }
    uVar9 = (uint)((*(uint *)((int)param_1[0xf] + (int)fVar17 * 4) & 0x7fffffff) < 0x7f800000);
  }
  if (local_c4 == (float ******)0x80000000) {
    if (*(char *)(param_1 + 0xd) != '\x01') {
      return uVar9;
    }
    fVar6 = param_1[0xb];
    param_1[0xb] = (float)((int)fVar6 + 1U);
    if ((int)fVar6 + 1U < 0x1e) {
      return 0;
    }
    if ((2 < DAT_018d9130) || (DAT_018d9854 == '\0')) goto LAB_009d6170;
    if (DAT_018d9854 == '\x01') {
LAB_009d5fc8:
      puVar22 = &DAT_018ae394;
      DataMemoryBarrier(0xb);
      pcVar23 = s_SetGloba_00414c05;
      if ((DAT_018dd984 == 2) && (pcVar23 = DAT_018daa74, puVar22 = DAT_018daa78, DAT_018daa70 != 0)
         ) {
        pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar10 = (**(code **)(puVar22 + 0x14))(pcVar23,DAT_018d984c);
      if (iVar10 == 0) goto LAB_009d6170;
    }
    else if (DAT_018d9854 != '\x02') {
      cVar1 = FUN_0169ac90(&DAT_018d984c);
      if (cVar1 == '\0') goto LAB_009d6170;
      if (cVar1 != '\x02') goto LAB_009d5fc8;
    }
    local_7c = (code *)DAT_018d984c;
    if (*(int *)(DAT_018d984c + 0x20) != 0) {
      local_64 = *(undefined4 *)(DAT_018d984c + 0x28);
      local_6c = *(float *)(DAT_018d984c + 0x20);
      local_68 = *(undefined1 **)(DAT_018d984c + 0x24);
      local_50 = &local_70;
      local_4c = &local_58;
      local_b8 = (undefined4 *)(DAT_018d984c + 0x1c);
      local_70 = (float ******)*local_b8;
      local_48 = (undefined4 *******)&DAT_018abb78;
      local_54 = (float *******)&local_9c;
      local_60 = 0;
      local_58 = &DAT_0057f29a;
      local_9c = (undefined4 *******)(param_1 + 8);
      local_c0 = &local_50;
      local_80 = (float *******)&local_c0;
      local_98 = &DAT_006043a8;
      local_bc = 1.4013e-45;
      local_8c = (undefined **)0x0;
      local_90 = (float *******)0x1;
      DataMemoryBarrier(0xb);
      pcVar23 = s_SetGloba_00414c05;
      puVar22 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar23 = DAT_018daa74, puVar22 = DAT_018daa78, DAT_018daa70 != 0)
         ) {
        pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar10 = (**(code **)(puVar22 + 0x28))(pcVar23,&local_90);
      if (iVar10 != 0) {
        (**(code **)(puVar22 + 0x2c))(pcVar23,&local_90);
      }
LAB_009d6170:
      *(undefined1 *)(param_1 + 0xd) = 0;
      param_1[0xb] = 0.0;
      param_1[0xc] = 0.0;
      param_1[6] = (float)&DAT_3b9aca00;
      param_1[2] = (float)&DAT_3b9aca00;
      return uVar9;
    }
    puVar22 = &DAT_0186ad50;
    goto LAB_009d6550;
  }
  param_1[0xb] = 0.0;
  local_b8 = (undefined4 *)param_5;
  puVar20 = (undefined1 *)param_1[2];
  puVar16 = puVar20;
  if (puVar20 == &DAT_3b9aca00) {
    puVar16 = param_5;
  }
  ppppppfVar26 = (float ******)*param_1;
  fVar17 = param_1[1];
  if (puVar20 == &DAT_3b9aca00) {
    ppppppfVar26 = param_3;
    fVar17 = param_4;
  }
  local_c0 = (undefined4 *******)param_3;
  local_bc = param_4;
  local_70 = ppppppfVar26;
  local_6c = fVar17;
  local_68 = puVar16;
  FUN_015f3c24(&local_90,&local_c0,&local_70);
  pppppppuVar7 = local_88;
  puVar20 = local_84;
  if (((uint)local_90 & 1) != 0) {
    puVar20 = (undefined1 *)0x0;
    pppppppuVar7 = (undefined4 *******)0x0;
  }
  uVar15 = (uint)((uint)(pppppppuVar7 < &DAT_0000001f) <= (uint)-(int)puVar20);
  if (pppppppuVar7 == (undefined4 *******)&DAT_0000001e && puVar20 == (undefined1 *)0x0) {
    uVar15 = (uint)(local_80 != (float *******)0x0) & ~(uint)local_90;
  }
  if (uVar15 != 0) {
    param_1[0xc] = 1.4013e-45;
    *param_1 = (float)param_3;
    param_1[1] = param_4;
    param_1[2] = (float)param_5;
    goto LAB_009d6484;
  }
  pppppppuVar7 = (undefined4 *******)(param_1 + 0xc);
  ppppppuVar4 = *pppppppuVar7;
  *param_1 = (float)ppppppfVar26;
  param_1[1] = fVar17;
  param_1[2] = (float)puVar16;
  *pppppppuVar7 = (undefined4 ******)((int)ppppppuVar4 + 1U);
  if ((undefined4 ******)((int)ppppppuVar4 + 1U) < (undefined4 ******)0xa) goto LAB_009d6484;
  FUN_015f3b0c(&local_90,1);
  local_50 = local_90;
  local_4c = local_8c;
  local_48 = local_88;
  local_70 = ppppppfVar26;
  local_6c = fVar17;
  local_68 = puVar16;
  FUN_015f3c24(&local_90,&local_50,&local_70);
  puVar16 = (undefined1 *)param_1[6];
  local_b0 = local_88;
  local_ac = local_84;
  if (((uint)local_90 & 1) != 0) {
    local_ac = (undefined1 *)0x0;
    local_b0 = (undefined4 *******)0x0;
  }
  local_a4 = fVar6;
  local_a0 = puVar21;
  if (puVar16 == &DAT_3b9aca00) {
LAB_009d62ac:
    if ((DAT_018d9130 < 4) && (DAT_018d9860 != '\0')) {
      if (DAT_018d9860 == '\x01') {
LAB_009d6300:
        puVar22 = &DAT_018ae394;
        DataMemoryBarrier(0xb);
        pcVar23 = s_SetGloba_00414c05;
        if ((DAT_018dd984 == 2) &&
           (pcVar23 = DAT_018daa74, puVar22 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar10 = (**(code **)(puVar22 + 0x14))(pcVar23,DAT_018d9858);
        if (iVar10 == 0) goto LAB_009d6444;
      }
      else if (DAT_018d9860 != '\x02') {
        cVar1 = FUN_0169ac90(&DAT_018d9858);
        if (cVar1 == '\0') goto LAB_009d6444;
        if (cVar1 != '\x02') goto LAB_009d6300;
      }
      if (*(int *)(DAT_018d9858 + 0x20) == 0) {
        puVar22 = &DAT_0186ada0;
LAB_009d6550:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,puVar22);
      }
      local_64 = *(undefined4 *)(DAT_018d9858 + 0x28);
      local_60 = 0;
      local_6c = *(float *)(DAT_018d9858 + 0x20);
      local_68 = *(undefined1 **)(DAT_018d9858 + 0x24);
      local_94 = (float *)(DAT_018d9858 + 0x1c);
      local_70 = (float ******)*local_94;
      local_54 = (float *******)&local_90;
      local_74 = &DAT_0157d360;
      local_78 = &local_a4;
      local_98 = (undefined4 *)0x1;
      local_9c = &local_50;
      local_80 = (float *******)&local_b0;
      local_48 = (undefined4 *******)&DAT_018abb78;
      local_4c = &local_58;
      local_90 = (float *******)(param_1 + 8);
      local_50 = &local_70;
      local_58 = &DAT_0057b899;
      local_7c = FUN_00fac4cc;
      local_84 = &LAB_00fac484;
      local_8c = (undefined **)&DAT_006043a8;
      local_88 = pppppppuVar7;
      FUN_0169bb88(DAT_018d9858,&local_9c);
    }
LAB_009d6444:
    param_1[4] = (float)param_3;
    param_1[6] = (float)param_5;
    param_1[5] = param_4;
  }
  else {
    ppppppfVar26 = (float ******)param_1[4];
    fVar17 = param_1[5];
    FUN_015f3b0c(&local_90,1);
    local_50 = local_90;
    local_4c = local_8c;
    local_48 = local_88;
    local_70 = ppppppfVar26;
    local_6c = fVar17;
    local_68 = puVar16;
    FUN_015f3c24(&local_90,&local_50,&local_70);
    if ((((uint)local_90 & 1) == 0) &&
       ((uint)local_84 >> 3 != 0 ||
        (uint)local_84 >> 3 < (uint)(0xe0 < ((uint)local_88 >> 3 | (int)local_84 << 0x1d))))
    goto LAB_009d62ac;
  }
  param_1[0xc] = 0.0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[2] = (float)&DAT_3b9aca00;
LAB_009d6484:
  fVar17 = param_1[0xd];
  if (local_c4 != (float ******)0x0) {
    thunk_FUN_016d3fb4(fVar6);
  }
  if (((uint)fVar17 & 1) != 0) {
    uVar9 = 0;
  }
  return uVar9;
LAB_009d5cf0:
  bVar24 = false;
  if (fVar6 - fVar27 <= 3.0) {
    bVar24 = true;
  }
LAB_009d5d08:
  cVar5 = '\x02';
  if (bVar24) {
    cVar5 = '\x01';
  }
  if (cVar1 == cVar5) {
    if (!bVar24) goto LAB_009d5d24;
  }
  else {
    if (cVar1 == '\0') {
      uVar12 = 1;
      if (bVar24) goto LAB_009d5df4;
      FUN_009d6718(param_1 + 0x12,pfVar19);
    }
    else {
      if (cVar1 != '\x01') {
        if (!bVar24) goto LAB_009d651c;
        uVar12 = 1;
        FUN_009d6718(pfVar19,param_1 + 0x12);
LAB_009d5df4:
        *(undefined1 *)(param_1 + 0x16) = uVar12;
        goto LAB_009d5e00;
      }
      if (bVar24) {
LAB_009d651c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("internal error: entered unreachable code: BUG: Illegal state transition",0x8f,
                     &DAT_0186ad00);
      }
      if (param_1[0x11] != 0.0) {
        param_1[0x11] = 0.0;
      }
      param_1[0x10] = 0.0;
    }
    *(undefined1 *)(param_1 + 0x16) = 2;
    if (local_70 == (float ******)0x80000000) goto LAB_009d5d9c;
  }
LAB_009d5e00:
  fVar6 = local_6c;
  puVar21 = local_68;
  local_c4 = local_70;
  goto LAB_009d5e08;
}

