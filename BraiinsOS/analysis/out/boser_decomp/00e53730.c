// FUN_00e53730 @ 00e53730 size=144 calls_out=3 calls_in=2
// strings: 

void FUN_00e53730(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_38 [2];
  undefined4 local_34;
  undefined **local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar2 = *(int *)(param_1 + 0x324);
  iVar1 = *(int *)(param_1 + 800) + 8;
  local_40 = FUN_01a63640(iVar1);
  ppuStack_50 = &PTR_FUN_01cebf70;
  uStack_4c = 1;
  *(undefined1 *)(param_1 + 0x25d) = 1;
  local_44 = 0;
  local_48 = 0;
  local_3c = param_2;
  FUN_01386f04(param_1 + 0x238,&ppuStack_50);
  local_24 = 0;
  local_30 = &PTR_FUN_01ceb2a4;
  local_28 = 0;
  local_2c = 1;
  local_38[0] = 1;
  local_34 = param_2;
  FUN_01a63270(iVar1,iVar2 + 8,local_38);
  return;
}

