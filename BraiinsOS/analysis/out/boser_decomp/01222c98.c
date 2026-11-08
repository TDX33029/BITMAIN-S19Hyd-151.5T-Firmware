// FUN_01222c98 @ 01222c98 size=132 calls_out=3 calls_in=9
// strings: 

void FUN_01222c98(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_1c;
  
  iVar1 = param_2[5];
  iVar2 = param_2[7];
  FUN_01264de8(param_2 + 4);
  if (iVar2 - iVar1 == 0) {
    *param_1 = 2;
  }
  else {
    local_1c = param_2[8];
    FUN_0123c028(&local_50,local_1c + ((uint)(iVar2 - iVar1) >> 5),&local_1c,&DAT_01cfa00c);
    *param_1 = local_50;
    param_1[1] = uStack_4c;
    param_1[2] = uStack_48;
    param_1[3] = uStack_44;
    param_1[4] = uStack_40;
    param_1[5] = uStack_3c;
    param_1[6] = local_38;
    param_1[7] = uStack_34;
    param_1[8] = uStack_30;
    param_1[9] = uStack_2c;
    param_1[10] = uStack_28;
    param_1[0xb] = uStack_24;
  }
  if (*param_2 != -0x7fffffeb) {
    FUN_012222e0(param_2);
  }
  return;
}

