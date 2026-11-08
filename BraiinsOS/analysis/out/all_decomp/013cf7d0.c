// FUN_013cf7d0 @ 013cf7d0 size=268 calls_out=6 calls_in=1
// strings: 

void FUN_013cf7d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_40 [16];
  int local_30;
  int local_2c;
  int local_28;
  
  local_30 = *(int *)(param_2 + 0xa8);
  local_2c = *(int *)(param_2 + 0xac);
  local_28 = *(int *)(param_2 + 0xb0);
  *(undefined4 *)(param_2 + 0xa8) = 0;
  *(undefined4 *)(param_2 + 0xac) = 1;
  *(undefined4 *)(param_2 + 0xb0) = 0;
  if ((uint)(local_30 - local_28) < 9) {
    FUN_013c4434(&local_30,local_28,9,1,1);
  }
  iVar2 = local_2c;
  iVar1 = local_30;
  puVar3 = (undefined4 *)(local_2c + local_28);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 0;
  iVar4 = local_28 + 9;
  puVar3 = *(undefined4 **)(param_2 + 0xb4);
  FUN_013c5f64(*puVar3,param_4,local_2c,iVar4);
  *(undefined4 *)(param_2 + 0x50) = 0;
  FUN_013c5b10(*puVar3,param_3,*(undefined4 *)(iVar2 + 1),param_2 + 0x9c,param_2 + 0x38);
  local_30 = iVar1;
  local_2c = iVar2;
  local_28 = iVar4;
  FUN_013c6f70(auStack_40,&local_30);
  FUN_013c56bc(**(undefined4 **)(param_2 + 0xb4),param_2 + 0x38,auStack_40);
  FUN_013cf1fc(param_1,param_2,auStack_40);
  return;
}

