// FUN_00faca68 @ 00faca68 size=112 calls_out=1 calls_in=0
// strings: 

void FUN_00faca68(byte *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_b [3];
  
  uVar4 = (uint)*param_1;
  iVar1 = 2;
  do {
    iVar2 = iVar1;
    uVar3 = uVar4 & 7;
    uVar4 = uVar4 >> 3;
    auStack_b[iVar2] = (&DAT_00569f80)[uVar3];
    iVar1 = iVar2 + -1;
  } while (uVar4 != 0);
  FUN_00fa9698(param_2,1,&DAT_0041444d,2,auStack_b + iVar2,4 - (iVar2 + 1));
  return;
}

