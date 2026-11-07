// FUN_008765cc @ 008765cc size=752 calls_out=8 calls_in=4
// strings: 

longlong FUN_008765cc(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint local_30 [3];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x15)) {
  case 0:
    iVar4 = 1;
    uVar9 = *param_1;
    uVar8 = param_1[1];
    uVar7 = param_1[2];
    uVar5 = param_1[3];
    *(undefined1 *)((int)param_1 + 0x55) = 1;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    puVar1[1] = uVar8;
    param_1[4] = 1;
    uVar8 = 1;
    *puVar1 = uVar9;
    puVar1[2] = uVar7;
    *(undefined1 *)((int)param_1 + 0x55) = 0;
    param_1[5] = puVar1;
    param_1[6] = 1;
    param_1[7] = uVar5;
    *(undefined1 *)(param_1 + 0x14) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01861b30);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01861b30);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x14)) {
    case 0:
      uVar8 = param_1[4];
      puVar1 = (undefined4 *)param_1[5];
      iVar4 = param_1[6];
      uVar5 = param_1[7];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01861a60);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01861a60);
    case 3:
      goto switchD_0087666c_caseD_3;
    }
  }
  param_1[8] = uVar5;
  param_1[9] = puVar1;
  puVar2 = puVar1 + iVar4 * 3;
  param_1[10] = puVar1;
  param_1[0xb] = uVar8;
  param_1[0xc] = puVar2;
  if (puVar1 != puVar2) {
    do {
      uVar5 = puVar1[1];
      uVar8 = puVar1[2];
      param_1[0xd] = *puVar1;
      param_1[0xe] = uVar5;
      param_1[0xf] = uVar8;
      puVar3 = puVar1 + 3;
      param_1[10] = puVar3;
      if (param_1[0xd] == -0x80000000) goto LAB_0087682c;
      uVar5 = puVar1[1];
      uVar8 = puVar1[2];
      param_1[0x10] = *puVar1;
      param_1[0x11] = uVar5;
      param_1[0x12] = uVar8;
      param_1[0x13] = param_1[8];
switchD_0087666c_caseD_3:
      FUN_008743a0(local_30,param_1 + 0x10,param_2);
      uVar6 = local_30[0];
      if ((char)local_30[0] == '\x06') {
        *(undefined1 *)(param_1 + 0x14) = 3;
        *(undefined1 *)(param_1 + 0x15) = 3;
        return CONCAT44(param_2,1);
      }
      if ((param_1[0x10] & 0x7fffffff) == 0) {
        if ((local_30[0] & 0xff) == 5) goto LAB_008767f4;
LAB_00876884:
        uVar6 = FUN_0080ad90(local_30);
        puVar1 = (undefined4 *)(param_1[10] + 4);
        for (iVar4 = ((uint)(param_1[0xc] - param_1[10]) >> 2) * -0x55555555; iVar4 != 0;
            iVar4 = iVar4 + -1) {
          if (puVar1[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar1);
          }
          puVar1 = puVar1 + 3;
        }
        if (param_1[0xb] == 0) goto LAB_008768fc;
        goto LAB_008768f4;
      }
      thunk_FUN_016d3fb4(param_1[0x11]);
      if ((uVar6 & 0xff) != 5) goto LAB_00876884;
LAB_008767f4:
      puVar1 = (undefined4 *)param_1[10];
      puVar2 = (undefined4 *)param_1[0xc];
    } while (puVar1 != puVar2);
  }
  param_1[0xd] = 0x80000000;
  puVar3 = puVar1;
LAB_0087682c:
  puVar1 = puVar3 + 1;
  for (iVar4 = ((uint)((int)puVar2 - (int)puVar3) >> 2) * -0x55555555; iVar4 != 0;
      iVar4 = iVar4 + -1) {
    if (puVar1[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar1);
    }
    puVar1 = puVar1 + 3;
  }
  uVar6 = 0;
  if (param_1[0xb] != 0) {
LAB_008768f4:
    thunk_FUN_016d3fb4(param_1[9]);
  }
LAB_008768fc:
  *(undefined1 *)(param_1 + 0x14) = 1;
  FUN_00875460(param_1 + 4);
  *(undefined2 *)(param_1 + 0x15) = 1;
  return (ulonglong)uVar6 << 0x20;
}

