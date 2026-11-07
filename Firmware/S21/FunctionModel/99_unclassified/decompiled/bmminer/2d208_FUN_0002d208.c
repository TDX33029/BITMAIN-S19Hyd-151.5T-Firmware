// FUN_0002d208 @ 0002d208  size=304  callers=1
// program: bmminer


undefined4 FUN_0002d208(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  FUN_00081200();
  FUN_00081200(param_1,param_2,param_3,0xb9,0x3f014381);
  uVar3 = 0;
  FUN_00081200(param_1,param_2,param_3,0xba,0x40010);
  iVar5 = 0;
  uVar4 = 0;
  FUN_00081200(param_1,param_2,param_3,0xbb,0x3340e80);
  do {
    uVar3 = uVar3 + 1;
    FUN_00081200(param_1,param_2,param_3,0xb8,param_4 << 0xd | 0x232c030d);
    FUN_0004bf68(0x3c);
    uVar1 = FUN_000462cc(0xbd,param_3,param_1);
    if ((int)uVar1 < 0) {
      bVar6 = uVar4 != 0;
      uVar4 = uVar4 + 1;
      if (bVar6) {
        iVar5 = iVar5 + (uVar1 & 0x7fff);
      }
    }
  } while (uVar4 != 9 && uVar3 < 0x65);
  if (uVar4 < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_000983e0(iVar5,uVar4 - 1);
  }
  return uVar2;
}

