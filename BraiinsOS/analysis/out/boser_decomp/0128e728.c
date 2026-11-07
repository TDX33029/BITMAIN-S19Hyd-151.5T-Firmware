// FUN_0128e728 @ 0128e728 size=220 calls_out=0 calls_in=3
// strings: 

uint FUN_0128e728(int param_1,int param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  
  uVar3 = param_3 & 7;
  if (uVar3 < 3) {
    uVar3 = uVar3 + 7;
  }
  puVar4 = &DAT_00405081;
  uVar3 = uVar3 + param_2;
  if (uVar3 < 7) {
    param_1 = param_1 + -1;
    iVar2 = param_1 % 400;
    puVar1 = puVar4;
    if (iVar2 < 0) {
      puVar1 = &DAT_00405211;
    }
    uVar3 = 0x406U >> (puVar1[iVar2] & 0x1f) & 1 | 0x34;
  }
  else {
    bVar5 = (0x406U >> (param_3 & 0xff) & 1 | 0x34) < uVar3 / 7;
    if (bVar5) {
      param_1 = param_1 + 1;
    }
    iVar2 = param_1 % 400;
    uVar3 = uVar3 / 7;
    if (bVar5) {
      uVar3 = 1;
    }
  }
  if (iVar2 < 0) {
    puVar4 = &DAT_00405211;
  }
  return uVar3 << 4 | param_1 << 10 | (uint)(byte)puVar4[iVar2];
}

