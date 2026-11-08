// FUN_010ed06c @ 010ed06c size=368 calls_out=3 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010ed06c(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *local_2c;
  int local_28;
  undefined1 local_24;
  
  uVar6 = *(uint *)(param_3 + 8);
  uVar4 = uVar6;
  if (uVar6 < 5) {
    uVar4 = 4;
  }
  param_2 = param_2 + (uVar4 - 1 & 0xfffffff8);
  piVar5 = (int *)(param_2 + 8);
  do {
    if (*piVar5 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar5);
      goto LAB_010ed0b4;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = 1;
  DataMemoryBarrier(0xb);
LAB_010ed0b4:
  uVar4 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(param_2 + 0xc);
  }
  else {
    uVar4 = FUN_015bf3f8(param_1);
    uVar4 = uVar4 ^ 1;
    cVar1 = *(char *)(param_2 + 0xc);
  }
  if (cVar1 != '\0') {
    local_24 = (undefined1)uVar4;
    local_2c = piVar5;
    local_28 = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00388d90,0x16,&local_2c,&DAT_0188602c,&DAT_0188603c);
  }
  (**(code **)(param_3 + 0xc))(param_1,(int)piVar5 + (uVar6 - 1 & 0xfffffffb) + 5);
  if (((uVar4 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar3 = FUN_015bf3f8(), iVar3 == 0))
  {
    *(undefined1 *)(param_2 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = 0;
  if (iVar3 == 2) {
    software_interrupt(0);
    FUN_016d3496(piVar5,0x81,1,param_5);
    return;
  }
  return;
}

