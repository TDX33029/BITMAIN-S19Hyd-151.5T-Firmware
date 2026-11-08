// FUN_0152dc60 @ 0152dc60 size=184 calls_out=0 calls_in=1
// strings: 

longlong FUN_0152dc60(longlong *param_1,int param_2,uint param_3,uint param_4,undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint unaff_r7;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    return (ulonglong)unaff_r7 << 0x20;
  }
  plVar5 = param_1 + param_2;
  do {
    lVar2 = *param_1;
    uVar4 = *(uint *)((int)param_1 + 4);
    lVar1 = *param_1;
    iVar3 = (**(code **)(uVar4 + 0x24))((int)lVar2,param_5);
    if (iVar3 != 0) {
      uVar6 = (**(code **)(uVar4 + 0x1c))((int)lVar2);
      if ((((uint)uVar6 & 0xffff) == (param_3 & 0xffff)) &&
         ((param_3 & 0xffff) != 0xf ||
          ((uint)((ulonglong)uVar6 >> 0x20) & 0xffff) == (param_4 & 0xffff))) {
        return lVar1;
      }
    }
    param_1 = param_1 + 1;
    if (param_1 == plVar5) {
      return (ulonglong)uVar4 << 0x20;
    }
  } while( true );
}

