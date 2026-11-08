// FUN_01639074 @ 01639074 size=368 calls_out=8 calls_in=10
// strings: `EnterGuard` values dropped out of order. Guards returned by `tokio::runtime::Handle::enter()` must be dropped in the reverse order as they were acquired.

void FUN_01639074(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int extraout_r2;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar8 = thunk_FUN_016de0ee(param_1,param_2,0x40);
  iVar3 = (int)((ulonglong)uVar8 >> 0x20);
  piVar5 = (int *)((int)uVar8 + extraout_r2);
  if ((char)piVar5[0xe] != '\x01') {
    if ((char)piVar5[0xe] == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    FUN_015e8e6c(piVar5,FUN_01655ec4);
    *(undefined1 *)(piVar5 + 0xe) = 1;
  }
  if (piVar5[3] != iVar3) {
    if (((DAT_018dd988 & 0x7fffffff) == 0) || (iVar3 = FUN_015bf3f8(), iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("`EnterGuard` values dropped out of order. Guards returned by `tokio::runtime::Handle::enter()` must be dropped in the reverse order as they were acquired."
                   ,0x135,&DAT_018ac63c);
    }
    return;
  }
  iVar6 = *param_1;
  iVar7 = param_1[1];
  iVar4 = *piVar5;
  *param_1 = 2;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_018ac62c);
  }
  *piVar5 = -1;
  if (piVar5[1] != 2) {
    if (piVar5[1] == 0) {
      piVar2 = (int *)piVar5[2];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659344(piVar5[2]);
      }
    }
    else {
      piVar2 = (int *)piVar5[2];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_016586fc(piVar5[2]);
      }
    }
  }
  piVar5[1] = iVar6;
  piVar5[2] = iVar7;
  piVar5[3] = iVar3 + -1;
  *piVar5 = *piVar5 + 1;
  return;
}

