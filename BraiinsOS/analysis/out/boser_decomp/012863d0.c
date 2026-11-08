// FUN_012863d0 @ 012863d0 size=88 calls_out=0 calls_in=0
// strings: 

undefined8 FUN_012863d0(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  uVar3 = 0;
  iVar4 = param_4 - (uint)(param_3 == 0);
  bVar5 = param_3 - 1 < 0xc;
  uVar1 = -(iVar4 + (uint)!bVar5);
  if ((uint)-iVar4 < (uint)bVar5) {
    uVar1 = param_3 ^ 0xc;
    uVar2 = 0;
    if (uVar1 != 0 || param_4 != 0) {
      uVar2 = param_3;
    }
    if (*(int *)(param_1 + 0x80) == 1) {
      uVar1 = *(uint *)(param_1 + 0x84);
      uVar3 = 1;
      if (uVar1 != uVar2) goto LAB_01286420;
    }
    uVar3 = 8;
    *(undefined4 *)(param_1 + 0x80) = 1;
    *(uint *)(param_1 + 0x84) = uVar2;
  }
LAB_01286420:
  return CONCAT44(uVar1,uVar3);
}

