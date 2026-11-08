// FUN_0169ac90 @ 0169ac90 size=648 calls_out=8 calls_in=196
// strings: 

/* WARNING: Removing unreachable block (ram,0x0169aea4) */

char FUN_0169ac90(undefined4 *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  bool bVar9;
  undefined4 *local_28;
  undefined4 *local_24;
  uint *local_20;
  undefined4 *local_1c;
  
  pcVar8 = (char *)((int)param_1 + 9);
  cVar5 = *pcVar8;
  if (cVar5 == '\0') {
    bVar9 = true;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar8);
      if (bVar1) {
        *pcVar8 = '\x01';
        goto LAB_0169acd4;
      }
      cVar5 = *pcVar8;
    } while (cVar5 == '\0');
  }
  bVar9 = false;
  ClearExclusiveLocal();
LAB_0169acd4:
  DataMemoryBarrier(0xb);
  if (!bVar9) {
    cVar3 = '\x01';
    if (cVar5 == '\x02') {
LAB_0169ae84:
      cVar5 = *(char *)(param_1 + 2);
      cVar3 = cVar5;
      if (cVar5 != '\x02') {
        cVar3 = '\x01';
      }
      if (cVar5 == '\0') {
        cVar3 = cVar5;
      }
    }
    return cVar3;
  }
  DataMemoryBarrier(0xb);
  do {
    local_1c = DAT_018dd9b0;
    bVar9 = param_1 == DAT_018dd9b0;
    DataMemoryBarrier(0xb);
    param_1[1] = DAT_018dd9b0;
    local_28 = param_1;
    if (bVar9) {
      uVar4 = FUN_0169a90c(&local_28,&local_1c);
      FUN_0169af70(&local_28);
                    /* WARNING: Subroutine does not return */
      FUN_01842e60(uVar4);
    }
    if (DAT_018dd9b0 == local_1c) {
      DataMemoryBarrier(0xb);
      do {
        bVar9 = (bool)hasExclusiveAccess(0x18dd9b0);
        if (bVar9) {
          DataMemoryBarrier(0xb);
          puVar7 = (undefined4 *)0x0;
          DataMemoryBarrier(0xb);
          DAT_018dd9b0 = param_1;
          if (DAT_018d9112 == '\0') {
            DataMemoryBarrier(0xb);
            if (DAT_018db020 != 2) {
              FUN_0169c194();
            }
            if (DAT_018db028 < 0x3ffffffe) {
              bVar9 = (bool)hasExclusiveAccess(0x18db028);
              if (!bVar9) goto LAB_0169aea8;
              DataMemoryBarrier(0xb);
              DAT_018db028 = DAT_018db028 + 1;
            }
            else {
LAB_0169aea8:
              FUN_015bebb8(&DAT_018db028);
            }
            if (DAT_018db030 != '\0') {
              local_24 = &DAT_018db028;
              local_28 = &DAT_018db034;
                    /* WARNING: Subroutine does not return */
              FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_018ae34c,&DAT_018ae32c);
            }
            puVar7 = (undefined4 *)0x1;
            local_20 = &DAT_018db028;
            local_24 = &DAT_018db034;
          }
          local_1c = (undefined4 *)CONCAT31(local_1c._1_3_,3);
          local_28 = puVar7;
          FUN_0169bd08(puVar7,&DAT_018db034,*param_1,&local_1c);
          DataMemoryBarrier(0xb);
          uVar6 = 0;
          if (((uint)local_1c & 0xff) != 3) {
            uVar6 = (uint)local_1c & 0xff;
          }
          uVar2 = (char)uVar6;
          if (uVar6 != 2) {
            uVar2 = 1;
          }
          if (uVar6 == 0) {
            uVar2 = (char)uVar6;
          }
          *(undefined1 *)(param_1 + 2) = uVar2;
          DataMemoryBarrier(0xb);
          if (puVar7 != (undefined4 *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              uVar6 = *local_20;
              bVar9 = (bool)hasExclusiveAccess(local_20);
            } while (!bVar9);
            *local_20 = uVar6 - 1;
            if ((uVar6 - 1 & 0xbfffffff) == 0x80000000) {
              FUN_015e9814();
            }
          }
          DataMemoryBarrier(0xb);
          *pcVar8 = '\x02';
          goto LAB_0169ae84;
        }
      } while (DAT_018dd9b0 == local_1c);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  } while( true );
}

