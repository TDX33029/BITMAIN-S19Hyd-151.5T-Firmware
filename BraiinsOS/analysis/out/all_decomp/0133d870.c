// FUN_0133d870 @ 0133d870 size=568 calls_out=9 calls_in=6
// strings: 

undefined4 * FUN_0133d870(undefined4 *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined1 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_25;
  
  if (*(char *)(param_1 + 1) == '\0') {
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    local_44 = 0;
    local_48 = (undefined1 *)0x0;
    iVar10 = FUN_0100fa18(&local_48,0x20);
    uVar9 = local_2c;
    uVar8 = local_30;
    uVar7 = local_34;
    uVar6 = local_38;
    uVar5 = local_3c;
    uVar4 = local_40;
    uVar3 = local_44;
    puVar2 = local_48;
    if (iVar10 != 0) {
      piVar12 = (int *)thunk_FUN_016d4a50(4);
      if (piVar12 != (int *)0x0) {
        *piVar12 = iVar10;
        FUN_0133dac8(piVar12,&DAT_01891fcc);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,4);
    }
    DataMemoryBarrier(0xb);
    if (DAT_018d8944 == 0) {
      puVar11 = (undefined4 *)thunk_FUN_016d4a50(0x158);
    }
    else {
      local_25 = 1;
      local_48 = &local_25;
      FUN_015eedc4(&DAT_018d8944,0,&local_48,&DAT_01891f68,&DAT_01891f7c);
      puVar11 = (undefined4 *)thunk_FUN_016d4a50(0x158);
    }
    if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x158);
    }
    *puVar11 = 1;
    puVar11[1] = 1;
    FUN_016dd606(puVar11 + 2,0,0x100);
    puVar11[0x50] = 0x10000;
    puVar11[0x51] = 0;
    puVar11[0x52] = 0x10000;
    puVar11[0x44] = puVar2;
    puVar11[0x45] = uVar3;
    puVar11[0x46] = uVar4;
    puVar11[0x48] = uVar6;
    puVar11[0x49] = uVar7;
    puVar11[0x4b] = uVar9;
    puVar11[0x42] = 0x40;
    puVar11[0x53] = 0;
    cVar1 = *(char *)(param_1 + 1);
    piVar12 = (int *)*param_1;
    puVar11[0x47] = uVar5;
    puVar11[0x4a] = uVar8;
    puVar11[0x4c] = 0;
    puVar11[0x4d] = 0;
    puVar11[0x4e] = 0;
    puVar11[0x4f] = 0;
    puVar11[0x54] = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = puVar11;
    if (cVar1 != '\x01') {
      if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_018ae210);
      }
      FUN_015e8e6c(param_1,&LAB_0133f268);
      return param_1;
    }
    iVar10 = *piVar12;
    *piVar12 = iVar10 + -1;
    if (iVar10 + -1 == 0) {
      FUN_0133db64(piVar12);
      return param_1;
    }
  }
  else if (*(char *)(param_1 + 1) != '\x01') {
    return (undefined4 *)0x0;
  }
  return param_1;
}

