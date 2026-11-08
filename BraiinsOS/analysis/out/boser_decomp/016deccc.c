// FUN_016deccc @ 016deccc size=336 calls_out=3 calls_in=3
// strings: 

uint * FUN_016deccc(int *param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_r8;
  uint unaff_r9;
  bool bVar6;
  
  iVar3 = param_1[3];
  if (*param_1 == 0) {
    if (iVar3 == 0) {
      bVar6 = true;
      uVar4 = 0;
      uVar5 = 0;
      goto LAB_016dedc4;
    }
    unaff_r8 = 1;
    uVar5 = 1;
    uVar4 = *(uint *)param_1[2];
    if (0x7f < uVar4) {
      unaff_r8 = 2;
    }
    if ((0x7ff < uVar4) && (unaff_r8 = 4, uVar4 < 0x10000)) {
      unaff_r8 = 3;
    }
    bVar6 = iVar3 == 0;
    uVar4 = 0;
    if (!bVar6) {
      param_1 = (int *)(param_1[2] + iVar3 * 8);
      bVar6 = param_1 == (int *)&DAT_00000008;
    }
    if (!bVar6) {
      uVar1 = param_1[-1];
      uVar4 = 1;
      if (uVar1 < 0x80) {
        unaff_r9 = 1;
      }
      else if (uVar1 < 0x800) {
        unaff_r9 = 2;
      }
      else {
        unaff_r9 = 4;
        if (uVar1 < 0x10000) {
          unaff_r9 = 3;
        }
      }
    }
  }
  else {
    bVar6 = iVar3 == 0;
    if (!bVar6) {
      param_1 = (int *)param_1[2];
    }
    uVar4 = (uint)!bVar6;
    unaff_r9 = 1;
    if (!bVar6) {
      param_1 = (int *)((int)param_1 + iVar3 * 2);
      bVar6 = param_1 == (int *)0x2;
    }
    uVar5 = uVar4;
    if (!bVar6) {
      unaff_r8 = 1;
      bVar6 = (uint)(int)*(char *)((int)param_1 + -1) < 0x80000000;
      goto LAB_016dedc4;
    }
    unaff_r8 = 1;
  }
  bVar6 = true;
LAB_016dedc4:
  puVar2 = (uint *)thunk_FUN_01be5118(0x34);
  if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x34);
  }
  puVar2[4] = 1;
  puVar2[2] = uVar4;
  *puVar2 = uVar5;
  puVar2[1] = unaff_r8;
  puVar2[3] = unaff_r9;
  FUN_01bed93e(puVar2 + 5,0,0x1c);
  *(undefined2 *)((int)puVar2 + 0x31) = 0;
  *(bool *)(puVar2 + 0xc) = bVar6;
  return puVar2;
}

