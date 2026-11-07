// FUN_013c4a34 @ 013c4a34 size=408 calls_out=3 calls_in=0
// strings: 

void FUN_013c4a34(uint *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  uint local_28;
  undefined4 *local_24;
  
  if (param_1[2] == 0) {
    uVar5 = param_1[3];
    bVar7 = 0xffffffe < uVar5;
    bVar6 = uVar5 == 0xfffffff;
    uVar1 = uVar5 * 0x10;
    if (uVar5 < 0x10000000) {
      bVar7 = 0x7ffffffb < uVar1;
      bVar6 = uVar1 == 0x7ffffffc;
    }
    if (bVar7 && !bVar6) goto LAB_013c4a78;
    if (uVar1 == 0) {
      local_24 = (undefined4 *)&DAT_00000004;
      local_28 = 0;
    }
    else {
      local_24 = (undefined4 *)thunk_FUN_016d4a50(uVar1);
      local_28 = uVar5;
      if (local_24 == (undefined4 *)0x0) goto LAB_013c4ae0;
    }
    if (uVar5 < 2) goto LAB_013c4b70;
    iVar4 = uVar5 - 1;
    puVar2 = local_24;
    do {
      *(undefined2 *)(puVar2 + 3) = 0;
      iVar4 = iVar4 + -1;
      puVar2[2] = 0;
      *(undefined2 *)(puVar2 + 1) = 0;
      puVar3 = puVar2 + 4;
      *puVar2 = 0;
      puVar2 = puVar3;
      uVar1 = uVar5;
    } while (iVar4 != 0);
LAB_013c4b68:
  }
  else {
    uVar1 = (ushort)param_1[4] + 1;
    *(short *)(param_1 + 4) = (short)uVar1;
    if ((uVar1 & 0x10000) == 0) {
      return;
    }
    uVar5 = param_1[3];
    bVar7 = 0xffffffe < uVar5;
    bVar6 = uVar5 == 0xfffffff;
    uVar1 = uVar5 * 0x10;
    if (uVar5 < 0x10000000) {
      bVar7 = 0x7ffffffb < uVar1;
      bVar6 = uVar1 == 0x7ffffffc;
    }
    if (bVar7 && !bVar6) {
LAB_013c4a78:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0);
    }
    if (uVar1 == 0) {
      local_24 = (undefined4 *)&DAT_00000004;
      local_28 = 0;
    }
    else {
      local_24 = (undefined4 *)thunk_FUN_016d4a50(uVar1);
      local_28 = uVar5;
      if (local_24 == (undefined4 *)0x0) {
LAB_013c4ae0:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar1);
      }
    }
    if (1 < uVar5) {
      iVar4 = uVar5 - 1;
      puVar2 = local_24;
      do {
        *(undefined2 *)(puVar2 + 3) = 0;
        iVar4 = iVar4 + -1;
        puVar2[2] = 0;
        *(undefined2 *)(puVar2 + 1) = 0;
        puVar3 = puVar2 + 4;
        *puVar2 = 0;
        puVar2 = puVar3;
        uVar1 = uVar5;
      } while (iVar4 != 0);
      goto LAB_013c4b68;
    }
LAB_013c4b70:
    uVar1 = 1;
    puVar3 = local_24;
    if (uVar5 == 0) {
      uVar1 = 0;
      goto LAB_013c4b90;
    }
  }
  *(undefined2 *)(puVar3 + 3) = 0;
  puVar3[2] = 0;
  *(undefined2 *)(puVar3 + 1) = 0;
  *puVar3 = 0;
LAB_013c4b90:
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  *param_1 = local_28;
  param_1[1] = (uint)local_24;
  param_1[2] = uVar1;
  return;
}

