// FUN_00809118 @ 00809118 size=92 calls_out=1 calls_in=0
// strings: 

void FUN_00809118(int param_1)

{
  byte bVar1;
  char cVar2;
  
  if (*(int *)(param_1 + 4) == 2) {
    FUN_010fc1b4(param_1 + 8);
  }
  bVar1 = *(byte *)(param_1 + 0x20);
  cVar2 = bVar1 - 4;
  if (bVar1 < 4) {
    cVar2 = '\x04';
  }
  if (cVar2 == '\x04') {
    if (bVar1 != 3) {
      return;
    }
  }
  else if (cVar2 != '\x05') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00809164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(param_1 + 0x24))();
  return;
}

