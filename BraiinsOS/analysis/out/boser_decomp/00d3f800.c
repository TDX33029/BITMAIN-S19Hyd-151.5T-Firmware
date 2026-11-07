// FUN_00d3f800 @ 00d3f800 size=212 calls_out=6 calls_in=1
// strings: waker missing

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d3f800(int param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_28 [5];
  
  uVar3 = FUN_019d8b4c();
  if ((uVar3 & 8) == 0) {
    local_28[0] = 2;
    FUN_00f31dec(param_1 + 0x18,local_28);
  }
  else if ((uVar3 & 0x10) != 0) {
    if (*(int *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(*(int *)(param_1 + 0x50) + 8))(*(undefined4 *)(param_1 + 0x54));
    uVar3 = FUN_019d8c50(param_1);
    if ((uVar3 & 8) == 0) {
      if (*(int *)(param_1 + 0x50) != 0) {
        (**(code **)(*(int *)(param_1 + 0x50) + 0xc))(*(undefined4 *)(param_1 + 0x54));
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
  }
  iVar4 = FUN_019dc584(*(undefined4 *)(param_1 + 0x18),param_1);
  uVar5 = 2;
  if (iVar4 == 0) {
    uVar5 = 1;
  }
  iVar4 = FUN_019d8bc0(param_1,uVar5);
  if (iVar4 == 0) {
    return;
  }
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019da640(*(undefined4 *)(param_1 + 0x18));
  }
  FUN_00d311bc(param_1 + 0x28);
  FUN_014b1410(param_1 + 0x48);
  thunk_FUN_01be4678(param_1);
  return;
}

