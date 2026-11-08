// FUN_0149d160 @ 0149d160 size=308 calls_out=7 calls_in=0
// strings: 

void FUN_0149d160(int *param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (*param_1 == 4 && param_1[1] == 0) {
    return;
  }
  puVar6 = (undefined4 *)param_1[0x50];
  iVar5 = param_1[0x4f];
  pcVar3 = (code *)*puVar6;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(iVar5);
  }
  if (puVar6[1] != 0) {
    thunk_FUN_016d3fb4(iVar5);
  }
  piVar2 = (int *)param_1[0x55];
  if (((uint)piVar2 & 1) == 0) {
    piVar4 = piVar2 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 != 1) goto LAB_0149d228;
    DataMemoryBarrier(0xb);
    if (*piVar2 != 0) {
      thunk_FUN_016d3fb4(piVar2[1]);
    }
  }
  else {
    if (param_1[0x54] + ((uint)piVar2 >> 5) == 0) goto LAB_0149d228;
    piVar2 = (int *)(param_1[0x52] - ((uint)piVar2 >> 5));
  }
  thunk_FUN_016d3fb4(piVar2);
LAB_0149d228:
  if (param_1[0x42] != 0) {
    thunk_FUN_016d3fb4(param_1[0x43]);
  }
  FUN_014f059c(param_1 + 0x46);
  if (param_1[0x46] != 0) {
    thunk_FUN_016d3fb4(param_1[0x47]);
  }
  FUN_0064bf9c(param_1);
  if (param_1[0x58] != 2) {
    FUN_0147c310();
  }
  FUN_0149d378(param_1 + 0x5b);
  FUN_0143a0bc(param_1 + 0x5e);
  FUN_0148c594(param_1[99]);
  return;
}

