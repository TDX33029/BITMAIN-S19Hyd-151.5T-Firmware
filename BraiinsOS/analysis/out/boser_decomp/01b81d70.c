// FUN_01b81d70 @ 01b81d70 size=120 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01b81d70(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = *param_2;
  uVar1 = uVar3 + *(int *)(param_2[2] + param_3 * 8 + 4) >> 0x10;
  uVar2 = *(ushort *)
           (param_2[1] + (*(int *)(param_2[2] + param_3 * 8) + ((int)uVar3 >> (uVar1 & 0xff))) * 2);
  *param_1 = *param_1 | (*(uint *)(&DAT_00561c54 + uVar1 * 4) & uVar3) << (param_1[1] & 0xff);
  param_1[1] = uVar1 + param_1[1];
  *param_2 = (uint)uVar2;
  return 0;
}

