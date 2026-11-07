// FUN_00aa1f0c @ 00aa1f0c size=476 calls_out=5 calls_in=2
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_00aa1f0c(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 *local_30 [4];
  
  iVar7 = *param_2;
  if (iVar7 == 0) {
    *param_1 = 0x80000014;
    return;
  }
  puVar8 = (undefined4 *)((uint)local_30 | 4);
  do {
    piVar9 = *(int **)(iVar7 + 0xc);
    puVar2 = (undefined4 *)piVar9[4];
    DataMemoryBarrier(0xb);
    if (puVar2 == (undefined4 *)0x0) {
      puVar10 = (undefined1 *)0x80000015;
      DataMemoryBarrier(0xb);
      if (*(int **)(iVar7 + 8) == piVar9) {
        puVar10 = (undefined1 *)0x80000014;
      }
      puVar4 = puVar10 + 0x7fffffed;
      if (puVar10 < &DAT_80000013) {
        puVar4 = (undefined1 *)0x0;
      }
    }
    else {
      *(undefined4 **)(iVar7 + 0xc) = puVar2;
      if (*piVar9 != -0x7fffffec) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: (*tail).value.is_none()",0x29,&DAT_018a4e90);
      }
      puVar10 = (undefined1 *)*puVar2;
      if (puVar10 == (undefined1 *)0x80000014) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: (*next).value.is_some()",0x29,&DAT_018a4ea0);
      }
      *puVar2 = 0x80000014;
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      iVar3 = *piVar9;
      *puVar8 = puVar2[1];
      puVar8[1] = uVar5;
      puVar8[2] = uVar6;
      local_30[0] = puVar10;
      if (iVar3 != -0x7fffffec) {
        FUN_00aa2104(piVar9);
      }
      thunk_FUN_016d3fb4(piVar9);
      local_40 = *puVar8;
      uStack_3c = puVar8[1];
      uStack_38 = puVar8[2];
      puVar4 = puVar10 + 0x7fffffed;
      if (puVar10 < &DAT_80000013) {
        puVar4 = (undefined1 *)0x0;
      }
    }
    if (puVar4 != (undefined1 *)0x2) {
      if ((puVar4 == (undefined1 *)0x0) && (puVar10 != (undefined1 *)0x80000014)) {
        if (*param_2 != 0) {
          piVar9 = (int *)(*param_2 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar1);
          *piVar9 = *piVar9 + -1;
          DataMemoryBarrier(0xb);
        }
        *param_1 = puVar10;
        param_1[1] = local_40;
        param_1[2] = uStack_3c;
        param_1[3] = uStack_38;
        return;
      }
      DataMemoryBarrier(0xb);
      if (*(int *)(*param_2 + 0x10) != 0) {
        *param_1 = 0x80000015;
        return;
      }
      piVar9 = (int *)*param_2;
      if (piVar9 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar9;
          bVar1 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar1);
        *piVar9 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00f36f34(*param_2);
        }
      }
      *param_1 = 0x80000014;
      *param_2 = 0;
      return;
    }
    FUN_016da3a8();
  } while( true );
}

