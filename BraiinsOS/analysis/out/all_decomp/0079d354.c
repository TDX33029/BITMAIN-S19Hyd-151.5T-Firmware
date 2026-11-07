// FUN_0079d354 @ 0079d354 size=2184 calls_out=18 calls_in=2
// strings: BUG: expected Stratum V1 connection details!

/* WARNING: Type propagation algorithm not settling */

void FUN_0079d354(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int ***pppiVar10;
  int *piVar11;
  code *pcVar12;
  int ****ppppiVar13;
  undefined *puVar14;
  int iVar15;
  undefined1 auStack_e68 [72];
  undefined1 auStack_e20 [256];
  undefined8 local_d20;
  undefined1 auStack_d18 [72];
  byte local_cd0 [200];
  short local_c08;
  undefined2 local_c06;
  uint local_c04;
  undefined4 local_c00;
  uint local_bf8;
  undefined4 local_bf4;
  int ***local_bec;
  code *local_be8;
  int *local_be4;
  int local_be0;
  undefined4 local_bdc;
  int local_bd8;
  int ***local_bd0;
  code *local_bcc;
  int *local_bc8;
  int ***local_bc0;
  code *pcStack_bbc;
  int *piStack_bb8;
  int local_bb0;
  int local_bac;
  int local_ba8;
  undefined1 local_b30;
  undefined1 local_b2f;
  int ***local_640;
  code *local_63c;
  int *local_638;
  uint local_634;
  undefined4 *puStack_630;
  undefined *puStack_62c;
  int iStack_628;
  undefined *local_624;
  int local_620;
  int ****local_b8;
  code *local_b4;
  int *local_b0;
  int ***local_30;
  code *local_2c;
  int *local_28;
  
  uVar1 = *(undefined1 *)(param_2 + 0xfc);
  FUN_016dd1aa(auStack_e20,param_2,0x100);
  FUN_016dd1aa(auStack_e68,param_3,0x48);
  local_d20 = FUN_006bb674();
  pcVar12 = (code *)((ulonglong)local_d20 >> 0x20);
  uVar6 = (undefined4)local_d20;
  puStack_630 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puStack_630 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puStack_630 = 1;
  local_624 = &DAT_01859da8;
  puStack_630[1] = 1;
  puStack_62c = &DAT_01859d74;
  iStack_628 = 1;
  local_620 = 0;
  local_634 = local_634 & 0xffffff00;
  local_638 = (int *)0x0;
  local_63c = (code *)0x1;
  local_640 = (int ***)0x1;
  piVar7 = (int *)thunk_FUN_016d4a50(0x24);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x24);
  }
  *piVar7 = (int)local_640;
  piVar7[1] = (int)local_63c;
  piVar7[2] = (int)local_638;
  piVar7[3] = local_634;
  piVar7[4] = (int)puStack_630;
  piVar7[5] = (int)puStack_62c;
  piVar7[6] = iStack_628;
  piVar7[7] = (int)local_624;
  piVar7[8] = local_620;
  do {
    iVar8 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar8 + 1;
  if (iVar8 < 0) goto LAB_0079dc04;
  FUN_016dd1aa(auStack_d18,auStack_e68,0x148);
  uVar4 = local_bdc;
  local_bd0 = (int ***)0x1;
  local_bcc = pcVar12;
  local_bc8 = piVar7;
  if (local_cd0[0] - 2 < 3) {
    FUN_0079ca1c(&local_640,local_cd0);
    local_b0 = local_bc8;
    local_b4 = local_bcc;
    local_b8 = (int ****)local_bd0;
    FUN_0079c2f0(&local_bb0,&local_640,param_3,&local_b8,0);
    local_63c = (code *)0x1;
    local_640 = (int ***)0x1;
    FUN_016dd1aa(&puStack_630,&local_bb0,0x570);
    local_b8 = (int ****)0x0;
    iVar8 = FUN_016d51b0(&local_b8,0x10,0x580);
    ppppiVar13 = (int ****)0x0;
    if (iVar8 == 0) {
      ppppiVar13 = local_b8;
    }
    if (ppppiVar13 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x10,0x580);
    }
LAB_0079d810:
    FUN_016dd1aa(local_b8,&local_640,0x580);
    uVar3 = false;
    puVar14 = &DAT_0185cb40;
    if (local_bec != (int ***)0x0) {
      thunk_FUN_016d3fb4(local_be8);
    }
  }
  else {
    if (local_cd0[0] != 0) {
      FUN_0079ca1c(&local_640,local_cd0);
      piVar11 = local_638;
      pcVar12 = local_63c;
      local_bc0 = local_bd0;
      pcStack_bbc = local_bcc;
      piStack_bb8 = local_bc8;
      if (local_640 == (int ***)0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("BUG: expected Stratum V1 connection details!",0x59,&DAT_0185beb8);
      }
      uVar3 = (undefined1)local_634;
      if (local_638 == (int *)0x0) {
        FUN_016dd1aa(&local_bb0,1,0);
        local_b2f = 1;
        local_b30 = uVar3;
        FUN_016dd1aa(&local_b8,&local_bb0,0x84);
      }
      else {
        pppiVar10 = (int ***)thunk_FUN_016d4a50(local_638);
        if (pppiVar10 == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,piVar11);
        }
        FUN_016dd1aa(pppiVar10,pcVar12,piVar11);
        if (&DAT_00000080 < piVar11) {
          local_b4 = (code *)piVar11;
          local_b8 = (int ****)pppiVar10;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_b8,&DAT_0188862c,&DAT_018885e4);
        }
        FUN_016dd1aa(&local_bb0,pppiVar10,piVar11);
        local_b2f = 1;
        local_b30 = uVar3;
        FUN_016dd1aa(&local_b8,&local_bb0,0x84);
        thunk_FUN_016d3fb4(pppiVar10);
      }
      puVar9 = (undefined4 *)thunk_FUN_016d4a50(0x88);
      if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x88);
      }
      *puVar9 = piVar11;
      FUN_016dd1aa(puVar9 + 1,&local_b8,0x84);
      local_30 = local_bd0;
      local_2c = local_bcc;
      local_28 = local_bc8;
      FUN_0079c500(&local_bb0,&local_640,puVar9,&DAT_0185cd9c,param_3,&local_30,0);
      local_63c = (code *)0x1;
      local_640 = (int ***)0x1;
      FUN_016dd1aa(&puStack_630,&local_bb0,0x570);
      local_b8 = (int ****)0x0;
      iVar8 = FUN_016d51b0(&local_b8,0x10,0x580);
      ppppiVar13 = (int ****)0x0;
      if (iVar8 == 0) {
        ppppiVar13 = local_b8;
      }
      if (ppppiVar13 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(0x10,0x580);
      }
      goto LAB_0079d810;
    }
    local_ba8 = 0;
    local_bac = 1;
    local_bb0 = 0;
    if (local_bd8 != 0) {
      FUN_00933680(&local_bb0,0,local_bd8,1,1);
    }
    iVar15 = local_ba8;
    iVar8 = local_bac;
    FUN_016dd1aa(local_bac + local_ba8,uVar4,local_bd8);
    iVar15 = iVar15 + local_bd8;
    local_ba8 = iVar15;
    if (local_c08 != 0) {
      local_30 = (int ***)CONCAT22(local_30._2_2_,local_c06);
      local_b8 = &local_30;
      local_b4 = FUN_00fac370;
      FUN_00600d2c(&local_640,&DAT_0059a08d,&local_b8);
      piVar11 = local_638;
      pcVar12 = local_63c;
      pppiVar10 = local_640;
      if ((int *)(local_bb0 - iVar15) < local_638) {
        FUN_00933680(&local_bb0,iVar15,local_638,1,1);
        iVar8 = local_bac;
        iVar15 = local_ba8;
      }
      FUN_016dd1aa(iVar15 + iVar8,pcVar12,piVar11);
      if (pppiVar10 != (int ***)0x0) {
        thunk_FUN_016d3fb4(pcVar12);
      }
      iVar15 = iVar15 + (int)piVar11;
      iVar8 = local_bac;
    }
    iVar5 = local_bb0;
    puVar9 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x14);
    }
    *puVar9 = 1;
    puVar9[1] = 1;
    puVar9[2] = iVar5;
    puVar9[3] = iVar8;
    puVar9[4] = iVar15;
    if (local_be4 == (int *)0x0) {
      local_30 = (int ***)0x80000000;
      if (local_bec != (int ***)0x0) {
        thunk_FUN_016d3fb4(local_be8);
      }
    }
    else {
      local_28 = local_be4;
      local_2c = local_be8;
      local_30 = local_bec;
    }
    pcVar12 = (code *)thunk_FUN_016d4a50(4);
    if (pcVar12 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4();
    }
    *(undefined4 *)pcVar12 = 0x72657375;
    local_b8 = (int ****)0x4;
    local_b0 = (int *)&DAT_00000004;
    local_640 = local_bd0;
    local_63c = local_bcc;
    local_638 = local_bc8;
    local_b4 = pcVar12;
    FUN_0079d144(&local_bb0,puVar9,&local_30,&local_b8,&local_640);
    uVar3 = true;
    local_63c = (code *)0x1;
    local_640 = (int ***)0x1;
    FUN_016dd1aa(&puStack_630,&local_bb0,0x360);
    local_b8 = (int ****)0x0;
    iVar8 = FUN_016d51b0(&local_b8,0x10,0x370);
    ppppiVar13 = (int ****)0x0;
    if (iVar8 == 0) {
      ppppiVar13 = local_b8;
    }
    if (ppppiVar13 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x10,0x370);
    }
    FUN_016dd1aa(local_b8,&local_640,0x370);
    puVar14 = &UNK_0185c788;
  }
  if ((local_c04 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_c00);
  }
  if (local_be0 != 0) {
    thunk_FUN_016d3fb4(local_bdc);
  }
  if ((local_bf8 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_bf4);
  }
  if ((bool)uVar3) {
    FUN_0076ee14(auStack_d18);
  }
  do {
    pppiVar10 = *ppppiVar13;
    bVar2 = (bool)hasExclusiveAccess(ppppiVar13);
  } while (!bVar2);
  *ppppiVar13 = (int ***)((int)pppiVar10 + 1);
  if (-1 < (int)pppiVar10) {
    piVar11 = (int *)thunk_FUN_016d4a50(0xc);
    if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    *(undefined1 *)(piVar11 + 2) = 0;
    *piVar11 = 1;
    piVar11[1] = 1;
    FUN_00791b04(&local_640);
    do {
      pppiVar10 = *ppppiVar13;
      bVar2 = (bool)hasExclusiveAccess(ppppiVar13);
    } while (!bVar2);
    *ppppiVar13 = (int ***)((int)pppiVar10 + 1);
    if (-1 < (int)pppiVar10) {
      do {
        pppiVar10 = *ppppiVar13;
        bVar2 = (bool)hasExclusiveAccess(ppppiVar13);
      } while (!bVar2);
      *ppppiVar13 = (int ***)((int)pppiVar10 + 1);
      if (-1 < (int)pppiVar10) {
        do {
          iVar8 = *piVar11;
          bVar2 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar2);
        *piVar11 = iVar8 + 1;
        if (-1 < iVar8) {
          param_1[0x12] = piVar11;
          param_1[0x13] = piVar7;
          param_1[0x14] = local_640;
          param_1[0x15] = local_63c;
          param_1[0x16] = local_638;
          *(undefined1 *)(param_1 + 0x17) = uVar1;
          param_1[10] = 4;
          param_1[0xd] = 0;
          param_1[0xe] = piVar11;
          param_1[0xf] = ppppiVar13;
          param_1[0x10] = puVar14;
          *(undefined1 *)((int)param_1 + 0x5d) = 0;
          param_1[9] = 0;
          param_1[0xb] = 0;
          param_1[0xc] = 0;
          *(undefined1 *)(param_1 + 8) = 0;
          param_1[0x11] = uVar6;
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = ppppiVar13;
          param_1[3] = puVar14;
          param_1[4] = ppppiVar13;
          param_1[5] = puVar14;
          param_1[6] = 0;
          param_1[7] = 0;
          DataMemoryBarrier(0xb);
          do {
            pppiVar10 = *ppppiVar13;
            bVar2 = (bool)hasExclusiveAccess(ppppiVar13);
          } while (!bVar2);
          *ppppiVar13 = (int ***)((int)pppiVar10 + -1);
          if (pppiVar10 == (int ***)0x1) {
            DataMemoryBarrier(0xb);
            FUN_007846b4(ppppiVar13,puVar14);
          }
          return;
        }
      }
    }
  }
LAB_0079dc04:
                    /* WARNING: Does not return */
  pcVar12 = (code *)software_udf(0xfdee,0x79dc04);
  (*pcVar12)();
}

