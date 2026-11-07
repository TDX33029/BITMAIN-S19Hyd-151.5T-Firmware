// FUN_00612130 @ 00612130 size=292 calls_out=0 calls_in=3
// strings: 

void FUN_00612130(undefined1 *param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6,uint param_7)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  undefined1 uVar11;
  
  if ((param_5 & 0x3f) == 0x16) {
    cVar1 = *(char *)(param_2 + 0x78);
    *(undefined4 *)(param_1 + 4) = 1;
    iVar6 = *(int *)(param_3 + 0x110);
    uVar2 = *(ushort *)(param_3 + 0xda);
    *param_1 = 0x4f;
    uVar5 = param_7;
    if (uVar2 < 5) {
      uVar5 = param_7 + iVar6;
    }
    if (cVar1 == '\0') {
      uVar5 = param_7;
    }
    *(uint *)(param_1 + 8) = uVar5;
    return;
  }
  if (param_5 != 0x18) {
    *param_1 = 0x4f;
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  piVar8 = *(int **)(param_2 + 0x60);
  uVar5 = *(uint *)(param_3 + 0x110);
  if (uVar5 <= *(uint *)(param_2 + 100)) {
    uVar4 = *(uint *)(param_3 + 0xd8);
    uVar11 = 0x38;
    lVar3 = (ulonglong)((uVar4 & 0xffff) >> 8) * (ulonglong)param_7;
    uVar7 = (uint)lVar3;
    if ((int)((ulonglong)lVar3 >> 0x20) != 0) goto LAB_006121d4;
    uVar10 = *(uint *)(param_2 + 100) - uVar5;
    piVar8 = (int *)((int)piVar8 + uVar5);
    if (uVar7 <= uVar10) {
      piVar9 = (int *)((int)piVar8 + uVar7);
      uVar10 = uVar10 - uVar7;
      piVar8 = piVar9;
      if ((uVar4 & 0xff00) == 0x800) {
        if (7 < uVar10) {
          piVar8 = (int *)*piVar9;
          if (piVar9[1] != 0) goto LAB_006121d4;
          goto LAB_00612238;
        }
      }
      else if (3 < uVar10) {
        piVar8 = (int *)*piVar9;
LAB_00612238:
        *(undefined4 *)(param_1 + 4) = 1;
        *(uint *)(param_1 + 8) = (int)piVar8 + uVar5;
        *param_1 = 0x4f;
        return;
      }
    }
  }
  uVar4 = 0;
  uVar11 = 0x13;
LAB_006121d4:
  *param_1 = uVar11;
  *(int **)(param_1 + 4) = piVar8;
  *(int **)(param_1 + 8) = piVar8;
  *(uint *)(param_1 + 0xc) = uVar4;
  return;
}

