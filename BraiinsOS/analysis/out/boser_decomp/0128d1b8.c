// FUN_0128d1b8 @ 0128d1b8 size=88 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_0128d1b8(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 local_20 [2];
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_0128cc5c(local_20,param_1,param_2);
  uVar3 = FUN_0128cfc4(param_2,local_20[0],local_18,local_14);
  lVar1 = (uVar3 & 0xffffffff) * 0x15180;
  uVar2 = (uint)lVar1;
  return CONCAT44((int)(uVar3 >> 0x20) * 0x15180 + (int)((ulonglong)lVar1 >> 0x20) + param_4 +
                  (uint)CARRY4(uVar2,param_3),uVar2 + param_3);
}

