// FUN_0080ec44 @ 0080ec44 size=1772 calls_out=20 calls_in=2
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_0080ec44(ulonglong *param_1,uint *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint *puVar13;
  bool bVar14;
  ulonglong uVar15;
  uint local_e0;
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
    if (iVar3 == 0) goto LAB_0080f00c;
LAB_0080ec8c:
    *(undefined2 *)param_1 = 2;
    return;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x19)) {
  case 0:
    do {
      *(undefined1 *)(param_2 + 6) = 0;
      uVar5 = param_2[2];
      uVar2 = *(undefined1 *)param_2[4];
      param_2[0xc] = uVar5;
      *(undefined1 *)((int)param_2 + 0x3a) = uVar2;
      *(undefined1 *)((int)param_2 + 0x39) = 0;
      param_2[0xd] = param_2[3];
LAB_0080ed4c:
      *(undefined1 *)(param_2 + 0xe) = uVar2;
      param_2[8] = uVar5;
      FUN_00822344(&local_80);
      if ((uint)local_80 != 0x80000000) {
        param_2[9] = (uint)local_80;
        param_2[10] = local_80._4_4_;
        param_2[0xb] = local_78;
        *(undefined1 *)((int)param_2 + 0x51) = 0;
        *(char *)((int)param_2 + 0x52) = (char)param_2[0xe];
        param_2[0x11] = local_80._4_4_;
        param_2[0x12] = local_78;
        param_2[0x13] = param_2[8];
switchD_0080ecd0_caseD_3:
        uVar15 = FUN_0080c574(puVar12,param_3);
        uVar5 = (uint)(uVar15 >> 0x20);
        if ((uVar15 & 1) != 0) {
          uVar2 = 3;
          goto LAB_0080f120;
        }
        if (*(char *)((int)param_2 + 0x51) == '\x03') {
          puVar7 = (undefined4 *)*puVar13;
          uVar8 = *puVar12;
          pcVar4 = (code *)*puVar7;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(uVar8);
          }
          if (puVar7[1] != 0) {
            thunk_FUN_016d3fb4(uVar8);
          }
        }
        if (uVar5 != 0) {
          local_80._0_4_ = 3;
          local_cc = 0x14;
          local_d0 = (undefined4 *)&DAT_0034504e;
          local_c8 = uVar5;
          local_2c = FUN_0080807c(&local_d0,&local_80);
LAB_0080ef60:
          local_30 = CONCAT22(local_30._2_2_,1);
LAB_0080ef98:
          if (param_2[9] != 0) {
            thunk_FUN_016d3fb4(param_2[10]);
          }
          goto LAB_0080efac;
        }
        FUN_01656eb8(&local_80,&DAT_0186399c,0,0,350000000,&DAT_0186399c);
        FUN_016dd1aa(&local_d0,&local_80,0x50);
        FUN_016dd1aa(puVar13,&local_d0,0x50);
switchD_0080ecd0_caseD_4:
        iVar3 = FUN_01657fc4(puVar13,*param_3);
        if (iVar3 == 0) {
          FUN_00a07b4c(puVar13);
          *(undefined1 *)(param_2 + 0x11) = 0;
          *(char *)((int)param_2 + 0x45) = (char)param_2[0xe];
          param_2[0x10] = param_2[8];
switchD_0080ecd0_caseD_5:
          FUN_0080c81c(&local_80,puVar12,param_3);
          uVar9 = local_78;
          uVar8 = local_80._4_4_;
          uVar5 = (uint)local_80;
          if ((uint)local_80 != 0x80000001) {
            cVar1 = (char)param_2[0x11];
            if (cVar1 == '\x03') {
              cVar1 = *(char *)((int)param_2 + 0x81);
              iVar3 = 0xc;
joined_r0x0080ef20:
              if (cVar1 == '\x03') {
LAB_0080ef24:
                FUN_0080cf9c((int)puVar12 + iVar3);
              }
            }
            else {
              iVar3 = 0x10;
              if (cVar1 == '\x04') {
                cVar1 = (char)param_2[0x20];
                goto joined_r0x0080ef20;
              }
              if (cVar1 == '\x05') goto LAB_0080ef24;
            }
            if (uVar5 == 0x80000000) {
              local_80._0_4_ = 3;
              local_c8 = uVar8;
              local_cc = 0x13;
              local_d0 = (undefined4 *)&DAT_00345062;
              local_2c = FUN_0080807c(&local_d0,&local_80);
              goto LAB_0080ef60;
            }
            FUN_0082302c(&local_30,uVar8,uVar9,(char)param_2[0xe]);
            if (uVar5 != 0) {
              thunk_FUN_016d3fb4(uVar8);
            }
            goto LAB_0080ef98;
          }
          uVar2 = 5;
        }
        else {
          uVar2 = 4;
        }
LAB_0080f120:
        *(undefined1 *)((int)param_2 + 0x39) = uVar2;
LAB_0080f124:
        uVar2 = 3;
        goto LAB_0080f128;
      }
      local_2c = local_80._4_4_;
      local_30 = CONCAT22(local_30._2_2_,1);
LAB_0080efac:
      uVar8 = local_2c;
      uVar5 = local_30;
      *(undefined1 *)((int)param_2 + 0x39) = 1;
      if ((local_30 & 0xffff) == 2) goto LAB_0080f124;
      FUN_0080feb8(param_2 + 8);
      if ((uVar5 & 1) != 0) {
        *(undefined2 *)(param_2 + 0x1d) = 1;
        *(undefined1 *)(param_2 + 6) = 1;
        param_2[0x1e] = uVar8;
        param_2[7] = uVar8;
        *(undefined1 *)((int)param_2 + 0x72) = 0;
        param_2[8] = param_2[2];
        break;
      }
      *(short *)((int)param_2 + 0x76) = (short)(uVar5 >> 0x10);
      *(undefined2 *)(param_2 + 0x1d) = 0;
      uVar5 = param_2[0x1d];
      *(undefined2 *)(param_2 + 6) = 0x100;
      if ((uVar5 & 0xffff) != 3) {
        puVar6 = (undefined4 *)param_2[0x1e];
        *(uint *)param_1 = uVar5;
        *(undefined4 **)((int)param_1 + 4) = puVar6;
        if ((uVar5 & 0xffff) == 2) goto LAB_0080f13c;
        if ((uVar5 & 1) == 0) {
          return;
        }
        goto LAB_0080f164;
      }
      if ((uVar5 & 0x10000) != 0) goto LAB_0080ec8c;
LAB_0080f00c:
      uVar5 = param_2[0x2a];
      uVar8 = param_2[0x2b];
      uVar9 = param_2[0x2c];
      uVar10 = param_2[0x2d];
      FUN_0080d2cc(param_2);
      param_2[1] = 0;
      param_2[2] = uVar5;
      param_2[3] = uVar8;
      param_2[4] = uVar9;
      param_2[5] = uVar10;
      *(undefined1 *)((int)param_2 + 0x19) = 0;
      *param_2 = 0;
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
      uVar2 = *(undefined1 *)((int)param_2 + 0x3a);
      uVar5 = param_2[0xc];
      goto LAB_0080ed4c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186398c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186398c);
    case 3:
      goto switchD_0080ecd0_caseD_3;
    case 4:
      goto switchD_0080ecd0_caseD_4;
    case 5:
      goto switchD_0080ecd0_caseD_5;
    }
  }
  uVar15 = FUN_0080d040(param_2 + 8,param_3);
  puVar7 = (undefined4 *)(uVar15 >> 0x20);
  uVar2 = 4;
  if ((uVar15 & 1) != 0) {
LAB_0080f128:
    *(undefined1 *)((int)param_2 + 0x19) = uVar2;
    *(uint *)param_1 = 2;
    *(uint *)((int)param_1 + 4) = 0;
LAB_0080f13c:
    *(undefined2 *)param_1 = 2;
    return;
  }
  cVar1 = *(char *)((int)param_2 + 0x72);
  bVar14 = cVar1 == '\x03';
  if (bVar14) {
    cVar1 = (char)param_2[0x1b];
  }
  if (bVar14 && cVar1 == '\x03') {
    uVar5 = param_2[0x19];
    puVar6 = (undefined4 *)param_2[0x1a];
    pcVar4 = (code *)*puVar6;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    if (param_2[0x13] != 0) {
      thunk_FUN_016d3fb4(param_2[0x14]);
    }
  }
  puVar6 = (undefined4 *)param_2[7];
  if (puVar7 != (undefined4 *)0x0) {
    (**(code **)*puVar6)();
    puVar6 = puVar7;
  }
  *(uint *)param_1 = 1;
  *(undefined4 **)((int)param_1 + 4) = puVar6;
  *(undefined2 *)(param_2 + 6) = 0x100;
LAB_0080f164:
  local_d0 = puVar6;
  iVar3 = (*(code *)param_2[0x2e])(&local_d0);
  uVar5 = 0;
  if (iVar3 != 0) {
    uVar5 = param_2[0x28];
  }
  if (iVar3 == 0 || uVar5 == 0) {
    *(undefined4 **)((int)param_1 + 4) = puVar6;
    *(undefined2 *)param_1 = 1;
    return;
  }
  uVar10 = param_2[0x24];
  uVar9 = param_2[0x25];
  uVar8 = param_2[0x26];
  param_2[0x28] = uVar5 - 1;
  FUN_0165a798(&local_80);
  local_e0 = (uint)local_80 + uVar10;
  uVar5 = local_80._4_4_ + uVar9 + (uint)CARRY4((uint)local_80,uVar10);
  if ((int)uVar9 < 0 != (int)((local_80._4_4_ ^ uVar5) & ~(local_80._4_4_ ^ uVar9)) < 0) {
LAB_0080f228:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
  }
  puVar11 = (undefined1 *)(uVar8 + local_78);
  if (&DAT_3b9aca00 <= puVar11) {
    bVar14 = 0xfffffffe < local_e0;
    local_e0 = local_e0 + 1;
    uVar8 = uVar5 + bVar14;
    if ((int)((uVar5 ^ uVar8) & ~uVar5) < 0) goto LAB_0080f228;
    puVar11 = puVar11 + -1000000000;
    uVar5 = uVar8;
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
  param_2[0x10] = local_e0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(ulonglong *)(param_2 + 0xe) = uVar15;
  *(undefined1 *)(param_2 + 0x14) = 0;
  param_2[0x12] = (uint)puVar11;
  param_2[0x11] = uVar5;
  FUN_0080ec44(&local_80,param_2,param_3);
  uVar15 = local_80;
  uVar8 = local_80._4_4_;
  uVar5 = (uint)local_80;
  (**(code **)*puVar6)(puVar6);
  if ((uVar5 & 0xffff) == 3) {
    *(uint *)((int)param_1 + 4) = uVar8;
    *(undefined2 *)param_1 = 1;
    return;
  }
  *param_1 = uVar15;
  return;
}

