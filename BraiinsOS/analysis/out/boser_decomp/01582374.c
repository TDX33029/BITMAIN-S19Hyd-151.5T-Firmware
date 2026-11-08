// FUN_01582374 @ 01582374 size=236 calls_out=3 calls_in=2
// strings: 

void FUN_01582374(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar3 = (undefined4 *)param_2[1];
  iVar4 = param_2[2];
  puVar1 = param_1;
  if (iVar4 != 0) {
    puVar1 = (undefined4 *)param_3[2];
  }
  puVar2 = (undefined4 *)param_3[1];
  if (iVar4 != 0 && puVar1 != (undefined4 *)0x0) {
    if (puVar1 == (undefined4 *)&DAT_00000001) {
      local_30 = *param_2;
      uStack_2c = param_2[1];
      uStack_28 = param_2[2];
      FUN_01646e78(&local_30,*puVar2);
      param_2 = param_3;
      puVar3 = puVar2;
    }
    else {
      if (iVar4 != 1) {
        FUN_01646fc8(param_1,puVar3,iVar4,puVar2,puVar1);
        goto LAB_015823b0;
      }
      local_30 = *param_3;
      uStack_2c = param_3[1];
      uStack_28 = param_3[2];
      FUN_01646e78(&local_30,*puVar3);
    }
    *param_1 = local_30;
    param_1[1] = uStack_2c;
    param_1[2] = uStack_28;
  }
  else {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
LAB_015823b0:
    FUN_0134aee0(*param_3,puVar2,4,4);
  }
  FUN_0134aee0(*param_2,puVar3,4,4);
  return;
}

