// FUN_0108a074 @ 0108a074 size=228 calls_out=2 calls_in=1
// strings: 

void FUN_0108a074(uint *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    uVar6 = param_1[2];
    uVar7 = *param_1;
    puVar8 = (undefined4 *)param_1[1];
    puVar4 = (undefined4 *)param_1[3];
    do {
      if (((uVar7 & 1) != 0) && (puVar8 == puVar4)) {
        puVar8 = (undefined4 *)puVar8[1];
        *param_1 = 1;
        param_1[1] = (uint)puVar8;
      }
      puVar9 = (undefined4 *)puVar4[1];
      uVar6 = uVar6 - 1;
      param_1[3] = (uint)puVar9;
      param_1[2] = uVar6;
      if (puVar9 != (undefined4 *)0x0) {
        puVar9[2] = 0;
      }
      piVar5 = (int *)*puVar4;
      if (puVar9 == (undefined4 *)0x0) {
        param_1[4] = 0;
      }
      puVar4[1] = 0;
      puVar4[2] = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        piVar3 = (int *)piVar5[4];
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0108a158(piVar5[4]);
        }
        thunk_FUN_016d3fb4(piVar5);
      }
      thunk_FUN_016d3fb4(puVar4);
      puVar4 = puVar9;
    } while (puVar9 != (undefined4 *)0x0);
  }
  return;
}

