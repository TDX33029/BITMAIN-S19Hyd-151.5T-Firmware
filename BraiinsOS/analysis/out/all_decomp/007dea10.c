// FUN_007dea10 @ 007dea10 size=456 calls_out=6 calls_in=2
// strings: 

void FUN_007dea10(uint *param_1,char *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int local_3c;
  undefined2 *local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  
  local_38 = (undefined2 *)thunk_FUN_016d4a50(2);
  if (local_38 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,2);
  }
  *local_38 = 0xaa55;
  local_3c = 2;
  local_34 = 2;
  if (param_4 != 0) {
    FUN_007f5a44(&local_3c,2,param_4,1,1);
  }
  iVar5 = local_34;
  puVar4 = local_38;
  FUN_016dd1aa((int)local_38 + local_34,param_3,param_4);
  uVar10 = iVar5 + param_4;
  iVar1 = uVar10 * 0xc;
  uVar6 = 0;
  if (0xaaaaaaa < uVar10) {
LAB_007dea8c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar6,iVar1);
  }
  uVar8 = 0;
  if (iVar1 == 0) {
    local_30 = 0;
    local_2c = 4;
    if (iVar5 == 0 && param_4 == 0) goto LAB_007deb64;
  }
  else {
    local_2c = thunk_FUN_016d4a50(iVar1);
    if (local_2c == 0) {
      uVar6 = 4;
      goto LAB_007dea8c;
    }
    local_30 = uVar10;
    if (iVar5 == 0 && param_4 == 0) goto LAB_007deb64;
  }
  cVar2 = *param_2;
  puVar9 = (undefined4 *)(local_2c + 4);
  uVar8 = 0;
  do {
    uVar3 = *(undefined1 *)((int)puVar4 + uVar8);
    if (cVar2 == '\x01') {
      uVar6 = 1;
      puVar7 = (undefined1 *)thunk_FUN_016d4a50(1);
      if (puVar7 == (undefined1 *)0x0) {
LAB_007deb90:
                    /* WARNING: Subroutine does not return */
        FUN_00600874(1,uVar6);
      }
      *puVar7 = uVar3;
      uVar6 = 1;
    }
    else {
      uVar6 = 2;
      puVar7 = (undefined1 *)thunk_FUN_016d4a50(2);
      if (puVar7 == (undefined1 *)0x0) goto LAB_007deb90;
      uVar6 = 2;
      puVar7[1] = uVar3;
      *puVar7 = 0x11;
    }
    uVar8 = uVar8 + 1;
    puVar9[-1] = uVar6;
    *puVar9 = puVar7;
    puVar9[1] = uVar6;
    puVar9 = puVar9 + 3;
  } while (uVar10 != uVar8);
LAB_007deb64:
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = uVar8;
  if (local_3c != 0) {
    thunk_FUN_016d3fb4(puVar4);
  }
  return;
}

