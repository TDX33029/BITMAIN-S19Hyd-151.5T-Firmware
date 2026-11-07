// FUN_01bf0df0 @ 01bf0df0 size=136 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01bf0df0(uint param_1,uint param_2,uint param_3,uint param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  uVar1 = (int)param_4 >> 0x1f;
  uVar2 = (int)param_2 >> 0x1f;
  FUN_01bf0680(&local_30,param_2 ^ uVar2,(param_1 ^ uVar2) - uVar2,
               (param_2 ^ uVar2) - (uVar2 + ((param_1 ^ uVar2) < uVar2)),(param_3 ^ uVar1) - uVar1,
               (param_4 ^ uVar1) - (uVar1 + ((param_3 ^ uVar1) < uVar1)));
  iVar4 = -(local_24 + (uint)(local_28 != 0));
  iVar3 = -local_28;
  if (-1 < (int)param_2) {
    iVar4 = local_24;
    iVar3 = local_28;
  }
  *param_5 = iVar3;
  param_5[1] = iVar4;
  iVar4 = -local_30;
  iVar3 = -(local_2c + (uint)(local_30 != 0));
  if (-1 < (int)(param_4 ^ param_2)) {
    iVar4 = local_30;
    iVar3 = local_2c;
  }
  return CONCAT44(iVar3,iVar4);
}

