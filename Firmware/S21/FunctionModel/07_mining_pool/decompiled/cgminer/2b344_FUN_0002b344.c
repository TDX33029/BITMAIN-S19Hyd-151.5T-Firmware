// FUN_0002b344 @ 0002b344  size=136  callers=1
// program: cgminer


void FUN_0002b344(void)

{
  int *piVar2;
  int *piVar1;
  int iVar3;
  int *piVar4;
  
  DAT_000681d8 = 0;
  DAT_000681dc = 0;
  DAT_00068b10 = 0;
  DAT_00068b14 = 0;
  FUN_00028838(0,0,&DAT_000681d8,8,0);
  if (0 < DAT_00072e70) {
    piVar4 = DAT_00072f14 + DAT_00072e70;
    piVar1 = DAT_00072f14;
    do {
      piVar2 = piVar1 + 1;
      iVar3 = *piVar1;
      *(undefined4 *)(iVar3 + 0x170) = 0;
      *(undefined4 *)(iVar3 + 0x174) = 0;
      piVar1 = piVar2;
    } while (piVar2 != piVar4);
  }
  return;
}

