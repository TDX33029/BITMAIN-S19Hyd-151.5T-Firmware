// FUN_009967a0 @ 009967a0 size=180 calls_out=4 calls_in=0
// strings: 

void FUN_009967a0(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = param_1 + 0x11;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 != 1) goto LAB_0099681c;
  piVar3 = param_1 + 4;
  if ((char)*piVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(piVar3);
    if (!bVar1) goto LAB_009967f8;
    *(char *)piVar3 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_009967f8:
    FUN_01280da8(piVar3);
  }
  FUN_0128236c(piVar3);
  *(undefined1 *)(param_1 + 0xb) = 1;
  FUN_0072a978(param_1 + 2,piVar3);
LAB_0099681c:
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(param_1);
    return;
  }
  return;
}

