// FUN_01537388 @ 01537388 size=460 calls_out=4 calls_in=1
// strings: 

void FUN_01537388(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  
  piVar2 = (int *)param_1[0x40];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01561b24(param_1[0x40]);
  }
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)((int)param_1 + 0xd1) = 0;
  *(undefined1 *)((int)param_1 + 0xd2) = 0;
  *(undefined1 *)((int)param_1 + 0xd3) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)((int)param_1 + 0xd5) = 0;
  *(undefined1 *)((int)param_1 + 0xd6) = 0;
  *(undefined1 *)((int)param_1 + 0xd7) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined1 *)((int)param_1 + 0xd9) = 0;
  *(undefined1 *)((int)param_1 + 0xda) = 0;
  *(undefined1 *)((int)param_1 + 0xdb) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined1 *)((int)param_1 + 0xdd) = 0;
  *(undefined1 *)((int)param_1 + 0xde) = 0;
  *(undefined1 *)((int)param_1 + 0xdf) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)((int)param_1 + 0xe1) = 0;
  *(undefined1 *)((int)param_1 + 0xe2) = 0;
  *(undefined1 *)((int)param_1 + 0xe3) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined1 *)((int)param_1 + 0xe5) = 0;
  *(undefined1 *)((int)param_1 + 0xe6) = 0;
  *(undefined1 *)((int)param_1 + 0xe7) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)((int)param_1 + 0xe9) = 0;
  *(undefined1 *)((int)param_1 + 0xea) = 0;
  *(undefined1 *)((int)param_1 + 0xeb) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)((int)param_1 + 0xed) = 0;
  *(undefined1 *)((int)param_1 + 0xee) = 0;
  *(undefined1 *)((int)param_1 + 0xef) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)((int)param_1 + 0xf1) = 0;
  *(undefined1 *)((int)param_1 + 0xf2) = 0;
  *(undefined1 *)((int)param_1 + 0xf3) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((int)param_1 + 0xf5) = 0;
  *(undefined1 *)((int)param_1 + 0xf6) = 0;
  *(undefined1 *)((int)param_1 + 0xf7) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)((int)param_1 + 0xf9) = 0;
  *(undefined1 *)((int)param_1 + 0xfa) = 0;
  *(undefined1 *)((int)param_1 + 0xfb) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)((int)param_1 + 0xfd) = 0;
  *(undefined1 *)((int)param_1 + 0xfe) = 0;
  *(undefined1 *)((int)param_1 + 0xff) = 0;
  if (param_1[0xb] != -0x80000000) {
    FUN_015376c0(param_1 + 2);
  }
  if (((char)param_1[0x41] == '\0') && ((param_1[0x42] & 0x7fffffffU) != 0)) {
    thunk_FUN_016d3fb4(param_1[0x43]);
  }
  puVar5 = (undefined4 *)param_1[0x4c];
  iVar3 = param_1[0x4b];
  pcVar4 = (code *)*puVar5;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(iVar3);
  }
  if (puVar5[1] != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  if ((param_1[0x46] & 0x7fffffffU) == 0) {
    piVar2 = (int *)*param_1;
  }
  else {
    thunk_FUN_016d3fb4(param_1[0x47]);
    piVar2 = (int *)*param_1;
  }
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(*param_1);
      return;
    }
  }
  return;
}

