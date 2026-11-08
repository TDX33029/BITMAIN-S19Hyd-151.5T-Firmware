// FUN_00795f68 @ 00795f68 size=192 calls_out=5 calls_in=1
// strings: waker missing

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00795f68(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_20 [3];
  
  uVar2 = FUN_019d8b4c();
  if ((uVar2 & 8) == 0) {
    local_20[0] = 2;
    FUN_00b920f4(param_1 + 0x18,local_20);
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
  piVar4 = *(int **)(param_1 + 0x18);
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    }
  }
  FUN_00b815c8(param_1 + 0x28);
  FUN_014b1410(param_1 + 0x40);
  thunk_FUN_01be4678(param_1);
  return;
}

