// FUN_0162532c @ 0162532c size=432 calls_out=4 calls_in=1
// strings: 

void FUN_0162532c(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  
  uVar10 = param_3 & 0xff ^ 0x84222325;
  lVar2 = (ulonglong)uVar10 * 0x1b3;
  uVar12 = (uint)lVar2 ^ (param_3 & 0xffff) >> 8;
  lVar3 = (ulonglong)uVar12 * 0x1b3;
  uVar13 = (uint)lVar3 ^ (param_3 & 0xffffff) >> 0x10;
  lVar4 = (ulonglong)uVar13 * 0x1b3;
  uVar14 = (uint)lVar4 ^ param_3 >> 0x18;
  lVar5 = (ulonglong)uVar14 * 0x1b3;
  uVar15 = (uint)lVar5 ^ param_4 & 0xff;
  lVar6 = (ulonglong)uVar15 * 0x1b3;
  uVar16 = (uint)lVar6 ^ (param_4 & 0xffff) >> 8;
  lVar7 = (ulonglong)uVar16 * 0x1b3;
  uVar17 = (uint)lVar7 ^ (param_4 & 0xffffff) >> 0x10;
  lVar8 = (ulonglong)uVar17 * 0x1b3;
  uVar18 = (uint)lVar8 ^ param_4 >> 0x18;
  lVar9 = (ulonglong)uVar18 * 0x1b3;
  FUN_01623e90(auStack_50,param_2 + 0x80,(int)lVar9,
               (((((((((uint)((ulonglong)lVar2 >> 0x20) | uVar10 << 8) + 0x8d40976c) * 0x1b3 +
                    (int)((ulonglong)lVar3 >> 0x20) + uVar12 * 0x100) * 0x1b3 +
                   (int)((ulonglong)lVar4 >> 0x20) + uVar13 * 0x100) * 0x1b3 +
                  (int)((ulonglong)lVar5 >> 0x20) + uVar14 * 0x100) * 0x1b3 +
                 (int)((ulonglong)lVar6 >> 0x20) + uVar15 * 0x100) * 0x1b3 +
                (int)((ulonglong)lVar7 >> 0x20) + uVar16 * 0x100) * 0x1b3 +
               (int)((ulonglong)lVar8 >> 0x20) + uVar17 * 0x100) * 0x1b3 +
               (int)((ulonglong)lVar9 >> 0x20) + uVar18 * 0x100,param_3,param_4);
  if (local_40 == 3) {
    param_1[2] = 3;
    return;
  }
  FUN_01627a30(param_2 + 0x80);
  FUN_01629628(auStack_50,param_2,uStack_24,&DAT_018abbf8);
  *param_1 = local_48;
  param_1[1] = local_44;
  param_1[2] = local_40;
  param_1[3] = local_3c;
  param_1[4] = uStack_38;
  param_1[5] = uStack_34;
  param_1[6] = local_30;
  param_1[7] = uStack_2c;
  DataMemoryBarrier(0xb);
  do {
    iVar11 = *piStack_28;
    bVar1 = (bool)hasExclusiveAccess(piStack_28);
  } while (!bVar1);
  *piStack_28 = iVar11 + -1;
  if (iVar11 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01626f40(piStack_28);
  }
  return;
}

