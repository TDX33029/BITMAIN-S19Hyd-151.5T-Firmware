// FUN_00a1563c @ 00a1563c size=1552 calls_out=8 calls_in=16
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a1563c(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *unaff_r10;
  undefined4 *puVar15;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 local_2e8;
  undefined4 *local_2e4;
  undefined4 local_2e0;
  undefined2 local_2dc;
  undefined1 local_2da;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined2 local_2bc;
  undefined1 local_2ba;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 *local_2b0;
  undefined4 *local_2ac;
  undefined4 *local_2a8;
  undefined4 *local_2a4;
  undefined4 *local_2a0;
  undefined4 *local_29c;
  undefined4 local_298;
  undefined4 *local_294;
  undefined4 *local_290;
  undefined4 *local_28c;
  undefined1 local_288;
  undefined2 local_287;
  undefined1 local_285;
  undefined4 local_284;
  undefined4 *local_280;
  undefined4 local_27c;
  undefined1 auStack_278 [176];
  undefined4 *local_1c8;
  undefined4 *local_1c4;
  undefined4 local_1c0;
  undefined4 *local_1bc;
  undefined4 *local_110;
  undefined4 *local_10c;
  undefined4 *local_108;
  undefined4 *local_104;
  undefined4 *local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 *local_f0;
  undefined4 *local_ec;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined2 local_2c;
  
  puVar3 = (undefined4 *)param_2[1];
  puVar13 = (undefined4 *)param_2[2];
  uVar11 = *param_2;
  puVar8 = puVar3 + (int)puVar13 * 0x2c;
  if (puVar13 < (undefined4 *)0x1f) {
    puVar12 = (undefined4 *)0x0;
    local_1c8 = puVar3;
    local_1c4 = puVar3;
    local_1c0 = uVar11;
    local_1bc = puVar8;
    if (puVar13 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)&DAT_00000008;
      puVar13 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)FUN_01298504((int)puVar13 * 0xb8,8);
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,(int)puVar13 * 0xb8);
      }
    }
    puVar14 = local_1bc;
    local_2a8 = (undefined4 *)0x0;
    local_2a0 = local_1c8;
    local_29c = local_1c4;
    local_298 = local_1c0;
    local_294 = local_1bc;
    local_2b0 = puVar13;
    local_2ac = puVar4;
    if (local_1c4 != local_1bc) {
      puVar12 = (undefined4 *)0x0;
      puVar3 = local_1c4;
      do {
        FUN_01bed4e2(&local_108,puVar3,0xb0);
        *puVar4 = 0;
        puVar4[1] = 0;
        FUN_01bed4e2(puVar4 + 2,&local_108,0xb0);
        puVar3 = puVar3 + 0x2c;
        puVar4 = puVar4 + 0x2e;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      } while (puVar3 != puVar14);
      unaff_r10 = param_1;
      local_29c = puVar3;
    }
    local_2e8 = 0xa15afc;
    local_2a8 = puVar12;
    FUN_00949780(&local_2a0);
    local_2e4 = local_2a8;
    local_108 = local_2b0;
    local_104 = local_2ac;
    local_100 = local_2a8;
    local_2e0 = extraout_r12;
    if (local_2a8 < local_2b0) {
      local_2e8 = 0xa15b30;
      iVar7 = FUN_0189bb64(&local_108,local_2a8,8,0xb8);
      local_2e0 = extraout_r12_00;
      if (iVar7 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
    }
    uVar11 = 0x80000000;
    puVar12 = local_104;
    puVar15 = local_100;
  }
  else {
    local_30 = (undefined4 *)&DAT_ffffffff;
    local_fc = 0;
    local_100 = (undefined4 *)0x0;
    local_40 = 0;
    local_104 = (undefined4 *)0x1;
    local_108 = (undefined4 *)0x1;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_2c = 1;
    puVar13 = (undefined4 *)thunk_FUN_01be5118(0xe0);
    if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0xe0);
    }
    FUN_01bed4e2(puVar13,&local_108,0xe0);
    local_f0 = puVar13 + 2;
    local_f4 = 0;
    local_fc = 0;
    local_104 = (undefined4 *)0x1;
    local_108 = (undefined4 *)0x1;
    local_100 = puVar13;
    local_ec = local_f0;
    unaff_r10 = (undefined4 *)thunk_FUN_01be5118(0x20);
    if (unaff_r10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x20);
    }
    *unaff_r10 = local_108;
    unaff_r10[1] = local_104;
    unaff_r10[2] = local_100;
    unaff_r10[3] = local_fc;
    unaff_r10[4] = local_f8;
    unaff_r10[5] = local_f4;
    unaff_r10[6] = local_f0;
    unaff_r10[7] = local_ec;
    local_2b4 = 0;
    local_2b8 = 0;
    local_2b0 = puVar3;
    local_2a8 = (undefined4 *)uVar11;
    local_2a4 = puVar8;
    if (puVar3 != puVar8) {
      puVar14 = (undefined4 *)0x0;
      local_2e0 = 0;
      local_2e8 = 0;
      puVar13 = (undefined4 *)&DAT_00000008;
      puVar12 = (undefined4 *)0x0;
      puVar15 = (undefined4 *)0x0;
      do {
        puVar5 = puVar3 + 0x2c;
        local_2ac = puVar5;
        FUN_01bed4e2(auStack_278,puVar3,0xb0);
        local_298 = local_2b8;
        local_294 = (undefined4 *)local_2b4;
        local_288 = 0;
        local_27c = local_2e8;
        local_284 = local_2e0;
        local_285 = local_2ba;
        local_287 = local_2bc;
        local_2a0 = puVar12;
        local_29c = puVar15;
        local_290 = unaff_r10;
        local_28c = puVar14;
        local_280 = puVar13;
        FUN_01bed4e2(&local_1c0,puVar3,0xb0);
        local_1c8 = (undefined4 *)0x1;
        local_2a0 = (undefined4 *)((int)puVar12 + 1);
        iVar7 = unaff_r10[2];
        local_29c = (undefined4 *)((int)puVar15 + (uint)((undefined4 *)0xfffffffe < puVar12));
        piVar6 = unaff_r10 + 1;
        local_1c4 = (undefined4 *)0x0;
LAB_00a158bc:
        iVar9 = *piVar6;
        do {
          if (iVar9 == -1) goto LAB_00a15910;
          local_110 = puVar12;
          local_10c = puVar15;
          if (iVar9 < 0) {
            local_104 = (undefined4 *)&DAT_0132b6a0;
            local_108 = (undefined4 *)&DAT_01d2e878;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_00590e5f,&local_108,&DAT_01d2e880);
          }
          iVar10 = *piVar6;
          if (iVar10 == iVar9) {
            bVar1 = (bool)hasExclusiveAccess(piVar6);
            if (bVar1) {
              *piVar6 = iVar9 + 1;
            }
            bVar2 = false;
            if (bVar1) {
              DataMemoryBarrier(0xb);
              bVar2 = true;
            }
          }
          else {
            bVar2 = false;
            ClearExclusiveLocal();
          }
          iVar9 = iVar10;
        } while (!bVar2);
        FUN_01bed4e2(&local_100,&local_1c8,0xc0);
        local_34 = 0;
        local_2c = 1;
        local_40 = iVar7 + 8;
        local_38 = 0;
        local_3c = 0;
        local_104 = (undefined4 *)0x1;
        local_108 = (undefined4 *)0x1;
        local_30 = unaff_r10;
        iVar7 = thunk_FUN_01be5118(0xe0);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0xe0);
        }
        FUN_01bed4e2(iVar7,&local_108,0xe0);
        puVar14 = (undefined4 *)(iVar7 + 8);
        local_288 = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(&local_28c);
        } while (!bVar2);
        DataMemoryBarrier(0xb);
        if (local_28c == (undefined4 *)0x0) {
          *(undefined4 *)(iVar7 + 0xd0) = 1;
          DataMemoryBarrier(0xb);
          *(undefined4 *)(iVar7 + 200) = 0;
        }
        else {
          do {
            DataMemoryBarrier(0xb);
          } while (local_28c[0x30] == local_290[2] + 8);
          *(int *)(iVar7 + 0xd0) = local_28c[0x32] + 1;
          DataMemoryBarrier(0xb);
          *(undefined4 **)(iVar7 + 200) = local_28c;
          local_28c[0x31] = puVar14;
        }
        piVar6 = local_290 + 6;
        *(undefined4 *)(iVar7 + 0xd4) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = (int)puVar14;
        DataMemoryBarrier(0xb);
        *(undefined4 **)(iVar7 + 0xcc) = puVar14;
        local_2b8 = local_298;
        local_2b4 = local_294;
        local_2e0 = local_284;
        local_2e8 = local_27c;
        local_2bc = local_287;
        local_2ba = local_285;
        puVar13 = local_280;
        puVar4 = local_280;
        puVar12 = local_2a0;
        puVar3 = puVar5;
        unaff_r10 = local_290;
        puVar15 = local_29c;
        local_28c = puVar14;
        if (puVar5 == puVar8) goto LAB_00a15b68;
      } while( true );
    }
    puVar14 = (undefined4 *)0x0;
    local_2e0 = 0;
    local_2e8 = 0;
    puVar4 = (undefined4 *)&DAT_00000008;
    puVar12 = (undefined4 *)0x0;
    puVar15 = (undefined4 *)0x0;
    local_2ac = puVar3;
LAB_00a15b68:
    local_2e4 = (undefined4 *)0x0;
    local_2d8 = local_2b8;
    local_2d4 = local_2b4;
    local_2dc = local_2bc;
    local_2da = local_2ba;
    FUN_00949780(&local_2b0);
    uVar11 = 0;
  }
  *param_1 = puVar12;
  param_1[1] = puVar15;
  param_1[2] = local_2d8;
  param_1[3] = local_2d4;
  param_1[4] = unaff_r10;
  *(char *)(param_1 + 6) = (char)local_2e4;
  param_1[5] = puVar14;
  *(undefined2 *)((int)param_1 + 0x19) = local_2dc;
  *(undefined1 *)((int)param_1 + 0x1b) = local_2da;
  param_1[7] = local_2e0;
  param_1[8] = puVar4;
  param_1[9] = local_2e8;
  param_1[10] = uVar11;
  param_1[0xb] = 8;
  param_1[0xc] = 0;
  return;
LAB_00a15910:
  HintYield();
  goto LAB_00a158bc;
}

