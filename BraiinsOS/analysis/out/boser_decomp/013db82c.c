// FUN_013db82c @ 013db82c size=116 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_013db82c(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 *local_20;
  undefined1 *local_1c;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_01321fc0(&uStack_2c,&DAT_004a615c,0x202,*(undefined4 *)(*param_1 + 4),
               *(undefined4 *)(*param_1 + 8));
  local_1c = &LAB_00632348;
  local_20 = &uStack_2c;
  uVar1 = FUN_012fa178(uVar1,uVar2,&DAT_0059e7d2,&local_20);
  FUN_019bb7e0(uStack_2c,uStack_28);
  return uVar1;
}

