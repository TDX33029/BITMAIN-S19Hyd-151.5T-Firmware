// FUN_00fb9c88 @ 00fb9c88 size=284 calls_out=2 calls_in=1
// strings: 

void FUN_00fb9c88(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_2c [20];
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  ClearExclusiveLocal();
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      uVar1 = (int)uVar5 >> 0x1f;
      iVar2 = FUN_00fabdb8((uVar4 ^ uVar1) - uVar1,
                           (uVar5 ^ uVar1) - (uVar1 + ((uVar4 ^ uVar1) < uVar1)),auStack_2c,0x14);
      FUN_00fa9698(param_2,~uVar5 >> 0x1f,1,0,auStack_2c + iVar2,0x14 - iVar2);
      return;
    }
    iVar2 = 0xf;
    do {
      iVar3 = iVar2;
      auStack_2c[iVar3] = (&DAT_005642f0)[uVar4 & 0xf];
      uVar4 = uVar4 >> 4 | uVar5 << 0x1c;
      uVar1 = uVar5 >> 4;
      uVar5 = uVar5 >> 4;
      iVar2 = iVar3 + -1;
    } while (uVar4 != 0 || uVar1 != 0);
  }
  else {
    iVar2 = 0xf;
    do {
      iVar3 = iVar2;
      auStack_2c[iVar3] = (&DAT_00563e90)[uVar4 & 0xf];
      uVar4 = uVar4 >> 4 | uVar5 << 0x1c;
      uVar1 = uVar5 >> 4;
      uVar5 = uVar5 >> 4;
      iVar2 = iVar3 + -1;
    } while (uVar4 != 0 || uVar1 != 0);
  }
  FUN_00fa9698(param_2,1,"0x",2,auStack_2c + iVar3,0x11 - (iVar3 + 1));
  return;
}

