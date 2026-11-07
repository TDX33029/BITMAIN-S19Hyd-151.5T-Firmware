// FUN_0079e310 @ 0079e310 size=2248 calls_out=32 calls_in=1
// strings: internal error: entered unreachable code

undefined4 FUN_0079e310(int param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  undefined1 uVar8;
  undefined4 **ppuVar9;
  int *piVar10;
  undefined *puVar11;
  int *piVar12;
  uint uVar13;
  undefined4 ***pppuVar14;
  int iVar15;
  undefined4 uVar16;
  undefined *puVar17;
  undefined4 ***pppuVar18;
  undefined1 uVar19;
  int *piVar20;
  undefined4 *puVar21;
  uint uVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  undefined4 ****local_148;
  undefined4 ***local_144;
  int *local_140;
  uint uStack_13c;
  undefined4 ***local_e8;
  undefined4 ***local_e4;
  int *local_e0;
  uint local_dc;
  undefined *local_d8;
  undefined4 local_98;
  undefined4 *puStack_94;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined4 *local_84;
  undefined4 local_80;
  undefined4 ****local_78;
  undefined *local_74;
  undefined4 local_70;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x20c)) {
  case 0:
    FUN_01bed4e2(param_1,param_1 + 400,0x7c);
    *(undefined1 *)(param_1 + 0xf8) = 0;
switchD_0079e3a8_caseD_0:
    FUN_01bed4e2(param_1 + 0x7c,param_1,0x7c);
    if (*(int *)(param_1 + 200) == -0x80000000) {
LAB_0079e458:
      FUN_015d0fb4(&local_e8,param_1 + 0xd4);
      if (local_e8 == (undefined4 ***)0x4) {
        local_84 = (undefined4 *)(param_1 + 0xfc);
        *local_84 = local_e4;
        local_80 = 0;
        local_88 = 1;
        FUN_019ac130(&local_78,1);
        puVar11 = (undefined *)((int)local_78 + 3);
        puVar17 = local_74 + ((undefined4 ****)0xfffffffc < local_78);
        if ((int)(((uint)local_74 ^ (uint)puVar17) & ~(uint)local_74) < 0) {
          FUN_019e6e14(&local_78);
        }
        else {
          uVar23 = FUN_019ef7f4(&DAT_01c09380);
          uVar16 = (undefined4)((ulonglong)uVar23 >> 0x20);
          FUN_019dc4f8(&local_78,(int)uVar23,uVar16,uVar16,puVar11,puVar17,local_70,&DAT_01c09380);
        }
        local_98 = local_88;
        puStack_94 = local_84;
        uStack_90 = local_80;
        FUN_01bed4e2(&local_e8,&local_78,0x50);
        FUN_01bed4e2(&local_148,&local_e8,0x60);
        FUN_01bed4e2(param_1 + 0x100,&local_148,0x60);
        goto switchD_0079e3a8_caseD_5;
      }
      pppuVar14 = local_e8;
      pppuVar18 = local_e4;
      param_2 = local_e0;
      uVar5 = local_dc;
      goto LAB_0079eb94;
    }
    *(undefined1 *)(param_1 + 0x188) = 0;
    *(int *)(param_1 + 0x180) = param_1 + 0xd4;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xcc);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xd0);
switchD_0079e3a8_caseD_3:
    iVar15 = param_1 + 0x100;
    iVar4 = FUN_007a1fb4(iVar15,param_2);
    uVar8 = 3;
    if (iVar4 == 0) {
      FUN_0079a974(iVar15);
      FUN_019e6e74(&local_e8,&DAT_01c09370,0,0,200000000,&DAT_01c09370);
      FUN_01bed4e2(&local_148,&local_e8,0x50);
      FUN_01bed4e2(iVar15,&local_148,0x50);
      goto switchD_0079e3a8_caseD_4;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c09440);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c09440);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xf8)) {
    case 0:
      goto switchD_0079e3a8_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c09360);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c09360);
    case 3:
      goto switchD_0079e3a8_caseD_3;
    case 4:
switchD_0079e3a8_caseD_4:
      iVar4 = FUN_019e84a0(param_1 + 0x100,*param_2);
      if (iVar4 == 0) {
        FUN_01431b40(param_1 + 0x100);
        goto LAB_0079e458;
      }
      uVar8 = 4;
      break;
    case 5:
switchD_0079e3a8_caseD_5:
      uVar5 = FUN_019ec70c();
      piVar12 = (int *)(param_1 + 0x154);
      piVar20 = (int *)*piVar12;
      if (*(int *)(param_1 + 0x150) == 0) {
        piVar20 = piVar12;
      }
      iVar4 = *piVar20;
      if (*(int *)(param_1 + 0x158) == 0) {
        FUN_01656cb0(&local_e8);
        pppuVar18 = local_e4;
        if (local_e8 == (undefined4 ***)0x1) {
          local_74 = (undefined *)CONCAT31(local_74._1_3_,local_e0._0_1_);
          local_78 = (undefined4 ****)local_e4;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&local_78,&DAT_01c09510,&DAT_01cfd9e0);
        }
        uVar22 = (uint)local_e0 & 0xff;
        FUN_015e9770(local_e4 + 2,1);
        if (pppuVar18[5] == (undefined4 **)0x0) {
          DataMemoryBarrier(0xb);
          if (*(char *)(iVar4 + 0x4c) == '\0') {
            uVar23 = (*(code *)**(undefined4 **)*param_2)(((undefined4 *)*param_2)[1]);
            piVar20 = (int *)thunk_FUN_01be5118(0x24);
            if (piVar20 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,0x24);
            }
            piVar20[6] = (int)uVar23;
            piVar20[5] = 0;
            piVar20[7] = (int)((ulonglong)uVar23 >> 0x20);
            piVar20[8] = 0;
            *piVar20 = 1;
            piVar20[1] = 1;
            piVar20[2] = 0;
            do {
              iVar4 = *piVar20;
              bVar3 = (bool)hasExclusiveAccess(piVar20);
            } while (!bVar3);
            *piVar20 = iVar4 + 1;
            if (iVar4 < 0) goto LAB_0079ed30;
            FUN_015efd88(pppuVar18 + 6,piVar20,&DAT_01c09540);
            FUN_00a97e8c(pppuVar18,uVar22);
            piVar12 = *(int **)(param_1 + 0x158);
            if (piVar12 != (int *)0x0) {
              DataMemoryBarrier(0xb);
              do {
                iVar4 = *piVar12;
                bVar3 = (bool)hasExclusiveAccess(piVar12);
              } while (!bVar3);
              *piVar12 = iVar4 + -1;
              if (iVar4 == 1) {
                DataMemoryBarrier(0xb);
                FUN_007a6a1c(*(undefined4 *)(param_1 + 0x158));
              }
            }
            *(int **)(param_1 + 0x158) = piVar20;
            goto LAB_0079eb20;
          }
          FUN_00a97e8c(pppuVar18,uVar22);
          uVar13 = 2;
          iVar4 = 1;
        }
        else {
          pppuVar18[5] = (undefined4 **)((int)pppuVar18[5] + -1);
          ppuVar7 = (undefined4 **)((int)pppuVar18[4] + 1);
          uVar13 = (uint)*(byte *)((int)pppuVar18[3] + (int)pppuVar18[4]);
          ppuVar9 = (undefined4 **)((int)ppuVar7 - (int)pppuVar18[2]);
          if (ppuVar7 < pppuVar18[2]) {
            ppuVar9 = ppuVar7;
          }
          pppuVar18[4] = ppuVar9;
          FUN_00a97e8c(pppuVar18,uVar22);
          iVar4 = 0;
        }
        if (iVar4 == 2) goto LAB_0079eb20;
        if (iVar4 == 0) {
          pppuVar18 = (undefined4 ***)(uVar13 & 1);
        }
        else {
          pppuVar18 = (undefined4 ***)0x2;
          if (uVar13 != 2) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c09618);
          }
        }
      }
      else {
        uVar24 = FUN_007a3c94(iVar4 + 8);
        uVar22 = (uint)(uVar24 >> 0x20);
        if ((uVar24 & 1) == 0) {
          pppuVar18 = (undefined4 ***)(uVar22 & 1);
        }
        else {
          pppuVar18 = (undefined4 ***)0x2;
          if ((uVar22 & 0xff) != 2) {
            piVar20 = *(int **)(param_1 + 0x158);
            if (piVar20 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01c095f0);
            }
            do {
              iVar4 = *piVar20;
              bVar3 = (bool)hasExclusiveAccess(piVar20);
            } while (!bVar3);
            *piVar20 = iVar4 + 1;
            if (-1 < iVar4) {
              puVar6 = (undefined4 *)*param_2;
              piVar10 = piVar20 + 5;
              cVar2 = (char)*piVar10;
              do {
                if (cVar2 == '\0') {
                  bVar3 = (bool)hasExclusiveAccess(piVar10);
                  if (bVar3) goto code_r0x0079e964;
                }
                else {
                  ClearExclusiveLocal();
                }
                while ((char)*piVar10 != '\0') {
                  HintYield();
                }
                cVar2 = (char)*piVar10;
              } while( true );
            }
LAB_0079ed30:
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0x79ed30);
            (*pcVar1)();
          }
        }
      }
      goto LAB_0079eb68;
    }
  }
LAB_0079eb58:
  uVar19 = 3;
  uVar16 = 1;
  *(undefined1 *)(param_1 + 0xf8) = uVar8;
  goto LAB_0079ec44;
code_r0x0079e964:
  *(char *)piVar10 = '\x01';
  DataMemoryBarrier(0xb);
  cVar2 = (char)piVar20[8];
  DataMemoryBarrier(0xb);
  iVar4 = puVar6[1];
  puVar21 = (undefined4 *)*puVar6;
  if (piVar20[7] == iVar4) {
    puVar6 = (undefined4 *)piVar20[6];
  }
  if (piVar20[7] == iVar4 && puVar6 == puVar21) {
    DataMemoryBarrier(0xb);
    *(char *)piVar10 = '\0';
    if (cVar2 != '\0') goto LAB_0079ea24;
  }
  else {
    uVar23 = (*(code *)*puVar21)(iVar4);
    (**(code **)(piVar20[6] + 0xc))(piVar20[7]);
    *(undefined8 *)(piVar20 + 6) = uVar23;
    if (cVar2 == '\0') {
      DataMemoryBarrier(0xb);
      *(char *)piVar10 = '\0';
    }
    else {
      (*(code *)puVar21[2])(iVar4);
      DataMemoryBarrier(0xb);
      *(char *)piVar10 = '\0';
LAB_0079ea24:
      piVar10 = *(int **)(param_1 + 0x154);
      if (*(int *)(param_1 + 0x150) == 0) {
        piVar10 = piVar12;
      }
      FUN_01656cb0(&local_e8,*piVar10 + 8);
      pppuVar18 = local_e4;
      if (local_e8 == (undefined4 ***)0x1) {
        local_74 = (undefined *)CONCAT31(local_74._1_3_,local_e0._0_1_);
        local_78 = (undefined4 ****)local_e4;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_78,&DAT_01c095c0,&DAT_01cfd9e0);
      }
      uVar22 = (uint)local_e0 & 0xff;
      FUN_015efd88(local_e4 + 6,piVar20,&DAT_01c09600);
      FUN_00a97e8c(pppuVar18,uVar22);
    }
  }
  piVar10 = *(int **)(param_1 + 0x154);
  if (*(int *)(param_1 + 0x150) == 0) {
    piVar10 = piVar12;
  }
  DataMemoryBarrier(0xb);
  if (*(char *)(*piVar10 + 0x4c) == '\0') {
    pppuVar18 = (undefined4 ***)0x3;
  }
  else {
    if (*(int *)(param_1 + 0x150) != 0) {
      piVar12 = *(int **)(param_1 + 0x154);
    }
    uVar24 = FUN_007a3c94(*piVar12 + 8);
    pppuVar18 = (undefined4 ***)((uVar24 & 0x100000001) >> 0x20);
    if ((int)(uVar24 & 0x100000001) != 0) {
      pppuVar18 = (undefined4 ***)0x2;
    }
  }
  if (cVar2 == '\0') {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar20;
      bVar3 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar3);
    *piVar20 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_007a6a1c(piVar20);
    }
  }
  if (pppuVar18 == (undefined4 ***)0x3) {
LAB_0079eb20:
    iVar4 = FUN_019ee264((uint)((uVar5 & 0xff) == 2) | uVar5 & 1,param_1 + 0x100,*param_2);
    pppuVar18 = (undefined4 ***)0x3;
    if (iVar4 != 0) {
      uVar8 = 5;
      goto LAB_0079eb58;
    }
  }
LAB_0079eb68:
  FUN_0079a9b4(param_1 + 0x100);
  if (pppuVar18 == (undefined4 ***)0x2) {
    pppuVar14 = (undefined4 ***)0x5;
LAB_0079eb8c:
    FUN_0079aa98(param_1 + 0xfc);
LAB_0079eb94:
    FUN_0079a76c(param_1 + 0x7c);
  }
  else {
    if (pppuVar18 == (undefined4 ***)0x3) {
      pppuVar14 = (undefined4 ***)0x4;
      goto LAB_0079eb8c;
    }
    if (2 < DAT_01d51b00) {
      local_78 = *(undefined4 *****)(param_1 + 0xcc);
      local_74 = *(undefined **)(param_1 + 0xd0);
      local_148 = &local_78;
      if (*(int *)(param_1 + 200) == -0x80000000) {
        local_74 = (undefined *)0x14;
        local_78 = (undefined4 ****)&DAT_003e109a;
      }
      pppuVar18 = (undefined4 ***)&DAT_01c09390;
      local_144 = (undefined4 ***)&DAT_0132b6a0;
      local_d8 = &DAT_01c09390;
      local_dc = 0xc;
      local_e0 = (int *)&DAT_003e1138;
      local_e4 = (undefined4 ***)0xc;
      local_e8 = (undefined4 ***)&DAT_003e1138;
      FUN_015fb650(&DAT_0058c09b,&local_148,3,&local_e8);
    }
    FUN_0079aa98(param_1 + 0xfc);
    FUN_0079a76c(param_1 + 0x7c);
    pppuVar14 = (undefined4 ***)0x6;
  }
  uVar19 = 1;
  *(undefined1 *)(param_1 + 0xf8) = 1;
  FUN_0079a8d0(param_1);
  uVar16 = 0;
  if (pppuVar14 != (undefined4 ***)0x6) {
    local_148 = (undefined4 ****)pppuVar14;
    local_144 = pppuVar18;
    local_140 = param_2;
    uStack_13c = uVar5;
    if (1 < DAT_01d51b00) {
      local_78 = &local_148;
      local_74 = &DAT_007a4dac;
      local_d8 = &DAT_01c09450;
      local_dc = 0x15;
      local_e0 = (int *)&DAT_003e10ff;
      local_e4 = (undefined4 ***)0x15;
      local_e8 = (undefined4 ***)&DAT_003e10ff;
      FUN_015fb650(&DAT_005829aa,&local_78,2,&local_e8);
    }
    if (((uint)local_148 & 6) == 2) {
      FUN_019bb7e0(local_144,local_140);
    }
  }
LAB_0079ec44:
  *(undefined1 *)(param_1 + 0x20c) = uVar19;
  return uVar16;
}

