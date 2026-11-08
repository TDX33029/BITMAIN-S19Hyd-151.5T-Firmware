// FUN_012abd70 @ 012abd70 size=3204 calls_out=20 calls_in=1
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements | assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements | assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

/* WARNING: Removing unreachable block (ram,0x012ac930) */

void FUN_012abd70(uint *param_1,int *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  uint *puVar8;
  uint **ppuVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint extraout_r1;
  undefined4 uVar15;
  int extraout_r2;
  uint uVar16;
  uint **ppuVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  ushort *puVar22;
  uint *puVar23;
  uint *puVar24;
  undefined4 uVar25;
  uint *puVar26;
  int *piVar27;
  int iVar28;
  uint *puVar29;
  uint uVar30;
  bool bVar31;
  uint in_fpscr;
  float fVar32;
  float fVar33;
  code *local_cc;
  int **local_c8;
  uint local_c4;
  uint **local_c0;
  uint *local_bc;
  char *local_ac;
  undefined *local_a8;
  uint *local_a0;
  uint **local_9c;
  uint local_94;
  uint local_90;
  uint local_88;
  int *local_80;
  int local_7c;
  uint *local_78;
  uint local_74;
  int local_70;
  uint *local_6c;
  int local_68;
  uint *local_64;
  int local_60;
  int **local_5c;
  uint *local_58;
  uint **local_54;
  code *local_50;
  int **local_4c;
  undefined4 local_48;
  uint *local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint *local_30;
  uint local_2c;
  uint *local_28;
  
  puVar10 = (uint *)(param_3 * 0x16c);
  local_70 = 0;
  local_78 = (uint *)0x0;
  uVar11 = param_1[3];
  local_80 = &local_7c;
  local_7c = uVar11 + 0x2a;
  local_88 = 2;
  local_a8 = &DAT_01d305c8;
  local_ac = &DAT_00533a41;
  piVar14 = param_2;
LAB_012abddc:
  while (piVar27 = piVar14, piVar27 != param_2 + param_3 * 0x5b) {
    if ((*(byte *)((int)piVar27 + 0x146) & 0x80) != 0) goto LAB_012ac030;
    piVar14 = piVar27 + 0x5b;
    if ((*(byte *)((int)piVar27 + 0x14a) & 0x80) == 0) {
      local_2c = 0;
      local_30 = (uint *)&DAT_00000001;
      local_34 = 0;
      local_68 = piVar27[0x48];
      local_6c = (uint *)piVar27[0x47];
      local_50 = (code *)&LAB_018a13b8;
      local_54 = &local_6c;
      local_58 = (uint *)&DAT_012b59c8;
      local_5c = &local_80;
      FUN_012fa178(&local_34,&DAT_01ce25b4,&DAT_004200d0,&local_5c);
      if ((uint *)piVar27[7] != (uint *)&DAT_00110000) {
        local_50 = FUN_012fbb84;
        local_54 = &local_64;
        local_58 = (uint *)&DAT_012b59c8;
        local_5c = &local_80;
        local_64 = (uint *)piVar27[7];
        FUN_012fa178(&local_34,&DAT_01ce25b4,&DAT_0041fb37,&local_5c);
      }
      if ((uint *)piVar27[0x49] != (uint *)0x0) {
        local_60 = piVar27[0x4a];
        local_50 = (code *)&LAB_018a13b8;
        local_54 = &local_64;
        local_58 = (uint *)&DAT_012b59c8;
        local_5c = &local_80;
        local_64 = (uint *)piVar27[0x49];
        FUN_012fa178(&local_34,&DAT_01ce25b4,&DAT_0056a3e8,&local_5c);
      }
      uVar30 = local_2c;
      puVar26 = local_30;
      uVar4 = thunk_FUN_012b235c(local_30,local_2c);
      uVar20 = local_34;
      uVar12 = piVar27[1];
      if (*piVar27 == 0) {
        uVar12 = 999;
      }
      if (local_78 != (uint *)0x0) {
        local_a0 = (uint *)local_74;
        puVar19 = local_78;
        do {
          uVar2 = *(ushort *)((int)puVar19 + 0xe2);
          iVar21 = (int)(uint)uVar2 << 4;
          ppuVar9 = (uint **)0x0;
          do {
            ppuVar17 = ppuVar9;
            local_9c = (uint **)(uint)uVar2;
            if (iVar21 == 0) goto LAB_012ac000;
            uVar5 = puVar19[(int)ppuVar17 * 4];
            uVar16 = (uint)(uVar12 < uVar5);
            uVar13 = (uint)(uVar12 >= uVar5 && uVar12 != uVar5);
            if (uVar12 == uVar5) {
              uVar16 = puVar19[(int)ppuVar17 * 4 + 3];
              uVar5 = uVar16;
              if (uVar30 < uVar16) {
                uVar5 = uVar30;
              }
              iVar6 = FUN_01bed842(puVar26,puVar19[(int)ppuVar17 * 4 + 2],uVar5);
              uVar13 = 0;
              if (iVar6 == 0) {
                iVar6 = uVar30 - uVar16;
              }
              uVar16 = (uint)(iVar6 < 0);
              if (0 < iVar6) {
                uVar13 = 1;
              }
            }
            iVar21 = iVar21 + -0x10;
            ppuVar9 = (uint **)((int)ppuVar17 + 1);
          } while (uVar13 - uVar16 == 1);
          if ((uVar13 - uVar16 & 0xff) == 0) {
            FUN_0134bd64(uVar20,puVar26);
            goto LAB_012ac064;
          }
          local_9c = ppuVar17;
LAB_012ac000:
          if (local_a0 == (uint *)0x0) goto LAB_012ac0d4;
          local_a0 = (uint *)((int)local_a0 - 1);
          puVar19 = (uint *)puVar19[(int)((int)local_9c + 0x39)];
        } while( true );
      }
      if (local_34 == 0x80000000) goto LAB_012ac05c;
      local_78 = (uint *)FUN_012c1d9c();
      *(undefined2 *)((int)local_78 + 0xe2) = 0;
      local_78[0x2c] = 0;
      local_74 = 0;
      local_78[0x2d] = (uint)piVar27;
      *local_78 = uVar12;
      local_78[1] = uVar20;
      local_78[2] = (uint)puVar26;
      local_78[3] = uVar30;
      *(undefined2 *)((int)local_78 + 0xe2) = 1;
      goto LAB_012ac0ac;
    }
  }
  iVar21 = 0;
  puVar26 = puVar10;
  if (param_3 != 0) {
    puVar19 = (uint *)0x0;
    uVar30 = *param_1;
    uVar4 = local_88 + 4;
    uVar20 = param_1[5];
    fVar33 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    fVar32 = (float)VectorUnsignedToFloat(uVar30,(byte)(in_fpscr >> 0x16) & 3);
    do {
      puVar18 = (undefined1 *)((int)param_2 + (int)puVar19);
      bVar1 = puVar18[0x146];
      bVar31 = (bVar1 & 0x80) == 0;
      if (bVar31) {
        bVar1 = puVar18[0x14a];
      }
      if (bVar31 && (bVar1 & 0x80) == 0) {
        FUN_012af588(&local_5c,uVar11,puVar18);
        ppuVar9 = local_54;
        puVar26 = local_58;
        if ((char)uVar20 != '\0') {
          FUN_0134bd64(local_5c,local_58);
LAB_012ac7a4:
          iVar21 = 1;
          goto LAB_012ac7a8;
        }
        piVar14 = (int *)(puVar18 + 0xb0);
        if (*(int *)(puVar18 + 0xb0) == -0x80000000) {
          piVar14 = (int *)&DAT_0041fd68;
        }
        if (*(int *)(puVar18 + 0xa4) != -0x80000000) {
          piVar14 = (int *)(puVar18 + 0xa4);
        }
        iVar21 = thunk_FUN_012b235c(piVar14[1],piVar14[2]);
        iVar6 = FUN_012b235c(puVar26,ppuVar9);
        if (uVar4 <= uVar30 && 0.4 < fVar33 / fVar32) {
          FUN_0134bd64(local_5c,puVar26);
          puVar26 = puVar10;
          if (uVar30 - uVar4 < (uint)(iVar6 + iVar21)) goto LAB_012ac7a4;
        }
        else {
          FUN_0134bd64(local_5c,puVar26);
        }
      }
      puVar19 = puVar19 + 0x5b;
    } while (puVar10 != puVar19);
    iVar21 = 0;
    puVar26 = puVar10;
  }
LAB_012ac7a8:
  local_40 = local_74;
  local_50 = (code *)local_74;
  local_3c = local_70;
  if (local_78 == (uint *)0x0) {
    local_3c = 0;
  }
  local_44 = local_78;
  local_54 = (uint **)local_78;
  local_5c = (int **)(uint)(local_78 != (uint *)0x0);
  uVar20 = param_1[1];
  local_38 = 0;
  local_48 = 0;
  local_58 = (uint *)0x0;
  local_4c = local_5c;
  while( true ) {
    FUN_012b324c(&local_34,&local_5c);
    iVar6 = extraout_r2;
    uVar30 = extraout_r1;
    if (local_34 != 0) {
      iVar6 = local_34 + local_2c * 0x10;
      puVar26 = *(uint **)(iVar6 + 4);
      uVar30 = local_2c;
    }
    if (local_34 == 0 || puVar26 == (uint *)&DAT_80000000) break;
    uVar15 = *(undefined4 *)(iVar6 + 8);
    uVar25 = *(undefined4 *)(iVar6 + 0xc);
    iVar28 = *(int *)(local_34 + uVar30 * 4 + 0xb4);
    iVar6 = local_38 + 1;
    bVar31 = local_38 != 0;
    local_38 = iVar6;
    if (bVar31) {
      FUN_012b2fd4(uVar20,"\n",1);
    }
    FUN_012af588(&local_34,uVar11,iVar28);
    piVar14 = (int *)(iVar28 + 0xb0);
    if (*(int *)(iVar28 + 0xb0) == -0x80000000) {
      piVar14 = (int *)&DAT_0041fd68;
    }
    if (*(int *)(iVar28 + 0xa4) != -0x80000000) {
      piVar14 = (int *)(iVar28 + 0xa4);
    }
    FUN_012b2fd4(uVar20,"  ",2);
    FUN_012b255c(uVar20,uVar15,uVar25);
    if (iVar21 == 0) {
      iVar6 = thunk_FUN_012b235c(uVar15,uVar25);
      FUN_012aedf0(uVar20,(local_88 + 2) - iVar6);
    }
    FUN_0134bd64(puVar26,uVar15);
    puVar26 = local_30;
    FUN_012aee78(param_1,0,piVar14[1],piVar14[2],local_30,local_2c,iVar21,local_88);
    FUN_0134bd64(local_34,puVar26);
  }
  FUN_012b3948(&local_5c);
  return;
LAB_012ac030:
  piVar14 = piVar27 + 0x5b;
  goto LAB_012abddc;
LAB_012ac0d4:
  if (uVar20 == 0x80000000) {
LAB_012ac05c:
    ppuVar17 = &local_78;
    puVar19 = puVar26;
LAB_012ac064:
    puVar19[(int)((int)ppuVar17 + 0x2d)] = (uint)piVar27;
  }
  else {
    puVar7 = (ushort *)((int)puVar19 + 0xe2);
    uVar2 = *puVar7;
    puVar18 = (undefined1 *)(uint)uVar2;
    if (puVar18 < (undefined1 *)0xb) {
      puVar24 = puVar19 + (int)local_9c * 4;
      if (puVar18 < (undefined1 *)((int)local_9c + 1)) {
        *puVar24 = uVar12;
        puVar24[1] = uVar20;
        puVar24[3] = uVar30;
        puVar24[2] = (uint)puVar26;
      }
      else {
        FUN_01bed864(puVar19 + ((int)local_9c + 1) * 4,puVar24,((int)puVar18 - (int)local_9c) * 0x10
                    );
        puVar19[(int)local_9c * 4] = uVar12;
        puVar24[1] = uVar20;
        puVar24[3] = uVar30;
        puVar24[2] = (uint)puVar26;
        FUN_01bed864(puVar19 + (int)((int)local_9c + 0x2e),puVar19 + (int)((int)local_9c + 0x2d),
                     ((int)puVar18 - (int)local_9c) * 4);
      }
      puVar19[(int)((int)local_9c + 0x2d)] = (uint)piVar27;
      *(ushort *)((int)puVar19 + 0xe2) = uVar2 + 1;
    }
    else {
      uVar5 = 4;
      bVar31 = false;
      if (&SUB_00000004 < local_9c) {
        if (local_9c == (uint **)&DAT_00000005) {
          uVar5 = 5;
        }
        else {
          if (local_9c == (uint **)&DAT_00000006) {
            uVar5 = 5;
            local_9c = (uint **)0x0;
          }
          else {
            local_9c = (uint **)((int)local_9c + -7);
            uVar5 = 6;
          }
          bVar31 = true;
        }
      }
      local_bc = (uint *)FUN_012c1d9c();
      puVar22 = (ushort *)((int)local_bc + 0xe2);
      *puVar22 = 0;
      local_bc[0x2c] = 0;
      local_a0 = (uint *)puVar19[uVar5 * 4 + 1];
      uVar16 = ~uVar5 + (uint)*(ushort *)((int)puVar19 + 0xe2);
      local_c0 = (uint **)puVar19[uVar5 * 4 + 2];
      *puVar22 = (ushort)uVar16;
      if (0xb < uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar16,0xb,&DAT_01d2ff10);
      }
      local_c8 = (int **)puVar19[uVar5 * 4];
      puVar24 = puVar19 + 0x2d;
      local_cc = (code *)puVar19[uVar5 * 4 + 3];
      local_c4 = puVar24[uVar5];
      FUN_01bed4e2(local_bc,puVar19 + (uVar5 + 1) * 4,uVar16 * 0x10);
      puVar8 = local_bc + 0x2d;
      FUN_01bed4e2(puVar8,puVar24 + uVar5 + 1,uVar16 * 4);
      *(short *)((int)puVar19 + 0xe2) = (short)uVar5;
      if (bVar31) {
        puVar23 = local_bc;
        puVar7 = puVar22;
      }
      else {
        puVar23 = puVar19;
      }
      uVar2 = *(ushort *)((int)puVar23 + 0xe2);
      puVar29 = puVar23 + (int)local_9c * 4;
      if (local_9c < (uint **)(uint)uVar2) {
        iVar21 = (int)(uint)uVar2 - (int)local_9c;
        FUN_01bed864(puVar23 + ((int)local_9c + 1) * 4,puVar29,iVar21 * 0x10);
        puVar23[(int)local_9c * 4] = uVar12;
        puVar29[1] = uVar20;
        puVar29[2] = (uint)puVar26;
        puVar29[3] = uVar30;
        if (bVar31) {
          puVar24 = puVar8;
        }
        FUN_01bed864(puVar24 + (int)((int)local_9c + 1),puVar24 + (int)local_9c,iVar21 * 4);
      }
      else {
        *puVar29 = uVar12;
        puVar29[1] = uVar20;
        puVar29[2] = (uint)puVar26;
        puVar29[3] = uVar30;
        if (bVar31) {
          puVar24 = puVar8;
        }
      }
      puVar24[(int)local_9c] = (uint)piVar27;
      *puVar7 = uVar2 + 1;
      if (local_a0 != (uint *)&DAT_80000000) {
        puVar26 = (uint *)puVar19[0x2c];
        if (puVar26 == (uint *)0x0) {
          local_90 = 0;
        }
        else {
          local_90 = 0;
          local_94 = local_c4;
          do {
            local_50 = local_cc;
            local_5c = local_c8;
            uVar2 = *(ushort *)((int)puVar26 + 0xe2);
            uVar20 = (uint)(ushort)puVar19[0x38];
            local_58 = local_a0;
            local_54 = local_c0;
            if (uVar2 < 0xb) {
              FUN_012b0cec(puVar26,uVar20,&local_5c,local_94,local_bc);
              goto LAB_012ac0ac;
            }
            ppuVar9 = &local_64;
            uVar30 = 4;
            if (4 < uVar20) {
              if (uVar20 == 5) {
                uVar30 = 5;
              }
              else if (uVar20 == 6) {
                ppuVar9 = &local_28;
                uVar20 = 0;
                uVar30 = 5;
              }
              else {
                uVar20 = uVar20 - 7;
                ppuVar9 = &local_28;
                uVar30 = 6;
              }
            }
            puVar19 = (uint *)FUN_012c1d7c();
            *(undefined2 *)((int)puVar19 + 0xe2) = 0;
            puVar19[0x2c] = 0;
            local_a0 = (uint *)puVar26[uVar30 * 4 + 1];
            uVar12 = ~uVar30 + (uint)*(ushort *)((int)puVar26 + 0xe2);
            local_c0 = (uint **)puVar26[uVar30 * 4 + 2];
            *(short *)((int)puVar19 + 0xe2) = (short)uVar12;
            if (0xb < uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,uVar12,0xb,&DAT_01d2ff10);
            }
            local_c8 = (int **)puVar26[uVar30 * 4];
            local_cc = (code *)puVar26[uVar30 * 4 + 3];
            local_c4 = puVar26[uVar30 + 0x2d];
            FUN_01bed4e2(puVar19,puVar26 + (uVar30 + 1) * 4,uVar12 * 0x10);
            FUN_01bed4e2(puVar19 + 0x2d,puVar26 + uVar30 + 0x2e,uVar12 * 4);
            *(short *)((int)puVar26 + 0xe2) = (short)uVar30;
            uVar12 = (uint)*(ushort *)((int)puVar19 + 0xe2);
            iVar21 = uVar12 + 1;
            if (0xb < uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,iVar21,0xc,&DAT_01d2ff20);
            }
            if (uVar2 - uVar30 != iVar21) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
            }
            local_90 = local_90 + 1;
            FUN_01bed4e2(puVar19 + 0x39,puVar26 + uVar30 + 0x3a,iVar21 * 4);
            uVar30 = 0;
            do {
              uVar5 = (puVar19 + 0x39)[uVar30];
              *(short *)(uVar5 + 0xe0) = (short)uVar30;
              *(uint **)(uVar5 + 0xb0) = puVar19;
              if (uVar12 <= uVar30) break;
              uVar30 = uVar30 + 1;
            } while (uVar30 <= uVar12);
            local_64 = puVar26;
            local_28 = puVar19;
            FUN_012b0cec(*ppuVar9,uVar20,&local_5c,local_94,local_bc);
            if (local_a0 == (uint *)&DAT_80000000) goto LAB_012ac0ac;
            local_bc = local_28;
            puVar26 = (uint *)local_64[0x2c];
            puVar19 = local_64;
            local_94 = local_c4;
          } while (puVar26 != (uint *)0x0);
        }
        uVar20 = local_74;
        puVar26 = local_78;
        if (local_78 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2fee0);
        }
        puVar19 = (uint *)FUN_012c1d7c();
        puVar19[0x39] = (uint)puVar26;
        *(undefined2 *)((int)puVar19 + 0xe2) = 0;
        puVar19[0x2c] = 0;
        if (0xfffffffe < uVar20) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d305e8);
        }
        *(undefined2 *)(puVar26 + 0x38) = 0;
        puVar26[0x2c] = (uint)puVar19;
        local_78 = puVar19;
        local_74 = uVar20 + 1;
        if (local_90 != uVar20) {
          uVar15 = 0x30;
LAB_012aca04:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(local_ac,uVar15,local_a8);
        }
        uVar30 = (uint)*(ushort *)((int)puVar19 + 0xe2);
        if (10 < uVar30) {
          uVar15 = 0x20;
          local_ac = "assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements";
          local_a8 = &DAT_01d305d8;
          goto LAB_012aca04;
        }
        uVar3 = (undefined2)(uVar30 + 1);
        *(undefined2 *)((int)puVar19 + 0xe2) = uVar3;
        puVar26 = puVar19 + uVar30 * 4;
        *puVar26 = (uint)local_c8;
        puVar26[1] = (uint)local_a0;
        puVar26[2] = (uint)local_c0;
        puVar26[3] = (uint)local_cc;
        (puVar19 + 0x39)[uVar30 + 1] = (uint)local_bc;
        puVar19[uVar30 + 0x2d] = local_c4;
        *(undefined2 *)(local_bc + 0x38) = uVar3;
        local_bc[0x2c] = (uint)puVar19;
      }
    }
LAB_012ac0ac:
    local_70 = local_70 + 1;
  }
  if (local_88 < uVar4) {
    local_88 = uVar4;
  }
  goto LAB_012abddc;
}

