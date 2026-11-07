// FUN_0170c230 @ 0170c230 size=232 calls_out=0 calls_in=2
// strings: 

void FUN_0170c230(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  
  DataMemoryBarrier(0xb);
  *(undefined1 *)(param_1 + 0x10) = 1;
  piVar2 = param_1 + 0xc;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *(char *)piVar2 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)iVar3 == '\0') {
    iVar3 = param_1[10];
    param_1[10] = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(param_1 + 0xc) = 0;
    DataMemoryBarrier(0xb);
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 4))(param_1[0xb]);
    }
  }
  piVar2 = param_1 + 0xf;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *(char *)piVar2 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)iVar3 == '\0') {
    iVar3 = param_1[0xd];
    param_1[0xd] = 0;
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 0xc))(param_1[0xe]);
    }
    DataMemoryBarrier(0xb);
    *(undefined1 *)(param_1 + 0xf) = 0;
    DataMemoryBarrier(0xb);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar3 + -1;
  if (iVar3 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (*(char *)((int)param_1 + 0x21) != '\x02') {
    iVar3 = param_1[5];
    if (iVar3 != 0) {
      puVar5 = (undefined4 *)param_1[6];
      pcVar4 = (code *)*puVar5;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(iVar3);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_01be4678(iVar3);
      }
    }
    piVar2 = (int *)param_1[7];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[7]);
    }
    FUN_01705050(param_1 + 2);
  }
  if (param_1[10] != 0) {
    (**(code **)(param_1[10] + 0xc))(param_1[0xb]);
  }
  if (param_1[0xd] != 0) {
    (**(code **)(param_1[0xd] + 0xc))(param_1[0xe]);
  }
  if (param_1 != (int *)&DAT_ffffffff) {
    piVar2 = param_1 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(param_1);
      return;
    }
  }
  return;
}

