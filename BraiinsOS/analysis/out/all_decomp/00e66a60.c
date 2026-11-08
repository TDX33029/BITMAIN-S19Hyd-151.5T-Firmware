// FUN_00e66a60 @ 00e66a60 size=72 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_00e66a60(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar2 = *param_1 + 1;
  uVar3 = param_1[1] + (uint)(0xfffffffe < *param_1);
  if (param_2 != -0x80000000) {
    bVar5 = CARRY4(uVar2,param_3);
    uVar1 = uVar2 + param_3;
    uVar4 = 5;
    if (param_3 < 0x10000) {
      uVar4 = 3;
    }
    if (param_3 < 0xfb) {
      uVar4 = 1;
    }
    uVar2 = uVar1 + uVar4;
    uVar3 = uVar3 + bVar5 + (uint)CARRY4(uVar1,uVar4);
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return 0;
}

