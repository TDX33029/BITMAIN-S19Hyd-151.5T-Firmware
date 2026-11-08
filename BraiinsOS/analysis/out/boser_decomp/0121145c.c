// FUN_0121145c @ 0121145c size=116 calls_out=6 calls_in=0
// strings: 

char FUN_0121145c(int param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int extraout_r2;
  
  iVar3 = FUN_01ab095c(param_1 + 800);
  uVar5 = 0;
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = FUN_01ab6cbc(param_1,param_2);
    uVar5 = uVar4 & 0xff;
  }
  iVar3 = thunk_FUN_01bee35a(uVar4,uVar5,0x60);
  FUN_01ab2378(iVar3 + extraout_r2);
  iVar3 = param_1 + 0x480;
  bVar1 = *(byte *)(param_1 + 0x999);
  FUN_012064d4(iVar3,param_2);
  cVar2 = FUN_012114d4(iVar3,iVar3);
  if (cVar2 == '\0' && (bVar1 & 1) == 0) {
    cVar2 = *(char *)(param_1 + 0x99a);
  }
  return cVar2;
}

