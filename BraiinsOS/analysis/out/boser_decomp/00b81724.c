// FUN_00b81724 @ 00b81724 size=324 calls_out=9 calls_in=1
// strings: waker missing

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b81724(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_20 [3];
  
  uVar2 = FUN_019d8b4c();
  if ((uVar2 & 8) == 0) {
    local_20[0] = 2;
    FUN_00b92048(param_1 + 0x18,local_20);
  }
  else if ((uVar2 & 0x10) != 0) {
    if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(*(int *)(param_1 + 0x48) + 8))(*(undefined4 *)(param_1 + 0x4c));
    uVar2 = FUN_019d8c50(param_1);
    if ((uVar2 & 8) == 0) {
      if (*(int *)(param_1 + 0x48) != 0) {
        (**(code **)(*(int *)(param_1 + 0x48) + 0xc))(*(undefined4 *)(param_1 + 0x4c));
      }
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  iVar3 = FUN_019d8bc0(param_1,1);
  if (iVar3 == 0) {
    return;
  }
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar1;
      bVar4 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar4);
    *piVar1 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    }
  }
  if (*(int *)(param_1 + 0x28) == 1) {
    bVar4 = *(int *)(param_1 + 0x30) != 0 || *(int *)(param_1 + 0x34) != 0;
    iVar3 = 0;
    if (bVar4) {
      iVar3 = *(int *)(param_1 + 0x38);
    }
    if (bVar4 && iVar3 != 0) {
      FUN_01443048(iVar3,*(undefined4 *)(param_1 + 0x3c));
    }
  }
  FUN_014b1410(param_1 + 0x40);
  thunk_FUN_01be4678(param_1);
  return;
}

