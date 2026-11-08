// FUN_009d345c @ 009d345c size=336 calls_out=7 calls_in=3
// strings: 

void FUN_009d345c(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  char local_35;
  undefined1 auStack_34 [16];
  
  if ((*(int *)(param_1 + 0x24) != -0x80000000) &&
     (uVar6 = *(int *)(param_1 + 0x20) + param_2, *(uint *)(param_1 + 0xc) < uVar6)) {
    do {
      uVar10 = FUN_015ef9a8((int *)(param_1 + 0x24));
      iVar7 = (int)((ulonglong)uVar10 >> 0x20);
      piVar3 = (int *)uVar10;
      if (piVar3 == (int *)0x0) {
        return;
      }
      uVar9 = *(uint *)(iVar7 + 8);
      uVar4 = uVar9;
      if (uVar9 < 5) {
        uVar4 = 4;
      }
      iVar8 = (int)piVar3 + (uVar4 - 1 & 0xfffffff8) + 8;
      uVar10 = FUN_009d3618(iVar8);
      uVar4 = (uint)((ulonglong)uVar10 >> 0x20);
      iVar5 = (int)uVar10;
      if ((uVar4 & 0xff) == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c23458);
      }
      cVar1 = *(char *)(iVar5 + 5);
      *(undefined1 *)(iVar5 + 5) = 3;
      if (cVar1 == '\x03') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c23468);
      }
      FUN_01bed4e2(auStack_34,iVar5 + 6,0x10);
      FUN_00a97e8c(iVar5,uVar4);
      local_35 = cVar1;
      (**(code **)(iVar7 + 0xc))(iVar8 + (uVar9 - 1 & 0xffffffe4) + 0x1c);
      FUN_009d2f00(param_1,&local_35);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a96f30(piVar3,iVar7);
      }
    } while (*(uint *)(param_1 + 0xc) < uVar6);
  }
  return;
}

