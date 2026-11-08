// FUN_0116c9e8 @ 0116c9e8 size=256 calls_out=4 calls_in=1
// strings: 

void FUN_0116c9e8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  iVar3 = 2;
  if ((uint)(uVar1 < 4) <= -uVar2) {
    iVar3 = uVar1 - 4;
  }
  if (iVar3 == 0) {
    *(undefined1 *)((int)param_1 + 0xd5) = 1;
    return;
  }
  if (iVar3 != 1) {
    if (uVar1 == 3 && uVar2 == 0) {
      *(undefined1 *)((int)param_1 + 0x3d9) = 1;
      return;
    }
    if (param_1[0xf0] == 0) {
      FUN_00e5e6fc(param_1,uVar2,iVar3,-(uVar2 + (uVar1 >= 4)));
      return;
    }
    return;
  }
  if (*(char *)((int)param_1 + 0xff) == '\0') {
    FUN_01421814(param_1 + 2);
  }
  else {
    *(undefined1 *)((int)param_1 + 0xff) = 2;
  }
  uVar1 = param_1[0x26];
  if (uVar1 == 6) {
LAB_0116ca80:
    *(undefined1 *)(param_1 + 0x67) = 1;
    FUN_0172f038(param_1 + 0x12);
    param_1[0x12] = 4;
    param_1[0x13] = 0;
    *(undefined1 *)((int)param_1 + 0xff) = 2;
    if (param_1[0x26] < 3) {
      FUN_014216c0(param_1 + 0x26);
    }
    *(undefined1 *)((int)param_1 + 0xff) = 2;
    param_1[0x26] = 6;
    return;
  }
  if (uVar1 == 3) {
    uVar1 = param_1[0x12] | param_1[0x13];
    bVar4 = uVar1 == 0;
    if (bVar4) {
      uVar1 = param_1[0x5a];
    }
    if (bVar4 && uVar1 == 0) goto LAB_0116ca80;
  }
  return;
}

