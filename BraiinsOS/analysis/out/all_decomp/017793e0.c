// FUN_017793e0 @ 017793e0 size=276 calls_out=5 calls_in=1
// strings: 

ulonglong FUN_017793e0(int param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
                      undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                      undefined4 param_10,undefined4 param_11)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  if (param_3 == 0) {
    uVar1 = 1;
LAB_01779428:
    return (ulonglong)uVar1;
  }
  FUN_016dd606(param_2,0);
  iVar2 = FUN_0172bf50();
  if (param_1 == iVar2) {
    uVar3 = FUN_0172b15c();
    iVar2 = FUN_0173fae8(param_2,param_3,uVar3,param_4,param_5 - (param_5 >> 1),param_6,param_7,
                         param_8,param_9,param_10,param_11);
    uVar1 = 0;
    if (iVar2 == 0) goto LAB_01779428;
    param_4 = param_4 + (param_5 >> 1);
    param_1 = FUN_0172b1f4();
  }
  uVar4 = FUN_0173fae8(param_2,param_3,param_1,param_4);
  return uVar4;
}

