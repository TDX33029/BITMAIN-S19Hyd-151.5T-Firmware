// FUN_00f89844 @ 00f89844 size=3656 calls_out=15 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_00f89844(int *param_1,int param_2,char *param_3)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint ***pppuVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint **ppuVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  undefined4 *puVar13;
  uint *extraout_r1;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  uint *extraout_r2;
  uint *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  int *piVar23;
  uint uVar24;
  uint unaff_r5;
  uint uVar25;
  int *piVar26;
  int *piVar27;
  int iVar28;
  undefined4 uVar29;
  uint uVar30;
  uint **ppuVar31;
  uint *puVar32;
  uint uVar33;
  uint **ppuVar34;
  bool bVar35;
  bool bVar36;
  undefined *local_c8;
  undefined *local_c4;
  uint local_b0;
  uint local_a8;
  uint *local_94;
  uint local_90;
  undefined4 *local_8c;
  uint local_88;
  int local_84;
  uint **local_80;
  int *local_7c;
  uint *puStack_78;
  uint uStack_74;
  uint **local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  uint local_64;
  int local_60;
  uint *local_5c;
  uint **local_58;
  uint *local_54;
  uint ***local_50;
  undefined4 *local_4c;
  int local_48;
  undefined1 local_44;
  char local_43;
  uint **local_40;
  int *local_3c;
  uint *local_38;
  uint **local_30;
  int *piStack_2c;
  uint *puStack_28;
  
  piVar26 = *(int **)(param_2 + 0x60);
  uVar17 = param_1[3];
  local_94 = &local_90;
  local_84 = 0;
  local_8c = (undefined4 *)0x0;
  local_90 = uVar17;
  if (*(int *)(param_2 + 100) == 0) {
    puVar20 = (undefined4 *)0x0;
    iVar12 = 0;
LAB_00f8a1a8:
    ppuVar9 = (uint **)*param_1;
    piVar26 = (int *)param_1[1];
    if (puVar20 == (undefined4 *)0x0) {
      iVar12 = 0;
    }
    iVar10 = param_1[4];
    cVar2 = *(char *)((int)param_1 + 0x15);
    local_7c = (int *)0x0;
    local_80 = (uint **)(uint)(puVar20 != (undefined4 *)0x0);
    local_6c = 0;
    iVar28 = param_1[5];
    puStack_78 = puVar20;
    uStack_74 = unaff_r5;
    local_70 = local_80;
    local_68 = puVar20;
    local_64 = unaff_r5;
    local_60 = iVar12;
    do {
      FUN_013cda04(&local_58,&local_80);
      puVar19 = extraout_r2;
      pppuVar5 = (uint ***)extraout_r1;
      if (local_58 != (uint **)0x0) {
        puVar19 = local_58[(int)local_50 * 3 + 2];
        pppuVar5 = local_50;
      }
      if (local_58 == (uint **)0x0 || puVar19 == (uint *)0x0) {
        do {
          FUN_013cda04(&local_58,&local_80);
        } while (local_58 != (uint **)0x0);
        return;
      }
      puVar19 = local_58[(int)pppuVar5 + 0x22];
      if (*param_3 == '\0') {
        iVar12 = piVar26[2];
        if ((uint)(*piVar26 - iVar12) < 2) {
          FUN_00f991dc(piVar26,iVar12,2,1,1);
          iVar12 = piVar26[2];
        }
        piVar26[2] = iVar12 + 2;
        *(undefined2 *)(piVar26[1] + iVar12) = 0xa0a;
      }
      *param_3 = '\0';
      if (puVar19[0x3e] == 0x80000000) {
        iVar14 = 0x9c;
        iVar12 = 0xa0;
        if (puVar19[0x26] == 0x80000000) {
          iVar12 = 0x120;
          iVar14 = 0x11c;
        }
      }
      else {
        iVar12 = 0x100;
        iVar14 = 0xfc;
      }
      local_3c = *(int **)((int)puVar19 + iVar12);
      local_40 = *(uint ***)((int)puVar19 + iVar14);
      local_5c = puVar19 + 0x2c;
      if (puVar19[0x2c] == 0x80000000) {
        local_5c = (uint *)"";
      }
      if (puVar19[0x29] != 0x80000000) {
        local_5c = puVar19 + 0x29;
      }
      local_4c = &DAT_0157d360;
      local_50 = &local_40;
      local_54 = (uint *)&DAT_00fa02fc;
      local_58 = &local_94;
      FUN_00fa948c(piVar26,&DAT_0188042c,&DAT_0035d879,&local_58);
      if (local_5c[2] != 0) {
        local_58 = &local_5c;
        local_54 = (uint *)&LAB_008a48d0;
        FUN_00fa948c(piVar26,&DAT_0188042c,&DAT_00584fe4,&local_58);
      }
      uVar24 = puVar19[0x12];
      uVar30 = puVar19[0x13] * 0x134 + uVar24;
      for (iVar12 = puVar19[0x13] * 0x134; iVar12 != 0; iVar12 = iVar12 + -0x134) {
        uVar15 = *(uint *)(uVar24 + 0x11c);
        if ((uVar15 & 4) == 0) {
          if ((uVar15 & 0x2000) == 0) {
            if (((uVar15 & 0x1000) != 0) && (cVar2 == '\0')) {
LAB_00f8a3c0:
              if ((uVar15 & 10) == 8) goto LAB_00f8a3cc;
              goto LAB_00f8a37c;
            }
          }
          else if ((uVar15 & 0x1000) != 0 || cVar2 != '\0') goto LAB_00f8a3c0;
          if ((uVar15 & 2) == 0) {
LAB_00f8a3cc:
            puVar11 = (uint *)thunk_FUN_016d4a50(0x10);
            if (puVar11 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(4,0x10);
            }
            ppuVar34 = (uint **)0x1;
            *puVar11 = uVar24;
            local_58 = (uint **)0x4;
            local_54 = puVar11;
            do {
              puVar32 = local_54;
              ppuVar31 = local_58;
              uVar15 = uVar24 + 0x134;
              do {
                while( true ) {
                  do {
                    uVar24 = uVar15;
                    local_50 = (uint ***)ppuVar34;
                    if (uVar24 == uVar30) {
                      iVar12 = piVar26[2];
                      if (*piVar26 == iVar12) {
                        FUN_00f991dc(piVar26,iVar12,1,1,1);
                        iVar12 = piVar26[2];
                      }
                      *(undefined1 *)(piVar26[1] + iVar12) = 10;
                      piVar26[2] = iVar12 + 1;
                      goto LAB_00f8a4dc;
                    }
                    uVar16 = *(uint *)(uVar24 + 0x11c);
                    uVar15 = uVar24 + 0x134;
                  } while ((uVar16 & 4) != 0);
                  if ((uVar16 & 0x2000) != 0) break;
                  if (((uVar16 & 0x1000) != 0) && (cVar2 == '\0')) goto LAB_00f8a448;
LAB_00f8a3fc:
                  if ((uVar16 & 2) == 0) goto LAB_00f8a454;
                }
                if ((uVar16 & 0x1000) == 0 && cVar2 == '\0') goto LAB_00f8a3fc;
LAB_00f8a448:
              } while ((uVar16 & 10) != 8);
LAB_00f8a454:
              if (ppuVar34 == local_58) {
                FUN_00f991dc(&local_58,ppuVar34,1,4,4);
                puVar11 = local_54;
              }
              puVar11[(int)ppuVar34] = uVar24;
              ppuVar34 = (uint **)((int)ppuVar34 + 1);
            } while( true );
          }
        }
LAB_00f8a37c:
        uVar24 = uVar24 + 0x134;
      }
      ppuVar31 = (uint **)0x0;
      puVar32 = (uint *)&DAT_00000004;
      ppuVar34 = (uint **)0x0;
LAB_00f8a4dc:
      local_58 = ppuVar9;
      local_54 = (uint *)piVar26;
      local_50 = (uint ***)puVar19;
      local_4c = (undefined4 *)uVar17;
      local_48 = iVar10;
      local_44 = (char)iVar28;
      local_43 = cVar2;
      FUN_00f845fc(&local_58,puVar32,ppuVar34,FUN_00f84398);
      bVar1 = *(byte *)((int)puVar19 + 0x145);
      bVar35 = (bVar1 & 0x80) == 0;
      if (bVar35) {
        bVar1 = *(byte *)((int)puVar19 + 0x149);
      }
      if (!bVar35 || (bVar1 & 0x80) != 0) {
        FUN_00f89844(&local_58,puVar19,param_3);
      }
      if (ppuVar31 != (uint **)0x0) {
        thunk_FUN_016d3fb4(puVar32);
      }
    } while( true );
  }
  piVar27 = piVar26 + *(int *)(param_2 + 100) * 0x5b;
  puVar20 = (undefined4 *)0x0;
  iVar12 = 0;
LAB_00f898a0:
  local_c4 = &DAT_018ac46c;
  local_c8 = &DAT_00413115;
  piVar23 = piVar26;
  while( true ) {
    bVar1 = *(byte *)((int)piVar23 + 0x146);
    piVar26 = piVar23 + 0x5b;
    bVar35 = (bVar1 & 0x80) == 0;
    if (bVar35) {
      bVar1 = *(byte *)((int)piVar23 + 0x14a);
    }
    if (bVar35 && (bVar1 & 0x80) == 0) break;
    piVar23 = piVar26;
    if (piVar26 == piVar27) goto LAB_00f8a1a8;
  }
  uVar24 = 999;
  uVar30 = piVar23[0x48];
  if (*piVar23 != 0) {
    uVar24 = piVar23[1];
  }
  uVar15 = piVar23[0x47];
  if (puVar20 != (undefined4 *)0x0) {
    puVar21 = puVar20;
    local_a8 = unaff_r5;
    do {
      uVar3 = *(ushort *)((int)puVar21 + 0xb6);
      puVar6 = puVar21 + 2;
      iVar28 = (uint)uVar3 * 0xc;
      uVar16 = 0xffffffff;
      do {
        uVar33 = uVar16;
        if (iVar28 == 0) {
          uVar16 = (uint)uVar3;
          goto LAB_00f899c4;
        }
        uVar16 = puVar6[-1];
        bVar36 = uVar16 <= uVar24;
        bVar35 = bVar36 && uVar24 != uVar16;
        if (uVar24 == uVar16) {
          uVar25 = puVar6[1];
          uVar16 = uVar25;
          if (uVar30 < uVar25) {
            uVar16 = uVar30;
          }
          iVar10 = FUN_016dd50a(uVar15,*puVar6,uVar16);
          if (iVar10 == 0) {
            iVar10 = uVar30 - uVar25;
          }
          bVar36 = -1 < iVar10;
          bVar35 = 0 < iVar10;
        }
        iVar28 = iVar28 + -0xc;
        puVar6 = puVar6 + 3;
        uVar16 = uVar33 + 1;
      } while ((uint)bVar35 - (uint)!bVar36 == 1);
      if (((uint)bVar35 - (uint)!bVar36 & 0xff) == 0) {
        puVar21[uVar33 + 0x23] = piVar23;
        goto joined_r0x00f89a1c;
      }
LAB_00f899c4:
      if (local_a8 == 0) goto LAB_00f89a98;
      local_a8 = local_a8 - 1;
      puVar21 = (undefined4 *)puVar21[uVar16 + 0x2e];
    } while( true );
  }
  local_a8 = 0xb8;
  puVar20 = (undefined4 *)thunk_FUN_016d4a50();
  if (puVar20 == (undefined4 *)0x0) goto LAB_00f8a5c0;
  *(undefined2 *)((int)puVar20 + 0xb6) = 1;
  *puVar20 = 0;
  puVar20[1] = uVar24;
  unaff_r5 = 0;
  puVar20[0x22] = piVar23;
  puVar20[2] = uVar15;
  puVar20[3] = uVar30;
  local_88 = 0;
  local_8c = puVar20;
  goto LAB_00f89a78;
code_r0x00f89dcc:
  *(undefined2 *)((int)puVar6 + 0xb6) = 0;
  *puVar6 = 0;
  uVar16 = (uint)*(ushort *)((int)puVar8 + 0xb6) + ~uVar15;
  *(short *)((int)puVar6 + 0xb6) = (short)uVar16;
  piVar23 = puVar8 + uVar15 * 3 + 1;
  local_80 = (uint **)*piVar23;
  local_7c = (int *)piVar23[1];
  puStack_78 = (uint *)piVar23[2];
  if (0xb < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar16,0xb,&DAT_018ac47c);
  }
  uVar7 = puVar8[uVar15 + 0x22];
  FUN_016dd1aa(puVar6 + 1,puVar8 + (uVar15 + 1) * 3 + 1,uVar16 * 0xc);
  FUN_016dd1aa(puVar6 + 0x22,puVar8 + uVar15 + 0x23,uVar16 * 4);
  *(short *)((int)puVar8 + 0xb6) = (short)uVar15;
  uVar16 = (uint)*(ushort *)((int)puVar6 + 0xb6);
  local_58 = local_80;
  local_54 = (uint *)local_7c;
  local_50 = (uint ***)puStack_78;
  iVar28 = uVar16 + 1;
  if (0xb < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,iVar28,0xc,&DAT_018ac48c);
  }
  if (uVar30 - uVar15 != iVar28) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
  }
  local_b0 = local_b0 + 1;
  FUN_016dd1aa(puVar6 + 0x2e,puVar8 + uVar15 + 0x2f,iVar28 * 4);
  uVar30 = 0;
  do {
    puVar21 = (undefined4 *)(puVar6 + 0x2e)[uVar30];
    *(short *)(puVar21 + 0x2d) = (short)uVar30;
    *puVar21 = puVar6;
    if (uVar16 <= uVar30) break;
    uVar30 = uVar30 + 1;
  } while (uVar30 <= uVar16);
  local_30 = local_58;
  piStack_2c = (int *)local_54;
  puStack_28 = (uint *)local_50;
  puVar21 = puVar6;
  if (!bVar35) {
    puVar21 = puVar8;
  }
  uVar30 = (uint)*(ushort *)((int)puVar21 + 0xb6);
  piVar23 = puVar21 + uVar24 * 3 + 1;
  if (uVar24 < uVar30) {
    FUN_016dd52c(puVar21 + (uVar24 + 1) * 3 + 1,piVar23,(uVar30 - uVar24) * 0xc);
    *piVar23 = (int)local_40;
    piVar23[1] = (int)local_3c;
    piVar23[2] = (int)local_38;
    iVar28 = (uVar30 - uVar24) * 4;
    FUN_016dd52c(puVar21 + uVar24 + 0x23,puVar21 + uVar24 + 0x22,iVar28);
    puVar21[uVar24 + 0x22] = uVar29;
    FUN_016dd52c(puVar21 + uVar24 + 0x30,puVar21 + uVar24 + 0x2f,iVar28);
  }
  else {
    *piVar23 = (int)local_40;
    piVar23[1] = (int)local_3c;
    piVar23[2] = (int)local_38;
    puVar21[uVar24 + 0x22] = uVar29;
  }
  *(short *)((int)puVar21 + 0xb6) = (short)(uVar30 + 1);
  puVar21[uVar24 + 0x2f] = puVar22;
  if (uVar24 + 1 < uVar30 + 2) {
    do {
      uVar15 = uVar24 + 1;
      puVar13 = (undefined4 *)puVar21[uVar24 + 0x2f];
      *(short *)(puVar13 + 0x2d) = (short)uVar15;
      *puVar13 = puVar21;
      uVar24 = uVar15;
    } while (uVar30 + 1 != uVar15);
  }
  local_40 = local_30;
  local_3c = piStack_2c;
  local_38 = puStack_28;
  puVar13 = (undefined4 *)*puVar8;
  puVar21 = puVar8;
  puVar22 = puVar6;
  uVar29 = uVar7;
  if ((undefined4 *)*puVar8 == (undefined4 *)0x0) goto LAB_00f89ff0;
  goto LAB_00f89d54;
LAB_00f89a98:
  uVar3 = *(ushort *)((int)puVar21 + 0xb6);
  uVar33 = (uint)uVar3;
  if (uVar33 < 0xb) {
    puVar19 = puVar21 + uVar16 * 3 + 1;
    if (uVar33 < uVar16 + 1) {
      *puVar19 = uVar24;
      puVar19[1] = uVar15;
      puVar19[2] = uVar30;
    }
    else {
      FUN_016dd52c(puVar21 + (uVar16 + 1) * 3 + 1,puVar19,(uVar33 - uVar16) * 0xc);
      *puVar19 = uVar24;
      puVar19[1] = uVar15;
      puVar19[2] = uVar30;
      FUN_016dd52c(puVar21 + uVar16 + 0x23,puVar21 + uVar16 + 0x22,(uVar33 - uVar16) * 4);
    }
    puVar21[uVar16 + 0x22] = piVar23;
    *(ushort *)((int)puVar21 + 0xb6) = uVar3 + 1;
LAB_00f89a78:
    iVar12 = iVar12 + 1;
    local_84 = iVar12;
joined_r0x00f89a1c:
    if (piVar26 == piVar27) goto LAB_00f8a1a8;
    goto LAB_00f898a0;
  }
  uVar33 = 4;
  bVar35 = false;
  if (4 < uVar16) {
    if (uVar16 == 5) {
      uVar33 = 5;
    }
    else {
      if (uVar16 == 6) {
        uVar33 = 5;
        uVar16 = 0;
      }
      else {
        uVar16 = uVar16 - 7;
        uVar33 = 6;
      }
      bVar35 = true;
    }
  }
  local_a8 = 0xb8;
  puVar6 = (undefined4 *)thunk_FUN_016d4a50();
  if (puVar6 == (undefined4 *)0x0) {
LAB_00f8a5c0:
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,local_a8);
  }
  *(undefined2 *)((int)puVar6 + 0xb6) = 0;
  *puVar6 = 0;
  uVar25 = (uint)*(ushort *)((int)puVar21 + 0xb6) + ~uVar33;
  *(short *)((int)puVar6 + 0xb6) = (short)uVar25;
  piVar18 = puVar21 + uVar33 * 3 + 1;
  local_80 = (uint **)*piVar18;
  local_7c = (int *)piVar18[1];
  puStack_78 = (uint *)piVar18[2];
  if (0xb < uVar25) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar25,0xb,&DAT_018ac47c);
  }
  uVar7 = puVar21[uVar33 + 0x22];
  FUN_016dd1aa(puVar6 + 1,puVar21 + (uVar33 + 1) * 3 + 1,uVar25 * 0xc);
  FUN_016dd1aa(puVar6 + 0x22,puVar21 + uVar33 + 0x23,uVar25 * 4);
  *(short *)((int)puVar21 + 0xb6) = (short)uVar33;
  local_58 = local_80;
  local_54 = (uint *)local_7c;
  local_50 = (uint ***)puStack_78;
  puVar13 = puVar6;
  if (!bVar35) {
    puVar13 = puVar21;
  }
  uVar3 = *(ushort *)((int)puVar13 + 0xb6);
  puVar19 = puVar13 + uVar16 * 3 + 1;
  if (uVar16 < uVar3) {
    iVar28 = uVar3 - uVar16;
    FUN_016dd52c(puVar13 + (uVar16 + 1) * 3 + 1,puVar19,iVar28 * 0xc);
    *puVar19 = uVar24;
    puVar19[1] = uVar15;
    puVar19[2] = uVar30;
    FUN_016dd52c(puVar13 + uVar16 + 0x23,puVar13 + uVar16 + 0x22,iVar28 * 4);
  }
  else {
    *puVar19 = uVar24;
    puVar19[1] = uVar15;
    puVar19[2] = uVar30;
  }
  puVar13[uVar16 + 0x22] = piVar23;
  *(ushort *)((int)puVar13 + 0xb6) = uVar3 + 1;
  local_40 = local_58;
  local_3c = (int *)local_54;
  local_38 = (uint *)local_50;
  if ((undefined4 *)*puVar21 != (undefined4 *)0x0) {
    local_b0 = 0;
    puVar13 = (undefined4 *)*puVar21;
    puVar22 = puVar6;
    uVar29 = uVar7;
LAB_00f89d54:
    puVar8 = puVar13;
    uVar30 = (uint)*(ushort *)((int)puVar8 + 0xb6);
    uVar24 = (uint)*(ushort *)(puVar21 + 0x2d);
    if (uVar30 < 0xb) {
      piVar23 = puVar8 + uVar24 * 3 + 1;
      if (uVar24 < uVar30) {
        FUN_016dd52c(puVar8 + (uVar24 + 1) * 3 + 1,piVar23,(uVar30 - uVar24) * 0xc);
        iVar28 = (uVar30 - uVar24) * 4;
        *piVar23 = (int)local_40;
        piVar23[1] = (int)local_3c;
        piVar23[2] = (int)local_38;
        FUN_016dd52c(puVar8 + uVar24 + 0x23,puVar8 + uVar24 + 0x22,iVar28);
        puVar8[uVar24 + 0x22] = uVar29;
        FUN_016dd52c(puVar8 + uVar24 + 0x30,puVar8 + uVar24 + 0x2f,iVar28);
      }
      else {
        *piVar23 = (int)local_40;
        piVar23[1] = (int)local_3c;
        piVar23[2] = (int)local_38;
        puVar8[uVar24 + 0x22] = uVar29;
      }
      *(short *)((int)puVar8 + 0xb6) = (short)(uVar30 + 1);
      puVar8[uVar24 + 0x2f] = puVar22;
      if (uVar24 + 1 < uVar30 + 2) {
        do {
          puVar21 = (undefined4 *)puVar8[uVar24 + 0x2f];
          uVar24 = uVar24 + 1;
          *(short *)(puVar21 + 0x2d) = (short)uVar24;
          *puVar21 = puVar8;
        } while (uVar30 + 1 != uVar24);
      }
      goto LAB_00f89a78;
    }
    bVar35 = false;
    uVar15 = 4;
    if (4 < uVar24) {
      if (uVar24 == 5) {
        uVar15 = 5;
      }
      else if (uVar24 == 6) {
        bVar35 = true;
        uVar24 = 0;
        uVar15 = 5;
      }
      else {
        uVar24 = uVar24 - 7;
        bVar35 = true;
        uVar15 = 6;
      }
    }
    local_a8 = 0xe8;
    puVar6 = (undefined4 *)thunk_FUN_016d4a50();
    if (puVar6 != (undefined4 *)0x0) goto code_r0x00f89dcc;
    goto LAB_00f8a5c0;
  }
  local_b0 = 0;
LAB_00f89ff0:
  if (puVar20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac44c);
  }
  puVar21 = (undefined4 *)thunk_FUN_016d4a50(0xe8);
  if (puVar21 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xe8);
  }
  uVar24 = unaff_r5 + 1;
  puVar21[0x2e] = puVar20;
  *(undefined2 *)((int)puVar21 + 0xb6) = 0;
  *puVar21 = 0;
  if (0xfffffffe < unaff_r5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018af438);
  }
  *(undefined2 *)(puVar20 + 0x2d) = 0;
  *puVar20 = puVar21;
  local_8c = puVar21;
  local_88 = uVar24;
  if (local_b0 == unaff_r5) {
    uVar30 = (uint)*(ushort *)((int)puVar21 + 0xb6);
    if (uVar30 < 0xb) {
      uVar4 = (undefined2)(uVar30 + 1);
      *(undefined2 *)((int)puVar21 + 0xb6) = uVar4;
      puVar21[uVar30 * 3 + 3] = local_38;
      puVar21[uVar30 * 3 + 1] = local_40;
      puVar21[uVar30 * 3 + 2] = local_3c;
      (puVar21 + 0x2e)[uVar30 + 1] = puVar6;
      *(undefined2 *)(puVar6 + 0x2d) = uVar4;
      *puVar6 = puVar21;
      puVar21[uVar30 + 0x22] = uVar7;
      puVar20 = puVar21;
      unaff_r5 = uVar24;
      goto LAB_00f89a78;
    }
    uVar7 = 0x20;
    local_c8 = &DAT_00565dd0;
    local_c4 = &DAT_018af428;
  }
  else {
    uVar7 = 0x30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa464(local_c8,uVar7,local_c4);
}

