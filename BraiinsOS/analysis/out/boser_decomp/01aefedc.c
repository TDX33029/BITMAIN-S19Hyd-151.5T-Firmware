// FUN_01aefedc @ 01aefedc size=232 calls_out=3 calls_in=3
// strings: 

void FUN_01aefedc(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  FUN_01af347c(&local_48,param_2,6);
  iVar3 = local_40;
  iVar2 = local_44;
  if (local_48 == -0x7fffffd3) {
    FUN_01af366c(&local_48,param_2);
    uVar1 = (undefined1)local_44;
    if (local_48 == -0x7fffffd3) {
      FUN_01af347c(&local_48,param_2,4);
      if (local_48 == -0x7fffffd3) {
        *(undefined1 *)(param_1 + 5) = uVar1;
        *param_1 = -0x7fffffd3;
        param_1[1] = iVar2;
        param_1[2] = iVar3;
        param_1[3] = local_44;
        param_1[4] = local_40;
      }
      else {
        param_1[3] = local_3c;
        param_1[4] = iStack_38;
        param_1[5] = iStack_34;
        param_1[6] = iStack_30;
        param_1[7] = iStack_2c;
        *param_1 = local_48;
        param_1[1] = local_44;
        param_1[2] = local_40;
      }
    }
    else {
      FUN_01bed4e2((int)param_1 + 5,(uint)&local_48 | 5,0x1b);
      *(undefined1 *)(param_1 + 1) = (undefined1)local_44;
      *param_1 = local_48;
    }
  }
  else {
    param_1[3] = local_3c;
    param_1[4] = iStack_38;
    param_1[5] = iStack_34;
    param_1[6] = iStack_30;
    param_1[7] = iStack_2c;
    *param_1 = local_48;
    param_1[1] = local_44;
    param_1[2] = local_40;
  }
  return;
}

