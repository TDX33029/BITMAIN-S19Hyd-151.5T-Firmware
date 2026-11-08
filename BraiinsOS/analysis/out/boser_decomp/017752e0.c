// FUN_017752e0 @ 017752e0 size=304 calls_out=10 calls_in=1
// strings: waker missing

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_017752e0(int param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_78 [25];
  
  uVar3 = FUN_019d8b4c();
  if ((uVar3 & 8) == 0) {
    local_78[0] = 2;
    FUN_017c0794(param_1 + 0x18,local_78);
  }
  else if ((uVar3 & 0x10) != 0) {
    if (*(int *)(param_1 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(*(int *)(param_1 + 0xa0) + 8))(*(undefined4 *)(param_1 + 0xa4));
    uVar3 = FUN_019d8c50(param_1);
    if ((uVar3 & 8) == 0) {
      if (*(int *)(param_1 + 0xa0) != 0) {
        (**(code **)(*(int *)(param_1 + 0xa0) + 0xc))(*(undefined4 *)(param_1 + 0xa4));
      }
      *(undefined4 *)(param_1 + 0xa0) = 0;
    }
  }
  iVar4 = FUN_019dc744(*(undefined4 *)(param_1 + 0x18),param_1);
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
    FUN_019da4fc(*(undefined4 *)(param_1 + 0x18));
  }
  FUN_017733d4(param_1 + 0x28);
  FUN_014b1410(param_1 + 0x98);
  thunk_FUN_01be4678(param_1);
  return;
}

