// FUN_01408acc @ 01408acc size=416 calls_out=6 calls_in=2
// strings: asse

void FUN_01408acc(uint *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  
  DataMemoryBarrier(0xb);
  if (param_2 == 0) {
    return;
  }
  puVar4 = param_1 + param_2 * 2;
  do {
    uVar9 = *param_1;
LAB_01408af8:
    piVar6 = (int *)(uVar9 & 0xfffffffc);
    if (piVar6 != (int *)0x0) {
      uVar11 = piVar6[3];
      puVar5 = (uint *)*piVar6;
      puVar10 = puVar5 + piVar6[1];
LAB_01408b10:
      do {
        if (puVar5 == puVar10) goto LAB_01408bd8;
        uVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        if (7 < uVar7) {
          if ((uVar7 & 2) == 0) {
            DataMemoryBarrier(0xb);
            piVar8 = *(int **)((uVar7 & 0xfffffff8) + 0x14);
            DataMemoryBarrier(0xb);
            do {
              iVar2 = *piVar8;
              bVar1 = (bool)hasExclusiveAccess(piVar8);
            } while (!bVar1);
            *piVar8 = iVar2 + -1;
            if (iVar2 == 1) {
              DataMemoryBarrier(0xb);
              if ((undefined1 *)piVar8[0x20] < (undefined1 *)0x3b9aca01) {
                if ((undefined1 *)piVar8[0x20] == &DAT_3b9aca00) {
                  piVar3 = (int *)piVar8[4];
                  DataMemoryBarrier(0xb);
                  do {
                    iVar2 = *piVar3;
                    bVar1 = (bool)hasExclusiveAccess(piVar3);
                  } while (!bVar1);
                  *piVar3 = iVar2 + -1;
                  if (iVar2 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_018531c0(piVar8[4],piVar8[5]);
                  }
                }
                else {
                  FUN_013f4708();
                }
              }
              thunk_FUN_01be4678(piVar8);
            }
          }
          else {
            if (3 < uVar11) goto LAB_01408b10;
            DataMemoryBarrier(0xb);
          }
          FUN_01403c58(uVar7);
        }
      } while( true );
    }
    param_1 = param_1 + 2;
    if (param_1 == puVar4) {
      return;
    }
  } while( true );
LAB_01408bd8:
  if (uVar9 < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("asse",0x20,&DAT_01cf3530);
  }
  DataMemoryBarrier(0xb);
  if (piVar6[1] != 0) {
    thunk_FUN_01be4678(*piVar6);
  }
  piVar8 = (int *)piVar6[2];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar8;
    bVar1 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar1);
  *piVar8 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(piVar6[2]);
  }
  thunk_FUN_01be4678(piVar6);
  uVar9 = uVar11;
  goto LAB_01408af8;
}

