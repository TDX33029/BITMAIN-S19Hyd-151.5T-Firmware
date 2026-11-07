// FUN_012c128c @ 012c128c size=172 calls_out=2 calls_in=0
// strings: 

void FUN_012c128c(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int unaff_r11;
  
  if (*param_1 == 0) {
    uVar2 = 0;
LAB_012c12b8:
    unaff_r8 = param_1[2];
    unaff_r9 = param_1[3];
  }
  else {
    if (*param_1 == 1) {
      uVar2 = 1;
      goto LAB_012c12b8;
    }
    uVar2 = 2;
  }
  if (param_1[4] == 0) {
    uVar3 = 0;
  }
  else {
    if (param_1[4] == 2) {
      uVar3 = 2;
      goto LAB_012c12f8;
    }
    uVar3 = 1;
  }
  unaff_r10 = param_1[6];
  unaff_r11 = param_1[7];
LAB_012c12f8:
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x20);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x20);
  }
  puVar1[2] = unaff_r8;
  puVar1[3] = unaff_r9;
  puVar1[4] = uVar3;
  puVar1[5] = 0;
  puVar1[6] = unaff_r10;
  puVar1[7] = unaff_r11;
  *puVar1 = uVar2;
  puVar1[1] = 0;
  return;
}

