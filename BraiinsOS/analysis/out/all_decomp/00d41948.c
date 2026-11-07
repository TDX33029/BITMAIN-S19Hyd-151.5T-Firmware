// FUN_00d41948 @ 00d41948 size=1036 calls_out=8 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

int FUN_00d41948(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  int local_238;
  undefined1 auStack_228 [120];
  int local_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int *local_1a0;
  int local_19c;
  undefined **local_198;
  int *local_188;
  undefined4 local_178;
  undefined1 auStack_174 [136];
  undefined1 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_d8;
  int local_d4;
  undefined1 local_b0 [136];
  int local_28;
  
  iVar8 = *param_1;
  piVar9 = (int *)param_1[1];
  puVar11 = (undefined4 *)((uint)&local_1a0 | 0x10);
  do {
    iVar4 = *piVar9;
    bVar2 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar2);
  *piVar9 = iVar4 + 1;
  if (-1 < iVar4) {
    FUN_016dd1aa(auStack_228,param_2,0x68);
    local_1b0 = *param_1;
    iStack_1ac = param_1[1];
    iStack_1a8 = param_1[2];
    do {
      do {
        iVar4 = DAT_018d9204;
        piVar10 = DAT_018d9200;
        piVar6 = (int *)((int)DAT_018d9200 + 1);
        iVar7 = DAT_018d9204 + (uint)((int *)0xfffffffe < DAT_018d9200);
        bVar2 = (bool)hasExclusiveAccess(0x18d9200);
      } while (!bVar2);
      bVar2 = DAT_018d9200 == (int *)0x0;
      bVar3 = DAT_018d9204 == 0;
      DAT_018d9200 = piVar6;
      DAT_018d9204 = iVar7;
    } while (bVar2 && bVar3);
    do {
      iVar7 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar7 + 1;
    local_188 = piVar9;
    if (iVar8 == 0) {
      if (-1 < iVar7) {
        piVar6 = (int *)piVar9[0x8e];
        if (piVar6 == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          do {
            iVar7 = *piVar6;
            bVar2 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar2);
          *piVar6 = iVar7 + 1;
          if (iVar7 < 0) goto LAB_00d41d54;
          iVar7 = piVar9[0x8e];
          local_238 = piVar9[0x8f];
        }
        FUN_016dd1aa((uint)local_b0 | 4,auStack_228,0x84);
        *puVar11 = 0;
        local_198 = &PTR_LAB_01876898;
        puVar11[1] = 0;
        local_1a0 = (int *)0xcc;
        puVar11[4] = piVar10;
        puVar11[5] = iVar4;
        local_19c = 0;
        local_178 = 0;
        FUN_016dd1aa(auStack_174,local_b0,0x88);
        local_d4 = local_238;
        local_e0 = 0;
        local_e4 = 0;
        local_e8 = 0;
        local_ec = 0;
        local_28 = 0;
        local_d8 = iVar7;
        iVar5 = FUN_016d51b0(&local_28,0x20,0xe0);
        iVar7 = local_28;
        if ((iVar5 != 0) || (local_28 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(0x20,0xe0);
        }
        FUN_016dd1aa(local_28,&local_1a0,0xe0);
        iVar5 = FUN_00c61cb4(piVar9 + 0x40,iVar7,iVar7);
        local_1a0 = piVar10;
        local_19c = iVar4;
        if (piVar9[0x8c] != 0) {
          (**(code **)(piVar9[0x8d] + 0x14))
                    (piVar9[0x8c] + (*(int *)(piVar9[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_1a0);
        }
        if (iVar5 != 0) {
          FUN_01659ec0(piVar9,iVar5);
        }
        goto LAB_00d41cd8;
      }
    }
    else if (-1 < iVar7) {
      piVar6 = (int *)piVar9[0x5c];
      if (piVar6 == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        do {
          iVar7 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar7 + 1;
        if (iVar7 < 0) goto LAB_00d41d54;
        iVar7 = piVar9[0x5c];
        local_238 = piVar9[0x5d];
      }
      FUN_016dd1aa((uint)local_b0 | 4,auStack_228,0x84);
      *puVar11 = 0;
      local_198 = &PTR_LAB_01876398;
      puVar11[1] = 0;
      local_1a0 = (int *)0xcc;
      puVar11[4] = piVar10;
      puVar11[5] = iVar4;
      local_19c = 0;
      local_178 = 0;
      FUN_016dd1aa(auStack_174,local_b0,0x88);
      local_d4 = local_238;
      local_e0 = 0;
      local_e4 = 0;
      local_e8 = 0;
      local_ec = 0;
      local_28 = 0;
      local_d8 = iVar7;
      iVar5 = FUN_016d51b0(&local_28,0x20,0xe0);
      iVar7 = local_28;
      if ((iVar5 != 0) || (local_28 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(0x20,0xe0);
      }
      FUN_016dd1aa(local_28,&local_1a0,0xe0);
      iVar5 = FUN_00c61cb4(piVar9 + 0x14,iVar7,iVar7);
      local_1a0 = piVar10;
      local_19c = iVar4;
      if (piVar9[0x5a] != 0) {
        (**(code **)(piVar9[0x5b] + 0x14))
                  (piVar9[0x5a] + (*(int *)(piVar9[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_1a0);
      }
      if (iVar5 != 0) {
        local_b0[0] = 0;
        local_1a0 = piVar9 + 2;
        local_19c = iVar5;
        local_198 = (undefined **)local_b0;
        FUN_0164511c(&local_1a0);
      }
LAB_00d41cd8:
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar4 + -1;
      if (iVar8 == 0) {
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01659344(piVar9);
          return iVar7;
        }
      }
      else if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_016586fc(piVar9);
      }
      return iVar7;
    }
  }
LAB_00d41d54:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xd41d54);
  (*pcVar1)();
}

