// FUN_019d7ce0 @ 019d7ce0 size=292 calls_out=9 calls_in=2
// strings: waker missing

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019d7ce0(int param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_30 [7];
  
  uVar3 = FUN_019d8b4c();
  if ((uVar3 & 8) == 0) {
    local_30[0] = 2;
    FUN_019fa7d0(param_1 + 0x18,local_30);
  }
  else if ((uVar3 & 0x10) != 0) {
    if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(*(int *)(param_1 + 0x58) + 8))(*(undefined4 *)(param_1 + 0x5c));
    uVar3 = FUN_019d8c50(param_1);
    if ((uVar3 & 8) == 0) {
      if (*(int *)(param_1 + 0x58) != 0) {
        (**(code **)(*(int *)(param_1 + 0x58) + 0xc))(*(undefined4 *)(param_1 + 0x5c));
      }
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
  iVar4 = FUN_019d8bc0(param_1,1);
  if (iVar4 == 0) {
    return;
  }
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    }
  }
  FUN_019d77cc(param_1 + 0x28);
  FUN_014b1410(param_1 + 0x50);
  thunk_FUN_01be4678(param_1);
  return;
}

