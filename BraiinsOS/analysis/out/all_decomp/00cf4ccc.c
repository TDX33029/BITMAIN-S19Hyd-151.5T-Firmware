// FUN_00cf4ccc @ 00cf4ccc size=596 calls_out=5 calls_in=2
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_00cf4ccc(char *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined1 local_31;
  undefined3 uStack_30;
  char local_2c [12];
  
  iVar10 = *param_2;
  if (iVar10 == 0) {
    *param_1 = '\x06';
    return;
  }
  puVar9 = (undefined4 *)((uint)local_2c | 1);
  while( true ) {
    pcVar4 = *(char **)(iVar10 + 0xc);
    pcVar6 = *(char **)(pcVar4 + 0xc);
    DataMemoryBarrier(0xb);
    if (pcVar6 != (char *)0x0) break;
    DataMemoryBarrier(0xb);
    if (*(char **)(iVar10 + 8) == pcVar4) {
      DataMemoryBarrier(0xb);
      if (*(int *)(*param_2 + 0x10) != 0) {
        *param_1 = '\a';
        return;
      }
      piVar5 = (int *)*param_2;
      if (piVar5 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar5;
          bVar3 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar3);
        *piVar5 = iVar10 + -1;
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f23b4(*param_2);
        }
      }
      *param_1 = '\x06';
      *param_2 = 0;
      return;
    }
    FUN_016da3a8();
  }
  *(char **)(iVar10 + 0xc) = pcVar6;
  if (*pcVar4 != '\x06') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*tail).value.is_none()",0x29,&DAT_018a4e90);
  }
  cVar1 = *pcVar6;
  if (cVar1 == '\x06') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*next).value.is_some()",0x29,&DAT_018a4ea0);
  }
  uVar7 = *(undefined4 *)(pcVar6 + 1);
  *pcVar6 = '\x06';
  uVar8 = *(undefined4 *)(pcVar6 + 5);
  cVar2 = *pcVar4;
  *(undefined4 *)((int)puVar9 + 7) = *(undefined4 *)(pcVar6 + 8);
  puVar9[1] = uVar8;
  *puVar9 = uVar7;
  local_2c[0] = cVar1;
  if (cVar2 != '\x06') {
    if (cVar2 == '\x02') {
      pcVar6 = pcVar4 + 8;
      piVar5 = *(int **)pcVar6;
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar5;
        bVar3 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar3);
      *piVar5 = iVar10 + -1;
    }
    else if (cVar2 == '\x03') {
      pcVar6 = pcVar4 + 4;
      piVar5 = *(int **)pcVar6;
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar5;
        bVar3 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar3);
      *piVar5 = iVar10 + -1;
    }
    else {
      if (cVar2 != '\x04') goto LAB_00cf4e8c;
      pcVar6 = pcVar4 + 4;
      piVar5 = *(int **)pcVar6;
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar5;
        bVar3 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar3);
      *piVar5 = iVar10 + -1;
    }
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_009ba06c(*(undefined4 *)pcVar6);
    }
  }
LAB_00cf4e8c:
  thunk_FUN_016d3fb4(pcVar4);
  uVar7 = *puVar9;
  uVar8 = puVar9[1];
  uStack_30 = (undefined3)((uint)*(undefined4 *)((int)puVar9 + 7) >> 8);
  if (*param_2 != 0) {
    piVar5 = (int *)(*param_2 + 0x10);
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar3);
    *piVar5 = *piVar5 + -1;
    DataMemoryBarrier(0xb);
  }
  local_31 = (undefined1)((uint)uVar8 >> 0x18);
  *(undefined4 *)(param_1 + 5) = uVar8;
  *param_1 = cVar1;
  *(undefined4 *)(param_1 + 1) = uVar7;
  *(uint *)(param_1 + 8) = CONCAT31(uStack_30,local_31);
  return;
}

