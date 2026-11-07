// FUN_00d42e10 @ 00d42e10 size=192 calls_out=5 calls_in=1
// strings: waker missing

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d42e10(int param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_80 [27];
  
  uVar3 = FUN_019d8b4c();
  if ((uVar3 & 8) == 0) {
    local_80[0] = 2;
    FUN_00f32304(param_1 + 0x18,local_80);
  }
  else if ((uVar3 & 0x10) != 0) {
    if (*(int *)(param_1 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(*(int *)(param_1 + 0xa8) + 8))(*(undefined4 *)(param_1 + 0xac));
    uVar3 = FUN_019d8c50(param_1);
    if ((uVar3 & 8) == 0) {
      if (*(int *)(param_1 + 0xa8) != 0) {
        (**(code **)(*(int *)(param_1 + 0xa8) + 0xc))(*(undefined4 *)(param_1 + 0xac));
      }
      *(undefined4 *)(param_1 + 0xa8) = 0;
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
  FUN_00d38510(param_1 + 0x28);
  FUN_014b1410(param_1 + 0xa0);
  thunk_FUN_01be4678(param_1);
  return;
}

