// FUN_011e2610 @ 011e2610 size=1060 calls_out=12 calls_in=2
// strings: 

int FUN_011e2610(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined1 local_d1;
  undefined1 local_cd;
  undefined3 uStack_cc;
  uint local_b8;
  int local_b4;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_80;
  undefined4 local_7f;
  undefined4 local_7b;
  undefined4 local_77;
  undefined3 uStack_73;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  undefined4 local_2c;
  
  uVar18 = CONCAT44(local_dc,local_e0);
  if ((*param_2 == '\x04') && (iVar11 = *(int *)(param_1 + 8), iVar11 == *(int *)(param_2 + 0xc))) {
    if (iVar11 != 0) {
      iVar13 = *(int *)(param_2 + 8);
      iVar12 = *(int *)(param_1 + 4);
      do {
        iVar4 = FUN_011e2b78(iVar12,iVar13);
        if (iVar4 == 0) goto LAB_011e2688;
        iVar12 = iVar12 + 0x18;
        iVar13 = iVar13 + 0x18;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    return 0;
  }
LAB_011e2688:
  piVar16 = *(int **)(param_1 + 0xc);
  do {
    iVar11 = *piVar16;
    bVar2 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar2);
  *piVar16 = iVar11 + 1;
  if (iVar11 < 0) {
LAB_011e2a48:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11e2a48);
    (*pcVar1)();
  }
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  if (param_4 == 0) {
    uVar7 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar6 = *(int **)(param_4 + 0xc);
    do {
      iVar11 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar11 + 1;
    if (iVar11 < 0) goto LAB_011e2a48;
    local_e4 = *(undefined4 *)(param_4 + 0x10);
    local_e8 = *(undefined4 *)(param_4 + 0xc);
    uVar15 = *(uint *)(param_1 + 0x10);
    uVar14 = (*(int **)(param_4 + 4))[1];
    uVar10 = 0;
    if (uVar14 <= uVar15) {
      iVar11 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar16 + 2,uVar14);
      uVar10 = uVar14;
      if (iVar11 != 0) {
        uVar10 = 0;
      }
    }
    uVar18 = FUN_011e1508((int)(piVar16 + 2) + uVar10,uVar15 - uVar10);
    local_ec = 3;
    uVar7 = 2;
  }
  uVar19 = FUN_01238114(param_3);
  uVar10 = *(uint *)(param_1 + 8);
  iVar11 = uVar10 * 0x18;
  uVar8 = 0;
  if (0x5555555 < uVar10) {
LAB_011e279c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar8,iVar11);
  }
  if (iVar11 == 0) {
    local_b4 = 8;
    local_b8 = 0;
  }
  else {
    iVar12 = *(int *)(param_1 + 4);
    local_b4 = thunk_FUN_016d4a50(iVar11);
    if (local_b4 == 0) {
      uVar8 = 8;
      goto LAB_011e279c;
    }
    local_b8 = uVar10;
    if (uVar10 != 0) {
      iVar13 = 0;
      uVar14 = 0;
      do {
        if (iVar11 == iVar13) break;
        uVar14 = uVar14 + 1;
        puVar17 = (undefined4 *)(iVar12 + iVar13);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)puVar17) {
        case 0:
          uVar3 = 0;
          goto LAB_011e2948;
        case 1:
          local_a8 = *puVar17;
          local_a4 = puVar17[1];
          local_a0 = puVar17[2];
          local_9c = puVar17[3];
          local_98 = puVar17[4];
          uStack_94 = puVar17[5];
          break;
        case 2:
          local_a8 = *puVar17;
          local_a4 = puVar17[1];
          local_a0 = puVar17[2];
          local_9c = puVar17[3];
          local_98 = puVar17[4];
          uStack_94 = puVar17[5];
          break;
        case 3:
          iVar4 = puVar17[3];
          uVar8 = puVar17[2];
          if (iVar4 == 0) {
            iVar9 = 1;
          }
          else {
            iVar9 = thunk_FUN_016d4a50(iVar4);
            if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar4);
            }
          }
          FUN_016dd1aa(iVar9,uVar8,iVar4);
          uVar3 = 3;
          local_a4 = iVar4;
          local_a0 = iVar9;
          local_9c = iVar4;
          goto LAB_011e282c;
        case 4:
          FUN_0115c22c((uint)&local_a8 | 4,puVar17 + 1);
          uVar3 = 4;
LAB_011e282c:
          local_a8 = CONCAT31(local_a8._1_3_,uVar3);
          break;
        case 5:
          if (puVar17[3] == 0) {
            local_9c = 0;
            local_a4 = 0;
          }
          else {
            if (puVar17[1] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018ac52c);
            }
            FUN_011f809c((uint)&local_a8 | 4,puVar17[1],puVar17[2]);
          }
          uVar3 = 5;
LAB_011e2948:
          local_a8 = CONCAT31(local_a8._1_3_,uVar3);
        }
        puVar17 = (undefined4 *)(local_b4 + iVar13);
        iVar13 = iVar13 + 0x18;
        *puVar17 = local_a8;
        puVar17[1] = local_a4;
        puVar17[2] = local_a0;
        puVar17[3] = local_9c;
        puVar17[4] = local_98;
        puVar17[5] = uStack_94;
      } while (uVar10 != uVar14);
    }
  }
  uStack_d8._3_1_ = (undefined1)local_b8;
  local_d1 = (undefined1)local_b4;
  local_7b = CONCAT13(local_d1,(int3)(local_b8 >> 8));
  local_cd = (undefined1)uVar10;
  uStack_cc = (undefined3)(uVar10 >> 8);
  local_9c = local_ec;
  local_98 = local_e8;
  uStack_94 = local_e4;
  local_50 = 6;
  local_80 = 4;
  local_88 = 0x8000000e;
  local_7f = uStack_d8;
  local_77 = CONCAT13(local_cd,(int3)((uint)local_b4 >> 8));
  uStack_73 = uStack_cc;
  local_a8 = uVar7;
  local_4c = param_2;
  local_30 = piVar16;
  local_2c = uVar5;
  uStack_90 = uVar18;
  local_38 = uVar19;
  iVar11 = thunk_FUN_016d4a50(0x80);
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar11,&local_a8,0x80);
  return iVar11;
}

