// FUN_01b28748 @ 01b28748 size=104 calls_out=2 calls_in=4
// strings: 

undefined8 FUN_01b28748(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    uVar1 = FUN_01b277c8(param_2 + iVar4);
    uVar2 = FUN_01b277c8(param_3 + iVar4);
    iVar3 = param_1 + iVar4;
    iVar4 = iVar4 + 4;
    FUN_01b28704(iVar3,uVar1 ^ uVar2);
  } while (iVar4 != 0x10);
  return 0;
}

