// FUN_008ef954 @ 008ef954 size=332 calls_out=3 calls_in=5
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008ef954(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int *local_20;
  undefined1 local_1c;
  
  piVar5 = (int *)(param_2 + 0x60);
  do {
    if (*piVar5 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar5);
      goto LAB_008ef980;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = 1;
  DataMemoryBarrier(0xb);
LAB_008ef980:
  uVar4 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(param_2 + 100);
  }
  else {
    uVar4 = FUN_015bf3f8();
    uVar4 = uVar4 ^ 1;
    cVar1 = *(char *)(param_2 + 100);
  }
  if (cVar1 != '\0') {
    local_1c = (undefined1)uVar4;
    local_20 = piVar5;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00347759,0x19,&local_20,&DAT_01866e14,&DAT_01866d34);
  }
  uVar7 = *(undefined8 *)(param_2 + 0x70);
  uVar6 = *(undefined4 *)(param_2 + 0x6c);
  *param_1 = *(undefined4 *)(param_2 + 0x68);
  param_1[1] = uVar6;
  *(undefined8 *)(param_1 + 2) = uVar7;
  if (((uVar4 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar3 = FUN_015bf3f8(), iVar3 == 0))
  {
    *(undefined1 *)(param_2 + 100) = 1;
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

