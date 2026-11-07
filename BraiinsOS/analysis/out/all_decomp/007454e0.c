// FUN_007454e0 @ 007454e0 size=2948 calls_out=9 calls_in=1
// strings: 

void FUN_007454e0(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  code *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined2 uVar11;
  int iVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  bool bVar15;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  undefined1 auStack_1a8 [8];
  int local_1a0;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined2 local_134;
  undefined2 local_132;
  undefined4 local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  int local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined1 auStack_b0 [104];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_2a;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x105)) {
  case 0:
    uVar9 = 0;
    uVar3 = *(undefined4 *)(param_2 + 0xb4);
    *(undefined1 *)(param_2 + 0x104) = 0;
    *(undefined4 *)(param_2 + 0x68) = uVar3;
    FUN_016dd1aa(param_2 + 0x6c,param_2 + 0xc0,0x44);
    uVar14 = *(undefined2 *)(param_2 + 0xb8);
    uVar13 = *(undefined2 *)(param_2 + 0xba);
    uVar1 = *(undefined1 *)(param_2 + 0xac);
    *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_2 + 0xbc);
    if (*(short *)(param_2 + 0x6c) == 1) {
      iVar4 = *(int *)(param_2 + 0x78);
      if (iVar4 < 0) {
LAB_0074557c:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar9,iVar4);
      }
      uVar9 = *(undefined4 *)(param_2 + 0x74);
      uVar2 = 1;
      if (iVar4 == 0) {
        local_1c0 = 0;
        local_1bc = 1;
      }
      else {
        local_1bc = thunk_FUN_016d4a50(iVar4);
        local_1c0 = iVar4;
        if (local_1bc == 0) {
          uVar9 = 1;
          goto LAB_0074557c;
        }
      }
      FUN_016dd1aa(local_1bc,uVar9,iVar4);
      if (*(short *)(param_2 + 0x90) != 1) goto LAB_00745688;
LAB_007455dc:
      iVar12 = *(int *)(param_2 + 0x9c);
      uVar9 = 0;
      if (iVar12 < 0) {
LAB_007455ec:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar9,iVar12);
      }
      uVar9 = *(undefined4 *)(param_2 + 0x98);
      if (iVar12 == 0) {
        local_1d4 = 0;
        local_1d0 = 1;
      }
      else {
        local_1d0 = thunk_FUN_016d4a50(iVar12);
        local_1d4 = iVar12;
        if (local_1d0 == 0) {
          uVar9 = 1;
          goto LAB_007455ec;
        }
      }
      FUN_016dd1aa(local_1d0,uVar9,iVar12);
      uVar11 = 1;
    }
    else {
      local_1c0 = *(int *)(param_2 + 0xc4);
      local_3a = *(undefined2 *)(param_2 + 0xc2);
      local_1bc = *(int *)(param_2 + 200);
      uVar2 = *(undefined2 *)(param_2 + 0xc0);
      iVar4 = *(int *)(param_2 + 0xcc);
      local_118 = *(undefined4 *)(param_2 + 0xd0);
      uStack_114 = *(undefined4 *)(param_2 + 0xd4);
      local_110 = *(int *)(param_2 + 0xd8);
      uStack_10c = *(undefined4 *)(param_2 + 0xdc);
      uStack_108 = *(undefined4 *)(param_2 + 0xe0);
      if (*(short *)(param_2 + 0x90) == 1) goto LAB_007455dc;
LAB_00745688:
      local_1d4 = *(int *)(param_2 + 0x94);
      local_1d0 = *(int *)(param_2 + 0x98);
      iVar12 = *(int *)(param_2 + 0x9c);
      local_38 = *(undefined4 *)(param_2 + 0xa0);
      uStack_34 = *(undefined4 *)(param_2 + 0xa4);
      uStack_30 = *(undefined4 *)(param_2 + 0xa8);
      local_2a = *(undefined2 *)(param_2 + 0x92);
      uVar11 = 0;
    }
    local_132 = local_3a;
    local_130 = local_118;
    uStack_12c = uStack_114;
    iStack_128 = local_110;
    uStack_124 = uStack_10c;
    uStack_120 = uStack_108;
    local_134 = local_2a;
    local_140 = local_38;
    local_13c = uStack_34;
    local_138 = uStack_30;
    *(undefined4 *)(param_2 + 0x1c4) = uVar3;
    *(undefined2 *)(param_2 + 0x1c8) = uVar2;
    *(undefined2 *)(param_2 + 0x1ca) = local_3a;
    *(int *)(param_2 + 0x1cc) = local_1c0;
    *(int *)(param_2 + 0x1d0) = local_1bc;
    *(int *)(param_2 + 0x1d4) = iVar4;
    *(undefined4 *)(param_2 + 0x1d8) = local_118;
    *(undefined4 *)(param_2 + 0x1dc) = uStack_114;
    *(int *)(param_2 + 0x1e0) = local_110;
    *(undefined4 *)(param_2 + 0x1e4) = uStack_10c;
    *(undefined4 *)(param_2 + 0x1e8) = uStack_108;
    *(undefined1 *)(param_2 + 0x208) = uVar1;
    *(undefined2 *)(param_2 + 0x212) = uVar13;
    *(undefined2 *)(param_2 + 0x210) = uVar14;
    *(undefined2 *)(param_2 + 0x1ee) = local_2a;
    *(int *)(param_2 + 0x1f0) = local_1d4;
    *(int *)(param_2 + 500) = local_1d0;
    *(int *)(param_2 + 0x1f8) = iVar12;
    *(undefined4 *)(param_2 + 0x1fc) = local_38;
    *(undefined4 *)(param_2 + 0x200) = uStack_34;
    *(undefined4 *)(param_2 + 0x204) = uStack_30;
    *(undefined2 *)(param_2 + 0x20c) = 0;
    *(undefined1 *)(param_2 + 0x215) = 0;
    *(undefined2 *)(param_2 + 0x1ec) = uVar11;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185a428);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185a428);
  case 4:
    goto switchD_0074550c_caseD_4;
  case 5:
    goto switchD_0074550c_caseD_5;
  }
  FUN_00742c9c(auStack_1a8,param_2 + 0x108);
  if (local_1a0 == 0x3b9aca01) {
    *(undefined4 *)(param_1 + 8) = 0x3b9aca01;
    *(undefined1 *)(param_2 + 0x105) = 3;
    return;
  }
  FUN_016dd1aa(param_2,auStack_1a8,0x68);
  if (*(char *)(param_2 + 0x215) == '\x03') {
    puVar10 = *(undefined4 **)(param_2 + 0x174);
    uVar9 = *(undefined4 *)(param_2 + 0x170);
    pcVar7 = (code *)*puVar10;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(uVar9);
    }
    if (puVar10[1] != 0) {
      thunk_FUN_016d3fb4(uVar9);
    }
    *(undefined1 *)(param_2 + 0x214) = 0;
  }
  else if (*(char *)(param_2 + 0x215) == '\0') {
    bVar15 = *(short *)(param_2 + 0x1c8) != 0;
    iVar4 = 0;
    if (bVar15) {
      iVar4 = *(int *)(param_2 + 0x1cc);
    }
    if (bVar15 && iVar4 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x1d0));
    }
    bVar15 = *(short *)(param_2 + 0x1ec) != 0;
    iVar4 = 0;
    if (bVar15) {
      iVar4 = *(int *)(param_2 + 0x1f0);
    }
    if (bVar15 && iVar4 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 500));
    }
  }
  if (*(undefined1 **)(param_2 + 8) == &DAT_3b9aca00) {
    uVar1 = *(undefined1 *)(param_2 + 0xac);
    uVar9 = *(undefined4 *)(param_2 + 0x68);
    if (*(short *)(param_2 + 0x6c) == 1) {
      iVar4 = *(int *)(param_2 + 0x78);
      uVar3 = 0;
      if (iVar4 < 0) {
LAB_007458d4:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar3,iVar4);
      }
      uVar3 = *(undefined4 *)(param_2 + 0x74);
      local_1cc._0_2_ = 1;
      if (iVar4 == 0) {
        local_1b8 = 0;
        local_1bc = 1;
      }
      else {
        local_1bc = thunk_FUN_016d4a50(iVar4);
        local_1b8 = iVar4;
        if (local_1bc == 0) {
          uVar3 = 1;
          goto LAB_007458d4;
        }
      }
      FUN_016dd1aa(local_1bc,uVar3,iVar4);
      if (*(short *)(param_2 + 0x90) != 1) goto LAB_00745ab8;
LAB_00745964:
      iVar12 = *(int *)(param_2 + 0x9c);
      uVar3 = 0;
      if (iVar12 < 0) {
LAB_00745974:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar3,iVar12);
      }
      uVar3 = *(undefined4 *)(param_2 + 0x98);
      if (iVar12 == 0) {
        local_1d0 = 0;
        local_1c8 = 1;
      }
      else {
        local_1c8 = thunk_FUN_016d4a50(iVar12);
        local_1d0 = iVar12;
        if (local_1c8 == 0) {
          uVar3 = 1;
          goto LAB_00745974;
        }
      }
      FUN_016dd1aa(local_1c8,uVar3,iVar12);
      uVar14 = 1;
    }
    else {
      local_1b8 = *(int *)(param_2 + 0x70);
      local_1bc = *(int *)(param_2 + 0x74);
      local_38 = CONCAT22(local_38._2_2_,*(undefined2 *)(param_2 + 0x6e));
      iVar4 = *(int *)(param_2 + 0x78);
      local_118 = *(undefined4 *)(param_2 + 0x7c);
      uStack_114 = *(undefined4 *)(param_2 + 0x80);
      local_110 = *(int *)(param_2 + 0x84);
      uStack_10c = *(undefined4 *)(param_2 + 0x88);
      uStack_108 = *(undefined4 *)(param_2 + 0x8c);
      local_1cc._0_2_ = 0;
      if (*(short *)(param_2 + 0x90) == 1) goto LAB_00745964;
LAB_00745ab8:
      local_1d0 = *(int *)(param_2 + 0x94);
      local_1c8 = *(int *)(param_2 + 0x98);
      uVar14 = 0;
      iVar12 = *(int *)(param_2 + 0x9c);
      local_48 = *(undefined4 *)(param_2 + 0xa0);
      uStack_44 = *(undefined4 *)(param_2 + 0xa4);
      uStack_40 = *(undefined4 *)(param_2 + 0xa8);
      local_3c = *(undefined2 *)(param_2 + 0x92);
    }
    local_140 = CONCAT22(local_140._2_2_,(undefined2)local_38);
    local_130 = local_118;
    uStack_12c = uStack_114;
    iStack_128 = local_110;
    uStack_124 = uStack_10c;
    uStack_120 = uStack_108;
    *(undefined2 *)(param_2 + 0x1ca) = (undefined2)local_38;
    *(undefined4 *)(param_2 + 0x1c4) = uVar9;
    *(int *)(param_2 + 0x1cc) = local_1b8;
    *(undefined2 *)(param_2 + 0x1c8) = (undefined2)local_1cc;
    *(int *)(param_2 + 0x1d0) = local_1bc;
    *(int *)(param_2 + 0x1d4) = iVar4;
    *(undefined4 *)(param_2 + 0x1d8) = local_118;
    *(undefined4 *)(param_2 + 0x1dc) = uStack_114;
    *(int *)(param_2 + 0x1e0) = local_110;
    *(undefined4 *)(param_2 + 0x1e4) = uStack_10c;
    *(undefined4 *)(param_2 + 0x1e8) = uStack_108;
    *(undefined4 *)(param_2 + 0x210) = *(undefined4 *)(param_2 + 0xb0);
    *(undefined2 *)(param_2 + 0x1ee) = local_3c;
    *(int *)(param_2 + 0x1f0) = local_1d0;
    *(int *)(param_2 + 500) = local_1c8;
    *(undefined1 *)(param_2 + 0x208) = uVar1;
    *(undefined4 *)(param_2 + 0x1fc) = local_48;
    *(undefined4 *)(param_2 + 0x200) = uStack_44;
    *(undefined4 *)(param_2 + 0x204) = uStack_40;
    *(undefined2 *)(param_2 + 0x20c) = 0;
    *(undefined1 *)(param_2 + 0x215) = 0;
    *(undefined2 *)(param_2 + 0x1ec) = uVar14;
    *(int *)(param_2 + 0x1f8) = iVar12;
switchD_0074550c_caseD_5:
    FUN_00742c9c(&local_118,param_2 + 0x108,param_3);
    if (local_110 == 0x3b9aca01) {
      *(undefined4 *)(param_1 + 8) = 0x3b9aca01;
      *(undefined1 *)(param_2 + 0x105) = 5;
      return;
    }
    FUN_016dd1aa(auStack_b0,&local_118,0x68);
    if (*(char *)(param_2 + 0x215) == '\x03') {
      puVar10 = *(undefined4 **)(param_2 + 0x174);
      uVar9 = *(undefined4 *)(param_2 + 0x170);
      pcVar7 = (code *)*puVar10;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar9);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(uVar9);
      }
      *(undefined1 *)(param_2 + 0x214) = 0;
    }
    else if (*(char *)(param_2 + 0x215) == '\0') {
      bVar15 = *(short *)(param_2 + 0x1c8) != 0;
      iVar4 = 0;
      if (bVar15) {
        iVar4 = *(int *)(param_2 + 0x1cc);
      }
      if (bVar15 && iVar4 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x1d0));
      }
      bVar15 = *(short *)(param_2 + 0x1ec) != 0;
      iVar4 = 0;
      if (bVar15) {
        iVar4 = *(int *)(param_2 + 0x1f0);
      }
      if (bVar15 && iVar4 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 500));
        if (*(undefined1 **)(param_2 + 8) != &DAT_3b9aca00) goto LAB_00746024;
        goto LAB_00745fe0;
      }
    }
    if (*(undefined1 **)(param_2 + 8) != &DAT_3b9aca00) goto LAB_00746024;
  }
  else {
    *(undefined1 *)(param_2 + 0x104) = 1;
    FUN_016dd1aa(param_2 + 0x108,param_2,0x68);
    if (*(int *)(param_2 + 0x11c) == 0) {
      uVar1 = *(undefined1 *)(param_2 + 0xac);
      uVar9 = *(undefined4 *)(param_2 + 0x68);
      if (*(short *)(param_2 + 0x6c) == 1) {
        iVar4 = *(int *)(param_2 + 0x78);
        uVar3 = 0;
        if (iVar4 < 0) {
LAB_007459b0:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar3,iVar4);
        }
        uVar3 = *(undefined4 *)(param_2 + 0x74);
        uVar14 = 1;
        if (iVar4 == 0) {
          local_1b8 = 0;
          local_1bc = 1;
        }
        else {
          local_1bc = thunk_FUN_016d4a50(iVar4);
          local_1b8 = iVar4;
          if (local_1bc == 0) {
            uVar3 = 1;
            goto LAB_007459b0;
          }
        }
        FUN_016dd1aa(local_1bc,uVar3,iVar4);
      }
      else {
        local_1b8 = *(int *)(param_2 + 0x70);
        local_1bc = *(int *)(param_2 + 0x74);
        local_3a = *(undefined2 *)(param_2 + 0x6e);
        iVar4 = *(int *)(param_2 + 0x78);
        local_118 = *(undefined4 *)(param_2 + 0x7c);
        uStack_114 = *(undefined4 *)(param_2 + 0x80);
        local_110 = *(int *)(param_2 + 0x84);
        uStack_10c = *(undefined4 *)(param_2 + 0x88);
        uStack_108 = *(undefined4 *)(param_2 + 0x8c);
        uVar14 = 0;
      }
      if (*(short *)(param_2 + 0x90) == 1) {
        iVar12 = *(int *)(param_2 + 0x9c);
        uVar3 = 0;
        if (iVar12 < 0) {
LAB_00745cf8:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar3,iVar12);
        }
        uVar3 = *(undefined4 *)(param_2 + 0x98);
        if (iVar12 == 0) {
          local_1cc = 0;
          local_1c8 = 1;
        }
        else {
          local_1c8 = thunk_FUN_016d4a50(iVar12);
          local_1cc = iVar12;
          if (local_1c8 == 0) {
            uVar3 = 1;
            goto LAB_00745cf8;
          }
        }
        FUN_016dd1aa(local_1c8,uVar3,iVar12);
        uVar13 = 1;
      }
      else {
        local_1cc = *(int *)(param_2 + 0x94);
        local_1c8 = *(int *)(param_2 + 0x98);
        iVar12 = *(int *)(param_2 + 0x9c);
        local_38 = *(undefined4 *)(param_2 + 0xa0);
        uStack_34 = *(undefined4 *)(param_2 + 0xa4);
        uStack_30 = *(undefined4 *)(param_2 + 0xa8);
        local_2a = *(undefined2 *)(param_2 + 0x92);
        uVar13 = 0;
      }
      local_132 = local_3a;
      local_130 = local_118;
      uStack_12c = uStack_114;
      iStack_128 = local_110;
      uStack_124 = uStack_10c;
      uStack_120 = uStack_108;
      local_134 = local_2a;
      *(undefined2 *)(param_2 + 0x230) = uVar14;
      *(undefined2 *)(param_2 + 0x232) = local_3a;
      *(undefined4 *)(param_2 + 0x22c) = uVar9;
      *(int *)(param_2 + 0x234) = local_1b8;
      local_140 = local_38;
      *(int *)(param_2 + 0x238) = local_1bc;
      local_13c = uStack_34;
      local_138 = uStack_30;
      *(int *)(param_2 + 0x23c) = iVar4;
      *(undefined4 *)(param_2 + 0x240) = local_118;
      *(undefined4 *)(param_2 + 0x244) = uStack_114;
      *(int *)(param_2 + 0x248) = local_110;
      *(undefined4 *)(param_2 + 0x24c) = uStack_10c;
      *(undefined4 *)(param_2 + 0x250) = uStack_108;
      *(undefined4 *)(param_2 + 0x278) = *(undefined4 *)(param_2 + 0xb0);
      *(int *)(param_2 + 600) = local_1cc;
      *(int *)(param_2 + 0x25c) = local_1c8;
      *(undefined2 *)(param_2 + 0x254) = uVar13;
      *(undefined4 *)(param_2 + 0x264) = local_38;
      *(undefined4 *)(param_2 + 0x268) = uStack_34;
      *(undefined4 *)(param_2 + 0x26c) = uStack_30;
      *(undefined2 *)(param_2 + 0x274) = 0;
      *(undefined2 *)(param_2 + 0x256) = local_2a;
      *(undefined1 *)(param_2 + 0x270) = uVar1;
      *(undefined1 *)(param_2 + 0x27d) = 0;
      *(int *)(param_2 + 0x260) = iVar12;
switchD_0074550c_caseD_4:
      FUN_00742c9c(&local_118,param_2 + 0x170,param_3);
      if (local_110 == 0x3b9aca01) {
        *(undefined4 *)(param_1 + 8) = 0x3b9aca01;
        *(undefined1 *)(param_2 + 0x105) = 4;
        return;
      }
      FUN_016dd1aa(auStack_b0,&local_118,0x68);
      if (*(char *)(param_2 + 0x27d) == '\x03') {
        puVar10 = *(undefined4 **)(param_2 + 0x1dc);
        uVar9 = *(undefined4 *)(param_2 + 0x1d8);
        pcVar7 = (code *)*puVar10;
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(uVar9);
        }
        if (puVar10[1] != 0) {
          thunk_FUN_016d3fb4(uVar9);
        }
        *(undefined1 *)(param_2 + 0x27c) = 0;
      }
      else if (*(char *)(param_2 + 0x27d) == '\0') {
        bVar15 = *(short *)(param_2 + 0x230) != 0;
        iVar4 = 0;
        if (bVar15) {
          iVar4 = *(int *)(param_2 + 0x234);
        }
        if (bVar15 && iVar4 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x238));
        }
        bVar15 = *(short *)(param_2 + 0x254) != 0;
        iVar4 = 0;
        if (bVar15) {
          iVar4 = *(int *)(param_2 + 600);
        }
        if (bVar15 && iVar4 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x25c));
        }
      }
      if (*(char *)(param_2 + 0x104) != '\0') {
        bVar15 = *(short *)(param_2 + 0x120) != 0;
        iVar4 = 0;
        if (bVar15) {
          iVar4 = *(int *)(param_2 + 0x124);
        }
        if (bVar15 && iVar4 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x128));
        }
        bVar15 = *(short *)(param_2 + 0x144) != 0;
        iVar4 = 0;
        if (bVar15) {
          iVar4 = *(int *)(param_2 + 0x148);
        }
        if (bVar15 && iVar4 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x14c));
        }
        piVar5 = *(int **)(param_2 + 0x118);
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar5;
          bVar15 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar15);
        *piVar5 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01059b88(*(undefined4 *)(param_2 + 0x118),*(undefined4 *)(param_2 + 0x11c));
        }
      }
    }
    else {
      *(undefined1 *)(param_2 + 0x104) = 0;
      FUN_016dd1aa(auStack_b0,param_2,0x68);
    }
    *(undefined1 *)(param_2 + 0x104) = 0;
    if (*(undefined1 **)(param_2 + 8) != &DAT_3b9aca00) goto LAB_00746024;
  }
LAB_00745fe0:
  uVar6 = *(uint *)(param_2 + 0xc);
  uVar8 = 1;
  if ((int)uVar6 < 0) {
    uVar8 = uVar6 ^ 0x80000000;
  }
  if (uVar8 != 0) {
    if (uVar8 == 1) {
      if (uVar6 == 0) goto LAB_00746024;
      uVar9 = *(undefined4 *)(param_2 + 0x10);
    }
    else {
      uVar9 = *(undefined4 *)(param_2 + 0x10);
      FUN_01047d98(uVar9);
    }
    thunk_FUN_016d3fb4(uVar9);
  }
LAB_00746024:
  bVar15 = *(short *)(param_2 + 0x6c) != 0;
  iVar4 = 0;
  if (bVar15) {
    iVar4 = *(int *)(param_2 + 0x70);
  }
  if (bVar15 && iVar4 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x74));
  }
  bVar15 = *(short *)(param_2 + 0x90) != 0;
  iVar4 = 0;
  if (bVar15) {
    iVar4 = *(int *)(param_2 + 0x94);
  }
  if (bVar15 && iVar4 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x98));
  }
  FUN_016dd1aa(param_1,auStack_b0,0x68);
  *(undefined1 *)(param_2 + 0x105) = 1;
  return;
}

