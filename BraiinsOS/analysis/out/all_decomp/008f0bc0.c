// FUN_008f0bc0 @ 008f0bc0 size=308 calls_out=5 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008f0bc0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *local_20;
  undefined1 local_1c;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_008f0bf0;
    }
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_008f0bf0:
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
    local_1c = (undefined1)uVar4;
    local_20 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00347747,0x12,&local_20,&DAT_01866e04,&DAT_01866d24);
  }
  FUN_008ef350(param_1 + 2);
  FUN_016dd1aa(param_1 + 2,param_2,0x58);
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
    FUN_016d3496(param_1,0x81,1,param_5);
    return;
  }
  return;
}

