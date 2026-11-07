// FUN_00d42150 @ 00d42150 size=688 calls_out=7 calls_in=1
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_00d42150(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 *puVar8;
  undefined4 local_378;
  undefined4 local_374;
  undefined1 *local_370;
  undefined1 auStack_36c [204];
  undefined1 auStack_2a0 [208];
  undefined1 auStack_1d0 [208];
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 *local_f8;
  undefined1 auStack_f4 [208];
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar2 + 0x10) < 0) {
      puVar3 = (uint *)(iVar2 + 0x10);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = *puVar3 & 0x7fffffff;
      DataMemoryBarrier(0xb);
      iVar2 = *param_1;
    }
    else {
      iVar2 = *param_1;
    }
    if (iVar2 != 0) {
      do {
        while( true ) {
          if (iVar2 == 0) {
            return;
          }
          while( true ) {
            iVar7 = *(int *)(iVar2 + 0xc);
            puVar8 = *(undefined4 **)(iVar7 + 0xd8);
            DataMemoryBarrier(0xb);
            if (puVar8 == (undefined4 *)0x0) {
              puVar6 = &DAT_3b9aca00;
              DataMemoryBarrier(0xb);
              if (*(int *)(iVar2 + 8) != iVar7) {
                puVar6 = (undefined1 *)0x3b9aca01;
              }
            }
            else {
              *(undefined4 **)(iVar2 + 0xc) = puVar8;
              if (*(undefined1 **)(iVar7 + 8) != &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa464("assertion failed: (*tail).value.is_none()",0x29,&DAT_018a4e90);
              }
              puVar6 = (undefined1 *)puVar8[2];
              if (puVar6 == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa464("assertion failed: (*next).value.is_some()",0x29,&DAT_018a4ea0);
              }
              unaff_r6 = *puVar8;
              unaff_r7 = puVar8[1];
              FUN_016dd1aa(auStack_f4,puVar8 + 3,0xcc);
              puVar8[2] = &DAT_3b9aca00;
              local_100 = unaff_r6;
              local_fc = unaff_r7;
              local_f8 = puVar6;
              if (*(undefined1 **)(iVar7 + 8) != &DAT_3b9aca00) {
                FUN_00643a80(iVar7);
              }
              thunk_FUN_016d3fb4(iVar7);
              FUN_016dd1aa(auStack_1d0,auStack_f4,0xcc);
            }
            puVar4 = puVar6 + -999999999;
            if (puVar6 < (undefined1 *)0x3b9ac9ff) {
              puVar4 = (undefined1 *)0x0;
            }
            if (puVar4 != (undefined1 *)0x2) break;
            FUN_016da3a8();
          }
          if ((puVar4 == (undefined1 *)0x0) &&
             (FUN_016dd1aa(auStack_2a0,auStack_1d0,0xcc), puVar6 != &DAT_3b9aca00)) break;
          DataMemoryBarrier(0xb);
          if (*(int *)(*param_1 + 0x10) == 0) {
            piVar5 = (int *)*param_1;
            if (piVar5 != (int *)0x0) {
              DataMemoryBarrier(0xb);
              do {
                iVar2 = *piVar5;
                bVar1 = (bool)hasExclusiveAccess(piVar5);
              } while (!bVar1);
              *piVar5 = iVar2 + -1;
              if (iVar2 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0078459c(*param_1);
              }
            }
            *param_1 = 0;
            return;
          }
          local_370 = (undefined1 *)0x3b9aca01;
LAB_00d42354:
          if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_0187bde8);
          }
          DataMemoryBarrier(0xb);
          if (*(int *)(*param_1 + 0x10) == 0) {
            return;
          }
          FUN_016da3a8();
          iVar2 = *param_1;
        }
        if (*param_1 != 0) {
          piVar5 = (int *)(*param_1 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar1);
          *piVar5 = *piVar5 + -1;
          DataMemoryBarrier(0xb);
        }
        local_378 = unaff_r6;
        local_374 = unaff_r7;
        local_370 = puVar6;
        FUN_016dd1aa(auStack_36c,auStack_2a0,0xcc);
        if (puVar6 == (undefined1 *)0x3b9aca01) goto LAB_00d42354;
        if (puVar6 == &DAT_3b9aca00) {
          return;
        }
        if ((undefined1 *)((uint)puVar6 & 0x3ffffffe) != &DAT_3b9aca00) {
          FUN_00643a80(&local_378);
        }
        iVar2 = *param_1;
      } while( true );
    }
  }
  return;
}

