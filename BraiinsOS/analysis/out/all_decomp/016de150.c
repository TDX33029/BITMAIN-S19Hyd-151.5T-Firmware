// FUN_016de150 @ 016de150 size=86 calls_out=2 calls_in=1
// strings: 

void FUN_016de150(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  
  if (DAT_018de1a0 != (undefined4 *)0x0) {
    puVar1 = DAT_018de1a0;
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
        DAT_018de1a0 = puVar3;
      } while ((undefined4 *)puVar3[3] != (undefined4 *)0x0);
      FUN_016dddc0(&DAT_018de1a4);
      return;
    }
    FUN_016ddcc0(&DAT_018de1a4);
    puVar1 = DAT_018de1a0;
    while (puVar3 = puVar1, puVar3 != (undefined4 *)0x0) {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      DAT_018de1a0 = puVar3;
      puVar1 = (undefined4 *)puVar3[4];
    }
  }
  return;
}

