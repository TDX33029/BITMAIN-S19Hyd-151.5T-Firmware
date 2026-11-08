// FUN_015c46a4 @ 015c46a4 size=172 calls_out=1 calls_in=0
// strings: 

void FUN_015c46a4(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 auStack_28 [8];
  
  uVar2 = *param_1;
  puVar4 = (uint *)(param_2 + 8);
  uVar6 = *puVar4;
  uVar7 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = uVar6;
  if ((uVar6 & 0x800000) != 0) {
    if ((uVar6 & 0x8000000) == 0) {
      *(undefined2 *)(param_2 + 0xc) = 10;
      uVar3 = uVar6 | 0x9000000;
    }
    else {
      uVar3 = uVar6 | 0x1000000;
    }
  }
  *puVar4 = uVar3 | 0x800000;
  iVar1 = 7;
  do {
    iVar5 = iVar1;
    uVar3 = uVar2 & 0xf;
    uVar2 = uVar2 >> 4;
    auStack_28[iVar5] = (&DAT_00563e90)[uVar3];
    iVar1 = iVar5 + -1;
  } while (uVar2 != 0);
  FUN_00fa9698(param_2,1,"0x",2,auStack_28 + iVar5,9 - (iVar5 + 1));
  *puVar4 = uVar6;
  *(undefined4 *)(param_2 + 0xc) = uVar7;
  return;
}

