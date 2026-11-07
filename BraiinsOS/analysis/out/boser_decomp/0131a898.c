// FUN_0131a898 @ 0131a898 size=260 calls_out=4 calls_in=1
// strings: 

void FUN_0131a898(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  int local_428;
  int local_424;
  undefined1 auStack_420 [1032];
  
  FUN_0131a830(param_1 + 0x18);
  puVar5 = param_1 + 8;
LAB_01319e9c:
  while( true ) {
    uVar2 = *param_1;
    DataMemoryBarrier(0xb);
    uVar3 = *(uint *)((uVar2 & 0xfffffffc) + 0x408);
    DataMemoryBarrier(0xb);
    piVar4 = (int *)(uVar3 & 0xfffffffc);
    if (piVar4 == (int *)0x0) break;
    if (*param_1 == uVar2) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(param_1);
        if (bVar1) {
          *param_1 = uVar3;
          if (uVar2 != *puVar5) goto LAB_01319f20;
          if (*puVar5 != uVar2) goto LAB_01319f1c;
          DataMemoryBarrier(0xb);
          goto LAB_01319f04;
        }
      } while (*param_1 == uVar2);
    }
    ClearExclusiveLocal();
  }
LAB_01319f58:
  thunk_FUN_01be4678(*param_1 & 0xfffffffc);
  return;
  while (*puVar5 == uVar2) {
LAB_01319f04:
    bVar1 = (bool)hasExclusiveAccess(puVar5);
    if (bVar1) {
      *puVar5 = uVar3;
      goto LAB_01319f20;
    }
  }
LAB_01319f1c:
  ClearExclusiveLocal();
LAB_01319f20:
  thunk_FUN_01be4678(uVar2 & 0xfffffffc);
  iVar6 = *piVar4;
  local_424 = piVar4[1];
  local_428 = iVar6;
  FUN_01bed4e2(auStack_420,piVar4 + 2,0x400);
  if (iVar6 == 0) goto LAB_01319f58;
  FUN_01319f6c(&local_428);
  goto LAB_01319e9c;
}

