// FUN_0190b154 @ 0190b154 size=164 calls_out=0 calls_in=4
// strings: 

undefined8
FUN_0190b154(undefined4 *param_1,int param_2,uint param_3,uint param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r7;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  uVar1 = 0;
  if (param_2 != 0) {
    puVar3 = param_1 + param_2 * 2;
    do {
      uVar1 = *param_1;
      unaff_r7 = param_1[1];
      iVar2 = (**(code **)(unaff_r7 + 0x24))(uVar1,param_5);
      if (iVar2 != 0) {
        uVar4 = (**(code **)(unaff_r7 + 0x1c))(uVar1);
        if ((((uint)uVar4 & 0xffff) == (param_3 & 0xffff)) &&
           ((param_3 & 0xffff) != 0xf ||
            ((uint)((ulonglong)uVar4 >> 0x20) & 0xffff) == (param_4 & 0xffff))) goto LAB_0190b1ec;
      }
      param_1 = param_1 + 2;
    } while (param_1 != puVar3);
    uVar1 = 0;
  }
LAB_0190b1ec:
  return CONCAT44(unaff_r7,uVar1);
}

