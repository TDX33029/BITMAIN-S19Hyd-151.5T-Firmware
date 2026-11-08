// FUN_0143c38c @ 0143c38c size=1612 calls_out=20 calls_in=0
// strings: 

bool FUN_0143c38c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  bool bVar10;
  uint local_410;
  int local_40c;
  uint *local_408;
  int local_404;
  uint local_400;
  uint *local_3f8;
  int iStack_3f4;
  int iStack_3f0;
  uint uStack_3ec;
  int *local_3e8;
  undefined *local_3e4;
  uint *puStack_3e0;
  int iStack_3dc;
  int iStack_3d8;
  uint uStack_3d4;
  int local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  uint *local_250;
  int local_24c;
  int local_248;
  uint local_244;
  uint *local_240;
  int iStack_23c;
  uint uStack_238;
  undefined1 auStack_d8 [16];
  char local_c8;
  undefined4 local_c4;
  uint *local_b8;
  int local_b4;
  uint local_b0;
  uint *local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint *local_7c;
  int local_78;
  uint local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  int local_5c;
  int local_58;
  int local_54;
  uint *local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint *local_38;
  code *local_34;
  uint *local_30;
  code *local_2c;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  bVar10 = iVar1 == 6 && iVar2 == 0;
  if (iVar1 != 6 || iVar2 != 0) {
    bVar10 = iVar1 == 5 && iVar2 == 0;
  }
  if (bVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00409033,0x36,&DAT_018a5c6c);
  }
  if (iVar1 == 4 && iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a67d0,iVar2,param_2);
  }
  FUN_01423980(&local_410,param_1);
  if (local_410 == 3) goto LAB_0143c91c;
  if (local_410 == 2) {
    iVar1 = local_40c;
  }
  else {
    iVar1 = 0;
    if ((local_410 & 1) != 0) {
      local_3e8 = (int *)*param_1;
      local_3e4 = (undefined *)param_1[1];
      *param_1 = 4;
      param_1[1] = 0;
      if (local_3e8 == (int *)0x4 && local_3e4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018a67e0);
      }
      FUN_016dd1aa(&puStack_3e0,param_1 + 2,400);
      FUN_016dd1aa(&local_250,&local_3e8,0x198);
      FUN_016dd1aa(&local_b8,param_1 + 0x40,0x5c);
      if ((local_64 & 1) == 0) {
        puVar6 = &DAT_018ad580;
        iVar1 = local_6c;
        iVar2 = local_70;
        uVar5 = local_64;
      }
      else {
        local_54 = local_6c + (local_64 >> 5);
        local_58 = local_70 - (local_64 >> 5);
        local_5c = local_68 + (local_64 >> 5);
        FUN_00f5ef18(&local_50,&local_5c);
        local_40 = local_64 >> 5;
        if (local_48 < local_40) {
          local_30 = &local_3c;
          local_3c = local_48;
          local_2c = FUN_007883b8;
          local_34 = FUN_007883b8;
          local_38 = &local_40;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00584155,&local_38,&DAT_018a6700);
        }
        iVar1 = local_48 - local_40;
        iVar2 = local_4c + local_40;
        puVar6 = local_50;
        uVar5 = local_44;
      }
      if (local_b0 != 0) {
        thunk_FUN_016d3fb4(local_ac);
      }
      FUN_014f059c(&local_a0);
      if (local_a0 != 0) {
        thunk_FUN_016d3fb4(local_9c);
      }
      FUN_0140af30(&local_3e8);
      local_b0 = local_74;
      local_b4 = local_78;
      local_b8 = local_7c;
      local_9c = local_288;
      uStack_98 = uStack_284;
      uStack_94 = uStack_280;
      uStack_90 = uStack_27c;
      uStack_8c = uStack_278;
      uStack_88 = uStack_274;
      local_ac = puVar6;
      local_a8 = iVar2;
      local_a4 = iVar1;
      local_a0 = uVar5;
      if (local_c8 != '\x03') {
        FUN_0069f218(auStack_d8);
      }
      FUN_0148c594(local_c4);
      local_50 = local_b8;
      local_4c = local_b4;
      local_48 = local_b0;
      local_2c = (code *)local_a0;
      local_38 = local_ac;
      local_34 = (code *)local_a8;
      local_30 = (uint *)local_a4;
      if (local_9c != 2) {
        FUN_014060c0(&local_9c);
      }
      FUN_0141fdd4(&uStack_90);
      local_250 = local_38;
      local_408 = local_50;
      local_404 = local_4c;
      local_400 = local_48;
      local_24c = (int)local_34;
      local_248 = (int)local_30;
      local_244 = (uint)local_2c;
      local_240 = local_50;
      iStack_23c = local_4c;
      uStack_238 = local_48;
      local_3f8 = local_38;
      iStack_3f4 = (int)local_34;
      iStack_3f0 = (int)local_30;
      uStack_3ec = (uint)local_2c;
      piVar7 = (int *)thunk_FUN_016d4a50(0xc);
      if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      puStack_3e0 = local_3f8;
      iStack_3dc = iStack_3f4;
      iStack_3d8 = iStack_3f0;
      uStack_3d4 = uStack_3ec;
      *piVar7 = (int)local_408;
      piVar7[1] = local_404;
      piVar7[2] = local_400;
      local_3e4 = &DAT_018a3aa4;
      local_3e8 = piVar7;
      FUN_010bf0cc(&local_250,local_40c,&local_3e8);
      if (local_250 != (uint *)0x0) {
        FUN_010b51ac(&local_24c);
      }
      iVar1 = 0;
    }
  }
  if (*param_1 == 5 && param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a5c5c);
  }
  piVar7 = (int *)param_1[0x66];
  FUN_0141fa98(param_1);
  *param_1 = 5;
  param_1[1] = 0;
  if (iVar1 == 0) {
    if (piVar7 != (int *)0x0) {
      puVar6 = (uint *)(piVar7 + 6);
      uVar5 = piVar7[6];
      do {
        while( true ) {
          uVar4 = uVar5;
          if ((uVar4 & 4) != 0) goto LAB_0143c82c;
          uVar5 = *puVar6;
          if (uVar5 == uVar4) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar10 = (bool)hasExclusiveAccess(puVar6);
        if (bVar10) {
          *puVar6 = uVar4 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar10);
LAB_0143c82c:
      if ((uVar4 & 5) == 1) {
        (**(code **)(piVar7[4] + 8))(piVar7[5]);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar1 = *piVar7;
        bVar10 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar10);
      *piVar7 = iVar1 + -1;
      goto LAB_0143c860;
    }
  }
  else {
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018a47a4,DAT_018dd947);
    }
    piVar8 = (int *)piVar7[7];
    if (piVar8 != (int *)0x0) {
      iVar2 = *piVar8;
      if (iVar2 != 0) {
        puVar9 = (undefined4 *)piVar8[1];
        pcVar3 = (code *)*puVar9;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(iVar2);
        }
        if (puVar9[1] != 0) {
          thunk_FUN_016d3fb4(iVar2);
        }
      }
      thunk_FUN_016d3fb4(piVar8);
    }
    piVar7[7] = iVar1;
    puVar6 = (uint *)(piVar7 + 6);
    uVar5 = piVar7[6];
    do {
      while( true ) {
        uVar4 = uVar5;
        if ((uVar4 & 4) != 0) goto LAB_0143c788;
        uVar5 = *puVar6;
        if (uVar5 == uVar4) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar10 = (bool)hasExclusiveAccess(puVar6);
      if (bVar10) {
        *puVar6 = uVar4 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar10);
LAB_0143c788:
    if ((uVar4 & 5) == 1) {
      (**(code **)(piVar7[4] + 8))(piVar7[5]);
    }
    if ((uVar4 & 4) == 0) {
      DataMemoryBarrier(0xb);
      do {
        iVar1 = *piVar7;
        bVar10 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar10);
      *piVar7 = iVar1 + -1;
LAB_0143c860:
      if (iVar1 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143f388(piVar7);
      }
    }
    else {
      piVar8 = (int *)piVar7[7];
      piVar7[7] = 0;
      if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018a47b4);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar1 = *piVar7;
        bVar10 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar10);
      *piVar7 = iVar1 + -1;
      if (iVar1 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143f388(piVar7);
      }
      iVar1 = *piVar8;
      if (iVar1 != 0) {
        puVar9 = (undefined4 *)piVar8[1];
        pcVar3 = (code *)*puVar9;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(iVar1);
        }
        if (puVar9[1] != 0) {
          thunk_FUN_016d3fb4(iVar1);
        }
      }
      thunk_FUN_016d3fb4(piVar8);
    }
    if (*param_1 == 6 && param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018a5c5c);
    }
  }
  FUN_0141f958(param_1);
  *param_1 = 6;
  param_1[1] = 0;
LAB_0143c91c:
  return local_410 == 3;
}

