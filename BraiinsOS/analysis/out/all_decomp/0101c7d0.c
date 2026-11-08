// FUN_0101c7d0 @ 0101c7d0 size=284 calls_out=3 calls_in=1
// strings: 

void FUN_0101c7d0(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int local_40;
  uint uStack_3c;
  int iStack_38;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_20;
  int local_1c;
  int *local_18;
  code *local_14;
  
  if ((*(uint *)(param_4 + 8) <= *(uint *)(param_4 + 0xc)) ||
     (FUN_0101a90c(&local_40,param_2 + 0x28), local_40 == 0)) {
    *param_1 = 0;
    return;
  }
  local_30 = local_40;
  local_2c = uStack_3c;
  local_28 = iStack_38;
  FUN_0102e364(param_4,&local_30);
  local_1c = local_28;
  local_20 = local_2c;
  if (((*(uint *)(local_30 + 0x38) <= local_2c) ||
      (piVar1 = (int *)(*(int *)(local_30 + 0x34) + local_2c * 0xf8), *piVar1 == 3 && piVar1[1] == 0
      )) || (piVar1[0x35] != local_28)) {
    local_18 = &local_1c;
    local_14 = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_18,&DAT_01882560);
  }
  iVar2 = piVar1[0x10];
  piVar1[0x10] = 0;
  if (iVar2 != 0) {
    (**(code **)(iVar2 + 4))(piVar1[0x11]);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

