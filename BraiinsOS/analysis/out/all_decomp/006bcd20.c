// FUN_006bcd20 @ 006bcd20 size=476 calls_out=4 calls_in=0
// strings: assertion failed: ntime_offset < ROLL_NTIME_SECONDSevent open/bosminer/bosminer/src/api/rpc.rs:567bosminer::api::rpcopen/bosminer/bosminer/src/api/rpc.rsevent open/bosminer/bosminer/src/hub/monitor.rs:108bosminer::hub::monitoropen/bosminer/bosminer/src/hub/monitor.rsevent open/bosminer/bosminer/src/hub/monitor.rs:128event open/bosminer/bosminer/src/entry.rs:68bosminer::entryopen/bosminer/bosminer/src/entry.rsevent open/bosminer/bosminer/src/entry.rs:46event open/bosminer/bosminer/src/backend.rs:211bosminer::backendopen/bosminer/bosminer/src/backend.rsBUG: parent work hub cannot be foundevent open/bosminer/bosminer/src/backend.rs:485event open/bosminer/bosminer/src/backend.rs:493event open/bosminer/bosminer/src/backend.rs:519event open/bosminer/bosminer/src/backend.rs:527BUG: work solver already present in the registryBUG: root hub already present in the registry

void FUN_006bcd20(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  bool bVar16;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar13 = param_2[3];
  uVar10 = param_2[4];
  puVar4 = (uint *)(param_2[2] + 8);
  uVar14 = *(uint *)(param_2[2] + 8);
  do {
    uVar8 = uVar14 + uVar10;
    uVar6 = 0;
    if ((CARRY4(uVar14,uVar10)) || (uVar13 < uVar8)) {
LAB_006bce94:
      *param_1 = uVar6;
      return;
    }
    while (uVar11 = *puVar4, uVar11 == uVar14) {
      bVar16 = (bool)hasExclusiveAccess(puVar4);
      if (bVar16) {
        *puVar4 = uVar8;
        uVar14 = uVar8 - uVar11;
        local_30 = uVar14;
        if (param_2[5] != uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb3aac(0,param_2 + 5,&local_30,0);
        }
        if (0x10000 < uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0033ff70,0x71,&DAT_01859de4);
        }
        bVar16 = uVar11 >> 0x10 != 0xffff;
        uVar7 = 0;
        if (bVar16) {
          uVar7 = uVar8 - 1;
        }
        uVar15 = param_2[6];
        uVar1 = uVar11 >> 0x10;
        uVar3 = uVar11;
        if (bVar16) {
          local_28 = uVar7 >> 0x10;
          uVar3 = local_28;
        }
        local_2c = uVar1;
        if (!bVar16 || uVar7 >> 0x10 == 0xffff) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464("assertion failed: ntime_offset < ROLL_NTIME_SECONDSevent open/bosminer/bosminer/src/api/rpc.rs:567bosminer::api::rpcopen/bosminer/bosminer/src/api/rpc.rsevent open/bosminer/bosminer/src/hub/monitor.rs:108bosminer::hub::monitoropen/bosminer/bosminer/src/hub/monitor.rsevent open/bosminer/bosminer/src/hub/monitor.rs:128event open/bosminer/bosminer/src/entry.rs:68bosminer::entryopen/bosminer/bosminer/src/entry.rsevent open/bosminer/bosminer/src/entry.rs:46event open/bosminer/bosminer/src/backend.rs:211bosminer::backendopen/bosminer/bosminer/src/backend.rsBUG: parent work hub cannot be foundevent open/bosminer/bosminer/src/backend.rs:485event open/bosminer/bosminer/src/backend.rs:493event open/bosminer/bosminer/src/backend.rs:519event open/bosminer/bosminer/src/backend.rs:527BUG: work solver already present in the registryBUG: root hub already present in the registry"
                       ,0x33,&DAT_018589e8);
        }
        if (uVar1 == uVar3) {
          piVar9 = (int *)*param_2;
          do {
            iVar5 = *piVar9;
            bVar16 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar16);
          *piVar9 = iVar5 + 1;
          if (-1 < iVar5) {
            iVar12 = param_2[1];
            iVar5 = (**(code **)(iVar12 + 0x40))
                              ((int)piVar9 + (*(int *)(iVar12 + 8) - 1U & 0xfffffff8) + 8);
            uVar6 = 2;
            param_1[9] = uVar14;
            param_1[0xb] = uVar15;
            param_1[0xc] = iVar5 + uVar1;
            param_1[1] = 0;
            param_1[2] = 4;
            param_1[5] = 4;
            param_1[3] = 0;
            param_1[4] = 0;
            param_1[6] = 0;
            param_1[7] = piVar9;
            param_1[8] = iVar12;
            if (uVar13 < uVar8 + uVar10) {
              uVar6 = 1;
            }
            if (uVar8 + uVar10 < uVar8) {
              uVar6 = 1;
            }
            param_1[10] = uVar11;
            goto LAB_006bce94;
          }
        }
        else {
          FUN_015fef84(0,&local_2c,&local_28,0);
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xfdee,0x6bcef8);
        (*pcVar2)();
      }
    }
    ClearExclusiveLocal();
    uVar14 = uVar11;
  } while( true );
}

