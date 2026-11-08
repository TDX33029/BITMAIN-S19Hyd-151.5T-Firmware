// FUN_000653d0 @ 000653d0  size=604  callers=2
// program: bmminer


undefined4 FUN_000653d0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  size_t __nmemb;
  undefined4 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar8;
  int *piVar7;
  undefined4 *puVar9;
  uint in_fpscr;
  double dVar10;
  double dVar11;
  
  uVar1 = (*(code *)param_1[3])(param_2);
  iVar6 = param_1[2];
  FUN_000673ec(uVar1,iVar6);
  iVar5 = *(int *)(param_1[1] + extraout_r1 * 4);
  if (iVar5 != 0) {
    do {
      iVar6 = (*(code *)param_1[4])(param_2,*(undefined4 *)(iVar5 + 4));
      if (iVar6 != 0) {
        if ((code *)param_1[5] != (code *)0x0) {
          (*(code *)param_1[5])(*(undefined4 *)(iVar5 + 4));
        }
        if ((code *)param_1[6] != (code *)0x0) {
          (*(code *)param_1[6])(*(undefined4 *)(iVar5 + 8));
        }
        *(undefined4 *)(iVar5 + 4) = param_2;
        *(undefined4 *)(iVar5 + 8) = param_3;
        return 0;
      }
      iVar5 = *(int *)(iVar5 + 0x10);
    } while (iVar5 != 0);
    iVar6 = param_1[2];
  }
  dVar11 = (double)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
  dVar10 = (double)VectorUnsignedToFloat(*param_1,(byte)(in_fpscr >> 0x16) & 3);
  if (dVar11 * 1.3 < dVar10) {
    __nmemb = iVar6 << 1;
    pvVar2 = calloc(__nmemb,4);
    if (pvVar2 == (void *)0x0) {
      piVar4 = __errno_location();
      FUN_000658a8(2,"src/zc_hashtable.c",0x7e,"calloc fail, errno[%d]",*piVar4);
      FUN_000658a8(2,"src/zc_hashtable.c",0xcd,"rehash fail");
      return 0xffffffff;
    }
    piVar4 = (int *)param_1[1];
    if (iVar6 != 0) {
      piVar7 = piVar4;
      do {
        piVar8 = piVar7 + 1;
        puVar3 = (undefined4 *)*piVar7;
        while (puVar3 != (undefined4 *)0x0) {
          puVar9 = (undefined4 *)puVar3[4];
          puVar3[3] = 0;
          puVar3[4] = 0;
          FUN_000673ec(*puVar3,__nmemb);
          iVar5 = *(int *)((int)pvVar2 + extraout_r1_00 * 4);
          if (iVar5 != 0) {
            *(undefined4 **)(iVar5 + 0xc) = puVar3;
            puVar3[4] = *(undefined4 *)((int)pvVar2 + extraout_r1_00 * 4);
          }
          *(undefined4 **)((int)pvVar2 + extraout_r1_00 * 4) = puVar3;
          puVar3 = puVar9;
        }
        piVar7 = piVar8;
      } while (piVar4 + iVar6 != piVar8);
    }
    free(piVar4);
    param_1[1] = (int)pvVar2;
    param_1[2] = __nmemb;
  }
  puVar3 = calloc(1,0x14);
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = __errno_location();
    FUN_000658a8(2,"src/zc_hashtable.c",0xd4,"calloc fail, errno[%d]",*piVar4);
    return 0xffffffff;
  }
  uVar1 = (*(code *)param_1[3])(param_2);
  iVar5 = param_1[2];
  puVar3[4] = 0;
  puVar3[2] = param_3;
  puVar3[3] = 0;
  *puVar3 = uVar1;
  puVar3[1] = param_2;
  FUN_000673ec(uVar1,iVar5);
  iVar5 = param_1[1];
  iVar6 = *(int *)(iVar5 + extraout_r1_01 * 4);
  if (iVar6 != 0) {
    *(undefined4 **)(iVar6 + 0xc) = puVar3;
    puVar3[4] = *(undefined4 *)(iVar5 + extraout_r1_01 * 4);
  }
  iVar6 = *param_1;
  *(undefined4 **)(iVar5 + extraout_r1_01 * 4) = puVar3;
  *param_1 = iVar6 + 1;
  return 0;
}

