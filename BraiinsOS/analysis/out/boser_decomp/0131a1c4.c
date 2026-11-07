// FUN_0131a1c4 @ 0131a1c4 size=352 calls_out=5 calls_in=3
// strings: 

void FUN_0131a1c4(uint *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  int local_440;
  int local_43c;
  undefined1 auStack_438 [1028];
  undefined1 *local_34;
  uint local_30;
  
  iVar2 = FUN_0131a328();
  iVar8 = *param_2;
  puVar6 = param_1 + 8;
  iVar5 = 0;
LAB_0131a1f4:
  uVar3 = *param_1;
  DataMemoryBarrier(0xb);
  uVar4 = *(uint *)((uVar3 & 0xfffffffc) + 0x408);
  DataMemoryBarrier(0xb);
  piVar7 = (int *)(uVar4 & 0xfffffffc);
  if (piVar7 == (int *)0x0) {
    return;
  }
  iVar5 = iVar5 + 1;
  do {
    if ((int)(iVar2 - (piVar7[0x101] & 0xfffffffeU)) < 4) {
      return;
    }
    if (*param_1 == uVar3) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(param_1);
        if (bVar1) {
          *param_1 = uVar4;
          if (uVar3 != *puVar6) goto LAB_0131a2ac;
          if (*puVar6 != uVar3) goto LAB_0131a2a8;
          DataMemoryBarrier(0xb);
          goto LAB_0131a290;
        }
      } while (*param_1 == uVar3);
    }
    ClearExclusiveLocal();
    uVar3 = *param_1;
    DataMemoryBarrier(0xb);
    uVar4 = *(uint *)((uVar3 & 0xfffffffc) + 0x408);
    DataMemoryBarrier(0xb);
    piVar7 = (int *)(uVar4 & 0xfffffffc);
    if (piVar7 == (int *)0x0) {
      return;
    }
  } while( true );
  while (*puVar6 == uVar3) {
LAB_0131a290:
    bVar1 = (bool)hasExclusiveAccess(puVar6);
    if (bVar1) {
      *puVar6 = uVar4;
      goto LAB_0131a2ac;
    }
  }
LAB_0131a2a8:
  ClearExclusiveLocal();
LAB_0131a2ac:
  if (iVar8 == 0) {
    thunk_FUN_01be4678(uVar3 & 0xfffffffc);
  }
  else {
    local_34 = &LAB_0131a5f0;
    local_30 = uVar3;
    FUN_01319ffc(iVar8,&local_34);
  }
  local_440 = *piVar7;
  if (local_440 == 0) {
    return;
  }
  local_43c = piVar7[1];
  FUN_01bed4e2(auStack_438,piVar7 + 2,0x400);
  FUN_01319f6c(&local_440);
  if (iVar5 == 8) {
    return;
  }
  goto LAB_0131a1f4;
}

