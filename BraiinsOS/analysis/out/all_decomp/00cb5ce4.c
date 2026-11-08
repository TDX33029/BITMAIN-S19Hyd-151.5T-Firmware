// FUN_00cb5ce4 @ 00cb5ce4 size=2012 calls_out=14 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x00cb6200) */
/* WARNING: Removing unreachable block (ram,0x00cb62a8) */

void FUN_00cb5ce4(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined1 uVar12;
  int *piVar13;
  undefined8 uVar14;
  int *local_130;
  int *local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined1 auStack_110 [96];
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint local_a4;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  undefined4 local_60;
  uint *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined3 uStack_44;
  undefined1 local_40;
  undefined4 local_3f;
  undefined4 local_3b;
  undefined4 local_37;
  undefined3 uStack_33;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[2]) {
  case '\0':
    iVar4 = *param_2;
    uVar12 = 0;
    param_2[0x28] = iVar4;
    param_2[1] = iVar4;
    *(undefined2 *)(param_2 + 0x29) = 0;
LAB_00cb5d84:
    uVar14 = *(undefined8 *)(iVar4 + 0x40);
    iVar4 = *(int *)(iVar4 + 0x3c4);
    *(undefined1 *)((int)param_2 + 0x27) = 0;
    piVar13 = (int *)(iVar4 + 8);
    *(undefined1 *)(param_2 + 10) = uVar12;
    param_2[8] = (int)piVar13;
    *(undefined8 *)(param_2 + 4) = uVar14;
LAB_00cb5db0:
    *(undefined2 *)(param_2 + 9) = 0;
    *(undefined1 *)((int)param_2 + 0x26) = 0;
    local_90 = 0;
    uStack_a8 = CONCAT31(uStack_a8._1_3_,2);
    uStack_ac = 1;
    local_b0 = 1;
    puVar5 = (uint *)thunk_FUN_016d4a50(0x24);
    if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x24);
    }
    *puVar5 = local_b0;
    puVar5[1] = uStack_ac;
    puVar5[2] = uStack_a8;
    puVar5[3] = local_a4;
    puVar5[4] = local_a0;
    puVar5[5] = uStack_9c;
    puVar5[6] = uStack_98;
    puVar5[7] = uStack_94;
    puVar5[8] = local_90;
    do {
      uVar6 = *puVar5;
      bVar3 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar3);
    *puVar5 = uVar6 + 1;
    if ((int)uVar6 < 0) goto LAB_00cb652c;
    local_120 = CONCAT31(CONCAT21(local_120._2_2_,uVar12),5);
    local_118._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
    local_54 = local_118._4_4_;
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined2 *)((int)param_2 + 0x25) = 1;
    local_118._0_4_ = (undefined4)uVar14;
    param_2[0xc] = (int)puVar5;
    local_60 = local_120;
    local_58 = (undefined4)local_118;
    iVar4 = *piVar13;
    *(undefined1 *)((int)param_2 + 0x25) = 0;
    local_5c = puVar5;
    FUN_016dd1aa(auStack_110,&local_b0,0x60);
    FUN_016dd1aa(param_2 + 0xe,auStack_110,0x60);
    *(undefined1 *)((int)param_2 + 0x9d) = 0;
    param_2[0x26] = iVar4 + 0x188;
    local_118 = uVar14;
LAB_00cb5eb0:
    FUN_00cab200(&local_b0,param_2 + 0xe,param_3);
    uVar12 = (char)local_b0;
    uVar6 = local_b0 & 0xff;
    if (uVar6 == 10) {
      uVar12 = 3;
LAB_00cb6088:
      local_128 = (int *)((int)param_2 + 0x27);
      *(undefined1 *)local_128 = uVar12;
      goto LAB_00cb63c0;
    }
    local_50 = CONCAT13((undefined1)uStack_ac,local_b0._1_3_);
    uStack_4c = CONCAT13((undefined1)uStack_a8,uStack_ac._1_3_);
    uStack_44 = (undefined3)(local_a4 >> 8);
    uStack_48 = CONCAT13((undefined1)local_a4,uStack_a8._1_3_);
    FUN_00aca278(param_2 + 0xe);
    if (uVar6 != 9) {
      local_40 = uVar12;
      local_3f = local_50;
      local_3b = uStack_4c;
      local_37 = uStack_48;
      uStack_33 = uStack_44;
      FUN_008ee7b0(&local_40,2);
    }
    *(undefined1 *)(param_2 + 9) = 0;
LAB_00cb6064:
    local_130 = param_2 + 4;
    piVar13 = param_2 + 0xc;
    FUN_00d40834(&local_b0,piVar13,param_3);
    if ((char)local_b0 == '\x03') {
      uVar12 = 4;
      goto LAB_00cb6088;
    }
    puVar5 = (uint *)(param_2 + 6);
    *puVar5 = local_b0;
    iVar4 = param_2[0xc];
    param_2[7] = uStack_ac;
    if (iVar4 != 0) {
      puVar7 = (uint *)(iVar4 + 0x20);
      do {
        uVar6 = *puVar7;
        bVar3 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar3);
      *puVar7 = uVar6 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar6 & 10) == 8) {
        (**(code **)(*(int *)(iVar4 + 0x10) + 8))(*(undefined4 *)(iVar4 + 0x14));
      }
      if ((uVar6 & 2) != 0) {
        bVar2 = *(byte *)(iVar4 + 8);
        *(undefined1 *)(iVar4 + 8) = 2;
        if ((bVar2 & 0xfd) != 0) {
          (**(code **)**(undefined4 **)(iVar4 + 0xc))();
        }
      }
      piVar8 = (int *)*piVar13;
      if (piVar8 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar8;
          bVar3 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar3);
        *piVar8 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f2f58(*piVar13);
        }
      }
    }
    if ((char)*puVar5 == '\x02') goto switchD_00cb60a4_caseD_5;
    uVar6 = *puVar5;
    iVar4 = param_2[7];
    *(undefined1 *)((int)param_2 + 0x25) = 0;
    *(undefined1 *)(param_2 + 9) = 0;
    *(undefined2 *)((int)param_2 + 0x26) = 0x100;
    if ((uVar6 & 0xff) == 2) goto LAB_00cb63c0;
    FUN_00aca000(local_130);
    if ((uVar6 & 1) == 0) {
      *(undefined1 *)(param_2 + 0x29) = 1;
      iVar4 = *(int *)(param_2[1] + 0x3c4);
      *(undefined1 *)((int)param_2 + 0x1f) = 0;
      piVar13 = (int *)(iVar4 + 8);
      param_2[6] = (int)piVar13;
      goto LAB_00cb5f18;
    }
    *(undefined1 *)(param_2 + 0x29) = 1;
    uVar10 = 2;
LAB_00cb6408:
    *param_1 = uVar10;
    param_1[1] = iVar4;
    uVar12 = 1;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01875c38);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01875c38);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x29]) {
    case '\0':
      uVar12 = *(undefined1 *)((int)param_2 + 0xa5);
      iVar4 = param_2[0x28];
      goto LAB_00cb5d84;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01875c28);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01875c28);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x27)) {
    case 0:
      uVar12 = (undefined1)param_2[10];
      piVar13 = (int *)param_2[8];
      uVar14 = *(undefined8 *)(param_2 + 4);
      goto LAB_00cb5db0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01875a68);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01875a68);
    case 3:
      goto LAB_00cb5eb0;
    case 4:
      goto LAB_00cb6064;
    }
switchD_00cb60a4_caseD_5:
    *(undefined1 *)((int)param_2 + 0x27) = 5;
LAB_00cb63c0:
    uVar12 = 3;
    *(undefined1 *)(param_2 + 0x29) = 3;
    *param_1 = 8;
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x1f)) {
    case 0:
      piVar13 = (int *)param_2[6];
LAB_00cb5f18:
      *(undefined2 *)(param_2 + 7) = 0;
      *(undefined1 *)((int)param_2 + 0x1e) = 0;
      local_90 = 0;
      uStack_a8 = 0;
      uStack_ac = 1;
      local_b0 = 1;
      puVar5 = (uint *)thunk_FUN_016d4a50(0x24);
      if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x24);
      }
      *puVar5 = local_b0;
      puVar5[1] = uStack_ac;
      puVar5[2] = uStack_a8;
      puVar5[3] = local_a4;
      puVar5[4] = local_a0;
      puVar5[5] = uStack_9c;
      puVar5[6] = uStack_98;
      puVar5[7] = uStack_94;
      puVar5[8] = local_90;
      do {
        uVar6 = *puVar5;
        bVar3 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar3);
      *puVar5 = uVar6 + 1;
      if ((int)uVar6 < 0) {
LAB_00cb652c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xcb652c);
        (*pcVar1)();
      }
      *(undefined1 *)(param_2 + 7) = 1;
      *(undefined2 *)((int)param_2 + 0x1d) = 1;
      local_120 = CONCAT31(local_120._1_3_,2);
      local_58 = (undefined4)local_118;
      param_2[8] = (int)puVar5;
      local_60 = local_120;
      local_54 = local_118._4_4_;
      iVar4 = *piVar13;
      *(undefined1 *)((int)param_2 + 0x1d) = 0;
      local_5c = puVar5;
      FUN_016dd1aa(auStack_110,&local_b0,0x60);
      FUN_016dd1aa(param_2 + 10,auStack_110,0x60);
      *(undefined1 *)((int)param_2 + 0x8d) = 0;
      param_2[0x22] = iVar4 + 0x188;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01875a58);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01875a58);
    case 3:
      break;
    case 4:
      goto LAB_00cb6274;
    case 5:
      goto switchD_00cb5eec_caseD_5;
    }
    FUN_00cab200(&local_b0,param_2 + 10,param_3);
    uVar12 = (char)local_b0;
    uVar6 = local_b0 & 0xff;
    if (uVar6 == 10) {
      *(undefined1 *)((int)param_2 + 0x1f) = 3;
    }
    else {
      local_50 = CONCAT13((undefined1)uStack_ac,local_b0._1_3_);
      uStack_4c = CONCAT13((undefined1)uStack_a8,uStack_ac._1_3_);
      uStack_44 = (undefined3)(local_a4 >> 8);
      uStack_48 = CONCAT13((undefined1)local_a4,uStack_a8._1_3_);
      FUN_00aca278(param_2 + 10);
      if (uVar6 != 9) {
        local_40 = uVar12;
        local_3f = local_50;
        local_3b = uStack_4c;
        local_37 = uStack_48;
        uStack_33 = uStack_44;
        FUN_008ee7b0(&local_40,2);
      }
      *(undefined1 *)(param_2 + 7) = 0;
LAB_00cb6274:
      local_128 = param_2 + 4;
      piVar13 = param_2 + 8;
      uVar14 = FUN_00d40494(piVar13,param_3);
      if ((int)uVar14 == 2) {
        *(undefined1 *)((int)param_2 + 0x1f) = 4;
      }
      else {
        iVar4 = param_2[8];
        *(undefined8 *)(param_2 + 4) = uVar14;
        if (iVar4 != 0) {
          puVar5 = (uint *)(iVar4 + 0x20);
          do {
            uVar6 = *puVar5;
            bVar3 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar3);
          *puVar5 = uVar6 | 4;
          DataMemoryBarrier(0xb);
          if ((uVar6 & 10) == 8) {
            (**(code **)(*(int *)(iVar4 + 0x10) + 8))(*(undefined4 *)(iVar4 + 0x14));
          }
          if ((uVar6 & 2) != 0) {
            iVar9 = *(int *)(iVar4 + 8);
            puVar11 = *(undefined4 **)(iVar4 + 0xc);
            *(undefined4 *)(iVar4 + 8) = 0;
            if (iVar9 != 0 && puVar11 != (undefined4 *)0x0) {
              (**(code **)*puVar11)(puVar11);
            }
          }
          piVar8 = (int *)*piVar13;
          if (piVar8 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar4 = *piVar8;
              bVar3 = (bool)hasExclusiveAccess(piVar8);
            } while (!bVar3);
            *piVar8 = iVar4 + -1;
            if (iVar4 == 1) {
              DataMemoryBarrier(0xb);
              FUN_008f4380(*piVar13);
            }
          }
        }
        if (*local_128 == 0) {
          iVar4 = param_2[5];
          *(undefined1 *)((int)param_2 + 0x1d) = 0;
          *(undefined2 *)((int)param_2 + 0x1e) = 0x100;
          *(undefined1 *)(param_2 + 7) = 0;
          FUN_00c8b4bc(local_128);
          uVar10 = 2;
          if (iVar4 == 0) {
            uVar10 = 7;
          }
          goto LAB_00cb6408;
        }
switchD_00cb5eec_caseD_5:
        *(undefined1 *)((int)param_2 + 0x1f) = 5;
      }
    }
    *param_1 = 8;
    uVar12 = 4;
  }
  *(undefined1 *)(param_2 + 2) = uVar12;
  return;
}

