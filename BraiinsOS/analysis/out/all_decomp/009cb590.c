// FUN_009cb590 @ 009cb590 size=420 calls_out=3 calls_in=6
// strings: 

void FUN_009cb590(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  
  if (param_2 != 0) {
    uVar10 = *(uint *)(param_2 + 0x10);
    puVar3 = (uint *)(param_2 + 0x10);
    DataMemoryBarrier(0xb);
    while (0x7fffffff < uVar10) {
      if ((~uVar10 & 0x7fffffff) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_0040888b,0x46,&DAT_0187b670);
      }
      uVar2 = *puVar3;
      if (*puVar3 == uVar10) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar3);
          if (bVar1) {
            *puVar3 = uVar10 + 1 | 0x80000000;
            DataMemoryBarrier(0xb);
            uVar4 = *param_3;
            uVar6 = param_3[1];
            uVar7 = param_3[2];
            puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x10);
            if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x10);
            }
            *puVar5 = uVar4;
            puVar5[1] = uVar6;
            puVar5[2] = uVar7;
            puVar5[3] = 0;
            piVar9 = (int *)(param_2 + 8);
            DataMemoryBarrier(0xb);
            do {
              iVar8 = *piVar9;
              bVar1 = (bool)hasExclusiveAccess(piVar9);
            } while (!bVar1);
            *piVar9 = (int)puVar5;
            DataMemoryBarrier(0xb);
            *(undefined4 **)(iVar8 + 0xc) = puVar5;
            puVar3 = (uint *)(param_2 + 0x20);
            DataMemoryBarrier(0xb);
            do {
              uVar10 = *puVar3;
              bVar1 = (bool)hasExclusiveAccess(puVar3);
            } while (!bVar1);
            *puVar3 = uVar10 | 2;
            DataMemoryBarrier(0xb);
            if (uVar10 == 0) {
              iVar8 = *(int *)(param_2 + 0x18);
              *(undefined4 *)(param_2 + 0x18) = 0;
              DataMemoryBarrier(0xb);
              do {
                bVar1 = (bool)hasExclusiveAccess(puVar3);
              } while (!bVar1);
              *puVar3 = *puVar3 & 0xfffffffd;
              if (iVar8 != 0) {
                (**(code **)(iVar8 + 4))(*(undefined4 *)(param_2 + 0x1c));
                *(undefined1 *)(param_1 + 3) = 2;
                return;
              }
            }
            *(undefined1 *)(param_1 + 3) = 2;
            return;
          }
          uVar2 = *puVar3;
        } while (*puVar3 == uVar10);
      }
      uVar10 = uVar2;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
  }
  uVar4 = param_3[1];
  uVar6 = param_3[2];
  *param_1 = *param_3;
  param_1[1] = uVar4;
  param_1[2] = uVar6;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}

