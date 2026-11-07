// FUN_00bac194 @ 00bac194 size=916 calls_out=9 calls_in=1
// strings: 

void FUN_00bac194(undefined4 param_1,int param_2,int param_3)

{
  int **ppiVar1;
  int extraout_r1;
  int extraout_r1_00;
  int iVar2;
  int *piVar3;
  bool bVar4;
  undefined4 *local_148;
  int local_144;
  undefined4 local_140;
  undefined1 *local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined2 local_114;
  undefined1 *local_110 [10];
  int local_e8;
  int local_e4;
  int *local_e0;
  undefined4 *local_dc;
  int *local_d8;
  int *local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int *local_b8;
  undefined4 *local_b4;
  int **local_b0;
  undefined4 *local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 *local_90 [10];
  int local_68;
  int local_64;
  int *local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int *local_44;
  int *local_40;
  undefined4 *local_3c;
  int *local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  ppiVar1 = &local_b8;
  iVar2 = param_2 + param_3 * 0x18;
  FUN_00cd5e78(ppiVar1,param_2,iVar2);
  FUN_00bab438(&local_144,ppiVar1);
  local_110[0] = &DAT_00110000;
  local_138 = &DAT_00110000;
  local_e8 = param_2;
  local_e4 = iVar2;
  while (FUN_00cd599c(ppiVar1,&local_138), local_b8 == (int *)0x80000000) {
    iVar2 = extraout_r1;
    if (local_e8 != 0) {
      iVar2 = local_e4;
    }
    if (local_e8 == 0 || local_e8 == iVar2) {
      FUN_00cd599c(&local_d0,local_110);
      if (local_d0 != (int *)0x80000000) goto LAB_00bac2a0;
      goto LAB_00bac26c;
    }
    local_134 = *(undefined4 *)(local_e8 + 0x10);
    uStack_130 = *(undefined4 *)(local_e8 + 0x14);
    local_e8 = local_e8 + 0x18;
    local_114 = 0;
    local_11c = 0;
    local_120 = 1;
    local_124 = 10;
    local_138 = (undefined1 *)0xa;
    uStack_12c = 0;
    local_128 = uStack_130;
    local_118 = uStack_130;
  }
  local_d0 = local_b8;
  uStack_cc = local_b4;
  uStack_c8 = local_b0;
  uStack_c4 = local_ac;
  uStack_c0 = local_a8;
  uStack_bc = local_a4;
  if (local_b8 == (int *)0x80000000) {
LAB_00bac26c:
    local_38 = (int *)0x0;
    local_3c = (undefined4 *)&DAT_00000004;
    local_40 = (int *)0x0;
  }
  else {
LAB_00bac2a0:
    if (local_e8 == 0) {
      if (local_138 == &DAT_00110000 && local_110[0] == &DAT_00110000) {
        ppiVar1 = &local_40;
      }
    }
    else if ((local_138 == &DAT_00110000 && local_110[0] == &DAT_00110000) && (local_e4 == local_e8)
            ) {
      ppiVar1 = &local_40;
    }
    *ppiVar1 = (int *)0x0;
    local_148 = (undefined4 *)thunk_FUN_016d4a50(0x60);
    if (local_148 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,0x60);
    }
    *local_148 = local_d0;
    local_148[1] = uStack_cc;
    local_148[2] = uStack_c8;
    local_148[3] = uStack_c4;
    local_148[4] = uStack_c0;
    local_148[5] = uStack_bc;
    local_e0 = (int *)0x4;
    local_d8 = (int *)0x1;
    local_dc = local_148;
    FUN_016dd1aa(&local_b8,&local_138,0x58);
    piVar3 = (int *)0x1;
    while( true ) {
      while (FUN_00cd599c(&local_40,&local_b8), local_40 == (int *)0x80000000) {
        iVar2 = extraout_r1_00;
        if (local_68 != 0) {
          iVar2 = local_64;
        }
        if (local_68 == 0 || local_68 == iVar2) {
          FUN_00cd599c(&local_60,local_90);
          if (local_60 != (int *)0x80000000) goto LAB_00bac3c0;
          goto LAB_00bac498;
        }
        local_b4 = *(undefined4 **)(local_68 + 0x10);
        local_b0 = *(int ***)(local_68 + 0x14);
        local_68 = local_68 + 0x18;
        local_94 = 0;
        local_9c = 0;
        local_a0 = 1;
        local_a4 = 10;
        local_b8 = (int *)0xa;
        local_ac = (undefined4 *)0x0;
        local_a8 = local_b0;
        local_98 = local_b0;
      }
      local_60 = local_40;
      iStack_5c = (int)local_3c;
      iStack_58 = (int)local_38;
      iStack_54 = iStack_34;
      iStack_50 = iStack_30;
      iStack_4c = iStack_2c;
      if (local_40 == (int *)0x80000000) break;
LAB_00bac3c0:
      if (piVar3 == local_e0) {
        ppiVar1 = &local_40;
        if (local_68 == 0) {
          if (local_b8 == (int *)&DAT_00110000) {
            bVar4 = local_90[0] == &DAT_00110000;
            goto LAB_00bac448;
          }
        }
        else if ((local_b8 == (int *)&DAT_00110000) && (local_90[0] == &DAT_00110000)) {
          bVar4 = local_64 == local_68;
LAB_00bac448:
          if (bVar4) {
            ppiVar1 = &local_44;
          }
        }
        *ppiVar1 = (int *)0x0;
        FUN_00d653ec(&local_e0,piVar3,1,4,0x18);
        local_148 = local_dc;
      }
      local_d8 = (int *)((int)piVar3 + 1);
      piVar3 = local_148 + (int)piVar3 * 6;
      *piVar3 = (int)local_60;
      piVar3[1] = iStack_5c;
      piVar3[2] = iStack_58;
      piVar3[3] = iStack_54;
      piVar3[4] = iStack_50;
      piVar3[5] = iStack_4c;
      piVar3 = local_d8;
    }
LAB_00bac498:
    local_40 = local_e0;
    local_3c = local_dc;
    local_38 = local_d8;
  }
  FUN_00bab438(&local_e0,&local_40);
  local_ac = &DAT_006043a8;
  local_b4 = &DAT_006043a8;
  local_b8 = &local_144;
  local_b0 = &local_e0;
  FUN_00600d2c(param_1,&DAT_00571962,&local_b8);
  if (local_e0 != (int *)0x0) {
    thunk_FUN_016d3fb4(local_dc);
  }
  if (local_144 != 0) {
    thunk_FUN_016d3fb4(local_140);
  }
  return;
}

