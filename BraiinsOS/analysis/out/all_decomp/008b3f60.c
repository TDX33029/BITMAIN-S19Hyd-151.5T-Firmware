// FUN_008b3f60 @ 008b3f60 size=568 calls_out=5 calls_in=0
// strings: 

void FUN_008b3f60(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  double in_d16;
  uint local_2c;
  float local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x3d)) {
  case 0:
    *(undefined1 *)(param_2 + 0x3a) = 0;
    iVar1 = param_2[0x3c];
    param_2[0x38] = iVar1;
LAB_008b3fd0:
    if (*(undefined1 **)(iVar1 + 0x38) != &DAT_3b9aca00) {
      puVar3 = param_2 + 0x39;
      *puVar3 = 0;
      param_2[0x34] = iVar1;
      param_2[0x35] = puVar3;
      *(undefined1 *)(param_2 + 0x36) = 0;
LAB_008b405c:
      uVar4 = *(undefined1 *)(iVar1 + 0xf0);
      iVar1 = iVar1 + 0xf8;
      *(undefined1 *)((int)param_2 + 0xc9) = 0;
      *(undefined1 *)((int)param_2 + 0xca) = uVar4;
      param_2[0x30] = iVar1;
      param_2[0x31] = puVar3;
LAB_008b4078:
      puVar5 = param_2 + 0x32;
      *(undefined1 *)puVar5 = uVar4;
      param_2[2] = iVar1;
      param_2[3] = puVar3;
      param_2[4] = puVar5;
      param_2[5] = (int)param_2 + 0xc9;
      param_2[0x28] = 2;
      param_2[0x24] = 2;
      param_2[0x25] = 0;
      param_2[0x26] = 0;
      *(undefined1 *)((int)param_2 + 0x19) = 0;
      *param_2 = 0;
      param_2[1] = 0;
      param_2[0x2a] = iVar1;
      param_2[0x2b] = puVar3;
      param_2[0x2c] = puVar5;
      param_2[0x2d] = (int)param_2 + 0xc9;
      param_2[0x2e] = &LAB_01103938;
      goto switchD_008b4158_caseD_3;
    }
    local_28 = (float)FUN_00808f1c(&DAT_00345121,0x2f);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01863d1c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01863d1c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x3a)) {
    case 0:
      iVar1 = param_2[0x38];
      goto LAB_008b3fd0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01863acc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01863acc);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x36)) {
    case 0:
      iVar1 = param_2[0x34];
      puVar3 = (undefined4 *)param_2[0x35];
      goto LAB_008b405c;
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
      iVar1 = param_2[0x30];
      puVar3 = (undefined4 *)param_2[0x31];
      uVar4 = *(undefined1 *)((int)param_2 + 0xca);
      goto LAB_008b4078;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018639ec);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018639ec);
    }
switchD_008b4158_caseD_3:
    FUN_0080bc30(&local_2c,param_2);
    if (local_2c == 2) {
      *(undefined1 *)(param_2 + 0x36) = 3;
      *(undefined1 *)((int)param_2 + 0xc9) = 3;
LAB_008b4104:
      *(undefined1 *)(param_2 + 0x3a) = 3;
      *param_1 = 2;
      *(undefined1 *)(param_2 + 0x3d) = 3;
      return;
    }
    FUN_008b42e8(param_2);
    *(undefined1 *)((int)param_2 + 0xc9) = 1;
    *(undefined1 *)(param_2 + 0x36) = 1;
    if (local_2c == 2) goto LAB_008b4104;
    if ((local_2c & 1) == 0) {
      uVar2 = 0;
      in_d16 = (double)local_28;
      local_28 = (float)(uint)DAT_018dd947;
      goto LAB_008b3ffc;
    }
  }
  uVar2 = 1;
LAB_008b3ffc:
  *(undefined1 *)(param_2 + 0x3a) = 1;
  *(double *)(param_1 + 2) = in_d16;
  *param_1 = uVar2;
  param_1[1] = local_28;
  *(undefined1 *)(param_2 + 0x3d) = 1;
  return;
}

