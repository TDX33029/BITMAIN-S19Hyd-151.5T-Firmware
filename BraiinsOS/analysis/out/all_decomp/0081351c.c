// FUN_0081351c @ 0081351c size=1888 calls_out=22 calls_in=2
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

/* WARNING: Removing unreachable block (ram,0x00813974) */

int FUN_0081351c(uint *param_1,undefined4 *param_2)

{
  char cVar1;
  uint **ppuVar2;
  undefined1 uVar3;
  uint *puVar4;
  int iVar5;
  code *pcVar6;
  uint *puVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  bool bVar15;
  ulonglong uVar16;
  code *local_d0;
  undefined1 *local_cc;
  uint *local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined8 local_78;
  uint **local_70;
  code *local_6c;
  uint *local_28;
  
  if ((*param_1 & 1) != 0) {
    puVar4 = (uint *)FUN_01657fc4(param_1 + 2,*param_2);
    goto LAB_008138a0;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x19)) {
  case 0:
    *(undefined1 *)(param_1 + 6) = 0;
    uVar3 = *(undefined1 *)param_1[4];
    *(undefined1 *)((int)param_1 + 0x39) = 0;
    uVar9 = param_1[2];
    uVar10 = param_1[3];
    *(undefined1 *)((int)param_1 + 0x3a) = uVar3;
    param_1[0xc] = uVar9;
    param_1[0xd] = uVar10;
LAB_0081359c:
    *(undefined1 *)(param_1 + 0xe) = uVar3;
    param_1[8] = uVar9;
    FUN_008219a8(&local_78,uVar10);
    pcVar8 = local_78._4_4_;
    if ((uint *)local_78 != (uint *)&DAT_80000000) {
      param_1[9] = (uint)(uint *)local_78;
      param_1[10] = (uint)local_78._4_4_;
      param_1[0xb] = (uint)local_70;
      *(undefined1 *)((int)param_1 + 0x51) = 0;
      *(char *)((int)param_1 + 0x52) = (char)param_1[0xe];
      param_1[0x11] = (uint)local_78._4_4_;
      param_1[0x12] = (uint)local_70;
      param_1[0x13] = param_1[8];
switchD_00813604_caseD_3:
      uVar16 = FUN_0080c574(param_1 + 0xf,param_2);
      pcVar8 = (code *)(uVar16 >> 0x20);
      if ((uVar16 & 1) != 0) {
        uVar3 = 3;
        goto LAB_008137b0;
      }
      if (*(char *)((int)param_1 + 0x51) == '\x03') {
        puVar13 = (undefined4 *)param_1[0x10];
        uVar9 = param_1[0xf];
        pcVar6 = (code *)*puVar13;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(uVar9);
        }
        if (puVar13[1] != 0) {
          thunk_FUN_016d3fb4(uVar9);
        }
      }
      if (pcVar8 == (code *)0x0) {
        FUN_01656eb8(&local_78,&DAT_0186399c,0,0,350000000,&DAT_0186399c);
        FUN_016dd1aa(&local_c8,&local_78,0x50);
        FUN_016dd1aa(param_1 + 0x10,&local_c8,0x50);
        goto switchD_00813604_caseD_4;
      }
      local_78._0_4_ = (uint *)0x3;
      local_c4 = 0x14;
      local_c8 = (uint *)&DAT_0034504e;
      local_c0 = pcVar8;
      pcVar8 = (code *)FUN_0080807c(&local_c8,&local_78);
      if (param_1[9] == 0) goto LAB_008136d8;
LAB_008136d0:
      thunk_FUN_016d3fb4(param_1[10]);
    }
LAB_008136d8:
    uVar16 = CONCAT44(pcVar8,1);
    *(undefined1 *)((int)param_1 + 0x39) = 1;
LAB_008137c0:
    puVar4 = (uint *)(uVar16 >> 0x20);
    FUN_0080feb8(param_1 + 8);
    if ((uVar16 & 1) != 0) {
LAB_008137d0:
      param_1[0x1d] = 1;
      param_1[0x1e] = (uint)puVar4;
      *(undefined1 *)(param_1 + 6) = 1;
      param_1[7] = (uint)puVar4;
      *(undefined1 *)((int)param_1 + 0x72) = 0;
      param_1[8] = param_1[2];
      goto switchD_0081355c_caseD_4;
    }
    local_28 = puVar4;
    if ((uint *)**(uint **)param_1[5] != puVar4) {
      local_70 = &local_28;
      local_6c = FUN_00facd88;
      local_78._4_4_ = FUN_00facd88;
      local_78._0_4_ = *(uint **)param_1[5];
      FUN_00600d2c(&local_c8,&DAT_00344391,&local_78);
      puVar4 = (uint *)FUN_00808de4(&local_c8);
      goto LAB_008137d0;
    }
    iVar5 = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = (uint)puVar4;
    *(undefined1 *)(param_1 + 6) = 0;
LAB_00813888:
    *(undefined2 *)(param_1 + 6) = 0x100;
    if (iVar5 == 2) {
      return 2;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185f990);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185f990);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x39)) {
    case 0:
      uVar9 = param_1[0xc];
      uVar10 = param_1[0xd];
      uVar3 = *(undefined1 *)((int)param_1 + 0x3a);
      goto LAB_0081359c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186398c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186398c);
    case 3:
      goto switchD_00813604_caseD_3;
    case 4:
switchD_00813604_caseD_4:
      iVar5 = FUN_01657fc4(param_1 + 0x10,*param_2);
      if (iVar5 == 0) {
        FUN_00a07b4c(param_1 + 0x10);
        *(undefined1 *)(param_1 + 0x11) = 0;
        *(char *)((int)param_1 + 0x45) = (char)param_1[0xe];
        param_1[0x10] = param_1[8];
        goto switchD_00813604_caseD_5;
      }
      uVar3 = 4;
      break;
    case 5:
switchD_00813604_caseD_5:
      FUN_0080c81c(&local_78,param_1 + 0xf,param_2);
      ppuVar2 = local_70;
      pcVar8 = local_78._4_4_;
      puVar4 = (uint *)local_78;
      if ((uint *)local_78 != (uint *)0x80000001) {
        cVar1 = (char)param_1[0x11];
        if (cVar1 == '\x03') {
          cVar1 = *(char *)((int)param_1 + 0x81);
          iVar5 = 0xc;
LAB_00813aa8:
          if (cVar1 == '\x03') {
LAB_00813ab0:
            FUN_0080cf9c((int)(param_1 + 0xf) + iVar5);
          }
        }
        else {
          iVar5 = 0x10;
          if (cVar1 == '\x04') {
            cVar1 = (char)param_1[0x20];
            goto LAB_00813aa8;
          }
          if (cVar1 == '\x05') goto LAB_00813ab0;
        }
        if (puVar4 == (uint *)&DAT_80000000) {
          local_78._0_4_ = (uint *)0x3;
          local_c0 = pcVar8;
          local_c4 = 0x13;
          local_c8 = (uint *)&DAT_00345062;
          pcVar8 = (code *)FUN_0080807c(&local_c8,&local_78);
          if (param_1[9] != 0) goto LAB_008136d0;
          goto LAB_008136d8;
        }
        uVar16 = FUN_00823860(pcVar8,ppuVar2,(char)param_1[0xe]);
        if (puVar4 != (uint *)0x0) {
          thunk_FUN_016d3fb4(pcVar8);
        }
        if (param_1[9] != 0) {
          thunk_FUN_016d3fb4(param_1[10]);
        }
        *(undefined1 *)((int)param_1 + 0x39) = 1;
        if ((int)uVar16 == 2) goto LAB_008136ec;
        goto LAB_008137c0;
      }
      uVar3 = 5;
    }
LAB_008137b0:
    *(undefined1 *)((int)param_1 + 0x39) = uVar3;
LAB_008136ec:
    *(undefined1 *)((int)param_1 + 0x19) = 3;
    return 2;
  case 4:
switchD_0081355c_caseD_4:
    uVar16 = FUN_0080d040(param_1 + 8,param_2);
    puVar7 = (uint *)(uVar16 >> 0x20);
    if ((uVar16 & 1) != 0) {
      *(undefined1 *)((int)param_1 + 0x19) = 4;
      return 2;
    }
    cVar1 = *(char *)((int)param_1 + 0x72);
    bVar15 = cVar1 == '\x03';
    if (bVar15) {
      cVar1 = (char)param_1[0x1b];
    }
    if (bVar15 && cVar1 == '\x03') {
      puVar13 = (undefined4 *)param_1[0x1a];
      uVar9 = param_1[0x19];
      pcVar8 = (code *)*puVar13;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar9);
      }
      if (puVar13[1] != 0) {
        thunk_FUN_016d3fb4(uVar9);
      }
      if (param_1[0x13] != 0) {
        thunk_FUN_016d3fb4(param_1[0x14]);
      }
    }
    puVar4 = (uint *)param_1[7];
    iVar5 = 1;
    if (puVar7 != (uint *)0x0) {
      (**(code **)*puVar4)();
      puVar4 = puVar7;
      goto LAB_00813888;
    }
    *(undefined2 *)(param_1 + 6) = 0x100;
  }
  if (iVar5 == 3) {
LAB_008138a0:
    if (((uint)puVar4 & 1) == 0) {
      uVar9 = param_1[0x2a];
      uVar12 = param_1[0x2b];
      uVar11 = param_1[0x2c];
      uVar10 = param_1[0x2d];
      FUN_0080d2cc(param_1);
      *(undefined1 *)((int)param_1 + 0x19) = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = uVar9;
      param_1[3] = uVar12;
      param_1[4] = uVar11;
      param_1[5] = uVar10;
      iVar5 = FUN_0081351c(param_1,param_2);
      return iVar5;
    }
    return 2;
  }
  if (iVar5 == 0) {
    return 0;
  }
  local_c8 = puVar4;
  iVar5 = (*(code *)param_1[0x2e])(&local_c8);
  uVar9 = 0;
  if (iVar5 != 0) {
    uVar9 = param_1[0x28];
  }
  if (iVar5 == 0 || uVar9 == 0) {
    return 1;
  }
  uVar12 = param_1[0x24];
  uVar10 = param_1[0x25];
  uVar11 = param_1[0x26];
  param_1[0x28] = uVar9 - 1;
  FUN_0165a798(&local_78);
  local_cc = (undefined1 *)((int)(uint *)local_78 + uVar12);
  local_d0 = local_78._4_4_ + CARRY4((uint)(uint *)local_78,uVar12) + uVar10;
  if ((int)uVar10 < 0 !=
      (int)(((uint)local_78._4_4_ ^ (uint)local_d0) & ~((uint)local_78._4_4_ ^ uVar10)) < 0) {
LAB_00813a70:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
  }
  puVar14 = (undefined1 *)(uVar11 + (int)local_70);
  if (&DAT_3b9aca00 <= puVar14) {
    bVar15 = (undefined1 *)0xfffffffe < local_cc;
    local_cc = local_cc + 1;
    if ((int)(((uint)local_d0 ^ (uint)(local_d0 + bVar15)) & ~(uint)local_d0) < 0)
    goto LAB_00813a70;
    puVar14 = puVar14 + -1000000000;
    local_d0 = local_d0 + bVar15;
  }
  uVar16 = FUN_0164ec90(&DAT_01864d8c);
  iVar5 = 0x180;
  if ((uVar16 & 1) != 0) {
    iVar5 = 0xb8;
  }
  local_78 = uVar16;
  if (*(undefined1 **)((int)(uVar16 >> 0x20) + iVar5 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                 ,0x73,&DAT_01864d8c);
  }
  FUN_0080d2cc(param_1);
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(ulonglong *)(param_1 + 0xe) = uVar16;
  param_1[0x12] = (uint)puVar14;
  param_1[0x10] = (uint)local_cc;
  param_1[0x11] = (uint)local_d0;
  iVar5 = FUN_0081351c(param_1,param_2);
  (**(code **)*puVar4)(puVar4);
  if (iVar5 == 3) {
    iVar5 = 1;
  }
  return iVar5;
}

