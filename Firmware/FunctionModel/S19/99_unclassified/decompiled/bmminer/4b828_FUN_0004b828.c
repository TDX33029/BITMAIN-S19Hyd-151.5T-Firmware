// FUN_0004b828 @ 0004b828  size=340  callers=2
// program: bmminer


void FUN_0004b828(void *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined *local_818 [512];
  
  snprintf((char *)local_818,0x800,"Dumping %u %s bytes from %p:\n",param_2,"read return data",
           param_1);
  uVar3 = 0;
  FUN_00032218(2,local_818);
  do {
    while (param_2 <= uVar3) {
      uVar3 = uVar3 + 1;
      local_818[0] = &DAT_00202020;
      FUN_00032218(2,local_818,0);
      if (uVar3 == 0x10) goto LAB_0004b8e0;
    }
    pbVar1 = (byte *)((int)param_1 + uVar3);
    uVar3 = uVar3 + 1;
    snprintf((char *)local_818,0x800,"%02x ",(uint)*pbVar1);
    FUN_00032218(2,local_818,0);
  } while (uVar3 != 0x10);
LAB_0004b8e0:
  uVar3 = 0;
  do {
    while (param_2 <= uVar3) {
      uVar3 = uVar3 + 1;
      local_818[0] = (undefined *)CONCAT22(local_818[0]._2_2_,0x20);
      FUN_00032218(2,local_818,0);
      if (uVar3 == 0x10) goto LAB_0004b958;
    }
    uVar2 = (uint)*(byte *)((int)param_1 + uVar3);
    uVar3 = uVar3 + 1;
    if (0x5e < uVar2 - 0x20) {
      uVar2 = 0x2e;
    }
    snprintf((char *)local_818,0x800,"%c",uVar2);
    FUN_00032218(2,local_818,0);
  } while (uVar3 != 0x10);
LAB_0004b958:
  local_818[0] = (undefined *)CONCAT22(local_818[0]._2_2_,10);
  FUN_00032218(2,local_818,0);
  return;
}

