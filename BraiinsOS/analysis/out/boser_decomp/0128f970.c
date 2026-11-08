// FUN_0128f970 @ 0128f970 size=224 calls_out=3 calls_in=2
// strings: 

void FUN_0128f970(int *param_1,undefined4 *param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  
  uVar1 = 0;
  iVar2 = 0;
  if (param_5 != 0) {
    iVar2 = (int)&DAT_3b9aca00 - param_5;
    uVar1 = 0xffffffff;
  }
  FUN_0128e5fc(&local_28,param_2[1],param_2[2],param_4,uVar1 - param_3,
               uVar1 - (param_4 + (uint)(uVar1 < param_3)),iVar2);
  uVar1 = local_1c + -0x20c49c + (uint)(0xa5e353f7 < local_20);
  if (((uVar1 < 0xffbe76c9 &&
        (undefined *)(uint)(0xb4395810 < local_20 + 0x5a1cac08) <= &UNK_00418938 + uVar1) ||
      (uVar3 = FUN_01bf0fb0(local_20,local_1c,0xfffeae80,0xffffffff),
      (int)((ulonglong)uVar3 >> 0x20) - (uint)((uint)uVar3 < 0x80000001) != -1)) ||
     (iVar2 = FUN_01291bd0(*param_2,-(uint)uVar3), iVar2 == 0)) {
    *param_1 = 0;
  }
  else {
    *param_1 = iVar2;
    param_1[1] = local_28;
    param_1[2] = local_24;
  }
  return;
}

