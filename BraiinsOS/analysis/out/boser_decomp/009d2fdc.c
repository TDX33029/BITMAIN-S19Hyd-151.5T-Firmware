// FUN_009d2fdc @ 009d2fdc size=360 calls_out=6 calls_in=3
// strings: 

void FUN_009d2fdc(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  if (*(int *)(param_1 + 0x24) != -0x80000000) {
    iVar7 = *(int *)(param_1 + 0x20);
    uVar2 = *(uint *)(param_1 + 0xc);
    while (uVar2 < (uint)(iVar7 + param_2)) {
      uVar13 = FUN_015ef9a8((int *)(param_1 + 0x24));
      iVar6 = (int)((ulonglong)uVar13 >> 0x20);
      piVar3 = (int *)uVar13;
      if (piVar3 == (int *)0x0) {
        return;
      }
      uVar11 = *(uint *)(iVar6 + 8);
      uVar2 = uVar11;
      if (uVar11 < 5) {
        uVar2 = 4;
      }
      iVar9 = (int)piVar3 + (uVar2 - 1 & 0xfffffff8) + 8;
      uVar13 = FUN_009d31cc(iVar9);
      uVar2 = (uint)((ulonglong)uVar13 >> 0x20);
      iVar5 = (int)uVar13;
      if ((uVar2 & 0xff) == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c23458);
      }
      iVar12 = *(int *)(iVar5 + 8);
      *(undefined4 *)(iVar5 + 8) = 0x80000000;
      if (iVar12 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c23468);
      }
      uVar4 = *(undefined4 *)(iVar5 + 0xc);
      uVar8 = *(undefined4 *)(iVar5 + 0x10);
      uVar10 = *(undefined4 *)(iVar5 + 0x14);
      FUN_00a97e8c(iVar5,uVar2 & 1);
      (**(code **)(iVar6 + 0xc))(iVar9 + (uVar11 - 1 & 0xffffffe4) + 0x1c);
      local_34 = iVar12;
      local_30 = uVar4;
      local_2c = uVar8;
      uStack_28 = uVar10;
      FUN_009d2b00(param_1,&local_34);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a970d8(piVar3,iVar6);
      }
      uVar2 = *(uint *)(param_1 + 0xc);
    }
  }
  return;
}

