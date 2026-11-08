// FUN_007548b4 @ 007548b4 size=320 calls_out=2 calls_in=2
// strings: 

void FUN_007548b4(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_118 [232];
  
  uVar10 = FUN_01404030(*(int *)(param_2 + 0xe4) + 8);
  uVar5 = (uint)((ulonglong)uVar10 >> 0x20);
  uVar11 = FUN_01404030(*(int *)(param_2 + -0xc) + 8);
  uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
  uVar1 = (int)uVar5 >> 0x1f;
  uVar5 = uVar1 >> 1 ^ uVar5;
  uVar2 = (int)uVar6 >> 0x1f;
  uVar6 = uVar2 >> 1 ^ uVar6;
  bVar9 = (((uint)((byte)((longlong)uVar10 >> 0x3f) & 1) << 0x1f | uVar1 >> 1) ^ (uint)uVar10) <
          (((uint)((byte)((longlong)uVar11 >> 0x3f) & 1) << 0x1f | uVar2 >> 1) ^ (uint)uVar11);
  if ((int)(uVar5 - (uVar6 + bVar9)) < 0 !=
      (SBORROW4(uVar5,uVar6) != SBORROW4(uVar5 - uVar6,(uint)bVar9))) {
    FUN_01bed4e2(auStack_118,param_2,0xe4);
    iVar8 = *(int *)(param_2 + 0xe4);
    uVar3 = *(undefined4 *)(param_2 + 0xe8);
    uVar4 = *(undefined4 *)(param_2 + 0xec);
    do {
      iVar7 = param_2;
      param_2 = iVar7 + -0xf0;
      FUN_01bed4e2(iVar7,param_2,0xf0);
      if (param_2 == param_1) break;
      uVar10 = FUN_01404030(iVar8 + 8);
      uVar6 = (uint)((ulonglong)uVar10 >> 0x20);
      uVar11 = FUN_01404030(*(int *)(iVar7 + -0xfc) + 8);
      uVar5 = (uint)((ulonglong)uVar11 >> 0x20);
      uVar1 = (int)uVar5 >> 0x1f;
      uVar5 = uVar1 >> 1 ^ uVar5;
      uVar2 = (int)uVar6 >> 0x1f;
      uVar6 = uVar2 >> 1 ^ uVar6;
      bVar9 = (((uint)((byte)((longlong)uVar10 >> 0x3f) & 1) << 0x1f | uVar2 >> 1) ^ (uint)uVar10) <
              (((uint)((byte)((longlong)uVar11 >> 0x3f) & 1) << 0x1f | uVar1 >> 1) ^ (uint)uVar11);
    } while ((int)(uVar6 - (uVar5 + bVar9)) < 0 !=
             (SBORROW4(uVar6,uVar5) != SBORROW4(uVar6 - uVar5,(uint)bVar9)));
    FUN_01bed4e2(iVar7 + -0xf0,auStack_118,0xe4);
    *(undefined4 *)(iVar7 + -8) = uVar3;
    *(int *)(iVar7 + -0xc) = iVar8;
    *(undefined4 *)(iVar7 + -4) = uVar4;
  }
  return;
}

