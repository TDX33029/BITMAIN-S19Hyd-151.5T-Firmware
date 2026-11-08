// FUN_000116c8 @ 000116c8  size=804  callers=1
// program: FileParser


longlong FUN_000116c8(undefined1 *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_2 < 8) {
    if (param_2 < 4) {
      if (param_2 == 0) {
        lVar6 = -0x651e95c4d06fbfb1;
      }
      else {
        uVar2 = param_2 + (uint)(byte)param_1[param_2 - 1] * 4;
        lVar6 = (ulonglong)(uint)CONCAT11(param_1[param_2 >> 1],*param_1) * 0x2f90404f;
        lVar8 = (ulonglong)uVar2 * 0x97cb3127;
        lVar6 = FUN_000114c8((uint)lVar6 ^ (uint)lVar8,
                             (uint)CONCAT11(param_1[param_2 >> 1],*param_1) * -0x651e95c5 +
                             (int)((ulonglong)lVar6 >> 0x20) ^
                             uVar2 * -0x3c5a37a4 + (int)((ulonglong)lVar8 >> 0x20));
        lVar6 = lVar6 * -0x651e95c4d06fbfb1;
      }
    }
    else {
      uVar2 = FUN_00011460(param_1);
      uVar3 = FUN_00011460(param_1 + (param_2 - 4));
      lVar6 = FUN_00011598(param_2 + uVar2 * 8,(uVar2 >> 0x1d) + (uint)CARRY4(param_2,uVar2 * 8),
                           uVar3,0,param_2 * 2 + 0x2f90404f,(0xd06fbfb0 < param_2 * 2) + 0x9ae16a3b)
      ;
    }
  }
  else {
    iVar5 = param_2 * 2 + 0x2f90404f;
    iVar4 = (0xd06fbfb0 < param_2 * 2) + 0x9ae16a3b;
    lVar1 = CONCAT44(iVar4,iVar5);
    lVar6 = FUN_00011490(param_1);
    lVar6 = lVar6 + -0x651e95c4d06fbfb1;
    lVar7 = FUN_00011490(param_1 + (param_2 - 8));
    lVar8 = FUN_00011514((int)lVar7,(int)((ulonglong)lVar7 >> 0x20),0x25);
    lVar8 = lVar6 + lVar8 * lVar1;
    lVar6 = FUN_00011514((int)lVar6,(int)((ulonglong)lVar6 >> 0x20),0x19);
    lVar1 = (lVar7 + lVar6) * lVar1;
    lVar6 = FUN_00011598((int)lVar8,(int)((ulonglong)lVar8 >> 0x20),(int)lVar1,
                         (int)((ulonglong)lVar1 >> 0x20),iVar5,iVar4);
  }
  return lVar6;
}

