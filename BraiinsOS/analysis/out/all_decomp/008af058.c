// FUN_008af058 @ 008af058 size=628 calls_out=6 calls_in=0
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x008af280 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_008af058(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint in_fpscr;
  double in_d0;
  double dVar7;
  ulonglong uVar8;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x3d)) {
  case 0:
    *(undefined1 *)(param_2 + 0x3b) = 0;
    iVar2 = param_2[0x3c];
    param_2[0x38] = iVar2;
LAB_008af0c8:
    param_2[0x39] = iVar2;
    if (*(undefined1 **)(iVar2 + 0x58) == &DAT_3b9aca00) {
      fVar3 = (float)FUN_00808f1c(&DAT_00345091,0x31);
      uVar6 = 1;
      goto LAB_008af288;
    }
    puVar4 = param_2 + 0x3a;
    *puVar4 = 0;
    param_2[0x34] = iVar2;
    param_2[0x35] = puVar4;
    *(undefined1 *)(param_2 + 0x36) = 0;
LAB_008af140:
    uVar1 = *(undefined1 *)(iVar2 + 0xf0);
    *(undefined1 *)((int)param_2 + 0xc9) = 0;
    iVar2 = iVar2 + 0xf8;
    *(undefined1 *)((int)param_2 + 0xca) = uVar1;
    param_2[0x30] = iVar2;
    param_2[0x31] = puVar4;
LAB_008af160:
    puVar5 = param_2 + 0x32;
    *(undefined1 *)puVar5 = uVar1;
    param_2[2] = iVar2;
    param_2[3] = puVar4;
    param_2[4] = puVar5;
    param_2[5] = (int)param_2 + 0xc9;
    param_2[0x2a] = iVar2;
    param_2[0x2b] = puVar4;
    param_2[0x2c] = puVar5;
    param_2[0x2d] = (int)param_2 + 0xc9;
    param_2[0x2e] = &LAB_01103938;
    param_2[0x28] = 2;
    param_2[0x24] = 2;
    param_2[0x25] = 0;
    param_2[0x26] = 0;
    *(undefined1 *)((int)param_2 + 0x19) = 0;
    *param_2 = 0;
    param_2[1] = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01863bdc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01863bdc);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x3b)) {
    case 0:
      iVar2 = param_2[0x38];
      goto LAB_008af0c8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018639fc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018639fc);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x36)) {
    case 0:
      iVar2 = param_2[0x34];
      puVar4 = (undefined4 *)param_2[0x35];
      goto LAB_008af140;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01863a9c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01863a9c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0xc9)) {
    case 0:
      iVar2 = param_2[0x30];
      puVar4 = (undefined4 *)param_2[0x31];
      uVar1 = *(undefined1 *)((int)param_2 + 0xca);
      goto LAB_008af160;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018639ec);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018639ec);
    }
  }
  uVar8 = FUN_0081003c(param_2,param_3);
  fVar3 = (float)(uVar8 >> 0x20);
  if ((int)uVar8 == 2) {
    *(undefined1 *)((int)param_2 + 0xc9) = 3;
    *(undefined1 *)(param_2 + 0x36) = 3;
    *(undefined1 *)(param_2 + 0x3b) = 3;
    *param_1 = 2;
    *(undefined1 *)(param_2 + 0x3d) = 3;
    return;
  }
  FUN_008b42e8(param_2);
  uVar6 = 1;
  *(undefined1 *)(param_2 + 0x36) = 1;
  *(undefined1 *)((int)param_2 + 0xc9) = 1;
  if ((uVar8 & 1) == 0) {
    iVar2 = param_2[0x39];
    if ((*(uint *)(iVar2 + 0x18) & 1) == 0) {
      in_d0 = (double)fVar3;
    }
    else {
      dVar7 = (double)VectorUnsignedToFloat(fVar3,(byte)(in_fpscr >> 0x16) & 3);
      in_d0 = *(double *)(iVar2 + 0x28) + *(double *)(iVar2 + 0x20) * dVar7;
    }
    FUN_016d5578(SUB84(in_d0,0),(int)((ulonglong)in_d0 >> 0x20),0);
    uVar6 = 0;
  }
LAB_008af288:
  *(undefined1 *)(param_2 + 0x3b) = 1;
  *(double *)(param_1 + 2) = in_d0;
  *param_1 = uVar6;
  param_1[1] = fVar3;
  *(undefined1 *)(param_2 + 0x3d) = 1;
  return;
}

