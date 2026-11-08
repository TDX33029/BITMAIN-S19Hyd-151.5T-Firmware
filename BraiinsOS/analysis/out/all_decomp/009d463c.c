// FUN_009d463c @ 009d463c size=184 calls_out=2 calls_in=2
// strings: 

void FUN_009d463c(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar4 = 0;
  iVar2 = *(int *)(param_2 + 0xb8);
  iVar5 = 4;
  local_48 = 0;
  local_4c = 4;
  local_50 = 0;
  if (iVar2 != 0) {
    do {
      iVar1 = local_48;
      FUN_009d415c(&local_40,param_2 + 0x18,param_3);
      if (iVar1 == local_50) {
        FUN_009b6c80(&local_50);
        iVar5 = local_4c;
      }
      puVar3 = (undefined4 *)(iVar5 + iVar4);
      local_48 = iVar1 + 1;
      iVar4 = iVar4 + 0x18;
      *puVar3 = local_40;
      puVar3[1] = uStack_3c;
      puVar3[2] = uStack_38;
      puVar3[3] = uStack_34;
      puVar3[4] = uStack_30;
      puVar3[5] = uStack_2c;
    } while (iVar2 != local_48);
  }
  *param_1 = local_50;
  param_1[1] = local_4c;
  param_1[2] = local_48;
  return;
}

