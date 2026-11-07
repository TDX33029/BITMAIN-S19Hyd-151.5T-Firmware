// FUN_0003c0d8 @ 0003c0d8  size=468  callers=0
// program: bmminer


void FUN_0003c0d8(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint param4;
  uint uVar5;
  int iVar6;
  int *extraout_r2;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint param3;
  int iVar10;
  uint param5;
  undefined8 uVar11;
  char acStack_828 [2064];
  
  bVar1 = param_1[2];
  param3 = *param_1 & 0xf;
  uVar3 = FUN_0002009c();
  if (param3 < 4) {
    bVar2 = param_1[1];
    iVar4 = FUN_000201d8(param3);
    if (iVar4 != 0) {
      param4 = FUN_00067408(bVar1,uVar3);
      uVar5 = FUN_0002002c();
      if (param4 < uVar5) {
        if (bVar2 == 0x90) {
          if ((*(uint *)(param_1 + 4) & 0x88) == 0) {
            return;
          }
          *(undefined1 *)(*(int *)(DAT_00507484 + 4) + param3 * 0x100 + param4) = 1;
          return;
        }
        if (bVar2 == 0xe0) {
          iVar8 = DAT_00507484 + 8;
          uVar5 = *(uint *)(param_1 + 4) >> 0x10;
          iVar9 = iVar8 + (param3 * 0x100 + param4) * 4;
          param5 = *(uint *)(param_1 + 4) & 0xffff;
          iVar10 = *(int *)(DAT_00507484 + 4);
          *(uint *)(&DAT_00809000 + iVar9) = *(int *)(&DAT_00809000 + iVar9) + uVar5;
          uVar11 = FUN_0002006c();
          iVar6 = (int)((ulonglong)uVar11 >> 0x20);
          iVar4 = (int)uVar11 * 8;
          piVar7 = extraout_r2;
          if ((int)uVar5 <= iVar4) {
            piVar7 = (int *)(iVar8 + param3 * 4);
          }
          iVar8 = iVar8 + param3 * 4;
          if ((int)uVar5 <= iVar4) {
            piVar7 = piVar7 + 0x202800;
            iVar6 = *piVar7;
          }
          if ((int)uVar5 <= iVar4) {
            *piVar7 = iVar6 + uVar5;
          }
          *(uint *)(&DAT_0080a860 + iVar8) = *(int *)(&DAT_0080a860 + iVar8) + (param5 - uVar5);
          *(undefined1 *)(iVar10 + param3 * 0x100 + param4) = 1;
          iVar4 = FUN_0002006c();
          if ((iVar4 * 8 < (int)uVar5) && (3 < DAT_00087bbc)) {
            snprintf(acStack_828,0x800,
                     "Nonce counter overflow: chain = %d, asic = %d, nonce_return = %d, nonce_match = %d, nonce_accumulate = %d\n"
                     ,param3,param4,param5,uVar5,*(int *)(&DAT_00809000 + iVar9));
            FUN_00032218(3,acStack_828,0);
            return;
          }
          return;
        }
      }
    }
  }
  FUN_0003e3cc(param_1);
  return;
}

