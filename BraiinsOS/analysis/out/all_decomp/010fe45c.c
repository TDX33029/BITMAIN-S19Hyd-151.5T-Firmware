// FUN_010fe45c @ 010fe45c size=252 calls_out=2 calls_in=7
// strings: 

void FUN_010fe45c(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_1a [10];
  
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      uVar4 = *param_1;
      uVar2 = uVar4;
      if ((int)uVar4 < 0) {
        uVar2 = -uVar4;
      }
      iVar1 = FUN_00fabc64(uVar2,auStack_1a);
      FUN_00fa9698(param_2,~uVar4 >> 0x1f,1,0,auStack_1a + iVar1,10 - iVar1);
      return;
    }
    uVar2 = *param_1;
    iVar1 = 7;
    do {
      iVar3 = iVar1;
      uVar4 = uVar2 & 0xf;
      uVar2 = uVar2 >> 4;
      auStack_1a[iVar3] = (&DAT_005642f0)[uVar4];
      iVar1 = iVar3 + -1;
    } while (uVar2 != 0);
  }
  else {
    uVar2 = *param_1;
    iVar1 = 7;
    do {
      iVar3 = iVar1;
      uVar4 = uVar2 & 0xf;
      uVar2 = uVar2 >> 4;
      auStack_1a[iVar3] = (&DAT_00563e90)[uVar4];
      iVar1 = iVar3 + -1;
    } while (uVar2 != 0);
  }
  FUN_00fa9698(param_2,1,"0x",2,auStack_1a + iVar3,9 - (iVar3 + 1));
  return;
}

