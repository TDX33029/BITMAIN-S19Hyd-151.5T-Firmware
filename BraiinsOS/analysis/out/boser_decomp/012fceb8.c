// FUN_012fceb8 @ 012fceb8 size=96 calls_out=2 calls_in=0
// strings: 

void FUN_012fceb8(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_2c [20];
  
  uVar3 = param_1[1];
  uVar1 = (int)uVar3 >> 0x1f;
  iVar2 = FUN_012fc968((*param_1 ^ uVar1) - uVar1,
                       (uVar3 ^ uVar1) - (uVar1 + ((*param_1 ^ uVar1) < uVar1)),auStack_2c,0x14);
  FUN_012fa378(param_2,~uVar3 >> 0x1f,1,0,auStack_2c + iVar2,0x14 - iVar2);
  return;
}

