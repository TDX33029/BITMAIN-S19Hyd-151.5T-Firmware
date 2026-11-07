// FUN_0111ac40 @ 0111ac40 size=248 calls_out=2 calls_in=2
// strings: 

void FUN_0111ac40(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_1a [10];
  
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      uVar3 = param_1;
      if ((int)param_1 < 0) {
        uVar3 = -param_1;
      }
      iVar1 = FUN_00fabc64(uVar3,auStack_1a);
      FUN_00fa9698(param_2,~param_1 >> 0x1f,1,0,auStack_1a + iVar1,10 - iVar1);
      return;
    }
    iVar1 = 7;
    do {
      iVar2 = iVar1;
      uVar3 = param_1 & 0xf;
      param_1 = param_1 >> 4;
      auStack_1a[iVar2] = (&DAT_005642f0)[uVar3];
      iVar1 = iVar2 + -1;
    } while (param_1 != 0);
  }
  else {
    iVar1 = 7;
    do {
      iVar2 = iVar1;
      uVar3 = param_1 & 0xf;
      param_1 = param_1 >> 4;
      auStack_1a[iVar2] = (&DAT_00563e90)[uVar3];
      iVar1 = iVar2 + -1;
    } while (param_1 != 0);
  }
  FUN_00fa9698(param_2,1,"0x",2,auStack_1a + iVar2,9 - (iVar2 + 1));
  return;
}

