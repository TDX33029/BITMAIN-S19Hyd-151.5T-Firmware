// FUN_00d40db4 @ 00d40db4 size=1144 calls_out=8 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

int FUN_00d40db4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int local_69a0;
  int local_699c;
  int *local_6980;
  int local_697c;
  undefined **local_6978;
  int *local_6968;
  undefined4 local_6958;
  undefined1 auStack_6954 [13368];
  undefined4 local_351c;
  int iStack_3518;
  int local_3514;
  int iStack_3510;
  undefined1 local_3509;
  undefined4 local_34a0;
  undefined4 local_349c;
  undefined4 local_3498;
  int local_3490;
  int local_348c;
  undefined1 local_3480 [13372];
  int local_44 [8];
  
  iVar9 = *param_1;
  piVar10 = (int *)param_1[1];
  puVar5 = (undefined4 *)((uint)&local_6980 | 0x10);
  do {
    iVar6 = *piVar10;
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = iVar6 + 1;
  if (-1 < iVar6) {
    do {
      do {
        iVar6 = DAT_018d9204;
        piVar11 = DAT_018d9200;
        piVar7 = (int *)((int)DAT_018d9200 + 1);
        iVar8 = DAT_018d9204 + (uint)((int *)0xfffffffe < DAT_018d9200);
        bVar2 = (bool)hasExclusiveAccess(0x18d9200);
      } while (!bVar2);
      bVar2 = DAT_018d9200 == (int *)0x0;
      bVar3 = DAT_018d9204 == 0;
      DAT_018d9200 = piVar7;
      DAT_018d9204 = iVar8;
    } while (bVar2 && bVar3);
    do {
      iVar8 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar8 + 1;
    local_6968 = piVar10;
    local_351c = param_3;
    if (iVar9 == 0) {
      if (-1 < iVar8) {
        piVar7 = (int *)piVar10[0x8e];
        if (piVar7 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          do {
            iVar8 = *piVar7;
            bVar2 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar2);
          *piVar7 = iVar8 + 1;
          if (iVar8 < 0) goto LAB_00d4122c;
          iVar8 = piVar10[0x8f];
          iVar4 = piVar10[0x8e];
        }
        FUN_016dd1aa((uint)local_3480 | 4,param_2,0x3420);
        local_6978 = &PTR_LAB_018765a0;
        local_697c = 0;
        local_6980 = (int *)0xcc;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[4] = piVar11;
        puVar5[5] = iVar6;
        local_6958 = 0;
        FUN_016dd1aa(auStack_6954,local_3480,0x3438);
        local_34a0 = 0;
        local_349c = 0;
        iStack_3518 = *param_1;
        local_3514 = param_1[1];
        iStack_3510 = param_1[2];
        local_3498 = 0;
        local_3509 = 0;
        local_44[0] = 0;
        local_3490 = iVar4;
        local_348c = iVar8;
        iVar4 = FUN_016d51b0(local_44,0x20,0x3500);
        iVar8 = local_44[0];
        if ((iVar4 != 0) || (local_44[0] == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(0x20,0x3500);
        }
        FUN_016dd1aa(local_44[0],&local_6980,0x3500);
        iVar4 = FUN_00c61cb4(piVar10 + 0x40,iVar8,iVar8);
        local_6980 = piVar11;
        local_697c = iVar6;
        if (piVar10[0x8c] != 0) {
          (**(code **)(piVar10[0x8d] + 0x14))
                    (piVar10[0x8c] + (*(int *)(piVar10[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_6980
                    );
        }
        if (iVar4 != 0) {
          FUN_01659ec0(piVar10,iVar4);
        }
        goto LAB_00d411a8;
      }
    }
    else if (-1 < iVar8) {
      piVar7 = (int *)piVar10[0x5c];
      if (piVar7 == (int *)0x0) {
        local_699c = 0;
      }
      else {
        do {
          iVar8 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar8 + 1;
        if (iVar8 < 0) goto LAB_00d4122c;
        local_699c = piVar10[0x5c];
        local_69a0 = piVar10[0x5d];
      }
      FUN_016dd1aa((uint)local_3480 | 4,param_2,0x3420);
      local_6978 = &PTR_LAB_01876410;
      local_697c = 0;
      local_6980 = (int *)0xcc;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = piVar11;
      puVar5[5] = iVar6;
      local_6958 = 0;
      FUN_016dd1aa(auStack_6954,local_3480,0x3438);
      local_3490 = local_699c;
      iStack_3518 = *param_1;
      local_3514 = param_1[1];
      iStack_3510 = param_1[2];
      local_348c = local_69a0;
      local_34a0 = 0;
      local_349c = 0;
      local_3498 = 0;
      local_3509 = 0;
      local_44[0] = 0;
      iVar4 = FUN_016d51b0(local_44,0x20,0x3500);
      iVar8 = local_44[0];
      if ((iVar4 != 0) || (local_44[0] == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(0x20,0x3500);
      }
      FUN_016dd1aa(local_44[0],&local_6980,0x3500);
      iVar4 = FUN_00c61cb4(piVar10 + 0x14,iVar8,iVar8);
      local_6980 = piVar11;
      local_697c = iVar6;
      if (piVar10[0x5a] != 0) {
        (**(code **)(piVar10[0x5b] + 0x14))
                  (piVar10[0x5a] + (*(int *)(piVar10[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_6980);
      }
      if (iVar4 != 0) {
        local_3480[0] = 0;
        local_6978 = (undefined **)local_3480;
        local_6980 = piVar10 + 2;
        local_697c = iVar4;
        FUN_0164511c(&local_6980);
      }
LAB_00d411a8:
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar6 + -1;
      if (iVar9 == 0) {
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01659344(piVar10);
          return iVar8;
        }
      }
      else if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_016586fc(piVar10);
      }
      return iVar8;
    }
  }
LAB_00d4122c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xd4122c);
  (*pcVar1)();
}

