// FUN_01855610 @ 01855610 size=128 calls_out=3 calls_in=1
// strings: 

void FUN_01855610(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  iVar3 = 1;
  if ((uint)(uVar1 < 4) <= -uVar2) {
    iVar3 = uVar1 - 4;
  }
  if (iVar3 == 0) {
    FUN_01853924(param_1 + 0x28,uVar2,0,-(uVar2 + (uVar1 >= 4)));
    if (param_1[2] == 3 && param_1[3] == 0) {
      return;
    }
    FUN_01852704(param_1 + 2);
    return;
  }
  if (iVar3 != 1) {
    return;
  }
  if (uVar1 != 3 || uVar2 != 0) {
    FUN_01852704(param_1);
  }
  FUN_01853924(param_1 + 0x26);
  FUN_01705ae8(param_1 + 0x6a);
  return;
}

