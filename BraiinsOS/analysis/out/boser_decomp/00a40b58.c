// FUN_00a40b58 @ 00a40b58 size=192 calls_out=0 calls_in=1
// strings: 

void FUN_00a40b58(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint in_fpscr;
  double dVar3;
  
  uVar2 = *(uint *)(param_2 + 0x28);
  if (uVar2 == 2) {
LAB_00a40b68:
    uVar2 = 4;
LAB_00a40b70:
    *param_1 = uVar2;
    param_1[1] = 0;
    return;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x30)) {
  case 0:
    uVar2 = 2;
    goto LAB_00a40b70;
  case 1:
    uVar1 = 1;
    dVar3 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_2 + 0x2c),(byte)(in_fpscr >> 0x16) & 3);
    *param_1 = uVar2;
    param_1[1] = 0;
    param_1[4] = 1;
    break;
  case 2:
    dVar3 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_2 + 0x2c),(byte)(in_fpscr >> 0x16) & 3);
    *param_1 = uVar2;
    param_1[1] = 0;
    uVar1 = 2;
    param_1[4] = 1;
    break;
  case 3:
    if ((uVar2 & 1) != 0) {
      dVar3 = (double)VectorUnsignedToFloat
                                (*(undefined4 *)(param_2 + 0x2c),(byte)(in_fpscr >> 0x16) & 3);
      *param_1 = 1;
      param_1[1] = 0;
      param_1[4] = 0;
      goto LAB_00a40c20;
    }
    goto LAB_00a40b68;
  }
  param_1[5] = uVar1;
LAB_00a40c20:
  *(double *)(param_1 + 2) = dVar3 / 100.0;
  return;
}

