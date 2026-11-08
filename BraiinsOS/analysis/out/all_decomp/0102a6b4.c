// FUN_0102a6b4 @ 0102a6b4 size=272 calls_out=3 calls_in=1
// strings: 

void FUN_0102a6b4(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int local_1c;
  int *local_18;
  code *local_14;
  
  local_1c = param_1[2];
  if (((*(uint *)(*param_1 + 0x38) <= (uint)param_1[1]) ||
      (piVar2 = (int *)(*(int *)(*param_1 + 0x34) + param_1[1] * 0xf8),
      *piVar2 == 3 && piVar2[1] == 0)) || (piVar2[0x35] != local_1c)) {
    local_18 = &local_1c;
    local_14 = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_18,&DAT_01882550);
  }
  if ((piVar2[0x36] != 0) || (*(byte *)(piVar2 + 8) < 6)) {
    return;
  }
  uVar1 = 8;
  if ((*(byte *)(piVar2 + 8) == 10) &&
     (((*(byte *)(param_3 + 0x2c) & 1) != 0 && (*(char *)((int)piVar2 + 0x21) != '\0')))) {
    uVar1 = 0;
  }
  FUN_0102db34(param_2 + 0xb0,param_1,uVar1,param_3,param_2 + 0xa8);
  FUN_01017864(param_2,param_1,param_3);
  return;
}

