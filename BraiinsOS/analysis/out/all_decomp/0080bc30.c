// FUN_0080bc30 @ 0080bc30 size=1688 calls_out=20 calls_in=2
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

/* WARNING: Type propagation algorithm not settling */

void FUN_0080bc30(ulonglong *param_1,uint *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  uint *******pppppppuVar5;
  code *pcVar6;
  uint *******unaff_r5;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  bool bVar13;
  ulonglong uVar14;
  uint local_d8;
  uint *local_d4;
  uint *******local_d0;
  undefined4 local_cc;
  uint *******local_c8;
  undefined8 local_80;
  uint local_78;
  uint local_30;
  uint *******local_2c;
  
  if ((*param_2 & 1) != 0) {
    iVar2 = FUN_01657fc4(param_2 + 2,*param_3);
    if (iVar2 != 0) goto LAB_0080c000;
    unaff_r5 = (uint *******)param_2[0x2a];
    uVar7 = param_2[0x2b];
    uVar8 = param_2[0x2c];
    uVar10 = param_2[0x2d];
    FUN_0080d2cc(param_2);
    *(undefined1 *)((int)param_2 + 0x19) = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = (uint)unaff_r5;
    param_2[3] = uVar7;
    param_2[4] = uVar8;
    param_2[5] = uVar10;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x19)) {
  case 0:
    *(undefined1 *)(param_2 + 6) = 0;
    uVar3 = *(undefined1 *)param_2[4];
    *(undefined1 *)((int)param_2 + 0x39) = 0;
    uVar7 = param_2[2];
    param_2[0xc] = uVar7;
    *(undefined1 *)((int)param_2 + 0x3a) = uVar3;
    param_2[0xd] = param_2[3];
LAB_0080bce0:
    *(undefined1 *)(param_2 + 0xe) = uVar3;
    param_2[8] = uVar7;
    FUN_00822698(&local_80);
    if ((uint)local_80 == 0x80000000) {
      local_2c = local_80._4_4_;
      local_30 = 1;
    }
    else {
      param_2[9] = (uint)local_80;
      param_2[10] = (uint)local_80._4_4_;
      param_2[0xb] = local_78;
      *(undefined1 *)((int)param_2 + 0x51) = 0;
      *(char *)((int)param_2 + 0x52) = (char)param_2[0xe];
      param_2[0x11] = (uint)local_80._4_4_;
      param_2[0x12] = local_78;
      param_2[0x13] = param_2[8];
switchD_0080bd28_caseD_3:
      unaff_r5 = (uint *******)(param_2 + 0xf);
      uVar14 = FUN_0080c574(unaff_r5,param_3);
      pppppppuVar5 = (uint *******)(uVar14 >> 0x20);
      uVar3 = 3;
      if ((uVar14 & 1) != 0) goto LAB_0080bec4;
      if (*(char *)((int)param_2 + 0x51) == '\x03') {
        puVar12 = (undefined4 *)param_2[0x10];
        uVar7 = param_2[0xf];
        pcVar6 = (code *)*puVar12;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(uVar7);
        }
        if (puVar12[1] != 0) {
          thunk_FUN_016d3fb4(uVar7);
        }
      }
      if (pppppppuVar5 == (uint *******)0x0) {
        FUN_01656eb8(&local_80,&DAT_0186399c,0,0,350000000,&DAT_0186399c);
        unaff_r5 = (uint *******)&local_d0;
        FUN_016dd1aa(unaff_r5,&local_80,0x50);
        FUN_016dd1aa(param_2 + 0x10,unaff_r5,0x50);
        goto switchD_0080bd28_caseD_4;
      }
      local_80._0_4_ = 3;
      local_cc = 0x14;
      local_d0 = (uint *******)&DAT_0034504e;
      local_c8 = pppppppuVar5;
      local_2c = (uint *******)FUN_0080807c(&local_d0,&local_80);
LAB_0080bf54:
      local_30 = 1;
LAB_0080bf60:
      if (param_2[9] != 0) {
        thunk_FUN_016d3fb4(param_2[10]);
      }
    }
    unaff_r5 = local_2c;
    uVar7 = local_30;
    local_d4 = param_2 + 8;
    *(undefined1 *)((int)param_2 + 0x39) = 1;
    if (local_30 != 2) {
      FUN_0080feb8(local_d4);
      if ((uVar7 & 1) != 0) {
        param_2[0x1d] = 1;
        param_2[0x1e] = (uint)unaff_r5;
        *(undefined1 *)(param_2 + 6) = 1;
        param_2[7] = (uint)unaff_r5;
        *(undefined1 *)((int)param_2 + 0x72) = 0;
        param_2[8] = param_2[2];
        goto switchD_0080bc94_caseD_4;
      }
      iVar2 = 0;
      param_2[0x1d] = 0;
      param_2[0x1e] = (uint)unaff_r5;
      *(undefined1 *)(param_2 + 6) = 0;
      goto LAB_0080c068;
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
    switch(*(undefined1 *)((int)param_2 + 0x39)) {
    case 0:
      uVar3 = *(undefined1 *)((int)param_2 + 0x3a);
      uVar7 = param_2[0xc];
      goto LAB_0080bce0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186398c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186398c);
    case 3:
      goto switchD_0080bd28_caseD_3;
    case 4:
switchD_0080bd28_caseD_4:
      iVar2 = FUN_01657fc4(param_2 + 0x10,*param_3);
      if (iVar2 == 0) {
        FUN_00a07b4c(param_2 + 0x10);
        *(undefined1 *)(param_2 + 0x11) = 0;
        *(char *)((int)param_2 + 0x45) = (char)param_2[0xe];
        param_2[0x10] = param_2[8];
        goto switchD_0080bd28_caseD_5;
      }
      *(undefined1 *)((int)param_2 + 0x39) = 4;
      break;
    case 5:
switchD_0080bd28_caseD_5:
      FUN_0080c81c(&local_80,param_2 + 0xf,param_3);
      uVar8 = local_78;
      pppppppuVar5 = local_80._4_4_;
      uVar7 = (uint)local_80;
      if ((uint)local_80 != 0x80000001) {
        cVar4 = (char)param_2[0x11];
        if (cVar4 == '\x03') {
          cVar4 = *(char *)((int)param_2 + 0x81);
          iVar2 = 0xc;
LAB_0080bf08:
          if (cVar4 == '\x03') {
LAB_0080bf10:
            FUN_0080cf9c((int)(param_2 + 0xf) + iVar2,cVar4,local_78);
          }
        }
        else {
          iVar2 = 0x10;
          if (cVar4 == '\x04') {
            cVar4 = (char)param_2[0x20];
            goto LAB_0080bf08;
          }
          if (cVar4 == '\x05') goto LAB_0080bf10;
        }
        if (uVar7 == 0x80000000) {
          local_80._0_4_ = 3;
          local_c8 = pppppppuVar5;
          local_cc = 0x13;
          local_d0 = (uint *******)&DAT_00345062;
          local_2c = (uint *******)FUN_0080807c(&local_d0,&local_80);
          goto LAB_0080bf54;
        }
        FUN_00822b90(&local_30,pppppppuVar5,uVar8,(char)param_2[0xe]);
        if (uVar7 != 0) {
          thunk_FUN_016d3fb4(pppppppuVar5);
        }
        goto LAB_0080bf60;
      }
      uVar3 = 5;
      unaff_r5 = (uint *******)0x80000001;
LAB_0080bec4:
      *(undefined1 *)((int)param_2 + 0x39) = uVar3;
    }
    break;
  case 4:
switchD_0080bc94_caseD_4:
    uVar14 = FUN_0080d040(param_2 + 8,param_3);
    pppppppuVar5 = (uint *******)(uVar14 >> 0x20);
    if ((uVar14 & 1) == 0) {
      cVar4 = *(char *)((int)param_2 + 0x72);
      bVar13 = cVar4 == '\x03';
      if (bVar13) {
        cVar4 = (char)param_2[0x1b];
      }
      if (bVar13 && cVar4 == '\x03') {
        puVar12 = (undefined4 *)param_2[0x1a];
        uVar7 = param_2[0x19];
        pcVar6 = (code *)*puVar12;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(uVar7);
        }
        if (puVar12[1] != 0) {
          thunk_FUN_016d3fb4(uVar7);
        }
        if (param_2[0x13] != 0) {
          thunk_FUN_016d3fb4(param_2[0x14]);
        }
      }
      unaff_r5 = (uint *******)param_2[7];
      if (pppppppuVar5 == (uint *******)0x0) {
        iVar2 = 1;
      }
      else {
        (*(code *)**unaff_r5)(unaff_r5);
        iVar2 = 1;
        unaff_r5 = pppppppuVar5;
      }
LAB_0080c068:
      *(undefined1 *)(param_2 + 6) = 0;
      *(int *)param_1 = iVar2;
      *(uint ********)((int)param_1 + 4) = unaff_r5;
      *(undefined1 *)((int)param_2 + 0x19) = 1;
      if (iVar2 != 2) {
        if (iVar2 == 0) {
          return;
        }
        local_d0 = unaff_r5;
        iVar2 = (*(code *)param_2[0x2e])(&local_d0);
        uVar7 = 0;
        if (iVar2 != 0) {
          uVar7 = param_2[0x28];
        }
        if (iVar2 == 0 || uVar7 == 0) {
          *(int *)param_1 = 1;
          *(uint ********)((int)param_1 + 4) = unaff_r5;
          return;
        }
        uVar8 = param_2[0x24];
        uVar11 = param_2[0x25];
        uVar10 = param_2[0x26];
        param_2[0x28] = uVar7 - 1;
        FUN_0165a798(&local_80);
        local_d4 = (uint *)((uint)local_80 + uVar8);
        local_d8 = (int)local_80._4_4_ + CARRY4((uint)local_80,uVar8) + uVar11;
        if ((int)uVar11 < 0 !=
            (int)(((uint)local_80._4_4_ ^ local_d8) & ~((uint)local_80._4_4_ ^ uVar11)) < 0) {
LAB_0080c13c:
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
        }
        puVar9 = (undefined1 *)(uVar10 + local_78);
        if (&DAT_3b9aca00 <= puVar9) {
          bVar13 = 0xfffffffe < local_d4;
          local_d4 = (uint *)((int)local_d4 + 1);
          uVar7 = local_d8 + bVar13;
          if ((int)((local_d8 ^ uVar7) & ~local_d8) < 0) goto LAB_0080c13c;
          puVar9 = puVar9 + -1000000000;
          local_d8 = uVar7;
        }
        uVar14 = FUN_0164ec90(&DAT_01864d8c);
        iVar2 = 0x180;
        if ((uVar14 & 1) != 0) {
          iVar2 = 0xb8;
        }
        local_80 = uVar14;
        if (*(undefined1 **)((int)(uVar14 >> 0x20) + iVar2 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                       ,0x73,&DAT_01864d8c);
        }
        FUN_0080d2cc(param_2);
        *param_2 = 1;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        *(undefined1 *)(param_2 + 0x14) = 0;
        *(ulonglong *)(param_2 + 0xe) = uVar14;
        param_2[0x12] = (uint)puVar9;
        param_2[0x10] = (uint)local_d4;
        param_2[0x11] = local_d8;
        FUN_0080bc30(&local_80,param_2,param_3);
        uVar14 = local_80;
        iVar1 = (int)local_80._4_4_;
        iVar2 = (uint)local_80;
        (*(code *)**unaff_r5)(unaff_r5);
        if (iVar2 == 3) {
          *(int *)param_1 = 1;
          *(int *)((int)param_1 + 4) = iVar1;
          return;
        }
        *param_1 = uVar14;
        return;
      }
      goto LAB_0080c000;
    }
    uVar3 = 4;
    goto LAB_0080bfec;
  }
  uVar3 = 3;
LAB_0080bfec:
  *(int *)param_1 = 2;
  *(uint ********)((int)param_1 + 4) = unaff_r5;
  *(undefined1 *)((int)param_2 + 0x19) = uVar3;
LAB_0080c000:
  *(int *)param_1 = 2;
  return;
}

