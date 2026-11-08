// FUN_0164e740 @ 0164e740 size=980 calls_out=4 calls_in=3
// strings: overflow when adding duration to instant

void FUN_0164e740(undefined4 *param_1,byte *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 *puVar18;
  bool bVar19;
  undefined8 uVar20;
  undefined4 *local_44;
  uint local_38;
  uint local_34;
  uint local_30;
  
  uVar20 = FUN_0164eb1c();
  puVar7 = (uint *)((ulonglong)uVar20 >> 0x20);
  puVar6 = (uint *)uVar20;
  if ((byte *)*param_1 == param_2) {
    *param_1 = 0;
    bVar1 = *param_2;
    do {
      bVar5 = bVar1;
      if ((bVar5 & 1) == 0) break;
      bVar1 = *param_2;
      if (bVar1 == bVar5) {
        bVar19 = (bool)hasExclusiveAccess(param_2);
        if (bVar19) {
          *param_2 = bVar5 | 2;
        }
      }
      else {
        bVar19 = false;
        ClearExclusiveLocal();
      }
    } while (!bVar19);
    puVar14 = (undefined4 *)puVar6[7];
    if (puVar14 != (undefined4 *)0x0) {
      iVar17 = 0;
      puVar12 = (undefined4 *)0x0;
      puVar16 = (undefined4 *)0x0;
      puVar18 = (undefined4 *)0x0;
      bVar3 = false;
      bVar19 = false;
      bVar2 = false;
      puVar9 = puVar6 + 7;
      do {
        puVar10 = puVar14 + 2;
        puVar15 = (undefined4 *)*puVar10;
        if ((undefined4 *)puVar14[1] == param_1) {
          *puVar9 = (uint)puVar15;
          if ((undefined4 *)puVar6[8] == puVar14) {
            puVar6[8] = (uint)puVar12;
          }
          puVar10 = puVar9;
          if ((bVar5 & 1) != 0 || bVar3) {
            puVar4 = puVar14;
            if (puVar16 != (undefined4 *)0x0) {
              puVar18[2] = puVar14;
              puVar4 = puVar16;
            }
            puVar16 = puVar4;
            iVar17 = iVar17 + 1;
            puVar14[1] = param_2;
            puVar18 = puVar14;
          }
          else {
            bVar3 = true;
            bVar19 = true;
            bVar2 = true;
            local_44 = puVar14;
          }
        }
        else {
          puVar12 = puVar14;
        }
        puVar9 = puVar10;
        puVar14 = puVar15;
      } while (puVar15 != (undefined4 *)0x0);
      if (puVar16 != (undefined4 *)0x0) {
        puVar18[2] = 0;
        if (puVar7[7] == 0) {
          puVar7[7] = (uint)puVar16;
        }
        else {
          *(undefined4 **)(puVar7[8] + 8) = puVar16;
        }
        puVar7[8] = (uint)puVar18;
      }
      if (bVar19) {
        FUN_019ac130(&local_38,1);
        uVar8 = *puVar6;
        uVar13 = puVar6[1];
        bVar19 = (int)(uVar13 - (local_34 + (uVar8 < local_38))) < 0 !=
                 (SBORROW4(uVar13,local_34) != SBORROW4(uVar13 - local_34,(uint)(uVar8 < local_38)))
        ;
        if (local_38 == uVar8 && local_34 == uVar13) {
          bVar19 = puVar6[2] < local_30;
        }
        if (bVar19) {
          uVar8 = puVar6[4] ^ puVar6[4] << 0xd;
          uVar8 = uVar8 ^ uVar8 >> 0x11;
          uVar8 = uVar8 ^ uVar8 << 5;
          puVar6[4] = uVar8;
          puVar11 = (undefined1 *)(uVar8 + (short)(uVar8 / 1000000) * -1000000 + local_30);
          if (&DAT_3b9aca00 <= puVar11) {
            bVar19 = 0xfffffffe < local_38;
            local_38 = local_38 + 1;
            uVar8 = local_34 + bVar19;
            if ((int)((local_34 ^ uVar8) & ~local_34) < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281d4);
            }
            puVar11 = puVar11 + -1000000000;
            local_34 = uVar8;
          }
          *puVar6 = local_38;
          puVar6[1] = local_34;
          puVar6[2] = (uint)puVar11;
        }
      }
      if (((bVar5 & 1) == 0) && (iVar17 != 0)) {
        do {
          bVar19 = (bool)hasExclusiveAccess(param_2);
        } while (!bVar19);
        *param_2 = *param_2 | 2;
      }
      if (bVar2) {
        local_44[3] = 0;
        DataMemoryBarrier(0xb);
        *local_44 = 0;
        puVar9 = puVar6 + 6;
        DataMemoryBarrier(0xb);
        do {
          uVar8 = *puVar9;
          bVar19 = (bool)hasExclusiveAccess(puVar9);
        } while (!bVar19);
        *puVar9 = uVar8 - 1;
        if ((3 < uVar8) && ((uVar8 & 2) == 0)) {
          FUN_01652d70();
        }
        if (puVar6 != puVar7) {
          puVar7 = puVar7 + 6;
          DataMemoryBarrier(0xb);
          do {
            uVar8 = *puVar7;
            bVar19 = (bool)hasExclusiveAccess(puVar7);
          } while (!bVar19);
          *puVar7 = uVar8 - 1;
          if ((3 < uVar8) && ((uVar8 & 2) == 0)) {
            FUN_01652d70();
          }
        }
        software_interrupt(0);
        FUN_01be3b5a(local_44,0x81,1,param_5);
        return;
      }
    }
    puVar9 = puVar6 + 6;
    DataMemoryBarrier(0xb);
    do {
      uVar8 = *puVar9;
      bVar19 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar19);
    *puVar9 = uVar8 - 1;
    if ((3 < uVar8) && ((uVar8 & 2) == 0)) {
      FUN_01652d70();
    }
    if (puVar6 == puVar7) {
      return;
    }
    puVar7 = puVar7 + 6;
    DataMemoryBarrier(0xb);
    do {
      uVar8 = *puVar7;
      bVar19 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar19);
    *puVar7 = uVar8 - 1;
  }
  else {
    puVar9 = puVar6 + 6;
    DataMemoryBarrier(0xb);
    do {
      uVar8 = *puVar9;
      bVar19 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar19);
    *puVar9 = uVar8 - 1;
    if ((3 < uVar8) && ((uVar8 & 2) == 0)) {
      FUN_01652d70();
    }
    if (puVar6 == puVar7) {
      return;
    }
    puVar7 = puVar7 + 6;
    DataMemoryBarrier(0xb);
    do {
      uVar8 = *puVar7;
      bVar19 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar19);
    *puVar7 = uVar8 - 1;
  }
  if ((uVar8 < 4) || ((uVar8 & 2) != 0)) {
    return;
  }
  FUN_01652d70();
  return;
}

