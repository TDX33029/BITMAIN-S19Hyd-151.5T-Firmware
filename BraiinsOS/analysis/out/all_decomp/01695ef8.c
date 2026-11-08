// FUN_01695ef8 @ 01695ef8 size=316 calls_out=6 calls_in=3
// strings: 

void FUN_01695ef8(undefined4 *param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *local_24 [3];
  
  uVar6 = *param_1;
  piVar7 = (int *)param_1[1];
  FUN_01695300(piVar7 + 0x13,uVar6,param_2);
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  if (piVar7[0x11] + *piVar7 == (piVar7[8] & ~piVar7[0x12])) {
    DataMemoryBarrier(0xb);
    uVar5 = piVar7[0x12];
    if ((uVar5 & piVar7[8]) == 0) goto LAB_01695f90;
  }
  puVar2 = (uint *)(param_2 + 0x14);
  uVar5 = *puVar2;
  if (uVar5 == 0) {
    uVar5 = 1;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
      if (bVar1) {
        *puVar2 = 1;
        goto LAB_01695f8c;
      }
    } while (*puVar2 == 0);
  }
  ClearExclusiveLocal();
LAB_01695f8c:
  DataMemoryBarrier(0xb);
LAB_01695f90:
  puVar3 = (undefined4 *)param_1[2];
  iVar4 = FUN_009efc50(param_2,uVar5,*puVar3,puVar3[1],puVar3[2]);
  if (iVar4 - 1U < 2) {
    FUN_016954f4(local_24,piVar7 + 0x13,uVar6);
    if (local_24[0] == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ae100);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *local_24[0];
      bVar1 = (bool)hasExclusiveAccess(local_24[0]);
    } while (!bVar1);
    *local_24[0] = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00fbaa00();
      return;
    }
  }
  else if (iVar4 != 3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018ae0f0);
  }
  return;
}

