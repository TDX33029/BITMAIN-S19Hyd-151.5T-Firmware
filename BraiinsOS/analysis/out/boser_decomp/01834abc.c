// FUN_01834abc @ 01834abc size=212 calls_out=2 calls_in=75
// strings: 

void FUN_01834abc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined2 *local_14;
  
  if (param_1[2] != 2) {
    if ((param_1[2] & 1) == 0) {
      iVar1 = param_1[3];
      iVar2 = param_1[4];
    }
    else {
      iVar2 = param_1[4];
      iVar1 = param_1[3] + (*(int *)(iVar2 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(iVar2 + 0x40))(iVar1,param_1[1],*param_1,param_1[1]);
  }
  if ((DAT_01d51ae9 == '\0') && (iVar1 = param_1[6], iVar1 != 0)) {
    local_1c = *(undefined4 *)(iVar1 + 0x10);
    local_20 = *(undefined4 *)(iVar1 + 0xc);
    local_18 = &local_20;
    local_14 = &DAT_0132b6a0;
    FUN_006404a8(param_1,&DAT_005312cd,0xd,&DAT_00593eec,&local_18);
  }
  FUN_013536dc(param_1);
  return;
}

