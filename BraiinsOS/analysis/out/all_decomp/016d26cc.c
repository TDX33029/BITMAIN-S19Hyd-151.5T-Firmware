// FUN_016d26cc @ 016d26cc size=52 calls_out=2 calls_in=2
// strings: 

int FUN_016d26cc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_016d2e2a(param_1,0x84000);
  if (iVar1 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_016d38c8(1,0x818);
    if (iVar2 == 0) {
      software_interrupt(0);
    }
    else {
      *(int *)(iVar2 + 8) = iVar1;
    }
  }
  return iVar2;
}

