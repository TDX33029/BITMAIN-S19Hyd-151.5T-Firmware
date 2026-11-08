// FUN_01be83e0 @ 01be83e0 size=156 calls_out=4 calls_in=0
// strings: 

undefined4
FUN_01be83e0(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 unaff_r6;
  undefined1 auStack_110 [256];
  
  if (param_2 == 5) {
    iVar1 = FUN_01be71ca(param_5,param_5 + param_6,param_3,auStack_110,0x100);
    if ((0 < iVar1) && (iVar1 = FUN_01be8210(auStack_110), iVar1 != 0)) {
      FUN_01bedb6a(param_1[1],auStack_110);
    }
  }
  else if ((param_1[2] < 0x30) && (iVar1 = param_1[3], iVar1 == param_2)) {
    if (iVar1 == 1) {
      if (param_4 != 4) {
        return 0xffffffff;
      }
      unaff_r6 = 2;
    }
    else if (iVar1 == 0x1c) {
      if (param_4 != 0x10) {
        return 0xffffffff;
      }
      unaff_r6 = 10;
    }
    *(undefined4 *)(*param_1 + param_1[2] * 0x1c) = unaff_r6;
    *(undefined4 *)(param_1[2] * 0x1c + *param_1 + 4) = 0;
    iVar1 = param_1[2];
    param_1[2] = iVar1 + 1;
    FUN_01bed4e2(iVar1 * 0x1c + *param_1 + 8,param_3,param_4);
    return 0;
  }
  return 0;
}

