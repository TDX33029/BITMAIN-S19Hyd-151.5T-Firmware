// FUN_015e99dc @ 015e99dc size=368 calls_out=6 calls_in=3
// strings: 

void FUN_015e99dc(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*(int *)(param_1 + 0x24) != -0x80000000) {
    iVar6 = *(int *)(param_1 + 0x20);
    uVar2 = *(uint *)(param_1 + 0xc);
    while (uVar2 < (uint)(iVar6 + param_2)) {
      uVar10 = FUN_015ef9a8((int *)(param_1 + 0x24));
      iVar5 = (int)((ulonglong)uVar10 >> 0x20);
      piVar3 = (int *)uVar10;
      if (piVar3 == (int *)0x0) {
        return;
      }
      uVar8 = *(uint *)(iVar5 + 8);
      uVar2 = uVar8;
      if (uVar8 < 5) {
        uVar2 = 4;
      }
      iVar7 = (int)piVar3 + (uVar2 - 1 & 0xfffffff8) + 8;
      uVar10 = FUN_015e9bc8(iVar7);
      uVar2 = (uint)((ulonglong)uVar10 >> 0x20);
      iVar4 = (int)uVar10;
      if ((uVar2 & 0xff) == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01cfd9b0);
      }
      iVar9 = *(int *)(iVar4 + 8);
      *(undefined4 *)(iVar4 + 8) = 0x80000006;
      if (iVar9 == -0x7ffffffa) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01cfd9c0);
      }
      local_48 = *(undefined4 *)(iVar4 + 0xc);
      uStack_44 = *(undefined4 *)(iVar4 + 0x10);
      uStack_40 = *(undefined4 *)(iVar4 + 0x14);
      uStack_3c = *(undefined4 *)(iVar4 + 0x18);
      local_38 = *(undefined4 *)(iVar4 + 0x1c);
      uStack_34 = *(undefined4 *)(iVar4 + 0x20);
      uStack_30 = *(undefined4 *)(iVar4 + 0x24);
      uStack_2c = *(undefined4 *)(iVar4 + 0x28);
      uStack_28 = *(undefined4 *)(iVar4 + 0x2c);
      FUN_00a97e8c(iVar4,uVar2);
      local_4c = iVar9;
      (**(code **)(iVar5 + 0xc))(iVar7 + (uVar8 - 1 & 0xffffffcc) + 0x34);
      FUN_015ef9f0(param_1,&local_4c);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015fa3b4(piVar3,iVar5);
      }
      uVar2 = *(uint *)(param_1 + 0xc);
    }
  }
  return;
}

