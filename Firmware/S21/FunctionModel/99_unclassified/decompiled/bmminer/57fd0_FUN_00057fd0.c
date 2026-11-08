// FUN_00057fd0 @ 00057fd0  size=148  callers=0
// program: bmminer


void FUN_00057fd0(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  bVar1 = param_1[2];
  uVar7 = *param_1 & 0xf;
  uVar3 = FUN_0002a584();
  if (uVar7 < 4) {
    bVar2 = param_1[1];
    iVar4 = FUN_0002a6f0(uVar7);
    if (iVar4 != 0) {
      uVar5 = FUN_00098658(bVar1,uVar3);
      uVar6 = FUN_0002a514();
      if ((uVar5 < uVar6) && (bVar2 == 0xff)) {
        if ((*(uint *)(param_1 + 4) & 0x88) == 0) {
          return;
        }
        *(undefined1 *)(*(int *)(DAT_00944b7c + 4) + uVar7 * 0x100 + uVar5) = 1;
        return;
      }
    }
  }
  FUN_00059e50(param_1);
  return;
}

