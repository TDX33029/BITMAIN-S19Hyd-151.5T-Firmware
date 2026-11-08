// FUN_00fa7bec @ 00fa7bec size=148 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_00fa7bec(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1[2] == param_1[3]) {
    iVar1 = param_1[5];
    if (iVar1 == 0) {
      return 0;
    }
    param_1[5] = 0;
    return CONCAT44(param_1[6],iVar1);
  }
  uVar2 = param_1[4];
  param_1[2] = 1;
  param_1[3] = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  if ((uint)param_1[1] < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00418e0f,0x13,&DAT_01880a94);
  }
  return CONCAT44(param_1[1] - uVar2,*param_1 + uVar2);
}

