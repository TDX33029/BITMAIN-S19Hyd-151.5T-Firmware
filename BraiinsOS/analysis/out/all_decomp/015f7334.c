// FUN_015f7334 @ 015f7334 size=792 calls_out=6 calls_in=3
// strings: <string-with-nul>

void FUN_015f7334(undefined4 *param_1,char *param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  int iVar10;
  bool bVar11;
  int local_38;
  int *local_34;
  int local_30;
  
  if (param_3 == 0) {
LAB_015f737c:
    uVar8 = 0;
    goto LAB_015f7380;
  }
  uVar8 = 2;
  if (*param_2 == '/') goto LAB_015f7380;
  if (param_3 < 8) {
    uVar8 = 1;
    if (*param_2 == '/') goto LAB_015f7380;
    if (param_3 != 1) {
      if (param_2[1] == '/') goto LAB_015f7380;
      if (param_3 != 2) {
        if (param_2[2] == '/') goto LAB_015f7380;
        if (param_3 != 3) {
          if (param_2[3] == '/') goto LAB_015f7380;
          if (param_3 != 4) {
            if (param_2[4] == '/') goto LAB_015f7380;
            if (param_3 != 5) {
              if ((param_2[5] != '/') && (uVar8 = false, param_3 != 6)) {
                uVar8 = param_2[6] == '/';
              }
              goto LAB_015f7380;
            }
          }
        }
      }
    }
    goto LAB_015f737c;
  }
  uVar3 = ((uint)(param_2 + 3) & 0xfffffffc) - (int)param_2;
  if (uVar3 == 0) {
    uVar3 = 0;
LAB_015f74e0:
    do {
      uVar4 = *(uint *)(param_2 + uVar3);
      uVar7 = *(uint *)((int)(param_2 + uVar3) + 4) ^ 0x2f2f2f2f;
      if (((0x1010100 - (uVar4 ^ 0x2f2f2f2f) | uVar4) & 0x80808080 & (0x1010100 - uVar7 | uVar7)) !=
          0x80808080) break;
      uVar3 = uVar3 + 8;
    } while (uVar3 <= param_3 - 8);
  }
  else {
    iVar10 = (int)param_2 - ((uint)(param_2 + 3) & 0xfffffffc);
    pcVar5 = param_2;
    do {
      if (*pcVar5 == '/') {
        uVar8 = 1;
        goto LAB_015f7380;
      }
      bVar11 = iVar10 != -1;
      iVar10 = iVar10 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar11);
    if (uVar3 <= param_3 - 8) goto LAB_015f74e0;
  }
  uVar8 = 0;
  if (param_3 != uVar3) {
    iVar10 = ~uVar3 + param_3;
    pcVar5 = param_2 + uVar3;
    do {
      uVar8 = *pcVar5 == '/';
      if (*pcVar5 == '/') break;
      bVar11 = iVar10 != 0;
      iVar10 = iVar10 + -1;
      pcVar5 = pcVar5 + 1;
    } while (bVar11);
  }
LAB_015f7380:
  FUN_00602b88(&local_38);
  if (local_38 == -0x80000000) {
    uVar9 = 0;
    piVar1 = local_34;
    iVar10 = local_30;
  }
  else {
    iVar10 = 0x12;
    piVar1 = (int *)thunk_FUN_016d4a50(0x12);
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(1,0x12);
    }
    FUN_016dd1aa(piVar1,"<string-with-nul>",0x12);
    uVar9 = 1;
    if (local_38 != 0) {
      thunk_FUN_016d3fb4(local_34);
    }
  }
  piVar2 = (int *)thunk_FUN_016d4a50(8);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,8);
  }
  iVar6 = 1;
  *piVar2 = 0;
  local_30 = 1;
  local_38 = 2;
  local_34 = piVar2;
  if ((iVar10 != 0) && (iVar6 = thunk_FUN_016d4a50(iVar10), iVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar10);
  }
  FUN_016dd1aa(iVar6,piVar1,iVar10);
  *(undefined1 *)(param_1 + 0x1e) = uVar9;
  param_1[0xc] = local_38;
  param_1[0xd] = local_34;
  param_1[0xe] = 2;
  param_1[0xf] = 0;
  *piVar2 = iVar6;
  piVar2[1] = 0;
  *(undefined1 *)((int)param_1 + 0x7b) = uVar8;
  *(undefined2 *)(param_1 + 0x15) = 0;
  param_1[0x14] = 0;
  param_1[0x1a] = 0;
  param_1[0x16] = piVar1;
  param_1[0x17] = iVar10;
  param_1[0x18] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[0x1c] = 0;
  param_1[0x10] = 4;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[6] = 5;
  param_1[8] = 5;
  param_1[10] = 5;
  *(undefined2 *)((int)param_1 + 0x79) = 0;
  param_1[4] = 0;
  return;
}

