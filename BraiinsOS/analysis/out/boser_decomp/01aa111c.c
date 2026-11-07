// FUN_01aa111c @ 01aa111c size=1844 calls_out=21 calls_in=1
// strings: 

void FUN_01aa111c(int **param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined1 uVar7;
  int *piVar8;
  int **ppiVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint *puVar12;
  int *piVar13;
  undefined4 *puVar14;
  int *piVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined1 auStack_1e08 [24];
  undefined4 local_1df0;
  int local_1dec;
  undefined4 local_1de8;
  undefined4 local_1de4;
  undefined4 local_1de0;
  undefined1 auStack_1ddc [252];
  undefined4 local_1ce0;
  undefined1 auStack_1cd8 [232];
  uint local_1bf0;
  int local_1bec;
  undefined1 auStack_1be8 [544];
  int *local_19c8;
  int *local_19c4;
  undefined1 local_19a4;
  uint *local_1888;
  undefined1 *local_1884;
  undefined1 auStack_1880 [872];
  int *local_1518 [216];
  undefined4 *local_11b8;
  undefined1 auStack_11b0 [864];
  undefined1 auStack_e50 [872];
  int *local_ae8 [218];
  int *local_780;
  int *local_77c;
  int **local_778;
  int *piStack_774;
  int *piStack_770;
  int *local_76c;
  int *local_768;
  int *piStack_764;
  int *local_760;
  int *local_75c;
  int *local_758;
  int *piStack_754;
  int *piStack_750;
  int *piStack_74c;
  int *piStack_748;
  int *piStack_744;
  undefined4 local_740;
  undefined4 local_738;
  undefined4 local_720;
  undefined1 local_71c;
  undefined4 local_718;
  undefined4 local_714;
  int *local_710;
  int *local_70c;
  undefined4 local_708;
  undefined1 local_704;
  undefined1 local_700;
  undefined4 local_6fc;
  undefined4 local_6f8;
  undefined1 local_6f4;
  undefined4 local_6f0;
  undefined4 local_6ec;
  undefined4 local_6e8;
  undefined4 local_6e4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  int *local_3e0;
  int **local_3dc;
  undefined1 auStack_3a8 [871];
  undefined1 auStack_41 [29];
  
  if (*(char *)(param_2 + 0x134) != '\0') {
    if (*(char *)(param_2 + 0x134) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2e1bc);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d2e1bc);
  }
  puVar14 = *(undefined4 **)(param_2 + 0x130);
  FUN_01bed4e2(auStack_1e08,param_2,0x130);
  FUN_01bed4e2(auStack_1cd8,param_2 + 0x40,0xe8);
  if (local_1dec != 0) {
    thunk_FUN_01be4678(local_1df0);
  }
  FUN_01410ec8(local_1de4,local_1de0);
  FUN_0134aee0(local_1de8,local_1de4,4,0x34);
  FUN_008e0ddc(auStack_1ddc);
  FUN_0178e884(local_1ce0);
  local_760 = (int *)FUN_01a9da28(0);
  ppiVar9 = local_ae8;
  local_1518[0] = (int *)0x0;
  local_6f0 = 2;
  local_6ec = 1;
  local_6e8 = 1;
  local_780 = (int *)0x1;
  local_77c = (int *)0x1;
  local_75c = (int *)0x0;
  local_6f4 = 0;
  local_6fc = 0;
  local_6f8 = 0;
  local_700 = 0;
  local_718 = 0;
  local_714 = 0;
  local_708 = 0;
  local_71c = 0;
  local_720 = 0;
  local_6e4 = 0;
  local_704 = 0;
  local_738 = 0;
  local_740 = 0;
  local_710 = local_760;
  local_70c = local_760;
  iVar5 = FUN_01be5878(local_1518,0x20,0xa0);
  piVar4 = local_1518[0];
  if ((iVar5 != 0) || (local_1518[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(0x20,0xa0);
  }
  puVar10 = (undefined4 *)((uint)&local_780 | 0x10);
  FUN_01bed4e2(local_1518[0],&local_780,0xa0);
  do {
    iVar5 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar5 + 1;
  if (iVar5 < 0) goto LAB_01aa180c;
  piVar8 = (int *)*puVar14;
  do {
    iVar5 = *piVar8;
    bVar2 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar2);
  *piVar8 = iVar5 + 1;
  if (iVar5 < 0) goto LAB_01aa180c;
  do {
    do {
      local_1bf0 = DAT_01d50470;
      local_1bec = DAT_01d50474;
      uVar11 = DAT_01d50470 + 1;
      iVar5 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar11;
    DAT_01d50474 = iVar5;
  } while (bVar2 && bVar3);
  FUN_01bed4e2(auStack_1be8,auStack_1cd8,0xe8);
  local_1884 = auStack_41;
  local_1888 = &local_1bf0;
  local_19a4 = 0;
  uVar17 = thunk_FUN_01bee35a(0,0x20);
  puVar12 = (uint *)((int)uVar17 + (int)((ulonglong)uVar17 >> 0x20));
  local_19c4 = piVar4;
  local_19c8 = piVar8;
  if ((char)puVar12[0xe] == '\x01') {
LAB_01aa137c:
    FUN_01bed4e2(auStack_1880,auStack_1be8,0x368);
    if (0x7ffffffe < *puVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_0130701c(&DAT_01d2e14c);
    }
    *puVar12 = *puVar12 + 1;
    uVar11 = puVar12[1];
    FUN_01bed4e2(local_1518,auStack_1be8,0x368);
    if (uVar11 != 2) {
      FUN_01bed4e2(auStack_11b0,auStack_1be8,0x360);
      piVar6 = (int *)*local_11b8;
      piVar8 = (int *)local_11b8[1];
      if ((uVar11 & 1) == 0) {
        piVar15 = (int *)puVar12[2];
        do {
          iVar5 = *piVar15;
          bVar2 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar2);
        *piVar15 = iVar5 + 1;
        if (iVar5 < 0) goto LAB_01aa180c;
        piVar16 = (int *)piVar15[0x82];
        ppiVar9 = param_1;
        if (piVar16 != (int *)0x0) {
          do {
            iVar5 = *piVar16;
            bVar2 = (bool)hasExclusiveAccess(piVar16);
          } while (!bVar2);
          *piVar16 = iVar5 + 1;
          if (iVar5 < 0) goto LAB_01aa180c;
          ppiVar9 = (int **)piVar15[0x83];
        }
        FUN_01bed4e2((uint)auStack_3a8 | 4,auStack_11b0,0x360);
        local_758 = (int *)0x0;
        FUN_01bed4e2(&piStack_754,auStack_3a8,0x364);
        puVar10[4] = piVar6;
        puVar10[5] = piVar8;
        local_778 = (int **)&PTR_LAB_01d2e104;
        *puVar10 = 0;
        puVar10[1] = 0;
        local_780 = (int *)0xcc;
        local_77c = (int *)0x0;
        local_3f0 = 0;
        local_3ec = 0;
        local_3e8 = 0;
        local_ae8[0] = (int *)0x0;
        local_768 = piVar15;
        local_3e0 = piVar16;
        local_3dc = ppiVar9;
        iVar5 = FUN_01be5878(local_ae8,0x20,0x3c0);
        piVar16 = local_ae8[0];
        piVar13 = (int *)0x0;
        if (iVar5 == 0) {
          piVar13 = local_ae8[0];
        }
        if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(0x20,0x3c0);
        }
        FUN_01bed4e2(local_ae8[0],&local_780,0x3c0);
        iVar5 = FUN_01a88f0c(piVar15 + 0x40,piVar16,piVar16);
        local_780 = piVar6;
        local_77c = piVar8;
        if (piVar15[0x80] != 0) {
          (**(code **)(piVar15[0x81] + 0x14))
                    (piVar15[0x80] + (*(int *)(piVar15[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_780)
          ;
        }
        if (iVar5 != 0) {
          FUN_019dc904(puVar12[2],iVar5);
        }
      }
      else {
        piVar15 = (int *)puVar12[2];
        do {
          iVar5 = *piVar15;
          bVar2 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar2);
        *piVar15 = iVar5 + 1;
        if (iVar5 < 0) goto LAB_01aa180c;
        piVar16 = (int *)piVar15[0x50];
        if (piVar16 != (int *)0x0) {
          do {
            iVar5 = *piVar16;
            bVar2 = (bool)hasExclusiveAccess(piVar16);
          } while (!bVar2);
          *piVar16 = iVar5 + 1;
          if (iVar5 < 0) goto LAB_01aa180c;
          ppiVar9 = (int **)piVar15[0x51];
        }
        FUN_01bed4e2((uint)local_ae8 | 4,auStack_11b0,0x360);
        FUN_01bed4e2(auStack_e50,local_ae8,0x364);
        local_758 = (int *)0x0;
        FUN_01bed4e2(&piStack_754,auStack_e50,0x364);
        puVar10[4] = piVar6;
        puVar10[5] = piVar8;
        *puVar10 = 0;
        puVar10[1] = 0;
        local_780 = (int *)0xcc;
        local_778 = (int **)&PTR_FUN_01d2e0dc;
        local_77c = (int *)0x0;
        local_3f0 = 0;
        local_3ec = 0;
        local_3e8 = 0;
        local_ae8[0] = (int *)0x0;
        local_768 = piVar15;
        local_3e0 = piVar16;
        local_3dc = ppiVar9;
        iVar5 = FUN_01be5878(local_ae8,0x20,0x3c0);
        piVar16 = local_ae8[0];
        piVar13 = (int *)0x0;
        if (iVar5 == 0) {
          piVar13 = local_ae8[0];
        }
        if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(0x20,0x3c0);
        }
        FUN_01bed4e2(local_ae8[0],&local_780,0x3c0);
        piVar16 = (int *)FUN_01a89190(piVar15 + 0x14,piVar16,piVar16);
        local_780 = piVar6;
        local_77c = piVar8;
        if (piVar15[0x4e] != 0) {
          (**(code **)(piVar15[0x4f] + 0x14))
                    (piVar15[0x4e] + (*(int *)(piVar15[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_780)
          ;
        }
        if (piVar16 != (int *)0x0) {
          local_ae8[0] = (int *)((uint)local_ae8[0] & 0xffffff00);
          local_780 = piVar15 + 2;
          local_77c = piVar16;
          local_778 = local_ae8;
          FUN_019ee860(&local_780);
        }
      }
      *puVar12 = *puVar12 - 1;
      if (*piVar13 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar2 = (bool)hasExclusiveAccess(piVar13);
        if (bVar2) {
          *piVar13 = 0x84;
          goto LAB_01aa1788;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar13[2] + 0x10))(piVar13);
LAB_01aa1788:
      FUN_0160aaa4(&local_780,0);
      param_1[2] = local_780;
      param_1[3] = local_77c;
      param_1[4] = (int *)local_778;
      param_1[5] = piStack_774;
      param_1[6] = piStack_770;
      param_1[7] = local_76c;
      param_1[8] = local_768;
      param_1[9] = piStack_764;
      param_1[10] = local_760;
      param_1[0xb] = local_75c;
      param_1[0xc] = local_758;
      param_1[0xd] = piStack_754;
      param_1[0xe] = piStack_750;
      param_1[0xf] = piStack_74c;
      param_1[0x10] = piStack_748;
      param_1[0x11] = piStack_744;
      param_1[0x12] = piVar4;
      param_1[0x13] = (int *)0x0;
      *param_1 = (int *)0x3;
      param_1[1] = (int *)0x0;
      *(undefined1 *)(param_2 + 0x134) = 1;
      return;
    }
    FUN_01a9c84c(local_1518);
    uVar7 = 0;
    *puVar12 = *puVar12 - 1;
  }
  else {
    if ((char)puVar12[0xe] != '\x02') {
      FUN_019a2bcc(puVar12,&LAB_019efb68);
      *(undefined1 *)(puVar12 + 0xe) = 1;
      goto LAB_01aa137c;
    }
    uVar7 = 1;
    FUN_01a9c84c(auStack_1be8);
  }
  local_780 = (int *)CONCAT31(local_780._1_3_,uVar7);
  FUN_01aa26c4(&local_780);
LAB_01aa180c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1aa180c);
  (*pcVar1)();
}

