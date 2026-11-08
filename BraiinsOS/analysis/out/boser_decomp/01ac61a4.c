// FUN_01ac61a4 @ 01ac61a4 size=96 calls_out=1 calls_in=12
// strings: 

void FUN_01ac61a4(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  
  iVar2 = 0;
  do {
    if (param_3 == iVar2) {
      FUN_012834b0(param_1);
      uVar3 = 0;
      break;
    }
    bVar1 = *(byte *)(param_2 + iVar2);
    iVar2 = iVar2 + 1;
    uVar3 = 2;
  } while ((bVar1 == 9) || (0x1f < bVar1 && bVar1 != 0x7f));
  *(undefined1 *)(param_1 + 0x10) = uVar3;
  return;
}

