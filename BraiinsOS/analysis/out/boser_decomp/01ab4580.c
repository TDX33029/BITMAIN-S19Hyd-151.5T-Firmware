// FUN_01ab4580 @ 01ab4580 size=304 calls_out=1 calls_in=21
// strings: 

int * FUN_01ab4580(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined1 auStack_9c [128];
  
  puVar9 = (uint *)(*param_1 + 0x38);
  DataMemoryBarrier(0xb);
  uVar10 = *(uint *)(*param_1 + 0x38);
  do {
    uVar13 = (uVar10 & 0x3fffffff) >> 2;
    if ((uVar10 & 3) == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005315bb,auStack_9c + 0x84,&DAT_01d2ecb0);
    }
    if ((uVar10 & 3) == 1 && uVar13 == 1) {
      uVar12 = *puVar9;
      if (uVar12 == uVar10) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar9);
          if (bVar1) {
            *puVar9 = uVar10 & 0xc0000000 | 3;
            bVar1 = true;
            goto LAB_01ab4650;
          }
          uVar12 = *puVar9;
        } while (uVar12 == uVar10);
      }
      bVar1 = false;
      ClearExclusiveLocal();
LAB_01ab4650:
      DataMemoryBarrier(0xb);
      if (bVar1) {
        piVar6 = (int *)param_1[1];
        uVar10 = param_1[2];
        uVar16 = thunk_FUN_01bee35a(piVar6,0x29c);
        piVar4 = (int *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
        DataMemoryBarrier(0xb);
        if (((char)piVar4[2] == '\x01') || (piVar4 = (int *)FUN_01abe644(), piVar4 != (int *)0x0)) {
          if (*piVar4 == 0) {
            iVar5 = FUN_01ac1a94();
          }
          else {
            iVar5 = piVar4[1];
          }
        }
        else {
          iVar5 = -1;
        }
        if (iVar5 == piVar6[4]) {
          piVar4 = (int *)(0x20 - LZCOUNT((uVar10 & 0x3fffff) + 0x20 >> 6));
          if ((int *)piVar6[3] <= piVar4) {
            return piVar4;
          }
          if ((int *)piVar6[1] <= piVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(piVar4,(int *)piVar6[1],&DAT_01d2ec80);
          }
          piVar8 = (int *)(piVar6[2] + (int)piVar4 * 0x14);
          if ((*piVar8 != 0) && (uVar13 = (uVar10 & 0x3fffff) - piVar8[4], uVar13 < (uint)piVar8[1])
             ) {
            puVar9 = (uint *)(*piVar6 + (int)piVar4 * 4);
            uVar10 = uVar10 >> 0x1e;
            iVar5 = *piVar8 + uVar13 * 0x40;
            DataMemoryBarrier(0xb);
            if (uVar10 != *(uint *)(iVar5 + 0x38) >> 0x1e) {
              return (int *)0x0;
            }
            puVar14 = (uint *)(iVar5 + 0x38);
            iVar2 = 1;
            if (1 < uVar10) {
              iVar2 = -2;
            }
            uVar15 = 0;
            bVar1 = false;
            uVar12 = *(uint *)(iVar5 + 0x38);
            goto LAB_01ab382c;
          }
        }
        else {
          piVar4 = (int *)(uVar10 & 0x3fffff);
          uVar13 = 0x20 - LZCOUNT((uint)(piVar4 + 8) >> 6);
          if (uVar13 < (uint)piVar6[3]) {
            piVar6 = (int *)(piVar6[2] + uVar13 * 0x14);
            if (*piVar6 != 0) {
              piVar8 = (int *)((int)piVar4 - piVar6[4]);
              piVar4 = (int *)piVar6[1];
              if (piVar8 < piVar4) {
                puVar9 = (uint *)(piVar6 + 2);
                uVar10 = uVar10 >> 0x1e;
                iVar5 = *piVar6 + (int)piVar8 * 0x40;
                DataMemoryBarrier(0xb);
                if (uVar10 != *(uint *)(iVar5 + 0x38) >> 0x1e) {
                  return (int *)0x0;
                }
                puVar14 = (uint *)(iVar5 + 0x38);
                iVar2 = 1;
                if (1 < uVar10) {
                  iVar2 = -2;
                }
                uVar12 = 0;
                bVar1 = false;
                uVar13 = *(uint *)(iVar5 + 0x38);
                break;
              }
            }
          }
        }
        return piVar4;
      }
    }
    else {
      uVar12 = *puVar9;
      if (uVar12 == uVar10) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar9);
          if (bVar1) {
            *puVar9 = uVar13 * 4 - 4 | uVar10 & 0xc0000003;
            bVar1 = true;
            goto LAB_01ab463c;
          }
          uVar12 = *puVar9;
        } while (uVar12 == uVar10);
      }
      bVar1 = false;
      ClearExclusiveLocal();
LAB_01ab463c:
      DataMemoryBarrier(0xb);
      if (bVar1) {
        return param_1;
      }
    }
    uVar10 = uVar12;
  } while( true );
LAB_01ab3958:
  uVar15 = *puVar14;
  if (uVar15 == uVar13) {
    DataMemoryBarrier(0xb);
    do {
      bVar11 = (bool)hasExclusiveAccess(puVar14);
      if (bVar11) {
        *puVar14 = uVar13 & 0x3fffffff | (uVar10 + iVar2) * 0x40000000;
        bVar11 = true;
        goto LAB_01ab3998;
      }
      uVar15 = *puVar14;
    } while (uVar15 == uVar13);
  }
  bVar11 = false;
  ClearExclusiveLocal();
LAB_01ab3998:
  DataMemoryBarrier(0xb);
  if (bVar11) {
    if ((uVar15 & 0x3ffffffc) == 0) {
      FUN_01aba450(iVar5);
      uVar10 = *puVar9;
      do {
        *(uint *)(iVar5 + 0x3c) = uVar10;
        uVar13 = *puVar9;
        if (uVar13 == uVar10) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar9);
            if (bVar1) {
              *puVar9 = (uint)piVar8;
              bVar1 = true;
              uVar10 = uVar13;
              goto LAB_01ab3a58;
            }
            uVar13 = *puVar9;
          } while (uVar13 == uVar10);
        }
        bVar1 = false;
        ClearExclusiveLocal();
        uVar10 = uVar13;
LAB_01ab3a58:
        if (bVar1) {
          return (int *)&DAT_00000001;
        }
      } while( true );
    }
    if ((uVar12 & 0x1f) == 0x1f) {
LAB_01ab39d8:
      FUN_01bea67c();
    }
    else {
      iVar3 = 1 << (uVar12 & 0x1f);
      do {
        iVar3 = iVar3 + -1;
        HintYield();
      } while (iVar3 != 0);
      if (7 < uVar12) goto LAB_01ab39d8;
      uVar12 = uVar12 + 1;
    }
    bVar1 = true;
    uVar15 = uVar13;
  }
  else {
    uVar12 = 0;
  }
  uVar13 = uVar15;
  if ((!bVar1) && (uVar10 != uVar15 >> 0x1e)) {
    return (int *)0x0;
  }
  goto LAB_01ab3958;
LAB_01ab382c:
  uVar7 = *puVar14;
  if (uVar7 == uVar12) {
    DataMemoryBarrier(0xb);
    do {
      bVar11 = (bool)hasExclusiveAccess(puVar14);
      if (bVar11) {
        *puVar14 = uVar12 & 0x3fffffff | (uVar10 + iVar2) * 0x40000000;
        bVar11 = true;
        goto LAB_01ab386c;
      }
      uVar7 = *puVar14;
    } while (uVar7 == uVar12);
  }
  bVar11 = false;
  ClearExclusiveLocal();
LAB_01ab386c:
  DataMemoryBarrier(0xb);
  if (bVar11) {
    if ((uVar7 & 0x3ffffffc) == 0) {
      FUN_01aba450(iVar5);
      *(uint *)(iVar5 + 0x3c) = *puVar9;
      *puVar9 = uVar13;
      return (int *)&DAT_00000001;
    }
    if ((uVar15 & 0x1f) == 0x1f) {
LAB_01ab38a8:
      FUN_01bea67c();
    }
    else {
      iVar3 = 1 << (uVar15 & 0x1f);
      do {
        iVar3 = iVar3 + -1;
        HintYield();
      } while (iVar3 != 0);
      if (7 < uVar15) goto LAB_01ab38a8;
      uVar15 = uVar15 + 1;
    }
    bVar1 = true;
    uVar7 = uVar12;
  }
  else {
    uVar15 = 0;
  }
  uVar12 = uVar7;
  if ((!bVar1) && (uVar10 != uVar7 >> 0x1e)) {
    return (int *)0x0;
  }
  goto LAB_01ab382c;
}

