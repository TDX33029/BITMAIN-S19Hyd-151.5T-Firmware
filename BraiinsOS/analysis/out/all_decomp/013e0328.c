// FUN_013e0328 @ 013e0328 size=316 calls_out=2 calls_in=3
// strings: 

void FUN_013e0328(int *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_r5;
  uint unaff_r6;
  bool bVar5;
  
  iVar2 = param_1[3];
  if (*param_1 == 0) {
    if (iVar2 == 0) {
      bVar5 = true;
      uVar4 = 0;
      goto LAB_013e040c;
    }
    puVar1 = (uint *)param_1[2];
    unaff_r5 = 1;
    uVar4 = 1;
    uVar3 = *puVar1;
    if (0x7f < uVar3) {
      unaff_r5 = 2;
    }
    if (uVar3 < 0x800) {
      uVar3 = puVar1[iVar2 * 2 + -1];
    }
    else {
      unaff_r5 = 4;
      if (uVar3 < 0x10000) {
        unaff_r5 = 3;
      }
      uVar3 = puVar1[iVar2 * 2 + -1];
    }
    if (uVar3 < 0x80) {
      unaff_r6 = 1;
    }
    else {
      unaff_r6 = 2;
      if ((0x7ff < uVar3) && (unaff_r6 = 4, uVar3 < 0x10000)) {
        unaff_r6 = 3;
      }
    }
  }
  else {
    uVar4 = (uint)(iVar2 != 0);
    unaff_r6 = 1;
    if (iVar2 != 0) {
      unaff_r5 = 1;
      bVar5 = true;
      iVar2 = param_1[2] + iVar2 * 2;
      if (iVar2 != 2) {
        uVar4 = 1;
        bVar5 = (uint)(int)*(char *)(iVar2 + -1) < 0x80000000;
      }
      goto LAB_013e040c;
    }
    unaff_r5 = 1;
  }
  bVar5 = true;
LAB_013e040c:
  puVar1 = (uint *)thunk_FUN_016d4a50(0x34);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x34);
  }
  *puVar1 = uVar4;
  puVar1[1] = unaff_r5;
  puVar1[2] = uVar4;
  puVar1[3] = unaff_r6;
  puVar1[4] = 1;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined2 *)((int)puVar1 + 0x31) = 0;
  *(bool *)(puVar1 + 0xc) = bVar5;
  return;
}

