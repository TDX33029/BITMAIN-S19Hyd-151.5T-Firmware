// FUN_008109b0 @ 008109b0 size=1812 calls_out=20 calls_in=1
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_008109b0(uint *param_1,uint *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint *puVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *unaff_r6;
  undefined4 *unaff_r7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  bool bVar15;
  ulonglong uVar16;
  uint local_d4;
  undefined4 *local_d0;
  undefined4 local_cc;
  undefined4 *local_c8;
  undefined8 local_80;
  uint local_78;
  uint local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  
  puVar12 = param_2 + 0xf;
  puVar4 = param_2 + 8;
  puVar14 = param_2 + 0x10;
  if ((*param_2 & 1) == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x19)) {
    case 0:
      goto switchD_00810a08_caseD_0;
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
        uVar6 = param_2[0xc];
        goto LAB_00810af4;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0186398c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0186398c);
      case 3:
        goto switchD_00810a2c_caseD_3;
      case 4:
        goto switchD_00810a2c_caseD_4;
      case 5:
        goto switchD_00810a2c_caseD_5;
      }
    }
switchD_00810a08_caseD_4:
    uVar16 = FUN_0080d040(param_2 + 0xb,param_3);
    puVar9 = (undefined4 *)(uVar16 >> 0x20);
    if ((uVar16 & 1) != 0) {
      uVar2 = 4;
      puVar9 = unaff_r7;
LAB_00810e78:
      uVar6 = 0x80000001;
LAB_00810e7c:
      *(undefined1 *)((int)param_2 + 0x19) = uVar2;
      unaff_r7 = puVar9;
      goto LAB_00810e80;
    }
    cVar1 = *(char *)((int)param_2 + 0x7e);
    bVar15 = cVar1 == '\x03';
    if (bVar15) {
      cVar1 = (char)param_2[0x1e];
    }
    if (bVar15 && cVar1 == '\x03') {
      puVar7 = (undefined4 *)param_2[0x1d];
      unaff_r6 = (undefined4 *)param_2[0x1c];
      pcVar5 = (code *)*puVar7;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(unaff_r6);
      }
      if (puVar7[1] != 0) {
        thunk_FUN_016d3fb4(unaff_r6);
      }
      if (param_2[0x16] != 0) {
        thunk_FUN_016d3fb4(param_2[0x17]);
      }
    }
    if (puVar9 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_2[10])();
      if ((param_2[7] & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*puVar4);
      }
      uVar6 = 0x80000000;
      *(undefined1 *)(param_2 + 6) = 0;
      uVar2 = 1;
      goto LAB_00810e7c;
    }
    unaff_r7 = (undefined4 *)param_2[10];
    if (((char)param_2[6] != '\0') && ((param_2[7] & 0x7fffffff) != 0)) {
      thunk_FUN_016d3fb4(*puVar4);
    }
    *param_1 = 0x80000000;
    param_1[1] = (uint)unaff_r7;
    *(undefined2 *)(param_2 + 6) = 0x100;
  }
  else {
    unaff_r7 = (undefined4 *)FUN_01657fc4(param_2 + 2,*param_3);
    do {
      if (((uint)unaff_r7 & 1) != 0) {
        *param_1 = 0x80000001;
        return;
      }
      uVar6 = param_2[0x2a];
      uVar8 = param_2[0x2b];
      unaff_r6 = (undefined4 *)param_2[0x2c];
      uVar10 = param_2[0x2d];
      FUN_00811338(param_2);
      param_2[4] = (uint)unaff_r6;
      *(undefined1 *)((int)param_2 + 0x19) = 0;
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = uVar6;
      param_2[3] = uVar8;
      param_2[5] = uVar10;
switchD_00810a08_caseD_0:
      *(undefined1 *)(param_2 + 6) = 0;
      uVar6 = param_2[2];
      uVar2 = *(undefined1 *)param_2[4];
      param_2[0xc] = uVar6;
      *(undefined1 *)((int)param_2 + 0x3a) = uVar2;
      *(undefined1 *)((int)param_2 + 0x39) = 0;
      param_2[0xd] = param_2[3];
LAB_00810af4:
      *(undefined1 *)(param_2 + 0xe) = uVar2;
      param_2[8] = uVar6;
      FUN_00821fdc(&local_80);
      unaff_r7 = local_80._4_4_;
      if ((uint)local_80 != 0x80000000) {
        param_2[9] = (uint)local_80;
        param_2[10] = (uint)local_80._4_4_;
        param_2[0xb] = local_78;
        *(undefined1 *)((int)param_2 + 0x51) = 0;
        *(char *)((int)param_2 + 0x52) = (char)param_2[0xe];
        param_2[0x11] = (uint)local_80._4_4_;
        param_2[0x12] = local_78;
        param_2[0x13] = param_2[8];
switchD_00810a2c_caseD_3:
        uVar16 = FUN_0080c574(puVar12,param_3);
        puVar9 = (undefined4 *)(uVar16 >> 0x20);
        if ((uVar16 & 1) != 0) {
          uVar2 = 3;
          local_28 = unaff_r6;
          goto LAB_00810e70;
        }
        if (*(char *)((int)param_2 + 0x51) == '\x03') {
          unaff_r6 = (undefined4 *)*puVar14;
          uVar6 = *puVar12;
          if ((code *)*unaff_r6 != (code *)0x0) {
            (*(code *)*unaff_r6)(uVar6);
          }
          if (unaff_r6[1] != 0) {
            thunk_FUN_016d3fb4(uVar6);
          }
        }
        if (puVar9 == (undefined4 *)0x0) {
          FUN_01656eb8(&local_80,&DAT_0186399c,0,0,350000000,&DAT_0186399c);
          FUN_016dd1aa(&local_d0,&local_80,0x50);
          FUN_016dd1aa(puVar14,&local_d0,0x50);
          unaff_r7 = (undefined4 *)0x0;
switchD_00810a2c_caseD_4:
          iVar3 = FUN_01657fc4(puVar14,*param_3);
          if (iVar3 == 0) {
            FUN_00a07b4c(puVar14);
            *(undefined1 *)(param_2 + 0x11) = 0;
            *(char *)((int)param_2 + 0x45) = (char)param_2[0xe];
            param_2[0x10] = param_2[8];
switchD_00810a2c_caseD_5:
            FUN_0080c81c(&local_80,puVar12,param_3);
            uVar8 = local_78;
            puVar9 = local_80._4_4_;
            uVar6 = (uint)local_80;
            if ((uint)local_80 != 0x80000001) {
              cVar1 = (char)param_2[0x11];
              if (cVar1 == '\x03') {
                cVar1 = *(char *)((int)param_2 + 0x81);
                iVar3 = 0xc;
joined_r0x00810cc0:
                if (cVar1 == '\x03') {
LAB_00810cc4:
                  FUN_0080cf9c((int)puVar12 + iVar3);
                }
              }
              else {
                iVar3 = 0x10;
                if (cVar1 == '\x04') {
                  cVar1 = (char)param_2[0x20];
                  goto joined_r0x00810cc0;
                }
                if (cVar1 == '\x05') goto LAB_00810cc4;
              }
              if (uVar6 == 0x80000000) {
                local_80._0_4_ = 3;
                local_c8 = puVar9;
                local_cc = 0x13;
                local_d0 = (undefined4 *)&DAT_00345062;
                local_2c = (undefined4 *)FUN_0080807c(&local_d0,&local_80);
                goto LAB_00810d00;
              }
              FUN_00823b24(&local_30,puVar9,uVar8,(char)param_2[0xe]);
              if (uVar6 != 0) {
                thunk_FUN_016d3fb4(puVar9);
              }
              goto LAB_00810d34;
            }
            uVar2 = 5;
            local_28 = unaff_r6;
          }
          else {
            uVar2 = 4;
            local_28 = unaff_r6;
          }
LAB_00810e70:
          *(undefined1 *)((int)param_2 + 0x39) = uVar2;
        }
        else {
          local_80._0_4_ = 3;
          local_cc = 0x14;
          local_d0 = (undefined4 *)&DAT_0034504e;
          local_c8 = puVar9;
          local_2c = (undefined4 *)FUN_0080807c(&local_d0,&local_80);
LAB_00810d00:
          local_30 = 0x80000000;
LAB_00810d34:
          if (param_2[9] != 0) {
            thunk_FUN_016d3fb4(param_2[10]);
          }
          *(undefined1 *)((int)param_2 + 0x39) = 1;
          uVar6 = local_30;
          unaff_r6 = local_28;
          unaff_r7 = local_2c;
          if (local_30 != 0x80000001) goto LAB_00810d64;
        }
        uVar2 = 3;
        unaff_r6 = local_28;
        puVar9 = unaff_r7;
        goto LAB_00810e78;
      }
      *(undefined1 *)((int)param_2 + 0x39) = 1;
      uVar6 = 0x80000000;
LAB_00810d64:
      FUN_0080feb8(puVar4);
      if (uVar6 == 0x80000000) {
        unaff_r6 = (undefined4 *)&DAT_80000000;
        param_2[7] = 0x80000000;
        param_2[8] = (uint)unaff_r7;
        *(undefined1 *)(param_2 + 6) = 1;
        param_2[10] = (uint)unaff_r7;
        *(undefined1 *)((int)param_2 + 0x7e) = 0;
        param_2[0xb] = param_2[2];
        goto switchD_00810a08_caseD_4;
      }
      param_2[7] = uVar6;
      param_2[8] = (uint)unaff_r7;
      param_2[9] = (uint)unaff_r6;
      *(undefined2 *)(param_2 + 6) = 0x100;
    } while (uVar6 == 0x80000002);
LAB_00810e80:
    *param_1 = uVar6;
    param_1[1] = (uint)unaff_r7;
    param_1[2] = (uint)unaff_r6;
    if (uVar6 != 0x80000000) {
      if (uVar6 == 0x80000001) {
        *param_1 = 0x80000001;
      }
      return;
    }
  }
  local_d0 = unaff_r7;
  iVar3 = (*(code *)param_2[0x2e])(&local_d0);
  uVar6 = 0;
  if (iVar3 != 0) {
    uVar6 = param_2[0x28];
  }
  if (iVar3 == 0 || uVar6 == 0) {
    *param_1 = 0x80000000;
    param_1[1] = (uint)unaff_r7;
    return;
  }
  uVar10 = param_2[0x24];
  uVar13 = param_2[0x25];
  uVar8 = param_2[0x26];
  param_2[0x28] = uVar6 - 1;
  FUN_0165a798(&local_80);
  local_d4 = (uint)local_80 + uVar10;
  uVar6 = (int)local_80._4_4_ + CARRY4((uint)local_80,uVar10) + uVar13;
  if ((int)uVar13 < 0 !=
      (int)(((uint)local_80._4_4_ ^ uVar6) & ~((uint)local_80._4_4_ ^ uVar13)) < 0) {
LAB_00810f94:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
  }
  puVar11 = (undefined1 *)(uVar8 + local_78);
  if (&DAT_3b9aca00 <= puVar11) {
    bVar15 = 0xfffffffe < local_d4;
    local_d4 = local_d4 + 1;
    uVar8 = uVar6 + bVar15;
    if ((int)((uVar6 ^ uVar8) & ~uVar6) < 0) goto LAB_00810f94;
    puVar11 = puVar11 + -1000000000;
    uVar6 = uVar8;
  }
  local_80 = FUN_0164ec90(&DAT_01864d8c);
  uVar10 = (uint)(local_80 >> 0x20);
  uVar8 = (uint)local_80;
  iVar3 = 0x180;
  if ((local_80 & 1) != 0) {
    iVar3 = 0xb8;
  }
  if (*(undefined1 **)(uVar10 + iVar3 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                 ,0x73,&DAT_01864d8c);
  }
  FUN_00811338(param_2);
  *param_2 = 1;
  param_2[1] = 0;
  param_2[0xe] = uVar8;
  param_2[0x10] = local_d4;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0xf] = uVar10;
  *(undefined1 *)(param_2 + 0x14) = 0;
  param_2[0x12] = (uint)puVar11;
  param_2[0x11] = uVar6;
  FUN_008109b0(&local_80,param_2,param_3);
  uVar8 = (uint)local_80._4_4_;
  uVar6 = (uint)local_80;
  (**(code **)*unaff_r7)(unaff_r7);
  if (uVar6 == 0x80000002) {
    *param_1 = 0x80000000;
    param_1[1] = uVar8;
    return;
  }
  param_1[1] = uVar8;
  param_1[2] = local_78;
  *param_1 = uVar6;
  return;
}

