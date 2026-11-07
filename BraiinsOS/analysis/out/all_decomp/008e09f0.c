// FUN_008e09f0 @ 008e09f0 size=336 calls_out=3 calls_in=0
// strings: BUG: poisoned lock

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008e09f0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *local_20;
  undefined1 local_1c;
  
  do {
    if (*param_2 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_2);
      goto LAB_008e0a1c;
    }
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = 1;
  DataMemoryBarrier(0xb);
LAB_008e0a1c:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if ((char)param_2[1] != '\0') {
      uVar2 = 0;
LAB_008e0b10:
      local_1c = (undefined1)uVar2;
      local_20 = param_2;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("BUG: poisoned lock",0x12,&local_20,&DAT_01865a54,&DAT_018654c4);
    }
    iVar3 = param_2[3];
    iVar4 = param_2[4];
    iVar5 = param_2[5];
    *param_1 = param_2[2];
    param_1[1] = iVar3;
    param_1[2] = iVar4;
    param_1[3] = iVar5;
  }
  else {
    uVar2 = FUN_015bf3f8();
    uVar2 = uVar2 ^ 1;
    if ((char)param_2[1] != '\0') goto LAB_008e0b10;
    iVar3 = param_2[3];
    iVar4 = param_2[4];
    iVar5 = param_2[5];
    *param_1 = param_2[2];
    param_1[1] = iVar3;
    param_1[2] = iVar4;
    param_1[3] = iVar5;
    if (uVar2 != 0) goto LAB_008e0a60;
  }
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    iVar3 = FUN_015bf3f8();
    if (iVar3 == 0) {
      *(undefined1 *)(param_2 + 1) = 1;
    }
  }
LAB_008e0a60:
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_2;
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = 0;
  if (iVar3 == 2) {
    software_interrupt(0);
    FUN_016d3496(param_2,0x81,1,param_5);
    return;
  }
  return;
}

