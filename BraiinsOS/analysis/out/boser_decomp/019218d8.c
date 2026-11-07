// FUN_019218d8 @ 019218d8 size=284 calls_out=4 calls_in=0
// strings: 

void FUN_019218d8(int *param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_48;
  uint *local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if ((*param_4 < 0x80000001) && (param_4[3] == 0x8000000f)) {
    local_44 = param_4 + 4;
  }
  else {
    FUN_0191d9a0(&local_48,param_4,&DAT_0052389f,1,&DAT_00523839,1);
    if (local_48 != -0x7fffffd7) {
      param_1[2] = local_40;
      param_1[3] = iStack_3c;
      param_1[4] = iStack_38;
      param_1[5] = iStack_34;
      param_1[6] = iStack_30;
      param_1[7] = iStack_2c;
      *param_1 = local_48;
      param_1[1] = (int)local_44;
      goto LAB_019219dc;
    }
  }
  FUN_0191ecdc(&local_48,param_2,*param_3,local_44);
  if (local_48 == -0x7fffffd7) {
    *param_1 = -0x7fffffd7;
    param_1[1] = param_2;
    param_1[2] = (int)&DAT_01d253d4;
    FUN_0191edf0(param_4);
    return;
  }
  piVar1 = (int *)((uint)&local_48 | 4);
  iVar2 = piVar1[1];
  iVar3 = piVar1[2];
  param_1[1] = *piVar1;
  param_1[2] = iVar2;
  param_1[3] = iVar3;
  iVar2 = piVar1[4];
  iVar3 = piVar1[5];
  iVar4 = piVar1[6];
  param_1[4] = piVar1[3];
  param_1[5] = iVar2;
  param_1[6] = iVar3;
  param_1[7] = iVar4;
  *param_1 = local_48;
LAB_019219dc:
  FUN_0191edf0(param_4);
  FUN_0191ee78(param_2);
  return;
}

