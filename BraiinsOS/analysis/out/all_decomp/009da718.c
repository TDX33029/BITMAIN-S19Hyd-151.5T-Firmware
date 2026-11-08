// FUN_009da718 @ 009da718 size=1568 calls_out=13 calls_in=0
// strings: 

void FUN_009da718(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  code *pcVar6;
  int *piVar7;
  int **ppiVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int **ppiVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int *local_b0;
  int *local_ac;
  int *local_a8;
  int *local_a0;
  int *local_9c;
  int **local_98;
  undefined1 *local_94;
  int *local_30;
  int *local_2c;
  int *local_28;
  
  iVar10 = param_2[0xb];
  iVar11 = param_2[10];
  iVar9 = *param_3;
  piVar12 = (int *)param_3[1];
  local_c0 = param_3[2];
  if (iVar10 == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(iVar10);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar10);
    }
  }
  FUN_016dd1aa(iVar3,iVar11,iVar10);
  if (iVar9 == 0) {
    local_bc = iVar10;
    local_b8 = iVar3;
    local_b4 = iVar10;
  }
  else {
    local_94 = &LAB_00fac484;
    local_98 = &local_30;
    local_a0 = param_2 + 9;
    local_9c = &DAT_006043a8;
    local_30 = piVar12;
    FUN_00600d2c(&local_bc,&DAT_00570dec,&local_a0);
    if (iVar10 != 0) {
      thunk_FUN_016d3fb4(iVar3);
    }
  }
  local_30 = &local_bc;
  local_2c = &DAT_006043a8;
  FUN_00600d2c(&local_a0,&DAT_00570237,&local_30);
  ppiVar13 = local_98;
  piVar7 = local_9c;
  piVar12 = local_a0;
  iVar9 = FUN_00fabc64(local_c0,&local_a0);
  iVar10 = 10 - iVar9;
  if (iVar9 == 10) {
    iVar3 = 1;
    iVar11 = 0;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(iVar10);
    iVar11 = iVar10;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar10);
    }
  }
  FUN_016dd1aa(iVar3,(int)&local_a0 + iVar9,iVar10);
  FUN_015ed164(&local_a0,piVar7,ppiVar13,iVar3,iVar10);
  if (iVar11 != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  if (piVar12 != (int *)0x0) {
    thunk_FUN_016d3fb4(piVar7);
  }
  piVar12 = local_9c;
  if ((4 < ((uint)local_a0 & 0xff)) || (((uint)local_a0 & 0xff) == 3)) {
    puVar14 = (undefined4 *)local_9c[1];
    uVar4 = *local_9c;
    pcVar6 = (code *)*puVar14;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(uVar4);
    }
    if (puVar14[1] != 0) {
      thunk_FUN_016d3fb4(uVar4);
    }
    thunk_FUN_016d3fb4(piVar12);
  }
  local_98 = (int **)&local_c0;
  local_a0 = &local_bc;
  local_94 = &LAB_00fac484;
  local_9c = &DAT_006043a8;
  FUN_00600d2c(&local_30,&DAT_0057231e,&local_a0);
  piVar2 = local_28;
  piVar7 = local_2c;
  piVar12 = local_30;
  uVar4 = 0;
  if ((int)local_28 < 0) {
LAB_009da904:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar4,local_28);
  }
  if (local_28 == (int *)0x0) {
    iVar9 = 1;
  }
  else {
    iVar9 = thunk_FUN_016d4a50(local_28);
    if (iVar9 == 0) {
      uVar4 = 1;
      goto LAB_009da904;
    }
  }
  FUN_016dd1aa(iVar9,piVar7,local_28);
  if (piVar12 != (int *)0x0) {
    thunk_FUN_016d3fb4(piVar7);
  }
  iVar10 = param_2[0xd];
  iVar11 = param_2[0xe];
  FUN_0113d324(&local_a0,iVar9,local_28,iVar10,iVar11);
  local_b0 = local_a0;
  local_ac = local_9c;
  local_a8 = (int *)local_98;
  uVar15 = FUN_0113c98c(&local_b0);
  piVar12 = (int *)(uVar15 >> 0x20);
  ppiVar13 = (int **)param_2;
  if ((uVar15 & 1) == 0) {
    if (local_b0 != (int *)0x0) {
      thunk_FUN_016d3fb4(local_ac);
    }
    if (piVar12 == (int *)0x0) {
      FUN_0113d324(&local_a0,iVar9,local_28,iVar10,iVar11);
      piVar12 = local_9c;
      piVar7 = local_a0;
      piVar5 = (int *)FUN_0113ce68(local_9c,local_98,param_2[8]);
      if (piVar5 == (int *)0x0) {
        if (piVar7 != (int *)0x0) {
          thunk_FUN_016d3fb4(piVar12);
        }
        goto LAB_009daa38;
      }
      local_a0 = (int *)0x3;
      local_2c = (int *)&DAT_00000018;
      local_30 = (int *)&DAT_0034922f;
      local_28 = piVar5;
      piVar5 = (int *)FUN_0099eff8(&local_30,&local_a0);
    }
    else {
LAB_009daa38:
      FUN_0113d324(&local_a0,iVar9,local_28,param_2[0x10],param_2[0x11]);
      piVar12 = local_9c;
      piVar7 = local_a0;
      piVar5 = (int *)FUN_0113cf28(local_9c,local_98,param_2[0x13],param_2[0x14]);
      if (piVar5 == (int *)0x0) {
        if (piVar7 != (int *)0x0) {
          thunk_FUN_016d3fb4(piVar12);
        }
        FUN_0113d324(&local_b0,iVar9,local_28,&DAT_00349265,6);
        piVar7 = local_a8;
        piVar12 = local_ac;
        FUN_015f5984(&local_a0,local_ac,local_a8);
        ppiVar8 = local_98;
        piVar1 = local_a0;
        ppiVar13 = (int **)local_b0;
        if (local_a0 == (int *)0x0) {
          piVar7 = (int *)FUN_0113ce68(piVar12,piVar7,1);
          if (piVar7 != (int *)0x0) {
            local_a0 = (int *)0x3;
            local_2c = (int *)&DAT_00000018;
            local_30 = (int *)&DAT_0034926b;
            local_28 = piVar7;
            piVar5 = (int *)FUN_0099eff8(&local_30,&local_a0);
            if (ppiVar13 != (int **)0x0) goto LAB_009dab18;
            goto LAB_009dab1c;
          }
          ppiVar8 = (int **)piVar12;
          if (ppiVar13 != (int **)0x0) goto LAB_009daca4;
        }
        else if ((char)local_9c == '\x03') {
          iVar3 = (int)*local_98;
          puVar14 = local_98[1];
          pcVar6 = (code *)*puVar14;
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(iVar3);
          }
          if (puVar14[1] != 0) {
            thunk_FUN_016d3fb4(iVar3);
          }
LAB_009daca4:
          thunk_FUN_016d3fb4(ppiVar8);
        }
        FUN_0113d324(&local_a0,iVar9,local_28,param_2[0x16],param_2[0x17]);
        ppiVar13 = local_98;
        piVar5 = local_9c;
        piVar7 = local_a0;
        FUN_0113d324(&local_a0,iVar9,local_28,iVar10,iVar11);
        local_30 = local_a0;
        local_2c = local_9c;
        local_28 = (int *)local_98;
        if (piVar1 != (int *)0x0 && local_b0 != (int *)0x0) {
          thunk_FUN_016d3fb4(piVar12);
        }
        goto joined_r0x009dad1c;
      }
      local_a0 = (int *)0x3;
      local_2c = (int *)&DAT_0000001e;
      local_30 = (int *)&DAT_00349247;
      local_28 = piVar5;
      piVar5 = (int *)FUN_0099eff8(&local_30,&local_a0);
    }
    if (piVar7 != (int *)0x0) goto LAB_009dab18;
  }
  else {
    local_a0 = (int *)0x3;
    local_2c = (int *)&DAT_00000019;
    local_30 = (int *)&DAT_00349216;
    local_28 = piVar12;
    piVar5 = (int *)FUN_0099eff8(&local_30,&local_a0);
    if (local_b0 != (int *)0x0) {
      piVar12 = local_ac;
LAB_009dab18:
      thunk_FUN_016d3fb4(piVar12);
    }
  }
LAB_009dab1c:
  piVar7 = (int *)&DAT_80000000;
joined_r0x009dad1c:
  if (piVar2 != (int *)0x0) {
    thunk_FUN_016d3fb4(iVar9);
  }
  if (local_bc != 0) {
    thunk_FUN_016d3fb4(local_b8);
  }
  if (piVar7 == (int *)&DAT_80000000) {
    *param_1 = 0x80000000;
    (**(code **)*piVar5)(piVar5);
    return;
  }
  *param_1 = piVar7;
  param_1[1] = piVar5;
  param_1[2] = ppiVar13;
  param_1[3] = local_30;
  param_1[4] = local_2c;
  param_1[5] = local_28;
  return;
}

