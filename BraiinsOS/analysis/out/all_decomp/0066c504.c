// FUN_0066c504 @ 0066c504 size=80 calls_out=1 calls_in=0
// strings: 

void FUN_0066c504(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x38) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x34);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x10);
  }
  if (bVar2 && cVar1 == '\x04') {
    FUN_0163c790(param_1 + 0x14);
    if (*(int *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0066c550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)(param_1 + 0x18) + 0xc))(*(undefined4 *)(param_1 + 0x1c));
      return;
    }
  }
  return;
}

