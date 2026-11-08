// FUN_012e50e4 @ 012e50e4 size=1084 calls_out=10 calls_in=1
// strings: 

void FUN_012e50e4(int param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  DataMemoryBarrier(0xb);
  if (param_1 == 0) {
    puVar4 = param_2 + 0x29;
    do {
      uVar2 = *puVar4;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = uVar2 - 1;
    DataMemoryBarrier(0xb);
    if (uVar2 == 1) {
      puVar4 = param_2 + 8;
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *puVar4;
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = uVar2 | param_2[0x12];
      DataMemoryBarrier(0xb);
      uVar12 = param_2[0x12];
      if ((uVar12 & uVar2) == 0) {
        FUN_012e2198(param_2 + 0x13);
        uVar12 = param_2[0x12];
      }
      uVar13 = *param_2;
      uVar14 = ~uVar12;
      uVar11 = 0;
      do {
        uVar12 = uVar12 - 1 & uVar13;
        puVar9 = (undefined4 *)(param_2[0x25] + uVar12 * 0x1c);
        uVar7 = puVar9[6];
        DataMemoryBarrier(0xb);
        if (uVar13 + 1 == uVar7) {
          if (param_2[0x10] <= uVar12 + 1) {
            uVar7 = param_2[0x11] + (uVar13 & -param_2[0x11]);
          }
          FUN_019bb7e0(*puVar9,puVar9[1]);
          FUN_019bb7e0(puVar9[3],puVar9[4]);
          uVar13 = uVar7;
        }
        else {
          if ((uVar2 & uVar14) == uVar13) {
            puVar4 = param_2 + 0x2a;
            DataMemoryBarrier(0xb);
            do {
              uVar2 = *puVar4;
              bVar1 = (bool)hasExclusiveAccess(puVar4);
            } while (!bVar1);
            *(char *)puVar4 = '\x01';
            DataMemoryBarrier(0xb);
            if ((char)uVar2 == '\0') {
              return;
            }
            if (param_2[0x26] != 0) {
              thunk_FUN_01be4678(param_2[0x25]);
            }
            FUN_012eacbc(param_2 + 0x15);
            FUN_012eacbc(param_2 + 0x1e);
            thunk_FUN_01be4678(param_2);
            return;
          }
          if (uVar11 < 7) {
            if (uVar11 != 0) {
              iVar5 = uVar11 * uVar11;
              do {
                iVar5 = iVar5 + -1;
                HintYield();
              } while (iVar5 != 0);
            }
          }
          else {
            FUN_01bea67c();
          }
          uVar11 = uVar11 + 1;
        }
        uVar12 = param_2[0x12];
      } while( true );
    }
  }
  else if (param_1 == 1) {
    puVar4 = param_2 + 0x21;
    do {
      uVar2 = *puVar4;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = uVar2 - 1;
    DataMemoryBarrier(0xb);
    if (uVar2 == 1) {
      puVar4 = param_2 + 8;
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *puVar4;
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = uVar2 | 1;
      DataMemoryBarrier(0xb);
      if ((uVar2 & 1) == 0) {
        uVar2 = *puVar4;
        uVar12 = 0;
        DataMemoryBarrier(0xb);
        if ((~uVar2 & 0x3e) == 0) {
          iVar5 = 1;
          iVar10 = 0;
          do {
            if (uVar12 < 7) {
              if (uVar12 != 0) {
                iVar3 = iVar10;
                do {
                  iVar3 = iVar3 + -1;
                  HintYield();
                } while (iVar3 != 0);
              }
            }
            else {
              FUN_01bea67c();
            }
            uVar2 = *puVar4;
            iVar10 = iVar10 + iVar5;
            iVar5 = iVar5 + 2;
            uVar12 = uVar12 + 1;
            DataMemoryBarrier(0xb);
          } while ((~uVar2 & 0x3e) == 0);
        }
        uVar14 = *param_2;
        puVar4 = param_2 + 1;
        DataMemoryBarrier(0xb);
        do {
          piVar8 = (int *)*puVar4;
          bVar1 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar1);
        *puVar4 = 0;
        DataMemoryBarrier(0xb);
        if ((uVar2 >> 1 != uVar14 >> 1) && (piVar8 == (int *)0x0)) {
          iVar5 = uVar12 * uVar12;
          uVar13 = uVar12 << 1 | 1;
          do {
            if (uVar12 < 7) {
              if (uVar12 != 0) {
                iVar10 = iVar5;
                do {
                  iVar10 = iVar10 + -1;
                  HintYield();
                } while (iVar10 != 0);
              }
            }
            else {
              FUN_01bea67c();
            }
            uVar12 = uVar12 + 1;
            DataMemoryBarrier(0xb);
            do {
              piVar8 = (int *)*puVar4;
              bVar1 = (bool)hasExclusiveAccess(puVar4);
            } while (!bVar1);
            *puVar4 = 0;
            iVar5 = iVar5 + uVar13;
            uVar13 = uVar13 + 2;
            DataMemoryBarrier(0xb);
          } while (piVar8 == (int *)0x0);
        }
        for (; uVar14 >> 1 != uVar2 >> 1; uVar14 = uVar14 + 2) {
          uVar12 = uVar14 >> 1 & 0x1f;
          if (uVar12 == 0x1f) {
            FUN_012e1874(piVar8);
            piVar6 = (int *)*piVar8;
            DataMemoryBarrier(0xb);
            thunk_FUN_01be4678(piVar8);
            piVar8 = piVar6;
          }
          else {
            FUN_012e1808(piVar8 + uVar12 * 7 + 1);
            FUN_019bb7e0(piVar8[uVar12 * 7 + 1],piVar8[uVar12 * 7 + 2]);
            FUN_019bb7e0(piVar8[uVar12 * 7 + 4],piVar8[uVar12 * 7 + 5]);
          }
        }
        if (piVar8 != (int *)0x0) {
          thunk_FUN_01be4678(piVar8);
        }
        DataMemoryBarrier(0xb);
        *param_2 = uVar14 & 0xfffffffe;
      }
      puVar4 = param_2 + 0x22;
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *puVar4;
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *(char *)puVar4 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar2 != '\0') {
        FUN_012eacec(param_2);
        return;
      }
    }
  }
  else {
    puVar4 = param_2 + 1;
    do {
      uVar2 = *puVar4;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = uVar2 - 1;
    DataMemoryBarrier(0xb);
    if (uVar2 == 1) {
      FUN_012d8c14(param_2 + 2);
      puVar4 = param_2 + 0x11;
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *puVar4;
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *(char *)puVar4 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar2 != '\0') {
        FUN_012eacbc(param_2 + 4);
        FUN_012eacbc(param_2 + 10);
        thunk_FUN_01be4678(param_2);
        return;
      }
    }
  }
  return;
}

