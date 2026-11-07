// FUN_00729a54 @ 00729a54 size=216 calls_out=1 calls_in=0
// strings: 

byte FUN_00729a54(undefined4 param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 local_14;
  undefined4 *local_10;
  byte local_c;
  byte local_b;
  
  local_14 = param_1;
  local_c = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003404f3,0xc);
  local_b = 0;
  local_10 = param_2;
  FUN_00fb2258(&local_10,&DAT_005691b4,4,&local_14,FUN_00729b70);
  if (local_b != 1 || (local_c & 1) != 0) {
    return (local_b | local_c) & 1;
  }
  if ((*(byte *)((int)local_10 + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_10[1] + 0xc))(*local_10," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_10[1] + 0xc))(*local_10,"}",1);
  return bVar1 & 1;
}

