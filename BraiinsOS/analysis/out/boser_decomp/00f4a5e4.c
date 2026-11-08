// FUN_00f4a5e4 @ 00f4a5e4 size=2292 calls_out=24 calls_in=1
// strings: boser::bosminer::senderopen/boser/boser/src/bosminer/sender.rsevent open/boser/boser/src/bosminer/sender.rs:57 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::bosminer::senderopen/boser/boser/src/bosminer/sender.rsevent open/boser/boser/src/bosminer/sender.rs:57 | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined4 FUN_00f4a5e4(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 **ppuVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 **ppuVar13;
  undefined4 **ppuVar14;
  undefined1 uVar15;
  undefined4 **ppuVar16;
  undefined4 **unaff_r6;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  int **ppiVar20;
  int iVar21;
  int unaff_r8;
  undefined4 uVar22;
  undefined8 uVar23;
  uint local_98;
  int local_94;
  undefined4 **local_90;
  int ***local_88;
  undefined1 *local_84;
  int *local_80;
  undefined *local_7c;
  undefined4 ***local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 ***local_68;
  undefined **local_64;
  int *local_60;
  int **local_5c;
  undefined4 **local_58;
  uint local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 ***local_48;
  undefined4 ****local_44;
  int **local_40;
  undefined4 **local_3c;
  uint local_38;
  int local_34;
  undefined4 ***local_30;
  undefined4 ***local_2c;
  undefined1 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xb)) {
  case 0:
    param_1[5] = 1;
    param_1[6] = param_1[4] + 4;
    unaff_r6 = (undefined4 **)param_1[2];
    param_1[7] = *param_1;
    param_1[8] = param_1[1];
    param_1[9] = unaff_r6;
    param_1[10] = param_1[3];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c19c6c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c19c6c);
  }
  piVar7 = param_1 + 7;
  if (*piVar7 == -0x80000000) {
    uVar23 = FUN_00f4b1ac(param_1[8] + 8);
    ppiVar20 = (int **)0x80000000;
    local_94 = unaff_r8;
    if (((uint)((ulonglong)uVar23 >> 0x20) & 0xff) != 2) {
      unaff_r6 = *(undefined4 ***)((int)uVar23 + 8);
      FUN_00f2be94();
      if (unaff_r6 != (undefined4 **)0x80000000) {
        piVar12 = (int *)param_1[6];
        if (param_1[5] == 0) {
          piVar12 = param_1 + 6;
        }
        DataMemoryBarrier(0xb);
        if (*(char *)(*piVar12 + 0x4c) != '\0') {
          uVar23 = FUN_00f4b1ac();
          iVar10 = (int)uVar23;
          if (((uint)((ulonglong)uVar23 >> 0x20) & 0xff) == 2) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01c19e14);
          }
          local_98 = *(uint *)(iVar10 + 0x10);
          ppiVar20 = *(int ***)(iVar10 + 8);
          local_90 = *(undefined4 ***)(iVar10 + 0xc);
          local_94 = *(int *)(iVar10 + 0x14);
          *(undefined4 *)(iVar10 + 8) = 0x80000000;
          FUN_00f2be94();
          if (*piVar7 != -0x7fffffff) {
            FUN_00f2d3d4(piVar7);
          }
          *piVar7 = -0x7fffffff;
          goto LAB_00f4a91c;
        }
        FUN_009d418c(param_1[8] + 8,param_2);
        goto LAB_00f4a924;
      }
    }
  }
  else {
    ppiVar20 = (int **)*piVar7;
    ppuVar14 = (undefined4 **)param_1[8];
    uVar17 = param_1[9];
    iVar10 = param_1[10];
    *piVar7 = -0x7fffffff;
    local_40 = ppiVar20;
    local_3c = ppuVar14;
    local_38 = uVar17;
    local_34 = iVar10;
    if ((int)ppiVar20 < -0x7ffffffe) {
      ppiVar20 = (int **)0x80000000;
    }
    else {
      piVar12 = param_1 + 6;
      if (param_1[5] != 0) {
        piVar12 = (int *)param_1[6];
      }
      iVar11 = *piVar12;
      FUN_01656cb0(&local_5c,iVar11 + 8);
      ppuVar4 = local_58;
      if (local_5c == (int **)0x1) {
        local_2c = (undefined4 ***)CONCAT31(local_2c._1_3_,(undefined1)local_54);
        local_30 = (undefined4 ***)local_58;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_30,&DAT_01c19374,&DAT_01c23498);
      }
      uVar6 = local_54 & 0xff;
      DataMemoryBarrier(0xb);
      local_94 = iVar10;
      local_98 = uVar17;
      local_90 = ppuVar14;
      if (*(char *)(iVar11 + 0x4c) == '\0') {
        ppuVar13 = local_58 + 2;
        if (local_58[9] == (undefined4 *)0x0) {
          ppuVar16 = local_58 + 0xb;
          if ((*ppuVar16 != (undefined4 *)0x80000000) && (local_58[10] <= local_58[5])) {
            uVar23 = (**(code **)*param_2)(param_2[1]);
            piVar12 = (int *)thunk_FUN_01be5118(0x34);
            if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,0x34);
            }
            *piVar12 = 1;
            piVar12[1] = 1;
            piVar12[2] = 1;
            piVar12[6] = (int)ppuVar14;
            piVar12[7] = uVar17;
            piVar12[8] = iVar10;
            *(undefined2 *)(piVar12 + 0xc) = 0;
            *(undefined1 *)(piVar12 + 4) = 0;
            piVar12[3] = 0;
            piVar12[5] = (int)ppiVar20;
            piVar12[9] = 0;
            *(undefined8 *)(piVar12 + 10) = uVar23;
            if (*ppuVar16 == (undefined4 *)0x80000000) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01c19de4);
            }
            do {
              iVar10 = *piVar12;
              bVar2 = (bool)hasExclusiveAccess(piVar12);
            } while (!bVar2);
            *piVar12 = iVar10 + 1;
            if (iVar10 < 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xfdee,0xf4aef8);
              (*pcVar1)();
            }
            FUN_009d2be0(ppuVar16,piVar12,&DAT_01c19dcc);
            FUN_00f2be94(ppuVar4,uVar6);
            if (*piVar7 != -0x7fffffff) {
              FUN_00f2d3d4(piVar7);
            }
            ppiVar20 = (int **)0x80000001;
            param_1[7] = 0x80000000;
            param_1[8] = piVar12;
            goto LAB_00f4a904;
          }
          local_5c = ppiVar20;
          local_58 = ppuVar14;
          local_54 = uVar17;
          local_50 = iVar10;
          FUN_009d2b00(ppuVar13,&local_5c);
        }
        else {
          ppuVar16 = local_58 + 6;
          while( true ) {
            uVar23 = FUN_015ef9a8(ppuVar16);
            iVar11 = (int)((ulonglong)uVar23 >> 0x20);
            piVar7 = (int *)uVar23;
            if (piVar7 == (int *)0x0) break;
            uVar18 = *(uint *)(iVar11 + 8);
            uVar8 = uVar18;
            if (uVar18 < 5) {
              uVar8 = 4;
            }
            iVar21 = (int)piVar7 + (uVar8 - 1 & 0xfffffff8) + 8;
            uVar23 = FUN_009d31cc(iVar21);
            uVar8 = (uint)((ulonglong)uVar23 >> 0x20);
            iVar9 = (int)uVar23;
            if ((uVar8 & 0xff) != 2) {
              if (*(int *)(iVar9 + 8) != -0x80000000) {
                FUN_019bb7e0(*(int *)(iVar9 + 8),*(undefined4 *)(iVar9 + 0xc));
              }
              *(undefined4 ***)(iVar9 + 0xc) = ppuVar14;
              *(uint *)(iVar9 + 0x10) = uVar17;
              *(int *)(iVar9 + 0x14) = iVar10;
              *(int ***)(iVar9 + 8) = ppiVar20;
              FUN_00f2be94(iVar9,uVar8);
              FUN_00f2be94(ppuVar4,uVar6);
              (**(code **)(iVar11 + 0xc))(iVar21 + (uVar18 - 1 & 0xffffffe4) + 0x1c);
LAB_00f4acf0:
              DataMemoryBarrier(0xb);
              do {
                iVar10 = *piVar7;
                bVar2 = (bool)hasExclusiveAccess(piVar7);
              } while (!bVar2);
              *piVar7 = iVar10 + -1;
              ppiVar20 = (int **)0x80000000;
              if (iVar10 == 1) {
                DataMemoryBarrier(0xb);
                FUN_00a970d8(piVar7,iVar11);
              }
              goto LAB_00f4a904;
            }
            iVar9 = (**(code **)(iVar11 + 0xc))(iVar21 + (uVar18 - 1 & 0xffffffe4) + 0x1c);
            if (iVar9 == 0) {
              local_5c = ppiVar20;
              local_58 = ppuVar14;
              local_54 = uVar17;
              local_50 = iVar10;
              FUN_009d2b00(ppuVar13,&local_5c);
              FUN_00f2be94(ppuVar4,uVar6);
              goto LAB_00f4acf0;
            }
            DataMemoryBarrier(0xb);
            do {
              iVar9 = *piVar7;
              bVar2 = (bool)hasExclusiveAccess(piVar7);
            } while (!bVar2);
            *piVar7 = iVar9 + -1;
            if (iVar9 == 1) {
              DataMemoryBarrier(0xb);
              FUN_00a970d8(piVar7,iVar11);
            }
          }
          local_5c = ppiVar20;
          local_58 = ppuVar14;
          local_54 = uVar17;
          local_50 = iVar10;
          FUN_009d2b00(ppuVar13,&local_5c);
        }
        ppiVar20 = (int **)0x80000000;
      }
      FUN_00f2be94(ppuVar4,uVar6);
    }
LAB_00f4a904:
    if (local_40 == (int **)0x80000000) {
      FUN_00f2d3d4(&local_40);
    }
LAB_00f4a91c:
    unaff_r6 = local_90;
    if (ppiVar20 == (int **)0x80000001) {
LAB_00f4a924:
      uVar15 = 3;
      uVar22 = 1;
      goto LAB_00f4ac44;
    }
  }
  FUN_00f2d030(param_1 + 5);
  uVar15 = 1;
  uVar22 = 0;
  if (ppiVar20 == (int **)0x80000000) goto LAB_00f4ac44;
  local_38 = local_98;
  local_40 = ppiVar20;
  local_3c = unaff_r6;
  local_34 = local_94;
  if ((DAT_01d50f88 < 4) &&
     ((DAT_01d4c6b0 - 1 < 2 ||
      ((DAT_01d4c6b0 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c6a8), cVar5 != '\0')))))) {
    iVar10 = FUN_01aaa278(DAT_01d4c6a8);
    if (iVar10 == 0) goto LAB_00f4aafc;
    if (*(undefined4 ***)(DAT_01d4c6a8 + 0x20) == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19c7c);
    }
    local_54 = *(uint *)(DAT_01d4c6a8 + 0x24);
    local_50 = *(int *)(DAT_01d4c6a8 + 0x28);
    local_64 = &local_7c;
    local_80 = (int *)(DAT_01d4c6a8 + 0x1c);
    local_5c = (int **)*local_80;
    local_68 = &local_5c;
    local_84 = (undefined1 *)0x1;
    local_78 = &local_48;
    local_88 = (int ***)&local_68;
    local_48 = &local_40;
    local_4c = 0;
    local_60 = (int *)&DAT_01d2ea4c;
    local_7c = &DAT_005b35e5;
    local_44 = (undefined4 ****)&LAB_015eeba0;
    local_58 = *(undefined4 ***)(DAT_01d4c6a8 + 0x20);
    FUN_01aaaecc(DAT_01d4c6a8,&local_88);
    iVar10 = DAT_01d4c6a8;
    if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
      local_2c = *(undefined4 ****)(DAT_01d4c6a8 + 0x14);
      local_28 = *(undefined1 **)(DAT_01d4c6a8 + 0x18);
      local_30 = (undefined4 ***)0x2;
      DataMemoryBarrier(0xb);
      puVar19 = DAT_01d4edc8;
      pcVar3 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar19 = &DAT_01cfc5e0;
        pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar11 = (*(code *)puVar19[3])(pcVar3,&local_30);
      if (iVar11 != 0) {
        FUN_01aaa328(iVar10,pcVar3,puVar19[4],&local_30,&local_88);
      }
    }
  }
  else {
LAB_00f4aafc:
    iVar10 = DAT_01d4c6a8;
    if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
      local_70 = *(undefined4 *)(DAT_01d4c6a8 + 0x14);
      local_6c = *(undefined4 *)(DAT_01d4c6a8 + 0x18);
      local_74 = 2;
      DataMemoryBarrier(0xb);
      puVar19 = DAT_01d4edc8;
      pcVar3 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar19 = &DAT_01cfc5e0;
        pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar11 = (*(code *)puVar19[3])(pcVar3,&local_74);
      if (iVar11 != 0) {
        local_60 = (int *)(DAT_01d4c6a8 + 0x1c);
        if (*(undefined4 ***)(DAT_01d4c6a8 + 0x20) == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19c7c);
        }
        local_2c = &local_48;
        local_54 = *(uint *)(DAT_01d4c6a8 + 0x24);
        local_50 = *(int *)(DAT_01d4c6a8 + 0x28);
        local_30 = &local_5c;
        local_68 = &local_30;
        local_4c = 0;
        local_64 = (undefined **)&DAT_00000001;
        local_44 = &local_88;
        local_88 = &local_40;
        local_28 = &DAT_01d2ea4c;
        local_48 = (undefined4 ***)&DAT_005b35e5;
        local_84 = &LAB_015eeba0;
        local_5c = (int **)*local_60;
        local_58 = *(undefined4 ***)(DAT_01d4c6a8 + 0x20);
        FUN_01aaa328(iVar10,pcVar3,puVar19[4],&local_74,&local_68);
      }
    }
  }
  FUN_019bb7e0(local_40,local_3c);
LAB_00f4ac44:
  *(undefined1 *)(param_1 + 0xb) = uVar15;
  return uVar22;
}

