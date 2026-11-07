// FUN_01600464 @ 01600464 size=276 calls_out=2 calls_in=1
// strings: 

void FUN_01600464(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 auStack_22 [10];
  
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    uVar4 = *param_1;
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      uVar3 = uVar4;
      if ((int)uVar4 < 0) {
        uVar3 = -uVar4;
      }
      iVar1 = FUN_00fabc64(uVar3,auStack_22);
      FUN_00fa9698(param_2,~uVar4 >> 0x1f,1,0,auStack_22 + iVar1,10 - iVar1);
      return;
    }
    iVar1 = 7;
    do {
      iVar2 = iVar1;
      uVar3 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4;
      auStack_22[iVar2] = (&DAT_005642f0)[uVar3];
      iVar1 = iVar2 + -1;
    } while (uVar4 != 0);
    puVar5 = auStack_22 + iVar2;
  }
  else {
    uVar4 = *param_1;
    iVar1 = 7;
    do {
      iVar2 = iVar1;
      uVar3 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4;
      auStack_22[iVar2] = (&DAT_00563e90)[uVar3];
      iVar1 = iVar2 + -1;
    } while (uVar4 != 0);
    puVar5 = auStack_22 + iVar2;
  }
  FUN_00fa9698(param_2,1,"0x",2,puVar5,9 - (iVar2 + 1));
  return;
}

