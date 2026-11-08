// FUN_0163edcc @ 0163edcc size=556 calls_out=11 calls_in=5
// strings: EOF on self-pipe

void FUN_0163edcc(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_b8 [132];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  code *local_28;
  
  cVar3 = *(char *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (cVar3 == '\x01') {
    FUN_016dd606(auStack_b8,0,0x80);
    iVar9 = *(int *)(param_1 + 0x14);
    while (iVar4 = FUN_016d8acc(iVar9,auStack_b8,0x80,0), iVar4 != -1) {
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("EOF on self-pipe",0x21,&DAT_018ac85c);
      }
    }
    puVar5 = (undefined4 *)FUN_016d2bc8();
    uVar8 = *puVar5;
    cVar3 = FUN_005bc530(uVar8);
    if (cVar3 != '\r') {
      local_28 = FUN_015ef5b4;
      local_2c = &local_34;
      local_34 = 0;
      local_30 = uVar8;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005798db,&local_2c,&DAT_018ac86c);
    }
    DataMemoryBarrier(0xb);
    if (DAT_018d90e8 != 0) {
      FUN_016449a0();
    }
    iVar2 = DAT_018d90e4;
    iVar4 = DAT_018d90e0;
    if (DAT_018d90e4 != 0) {
      iVar10 = 0;
      do {
        piVar6 = (int *)(iVar4 + iVar10 * 0x10);
        DataMemoryBarrier(0xb);
        piVar7 = piVar6 + 1;
        do {
          iVar1 = *piVar7;
          bVar11 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar11);
        *(char *)piVar7 = '\0';
        DataMemoryBarrier(0xb);
        bVar11 = (char)iVar1 != '\0';
        if (bVar11) {
          iVar9 = *piVar6;
          piVar6 = *(int **)(iVar9 + 0xa0);
        }
        if (bVar11 && piVar6 != (int *)0x0) {
          piVar6 = (int *)(iVar9 + 0x98);
          if (*piVar6 == 0) {
            bVar11 = (bool)hasExclusiveAccess(piVar6);
            if (!bVar11) goto LAB_0163efac;
            *piVar6 = 8;
            DataMemoryBarrier(0xb);
          }
          else {
            ClearExclusiveLocal();
LAB_0163efac:
            FUN_0127e06c(piVar6);
          }
          FUN_0128236c(piVar6);
          FUN_0128236c((uint)piVar6 | 1);
          piVar7 = (int *)(iVar9 + 0x9c);
          DataMemoryBarrier(0xb);
          do {
            bVar11 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar11);
          *piVar7 = *piVar7 + 2;
          FUN_01282570(piVar6);
          FUN_01282570((uint)piVar6 | 1);
          if (*piVar6 == 8) {
            DataMemoryBarrier(0xb);
            do {
              bVar11 = (bool)hasExclusiveAccess(piVar6);
              if (bVar11) {
                *piVar6 = 0;
                goto LAB_0163ee9c;
              }
            } while (*piVar6 == 8);
          }
          ClearExclusiveLocal();
          FUN_0127db4c(piVar6);
LAB_0163ee9c:
          FUN_0163b708(iVar9 + 8);
          FUN_0163b708(iVar9 + 0x18);
          FUN_0163b708(iVar9 + 0x28);
          FUN_0163b708(iVar9 + 0x38);
          FUN_0163b708(iVar9 + 0x48);
          FUN_0163b708(iVar9 + 0x58);
          FUN_0163b708(iVar9 + 0x68);
          FUN_0163b708(iVar9 + 0x78);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != iVar2);
    }
  }
  return;
}

