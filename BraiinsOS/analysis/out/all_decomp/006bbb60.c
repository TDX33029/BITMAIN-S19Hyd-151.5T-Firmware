// FUN_006bbb60 @ 006bbb60 size=320 calls_out=4 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006bbb60(int *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_stack_00000000;
  int *local_18;
  undefined1 local_14;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_006bbb8c;
    }
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_006bbb8c:
  uVar5 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)param_1[1];
  }
  else {
    uVar5 = FUN_015bf3f8();
    uVar5 = uVar5 ^ 1;
    cVar1 = (char)param_1[1];
  }
  if (cVar1 != '\0') {
    local_14 = (undefined1)uVar5;
    local_18 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_18,&DAT_01858998);
  }
  FUN_006bbce0(param_1 + 2);
  uVar3 = 0;
  if (param_1[4] == 0) {
    uVar3 = param_1[7];
  }
  DataMemoryBarrier(0xb);
  if (param_1[4] == 0) {
    uVar3 = (uint)(uVar3 == 0);
  }
  *(char *)(param_1 + 8) = (char)uVar3;
  DataMemoryBarrier(0xb);
  if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar4 = FUN_015bf3f8(), iVar4 == 0))
  {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 0;
  if (iVar4 == 2) {
    software_interrupt(0);
    FUN_016d3496(param_1,0x81,1,in_stack_00000000);
    return;
  }
  return;
}

