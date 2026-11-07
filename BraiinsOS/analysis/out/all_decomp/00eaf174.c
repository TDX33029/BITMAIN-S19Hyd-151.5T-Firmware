// FUN_00eaf174 @ 00eaf174 size=312 calls_out=4 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00eaf174(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_stack_00000000;
  int *local_18;
  undefined1 local_14;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_00eaf1a0;
    }
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_00eaf1a0:
  uVar4 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)param_1[1];
  }
  else {
    uVar4 = FUN_015bf3f8();
    uVar4 = uVar4 ^ 1;
    cVar1 = (char)param_1[1];
  }
  if (cVar1 != '\0') {
    local_14 = (undefined1)uVar4;
    local_18 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_18,&DAT_0187bbc8);
  }
  if ((char)param_1[0xe] == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 1;
    FUN_00eaefb8(param_1 + 2);
    FUN_00eaefb8(param_1 + 8);
  }
  if (((uVar4 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar3 = FUN_015bf3f8(), iVar3 == 0))
  {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 0;
  if (iVar3 == 2) {
    software_interrupt(0);
    FUN_016d3496(param_1,0x81,1,in_stack_00000000);
    return;
  }
  return;
}

