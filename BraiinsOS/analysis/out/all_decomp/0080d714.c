// FUN_0080d714 @ 0080d714 size=1856 calls_out=20 calls_in=2
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_0080d714(ulonglong *param_1,uint *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *unaff_r7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined1 *puVar13;
  undefined4 *unaff_r9;
  uint *puVar14;
  bool bVar15;
  ulonglong uVar16;
  uint local_dc;
  undefined4 *local_d8;
  undefined4 local_d4;
  undefined4 *local_d0;
  undefined8 local_88;
  uint local_80;
  uint local_7c;
  uint local_34;
  undefined4 *local_30;
  uint *local_2c;
  undefined4 *puStack_28;
  
  puVar12 = param_2 + 0x10;
  puVar14 = param_2 + 0xf;
  if ((*param_2 & 1) == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x19)) {
    case 0:
      goto switchD_0080d784_caseD_0;
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
        goto LAB_0080d874;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0186398c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0186398c);
      case 3:
        goto switchD_0080d7a8_caseD_3;
      case 4:
        goto switchD_0080d7a8_caseD_4;
      case 5:
        goto switchD_0080d7a8_caseD_5;
      }
    }
switchD_0080d784_caseD_4:
    uVar16 = FUN_0080d040(param_2 + 8,param_3);
    puVar9 = (undefined4 *)(uVar16 >> 0x20);
    if ((uVar16 & 1) != 0) {
      uVar2 = 4;
      puVar9 = unaff_r7;
      local_2c = puVar12;
LAB_0080dbf8:
      uVar5 = 0x80000001;
      puVar11 = local_2c;
LAB_0080dbfc:
      *(undefined1 *)((int)param_2 + 0x19) = uVar2;
      unaff_r7 = puVar9;
      goto LAB_0080dc00;
    }
    cVar1 = *(char *)((int)param_2 + 0x72);
    bVar15 = cVar1 == '\x03';
    if (bVar15) {
      cVar1 = (char)param_2[0x1b];
    }
    if (bVar15 && cVar1 == '\x03') {
      unaff_r9 = (undefined4 *)param_2[0x1a];
      uVar5 = param_2[0x19];
      if ((code *)*unaff_r9 != (code *)0x0) {
        (*(code *)*unaff_r9)(uVar5);
      }
      if (unaff_r9[1] != 0) {
        thunk_FUN_016d3fb4(uVar5);
      }
      if (param_2[0x13] != 0) {
        thunk_FUN_016d3fb4(param_2[0x14]);
      }
    }
    if (puVar9 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_2[7])();
      if ((param_2[0x1d] & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(param_2[0x1e]);
      }
      uVar5 = 0x80000000;
      *(undefined1 *)(param_2 + 6) = 0;
      uVar2 = 1;
      puVar11 = puVar12;
      goto LAB_0080dbfc;
    }
    unaff_r7 = (undefined4 *)param_2[7];
    if (((char)param_2[6] != '\0') && ((param_2[0x1d] & 0x7fffffff) != 0)) {
      thunk_FUN_016d3fb4(param_2[0x1e]);
    }
    *(uint *)param_1 = 0x80000000;
    *(undefined4 **)((int)param_1 + 4) = unaff_r7;
    *(undefined2 *)(param_2 + 6) = 0x100;
  }
  else {
    unaff_r7 = (undefined4 *)FUN_01657fc4(param_2 + 2,*param_3);
    do {
      if (((uint)unaff_r7 & 1) != 0) {
        *(uint *)param_1 = 0x80000001;
        return;
      }
      uVar7 = param_2[0x2a];
      uVar5 = param_2[0x2b];
      uVar8 = param_2[0x2c];
      uVar10 = param_2[0x2d];
      FUN_0080e0c4(param_2);
      *(undefined1 *)((int)param_2 + 0x19) = 0;
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = uVar7;
      param_2[3] = uVar5;
      param_2[4] = uVar8;
      param_2[5] = uVar10;
switchD_0080d784_caseD_0:
      *(undefined1 *)(param_2 + 6) = 0;
      uVar5 = param_2[2];
      uVar2 = *(undefined1 *)param_2[4];
      param_2[0xc] = uVar5;
      *(undefined1 *)((int)param_2 + 0x3a) = uVar2;
      *(undefined1 *)((int)param_2 + 0x39) = 0;
      param_2[0xd] = param_2[3];
LAB_0080d874:
      *(undefined1 *)(param_2 + 0xe) = uVar2;
      param_2[8] = uVar5;
      FUN_00821800(&local_88);
      unaff_r7 = local_88._4_4_;
      if ((uint)local_88 != 0x80000000) {
        param_2[9] = (uint)local_88;
        param_2[10] = (uint)local_88._4_4_;
        param_2[0xb] = local_80;
        *(undefined1 *)((int)param_2 + 0x51) = 0;
        *(char *)((int)param_2 + 0x52) = (char)param_2[0xe];
        param_2[0x11] = (uint)local_88._4_4_;
        param_2[0x12] = local_80;
        param_2[0x13] = param_2[8];
switchD_0080d7a8_caseD_3:
        uVar16 = FUN_0080c574(puVar14,param_3);
        puVar9 = (undefined4 *)(uVar16 >> 0x20);
        if ((uVar16 & 1) != 0) {
          uVar2 = 3;
          puStack_28 = unaff_r9;
          goto LAB_0080dbf0;
        }
        if (*(char *)((int)param_2 + 0x51) == '\x03') {
          puVar6 = (undefined4 *)*puVar12;
          uVar5 = *puVar14;
          pcVar4 = (code *)*puVar6;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(uVar5);
          }
          if (puVar6[1] != 0) {
            thunk_FUN_016d3fb4(uVar5);
          }
        }
        if (puVar9 == (undefined4 *)0x0) {
          FUN_01656eb8(&local_88,&DAT_0186399c,0,0,350000000,&DAT_0186399c);
          FUN_016dd1aa(&local_d8,&local_88,0x50);
          FUN_016dd1aa(puVar12,&local_d8,0x50);
          unaff_r7 = (undefined4 *)0x0;
switchD_0080d7a8_caseD_4:
          iVar3 = FUN_01657fc4(puVar12,*param_3);
          if (iVar3 == 0) {
            FUN_00a07b4c(puVar12);
            *(undefined1 *)(param_2 + 0x11) = 0;
            *(char *)((int)param_2 + 0x45) = (char)param_2[0xe];
            param_2[0x10] = param_2[8];
switchD_0080d7a8_caseD_5:
            FUN_0080c81c(&local_88,puVar14,param_3);
            uVar7 = local_80;
            puVar9 = local_88._4_4_;
            uVar5 = (uint)local_88;
            if ((uint)local_88 != 0x80000001) {
              cVar1 = (char)param_2[0x11];
              if (cVar1 == '\x03') {
                cVar1 = *(char *)((int)param_2 + 0x81);
                iVar3 = 0xc;
joined_r0x0080da44:
                if (cVar1 == '\x03') {
LAB_0080da48:
                  FUN_0080cf9c((int)puVar14 + iVar3);
                }
              }
              else {
                iVar3 = 0x10;
                if (cVar1 == '\x04') {
                  cVar1 = (char)param_2[0x20];
                  goto joined_r0x0080da44;
                }
                if (cVar1 == '\x05') goto LAB_0080da48;
              }
              if (uVar5 == 0x80000000) {
                local_88._0_4_ = 3;
                local_d0 = puVar9;
                local_d4 = 0x13;
                local_d8 = (undefined4 *)&DAT_00345062;
                local_30 = (undefined4 *)FUN_0080807c(&local_d8,&local_88);
                goto LAB_0080da84;
              }
              FUN_00823d64(&local_34,puVar9,uVar7,(char)param_2[0xe]);
              if (uVar5 != 0) {
                thunk_FUN_016d3fb4(puVar9);
              }
              goto LAB_0080dab8;
            }
            uVar2 = 5;
            puStack_28 = unaff_r9;
          }
          else {
            uVar2 = 4;
            puStack_28 = unaff_r9;
          }
LAB_0080dbf0:
          *(undefined1 *)((int)param_2 + 0x39) = uVar2;
          local_2c = puVar12;
        }
        else {
          local_88._0_4_ = 3;
          local_d4 = 0x14;
          local_d8 = (undefined4 *)&DAT_0034504e;
          local_d0 = puVar9;
          local_30 = (undefined4 *)FUN_0080807c(&local_d8,&local_88);
LAB_0080da84:
          local_34 = 0x80000000;
LAB_0080dab8:
          if (param_2[9] != 0) {
            thunk_FUN_016d3fb4(param_2[10]);
          }
          *(undefined1 *)((int)param_2 + 0x39) = 1;
          uVar5 = local_34;
          unaff_r7 = local_30;
          puVar11 = local_2c;
          unaff_r9 = puStack_28;
          if (local_34 != 0x80000001) goto LAB_0080daec;
        }
        uVar2 = 3;
        puVar9 = unaff_r7;
        unaff_r9 = puStack_28;
        goto LAB_0080dbf8;
      }
      *(undefined1 *)((int)param_2 + 0x39) = 1;
      uVar5 = 0x80000000;
      puVar11 = puVar12;
LAB_0080daec:
      FUN_0080feb8(param_2 + 8);
      if (uVar5 == 0x80000000) {
        param_2[0x1d] = 0x80000000;
        param_2[0x1e] = (uint)unaff_r7;
        *(undefined1 *)(param_2 + 6) = 1;
        param_2[7] = (uint)unaff_r7;
        *(undefined1 *)((int)param_2 + 0x72) = 0;
        param_2[8] = param_2[2];
        puVar12 = puVar11;
        goto switchD_0080d784_caseD_4;
      }
      param_2[0x1d] = uVar5;
      param_2[0x1e] = (uint)unaff_r7;
      *(undefined2 *)(param_2 + 6) = 0x100;
      param_2[0x1f] = (uint)puVar11;
      param_2[0x20] = (uint)unaff_r9;
    } while (uVar5 == 0x80000002);
LAB_0080dc00:
    *(uint *)param_1 = uVar5;
    *(undefined4 **)((int)param_1 + 4) = unaff_r7;
    *(uint **)(param_1 + 1) = puVar11;
    *(undefined4 **)((int)param_1 + 0xc) = unaff_r9;
    if (uVar5 != 0x80000000) {
      if (uVar5 == 0x80000001) {
        *(uint *)param_1 = 0x80000001;
      }
      return;
    }
  }
  local_d8 = unaff_r7;
  iVar3 = (*(code *)param_2[0x2e])(&local_d8);
  uVar5 = 0;
  if (iVar3 != 0) {
    uVar5 = param_2[0x28];
  }
  if (iVar3 == 0 || uVar5 == 0) {
    *(uint *)param_1 = 0x80000000;
    *(undefined4 **)((int)param_1 + 4) = unaff_r7;
    return;
  }
  uVar8 = param_2[0x24];
  uVar10 = param_2[0x25];
  uVar7 = param_2[0x26];
  param_2[0x28] = uVar5 - 1;
  FUN_0165a798(&local_88);
  local_dc = (uint)local_88 + uVar8;
  uVar5 = (int)local_88._4_4_ + CARRY4((uint)local_88,uVar8) + uVar10;
  if ((int)uVar10 < 0 !=
      (int)(((uint)local_88._4_4_ ^ uVar5) & ~((uint)local_88._4_4_ ^ uVar10)) < 0) {
LAB_0080dd28:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
  }
  puVar13 = (undefined1 *)(uVar7 + local_80);
  if (&DAT_3b9aca00 <= puVar13) {
    bVar15 = 0xfffffffe < local_dc;
    local_dc = local_dc + 1;
    uVar7 = uVar5 + bVar15;
    if ((int)((uVar5 ^ uVar7) & ~uVar5) < 0) goto LAB_0080dd28;
    puVar13 = puVar13 + -1000000000;
    uVar5 = uVar7;
  }
  local_88 = FUN_0164ec90(&DAT_01864d8c);
  uVar8 = (uint)(local_88 >> 0x20);
  uVar7 = (uint)local_88;
  iVar3 = 0x180;
  if ((local_88 & 1) != 0) {
    iVar3 = 0xb8;
  }
  if (*(undefined1 **)(uVar8 + iVar3 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                 ,0x73,&DAT_01864d8c);
  }
  FUN_0080e0c4(param_2);
  *param_2 = 1;
  param_2[1] = 0;
  param_2[0xe] = uVar7;
  param_2[0x10] = local_dc;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0xf] = uVar8;
  *(undefined1 *)(param_2 + 0x14) = 0;
  param_2[0x12] = (uint)puVar13;
  param_2[0x11] = uVar5;
  FUN_0080d714(&local_88,param_2,param_3);
  uVar16 = local_88;
  uVar5 = (uint)local_88._4_4_;
  iVar3 = (uint)local_88;
  (**(code **)*unaff_r7)(unaff_r7);
  if (iVar3 == -0x7ffffffe) {
    *(uint *)param_1 = 0x80000000;
    *(uint *)((int)param_1 + 4) = uVar5;
    return;
  }
  *(uint *)(param_1 + 1) = local_80;
  *(uint *)((int)param_1 + 0xc) = local_7c;
  *param_1 = uVar16;
  return;
}

