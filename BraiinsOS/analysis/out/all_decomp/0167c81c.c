// FUN_0167c81c @ 0167c81c size=536 calls_out=5 calls_in=1
// strings: 

int FUN_0167c81c(int *param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_28;
  int local_24;
  int local_20;
  
  uVar5 = param_1[3] + 1;
  if (0xfffffffe < (uint)param_1[3]) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_018ada90);
  }
  uVar2 = param_1[1];
  uVar7 = uVar2 + 1;
  if (7 < uVar2) {
    uVar2 = (uVar7 & 0xfffffff8) - (uVar7 >> 3);
  }
  if (uVar2 >> 1 < uVar5) {
    if (uVar5 < uVar2 + 1) {
      uVar5 = uVar2 + 1;
    }
    FUN_0167ca80(&local_28,uVar5);
    if (local_28 == 0) {
      return local_24;
    }
    if (param_1[3] != 0) {
      puVar4 = (uint *)*param_1;
      do {
        uVar5 = *puVar4;
        puVar4 = puVar4 + 1;
      } while ((~uVar5 & 0x80808080) == 0);
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018ada70);
    }
    iVar9 = *param_1;
    iVar8 = param_1[1];
    *param_1 = local_28;
    param_1[1] = local_24;
    param_1[2] = local_20;
    param_1[3] = 0;
    if (iVar8 == 0) {
      return -0x7fffffff;
    }
    iVar3 = iVar8 * 4 + 4;
    if (iVar8 + iVar3 == -5) {
      return -0x7fffffff;
    }
    thunk_FUN_016d3fb4(iVar9 - iVar3);
    return -0x7fffffff;
  }
  puVar6 = (undefined4 *)*param_1;
  if (uVar7 != 0) {
    uVar5 = uVar7 >> 2;
    if ((uVar7 & 3) != 0) {
      uVar5 = (uVar7 >> 2) + 1;
    }
    iVar8 = 0;
    do {
      puVar6[-iVar8] = (~((uint)puVar6[-iVar8] >> 7) & 0x1010101) + (puVar6[-iVar8] | 0x7f7f7f7f);
      iVar8 = iVar8 + -1;
    } while (-iVar8 != uVar5);
    if (3 < uVar7) {
      *(undefined4 *)((int)puVar6 + uVar7) = *puVar6;
      goto LAB_0167c970;
    }
  }
  FUN_016dd52c(puVar6 + 1);
LAB_0167c970:
  uVar2 = param_1[1];
  uVar7 = 0;
  uVar5 = uVar2 + 1;
  do {
    if (uVar5 == uVar7) {
      if (7 < uVar2) {
        uVar2 = (uVar5 & 0xfffffff8) - (uVar5 >> 3);
      }
      param_1[2] = uVar2 - param_1[3];
      return -0x7fffffff;
    }
    pcVar1 = (char *)(*param_1 + uVar7);
    uVar7 = uVar7 + 1;
  } while (*pcVar1 != -0x80);
                    /* WARNING: Subroutine does not return */
  FUN_00faa464(&DAT_00419463,0x28,&DAT_018ada70);
}

