// FUN_00e8cc5c @ 00e8cc5c size=316 calls_out=3 calls_in=0
// strings: 

void FUN_00e8cc5c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_28;
  
  iVar6 = *(int *)(*param_1 + 8);
  uVar2 = FUN_0117f4c4();
  local_28 = CONCAT22(local_28._2_2_,1);
  puVar3 = (undefined4 *)thunk_FUN_01be5118(0x2c);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x2c);
  }
  *puVar3 = 1;
  puVar3[1] = 1;
  puVar3[2] = uVar2;
  puVar3[3] = 1;
  puVar3[4] = param_2;
  puVar3[5] = param_3;
  puVar3[6] = iVar6 + 8;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = local_28;
  piVar5 = param_1 + 1;
  puVar4 = puVar3 + 2;
  *(undefined1 *)(param_1 + 2) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = (int)puVar4;
  DataMemoryBarrier(0xb);
  if (iVar6 == 0) {
    puVar3[8] = 1;
    DataMemoryBarrier(0xb);
    puVar3[6] = 0;
  }
  else {
    do {
      DataMemoryBarrier(0xb);
    } while (*(int *)(iVar6 + 0x10) == *(int *)(*param_1 + 8) + 8);
    puVar3[8] = *(int *)(iVar6 + 0x18) + 1;
    DataMemoryBarrier(0xb);
    puVar3[6] = iVar6;
    *(undefined4 **)(iVar6 + 0x14) = puVar4;
  }
  iVar6 = *param_1;
  puVar3[9] = 0;
  piVar5 = (int *)(iVar6 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = (int)puVar4;
  DataMemoryBarrier(0xb);
  *(undefined4 **)(iVar6 + 0x1c) = puVar4;
  return;
}

