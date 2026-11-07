// FUN_01737c0c @ 01737c0c size=80 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01737c0c(uint *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_3 >> 5;
  uVar2 = param_3 & uVar1 - 1 | -uVar1 & 0x3f - param_3;
  *param_1 = uVar1 & 1;
  *param_2 = (uVar2 & 1) + (uVar2 >> 1);
  return 0;
}

