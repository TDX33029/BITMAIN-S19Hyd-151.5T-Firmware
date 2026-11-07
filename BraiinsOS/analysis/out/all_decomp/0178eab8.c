// FUN_0178eab8 @ 0178eab8 size=188 calls_out=5 calls_in=1
// strings: 

undefined4 FUN_0178eab8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_0178e650(param_1,param_2,param_3,param_4);
  uVar1 = (undefined4)((ulonglong)lVar2 >> 0x20);
  lVar3 = FUN_0178e6c0(param_1,uVar1,(int)lVar2,uVar1);
  FUN_0178e8b8(param_1,(int)((ulonglong)lVar3 >> 0x20),param_3,param_4);
  FUN_0178e3fc(param_1,extraout_r1,param_3,param_4);
  if (((param_3 == 0 && param_4 == 0) || (lVar2 == 0)) || (lVar3 == 0)) {
    FUN_0178e9e0(param_1,1);
    return 1;
  }
  FUN_0178e9e0(param_1,0);
  return 0;
}

