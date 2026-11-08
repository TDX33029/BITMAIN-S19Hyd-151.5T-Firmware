// FUN_00f8866c @ 00f8866c size=2824 calls_out=11 calls_in=1
// strings: attempt to join into collection with len > usize::MAX

/* WARNING: Type propagation algorithm not settling */

void FUN_00f8866c(undefined4 *param_1,int param_2,uint param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  undefined *puVar8;
  int unaff_r4;
  char *******pppppppcVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  char *******pppppppcVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  char *******pppppppcVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  char ******local_e8;
  char *****local_e4;
  char ******local_e0;
  char *****local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  char *******local_b0;
  byte *local_ac;
  char *******local_a8;
  code *local_a4;
  char *******local_a0;
  undefined4 *local_9c;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  char *******local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  char *******local_60;
  byte *local_5c;
  undefined4 local_58;
  char *******local_50;
  byte *local_4c;
  char *******local_48;
  char *******local_40;
  byte *local_3c;
  char *******local_38;
  char *******local_30;
  byte *local_2c;
  char *******local_28;
  
  local_e8 = &local_e4;
  local_e4 = (char *****)(param_2 + 0x62);
  local_e0 = &local_dc;
  local_dc = (char *****)(param_2 + 0x70);
  if (*(char *)(param_2 + 0x70) == '\x04') {
    local_dc = local_e4;
  }
  local_b0 = &local_e8;
  local_ac = &DAT_00fa02fc;
  FUN_00600d2c(&local_d8,&DAT_0035d79c,&local_b0);
  local_c4 = 0;
  local_c8 = 4;
  uVar2 = *(uint *)(param_4 + 8) & (uint)(*(int *)(param_4 + 0x10) == 0);
  uVar3 = uVar2;
  if (uVar2 == 0) {
    uVar3 = (uint)*(byte *)(param_4 + 0x11d);
  }
  local_cc = 0;
  if ((uVar2 == 0 && (uVar3 & 4) == 0) &&
     (pppppppcVar16 = *(char ********)(param_4 + 200), pppppppcVar16 != (char *******)0x0)) {
    if ((char *******)0xaaaaaaa < pppppppcVar16) {
      uVar4 = 0;
LAB_00f88a3c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar4,unaff_r4);
    }
    iVar19 = *(int *)(param_4 + 0xc4);
    unaff_r4 = (int)pppppppcVar16 * 0xc;
    pbVar5 = (byte *)thunk_FUN_016d4a50(unaff_r4);
    if (pbVar5 == (byte *)0x0) {
      uVar4 = 4;
      goto LAB_00f88a3c;
    }
    local_58 = 0;
    pppppppcVar9 = (char *******)0x0;
    local_60 = pppppppcVar16;
    local_5c = pbVar5;
    do {
      puVar15 = (undefined4 *)(iVar19 + (int)pppppppcVar9 * 8);
      FUN_006008c8(&local_50,*puVar15,puVar15[1]);
      local_28 = local_48;
      local_2c = local_4c;
      local_30 = local_50;
      if (local_48 != (char *******)0x0) {
        pbVar14 = local_4c;
        do {
          uVar3 = (uint)*pbVar14;
          pbVar11 = pbVar14 + 1;
          if (-1 < (char)*pbVar14) {
joined_r0x00f88bbc:
            pbVar14 = pbVar11;
            uVar20 = uVar3 - 9;
            if (0x17 < uVar20) goto LAB_00f88b44;
LAB_00f88b34:
            if ((1 << (uVar20 & 0xff) & 0x80001fU) == 0) goto LAB_00f88b44;
LAB_00f88c24:
            local_7c = (char *******)&local_30;
            local_78 = &LAB_0155c8c0;
            FUN_00600d2c(&local_b0,&DAT_00590e71,&local_7c);
            local_40 = local_b0;
            local_3c = local_ac;
            local_38 = local_a8;
            if (((uint)local_30 & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(local_2c);
            }
            goto LAB_00f88a94;
          }
          if (uVar3 < 0xe0) {
            uVar3 = pbVar14[1] & 0x3f | (uVar3 & 0x1f) << 6;
            pbVar11 = pbVar14 + 2;
            goto joined_r0x00f88bbc;
          }
          uVar20 = pbVar14[2] & 0x3f | (pbVar14[1] & 0x3f) << 6;
          if (0xef < uVar3) {
            uVar3 = pbVar14[3] & 0x3f | uVar20 << 6 | (uVar3 & 7) << 0x12;
            pbVar11 = pbVar14 + 4;
            goto joined_r0x00f88bbc;
          }
          uVar3 = uVar20 | (uVar3 & 0x1f) << 0xc;
          pbVar14 = pbVar14 + 3;
          uVar20 = uVar3 - 9;
          if (uVar20 < 0x18) goto LAB_00f88b34;
LAB_00f88b44:
          if (0x7f < uVar3) {
            uVar20 = uVar3 >> 8;
            if (uVar20 < 0x20) {
              if (uVar20 == 0) {
                bVar1 = (&DAT_0041951b)[uVar3 & 0xff] & 1;
joined_r0x00f88b08:
                if (bVar1 != 0) goto LAB_00f88c24;
              }
              else if ((uVar20 == 0x16) && (uVar3 == 0x1680)) goto LAB_00f88c24;
            }
            else {
              if (uVar20 == 0x20) {
                bVar1 = (&DAT_0041951b)[uVar3 & 0xff] & 2;
                goto joined_r0x00f88b08;
              }
              if (uVar20 == 0x30 && uVar3 == 0x3000) goto LAB_00f88c24;
            }
          }
        } while (pbVar14 != local_4c + (int)local_48);
      }
      local_40 = local_50;
      local_3c = local_4c;
      local_38 = local_48;
LAB_00f88a94:
      pbVar14 = local_5c;
      pppppppcVar13 = (char *******)((int)pppppppcVar9 + 1);
      pbVar11 = pbVar5 + (int)pppppppcVar9 * 0xc;
      *(char ********)pbVar11 = local_40;
      *(byte **)(pbVar11 + 4) = local_3c;
      *(char ********)(pbVar11 + 8) = local_38;
      pppppppcVar9 = pppppppcVar13;
    } while (pppppppcVar13 != pppppppcVar16);
    local_30 = local_60;
    local_2c = local_5c;
    local_28 = pppppppcVar16;
    if (pppppppcVar16 == (char *******)0x0) {
      local_38 = (char *******)0x0;
      local_3c = &DAT_00000001;
      local_40 = (char *******)0x0;
      pbVar5 = local_5c;
    }
    else {
      iVar19 = (int)pppppppcVar16 * 0xc;
      uVar3 = iVar19 - 0xc;
      pppppppcVar16 = (char *******)((uVar3 >> 2) * -0x55555555);
      pbVar5 = local_5c;
      while (iVar19 != 0) {
        puVar17 = (uint *)(pbVar5 + 8);
        iVar19 = iVar19 + -0xc;
        pbVar5 = pbVar5 + 0xc;
        bVar21 = CARRY4(*puVar17,(uint)pppppppcVar16);
        pppppppcVar16 = (char *******)(*puVar17 + (int)pppppppcVar16);
        if (bVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("attempt to join into collection with len > usize::MAX",0x35,&DAT_018ad7c8);
        }
      }
      pppppppcVar9 = (char *******)0x0;
      if ((int)pppppppcVar16 < 0) {
LAB_00f88cf8:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(pppppppcVar9,pppppppcVar16);
      }
      if (pppppppcVar16 == (char *******)0x0) {
        pbVar5 = &DAT_00000001;
      }
      else {
        pbVar5 = (byte *)thunk_FUN_016d4a50(pppppppcVar16);
        pppppppcVar9 = pppppppcVar16;
        if (pbVar5 == (byte *)0x0) {
          pppppppcVar9 = (char *******)&DAT_00000001;
          goto LAB_00f88cf8;
        }
      }
      uVar4 = *(undefined4 *)(pbVar14 + 4);
      pppppppcVar13 = *(char ********)(pbVar14 + 8);
      local_a8 = (char *******)0x0;
      local_b0 = pppppppcVar9;
      local_ac = pbVar5;
      if (pppppppcVar9 < pppppppcVar13) {
        FUN_00f991dc(&local_b0,0,pppppppcVar13,1,1);
      }
      pppppppcVar9 = local_a8;
      pbVar11 = local_ac;
      FUN_016dd1aa(local_ac + (int)local_a8,uVar4,pppppppcVar13);
      pbVar14 = pbVar14 + 0x10;
      iVar19 = (int)pppppppcVar16 - ((int)pppppppcVar9 + (int)pppppppcVar13);
      pbVar11 = pbVar11 + (int)((int)pppppppcVar9 + (int)pppppppcVar13);
      pbVar5 = local_2c;
      pppppppcVar9 = local_28;
      for (; local_2c = pbVar5, local_28 = pppppppcVar9, uVar3 != 0; uVar3 = uVar3 - 0xc) {
        if (iVar19 == 0) {
LAB_00f89520:
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ad7b8);
        }
        uVar4 = *(undefined4 *)pbVar14;
        uVar20 = *(uint *)(pbVar14 + 4);
        *pbVar11 = 0x20;
        if (iVar19 - 1U < uVar20) goto LAB_00f89520;
        FUN_016dd1aa(pbVar11 + 1,uVar4,uVar20);
        iVar19 = (iVar19 - 1U) - uVar20;
        pbVar11 = pbVar11 + 1 + uVar20;
        pbVar14 = pbVar14 + 0xc;
        pbVar5 = local_2c;
        pppppppcVar9 = local_28;
      }
      local_38 = (char *******)((int)pppppppcVar16 - iVar19);
      local_40 = local_b0;
      local_3c = local_ac;
      if (pppppppcVar9 != (char *******)0x0) {
        pbVar14 = pbVar5 + 4;
        do {
          if ((*(uint *)(pbVar14 + -4) & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)pbVar14);
          }
          pbVar14 = pbVar14 + 0xc;
          pppppppcVar9 = (char *******)((int)pppppppcVar9 + -1);
        } while (pppppppcVar9 != (char *******)0x0);
      }
    }
    if (local_30 != (char *******)0x0) {
      thunk_FUN_016d3fb4(pbVar5);
    }
    local_9c = &DAT_006043a8;
    local_a0 = (char *******)&local_40;
    local_a8 = &local_e0;
    local_b0 = &local_e8;
    local_a4 = (code *)&DAT_00fa02fc;
    local_ac = &DAT_00fa02fc;
    FUN_00600d2c(&local_c0,&DAT_0035d8c7,&local_b0);
    iVar19 = local_c4;
    if (local_c4 == local_cc) {
      FUN_015f37b0(&local_cc);
    }
    puVar15 = (undefined4 *)(local_c8 + iVar19 * 0xc);
    *puVar15 = local_c0;
    puVar15[1] = uStack_bc;
    puVar15[2] = uStack_b8;
    local_c4 = iVar19 + 1;
    if (local_40 != (char *******)0x0) {
      thunk_FUN_016d3fb4(local_3c);
    }
  }
  pppppppcVar9 = *(char ********)(param_4 + 0xac);
  iVar10 = *(int *)(param_4 + 0xb0);
  iVar19 = 4;
  local_8c = 0;
  local_90 = 4;
  local_94 = 0;
  pppppppcVar16 = pppppppcVar9;
  iVar12 = 0;
  while (pppppppcVar13 = pppppppcVar16, pppppppcVar13 != pppppppcVar9 + iVar10 * 2) {
    pppppppcVar16 = pppppppcVar13 + 2;
    if (*(char *)(pppppppcVar13 + 1) == '\x01') {
      local_b0 = &local_e0;
      local_a4 = FUN_00faaf34;
      local_ac = &DAT_00fa02fc;
      local_a8 = pppppppcVar13;
      FUN_00600d2c(&local_30,&DAT_0035dbcc,&local_b0);
      if (local_30 == (char *******)&DAT_80000000) break;
      if (iVar12 == local_94) {
        FUN_00f991dc(&local_94,iVar12,1,4,0xc);
        iVar19 = local_90;
      }
      local_8c = iVar12 + 1;
      puVar15 = (undefined4 *)(iVar19 + iVar12 * 0xc);
      *puVar15 = local_30;
      puVar15[1] = local_2c;
      puVar15[2] = local_28;
      iVar12 = local_8c;
    }
  }
  pppppppcVar9 = *(char ********)(param_4 + 0xa0);
  iVar19 = *(int *)(param_4 + 0xa4);
  pppppppcVar16 = pppppppcVar9;
  while (pppppppcVar13 = pppppppcVar16, pppppppcVar13 != pppppppcVar9 + iVar19 * 3) {
    pppppppcVar16 = pppppppcVar13 + 3;
    if (*(char *)(pppppppcVar13 + 2) == '\x01') {
      local_b0 = &local_e0;
      local_a4 = (code *)&LAB_00f70548;
      local_ac = &DAT_00fa02fc;
      local_a8 = pppppppcVar13;
      FUN_00600d2c(&local_30,&DAT_0035dbd8,&local_b0);
      if (local_30 == (char *******)&DAT_80000000) break;
      if (iVar12 == local_94) {
        FUN_00f991dc(&local_94,iVar12,1,4,0xc);
      }
      local_8c = iVar12 + 1;
      puVar15 = (undefined4 *)(local_90 + iVar12 * 0xc);
      *puVar15 = local_30;
      puVar15[1] = local_2c;
      puVar15[2] = local_28;
      iVar12 = local_8c;
    }
  }
  if (iVar12 != 0) {
    FUN_00f944a8(&local_b0,local_90,iVar12,local_d4,local_d0);
    local_30 = local_b0;
    local_2c = local_ac;
    local_28 = local_a8;
    local_a4 = (code *)&DAT_006043a8;
    local_ac = &DAT_00fa02fc;
    local_b0 = &local_e8;
    local_a8 = (char *******)&local_30;
    FUN_00600d2c(&local_88,&DAT_0035d7a8,&local_b0);
    iVar19 = local_c4;
    if (local_c4 == local_cc) {
      FUN_015f37b0(&local_cc);
    }
    puVar15 = (undefined4 *)(local_c8 + iVar19 * 0xc);
    *puVar15 = local_88;
    puVar15[1] = uStack_84;
    puVar15[2] = uStack_80;
    local_c4 = iVar19 + 1;
    if (local_30 != (char *******)0x0) {
      thunk_FUN_016d3fb4(local_2c);
    }
  }
  if ((*(byte *)(param_4 + 0x11c) & 0x10) == 0) {
    if ((param_3 & 1) != 0) {
      if (uVar2 == 0) {
        piVar7 = &DAT_0035e2f0;
        if (*(int *)(param_4 + 0x28) != 5) {
          piVar7 = (int *)(param_4 + 0x28);
        }
                    /* WARNING: Could not recover jumptable at 0x00f889dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00f889e0 + *(int *)(&DAT_00f889e0 + *piVar7 * 4)))(1,&UNK_018805c4);
        return;
      }
      iVar10 = 0;
      local_b0 = (char *******)0x0;
      iVar19 = 0;
      iVar12 = 4;
      do {
        iVar6 = iVar12;
        iVar18 = iVar19;
        if (iVar18 == 0) break;
        iVar19 = iVar18 + -0x24;
        iVar12 = iVar6 + 0x24;
      } while ((*(char *)(iVar6 + 0x20) != '\0') || (*(int *)(iVar6 + 0xc) == -0x80000000));
      puVar17 = (uint *)&DAT_00000010;
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        if ((*puVar17 & 0x7fffffff) == 0) {
          uVar3 = puVar17[-3];
        }
        else {
          thunk_FUN_016d3fb4(puVar17[1]);
          uVar3 = puVar17[-3];
        }
        if (uVar3 != 0) {
          thunk_FUN_016d3fb4(puVar17[-2]);
        }
        puVar17 = puVar17 + 9;
      }
      if (local_b0 != (char *******)0x0) {
        thunk_FUN_016d3fb4(4);
      }
      if (iVar18 != 0) goto LAB_00f89298;
    }
    if (uVar2 == 0) {
      piVar7 = &DAT_0035e2f0;
      if (*(int *)(param_4 + 0x28) != 5) {
        piVar7 = (int *)(param_4 + 0x28);
      }
                    /* WARNING: Could not recover jumptable at 0x00f88e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00f88e88 + *(int *)(&DAT_00f88e88 + *piVar7 * 4)))(1,&UNK_018805c4);
      return;
    }
    local_74 = 0;
    local_78 = (undefined1 *)0x4;
    local_7c = (char *******)0x0;
    puVar17 = (uint *)&DAT_00000010;
    for (iVar19 = 0; iVar19 != 0; iVar19 = iVar19 + -1) {
      if ((*puVar17 & 0x7fffffff) == 0) {
        uVar3 = puVar17[-3];
      }
      else {
        thunk_FUN_016d3fb4(puVar17[1]);
        uVar3 = puVar17[-3];
      }
      if (uVar3 != 0) {
        thunk_FUN_016d3fb4(puVar17[-2]);
      }
      puVar17 = puVar17 + 9;
    }
    if (local_7c != (char *******)0x0) {
      thunk_FUN_016d3fb4(4);
    }
    if ((param_3 & 1) == 0) {
      puVar8 = &DAT_0041545b;
      goto LAB_00f892ac;
    }
  }
  else if ((param_3 & 1) == 0) {
    puVar8 = &DAT_0041545b;
    goto LAB_00f892ac;
  }
LAB_00f89298:
  puVar8 = &DAT_0041950e;
LAB_00f892ac:
  iVar12 = local_c4;
  iVar19 = local_c8;
  FUN_00f944a8(&local_b0,local_c8,local_c4,puVar8,1);
  iVar10 = local_90;
  puVar15 = (undefined4 *)(local_90 + 4);
  *param_1 = local_b0;
  param_1[1] = local_ac;
  param_1[2] = local_a8;
  for (iVar18 = local_8c; iVar18 != 0; iVar18 = iVar18 + -1) {
    if (puVar15[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar15);
    }
    puVar15 = puVar15 + 3;
  }
  if (local_94 != 0) {
    thunk_FUN_016d3fb4(iVar10);
  }
  puVar15 = (undefined4 *)(iVar19 + 4);
  for (; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (puVar15[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar15);
    }
    puVar15 = puVar15 + 3;
  }
  if (local_cc != 0) {
    thunk_FUN_016d3fb4(iVar19);
  }
  if (local_d8 != 0) {
    thunk_FUN_016d3fb4(local_d4);
  }
  return;
}

