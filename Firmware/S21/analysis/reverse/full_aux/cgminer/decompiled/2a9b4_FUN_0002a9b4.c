// FUN_0002a9b4 @ 0002a9b4  size=144  callers=1
// program: cgminer


undefined4 FUN_0002a9b4(int param_1)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (param_1 != 0) {
    dVar4 = (double)FUN_0004acbc(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc));
    dVar2 = (double)FUN_0004acbc(*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4));
    dVar3 = (double)FUN_0004acbc(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc));
    dVar5 = (double)FUN_0004acbc(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4));
    dVar5 = dVar5 + dVar4 * 6.277101735386681e+57 + dVar2 * 3.402823669209385e+38 +
                    dVar3 * 1.8446744073709552e+19;
    if (dVar5 != 0.0) {
      dVar5 = 2.695953529101131e+67 / dVar5;
      uVar1 = FUN_0004ad88(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20));
      return uVar1;
    }
  }
  return 0;
}

