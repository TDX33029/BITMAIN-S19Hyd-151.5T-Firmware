// FUN_019378f0 @ 019378f0 size=1024 calls_out=13 calls_in=1
// strings: opening directory | reading directory entries | failed to open file

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019378f0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 extraout_r1;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  bool bVar13;
  int local_120;
  undefined4 local_110;
  int local_10c;
  uint local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  int *local_f8;
  undefined1 local_f4;
  uint local_f0 [2];
  int local_e8;
  int local_e4;
  int iStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  int local_c8 [3];
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  int *local_94;
  uint local_90;
  uint local_80;
  
  local_120 = *(int *)(param_2 + 4);
  iVar5 = *(int *)(param_2 + 8);
  local_fc = 0;
  local_100 = 4;
  local_104 = 0;
  local_108 = 0;
  local_10c = 4;
  local_110 = 0;
  if (*(int *)(param_2 + 0xc) == -0x80000000) {
    if (iVar5 == 0) goto LAB_01937bd4;
  }
  else {
    FUN_01937d90(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),&local_110);
  }
  iVar5 = local_120 + iVar5 * 0xc;
  while (uVar3 = local_108, iVar4 = local_10c, local_120 != iVar5) {
    uVar11 = *(undefined4 *)(local_120 + 4);
    uVar9 = *(undefined4 *)(local_120 + 8);
    FUN_019adfac(&local_98,uVar11,uVar9);
    local_120 = local_120 + 0xc;
    if (local_98 == 1) {
      FUN_01937fc0(&local_110,local_90 >> 8,local_94,local_90,uVar11,uVar9,"opening directory",0x11)
      ;
    }
    else {
      local_f4 = (undefined1)local_90;
      local_f8 = local_94;
      while (FUN_019bb288(local_f0,&local_f8), (local_f0[0] & 1) != 0) {
        if (local_e8 == 0) {
          FUN_01937fc0(&local_110,extraout_r1,local_e4,iStack_e0,uVar11,uVar9,
                       "reading directory entries",0x19);
        }
        else {
          local_bc = local_dc;
          uStack_b8 = uStack_d8;
          uStack_b4 = uStack_d4;
          uStack_ac = uStack_cc;
          local_c8[0] = local_e8;
          *(int *)((uint)local_c8 | 4) = local_e4;
          ((int *)((uint)local_c8 | 4))[1] = iStack_e0;
          FUN_019a66e4(&local_a4,*(undefined4 *)(iStack_d0 + 0xc),*(undefined4 *)(iStack_d0 + 0x10),
                       local_e8,local_e4 + -1);
          uVar2 = local_9c;
          uVar1 = local_a0;
          FUN_019adea8(&local_98,local_a0,local_9c);
          if (local_98 == 0) {
            if ((local_80 & 0xf000) == 0x8000) {
              FUN_01937d90(uVar1,uVar2,&local_110);
            }
          }
          else {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch((uint)local_94 & 0xff) {
            case 0:
              if (local_90 != 2) goto LAB_01937b58;
              goto LAB_01937b3c;
            case 1:
              uVar3 = ((uint)local_94 & 0xffff) >> 8;
              break;
            default:
              uVar3 = (uint)*(byte *)(local_90 + 8);
            }
            if (uVar3 == 0) {
LAB_01937b3c:
              FUN_0187266c(local_94,local_90);
            }
            else {
LAB_01937b58:
              FUN_01937fc0(&local_110);
            }
          }
          FUN_0134bd64(local_a4,uVar1);
          FUN_019db4b0(local_c8);
        }
      }
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *local_f8;
        bVar13 = (bool)hasExclusiveAccess(local_f8);
      } while (!bVar13);
      *local_f8 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019ad05c(local_f8);
      }
    }
  }
  if (local_108 < 2) {
  }
  else {
    if (local_108 < 0x15) {
      iVar7 = 0xc;
      iVar5 = local_108 * 0xc;
      do {
        FUN_01936298(iVar4,iVar4 + iVar7);
        iVar7 = iVar7 + 0xc;
      } while (iVar5 != iVar7);
    }
    else {
      FUN_01936f30(local_10c,local_108);
    }
    piVar6 = (int *)(iVar4 + 0x20);
    uVar8 = 1;
    iVar5 = uVar3 - 2;
    do {
      if (piVar6[-3] == piVar6[-6]) {
        iVar10 = piVar6[-4];
        iVar7 = thunk_FUN_01bed842(iVar10,piVar6[-7]);
        if (iVar7 == 0) {
          if (piVar6[-5] != -0x80000000) {
            FUN_0134bd64(piVar6[-5],iVar10);
          }
          if (uVar3 <= uVar8 + 1) goto LAB_01937ce8;
          goto LAB_01937c84;
        }
      }
      piVar6 = piVar6 + 3;
      uVar8 = uVar8 + 1;
      bVar13 = iVar5 != 0;
      iVar5 = iVar5 + -1;
    } while (bVar13);
  }
  goto LAB_01937bd4;
LAB_01937c84:
  do {
    piVar12 = (int *)(iVar4 + uVar8 * 0xc);
    if (*piVar6 == piVar12[-1]) {
      iVar10 = piVar6[-1];
      iVar7 = thunk_FUN_01bed842(iVar10,piVar12[-2]);
      if (iVar7 != 0) goto LAB_01937cb8;
      iVar7 = piVar6[-2];
      if (iVar7 != -0x80000000) {
        FUN_0134bd64(iVar7,iVar10);
      }
    }
    else {
LAB_01937cb8:
      iVar7 = piVar6[-1];
      iVar10 = *piVar6;
      uVar8 = uVar8 + 1;
      *piVar12 = piVar6[-2];
      piVar12[1] = iVar7;
      piVar12[2] = iVar10;
    }
    piVar6 = piVar6 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
LAB_01937ce8:
  local_108 = uVar8;
LAB_01937bd4:
  *param_1 = local_110;
  param_1[1] = local_10c;
  param_1[2] = local_108;
  param_1[3] = local_104;
  param_1[4] = local_100;
  param_1[5] = local_fc;
  return;
}

