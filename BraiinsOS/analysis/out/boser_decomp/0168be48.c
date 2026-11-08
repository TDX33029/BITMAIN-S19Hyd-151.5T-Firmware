// FUN_0168be48 @ 0168be48 size=208 calls_out=7 calls_in=1
// strings: 

void FUN_0168be48(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_4c [4];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [16];
  
  local_40 = *(undefined4 *)(param_2 + 0xa8);
  uStack_3c = *(undefined4 *)(param_2 + 0xac);
  uStack_38 = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_2 + 0xac) = 1;
  *(undefined4 *)(param_2 + 0xa8) = 0;
  *(undefined4 *)(param_2 + 0xb0) = 0;
  FUN_0168b9a4(auStack_4c);
  puVar2 = *(undefined4 **)(param_2 + 0xb4);
  FUN_0168bf40(*puVar2,param_4,local_48,local_44);
  *(undefined4 *)(param_2 + 0x50) = 0;
  uVar1 = FUN_0168ba4c(local_48,local_44);
  FUN_0168b55c(*puVar2,param_3,uVar1,param_2 + 0x9c,param_2 + 0x38);
  FUN_0168ba9c(auStack_34,auStack_4c);
  FUN_0168bb80(**(undefined4 **)(param_2 + 0xb4),param_2 + 0x38,auStack_34);
  FUN_0168af54(param_1,param_2,auStack_34);
  return;
}

