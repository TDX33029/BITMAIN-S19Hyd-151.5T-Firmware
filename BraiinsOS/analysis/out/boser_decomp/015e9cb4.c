// FUN_015e9cb4 @ 015e9cb4 size=388 calls_out=6 calls_in=2
// strings: 

void FUN_015e9cb4(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(int *)(param_1 + 0x24) != -0x80000000) {
    iVar6 = *(int *)(param_1 + 0x20);
    uVar2 = *(uint *)(param_1 + 0xc);
    while (uVar2 < (uint)(iVar6 + param_2)) {
      uVar11 = FUN_015ef9a8((int *)(param_1 + 0x24));
      iVar5 = (int)((ulonglong)uVar11 >> 0x20);
      piVar3 = (int *)uVar11;
      if (piVar3 == (int *)0x0) {
        return;
      }
      uVar10 = *(uint *)(iVar5 + 8);
      uVar2 = uVar10;
      if (uVar10 < 9) {
        uVar2 = 8;
      }
      iVar7 = (int)piVar3 + (uVar2 - 1 & 0xfffffff8) + 8;
      uVar11 = FUN_015ebc9c(iVar7);
      uVar2 = (uint)((ulonglong)uVar11 >> 0x20);
      iVar4 = (int)uVar11;
      if ((uVar2 & 0xff) == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01cfd9b0);
      }
      iVar9 = *(int *)(iVar4 + 8);
      iVar8 = *(int *)(iVar4 + 0xc);
      *(undefined4 *)(iVar4 + 8) = 0x13;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      if (iVar9 == 0x13 && iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01cfd9c0);
      }
      local_48 = *(undefined4 *)(iVar4 + 0x10);
      uStack_44 = *(undefined4 *)(iVar4 + 0x14);
      uStack_40 = *(undefined4 *)(iVar4 + 0x18);
      uStack_3c = *(undefined4 *)(iVar4 + 0x1c);
      local_38 = *(undefined4 *)(iVar4 + 0x20);
      uStack_34 = *(undefined4 *)(iVar4 + 0x24);
      uStack_30 = *(undefined4 *)(iVar4 + 0x28);
      uStack_2c = *(undefined4 *)(iVar4 + 0x2c);
      FUN_00a97e8c(iVar4,uVar2 & 1);
      local_50 = iVar9;
      local_4c = iVar8;
      (**(code **)(iVar5 + 0xc))(iVar7 + (uVar10 - 1 & 0xffffffc8) + 0x38);
      FUN_015efd0c(param_1,&local_50);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015f9264(piVar3,iVar5);
      }
      uVar2 = *(uint *)(param_1 + 0xc);
    }
  }
  return;
}

