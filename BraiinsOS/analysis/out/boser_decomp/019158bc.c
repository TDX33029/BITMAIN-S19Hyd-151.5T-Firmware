// FUN_019158bc @ 019158bc size=372 calls_out=4 calls_in=0
// strings: 

void FUN_019158bc(int *param_1,int *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_68;
  int iStack_64;
  int iStack_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  (**(code **)(param_2[6] + 0x10))(&local_58,param_2[5]);
  local_34 = local_50;
  local_38 = local_54;
  if (local_58 == -0x7fffffd7) {
    (**(code **)(param_2[8] + 0x10))(&local_58,param_2[7]);
    if (local_58 == -0x7fffffd7) {
      uVar2 = (**(code **)(local_50 + 0x1c))();
      uVar3 = (**(code **)(local_34 + 0x1c))(local_38);
      FUN_0190e6ac(&local_68,(char)param_2[4],(int)uVar2,(int)((ulonglong)uVar2 >> 0x20),uVar3);
      local_4c = *param_2;
      local_48 = param_2[1];
      iStack_44 = param_2[2];
      local_40 = param_2[3];
      iStack_3c = param_2[4];
      local_2c = local_50;
      local_30 = local_54;
      local_58 = local_68;
      local_54 = iStack_64;
      local_50 = iStack_60;
      piVar1 = (int *)thunk_FUN_01be5118(0x30);
      if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x30);
      }
      *piVar1 = local_58;
      piVar1[1] = local_54;
      piVar1[2] = local_50;
      piVar1[3] = local_4c;
      piVar1[4] = local_48;
      piVar1[5] = iStack_44;
      piVar1[6] = local_40;
      piVar1[7] = iStack_3c;
      piVar1[8] = local_38;
      piVar1[9] = local_34;
      piVar1[10] = local_30;
      piVar1[0xb] = local_2c;
      *param_1 = -0x7fffffd7;
      param_1[1] = (int)piVar1;
      param_1[2] = (int)&DAT_01d252dc;
    }
    else {
      param_1[3] = local_4c;
      param_1[4] = local_48;
      param_1[5] = iStack_44;
      param_1[6] = local_40;
      param_1[7] = iStack_3c;
      *param_1 = local_58;
      param_1[1] = local_54;
      param_1[2] = local_50;
      FUN_01443048(local_38,local_34);
    }
  }
  else {
    param_1[3] = local_4c;
    param_1[4] = local_48;
    param_1[5] = iStack_44;
    param_1[6] = local_40;
    param_1[7] = iStack_3c;
    *param_1 = local_58;
    param_1[1] = local_54;
    param_1[2] = local_50;
  }
  return;
}

