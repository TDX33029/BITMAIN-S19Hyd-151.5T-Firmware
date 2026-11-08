// FUN_01b2b404 @ 01b2b404 size=200 calls_out=4 calls_in=0
// strings: 

int FUN_01b2b404(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_01b1fdf4();
  if (iVar1 != 0) {
    puVar3 = *(undefined4 **)(param_2 + 0x14);
    puVar4 = *(undefined4 **)(param_1 + 0x14);
    iVar2 = puVar3[1];
    *puVar4 = *puVar3;
    if (iVar2 != 0) {
      iVar2 = FUN_01b2b3b0();
      puVar4[1] = iVar2;
      if (iVar2 == 0) {
        return 0;
      }
    }
    puVar4[2] = puVar3[2];
    puVar4[3] = puVar3[3];
    puVar4[4] = puVar3[4];
    puVar4[5] = puVar3[5];
    if (puVar3[8] == 0) {
      return iVar1;
    }
    FUN_01b6b1c4(puVar4[8]);
    iVar2 = FUN_01b6bc20(puVar3[8],puVar3[9]);
    puVar4[8] = iVar2;
    if (iVar2 != 0) {
      puVar4[9] = puVar3[9];
      return iVar1;
    }
  }
  return 0;
}

