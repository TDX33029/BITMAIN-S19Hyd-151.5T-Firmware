// FUN_0162e33c @ 0162e33c size=496 calls_out=4 calls_in=1
// strings: invalid TCA_ACT_STATS | failed to parse TCA_ACT_STATS

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0162e33c(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int local_a8;
  int local_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int local_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  piVar1 = *(int **)(param_2 + 0x10);
  piVar3 = (int *)((uint)&local_a8 | 4);
  do {
    FUN_0162385c(&local_c8,param_2);
    if (local_c8 == -0x7fffffff) {
LAB_0162e518:
      local_80 = 8;
      goto LAB_0162e520;
    }
    if (local_c8 == -0x80000000) {
      local_30 = local_c8;
      iStack_2c = iStack_c4;
      iStack_28 = iStack_c0;
    }
    else {
      local_80 = local_c8;
      iStack_7c = iStack_c4;
      iStack_78 = iStack_c0;
      FUN_016403ac(&local_30,&local_80,"invalid TCA_ACT_STATS",0x15);
    }
    if (local_30 != -0x80000000) {
      local_a4 = local_30;
      iStack_a0 = iStack_2c;
      iStack_9c = iStack_28;
LAB_0162e4ec:
      local_b8 = *piVar3;
      iStack_b4 = piVar3[1];
      iStack_b0 = piVar3[2];
LAB_0162e4f8:
      if (*piVar1 != -0x80000000) {
        FUN_0134bd64(*piVar1,piVar1[1]);
      }
      *piVar1 = local_b8;
      piVar1[1] = iStack_b4;
      piVar1[2] = iStack_b0;
      goto LAB_0162e518;
    }
    FUN_0160fc68(&local_80,iStack_2c,iStack_28,**(undefined4 **)(param_2 + 0xc),
                 (*(undefined4 **)(param_2 + 0xc))[1]);
    if (local_80 == 8) {
      piVar2 = (int *)((uint)&local_80 | 4);
      local_30 = *piVar2;
      iStack_2c = piVar2[1];
      iStack_28 = piVar2[2];
      FUN_016403ac(piVar3,&local_30,"failed to parse TCA_ACT_STATS",0x1d);
      goto LAB_0162e4ec;
    }
    local_a8 = local_80;
    local_a4 = iStack_7c;
    iStack_a0 = iStack_78;
    iStack_9c = iStack_74;
    local_98 = local_70;
    local_94 = local_6c;
    iStack_90 = iStack_68;
    iStack_8c = iStack_64;
    iStack_88 = iStack_60;
    iStack_84 = iStack_5c;
    local_b8 = *piVar3;
    iStack_b4 = piVar3[1];
    iStack_b0 = piVar3[2];
    if (local_80 == 8) goto LAB_0162e4f8;
    local_58 = *piVar3;
    iStack_54 = piVar3[1];
    iStack_50 = piVar3[2];
  } while (local_80 == 9);
  param_1[1] = local_58;
  param_1[2] = iStack_54;
  param_1[3] = iStack_50;
  param_1[4] = local_70;
  param_1[5] = local_6c;
  param_1[6] = iStack_68;
  param_1[7] = iStack_64;
  param_1[8] = iStack_60;
  param_1[9] = iStack_5c;
LAB_0162e520:
  *param_1 = local_80;
  return;
}

