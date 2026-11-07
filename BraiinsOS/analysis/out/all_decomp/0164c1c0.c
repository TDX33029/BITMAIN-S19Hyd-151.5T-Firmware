// FUN_0164c1c0 @ 0164c1c0 size=324 calls_out=3 calls_in=5
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0164c1c0(int *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *local_20;
  undefined1 local_1c;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_0164c1f4;
    }
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_0164c1f4:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if ((char)param_1[1] != '\0') {
      uVar3 = 0;
LAB_0164c2d4:
      local_1c = (undefined1)uVar3;
      local_20 = param_1;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_20,&DAT_018acae0,&DAT_018acb50);
    }
    param_1[2] = param_3;
    param_1[3] = param_4;
  }
  else {
    uVar3 = FUN_015bf3f8();
    uVar3 = uVar3 ^ 1;
    if ((char)param_1[1] != '\0') goto LAB_0164c2d4;
    param_1[2] = param_3;
    param_1[3] = param_4;
    if (uVar3 != 0) goto LAB_0164c234;
  }
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    iVar2 = FUN_015bf3f8();
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
LAB_0164c234:
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 0;
  if (iVar2 == 2) {
    software_interrupt(0);
    FUN_016d3496(param_1,0x81,1,param_5);
    return;
  }
  return;
}

