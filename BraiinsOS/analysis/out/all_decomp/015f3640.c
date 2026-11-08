// FUN_015f3640 @ 015f3640 size=260 calls_out=2 calls_in=0
// strings: 

void FUN_015f3640(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_22 [10];
  
  puVar1 = (uint *)*param_1;
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      uVar5 = *puVar1;
      uVar3 = uVar5;
      if ((int)uVar5 < 0) {
        uVar3 = -uVar5;
      }
      iVar2 = FUN_00fabc64(uVar3,auStack_22);
      FUN_00fa9698(param_2,~uVar5 >> 0x1f,1,0,auStack_22 + iVar2,10 - iVar2);
      return;
    }
    uVar3 = *puVar1;
    iVar2 = 7;
    do {
      iVar4 = iVar2;
      uVar5 = uVar3 & 0xf;
      uVar3 = uVar3 >> 4;
      auStack_22[iVar4] = (&DAT_005642f0)[uVar5];
      iVar2 = iVar4 + -1;
    } while (uVar3 != 0);
  }
  else {
    uVar3 = *puVar1;
    iVar2 = 7;
    do {
      iVar4 = iVar2;
      uVar5 = uVar3 & 0xf;
      uVar3 = uVar3 >> 4;
      auStack_22[iVar4] = (&DAT_00563e90)[uVar5];
      iVar2 = iVar4 + -1;
    } while (uVar3 != 0);
  }
  FUN_00fa9698(param_2,1,"0x",2,auStack_22 + iVar4,9 - (iVar4 + 1));
  return;
}

