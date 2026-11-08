// FUN_0101d80c @ 0101d80c size=172 calls_out=2 calls_in=9
// strings: 

void FUN_0101d80c(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iStack_14;
  int *local_10;
  code *local_c;
  
  uVar1 = param_2[1];
  iStack_14 = param_2[2];
  if (((*(uint *)(*param_2 + 0x38) <= uVar1) ||
      (piVar2 = (int *)(*(int *)(*param_2 + 0x34) + uVar1 * 0xf8), *piVar2 == 3 && piVar2[1] == 0))
     || (piVar2[0x35] != iStack_14)) {
    local_10 = &iStack_14;
    local_c = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_10,&DAT_01882550,FUN_0101a4ac,uVar1);
  }
  if (piVar2[0xf] < 1) {
    return;
  }
  piVar2[0xf] = 0;
  FUN_0101cdd0();
  return;
}

