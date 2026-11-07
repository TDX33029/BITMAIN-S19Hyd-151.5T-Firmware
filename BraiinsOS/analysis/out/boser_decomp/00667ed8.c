// FUN_00667ed8 @ 00667ed8 size=72 calls_out=1 calls_in=1
// strings: 

void FUN_00667ed8(int *param_1)

{
  int iVar1;
  
  if (param_1[1] != 3) {
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_003d42a4,0x18,&DAT_01c04188);
  }
  return;
}

