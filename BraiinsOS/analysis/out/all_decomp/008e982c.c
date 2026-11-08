// FUN_008e982c @ 008e982c size=120 calls_out=1 calls_in=0
// strings: 

void FUN_008e982c(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 4) == 2) {
    FUN_010fc1b4(param_1 + 8);
  }
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 == 0) {
    bVar1 = *(byte *)(param_1 + 0x28);
    cVar2 = bVar1 - 4;
    if (bVar1 < 4) {
      cVar2 = '\x04';
    }
    iVar3 = 0xc;
    if ((cVar2 != '\x05') && (cVar2 != '\x04' || bVar1 != 3)) {
      return;
    }
  }
  else {
    iVar3 = 4;
    if (iVar4 != 2) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x008e9874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(param_1 + 0x20 + iVar3))();
  return;
}

