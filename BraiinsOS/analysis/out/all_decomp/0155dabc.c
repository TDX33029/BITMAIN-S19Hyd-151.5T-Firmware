// FUN_0155dabc @ 0155dabc size=220 calls_out=1 calls_in=0
// strings: 

byte FUN_0155dabc(undefined4 param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 *local_14;
  byte local_10;
  byte local_f;
  undefined1 local_a [2];
  
  local_10 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0040c6ec,0xd);
  local_f = 0;
  local_a[0] = 1;
  local_14 = param_2;
  FUN_00fb2258(&local_14,&DAT_0040c6f9,9,local_a,&LAB_015288f0);
  if (local_f != 1 || (local_10 & 1) != 0) {
    return (local_f | local_10) & 1;
  }
  if ((*(byte *)((int)local_14 + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_14[1] + 0xc))(*local_14," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_14[1] + 0xc))(*local_14,"}",1);
  return bVar1 & 1;
}

