// FUN_012fdd5c @ 012fdd5c size=156 calls_out=1 calls_in=0
// strings: 

void FUN_012fdd5c(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_38 [32];
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar2 = param_1[3];
  uVar5 = param_1[2];
  iVar1 = 0x1f;
  do {
    iVar6 = iVar1;
    uVar7 = uVar3 & 0xf;
    uVar3 = uVar3 >> 4 | uVar4 << 0x1c;
    auStack_38[iVar6] = (&DAT_005679b8)[uVar7];
    uVar8 = uVar5 >> 4 | uVar2 << 0x1c;
    uVar4 = uVar4 >> 4 | uVar5 << 0x1c;
    uVar7 = uVar2 >> 4;
    uVar2 = uVar2 >> 4;
    uVar5 = uVar8;
    iVar1 = iVar6 + -1;
  } while ((uVar3 != 0 || uVar8 != 0) || (uVar4 != 0 || uVar7 != 0));
  FUN_012fa378(param_2,1,"0x",2,auStack_38 + iVar6,0x21 - (iVar6 + 1));
  return;
}

