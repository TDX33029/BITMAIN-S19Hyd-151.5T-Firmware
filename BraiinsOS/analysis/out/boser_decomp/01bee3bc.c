// FUN_01bee3bc @ 01bee3bc size=86 calls_out=2 calls_in=1
// strings: 

void FUN_01bee3bc(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  
  if (DAT_01d53c08 != (undefined4 *)0x0) {
    puVar1 = DAT_01d53c08;
    if (-1 < param_1) {
      do {
        puVar3 = puVar1;
        if (param_1 == 0) {
          pcVar2 = (code *)puVar3[1];
        }
        else {
          pcVar2 = (code *)puVar3[2];
        }
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)();
        }
        puVar1 = (undefined4 *)puVar3[3];
        DAT_01d53c08 = puVar3;
      } while ((undefined4 *)puVar3[3] != (undefined4 *)0x0);
      FUN_01bee02c(&DAT_01d53c0c);
      return;
    }
    FUN_01bedf2c(&DAT_01d53c0c);
    puVar1 = DAT_01d53c08;
    while (puVar3 = puVar1, puVar3 != (undefined4 *)0x0) {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      DAT_01d53c08 = puVar3;
      puVar1 = (undefined4 *)puVar3[4];
    }
  }
  return;
}

