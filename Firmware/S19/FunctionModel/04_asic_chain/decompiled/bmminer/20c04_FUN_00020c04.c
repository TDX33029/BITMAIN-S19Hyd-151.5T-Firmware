// FUN_00020c04 @ 00020c04  size=88  callers=3
// program: bmminer


void FUN_00020c04(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  uVar1 = param_2;
  do {
    uVar3 = FUN_000201d8(uVar2,uVar1);
    uVar1 = (int)((ulonglong)uVar3 >> 0x20);
    if (((int)uVar3 != 0) && (uVar1 = param_2, param_1 == uVar2 || param_1 == 0xff)) {
      FUN_000576f4(uVar2 & 0xff,param_2,param_3,param_4);
      uVar1 = extraout_r1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 4);
  return;
}

