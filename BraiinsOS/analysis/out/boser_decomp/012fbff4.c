// FUN_012fbff4 @ 012fbff4 size=168 calls_out=1 calls_in=4
// strings: 

void FUN_012fbff4(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_28 [8];
  
  puVar3 = (uint *)(param_2 + 8);
  uVar5 = *puVar3;
  uVar6 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = uVar5;
  if ((uVar5 & 0x800000) != 0) {
    if ((uVar5 & 0x8000000) == 0) {
      *(undefined2 *)(param_2 + 0xc) = 10;
      uVar2 = uVar5 | 0x9000000;
    }
    else {
      uVar2 = uVar5 | 0x1000000;
    }
  }
  *puVar3 = uVar2 | 0x800000;
  iVar1 = 7;
  do {
    iVar4 = iVar1;
    uVar2 = param_1 & 0xf;
    param_1 = param_1 >> 4;
    auStack_28[iVar4] = (&DAT_005679b8)[uVar2];
    iVar1 = iVar4 + -1;
  } while (param_1 != 0);
  FUN_012fa378(param_2,1,"0x",2,auStack_28 + iVar4,9 - (iVar4 + 1));
  *puVar3 = uVar5;
  *(undefined4 *)(param_2 + 0xc) = uVar6;
  return;
}

