// FUN_00b53afc @ 00b53afc size=1228 calls_out=13 calls_in=0
// strings: 

void FUN_00b53afc(uint *param_1,int *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined1 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint extraout_r3;
  uint extraout_r3_00;
  uint uVar10;
  uint unaff_r6;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  double unaff_d10;
  double unaff_d11;
  int *local_e8;
  int *local_e4;
  int local_e0;
  undefined4 uStack_dc;
  undefined8 local_88;
  uint local_80;
  uint local_7c;
  undefined4 local_70;
  int *local_6c;
  undefined4 local_68;
  int local_64;
  int *local_60;
  undefined4 local_5c;
  int *local_58;
  int *local_54;
  int iStack_50;
  undefined4 uStack_4c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[7]) {
  case '\0':
    iVar7 = *(int *)(*param_2 + 0x300);
    *(undefined1 *)(param_2 + 6) = 0;
    iVar7 = iVar7 + 8;
    param_2[1] = iVar7;
LAB_00b53b84:
    param_2[2] = iVar7;
    *(undefined1 *)(param_2 + 5) = 0;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01870570);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01870570);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[6]) {
    case '\0':
      iVar7 = param_2[1];
      goto LAB_00b53b84;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186fc60);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186fc60);
    }
  }
  FUN_00b2d3a0(&local_e8,param_2 + 2);
  piVar4 = local_e4;
  piVar3 = local_e8;
  if (local_e8 == (int *)&DAT_00000008 && local_e4 == (int *)0x0) {
    uVar6 = 3;
    *(undefined1 *)(param_2 + 6) = 3;
    *param_1 = 3;
    param_1[1] = 0;
    goto LAB_00b53f8c;
  }
  uVar2 = CONCAT44(uStack_dc,local_e0);
  uVar10 = extraout_r3;
  if (((char)param_2[5] == '\x03') && (param_2[3] != 0)) {
    FUN_00c8204c(param_2[3],param_2[4],1);
    uVar10 = extraout_r3_00;
  }
  if (piVar3 == (int *)&DAT_00000007 && piVar4 == (int *)0x0) {
    uVar12 = 2;
    uVar11 = local_7c;
    uVar13 = local_80;
  }
  else {
    DataMemoryBarrier(0xb);
    if (DAT_018d8068 == 0) {
      FUN_009b4e0c(&local_58,DAT_018d8008 + 8,&DAT_0186998c,2);
      if (local_58 == (int *)&DAT_00000005) {
        unaff_d10 = *(double *)(local_54 + 2);
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *local_54;
          bVar1 = (bool)hasExclusiveAccess(local_54);
        } while (!bVar1);
        *local_54 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078fa50();
        }
        uVar11 = (uint)(unaff_d10 != 0.0);
      }
      else {
        local_e4 = local_54;
        local_e8 = local_58;
        local_e0 = iStack_50;
        uStack_dc = uStack_4c;
        puVar9 = (undefined4 *)FUN_009cc908(&local_e8);
        (**(code **)*puVar9)();
        uVar11 = 0;
      }
      DataMemoryBarrier(0xb);
      if (DAT_018d8068 != 0) goto LAB_00b53c50;
LAB_00b53d40:
      puVar9 = &DAT_018d7e40;
      local_64 = 1;
      piVar8 = (int *)thunk_FUN_016d4a50(0xc);
      if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      local_58 = &local_64;
      local_54 = &DAT_00f5c97c;
      FUN_00600d2c(&local_e8,&DAT_00590e71,&local_58);
      local_68 = 1;
      *piVar8 = (int)local_e8;
      piVar8[1] = (int)local_e4;
      piVar8[2] = local_e0;
      local_70 = 1;
      local_6c = piVar8;
      local_60 = (int *)thunk_FUN_016d4a50(8);
      if (local_60 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,8);
      }
      iVar7 = piVar8[2];
      *local_60 = piVar8[1];
      local_60[1] = iVar7;
      local_5c = 1;
      local_64 = 1;
      FUN_006048f4(&local_64);
      local_60[2] = (int)&DAT_0056a0f8;
      local_60[3] = 8;
      local_5c = 2;
      FUN_009b4e0c(&local_58,DAT_018d800c + 8,local_60,2);
      piVar5 = local_58;
      if (local_58 == (int *)&DAT_00000005) {
        unaff_d11 = *(double *)(local_54 + 2);
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *local_54;
          bVar1 = (bool)hasExclusiveAccess(local_54);
        } while (!bVar1);
        *local_54 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078fa50();
        }
      }
      else {
        local_e4 = local_54;
        local_e8 = local_58;
        local_e0 = iStack_50;
        uStack_dc = uStack_4c;
        puVar9 = (undefined4 *)FUN_009cc908(&local_e8);
      }
      if (local_64 != 0) {
        thunk_FUN_016d3fb4(local_60);
      }
      if (*piVar8 != 0) {
        thunk_FUN_016d3fb4(piVar8[1]);
      }
      thunk_FUN_016d3fb4(piVar8);
      if (piVar5 == (int *)&DAT_00000005) {
        unaff_r6 = (uint)(unaff_d11 != 0.0);
      }
      else {
        (**(code **)*puVar9)(puVar9);
        unaff_r6 = 0;
      }
    }
    else {
      uVar11 = 0;
      DataMemoryBarrier(0xb);
      if (DAT_018d8068 == 0) goto LAB_00b53d40;
LAB_00b53c50:
      unaff_r6 = 0;
    }
    uVar10 = 0;
    uVar13 = 0;
    uVar12 = (uint)(piVar3 == (int *)&DAT_00000006 && piVar4 == (int *)0x0);
    if ((local_80 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_7c);
    }
  }
  uVar6 = 1;
  *(undefined1 *)(param_2 + 6) = 1;
  *param_1 = uVar12;
  param_1[1] = 0;
  param_1[8] = uVar11;
  param_1[0xc] = unaff_r6;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[9] = uVar10;
  param_1[0xd] = uVar13;
  *(undefined8 *)(param_1 + 2) = uVar2;
  *(undefined8 *)(param_1 + 6) = local_88;
  *(double *)(param_1 + 10) = unaff_d10;
  *(double *)(param_1 + 0xe) = unaff_d11;
LAB_00b53f8c:
  *(undefined1 *)(param_2 + 7) = uVar6;
  return;
}

