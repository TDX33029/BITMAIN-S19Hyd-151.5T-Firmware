// FUN_015e9770 @ 015e9770 size=300 calls_out=6 calls_in=3
// strings: 

void FUN_015e9770(int param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  
  if (*(int *)(param_1 + 0x24) != -0x80000000) {
    iVar7 = *(int *)(param_1 + 0x20);
    uVar3 = *(uint *)(param_1 + 0xc);
    while ((uVar3 < (uint)(iVar7 + param_2) &&
           (uVar10 = FUN_015ef9a8((int *)(param_1 + 0x24)), iVar6 = (int)((ulonglong)uVar10 >> 0x20)
           , piVar4 = (int *)uVar10, piVar4 != (int *)0x0))) {
      uVar9 = *(uint *)(iVar6 + 8);
      uVar3 = uVar9;
      if (uVar9 < 5) {
        uVar3 = 4;
      }
      iVar8 = (int)piVar4 + (uVar3 - 1 & 0xfffffff8) + 8;
      uVar10 = FUN_015e9908(iVar8);
      uVar3 = (uint)((ulonglong)uVar10 >> 0x20);
      iVar5 = (int)uVar10;
      if ((uVar3 & 0xff) == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01cfd9b0);
      }
      bVar1 = *(byte *)(iVar5 + 5);
      *(undefined1 *)(iVar5 + 5) = 2;
      if (bVar1 == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01cfd9c0);
      }
      FUN_00a97e8c(iVar5,uVar3);
      (**(code **)(iVar6 + 0xc))(iVar8 + (uVar9 - 1 & 0xfffffff4) + 0xc);
      FUN_015efb58(param_1,bVar1 & 1);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015fa720(piVar4,iVar6);
      }
      uVar3 = *(uint *)(param_1 + 0xc);
    }
  }
  return;
}

