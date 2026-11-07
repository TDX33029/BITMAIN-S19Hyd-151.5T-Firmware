// FUN_0080f570 @ 0080f570 size=1796 calls_out=21 calls_in=2
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_0080f570(ulonglong *param_1,uint *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  bool bVar14;
  ulonglong uVar15;
  uint local_d4;
  undefined4 *local_d0;
  undefined4 local_cc;
  uint local_c8;
  undefined8 local_80;
  uint local_78;
  uint local_30;
  uint local_2c;
  
  puVar12 = param_2 + 0xf;
  puVar13 = param_2 + 0x10;
  if ((*param_2 & 1) != 0) {
    iVar3 = FUN_01657fc4(param_2 + 2,*param_3);
    if (iVar3 == 0) goto LAB_0080f92c;
LAB_0080f5bc:
    *(undefined1 *)param_1 = 2;
    return;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x19)) {
  case 0:
    do {
      *(undefined1 *)(param_2 + 6) = 0;
      uVar7 = param_2[2];
      puVar4 = (undefined1 *)param_2[3];
      uVar2 = *(undefined1 *)param_2[4];
      *(undefined1 *)((int)param_2 + 0x3a) = uVar2;
      *(undefined1 *)((int)param_2 + 0x39) = 0;
      param_2[0xc] = uVar7;
      param_2[0xd] = (uint)puVar4;
LAB_0080f67c:
      *(undefined1 *)(param_2 + 0xe) = uVar2;
      param_2[8] = uVar7;
      FUN_00821be8(&local_80,*puVar4);
      if ((uint)local_80 != 0x80000000) {
        param_2[9] = (uint)local_80;
        param_2[10] = local_80._4_4_;
        param_2[0xb] = local_78;
        *(undefined1 *)((int)param_2 + 0x51) = 0;
        *(char *)((int)param_2 + 0x52) = (char)param_2[0xe];
        param_2[0x11] = local_80._4_4_;
        param_2[0x12] = local_78;
        param_2[0x13] = param_2[8];
switchD_0080f600_caseD_3:
        uVar15 = FUN_0080c574(puVar12,param_3);
        uVar7 = (uint)(uVar15 >> 0x20);
        if ((uVar15 & 1) != 0) {
          uVar2 = 3;
          goto LAB_0080fa34;
        }
        if (*(char *)((int)param_2 + 0x51) == '\x03') {
          puVar6 = (undefined4 *)*puVar13;
          uVar8 = *puVar12;
          pcVar5 = (code *)*puVar6;
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(uVar8);
          }
          if (puVar6[1] != 0) {
            thunk_FUN_016d3fb4(uVar8);
          }
        }
        if (uVar7 != 0) {
          local_80._0_4_ = 3;
          local_cc = 0x14;
          local_d0 = (undefined4 *)&DAT_0034504e;
          local_c8 = uVar7;
          local_2c = FUN_0080807c(&local_d0,&local_80);
LAB_0080f88c:
          local_30 = CONCAT31(local_30._1_3_,1);
LAB_0080f8c0:
          if (param_2[9] != 0) {
            thunk_FUN_016d3fb4(param_2[10]);
          }
          goto LAB_0080f8d4;
        }
        FUN_01656eb8(&local_80,&DAT_0186399c,0,0,350000000,&DAT_0186399c);
        FUN_016dd1aa(&local_d0,&local_80,0x50);
        FUN_016dd1aa(puVar13,&local_d0,0x50);
switchD_0080f600_caseD_4:
        iVar3 = FUN_01657fc4(puVar13,*param_3);
        if (iVar3 == 0) {
          FUN_00a07b4c(puVar13);
          *(undefined1 *)(param_2 + 0x11) = 0;
          *(char *)((int)param_2 + 0x45) = (char)param_2[0xe];
          param_2[0x10] = param_2[8];
switchD_0080f600_caseD_5:
          FUN_0080c81c(&local_80,puVar12,param_3);
          uVar10 = local_78;
          uVar8 = local_80._4_4_;
          uVar7 = (uint)local_80;
          if ((uint)local_80 != 0x80000001) {
            cVar1 = (char)param_2[0x11];
            if (cVar1 == '\x03') {
              cVar1 = *(char *)((int)param_2 + 0x81);
              iVar3 = 0xc;
joined_r0x0080f84c:
              if (cVar1 == '\x03') {
LAB_0080f850:
                FUN_0080cf9c((int)puVar12 + iVar3);
              }
            }
            else {
              iVar3 = 0x10;
              if (cVar1 == '\x04') {
                cVar1 = (char)param_2[0x20];
                goto joined_r0x0080f84c;
              }
              if (cVar1 == '\x05') goto LAB_0080f850;
            }
            if (uVar7 == 0x80000000) {
              local_80._0_4_ = 3;
              local_c8 = uVar8;
              local_cc = 0x13;
              local_d0 = (undefined4 *)&DAT_00345062;
              local_2c = FUN_0080807c(&local_d0,&local_80);
              goto LAB_0080f88c;
            }
            FUN_00822e68(&local_30,uVar8,uVar10,(char)param_2[0xe]);
            if (uVar7 != 0) {
              thunk_FUN_016d3fb4(uVar8);
            }
            goto LAB_0080f8c0;
          }
          uVar2 = 5;
        }
        else {
          uVar2 = 4;
        }
LAB_0080fa34:
        *(undefined1 *)((int)param_2 + 0x39) = uVar2;
LAB_0080fa38:
        uVar2 = 3;
        goto LAB_0080fa3c;
      }
      local_2c = local_80._4_4_;
      local_30 = CONCAT31(local_30._1_3_,1);
LAB_0080f8d4:
      uVar8 = local_2c;
      uVar7 = local_30;
      *(undefined1 *)((int)param_2 + 0x39) = 1;
      if ((local_30 & 0xff) == 2) goto LAB_0080fa38;
      FUN_0080feb8(param_2 + 8);
      if ((uVar7 & 1) != 0) {
        param_2[0x1e] = uVar8;
        *(undefined1 *)(param_2 + 0x1d) = 1;
LAB_0080f97c:
        *(undefined1 *)(param_2 + 6) = 1;
        param_2[7] = uVar8;
        *(undefined1 *)((int)param_2 + 0x72) = 0;
        param_2[8] = param_2[2];
        break;
      }
      if ((uVar7 & 0x100) == 0) {
        uVar8 = FUN_00808f1c(&DAT_003443dd,0x1a);
        *(undefined1 *)(param_2 + 0x1d) = 1;
        param_2[0x1e] = uVar8;
        goto LAB_0080f97c;
      }
      *(undefined2 *)(param_2 + 0x1d) = 0x100;
      uVar7 = param_2[0x1d];
      *(undefined2 *)(param_2 + 6) = 0x100;
      if ((uVar7 & 0xff) != 3) {
        puVar9 = (undefined4 *)param_2[0x1e];
        *(uint *)param_1 = uVar7;
        *(undefined4 **)((int)param_1 + 4) = puVar9;
        if ((uVar7 & 0xff) == 2) goto LAB_0080fa50;
        if ((uVar7 & 1) == 0) {
          return;
        }
        goto LAB_0080fa78;
      }
      if ((uVar7 & 0x100) != 0) goto LAB_0080f5bc;
LAB_0080f92c:
      uVar7 = param_2[0x2a];
      uVar8 = param_2[0x2b];
      uVar10 = param_2[0x2c];
      uVar11 = param_2[0x2d];
      FUN_0080d2cc(param_2);
      *(undefined1 *)((int)param_2 + 0x19) = 0;
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = uVar7;
      param_2[3] = uVar8;
      param_2[4] = uVar10;
      param_2[5] = uVar11;
    } while( true );
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185f990);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185f990);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x39)) {
    case 0:
      uVar7 = param_2[0xc];
      puVar4 = (undefined1 *)param_2[0xd];
      uVar2 = *(undefined1 *)((int)param_2 + 0x3a);
      goto LAB_0080f67c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186398c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186398c);
    case 3:
      goto switchD_0080f600_caseD_3;
    case 4:
      goto switchD_0080f600_caseD_4;
    case 5:
      goto switchD_0080f600_caseD_5;
    }
  }
  uVar15 = FUN_0080d040(param_2 + 8,param_3);
  puVar6 = (undefined4 *)(uVar15 >> 0x20);
  uVar2 = 4;
  if ((uVar15 & 1) != 0) {
LAB_0080fa3c:
    *(undefined1 *)((int)param_2 + 0x19) = uVar2;
    *(uint *)param_1 = 2;
    *(uint *)((int)param_1 + 4) = 0;
LAB_0080fa50:
    *(undefined1 *)param_1 = 2;
    return;
  }
  cVar1 = *(char *)((int)param_2 + 0x72);
  bVar14 = cVar1 == '\x03';
  if (bVar14) {
    cVar1 = (char)param_2[0x1b];
  }
  if (bVar14 && cVar1 == '\x03') {
    puVar9 = (undefined4 *)param_2[0x1a];
    uVar7 = param_2[0x19];
    pcVar5 = (code *)*puVar9;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar7);
    }
    if (puVar9[1] != 0) {
      thunk_FUN_016d3fb4(uVar7);
    }
    if (param_2[0x13] != 0) {
      thunk_FUN_016d3fb4(param_2[0x14]);
    }
  }
  puVar9 = (undefined4 *)param_2[7];
  if (puVar6 != (undefined4 *)0x0) {
    (**(code **)*puVar9)();
    puVar9 = puVar6;
  }
  *(undefined2 *)(param_2 + 6) = 0x100;
  *(uint *)param_1 = 1;
  *(undefined4 **)((int)param_1 + 4) = puVar9;
LAB_0080fa78:
  local_d0 = puVar9;
  iVar3 = (*(code *)param_2[0x2e])(&local_d0);
  uVar7 = 0;
  if (iVar3 != 0) {
    uVar7 = param_2[0x28];
  }
  if (iVar3 == 0 || uVar7 == 0) {
    *(undefined4 **)((int)param_1 + 4) = puVar9;
    *(undefined1 *)param_1 = 1;
    return;
  }
  uVar8 = param_2[0x24];
  uVar11 = param_2[0x25];
  uVar10 = param_2[0x26];
  param_2[0x28] = uVar7 - 1;
  FUN_0165a798(&local_80);
  local_d4 = (uint)local_80 + uVar8;
  uVar7 = local_80._4_4_ + uVar11 + (uint)CARRY4((uint)local_80,uVar8);
  if ((int)uVar11 < 0 != (int)((local_80._4_4_ ^ uVar7) & ~(local_80._4_4_ ^ uVar11)) < 0) {
LAB_0080fb40:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
  }
  puVar4 = (undefined1 *)(uVar10 + local_78);
  if (&DAT_3b9aca00 <= puVar4) {
    bVar14 = 0xfffffffe < local_d4;
    local_d4 = local_d4 + 1;
    uVar8 = uVar7 + bVar14;
    if ((int)((uVar7 ^ uVar8) & ~uVar7) < 0) goto LAB_0080fb40;
    puVar4 = puVar4 + -1000000000;
    uVar7 = uVar8;
  }
  uVar15 = FUN_0164ec90(&DAT_01864d8c);
  iVar3 = 0x180;
  if ((uVar15 & 1) != 0) {
    iVar3 = 0xb8;
  }
  local_80 = uVar15;
  if (*(undefined1 **)((int)(uVar15 >> 0x20) + iVar3 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                 ,0x73,&DAT_01864d8c);
  }
  FUN_0080d2cc(param_2);
  *param_2 = 1;
  param_2[1] = 0;
  param_2[0x10] = local_d4;
  param_2[2] = 0;
  param_2[3] = 0;
  *(ulonglong *)(param_2 + 0xe) = uVar15;
  *(undefined1 *)(param_2 + 0x14) = 0;
  param_2[0x12] = (uint)puVar4;
  param_2[0x11] = uVar7;
  FUN_0080f570(&local_80,param_2,param_3);
  uVar15 = local_80;
  uVar8 = local_80._4_4_;
  uVar7 = (uint)local_80;
  (**(code **)*puVar9)(puVar9);
  if ((uVar7 & 0xff) == 3) {
    *(uint *)((int)param_1 + 4) = uVar8;
    *(undefined1 *)param_1 = 1;
    return;
  }
  *param_1 = uVar15;
  return;
}

