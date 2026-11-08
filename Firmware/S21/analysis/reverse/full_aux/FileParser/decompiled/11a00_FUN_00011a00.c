// FUN_00011a00 @ 00011a00  size=464  callers=1
// program: FileParser


undefined8 FUN_00011a00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  iVar1 = param_2 * 2 + 0x2f90404f;
  iVar2 = (0xd06fbfb0 < (uint)(param_2 * 2)) + 0x9ae16a3b;
  lVar3 = FUN_00011490(param_1);
  lVar4 = FUN_00011490(param_1 + 8);
  lVar5 = FUN_00011490(param_1 + param_2 + -8);
  lVar5 = lVar5 * CONCAT44(iVar2,iVar1);
  lVar6 = FUN_00011490(param_1 + param_2 + -0x10);
  lVar7 = lVar3 * -0x4b6d499041670d8d + lVar4;
  lVar7 = FUN_00011514((int)lVar7,(int)((ulonglong)lVar7 >> 0x20),0x2b);
  lVar8 = FUN_00011514((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),0x1e);
  lVar7 = lVar6 * -0x651e95c4d06fbfb1 + lVar7 + lVar8;
  lVar4 = FUN_00011514((int)(lVar4 + -0x651e95c4d06fbfb1),
                       (int)((ulonglong)(lVar4 + -0x651e95c4d06fbfb1) >> 0x20),0x12);
  lVar5 = lVar5 + lVar4 + lVar3 * -0x4b6d499041670d8d;
  uVar9 = FUN_00011598((int)lVar7,(int)((ulonglong)lVar7 >> 0x20),(int)lVar5,
                       (int)((ulonglong)lVar5 >> 0x20),iVar1,iVar2);
  return uVar9;
}

