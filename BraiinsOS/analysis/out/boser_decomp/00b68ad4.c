// FUN_00b68ad4 @ 00b68ad4 size=1528 calls_out=10 calls_in=2
// strings: 

void FUN_00b68ad4(int *param_1,uint *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  int *local_e8;
  undefined4 *local_e4;
  undefined4 local_e0;
  int *local_dc;
  uint local_d8;
  undefined4 *local_d4;
  uint local_d0;
  uint local_cc;
  undefined4 *local_c8;
  undefined4 *local_c4;
  undefined4 *local_c0;
  undefined4 *local_bc;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  local_c0 = (undefined4 *)FUN_009dccdc(0);
  local_50 = 2;
  local_4c = 1;
  local_48 = 1;
  local_dc = (int *)&DAT_00000001;
  local_e0 = 1;
  local_bc = (undefined4 *)0x0;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_74 = 0;
  local_78 = 0;
  local_7c = 0;
  local_80 = 0;
  local_64 = 0;
  local_68 = 0;
  local_44 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_e8 = (int *)0x0;
  local_70 = (uint)local_c0;
  local_6c = (uint)local_c0;
  iVar5 = FUN_01be5878(&local_e8,0x20,0xa0);
  piVar3 = local_e8;
  if ((iVar5 != 0) || (local_e8 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(0x20,0xa0);
  }
  FUN_01bed4e2(local_e8,&local_e0,0xa0);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + 1;
  if (-1 < iVar5) {
    puVar6 = (undefined4 *)thunk_FUN_01be5118(0x20);
    if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x20);
    }
    *(undefined1 *)(puVar6 + 5) = 0;
    puVar6[6] = 2;
    puVar6[7] = piVar3;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *(undefined1 *)(puVar6 + 2) = 0;
    *puVar6 = 1;
    puVar6[1] = 1;
    puVar7 = (undefined4 *)thunk_FUN_01be5118(0xc);
    if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    *(undefined1 *)(puVar7 + 2) = 0;
    *puVar7 = 1;
    puVar7[1] = 1;
    puVar8 = (undefined4 *)thunk_FUN_01be5118(4);
    if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,4);
    }
    *puVar8 = 0x30687465;
    FUN_00744854(&local_e0,0);
    piVar14 = local_dc;
    uVar4 = local_e0;
    piVar9 = local_dc + 0x29;
    do {
      iVar5 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar5 + -1;
    if (iVar5 == 1) {
      FUN_019e03e8(local_dc + 0x22);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar14;
      bVar2 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar2);
    *piVar14 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(piVar14);
    }
    puVar10 = (undefined4 *)thunk_FUN_01be5118(0x1c);
    if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x1c);
    }
    puVar10[6] = 2;
    *(undefined1 *)(puVar10 + 5) = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    *puVar10 = 1;
    puVar10[1] = 1;
    puVar11 = (undefined4 *)thunk_FUN_01be5118(0x1c);
    if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x1c);
    }
    puVar11[6] = 2;
    *(undefined1 *)(puVar11 + 5) = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    *(undefined1 *)(puVar11 + 2) = 0;
    *puVar11 = 1;
    puVar11[1] = 1;
    puVar12 = (undefined4 *)thunk_FUN_01be5118(0xc);
    if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    *(undefined1 *)(puVar12 + 2) = 0;
    *puVar12 = 1;
    puVar12[1] = 1;
    puVar13 = (undefined4 *)thunk_FUN_01be5118(0x18);
    if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x18);
    }
    puVar13[4] = 0;
    puVar13[5] = 0;
    *(undefined1 *)(puVar13 + 3) = 0;
    *puVar13 = 1;
    puVar13[1] = 1;
    puVar13[2] = 0;
    local_cc = uVar4;
    local_d0 = 4;
    local_d8 = 4;
    local_dc = (int *)0x1;
    local_e0 = 1;
    local_d4 = puVar8;
    local_c8 = puVar10;
    local_c4 = puVar11;
    local_c0 = puVar12;
    local_bc = puVar13;
    puVar8 = (undefined4 *)thunk_FUN_01be5118(0x28);
    if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x28);
    }
    *puVar8 = local_e0;
    puVar8[1] = local_dc;
    puVar8[2] = local_d8;
    puVar8[3] = local_d4;
    puVar8[4] = local_d0;
    puVar8[5] = local_cc;
    puVar8[6] = local_c8;
    puVar8[7] = local_c4;
    puVar8[8] = local_c0;
    puVar8[9] = local_bc;
    local_d8 = *param_2;
    local_d4 = (undefined4 *)param_2[1];
    local_d0 = param_2[2];
    local_cc = param_2[3];
    local_c8 = (undefined4 *)param_2[4];
    local_c4 = (undefined4 *)param_2[5];
    local_c0 = (undefined4 *)param_2[6];
    local_bc = (undefined4 *)param_2[7];
    local_dc = (int *)&DAT_00000001;
    local_e0 = 1;
    puVar10 = (undefined4 *)thunk_FUN_01be5118(0x28);
    if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x28);
    }
    *puVar10 = local_e0;
    puVar10[1] = local_dc;
    puVar10[2] = local_d8;
    puVar10[3] = local_d4;
    puVar10[4] = local_d0;
    puVar10[5] = local_cc;
    puVar10[6] = local_c8;
    puVar10[7] = local_c4;
    puVar10[8] = local_c0;
    puVar10[9] = local_bc;
    local_e8 = piVar3;
    local_e4 = puVar6;
    piVar14 = (int *)thunk_FUN_01be5118(0xe0);
    if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0xe0);
    }
    *(undefined1 *)(piVar14 + 3) = 0;
    piVar9 = piVar14 + 0x35;
    *piVar9 = 1;
    *piVar14 = 1;
    piVar14[0x28] = 3;
    piVar14[1] = 1;
    piVar14[2] = 0;
    piVar14[4] = 0;
    piVar14[5] = 0;
    piVar14[6] = 0;
    *(undefined1 *)(piVar14 + 7) = 0;
    piVar14[8] = 0;
    piVar14[9] = 0;
    piVar14[10] = 0;
    *(undefined1 *)(piVar14 + 0xb) = 0;
    piVar14[0xc] = 0;
    piVar14[0xd] = 0;
    piVar14[0xe] = 0;
    *(undefined1 *)(piVar14 + 0xf) = 0;
    *(undefined1 *)(piVar14 + 0x13) = 0;
    piVar14[0x10] = 0;
    piVar14[0x11] = 0;
    piVar14[0x12] = 0;
    *(undefined1 *)(piVar14 + 0x17) = 0;
    piVar14[0x14] = 0;
    piVar14[0x15] = 0;
    piVar14[0x16] = 0;
    piVar14[0x18] = 0;
    piVar14[0x19] = 0;
    piVar14[0x1a] = 0;
    *(undefined1 *)(piVar14 + 0x1b) = 0;
    piVar14[0x1c] = 0;
    piVar14[0x1d] = 0;
    piVar14[0x1e] = 0;
    *(undefined1 *)(piVar14 + 0x1f) = 0;
    piVar14[0x20] = 0;
    piVar14[0x21] = 0;
    piVar14[0x22] = 0;
    *(undefined1 *)(piVar14 + 0x23) = 0;
    piVar14[0x24] = 0;
    piVar14[0x25] = 0;
    piVar14[0x26] = 0;
    piVar14[0x27] = 0;
    piVar14[0x29] = 0;
    piVar14[0x36] = 1;
    piVar14[0x34] = 0;
    do {
      iVar5 = *piVar14;
      bVar2 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar2);
    *piVar14 = iVar5 + 1;
    if (-1 < iVar5) {
      do {
        iVar5 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar5 + -1;
      if (iVar5 == 1) {
        FUN_019e03e8(piVar14 + 0x22);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar14;
        bVar2 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar2);
      *piVar14 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a97614(piVar14);
      }
      puVar11 = (undefined4 *)thunk_FUN_01be5118(0xc);
      if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0xc);
      }
      local_b0 = 4;
      *puVar11 = 1;
      puVar11[1] = 1;
      puVar11[2] = piVar14;
      local_dc = (int *)0x1;
      local_e0 = 1;
      local_ac = 0;
      local_c8 = (undefined4 *)0x2;
      local_cc = local_cc & 0xffffff00;
      local_d0 = 0;
      local_d4 = (undefined4 *)0x0;
      local_d8 = local_d8 & 0xffffff00;
      iVar5 = thunk_FUN_01be5118(0x88);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x88);
      }
      FUN_01bed4e2(iVar5,&local_e0,0x88);
      *param_1 = (int)puVar10;
      param_1[1] = param_3;
      param_1[8] = (int)&DAT_01d4c774;
      param_1[3] = (int)piVar3;
      param_1[2] = (int)puVar8;
      param_1[4] = (int)puVar6;
      param_1[5] = (int)puVar7;
      param_1[6] = (int)puVar11;
      param_1[7] = iVar5;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xb690f8);
  (*pcVar1)();
}

