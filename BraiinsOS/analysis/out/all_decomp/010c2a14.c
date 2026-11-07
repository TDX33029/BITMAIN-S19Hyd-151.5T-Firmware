// FUN_010c2a14 @ 010c2a14 size=396 calls_out=5 calls_in=2
// strings: 

void FUN_010c2a14(int param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (param_1 != 0) {
    piVar5 = (int *)(param_1 + 8);
    do {
      if (*piVar5 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar5);
        goto LAB_010c2a4c;
      }
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = 1;
    DataMemoryBarrier(0xb);
LAB_010c2a4c:
    uVar6 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar1 = *(char *)(param_1 + 0xc);
    }
    else {
      uVar6 = FUN_015bf3f8();
      uVar6 = uVar6 ^ 1;
      cVar1 = *(char *)(param_1 + 0xc);
    }
    if (cVar1 != '\0') {
      uVar3 = (uint)local_24 >> 8;
      local_24 = CONCAT31((int3)uVar3,(char)uVar6);
      local_28 = piVar5;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_01884cb0,&DAT_01884d10);
    }
    if (*(undefined1 **)(param_1 + 0x40) != &DAT_3b9aca00) {
      if (*(int *)(param_1 + 0x48) == 0) {
        FUN_015f3b0c(&local_28,1);
      }
      else {
        (**(code **)(*(int *)(param_1 + 0x4c) + 0x14))
                  (&local_28,
                   *(int *)(param_1 + 0x48) +
                   (*(int *)(*(int *)(param_1 + 0x4c) + 8) - 1U & 0xfffffff8) + 8);
      }
      *(int **)(param_1 + 0x38) = local_28;
      *(undefined4 *)(param_1 + 0x3c) = local_24;
      *(undefined4 *)(param_1 + 0x40) = local_20;
    }
    if (((uVar6 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar4 = FUN_015bf3f8(), iVar4 == 0)
       ) {
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = 0;
    if (iVar4 == 2) {
      FUN_016d6968(0xf0,piVar5,0x81,1);
      return;
    }
  }
  return;
}

