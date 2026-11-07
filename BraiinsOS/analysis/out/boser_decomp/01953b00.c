// FUN_01953b00 @ 01953b00 size=152 calls_out=5 calls_in=1
// strings: 

short FUN_01953b00(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uStack_24;
  int iStack_20;
  int local_1c;
  
  local_1c = 0;
  uStack_24 = 0;
  iStack_20 = 1;
  uVar6 = FUN_01297c64();
  iVar2 = (int)((ulonglong)uVar6 >> 0x20);
  uVar3 = 0;
  iVar4 = 1;
  iVar5 = 0;
  if (iVar2 != 0) {
    FUN_0132b898(&uStack_24,0,iVar2,1,1);
    uVar3 = uStack_24;
    iVar4 = iStack_20;
    iVar5 = local_1c;
  }
  FUN_01bed4e2(iVar4 + iVar5,(int)uVar6,iVar2);
  sVar1 = FUN_01297c94(iVar4,iVar5 + iVar2);
  FUN_019bb7e0(uVar3,iVar4);
  if (sVar1 == 0x255) {
    sVar1 = 0x250;
  }
  return sVar1;
}

