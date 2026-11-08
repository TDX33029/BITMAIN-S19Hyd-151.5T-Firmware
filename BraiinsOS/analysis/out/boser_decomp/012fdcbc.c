// FUN_012fdcbc @ 012fdcbc size=152 calls_out=1 calls_in=1
// strings: 

void FUN_012fdcbc(uint param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_38 [32];
  
  iVar2 = 0x1f;
  do {
    iVar3 = iVar2;
    auStack_38[iVar3] = (&DAT_005679b8)[param_1 & 0xf];
    param_1 = param_1 >> 4 | param_2 << 0x1c;
    uVar4 = param_3 >> 4 | param_4 << 0x1c;
    param_2 = param_2 >> 4 | param_3 << 0x1c;
    uVar1 = param_4 >> 4;
    param_4 = param_4 >> 4;
    param_3 = uVar4;
    iVar2 = iVar3 + -1;
  } while ((param_1 != 0 || uVar4 != 0) || (param_2 != 0 || uVar1 != 0));
  FUN_012fa378(param_5,1,"0x",2,auStack_38 + iVar3,0x21 - (iVar3 + 1));
  return;
}

