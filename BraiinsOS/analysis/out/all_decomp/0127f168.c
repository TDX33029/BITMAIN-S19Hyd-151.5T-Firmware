// FUN_0127f168 @ 0127f168 size=1288 calls_out=4 calls_in=3
// strings: 

void FUN_0127f168(undefined4 *param_1,byte *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  byte bVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined4 *local_44;
  int local_40;
  uint local_38;
  uint local_34;
  uint local_30;
  
  uVar18 = FUN_0127f678();
  puVar5 = (uint *)((ulonglong)uVar18 >> 0x20);
  puVar4 = (uint *)uVar18;
  if ((byte *)*param_1 == param_2) {
    *param_1 = 0;
    bVar1 = *param_2;
LAB_0127f1fc:
    while (bVar6 = bVar1, (bVar6 & 1) != 0) {
      bVar1 = *param_2;
      if (bVar1 == bVar6) goto code_r0x0127f214;
      ClearExclusiveLocal();
    }
    puVar10 = puVar4 + 7;
    if ((undefined4 *)*puVar10 != (undefined4 *)0x0) {
      bVar17 = false;
      puVar7 = (undefined4 *)0x0;
      puVar15 = (undefined4 *)0x0;
      puVar16 = (undefined4 *)0x0;
      local_40 = 0;
      bVar2 = false;
      puVar13 = (undefined4 *)*puVar10;
      do {
        puVar14 = (undefined4 *)puVar13[2];
        puVar3 = puVar13 + 2;
        if ((undefined4 *)puVar13[1] == param_1) {
          *puVar10 = (uint)puVar14;
          if ((undefined4 *)puVar4[8] == puVar13) {
            puVar4[8] = (uint)puVar7;
          }
          if (bVar2) {
            puVar8 = puVar13;
            if (puVar15 != (undefined4 *)0x0) {
              puVar16[2] = puVar13;
              puVar8 = puVar15;
            }
            puVar13[1] = param_2;
            local_40 = local_40 + 1;
            puVar15 = puVar8;
            puVar16 = puVar13;
          }
          else {
            bVar17 = true;
            local_44 = puVar13;
          }
          bVar2 = true;
          puVar3 = puVar10;
          puVar13 = puVar7;
        }
        puVar7 = puVar13;
        puVar10 = puVar3;
        puVar13 = puVar14;
      } while (puVar14 != (undefined4 *)0x0);
      bVar17 = !bVar17;
      goto joined_r0x0127f398;
    }
    goto LAB_0127f4f4;
  }
  puVar10 = puVar4 + 6;
  DataMemoryBarrier(0xb);
  do {
    uVar9 = *puVar10;
    bVar17 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar17);
  *puVar10 = uVar9 - 1;
  if ((3 < uVar9) && ((uVar9 & 2) == 0)) {
    FUN_01286894(puVar10);
  }
  if (puVar4 == puVar5) {
    return;
  }
  puVar5 = puVar5 + 6;
  DataMemoryBarrier(0xb);
  do {
    uVar9 = *puVar5;
    bVar17 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar17);
  *puVar5 = uVar9 - 1;
  goto LAB_0127f544;
code_r0x0127f214:
  bVar17 = (bool)hasExclusiveAccess(param_2);
  if (bVar17) goto code_r0x0127f218;
  goto LAB_0127f1fc;
code_r0x0127f218:
  *param_2 = bVar6 | 2;
  puVar7 = (undefined4 *)puVar4[7];
  if (puVar7 != (undefined4 *)0x0) {
    local_40 = 0;
    puVar15 = (undefined4 *)0x0;
    puVar16 = (undefined4 *)0x0;
    puVar13 = (undefined4 *)0x0;
    puVar10 = puVar4 + 7;
    do {
      while( true ) {
        puVar14 = puVar7;
        puVar7 = (undefined4 *)puVar14[2];
        if ((undefined4 *)puVar14[1] != param_1) break;
        *puVar10 = (uint)puVar7;
        local_40 = local_40 + 1;
        if ((undefined4 *)puVar4[8] == puVar14) {
          puVar4[8] = (uint)puVar13;
        }
        puVar8 = puVar14;
        if (puVar15 != (undefined4 *)0x0) {
          puVar16[2] = puVar14;
          puVar8 = puVar15;
        }
        puVar15 = puVar8;
        puVar14[1] = param_2;
        puVar16 = puVar14;
        if (puVar7 == (undefined4 *)0x0) goto LAB_0127f2b8;
      }
      puVar13 = puVar14;
      puVar10 = puVar14 + 2;
    } while (puVar7 != (undefined4 *)0x0);
LAB_0127f2b8:
    bVar2 = false;
    bVar17 = true;
joined_r0x0127f398:
    if (puVar15 != (undefined4 *)0x0) {
      puVar16[2] = 0;
      if (puVar5[7] == 0) {
        puVar5[7] = (uint)puVar15;
        puVar5[8] = (uint)puVar16;
      }
      else {
        *(undefined4 **)(puVar5[8] + 8) = puVar15;
        puVar5[8] = (uint)puVar16;
      }
    }
    if (!bVar17) {
      FUN_015f3b0c(&local_38,1);
      uVar9 = *puVar4;
      uVar11 = puVar4[1];
      bVar17 = (int)(uVar11 - (local_34 + (uVar9 < local_38))) < 0 !=
               (SBORROW4(uVar11,local_34) != SBORROW4(uVar11 - local_34,(uint)(uVar9 < local_38)));
      if (local_38 == uVar9 && local_34 == uVar11) {
        bVar17 = puVar4[2] < local_30;
      }
      if (bVar17) {
        uVar9 = puVar4[4] ^ puVar4[4] << 0xd;
        uVar9 = uVar9 ^ uVar9 >> 0x11;
        uVar9 = uVar9 ^ uVar9 << 5;
        puVar4[4] = uVar9;
        puVar12 = (undefined1 *)(uVar9 + (short)(uVar9 / 1000000) * -1000000 + local_30);
        if (&DAT_3b9aca00 <= puVar12) {
          bVar17 = 0xfffffffe < local_38;
          local_38 = local_38 + 1;
          uVar9 = local_34 + bVar17;
          if ((int)((local_34 ^ uVar9) & ~local_34) < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
          }
          puVar12 = puVar12 + -1000000000;
          local_34 = uVar9;
        }
        *puVar4 = local_38;
        puVar4[1] = local_34;
        puVar4[2] = (uint)puVar12;
      }
    }
    if (((bVar6 & 1) == 0) && (local_40 != 0)) {
      do {
        bVar17 = (bool)hasExclusiveAccess(param_2);
      } while (!bVar17);
      *param_2 = *param_2 | 2;
    }
    if (bVar2) {
      local_44[3] = 0;
      DataMemoryBarrier(0xb);
      *local_44 = 0;
      puVar10 = puVar4 + 6;
      DataMemoryBarrier(0xb);
      do {
        uVar9 = *puVar10;
        bVar17 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar17);
      *puVar10 = uVar9 - 1;
      if ((3 < uVar9) && ((uVar9 & 2) == 0)) {
        FUN_01286894(puVar10);
      }
      if (puVar4 != puVar5) {
        puVar5 = puVar5 + 6;
        DataMemoryBarrier(0xb);
        do {
          uVar9 = *puVar5;
          bVar17 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar17);
        *puVar5 = uVar9 - 1;
        if ((3 < uVar9) && ((uVar9 & 2) == 0)) {
          FUN_01286894();
        }
      }
      software_interrupt(0);
      FUN_016d3496(local_44,0x81,1,param_5);
      return;
    }
  }
LAB_0127f4f4:
  puVar10 = puVar4 + 6;
  DataMemoryBarrier(0xb);
  do {
    uVar9 = *puVar10;
    bVar17 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar17);
  *puVar10 = uVar9 - 1;
  if ((3 < uVar9) && ((uVar9 & 2) == 0)) {
    FUN_01286894(puVar10);
  }
  if (puVar4 == puVar5) {
    return;
  }
  puVar5 = puVar5 + 6;
  DataMemoryBarrier(0xb);
  do {
    uVar9 = *puVar5;
    bVar17 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar17);
  *puVar5 = uVar9 - 1;
LAB_0127f544:
  if ((uVar9 < 4) || ((uVar9 & 2) != 0)) {
    return;
  }
  FUN_01286894();
  return;
}

