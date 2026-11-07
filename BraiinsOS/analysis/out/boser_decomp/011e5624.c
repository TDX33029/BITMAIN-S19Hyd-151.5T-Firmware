// FUN_011e5624 @ 011e5624 size=1688 calls_out=15 calls_in=1
// strings: 

void FUN_011e5624(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  int local_250;
  int local_238;
  int local_234;
  int local_1d0;
  int local_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined2 local_128;
  undefined1 local_126;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined2 local_110;
  undefined1 local_10e;
  char local_b8 [20];
  undefined4 *local_a4;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 *local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 local_28;
  undefined1 local_26;
  
  if (*(char *)(param_2 + 0x7a) == '\0') {
    puVar14 = param_2 + 6;
    uVar15 = thunk_FUN_01bee35a(0,0x178);
    piVar4 = (int *)((int)uVar15 + (int)((ulonglong)uVar15 >> 0x20));
    iVar8 = *piVar4;
    *piVar4 = (int)&local_238;
    local_234 = 0;
    local_238 = 4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x59)) {
    case 0:
      *(undefined2 *)((int)param_2 + 0x165) = 0;
      param_2[0x5a] = 3;
      param_2[0x5b] = 0;
      param_2[0x5c] = *param_2;
      param_2[0x5d] = param_2[1];
      param_2[0x5e] = param_2[2];
      param_2[0x5f] = param_2[3];
      param_2[0x60] = param_2[4];
      param_2[0x61] = param_2[5];
    case 3:
      iVar5 = FUN_0118cc68(param_2 + 0x5a);
      if (iVar5 == 0) {
        FUN_00d42fe4(param_2 + 0x5a);
        while( true ) {
          *(undefined1 *)(param_2 + 0x60) = 0;
          param_2[0x5a] = param_2 + 0x58;
switchD_011e5698_caseD_4:
          puVar9 = param_2 + 0x5a;
          FUN_00d43130(&local_1d0,puVar9,param_3);
          if (local_1d0 == 5 && local_1cc == 0) break;
          *(undefined1 *)((int)param_2 + 0x166) = 1;
          FUN_01bed4e2(puVar14,&local_1d0,0x98);
          uVar6 = *puVar14;
          if ((uVar6 & 7) == 3) {
            iVar5 = param_2[7];
            goto LAB_011e5c70;
          }
          if (uVar6 == 4) {
            *puVar9 = local_1c8;
            param_2[0x5b] = uStack_1c4;
            param_2[0x5c] = uStack_1c0;
            param_2[0x5d] = uStack_1bc;
            param_2[0x5e] = uStack_1b8;
            param_2[0x5f] = uStack_1b4;
            local_3c = &LAB_00710a10;
            local_40 = puVar9;
            FUN_00664898(&local_38,&DAT_005b2bb4,&local_40);
            local_50 = local_38;
            uStack_4c = uStack_34;
            uStack_48 = uStack_30;
            FUN_01a70fd4(local_b8,3);
            FUN_01bed4e2(&local_120,local_b8,0x68);
            FUN_01bed4e2(param_2 + 0x60,&local_120,0x68);
            goto switchD_011e5698_caseD_8;
          }
          FUN_01bed4e2(param_2 + 0x2c,&local_1d0,0x98);
LAB_011e5b68:
          *(undefined1 *)(param_2 + 0x5e) = 0;
          puVar9 = param_2 + 0x2c;
          param_2[0x5a] = puVar9;
LAB_011e580c:
          *(undefined1 *)(param_2 + 0x5d) = 0;
          param_2[0x5b] = puVar9;
LAB_011e581c:
          param_2[0x5c] = puVar9;
LAB_011e5820:
          puVar13 = param_2 + 0x5a;
          FUN_00f86b20(local_b8,puVar9,param_3);
          cVar2 = local_b8[0];
          uVar3 = 1;
          if (local_b8[0] == '\x0f') {
            uVar3 = 3;
          }
          *(undefined1 *)(param_2 + 0x5d) = uVar3;
          if (local_b8[0] == '\x0f') {
            uVar3 = 5;
            *(undefined1 *)(param_2 + 0x5e) = 3;
            bVar1 = false;
            goto LAB_011e5cc4;
          }
          FUN_01bed4e2(&local_38,(uint)local_b8 | 1,0x13);
          if (cVar2 == '\x0e') {
            FUN_01bed4e2((uint)&local_120 | 3,(uint)&local_38 | 3,0x10);
            puVar9 = param_1;
          }
          else {
            local_120 = local_38;
            uStack_11c = uStack_34;
            uStack_118 = uStack_30;
            uStack_114 = uStack_2c;
            local_110 = local_28;
            local_10e = local_26;
            puVar9 = local_a4;
          }
          local_138 = local_120;
          uStack_134 = uStack_11c;
          uStack_130 = uStack_118;
          uStack_12c = uStack_114;
          *(char *)(param_2 + 0x52) = cVar2;
          local_128 = local_110;
          local_126 = local_10e;
          *(undefined1 *)(param_2 + 0x5e) = 1;
          *(undefined1 *)((int)param_2 + 0x165) = 1;
          FUN_01bed4e2((int)param_2 + 0x149,&local_138,0x13);
          param_2[0x57] = puVar9;
          if (cVar2 == '\x0e') {
            if (param_2[0x53] != 0) {
              FUN_01bed4e2(param_2 + 0x74,(uint)&local_138 | 3,0x10);
              iVar5 = param_2[0x76];
              uVar10 = 0;
              if (iVar5 < 0) {
LAB_011e5924:
                    /* WARNING: Subroutine does not return */
                FUN_00664620(uVar10,local_250);
              }
              uVar11 = param_2[0x75];
              local_250 = 1;
              iVar12 = 0;
              if (iVar5 != 0) {
                uVar10 = 1;
                local_250 = FUN_01298504(iVar5,1);
                if (local_250 == 0) {
                  local_250 = iVar5;
                  goto LAB_011e5924;
                }
                iVar12 = iVar5;
              }
              FUN_01bed4e2(local_250,uVar11,iVar5);
              *puVar13 = 3;
              param_2[0x5b] = 0;
              param_2[0x5f] = iVar12;
              param_2[0x5e] = 0x80000000;
              param_2[0x60] = local_250;
              param_2[0x61] = iVar5;
switchD_011e5698_caseD_6:
              iVar5 = FUN_0118cc68(param_2 + 0x5a);
              if (iVar5 == 0) goto code_r0x011e5b34;
              bVar1 = false;
              uVar3 = 6;
              goto LAB_011e5cc4;
            }
            goto LAB_011e59f8;
          }
          *puVar13 = param_2[0x52];
          param_2[0x5b] = param_2[0x53];
          param_2[0x5c] = param_2[0x54];
          param_2[0x5d] = param_2[0x55];
          param_2[0x5e] = param_2[0x56];
          param_2[0x5f] = param_2[0x57];
          local_3c = &LAB_00710a10;
          local_40 = puVar13;
          FUN_00664898(&local_38,&DAT_005b2bb4,&local_40);
          local_50 = local_38;
          uStack_4c = uStack_34;
          uStack_48 = uStack_30;
          FUN_01a70fd4(local_b8,3);
          FUN_01bed4e2(&local_120,local_b8,0x68);
          FUN_01bed4e2(param_2 + 0x60,&local_120,0x68);
LAB_011e59b8:
          iVar5 = FUN_0118cc68(param_2 + 0x60);
          if (iVar5 != 0) {
            bVar1 = false;
            uVar3 = 7;
            goto LAB_011e5cc4;
          }
          FUN_00d42fe4(param_2 + 0x60);
          FUN_00d43034(param_2 + 0x5a);
          if (*(char *)(param_2 + 0x52) == '\x0e') {
LAB_011e59f8:
            *(undefined1 *)((int)param_2 + 0x165) = 0;
          }
          *(undefined1 *)((int)param_2 + 0x165) = 0;
          FUN_00d430ac(param_2 + 0x2c);
          if (*puVar14 != 4 || param_2[7] != 0) {
            *(undefined1 *)((int)param_2 + 0x166) = 0;
          }
          *(undefined1 *)((int)param_2 + 0x166) = 0;
        }
        bVar1 = false;
        uVar3 = 4;
      }
      else {
        bVar1 = false;
        uVar3 = 3;
      }
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c15e5c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c15e5c);
    case 4:
      goto switchD_011e5698_caseD_4;
    case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x5e)) {
      case 0:
        puVar9 = (undefined4 *)param_2[0x5a];
        goto LAB_011e580c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c15d7c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c15d7c);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x5d)) {
        case 0:
          puVar9 = (undefined4 *)param_2[0x5b];
          goto LAB_011e581c;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c1c928);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c1c928);
        case 3:
          puVar9 = (undefined4 *)param_2[0x5c];
          goto LAB_011e5820;
        }
      }
    case 6:
      goto switchD_011e5698_caseD_6;
    case 7:
      goto LAB_011e59b8;
    case 8:
switchD_011e5698_caseD_8:
      iVar5 = FUN_0118cc68(param_2 + 0x60);
      if (iVar5 == 0) {
        FUN_00d42fe4(param_2 + 0x60);
        FUN_00d43034(param_2 + 0x5a);
        uVar6 = *puVar14;
        iVar5 = param_2[7];
LAB_011e5c70:
        if (uVar6 != 4 || iVar5 != 0) {
          *(undefined1 *)((int)param_2 + 0x166) = 0;
        }
        piVar7 = (int *)param_2[0x58];
        *(undefined1 *)((int)param_2 + 0x166) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar7;
          bVar1 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar1);
        *piVar7 = iVar5 + -1;
        uVar3 = 1;
        bVar1 = true;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0160ea2c(param_2[0x58]);
          bVar1 = true;
        }
      }
      else {
        bVar1 = false;
        uVar3 = 8;
      }
    }
LAB_011e5cc4:
    *(undefined1 *)(param_2 + 0x59) = uVar3;
    *(bool *)(param_2 + 0x7a) = bVar1;
    *piVar4 = iVar8;
    if (local_238 == 4 && local_234 == 0) {
      uVar10 = 5;
      if (bVar1) {
        uVar10 = 4;
      }
      *param_1 = uVar10;
      param_1[1] = 0;
    }
    else {
      FUN_01bed4e2(param_1,&local_238,0x68);
      local_234 = 0;
      local_238 = 4;
    }
    FUN_00d42fe4(&local_238);
  }
  else {
    *param_1 = 4;
    param_1[1] = 0;
  }
  return;
code_r0x011e5b34:
  FUN_00d42fe4(param_2 + 0x5a);
  (**(code **)(param_2[0x74] + 0x10))(param_2 + 0x77,param_2[0x75],param_2[0x76]);
  if (*(char *)(param_2 + 0x52) == '\x0e') {
    *(undefined1 *)((int)param_2 + 0x165) = 0;
  }
  *(undefined1 *)((int)param_2 + 0x165) = 0;
  goto LAB_011e5b68;
}

