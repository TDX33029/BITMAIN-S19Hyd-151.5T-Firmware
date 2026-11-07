// FUN_019a2ef8 @ 019a2ef8 size=244 calls_out=4 calls_in=0
// strings: 

void FUN_019a2ef8(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int iVar7;
  int extraout_r2;
  uint uVar8;
  int *piVar9;
  undefined8 uVar10;
  
  uVar10 = thunk_FUN_01bee35a(param_1,8);
  piVar9 = (int *)((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20));
  iVar2 = *piVar9;
  while( true ) {
    if (iVar2 != 0) {
      FUN_01306fc8(&DAT_01d2783c);
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xfdee,0x19a2f64);
      (*pcVar6)();
    }
    *piVar9 = -1;
    if (piVar9[3] == 0) break;
    iVar2 = piVar9[3] + -1;
    piVar9[3] = iVar2;
    puVar5 = (undefined4 *)(piVar9[2] + iVar2 * 8);
    uVar3 = *puVar5;
    pcVar6 = (code *)puVar5[1];
    *piVar9 = 0;
    (*pcVar6)(uVar3);
    iVar2 = *piVar9;
  }
  iVar7 = 0;
  iVar2 = 0;
  if (piVar9[1] != 0) {
    thunk_FUN_01be4678(piVar9[2],0);
    iVar2 = *piVar9;
    iVar7 = iVar2 + 1;
  }
  piVar9[3] = 0;
  uVar10 = thunk_FUN_01bee35a(iVar2,iVar7,0x240);
  puVar4 = (uint *)((int)uVar10 + extraout_r2);
  uVar8 = *puVar4;
  *piVar9 = (int)((ulonglong)uVar10 >> 0x20);
  piVar9[1] = 0;
  piVar9[2] = 4;
  if (2 < uVar8) {
    *puVar4 = 2;
    piVar9 = (int *)(uVar8 - 8);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar9;
      bVar1 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar1);
    *piVar9 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019a2ffc();
      return;
    }
  }
  return;
}

