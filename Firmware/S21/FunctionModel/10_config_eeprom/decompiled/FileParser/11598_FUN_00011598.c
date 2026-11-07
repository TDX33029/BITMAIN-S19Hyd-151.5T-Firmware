// FUN_00011598 @ 00011598  size=304  callers=4
// program: FileParser


undefined8
FUN_00011598(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = (ulonglong)(param_1 ^ param_3) * (ulonglong)param_5;
  uVar2 = (param_1 ^ param_3) * param_6 + (param_2 ^ param_4) * param_5 +
          (int)((ulonglong)lVar1 >> 0x20);
  param_3 = param_3 ^ (uint)lVar1 ^ uVar2 >> 0xf;
  lVar1 = (ulonglong)param_3 * (ulonglong)param_5;
  uVar2 = param_3 * param_6 + (param_4 ^ uVar2) * param_5 + (int)((ulonglong)lVar1 >> 0x20);
  uVar3 = (uint)lVar1 ^ uVar2 >> 0xf;
  lVar1 = (ulonglong)param_5 * (ulonglong)uVar3;
  return CONCAT44(param_5 * uVar2 + uVar3 * param_6 + (int)((ulonglong)lVar1 >> 0x20),(int)lVar1);
}

