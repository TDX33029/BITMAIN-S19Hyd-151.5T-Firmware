// FUN_01bbf48c @ 01bbf48c size=88 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01bbf48c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x20);
  bVar1 = *(byte *)(iVar3 + param_2);
  puVar2 = (undefined4 *)
           (*(int *)(param_1 + 0x18) + ((uint)bVar1 + (param_2 << (param_5 & 0xff))) * 8);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  *(byte *)(iVar3 + param_2) = bVar1 + 1 & ~(byte)(-1 << (param_5 & 0xff));
  return 0;
}

