// FUN_00fedd28 @ 00fedd28 size=156 calls_out=1 calls_in=1
// strings: 

void FUN_00fedd28(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  uVar1 = 0;
  if (*param_2 != 0) {
    if (*param_2 == 1) {
      uVar4 = *(undefined8 *)(param_2 + 1);
    }
    else {
      iVar2 = param_2[1];
      iVar3 = param_2[2];
      FUN_015e8ad4(local_40,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
      FUN_015e8ad4(local_30,*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x14));
      uVar4 = (**(code **)(iVar3 + 0x10))(iVar2);
    }
    *(undefined8 *)(param_1 + 1) = uVar4;
    uVar1 = 1;
  }
  *param_1 = uVar1;
  return;
}

