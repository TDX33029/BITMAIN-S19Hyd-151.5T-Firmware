// FUN_0128f70c @ 0128f70c size=208 calls_out=3 calls_in=4
// strings: 

void FUN_0128f70c(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  
  FUN_0128e5fc(&local_28,param_2[1],param_2[2],param_4,param_3,param_4,param_5);
  uVar2 = local_1c + -0x20c49c + (uint)(0xa5e353f7 < local_20);
  if (uVar2 < 0xffbe76c9 &&
      (undefined *)(uint)(0xb4395810 < local_20 + 0x5a1cac08) <= &UNK_00418938 + uVar2) {
    *param_1 = 0;
  }
  else {
    uVar3 = FUN_01bf0fb0(local_20,local_1c,0x15180,0);
    if (((int)((ulonglong)uVar3 >> 0x20) - (uint)((uint)uVar3 < 0x80000000) == -1) &&
       (iVar1 = FUN_01291bd0(*param_2,(uint)uVar3), iVar1 != 0)) {
      *param_1 = iVar1;
      param_1[1] = local_28;
      param_1[2] = local_24;
    }
    else {
      *param_1 = 0;
    }
  }
  return;
}

