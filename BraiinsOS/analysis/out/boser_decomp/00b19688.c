// FUN_00b19688 @ 00b19688 size=212 calls_out=0 calls_in=0
// strings: 

void FUN_00b19688(undefined4 *param_1,int param_2,int param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar3 = param_3 * 0x30;
  pcVar5 = (char *)(param_2 + 0x28);
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) {
      uVar4 = 0;
      goto LAB_00b19750;
    }
    pcVar5 = pcVar6 + 0x30;
    uVar3 = uVar3 - 0x30;
  } while (*pcVar6 != param_4);
  uVar10 = *(undefined8 *)(pcVar6 + -0x18);
  if (pcVar6 + 8 != (char *)(param_2 + param_3 * 0x30)) {
    uVar3 = uVar3 / 0x30;
    do {
      if (*pcVar5 == param_4) {
        uVar7 = (uint)((ulonglong)uVar10 >> 0x20);
        uVar11 = *(undefined8 *)(pcVar5 + -0x18);
        uVar8 = (uint)((ulonglong)uVar11 >> 0x20);
        uVar1 = (int)uVar7 >> 0x1f;
        uVar7 = uVar1 >> 1 ^ uVar7;
        uVar2 = (int)uVar8 >> 0x1f;
        uVar8 = uVar2 >> 1 ^ uVar8;
        bVar9 = (((uint)((byte)((longlong)uVar11 >> 0x3f) & 1) << 0x1f | uVar2 >> 1) ^ (uint)uVar11)
                < (((uint)((byte)((longlong)uVar10 >> 0x3f) & 1) << 0x1f | uVar1 >> 1) ^
                  (uint)uVar10);
        if ((int)(uVar8 - (uVar7 + bVar9)) < 0 !=
            (SBORROW4(uVar8,uVar7) != SBORROW4(uVar8 - uVar7,(uint)bVar9))) {
          uVar11 = uVar10;
        }
        uVar10 = uVar11;
      }
      pcVar5 = pcVar5 + 0x30;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uVar4 = 1;
  *(undefined8 *)(param_1 + 2) = uVar10;
LAB_00b19750:
  *param_1 = uVar4;
  param_1[1] = 0;
  return;
}

