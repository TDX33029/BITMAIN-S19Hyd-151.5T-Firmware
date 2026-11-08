// FUN_012fd7a4 @ 012fd7a4 size=108 calls_out=2 calls_in=1
// strings: 

void FUN_012fd7a4(uint param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_37 [39];
  
  uVar1 = (int)param_4 >> 0x1f;
  param_1 = param_1 ^ uVar1;
  param_2 = param_2 ^ uVar1;
  param_3 = param_3 ^ uVar1;
  bVar2 = param_2 - uVar1 < (uint)(uVar1 <= param_1);
  iVar3 = FUN_012fc0a4(param_1 - uVar1,param_2 - (uVar1 + (uVar1 > param_1)),
                       param_3 - (uVar1 + (uVar1 >= param_2 && !bVar2)),
                       (param_4 ^ uVar1) -
                       (uVar1 + (param_3 <= uVar1 &&
                                (uint)(uVar1 < param_2 || bVar2) <= param_3 - uVar1)),auStack_37);
  FUN_012fa378(param_5,~param_4 >> 0x1f,1,0,auStack_37 + iVar3,0x27 - iVar3);
  return;
}

