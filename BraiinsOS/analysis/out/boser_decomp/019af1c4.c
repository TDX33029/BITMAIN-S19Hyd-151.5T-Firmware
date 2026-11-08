// FUN_019af1c4 @ 019af1c4 size=116 calls_out=3 calls_in=1
// strings: 

void FUN_019af1c4(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019a2ffc(*param_1);
  }
  uVar5 = param_1[1];
  puVar6 = (undefined4 *)param_1[2];
  pcVar4 = (code *)*puVar6;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(uVar5);
  }
  if (puVar6[1] != 0) {
    thunk_FUN_01be4678(uVar5);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

