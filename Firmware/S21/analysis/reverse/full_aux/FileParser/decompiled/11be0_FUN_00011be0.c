// FUN_00011be0 @ 00011be0  size=980  callers=1
// program: FileParser


undefined8 FUN_00011be0(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  
  iVar2 = param_2 * 2 + 0x2f90404f;
  iVar3 = (0xd06fbfb0 < (uint)(param_2 * 2)) + 0x9ae16a3b;
  lVar1 = CONCAT44(iVar3,iVar2);
  lVar4 = FUN_00011490(param_1);
  lVar4 = lVar4 * -0x651e95c4d06fbfb1;
  lVar5 = FUN_00011490(param_1 + 8);
  lVar6 = FUN_00011490(param_1 + param_2 + -8);
  lVar6 = lVar6 * lVar1;
  lVar7 = FUN_00011490(param_1 + param_2 + -0x10);
  lVar8 = FUN_00011514((int)(lVar4 + lVar5),(int)((ulonglong)(lVar4 + lVar5) >> 0x20),0x2b);
  lVar9 = FUN_00011514((int)lVar6,(int)((ulonglong)lVar6 >> 0x20),0x1e);
  lVar7 = lVar7 * -0x651e95c4d06fbfb1 + lVar8 + lVar9;
  lVar5 = FUN_00011514((int)(lVar5 + -0x651e95c4d06fbfb1),
                       (int)((ulonglong)(lVar5 + -0x651e95c4d06fbfb1) >> 0x20),0x12);
  lVar6 = lVar6 + lVar5 + lVar4;
  lVar5 = FUN_00011598((int)lVar7,(int)((ulonglong)lVar7 >> 0x20),(int)lVar6,
                       (int)((ulonglong)lVar6 >> 0x20),iVar2,iVar3);
  lVar8 = FUN_00011490(param_1 + 0x10);
  lVar9 = FUN_00011490(param_1 + 0x18);
  lVar6 = FUN_00011490(param_1 + param_2 + -0x20);
  lVar7 = (lVar7 + lVar6) * lVar1;
  lVar10 = FUN_00011490(param_1 + param_2 + -0x18);
  lVar6 = lVar8 * lVar1 + lVar9;
  lVar6 = FUN_00011514((int)lVar6,(int)((ulonglong)lVar6 >> 0x20),0x2b);
  lVar11 = FUN_00011514((int)lVar7,(int)((ulonglong)lVar7 >> 0x20),0x1e);
  lVar6 = (lVar5 + lVar10) * lVar1 + lVar6 + lVar11;
  lVar4 = FUN_00011514((int)(lVar9 + lVar4),(int)((ulonglong)(lVar9 + lVar4) >> 0x20),0x12);
  lVar7 = lVar7 + lVar4 + lVar8 * lVar1;
  uVar12 = FUN_00011598((int)lVar6,(int)((ulonglong)lVar6 >> 0x20),(int)lVar7,
                        (int)((ulonglong)lVar7 >> 0x20),iVar2,iVar3);
  return uVar12;
}

