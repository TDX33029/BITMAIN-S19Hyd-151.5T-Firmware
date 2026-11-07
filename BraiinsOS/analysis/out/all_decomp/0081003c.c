// FUN_0081003c @ 0081003c size=1804 calls_out=20 calls_in=2
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

/* WARNING: Removing unreachable block (ram,0x0081047c) */

int FUN_0081003c(uint *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  bool bVar13;
  ulonglong uVar14;
  uint local_d0;
  uint local_cc;
  uint *local_c8;
  undefined4 local_c4;
  uint local_c0;
  undefined8 local_78;
  uint local_70;
  
  if ((*param_1 & 1) != 0) {
    puVar3 = (uint *)FUN_01657fc4(param_1 + 2,*param_2);
    goto LAB_008103b8;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x19)) {
  case 0:
    *(undefined1 *)(param_1 + 6) = 0;
    uVar2 = *(undefined1 *)param_1[4];
    *(undefined1 *)((int)param_1 + 0x39) = 0;
    uVar7 = param_1[2];
    param_1[0xc] = uVar7;
    *(undefined1 *)((int)param_1 + 0x3a) = uVar2;
    param_1[0xd] = param_1[3];
LAB_008100c4:
    *(undefined1 *)(param_1 + 0xe) = uVar2;
    param_1[8] = uVar7;
    FUN_0082257c(&local_78);
    uVar7 = local_78._4_4_;
    if ((uint)local_78 != 0x80000000) {
      param_1[9] = (uint)local_78;
      param_1[10] = local_78._4_4_;
      param_1[0xb] = local_70;
      *(undefined1 *)((int)param_1 + 0x51) = 0;
      *(char *)((int)param_1 + 0x52) = (char)param_1[0xe];
      param_1[0x11] = local_78._4_4_;
      param_1[0x12] = local_70;
      param_1[0x13] = param_1[8];
switchD_0081012c_caseD_3:
      uVar14 = FUN_0080c574(param_1 + 0xf,param_2);
      uVar7 = (uint)(uVar14 >> 0x20);
      if ((uVar14 & 1) != 0) {
        uVar2 = 3;
        goto LAB_008102d8;
      }
      if (*(char *)((int)param_1 + 0x51) == '\x03') {
        puVar11 = (undefined4 *)param_1[0x10];
        uVar8 = param_1[0xf];
        pcVar6 = (code *)*puVar11;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(uVar8);
        }
        if (puVar11[1] != 0) {
          thunk_FUN_016d3fb4(uVar8);
        }
      }
      if (uVar7 == 0) {
        FUN_01656eb8(&local_78,&DAT_0186399c,0,0,350000000,&DAT_0186399c);
        FUN_016dd1aa(&local_c8,&local_78,0x50);
        FUN_016dd1aa(param_1 + 0x10,&local_c8,0x50);
        goto switchD_0081012c_caseD_4;
      }
      local_78._0_4_ = 3;
      local_c4 = 0x14;
      local_c8 = (uint *)&DAT_0034504e;
      local_c0 = uVar7;
      uVar7 = FUN_0080807c(&local_c8,&local_78);
      if (param_1[9] == 0) goto LAB_00810200;
LAB_008101f8:
      thunk_FUN_016d3fb4(param_1[10]);
    }
LAB_00810200:
    uVar14 = CONCAT44(uVar7,1);
    *(undefined1 *)((int)param_1 + 0x39) = 1;
LAB_008102e8:
    puVar3 = (uint *)(uVar14 >> 0x20);
    FUN_0080feb8(param_1 + 8);
    if ((uVar14 & 1) != 0) {
      param_1[0x1d] = 1;
      param_1[0x1e] = (uint)puVar3;
      *(undefined1 *)(param_1 + 6) = 1;
      param_1[7] = (uint)puVar3;
      *(undefined1 *)((int)param_1 + 0x72) = 0;
      param_1[8] = param_1[2];
      goto switchD_0081007c_caseD_4;
    }
    iVar4 = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = (uint)puVar3;
    *(undefined1 *)(param_1 + 6) = 0;
LAB_008103a0:
    *(undefined2 *)(param_1 + 6) = 0x100;
    if (iVar4 == 2) {
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
      uVar2 = *(undefined1 *)((int)param_1 + 0x3a);
      uVar7 = param_1[0xc];
      goto LAB_008100c4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186398c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186398c);
    case 3:
      goto switchD_0081012c_caseD_3;
    case 4:
switchD_0081012c_caseD_4:
      iVar4 = FUN_01657fc4(param_1 + 0x10,*param_2);
      if (iVar4 == 0) {
        FUN_00a07b4c(param_1 + 0x10);
        *(undefined1 *)(param_1 + 0x11) = 0;
        *(char *)((int)param_1 + 0x45) = (char)param_1[0xe];
        param_1[0x10] = param_1[8];
        goto switchD_0081012c_caseD_5;
      }
      uVar2 = 4;
      break;
    case 5:
switchD_0081012c_caseD_5:
      FUN_0080c81c(&local_78,param_1 + 0xf,param_2);
      uVar9 = local_70;
      uVar8 = local_78._4_4_;
      uVar7 = (uint)local_78;
      if ((uint)local_78 != 0x80000001) {
        cVar1 = (char)param_1[0x11];
        if (cVar1 == '\x03') {
          cVar1 = *(char *)((int)param_1 + 0x81);
          iVar4 = 0xc;
LAB_008105b0:
          if (cVar1 == '\x03') {
LAB_008105b8:
            FUN_0080cf9c((int)(param_1 + 0xf) + iVar4);
          }
        }
        else {
          iVar4 = 0x10;
          if (cVar1 == '\x04') {
            cVar1 = (char)param_1[0x20];
            goto LAB_008105b0;
          }
          if (cVar1 == '\x05') goto LAB_008105b8;
        }
        if (uVar7 == 0x80000000) {
          local_78._0_4_ = 3;
          local_c0 = uVar8;
          local_c4 = 0x13;
          local_c8 = (uint *)&DAT_00345062;
          uVar7 = FUN_0080807c(&local_c8,&local_78);
          if (param_1[9] != 0) goto LAB_008101f8;
          goto LAB_00810200;
        }
        uVar14 = FUN_008228cc(uVar8,uVar9,(char)param_1[0xe]);
        if (uVar7 != 0) {
          thunk_FUN_016d3fb4(uVar8);
        }
        if (param_1[9] != 0) {
          thunk_FUN_016d3fb4(param_1[10]);
        }
        *(undefined1 *)((int)param_1 + 0x39) = 1;
        if ((int)uVar14 == 2) goto LAB_00810214;
        goto LAB_008102e8;
      }
      uVar2 = 5;
    }
LAB_008102d8:
    *(undefined1 *)((int)param_1 + 0x39) = uVar2;
LAB_00810214:
    *(undefined1 *)((int)param_1 + 0x19) = 3;
    return 2;
  case 4:
switchD_0081007c_caseD_4:
    uVar14 = FUN_0080d040(param_1 + 8,param_2);
    puVar5 = (uint *)(uVar14 >> 0x20);
    if ((uVar14 & 1) != 0) {
      *(undefined1 *)((int)param_1 + 0x19) = 4;
      return 2;
    }
    cVar1 = *(char *)((int)param_1 + 0x72);
    bVar13 = cVar1 == '\x03';
    if (bVar13) {
      cVar1 = (char)param_1[0x1b];
    }
    if (bVar13 && cVar1 == '\x03') {
      puVar11 = (undefined4 *)param_1[0x1a];
      uVar7 = param_1[0x19];
      pcVar6 = (code *)*puVar11;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar7);
      }
      if (puVar11[1] != 0) {
        thunk_FUN_016d3fb4(uVar7);
      }
      if (param_1[0x13] != 0) {
        thunk_FUN_016d3fb4(param_1[0x14]);
      }
    }
    puVar3 = (uint *)param_1[7];
    iVar4 = 1;
    if (puVar5 != (uint *)0x0) {
      (**(code **)*puVar3)(puVar3);
      iVar4 = 1;
      puVar3 = puVar5;
      goto LAB_008103a0;
    }
    *(undefined2 *)(param_1 + 6) = 0x100;
  }
  if (iVar4 == 3) {
LAB_008103b8:
    if (((uint)puVar3 & 1) == 0) {
      uVar7 = param_1[0x2a];
      uVar10 = param_1[0x2b];
      uVar9 = param_1[0x2c];
      uVar8 = param_1[0x2d];
      FUN_0080d2cc(param_1);
      *(undefined1 *)((int)param_1 + 0x19) = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = uVar7;
      param_1[3] = uVar10;
      param_1[4] = uVar9;
      param_1[5] = uVar8;
      iVar4 = FUN_0081003c(param_1,param_2);
      return iVar4;
    }
    return 2;
  }
  if (iVar4 == 0) {
    return 0;
  }
  local_c8 = puVar3;
  iVar4 = (*(code *)param_1[0x2e])(&local_c8);
  uVar7 = 0;
  if (iVar4 != 0) {
    uVar7 = param_1[0x28];
  }
  if (iVar4 == 0 || uVar7 == 0) {
    return 1;
  }
  uVar8 = param_1[0x24];
  uVar10 = param_1[0x25];
  uVar9 = param_1[0x26];
  param_1[0x28] = uVar7 - 1;
  FUN_0165a798(&local_78);
  local_cc = (uint)local_78 + uVar8;
  local_d0 = local_78._4_4_ + CARRY4((uint)local_78,uVar8) + uVar10;
  if ((int)uVar10 < 0 != (int)((local_78._4_4_ ^ local_d0) & ~(local_78._4_4_ ^ uVar10)) < 0) {
LAB_00810578:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
  }
  puVar12 = (undefined1 *)(uVar9 + local_70);
  if (&DAT_3b9aca00 <= puVar12) {
    bVar13 = 0xfffffffe < local_cc;
    local_cc = local_cc + 1;
    uVar7 = local_d0 + bVar13;
    if ((int)((local_d0 ^ uVar7) & ~local_d0) < 0) goto LAB_00810578;
    puVar12 = puVar12 + -1000000000;
    local_d0 = uVar7;
  }
  uVar14 = FUN_0164ec90(&DAT_01864d8c);
  iVar4 = 0x180;
  if ((uVar14 & 1) != 0) {
    iVar4 = 0xb8;
  }
  local_78 = uVar14;
  if (*(undefined1 **)((int)(uVar14 >> 0x20) + iVar4 + 0x90) == &DAT_3b9aca00) {
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
  *(ulonglong *)(param_1 + 0xe) = uVar14;
  param_1[0x12] = (uint)puVar12;
  param_1[0x10] = local_cc;
  param_1[0x11] = local_d0;
  iVar4 = FUN_0081003c(param_1,param_2);
  (**(code **)*puVar3)(puVar3);
  if (iVar4 == 3) {
    iVar4 = 1;
  }
  return iVar4;
}

