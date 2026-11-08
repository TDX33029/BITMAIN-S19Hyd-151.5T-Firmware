// FUN_00682780 @ 00682780 size=340 calls_out=4 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00682780(int *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_stack_00000000;
  int *local_24;
  int local_20;
  int local_1c;
  
  iVar7 = *param_1;
  piVar5 = (int *)(iVar7 + 8);
  do {
    if (*piVar5 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar5);
      goto LAB_006827b0;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = 1;
  DataMemoryBarrier(0xb);
LAB_006827b0:
  uVar6 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(iVar7 + 0xc);
  }
  else {
    uVar6 = FUN_015bf3f8();
    uVar6 = uVar6 ^ 1;
    cVar1 = *(char *)(iVar7 + 0xc);
  }
  if (cVar1 != '\0') {
    uVar3 = (uint)local_20 >> 8;
    local_20 = CONCAT31((int3)uVar3,(char)uVar6);
    local_24 = piVar5;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_24,&DAT_018587a0,&DAT_018a596c);
  }
  local_20 = param_1[1];
  local_1c = param_1[2];
  local_24 = (int *)(iVar7 + 0x160);
  FUN_0101c8fc(iVar7 + 0xf8,1,&local_24,iVar7 + 0x10);
  if (((uVar6 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar4 = FUN_015bf3f8(), iVar4 == 0))
  {
    *(undefined1 *)(iVar7 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = 0;
  if (iVar7 == 2) {
    local_24 = (int *)((int)register0x00000054 + -0xc);
    software_interrupt(0);
    FUN_016d3496(piVar5,0x81,1,in_stack_00000000);
    return;
  }
  return;
}

