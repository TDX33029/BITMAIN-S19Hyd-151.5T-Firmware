// FUN_0101c55c @ 0101c55c size=128 calls_out=1 calls_in=2
// strings: 

void FUN_0101c55c(int *param_1)

{
  int *piVar1;
  int local_14;
  int *piStack_10;
  code *pcStack_c;
  
  local_14 = param_1[2];
  if (((*(uint *)(*param_1 + 0x38) <= (uint)param_1[1]) ||
      (piVar1 = (int *)(*(int *)(*param_1 + 0x34) + param_1[1] * 0xf8),
      *piVar1 == 3 && piVar1[1] == 0)) || (piVar1[0x35] != local_14)) {
    piStack_10 = &local_14;
    pcStack_c = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&piStack_10,&DAT_01882550);
  }
  return;
}

