// FUN_01378a88 @ 01378a88 size=2172 calls_out=12 calls_in=4
// strings: no quit in start without look-behind

void FUN_01378a88(uint *param_1,undefined1 **param_2,int param_3,undefined1 **param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 **ppuVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 **ppuVar14;
  undefined1 **ppuVar15;
  uint uVar16;
  uint uVar17;
  undefined1 **unaff_r8;
  undefined1 *puVar18;
  undefined1 **ppuVar19;
  undefined1 **unaff_lr;
  ulonglong uVar20;
  undefined1 **local_68;
  uint local_58 [4];
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 **local_30;
  code *local_2c;
  
  ppuVar19 = (undefined1 **)param_4[4];
  if ((ppuVar19 != (undefined1 **)0x0) && ((undefined1 *)((int)ppuVar19 - 1U) < param_4[3])) {
    puVar10 = *param_4;
    puVar12 = param_4[1];
    bVar1 = param_4[2][(int)((int)ppuVar19 - 1U)];
    uVar16 = (uint)bVar1;
    unaff_lr = (undefined1 **)0x1378ae8;
    iVar3 = thunk_FUN_016dd50a(param_2 + 0x96,"",0x20);
    if (iVar3 == 0) {
LAB_01378d80:
      uVar17 = (uint)*(byte *)((int)param_2 + uVar16 + 0x58);
      uVar16 = uVar17;
      unaff_r8 = param_2;
      if (puVar10 == (undefined1 *)0x0) goto LAB_01378da0;
      goto LAB_01378b58;
    }
    puVar13 = (uint *)((int)(param_2 + 0x96) + (bVar1 >> 3 & 0xfffffff0));
    local_58[0] = *puVar13;
    local_58[1] = puVar13[1];
    local_58[2] = puVar13[2];
    local_58[3] = puVar13[3];
    uStack_48 = 0;
    local_3c = 0;
    local_40 = 0;
    local_44 = 0;
    if ((local_58[(uVar16 & 0x7f) >> 5] >> (uVar16 & 0x1f) & 1) == 0) goto LAB_01378d80;
    local_34 = (undefined1 *)CONCAT31(local_34._1_3_,bVar1);
    local_38 = (undefined1 *)0x4;
LAB_01378d34:
    puVar12 = local_34;
    puVar10 = local_38;
    puVar4 = (undefined1 *)0x2;
    if ((undefined1 *)0x2 < local_38) {
      puVar4 = local_38 + -3;
    }
    if (puVar4 == (undefined1 *)0x0) {
      puVar10 = (undefined1 *)thunk_FUN_016d4a50(0xc);
      if (puVar10 != (undefined1 *)0x0) {
        uVar7 = 1;
LAB_01378dfc:
        *puVar10 = uVar7;
        *(undefined1 ***)(puVar10 + 4) = ppuVar19;
        thunk_FUN_016d3fb4();
        *param_1 = 2;
        param_1[1] = (uint)ppuVar19;
        return;
      }
    }
    else if (puVar4 == (undefined1 *)0x1) {
      if (ppuVar19 == (undefined1 **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("no quit in start without look-behind",0x24,&DAT_01892a10);
      }
      puVar10 = (undefined1 *)thunk_FUN_016d4a50(0xc);
      if (puVar10 != (undefined1 *)0x0) {
        ppuVar19 = (undefined1 **)((int)ppuVar19 - 1);
        uVar7 = 0;
        puVar10[1] = (char)puVar12;
        goto LAB_01378dfc;
      }
    }
    else {
      puVar4 = (undefined1 *)thunk_FUN_016d4a50(0xc);
      if (puVar4 != (undefined1 *)0x0) {
        *(undefined1 **)(puVar4 + 4) = puVar10;
        *(undefined1 **)(puVar4 + 8) = puVar12;
        *puVar4 = 3;
        local_30 = &local_38;
        local_2c = FUN_013c828c;
        local_38 = puVar4;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_30,&DAT_01892790);
      }
    }
    goto LAB_013792bc;
  }
  puVar10 = *param_4;
  puVar12 = param_4[1];
  uVar17 = 2;
  uVar16 = uVar17;
  if (puVar10 != (undefined1 *)0x0) {
LAB_01378b58:
    if (puVar10 == (undefined1 *)0x1) {
      uVar16 = uVar17 + 6;
      uVar9 = *(uint *)(param_3 + 0x88);
      if (uVar9 <= uVar16) {
LAB_01378db0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar16,uVar9,&DAT_01893b00);
      }
      goto LAB_01378b70;
    }
    if ((*(byte *)((int)param_2 + 0x51) & 1) == 0) {
      local_38 = (undefined1 *)0x2;
      local_34 = puVar12;
      goto LAB_01378d34;
    }
    if (puVar12 < *(undefined1 **)(param_2[0x9e] + 0x154)) {
      uVar16 = uVar17 + (int)puVar12 * 6 + 0xc;
      uVar9 = *(uint *)(param_3 + 0x88);
      if (uVar9 <= uVar16) goto LAB_01378db0;
      goto LAB_01378b70;
    }
    ppuVar14 = (undefined1 **)(1 << ((uint)param_2[0x9f] & 0x1f));
    if (0x1a < ((uint)param_2[0x9f] & 0x1f)) {
      local_2c = (code *)0x0;
      local_30 = ppuVar14;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_30,&DAT_01893030,&DAT_01893000);
    }
    puVar4 = (undefined1 *)((uint)ppuVar14 | 0x40000000);
    if (puVar4 < (undefined1 *)0x80000000) goto LAB_01378b80;
LAB_01378eb4:
    unaff_lr = (undefined1 **)0x1378ee0;
    local_30 = param_2;
    local_2c = (code *)param_3;
    FUN_01390a98(&local_38,&local_30,puVar10,puVar12,uVar17);
    if (local_38 != (undefined1 *)0x5) goto LAB_01378d34;
    ppuVar14 = (undefined1 **)param_4[5];
    ppuVar11 = (undefined1 **)param_4[3];
    puVar4 = local_34;
    ppuVar15 = param_4;
    if (ppuVar19 < ppuVar14) goto LAB_01378b90;
LAB_01378f0c:
    local_68 = ppuVar15;
    uVar16 = 0;
    if (ppuVar11 <= ppuVar14) goto LAB_01378e38;
LAB_01378f18:
    ppuVar11 = ppuVar14;
    bVar1 = param_4[2][(int)ppuVar11];
    uVar17 = ((uint)puVar4 & 0x7ffffff) + (uint)*(byte *)((int)param_2 + bVar1 + 0x158);
    if (*(uint *)(param_3 + 0x7c) <= uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar17,*(uint *)(param_3 + 0x7c),&DAT_01893ad0);
    }
    uVar17 = *(uint *)(*(int *)(param_3 + 0x78) + uVar17 * 4);
    if ((int)uVar17 < 0) {
      local_30 = param_2;
      local_2c = (code *)param_3;
      uVar20 = FUN_01390198(&local_30,puVar4,(uint)bVar1 << 8);
      uVar17 = (uint)(uVar20 >> 0x20);
      if ((uVar20 & 1) == 0) goto LAB_013790ec;
      puVar10 = (undefined1 *)thunk_FUN_016d4a50(0xc);
      if (puVar10 == (undefined1 *)0x0) goto LAB_013792bc;
      uVar7 = 1;
    }
    else {
LAB_013790ec:
      if ((uVar17 & 0x8000000) != 0) {
        if (*(int *)(param_2[0x9e] + 0x154) == 1) {
          uVar16 = 1;
          unaff_lr = (undefined1 **)0x0;
          local_68 = ppuVar11;
          goto LAB_013791a0;
        }
        uVar9 = *(uint *)(param_3 + 0x94);
        uVar16 = (uVar17 & 0x7ffffff) >> ((uint)param_2[0x9f] & 0x1f);
        if (uVar9 <= (uVar17 & 0x7ffffff) >> ((uint)param_2[0x9f] & 0x1f)) {
LAB_013792fc:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar16,uVar9,&DAT_01893ae0);
        }
        iVar3 = *(int *)(param_3 + 0x90);
LAB_0137915c:
        piVar6 = (int *)(iVar3 + uVar16 * 8);
        uVar16 = piVar6[1];
        if (uVar16 == 0) {
LAB_01379220:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(0,0,&DAT_018942e8);
        }
        iVar3 = *piVar6;
        unaff_lr = (undefined1 **)0x0;
        if ((*(byte *)(iVar3 + 8) & 2) != 0) {
          if (uVar16 < 0xd) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0xd,uVar16,uVar16,&DAT_018942f8);
          }
          if (uVar16 - 0xd < 4) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,4,uVar16 - 0xd,&DAT_01892db0);
          }
          unaff_lr = *(undefined1 ***)(iVar3 + 0x15);
        }
        goto LAB_0137919c;
      }
      if ((uVar17 & 0x20000000) == 0) goto LAB_013791a0;
      puVar10 = (undefined1 *)thunk_FUN_016d4a50(0xc);
      if (puVar10 == (undefined1 *)0x0) {
LAB_013792bc:
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      puVar10[1] = bVar1;
      uVar7 = 0;
    }
    *puVar10 = uVar7;
LAB_01378f74:
    *(undefined1 ***)(puVar10 + 4) = ppuVar11;
    thunk_FUN_016d3fb4();
    *param_1 = 2;
    param_1[1] = (uint)ppuVar11;
    return;
  }
LAB_01378da0:
  uVar9 = *(uint *)(param_3 + 0x88);
  uVar17 = uVar16;
  if (uVar9 <= uVar16) goto LAB_01378db0;
LAB_01378b70:
  puVar4 = *(undefined1 **)(*(int *)(param_3 + 0x84) + uVar16 * 4);
  if ((int)puVar4 < 0) goto LAB_01378eb4;
LAB_01378b80:
  ppuVar14 = (undefined1 **)param_4[5];
  ppuVar11 = (undefined1 **)param_4[3];
  ppuVar15 = unaff_r8;
  if (ppuVar14 <= ppuVar19) goto LAB_01378f0c;
LAB_01378b90:
  puVar10 = param_2[0x9e];
  uVar16 = 0;
  puVar12 = param_2[0x9f];
  puVar18 = param_4[2];
  ppuVar15 = ppuVar11;
  if (ppuVar11 < ppuVar19) {
    ppuVar15 = ppuVar19;
  }
  cVar2 = *(char *)(param_4 + 6);
  puVar8 = puVar4;
  do {
    if (ppuVar15 == ppuVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(ppuVar15,ppuVar11,&DAT_01892a00);
    }
    uVar17 = ((uint)puVar8 & 0x7ffffff) +
             (uint)*(byte *)((int)param_2 + (byte)puVar18[(int)ppuVar19] + 0x158);
    if (*(uint *)(param_3 + 0x7c) <= uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar17,*(uint *)(param_3 + 0x7c),&DAT_01893ad0);
    }
    puVar4 = *(undefined1 **)(*(int *)(param_3 + 0x78) + uVar17 * 4);
    if ((int)puVar4 < 0) {
      local_30 = param_2;
      local_2c = (code *)param_3;
      uVar20 = FUN_01390198(&local_30,puVar8,(uint)(byte)puVar18[(int)ppuVar19] << 8);
      puVar4 = (undefined1 *)(uVar20 >> 0x20);
      if ((uVar20 & 1) != 0) {
        *param_1 = 2;
        param_1[1] = (uint)ppuVar19;
        return;
      }
    }
    if ((undefined1 *)0x7ffffff < puVar4) {
      if (((uint)puVar4 & 0x8000000) == 0) {
        if (((uint)puVar4 & 0x40000000) != 0) {
          if (uVar16 != 0) {
            ppuVar19 = unaff_lr;
          }
          *param_1 = uVar16 ^ 1;
          param_1[1] = (uint)ppuVar19;
          param_1[2] = (uint)local_68;
          return;
        }
        if (((uint)puVar4 & 0x20000000) != 0) {
          *param_1 = 2;
          param_1[1] = (uint)ppuVar19;
          return;
        }
      }
      else {
        unaff_lr = (undefined1 **)0x0;
        if (*(int *)(puVar10 + 0x154) != 1) {
          uVar16 = ((uint)puVar4 & 0x7ffffff) >> ((uint)puVar12 & 0x1f);
          if (*(uint *)(param_3 + 0x94) <= ((uint)puVar4 & 0x7ffffff) >> ((uint)puVar12 & 0x1f)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar16,*(uint *)(param_3 + 0x94),&DAT_01893ae0);
          }
          piVar6 = (int *)(*(int *)(param_3 + 0x90) + uVar16 * 8);
          iVar3 = *piVar6;
          uVar16 = piVar6[1];
          if (uVar16 == 0) goto LAB_01379220;
          if ((*(byte *)(iVar3 + 8) & 2) != 0) {
            if (uVar16 < 0xd) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0xd,uVar16,uVar16,&DAT_018942f8);
            }
            if (uVar16 - 0xd < 4) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,4,uVar16 - 0xd,&DAT_01892db0);
            }
            unaff_lr = *(undefined1 ***)(iVar3 + 0x15);
          }
        }
        uVar16 = 1;
        if (cVar2 != '\0') {
          *param_1 = 0;
          param_1[1] = (uint)unaff_lr;
          param_1[2] = (uint)ppuVar19;
          return;
        }
        local_68 = ppuVar19;
      }
    }
    ppuVar19 = (undefined1 **)((int)ppuVar19 + 1);
    puVar8 = puVar4;
  } while (ppuVar14 != ppuVar19);
  ppuVar19 = ppuVar14;
  if (ppuVar14 < ppuVar11) goto LAB_01378f18;
LAB_01378e38:
  uVar17 = *(byte *)((int)param_2 + 599) + 1 + ((uint)puVar4 & 0x7ffffff);
  if (*(uint *)(param_3 + 0x7c) <= uVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar17,*(uint *)(param_3 + 0x7c),&DAT_01893af0);
  }
  uVar17 = *(uint *)(*(int *)(param_3 + 0x78) + uVar17 * 4);
  if ((int)uVar17 < 0) {
    uVar5 = FUN_0138d580();
    local_30 = param_2;
    local_2c = (code *)param_3;
    uVar20 = FUN_01390198(&local_30,puVar4,uVar5);
    uVar17 = (uint)(uVar20 >> 0x20);
    if ((uVar20 & 1) != 0) {
      puVar10 = (undefined1 *)thunk_FUN_016d4a50(0xc);
      if (puVar10 == (undefined1 *)0x0) goto LAB_013792bc;
      *puVar10 = 1;
      goto LAB_01378f74;
    }
  }
  if ((uVar17 & 0x8000000) == 0) goto LAB_013791a0;
  if (*(int *)(param_2[0x9e] + 0x154) != 1) {
    uVar9 = *(uint *)(param_3 + 0x94);
    uVar16 = (uVar17 & 0x7ffffff) >> ((uint)param_2[0x9f] & 0x1f);
    if (uVar9 <= (uVar17 & 0x7ffffff) >> ((uint)param_2[0x9f] & 0x1f)) goto LAB_013792fc;
    iVar3 = *(int *)(param_3 + 0x90);
    goto LAB_0137915c;
  }
  unaff_lr = (undefined1 **)0x0;
LAB_0137919c:
  uVar16 = 1;
  local_68 = ppuVar11;
LAB_013791a0:
  if (uVar16 != 0) {
    ppuVar19 = unaff_lr;
  }
  *param_1 = uVar16 ^ 1;
  param_1[1] = (uint)ppuVar19;
  param_1[2] = (uint)local_68;
  return;
}

