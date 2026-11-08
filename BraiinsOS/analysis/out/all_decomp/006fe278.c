// FUN_006fe278 @ 006fe278 size=220 calls_out=4 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006fe278(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  double dVar4;
  ulonglong uVar5;
  undefined4 in_stack_00000000;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  uVar5 = FUN_007143c8();
  piVar2 = (int *)uVar5;
  if (*(char *)((int)piVar2 + 0x5b) == '\x01') {
    dVar4 = (double)FUN_01845f30(piVar2[4],piVar2[5]);
    FUN_006fdfd0(SUB84(dVar4 / 500.0,0),&local_20);
    *param_1 = local_20;
    param_1[1] = uStack_1c;
    param_1[2] = local_18;
  }
  else {
    param_1[2] = &DAT_3b9aca00;
  }
  if ((((uVar5 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
    *(undefined1 *)(piVar2 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = 0;
  if (iVar3 == 2) {
    software_interrupt(0);
    FUN_016d3496(piVar2,0x81,1,in_stack_00000000);
    return;
  }
  return;
}

