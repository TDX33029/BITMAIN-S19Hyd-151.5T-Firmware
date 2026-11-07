// FUN_009f2ca4 @ 009f2ca4 size=292 calls_out=2 calls_in=0
// strings: 

void FUN_009f2ca4(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_2c [20];
  
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      uVar4 = param_1[1];
      uVar2 = (int)uVar4 >> 0x1f;
      iVar1 = FUN_00fabdb8((*param_1 ^ uVar2) - uVar2,
                           (uVar4 ^ uVar2) - (uVar2 + ((*param_1 ^ uVar2) < uVar2)),auStack_2c,0x14)
      ;
      FUN_00fa9698(param_2,~uVar4 >> 0x1f,1,0,auStack_2c + iVar1,0x14 - iVar1);
      return;
    }
    uVar4 = *param_1;
    uVar2 = param_1[1];
    iVar1 = 0xf;
    do {
      iVar3 = iVar1;
      uVar5 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4 | uVar2 << 0x1c;
      auStack_2c[iVar3] = (&DAT_005642f0)[uVar5];
      uVar5 = uVar2 >> 4;
      uVar2 = uVar2 >> 4;
      iVar1 = iVar3 + -1;
    } while (uVar4 != 0 || uVar5 != 0);
  }
  else {
    uVar4 = *param_1;
    uVar2 = param_1[1];
    iVar1 = 0xf;
    do {
      iVar3 = iVar1;
      uVar5 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4 | uVar2 << 0x1c;
      auStack_2c[iVar3] = (&DAT_00563e90)[uVar5];
      uVar5 = uVar2 >> 4;
      uVar2 = uVar2 >> 4;
      iVar1 = iVar3 + -1;
    } while (uVar4 != 0 || uVar5 != 0);
  }
  FUN_00fa9698(param_2,1,"0x",2,auStack_2c + iVar3,0x11 - (iVar3 + 1));
  return;
}

