// FUN_00fdafb4 @ 00fdafb4 size=256 calls_out=1 calls_in=0
// strings: 

byte FUN_00fdafb4(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int local_1c;
  undefined4 *local_18;
  byte local_14;
  byte local_13;
  
  local_1c = param_1 + 4;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0040b815,0xb);
  local_13 = 0;
  local_18 = param_2;
  uVar2 = FUN_00fb2258(&local_18,&DAT_0056a668,8,param_1,FUN_007883b8);
  FUN_00fb2258(uVar2,&DAT_005691b4,4,&local_1c,FUN_00fdb0d0);
  if (local_13 != 1 || (local_14 & 1) != 0) {
    return (local_13 | local_14) & 1;
  }
  if ((*(byte *)((int)local_18 + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_18[1] + 0xc))(*local_18," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_18[1] + 0xc))(*local_18,"}",1);
  return bVar1 & 1;
}

