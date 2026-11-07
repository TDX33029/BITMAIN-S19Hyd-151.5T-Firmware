// FUN_0066cff4 @ 0066cff4 size=548 calls_out=6 calls_in=1
// strings: 

void FUN_0066cff4(undefined4 *param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined1 auStack_128 [136];
  undefined1 auStack_a0 [128];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x154)) {
  case 0:
    *(undefined1 *)(param_2 + 0x155) = 1;
    piVar8 = *(int **)(param_2 + 0x150);
    FUN_01bed4e2(param_2 + 0x88,param_2,0x88);
    *(undefined1 *)(param_2 + 0x14c) = 0;
    *(int **)(param_2 + 0x110) = piVar8;
LAB_0066d080:
    *(undefined1 *)(param_2 + 0x128) = 0;
    uVar3 = 1;
    *(int **)(param_2 + 0x114) = piVar8;
    *(int **)(param_2 + 0x118) = piVar8;
    *(undefined4 *)(param_2 + 0x11c) = 1;
LAB_0066d09c:
    *(int **)(param_2 + 0x120) = piVar8;
    *(uint *)(param_2 + 0x124) = uVar3;
LAB_0066d0a4:
    iVar4 = *piVar8;
    if (uVar3 <= *(uint *)(iVar4 + 0x94)) {
      *(uint *)(param_2 + 0x140) = uVar3;
      *(uint *)(param_2 + 0x144) = uVar3;
      *(undefined1 *)(param_2 + 0x148) = 0;
      *(undefined4 *)(param_2 + 0x138) = 0;
      *(undefined4 *)(param_2 + 0x13c) = 0;
      *(int *)(param_2 + 300) = iVar4 + 0x80;
      *(undefined4 *)(param_2 + 0x130) = 0;
      goto switchD_0066d19c_caseD_4;
    }
    *(undefined1 *)(param_2 + 0x128) = 1;
LAB_0066d134:
    *(undefined1 *)(param_2 + 0x155) = 0;
    *(undefined1 *)(param_2 + 0x14c) = 1;
    uVar6 = *(undefined4 *)(param_2 + 0x88);
    uVar5 = *(undefined4 *)(param_2 + 0x8c);
    FUN_01bed4e2(auStack_a0,param_2 + 0x90,0x80);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d2e0bc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d2e0bc);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x14c)) {
    case 0:
      piVar8 = *(int **)(param_2 + 0x110);
      goto LAB_0066d080;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2e0cc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2e0cc);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x128)) {
    case 0:
      piVar8 = *(int **)(param_2 + 0x118);
      uVar3 = *(uint *)(param_2 + 0x11c);
      goto LAB_0066d09c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2e0ac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2e0ac);
    case 3:
      piVar8 = *(int **)(param_2 + 0x120);
      uVar3 = *(uint *)(param_2 + 0x124);
      goto LAB_0066d0a4;
    }
switchD_0066d19c_caseD_4:
    bVar1 = FUN_019f9bc4(param_2 + 300,param_3);
    if (bVar1 == 2) {
      uVar2 = 3;
      *(undefined1 *)(param_2 + 0x128) = 4;
      *(undefined1 *)(param_2 + 0x14c) = 3;
      *param_1 = 3;
      param_1[1] = 0;
      goto LAB_0066d180;
    }
    FUN_0193c3cc(param_2 + 300);
    *(undefined1 *)(param_2 + 0x128) = 1;
    if ((bVar1 & 1) != 0) goto LAB_0066d134;
    *(undefined1 *)(param_2 + 0x14c) = 1;
    uVar5 = 0;
    puVar7 = *(undefined4 **)(param_2 + 0x114);
    *(undefined1 *)(param_2 + 0x155) = 0;
    FUN_01bed4e2(auStack_128,param_2 + 0x88,0x88);
    FUN_0068d1b8(*puVar7,auStack_128);
    uVar6 = 2;
  }
  *(undefined1 *)(param_2 + 0x155) = 0;
  *param_1 = uVar6;
  param_1[1] = uVar5;
  FUN_01bed4e2(param_1 + 2,auStack_a0,0x80);
  uVar2 = 1;
LAB_0066d180:
  *(undefined1 *)(param_2 + 0x154) = uVar2;
  return;
}

