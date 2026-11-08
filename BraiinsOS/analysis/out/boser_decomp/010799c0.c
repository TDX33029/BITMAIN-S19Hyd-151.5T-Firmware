// FUN_010799c0 @ 010799c0 size=356 calls_out=2 calls_in=3
// strings: 

void FUN_010799c0(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  DataMemoryBarrier(0xb);
  puVar2 = (uint *)(*param_2 + 0x80);
  uVar9 = *(uint *)(*param_2 + 0x80);
  do {
    if ((uVar9 & 1) != 0) {
      uVar7 = param_3[1];
      uVar8 = param_3[2];
      uVar10 = param_3[3];
      *param_1 = *param_3;
      param_1[1] = uVar7;
      param_1[2] = uVar8;
      param_1[3] = uVar10;
      return;
    }
    if (uVar9 + 2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0197a954();
    }
    uVar5 = *puVar2;
    if (uVar5 == uVar9) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
        if (bVar1) {
          *puVar2 = uVar9 + 2;
          bVar1 = true;
          goto LAB_01079a24;
        }
        uVar5 = *puVar2;
      } while (uVar5 == uVar9);
    }
    bVar1 = false;
    ClearExclusiveLocal();
LAB_01079a24:
    DataMemoryBarrier(0xb);
    uVar9 = uVar5;
    if (bVar1) {
      iVar6 = *param_2;
      uVar10 = param_3[2];
      uVar8 = param_3[3];
      puVar2 = (uint *)(iVar6 + 0x24);
      uVar7 = *param_3;
      uVar11 = param_3[1];
      do {
        uVar9 = *puVar2;
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = uVar9 + 1;
      DataMemoryBarrier(0xb);
      iVar3 = FUN_01194314(iVar6 + 0x20,uVar9);
      puVar2 = (uint *)(iVar3 + 0x108);
      puVar4 = (undefined4 *)(iVar3 + (uVar9 & 0xf) * 0x10);
      *puVar4 = uVar7;
      puVar4[1] = uVar11;
      puVar4[2] = uVar10;
      puVar4[3] = uVar8;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (uVar9 & 0xf);
      puVar2 = (uint *)(iVar6 + 0x48);
      DataMemoryBarrier(0xb);
      do {
        uVar9 = *puVar2;
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = uVar9 | 2;
      DataMemoryBarrier(0xb);
      if (uVar9 == 0) {
        iVar3 = *(int *)(iVar6 + 0x40);
        *(undefined4 *)(iVar6 + 0x40) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = 0;
        if (iVar3 != 0) {
          (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar6 + 0x44));
        }
      }
      *param_1 = 3;
      return;
    }
  } while( true );
}

