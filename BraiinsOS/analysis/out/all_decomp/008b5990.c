// FUN_008b5990 @ 008b5990 size=456 calls_out=3 calls_in=1
// strings: 

void FUN_008b5990(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if (param_2 != 0) {
    puVar2 = (uint *)(param_2 + 0x10);
    DataMemoryBarrier(0xb);
    uVar6 = *(uint *)(param_2 + 0x10);
    while (0x7fffffff < uVar6) {
      if ((~uVar6 & 0x7fffffff) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_0040888b,0x46,&DAT_0187b670);
      }
      uVar9 = *puVar2;
      if (uVar9 == uVar6) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
          if (bVar1) {
            *puVar2 = uVar6 + 1 | 0x80000000;
            DataMemoryBarrier(0xb);
            uVar10 = param_3[1];
            uVar12 = param_3[2];
            uVar13 = *param_3;
            uVar11 = param_3[3];
            puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x1c);
            if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x1c);
            }
            uVar4 = param_3[4];
            uVar7 = param_3[5];
            puVar3[6] = 0;
            puVar3[5] = uVar7;
            piVar8 = (int *)(param_2 + 8);
            *puVar3 = uVar13;
            puVar3[1] = uVar10;
            puVar3[2] = uVar12;
            puVar3[3] = uVar11;
            puVar3[4] = uVar4;
            DataMemoryBarrier(0xb);
            do {
              iVar5 = *piVar8;
              bVar1 = (bool)hasExclusiveAccess(piVar8);
            } while (!bVar1);
            *piVar8 = (int)puVar3;
            DataMemoryBarrier(0xb);
            *(undefined4 **)(iVar5 + 0x18) = puVar3;
            puVar2 = (uint *)(param_2 + 0x20);
            DataMemoryBarrier(0xb);
            do {
              uVar6 = *puVar2;
              bVar1 = (bool)hasExclusiveAccess(puVar2);
            } while (!bVar1);
            *puVar2 = uVar6 | 2;
            DataMemoryBarrier(0xb);
            if (uVar6 == 0) {
              iVar5 = *(int *)(param_2 + 0x18);
              *(undefined4 *)(param_2 + 0x18) = 0;
              DataMemoryBarrier(0xb);
              do {
                bVar1 = (bool)hasExclusiveAccess(puVar2);
              } while (!bVar1);
              *puVar2 = *puVar2 & 0xfffffffd;
              if (iVar5 != 0) {
                (**(code **)(iVar5 + 4))(*(undefined4 *)(param_2 + 0x1c));
                *param_1 = 2;
                return;
              }
            }
            *param_1 = 2;
            return;
          }
          uVar9 = *puVar2;
        } while (uVar9 == uVar6);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      uVar6 = uVar9;
    }
  }
  uVar10 = param_3[1];
  uVar11 = param_3[2];
  uVar12 = param_3[3];
  uVar13 = param_3[4];
  uVar4 = param_3[5];
  *param_1 = *param_3;
  param_1[1] = uVar10;
  param_1[2] = uVar11;
  param_1[3] = uVar12;
  param_1[4] = uVar13;
  param_1[5] = uVar4;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}

