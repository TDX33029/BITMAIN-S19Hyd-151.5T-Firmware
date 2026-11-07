// FUN_00eb5a38 @ 00eb5a38 size=292 calls_out=8 calls_in=3
// strings: assertion failed: c.runtime.get().is_entered()

void FUN_00eb5a38(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = thunk_FUN_016de0ee(param_1,0x40);
  iVar4 = (int)uVar7 + (int)((ulonglong)uVar7 >> 0x20);
  iVar5 = param_1[3];
  iVar6 = param_1[4];
  if (*(char *)(iVar4 + 0x38) != '\x01') {
    if (*(char *)(iVar4 + 0x38) == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    FUN_015e8e6c(iVar4,FUN_01655ec4);
    *(undefined1 *)(iVar4 + 0x38) = 1;
  }
  if (*(char *)(iVar4 + 0x32) == '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: c.runtime.get().is_entered()",0x2e,&DAT_018ac65c);
  }
  *(undefined1 *)(iVar4 + 0x32) = 2;
  if ((*(uint *)(iVar4 + 0x24) & 1) == 0) {
    FUN_0164e918();
  }
  iVar3 = param_1[2];
  *(undefined4 *)(iVar4 + 0x24) = 1;
  *(int *)(iVar4 + 0x28) = iVar5;
  *(int *)(iVar4 + 0x2c) = iVar6;
  FUN_01639074(param_1,iVar3);
  if (*param_1 != 2) {
    if (*param_1 == 0) {
      piVar2 = (int *)param_1[1];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659344(param_1[1]);
        return;
      }
    }
    else {
      piVar2 = (int *)param_1[1];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_016586fc(param_1[1]);
        return;
      }
    }
  }
  return;
}

