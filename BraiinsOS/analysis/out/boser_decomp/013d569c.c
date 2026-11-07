// FUN_013d569c @ 013d569c size=100 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_013d569c(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = *param_2;
  iVar2 = param_2[1];
  FUN_01321fc0(&local_24,&DAT_004a615c,0x202,*(undefined4 *)(*param_1 + 4),
               *(undefined4 *)(*param_1 + 8));
  uVar1 = (**(code **)(iVar2 + 0xc))(uVar1,local_20,local_1c);
  FUN_019bb7e0(local_24,local_20);
  return uVar1;
}

