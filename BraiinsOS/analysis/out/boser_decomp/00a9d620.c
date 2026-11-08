// FUN_00a9d620 @ 00a9d620 size=224 calls_out=3 calls_in=1
// strings: 

void FUN_00a9d620(undefined4 *param_1,undefined4 param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  do {
    iVar3 = FUN_0122010c(param_2);
    if (iVar3 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      FUN_01443048(param_2,&DAT_01c2458c);
      return;
    }
  } while (*(char *)(iVar3 + 0x28) != param_3);
  uVar7 = *(undefined8 *)(iVar3 + 0x10);
  while (iVar3 = FUN_0122010c(param_2), iVar3 != 0) {
    if (*(char *)(iVar3 + 0x28) == param_3) {
      uVar8 = *(undefined8 *)(iVar3 + 0x10);
      uVar4 = (uint)((ulonglong)uVar7 >> 0x20);
      uVar5 = (uint)((ulonglong)uVar8 >> 0x20);
      uVar1 = (int)uVar4 >> 0x1f;
      uVar4 = uVar1 >> 1 ^ uVar4;
      uVar2 = (int)uVar5 >> 0x1f;
      uVar5 = uVar2 >> 1 ^ uVar5;
      bVar6 = (((uint)((byte)((longlong)uVar8 >> 0x3f) & 1) << 0x1f | uVar2 >> 1) ^ (uint)uVar8) <
              (((uint)((byte)((longlong)uVar7 >> 0x3f) & 1) << 0x1f | uVar1 >> 1) ^ (uint)uVar7);
      if ((int)(uVar5 - (uVar4 + bVar6)) < 0 !=
          (SBORROW4(uVar5,uVar4) != SBORROW4(uVar5 - uVar4,(uint)bVar6))) {
        uVar7 = uVar8;
      }
    }
  }
  FUN_018f2d80(param_2,&DAT_01c2458c);
  *param_1 = 1;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = uVar7;
  return;
}

