// FUN_012acbcc @ 012acbcc size=4300 calls_out=22 calls_in=2
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements | assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements | assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012acbcc(undefined4 *param_1,ushort *param_2,int param_3,code *param_4)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int **ppiVar7;
  ushort *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int **ppiVar12;
  int iVar13;
  ushort *puVar14;
  int *piVar15;
  ushort *extraout_r1;
  uint uVar16;
  ushort *extraout_r1_00;
  ushort *extraout_r1_01;
  ushort *extraout_r1_02;
  ushort *extraout_r1_03;
  ushort *extraout_r1_04;
  int iVar17;
  undefined4 uVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  undefined1 *puVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int **ppiVar28;
  uint *puVar29;
  ushort *puVar30;
  int *piVar31;
  ushort *puVar32;
  int *piVar33;
  int *piVar34;
  int iVar35;
  bool bVar36;
  bool bVar37;
  uint in_fpscr;
  float fVar38;
  float fVar39;
  int **local_bc;
  code *local_b4;
  int **local_b0;
  int **local_ac;
  int local_a8;
  int **local_a4;
  char *local_a0;
  undefined *local_9c;
  int *local_7c;
  undefined *local_78;
  int local_74;
  int *local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  int *local_5c;
  uint local_58;
  int *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int *local_48;
  int local_44;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int **local_34;
  undefined *local_30;
  int **local_2c;
  code *local_28;
  
  bVar1 = *(byte *)((int)param_1 + 0x15);
  puVar8 = (ushort *)(uint)bVar1;
  local_68 = 0;
  local_70 = (int *)0x0;
  uVar21 = 2;
  local_9c = &DAT_01d305c8;
  local_a0 = &DAT_00533a41;
  puVar30 = param_2;
  puVar14 = param_2;
LAB_012acc2c:
  do {
    while( true ) {
      puVar32 = puVar14;
      if (puVar32 == param_2 + param_3 * 2) {
        if (param_3 == 0) {
          uVar9 = 0;
          iVar22 = param_1[3];
          goto LAB_012ad66c;
        }
        param_3 = param_3 << 2;
        puVar14 = (ushort *)*param_1;
        puVar30 = (ushort *)(uVar21 + 4);
        iVar22 = param_1[3];
        cVar2 = *(char *)(param_1 + 5);
        bVar36 = puVar30 <= puVar14;
        fVar38 = (float)VectorUnsignedToFloat(puVar30,(byte)(in_fpscr >> 0x16) & 3);
        fVar39 = (float)VectorUnsignedToFloat(puVar14,(byte)(in_fpscr >> 0x16) & 3);
        puVar14 = (ushort *)((int)puVar14 - (int)puVar30);
        goto LAB_012ad534;
      }
      iVar22 = *(int *)puVar32;
      uVar9 = *(uint *)(iVar22 + 0x11c);
      if ((uVar9 & 4) == 0) break;
      puVar14 = puVar32 + 2;
    }
    if ((uVar9 & 0x2000) == 0) {
      if (((uVar9 & 0x1000) == 0) || (puVar30 = puVar8, (bVar1 & 1) != 0)) break;
    }
    else {
      bVar36 = (uVar9 & 0x1000) == 0;
      if (bVar36) {
        puVar30 = puVar8;
      }
      if (bVar36 && ((uint)puVar30 & 1) == 0) break;
    }
    puVar14 = puVar32 + 2;
  } while ((uVar9 & 8) == 0);
  puVar14 = puVar32 + 2;
  local_38 = 0;
  local_3c = 1;
  local_40 = (int *)0x0;
  local_28 = (code *)0x0;
  local_2c = (int **)0x60000020;
  local_30 = &DAT_01ce2454;
  local_34 = &local_40;
  iVar10 = FUN_012bb12c(iVar22,&local_34);
  uVar18 = local_3c;
  piVar19 = local_40;
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_44,&DAT_01ce246c,&DAT_01d30334);
  }
  uVar11 = FUN_012b235c(local_3c,local_38);
  FUN_0134bd64(piVar19,uVar18);
  iVar10 = *(int *)(iVar22 + 0x120);
  (*param_4)(&local_64,iVar22);
  uVar24 = local_58;
  piVar19 = local_5c;
  uVar9 = local_64;
  if (iVar10 != 0) {
    uVar11 = uVar11 + 4;
  }
  if (uVar11 <= uVar21) {
    uVar11 = uVar21;
  }
  uVar21 = uVar11;
  if (local_70 != (int *)0x0) {
    local_78 = (undefined *)local_6c;
    piVar34 = local_70;
    do {
      ppiVar12 = (int **)(uint)*(ushort *)((int)piVar34 + 0xe2);
      iVar10 = (int)ppiVar12 << 4;
      ppiVar7 = (int **)0x0;
      do {
        ppiVar28 = ppiVar7;
        if (iVar10 == 0) goto LAB_012acdf0;
        uVar11 = piVar34[(int)ppiVar28 * 4];
        uVar27 = (uint)(uVar9 < uVar11);
        uVar16 = (uint)(uVar9 >= uVar11 && uVar9 != uVar11);
        if (uVar9 == uVar11) {
          uVar27 = piVar34[(int)ppiVar28 * 4 + 3];
          uVar11 = uVar27;
          if (uVar24 < uVar27) {
            uVar11 = uVar24;
          }
          iVar13 = FUN_01bed842(piVar19,piVar34[(int)ppiVar28 * 4 + 2],uVar11);
          uVar16 = 0;
          if (iVar13 == 0) {
            iVar13 = uVar24 - uVar27;
          }
          uVar27 = (uint)(iVar13 < 0);
          if (0 < iVar13) {
            uVar16 = 1;
          }
        }
        iVar10 = iVar10 + -0x10;
        ppiVar7 = (int **)((int)ppiVar28 + 1);
      } while (uVar16 - uVar27 == 1);
      if ((uVar16 - uVar27 & 0xff) == 0) {
        FUN_0134bd64(local_60,piVar19);
        puVar30 = extraout_r1_00;
        goto LAB_012ace54;
      }
      ppiVar12 = ppiVar28;
LAB_012acdf0:
      if (local_78 == (undefined *)0x0) goto LAB_012ace84;
      local_78 = (undefined *)((int)local_78 - 1);
      piVar34 = (int *)piVar34[(int)((int)ppiVar12 + 0x39)];
    } while( true );
  }
  piVar34 = (int *)0x0;
  puVar30 = extraout_r1;
  goto LAB_012ace44;
LAB_012ad534:
  do {
    iVar10 = *(int *)param_2;
    uVar9 = *(uint *)(iVar10 + 0x11c);
    if ((uVar9 & 4) != 0) goto LAB_012ad634;
    if ((uVar9 & 0x2000) == 0) {
      if (((uVar9 & 0x1000) != 0) && (puVar30 = puVar8, (bVar1 & 1) == 0)) goto LAB_012ad574;
    }
    else {
      bVar37 = (uVar9 & 0x1000) == 0;
      if (bVar37) {
        puVar30 = puVar8;
      }
      if (!bVar37 || ((uint)puVar30 & 1) != 0) {
LAB_012ad574:
        if ((uVar9 & 8) == 0) goto LAB_012ad634;
      }
    }
    FUN_012ae0e8(&local_34,iVar22,puVar8,iVar10);
    ppiVar12 = local_2c;
    puVar6 = local_30;
    if (cVar2 != '\0') {
LAB_012ad644:
      FUN_0134bd64(local_34,local_30);
LAB_012ad650:
      uVar9 = 1;
      goto LAB_012ad66c;
    }
    bVar37 = (*(byte *)(iVar10 + 0x11c) & 8) != 0;
    puVar30 = (ushort *)(uint)*(byte *)(iVar10 + 0x11c);
    if (!bVar37) {
      puVar30 = puVar8;
    }
    if (bVar37 || ((uint)puVar30 & 1) != 0) goto LAB_012ad644;
    piVar19 = (int *)(iVar10 + 0x108);
    if (*(int *)(iVar10 + 0x108) == -0x80000000) {
      piVar19 = (int *)&DAT_0041fd68;
    }
    if (*(int *)(iVar10 + 0xfc) != -0x80000000) {
      piVar19 = (int *)(iVar10 + 0xfc);
    }
    iVar10 = thunk_FUN_012b235c(piVar19[1],piVar19[2]);
    iVar13 = FUN_012b235c(puVar6,ppiVar12);
    if (bVar36 && 0.4 < fVar38 / fVar39) {
      FUN_0134bd64(local_34,puVar6);
      puVar30 = puVar14;
      if ((ushort *)(iVar13 + iVar10) <= puVar14) goto LAB_012ad634;
      goto LAB_012ad650;
    }
    FUN_0134bd64(local_34,puVar6);
    puVar30 = extraout_r1_04;
LAB_012ad634:
    param_3 = param_3 + -4;
    param_2 = param_2 + 2;
  } while (param_3 != 0);
  uVar9 = 0;
LAB_012ad66c:
  bVar36 = (bVar1 & 1) != 0;
  iVar10 = 0xfc;
  if (bVar36) {
    iVar10 = 0x108;
  }
  uVar18 = param_1[1];
  iVar13 = iVar22 + 0x2a;
  iVar20 = 0x108;
  if (bVar36) {
    iVar20 = 0xfc;
  }
  iVar25 = local_68;
  if (local_70 == (int *)0x0) {
    iVar25 = 0;
  }
  bVar36 = local_70 != (int *)0x0;
  local_74 = 0;
  piVar34 = local_70;
  piVar19 = (int *)0x0;
  uVar24 = local_6c;
  do {
    if (iVar25 == 0) {
      FUN_012b3a04(&local_70);
      return;
    }
    if (!bVar36) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2ffe0);
    }
    if (piVar19 == (int *)0x0) {
      uVar11 = 0;
      piVar19 = piVar34;
      for (; uVar24 != 0; uVar24 = uVar24 - 1) {
        piVar19 = (int *)piVar19[0x39];
      }
      piVar34 = (int *)0x0;
    }
    else {
      uVar11 = uVar24;
    }
    piVar33 = piVar19;
    if (*(ushort *)((int)piVar19 + 0xe2) <= uVar11) {
      do {
        piVar19 = (int *)piVar33[0x2c];
        if (piVar19 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2fff0);
        }
        uVar11 = (uint)*(ushort *)(piVar33 + 0x38);
        piVar34 = (int *)((int)piVar34 + 1);
        piVar33 = piVar19;
      } while (*(ushort *)((int)piVar19 + 0xe2) <= uVar11);
    }
    if (piVar34 == (int *)0x0) {
      uVar24 = uVar11 + 1;
      piVar33 = piVar19;
    }
    else {
      piVar15 = piVar19 + uVar11 + 0x3a;
      do {
        piVar33 = (int *)*piVar15;
        piVar34 = (int *)((int)piVar34 + -1);
        piVar15 = piVar33 + 0x39;
      } while (piVar34 != (int *)0x0);
      uVar24 = 0;
    }
    if ((local_74 != 0) && (FUN_012b2fd4(uVar18,"\n",1), (uVar9 & (uint)puVar8) != 0)) {
      FUN_012b2fd4(uVar18,"\n",1);
    }
    iVar35 = piVar19[uVar11 + 0x2d];
    FUN_012ae0e8(&local_54,iVar22,puVar8,iVar35);
    FUN_012b2fd4(uVar18,"  ",2);
    local_48 = &local_44;
    local_44 = iVar13;
    if (*(int **)(iVar35 + 0x34) == (int *)&DAT_00110000) {
      if (*(int *)(iVar35 + 0x120) == 0) goto LAB_012ad948;
      FUN_012b2fd4(uVar18,&DAT_0056d06c,4);
      local_48 = &local_44;
      local_3c = *(undefined4 *)(iVar35 + 0x124);
      local_40 = *(int **)(iVar35 + 0x120);
      local_44 = iVar13;
LAB_012ad8fc:
      local_2c = &local_40;
      local_34 = &local_48;
      local_28 = (code *)&LAB_018a13b8;
      local_30 = &DAT_012b59c8;
      FUN_012fa178(uVar18,&DAT_01ce25b4,&DAT_0041fe20,&local_34);
      iVar26 = 2;
    }
    else {
      local_28 = FUN_012fbb84;
      local_2c = &local_40;
      local_30 = &DAT_012b59c8;
      local_34 = &local_48;
      local_40 = *(int **)(iVar35 + 0x34);
      FUN_012fa178(uVar18,&DAT_01ce25b4,&DAT_0041fe2d,&local_34);
      local_48 = &local_44;
      if (*(int **)(iVar35 + 0x120) != (int *)0x0) {
        local_3c = *(undefined4 *)(iVar35 + 0x124);
        local_44 = iVar13;
        local_40 = *(int **)(iVar35 + 0x120);
        FUN_012b2fd4(uVar18,&DAT_00533bc1,2);
        goto LAB_012ad8fc;
      }
LAB_012ad948:
      local_48 = &local_44;
      iVar26 = 6;
      local_44 = iVar13;
    }
    FUN_012ba6b8(&local_34,iVar35,iVar22,2);
    puVar6 = local_30;
    FUN_012b255c(uVar18,local_30,local_2c);
    FUN_0134bd64(local_34,puVar6);
    iVar17 = 0;
    if (uVar9 == 0 && (bVar1 & 1) == 0) {
      puVar23 = *(undefined1 **)(iVar35 + 0x120);
      bVar36 = puVar23 == (undefined1 *)0x0;
      if (bVar36) {
        puVar23 = *(undefined1 **)(iVar35 + 0x34);
      }
      if (bVar36 && puVar23 == &DAT_00110000) {
        local_38 = 0;
        local_40 = (int *)0x0;
        local_28 = (code *)0x0;
        local_3c = 1;
        local_2c = (int **)0x60000020;
        local_30 = &DAT_01ce2454;
        local_34 = &local_40;
        iVar26 = FUN_012bb12c(iVar35,&local_34);
        uVar5 = local_3c;
        piVar19 = local_40;
        if (iVar26 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533383,0x37,&local_44,&DAT_01ce246c,&DAT_01d30334);
        }
        iVar17 = FUN_012b235c(local_3c,local_38);
        FUN_0134bd64(piVar19,uVar5);
        iVar17 = (uVar21 + 2) - iVar17;
      }
      else {
        local_38 = 0;
        local_40 = (int *)0x0;
        local_28 = (code *)0x0;
        local_3c = 1;
        local_2c = (int **)0x60000020;
        local_30 = &DAT_01ce2454;
        local_34 = &local_40;
        iVar17 = FUN_012bb12c(iVar35,&local_34);
        uVar5 = local_3c;
        piVar19 = local_40;
        if (iVar17 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533383,0x37,&local_44,&DAT_01ce246c,&DAT_01d30334);
        }
        iVar17 = FUN_012b235c(local_3c,local_38);
        FUN_0134bd64(piVar19,uVar5);
        iVar17 = ((uVar21 - 4) - iVar17) + iVar26;
      }
    }
    FUN_012aedf0(uVar18,iVar17);
    uVar5 = local_50;
    piVar19 = (int *)(iVar35 + iVar20);
    if (*(int *)(iVar35 + iVar20) == -0x80000000) {
      piVar19 = (int *)&DAT_0041fd68;
    }
    if (*(int *)(iVar35 + iVar10) != -0x80000000) {
      piVar19 = (int *)(iVar35 + iVar10);
    }
    FUN_012aee78(param_1,iVar35,piVar19[1],piVar19[2],local_50,local_4c,uVar9,uVar21);
    local_74 = local_74 + 1;
    iVar25 = iVar25 + -1;
    FUN_0134bd64(local_54,uVar5);
    bVar36 = true;
    piVar34 = (int *)0x0;
    piVar19 = piVar33;
  } while( true );
LAB_012ace84:
  puVar30 = (ushort *)0x0;
  local_a4 = ppiVar12;
LAB_012ace44:
  uVar11 = local_60;
  ppiVar28 = &local_70;
  if (local_60 == 0x80000000) {
    piVar34 = piVar19;
LAB_012ace54:
    piVar34[(int)((int)ppiVar28 + 0x2d)] = iVar22;
  }
  else {
    if (piVar34 == (int *)0x0) {
      local_70 = (int *)FUN_012c1d9c();
      *(undefined2 *)((int)local_70 + 0xe2) = 0;
      local_70[0x2c] = 0;
      local_6c = 0;
      puVar30 = (ushort *)(uint)*(ushort *)((int)local_70 + 0xe2);
      if (&DAT_0000000a < puVar30) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                     &DAT_01d305b8);
      }
      *(ushort *)((int)local_70 + 0xe2) = *(ushort *)((int)local_70 + 0xe2) + 1;
      puVar29 = (uint *)(local_70 + (int)puVar30 * 4);
      *puVar29 = uVar9;
      puVar29[1] = uVar11;
      puVar29[2] = (uint)piVar19;
      puVar29[3] = uVar24;
      local_70[(int)puVar30 + 0x2d] = iVar22;
    }
    else {
      uVar3 = *(ushort *)((int)piVar34 + 0xe2);
      puVar23 = (undefined1 *)(uint)uVar3;
      if (puVar23 < (undefined1 *)0xb) {
        puVar29 = (uint *)(piVar34 + (int)local_a4 * 4);
        if (puVar23 < (undefined1 *)((int)local_a4 + 1)) {
          puVar29[1] = local_60;
          *puVar29 = uVar9;
          puVar29[2] = (uint)piVar19;
          puVar29[3] = uVar24;
        }
        else {
          FUN_01bed864(piVar34 + ((int)local_a4 + 1) * 4,puVar29,
                       ((int)puVar23 - (int)local_a4) * 0x10);
          puVar29[1] = uVar11;
          puVar29[2] = (uint)piVar19;
          piVar34[(int)local_a4 * 4] = uVar9;
          puVar29[3] = uVar24;
          FUN_01bed864(piVar34 + (int)((int)local_a4 + 0x2e),piVar34 + (int)((int)local_a4 + 0x2d),
                       ((int)puVar23 - (int)local_a4) * 4);
          puVar30 = extraout_r1_01;
        }
        piVar34[(int)((int)local_a4 + 0x2d)] = iVar22;
        *(ushort *)((int)piVar34 + 0xe2) = uVar3 + 1;
      }
      else {
        local_bc = (int **)&SUB_00000004;
        bVar36 = false;
        ppiVar12 = local_a4;
        if ((&SUB_00000004 < local_a4) && (local_bc = local_a4, local_a4 != (int **)&DAT_00000005))
        {
          if (local_a4 == (int **)&DAT_00000006) {
            local_bc = (int **)&DAT_00000005;
            ppiVar12 = (int **)0x0;
          }
          else {
            ppiVar12 = (int **)((int)local_a4 + -7);
            local_bc = (int **)&DAT_00000006;
          }
          bVar36 = true;
        }
        local_7c = (int *)FUN_012c1d9c();
        puVar30 = (ushort *)((int)local_7c + 0xe2);
        *puVar30 = 0;
        local_7c[0x2c] = 0;
        uVar27 = ~(uint)local_bc + (uint)*(ushort *)((int)piVar34 + 0xe2);
        local_78 = (undefined *)piVar34[(int)local_bc * 4 + 1];
        local_ac = (int **)piVar34[(int)local_bc * 4 + 2];
        *puVar30 = (ushort)uVar27;
        if (0xb < uVar27) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar27,0xb,&DAT_01d2ff10);
        }
        local_b0 = (int **)piVar34[(int)local_bc * 4];
        piVar33 = piVar34 + 0x2d;
        local_b4 = (code *)piVar34[(int)local_bc * 4 + 3];
        local_a8 = piVar33[(int)local_bc];
        FUN_01bed4e2(local_7c,piVar34 + ((int)local_bc + 1) * 4,uVar27 * 0x10);
        piVar15 = local_7c + 0x2d;
        FUN_01bed4e2(piVar15,piVar33 + (int)((int)local_bc + 1),uVar27 * 4);
        *(short *)((int)piVar34 + 0xe2) = (short)local_bc;
        if (bVar36) {
          piVar31 = local_7c;
        }
        else {
          piVar31 = piVar34;
          puVar30 = (ushort *)((int)piVar34 + 0xe2);
        }
        uVar3 = *(ushort *)((int)piVar31 + 0xe2);
        puVar29 = (uint *)(piVar31 + (int)ppiVar12 * 4);
        if (ppiVar12 < (int **)(uint)uVar3) {
          iVar10 = (int)(uint)uVar3 - (int)ppiVar12;
          FUN_01bed864(piVar31 + ((int)ppiVar12 + 1) * 4,puVar29,iVar10 * 0x10);
          puVar29[1] = uVar11;
          puVar29[2] = (uint)piVar19;
          puVar29[3] = uVar24;
          if (bVar36) {
            piVar33 = piVar15;
          }
          piVar31[(int)ppiVar12 * 4] = uVar9;
          FUN_01bed864(piVar33 + (int)((int)ppiVar12 + 1),piVar33 + (int)ppiVar12,iVar10 * 4);
        }
        else {
          puVar29[1] = uVar11;
          puVar29[2] = (uint)piVar19;
          puVar29[3] = uVar24;
          if (bVar36) {
            piVar33 = piVar15;
          }
          *puVar29 = uVar9;
        }
        piVar33[(int)ppiVar12] = iVar22;
        *puVar30 = uVar3 + 1;
        if (local_78 != (undefined *)0x80000000) {
          piVar19 = (int *)piVar34[0x2c];
          if (piVar19 == (int *)0x0) {
            local_bc = (int **)0x0;
          }
          else {
            local_bc = (int **)0x0;
            do {
              uVar3 = *(ushort *)((int)piVar19 + 0xe2);
              uVar9 = (uint)*(ushort *)(piVar34 + 0x38);
              local_28 = local_b4;
              local_34 = local_b0;
              local_30 = local_78;
              local_2c = local_ac;
              if (uVar3 < 0xb) {
                FUN_012b0ea4(piVar19,uVar9,&local_34,local_a8,local_7c);
                puVar30 = extraout_r1_03;
                goto LAB_012ad480;
              }
              ppiVar12 = &local_40;
              uVar24 = 4;
              if (4 < uVar9) {
                if (uVar9 == 5) {
                  uVar24 = 5;
                }
                else {
                  ppiVar12 = &local_54;
                  if (uVar9 == 6) {
                    uVar9 = 0;
                    uVar24 = 5;
                  }
                  else {
                    uVar9 = uVar9 - 7;
                    uVar24 = 6;
                  }
                }
              }
              piVar34 = (int *)FUN_012c1d7c();
              *(undefined2 *)((int)piVar34 + 0xe2) = 0;
              piVar34[0x2c] = 0;
              local_78 = (undefined *)piVar19[uVar24 * 4 + 1];
              uVar11 = ~uVar24 + (uint)*(ushort *)((int)piVar19 + 0xe2);
              local_ac = (int **)piVar19[uVar24 * 4 + 2];
              *(short *)((int)piVar34 + 0xe2) = (short)uVar11;
              if (0xb < uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(0,uVar11,0xb,&DAT_01d2ff10);
              }
              local_b0 = (int **)piVar19[uVar24 * 4];
              local_b4 = (code *)piVar19[uVar24 * 4 + 3];
              iVar22 = piVar19[uVar24 + 0x2d];
              FUN_01bed4e2(piVar34,piVar19 + (uVar24 + 1) * 4,uVar11 * 0x10);
              FUN_01bed4e2(piVar34 + 0x2d,piVar19 + uVar24 + 0x2e,uVar11 * 4);
              *(short *)((int)piVar19 + 0xe2) = (short)uVar24;
              uVar11 = (uint)*(ushort *)((int)piVar34 + 0xe2);
              iVar10 = uVar11 + 1;
              if (0xb < uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(0,iVar10,0xc,&DAT_01d2ff20);
              }
              if (uVar3 - uVar24 != iVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
              }
              local_bc = (int **)((int)local_bc + 1);
              FUN_01bed4e2(piVar34 + 0x39,piVar19 + uVar24 + 0x3a,iVar10 * 4);
              uVar24 = 0;
              do {
                iVar10 = (piVar34 + 0x39)[uVar24];
                *(short *)(iVar10 + 0xe0) = (short)uVar24;
                *(int **)(iVar10 + 0xb0) = piVar34;
                if (uVar11 <= uVar24) break;
                uVar24 = uVar24 + 1;
              } while (uVar24 <= uVar11);
              local_54 = piVar34;
              local_40 = piVar19;
              FUN_012b0ea4(*ppiVar12,uVar9,&local_34,local_a8,local_7c);
              puVar30 = extraout_r1_02;
              if (local_78 == (undefined *)0x80000000) goto LAB_012ad480;
              local_7c = local_54;
              piVar19 = (int *)local_40[0x2c];
              piVar34 = local_40;
              local_a8 = iVar22;
            } while (piVar19 != (int *)0x0);
          }
          uVar9 = local_6c;
          piVar19 = local_70;
          if (local_70 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d2fee0);
          }
          iVar22 = FUN_012c1d7c();
          *(undefined4 *)(iVar22 + 0xe4) = piVar19;
          *(undefined2 *)(iVar22 + 0xe2) = 0;
          *(undefined4 *)(iVar22 + 0xb0) = 0;
          if (0xfffffffe < uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d305e8);
          }
          *(undefined2 *)(piVar19 + 0x38) = 0;
          piVar19[0x2c] = iVar22;
          if (local_bc != (int **)uVar9) {
            uVar18 = 0x30;
            goto LAB_012adcac;
          }
          puVar30 = (ushort *)(uint)*(ushort *)(iVar22 + 0xe2);
          if (&DAT_0000000a < puVar30) {
            uVar18 = 0x20;
            local_a0 = "assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements";
            local_9c = &DAT_01d305d8;
LAB_012adcac:
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(local_a0,uVar18,local_9c);
          }
          uVar4 = (undefined2)((int)puVar30 + 1);
          *(undefined2 *)(iVar22 + 0xe2) = uVar4;
          piVar19 = (int *)(iVar22 + (int)puVar30 * 0x10);
          *piVar19 = (int)local_b0;
          piVar19[1] = (int)local_78;
          piVar19[2] = (int)local_ac;
          piVar19[3] = (int)local_b4;
          ((undefined4 *)(iVar22 + 0xe4))[(int)puVar30 + 1] = local_7c;
          *(int *)(iVar22 + (int)puVar30 * 4 + 0xb4) = local_a8;
          *(undefined2 *)(local_7c + 0x38) = uVar4;
          local_7c[0x2c] = iVar22;
        }
      }
    }
LAB_012ad480:
    local_68 = local_68 + 1;
  }
  goto LAB_012acc2c;
}

