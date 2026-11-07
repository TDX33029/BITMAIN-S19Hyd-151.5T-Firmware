// FUN_015d2860 @ 015d2860 size=528 calls_out=0 calls_in=6
// strings: 

void FUN_015d2860(undefined1 *param_1,int param_2,uint param_3,uint param_4,undefined4 *param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined1 uVar9;
  
  switch(*param_5) {
  case 0x1a:
    iVar3 = *(int *)(param_2 + 0x40);
    uVar2 = *(uint *)(param_2 + 0x44);
    uVar5 = param_5[2];
    if ((uVar5 <= uVar2) && (iVar3 = iVar3 + uVar5, uVar2 != uVar5)) {
      iVar6 = 0;
      do {
        if (*(char *)(iVar3 + iVar6) == '\0') {
LAB_015d2a78:
          *(int *)(param_1 + 4) = iVar3;
          *(int *)(param_1 + 8) = iVar6;
          *param_1 = 0x52;
          return;
        }
        iVar6 = iVar6 + 1;
      } while (uVar2 - uVar5 != iVar6);
    }
    break;
  case 0x1b:
    iVar6 = *(int *)(param_2 + 0x78);
    if (iVar6 == 0) goto switchD_015d2880_caseD_1c;
    iVar3 = *(int *)(iVar6 + 0x48);
    uVar2 = *(uint *)(iVar6 + 0x4c);
    uVar5 = param_5[2];
    if ((uVar5 <= uVar2) && (iVar3 = iVar3 + uVar5, uVar2 != uVar5)) {
      iVar6 = 0;
      do {
        if (*(char *)(iVar3 + iVar6) == '\0') goto LAB_015d2a78;
        iVar6 = iVar6 + 1;
      } while (uVar2 - uVar5 != iVar6);
    }
    break;
  default:
switchD_015d2880_caseD_1c:
    *param_1 = 0x48;
    return;
  case 0x1d:
    puVar8 = *(uint **)(param_2 + 0x48);
    if (param_4 <= *(uint *)(param_2 + 0x4c)) {
      uVar9 = 0x38;
      lVar1 = (ulonglong)(param_3 & 0xff) * (ulonglong)(uint)param_5[2];
      uVar2 = (uint)lVar1;
      if ((int)((ulonglong)lVar1 >> 0x20) != 0) goto LAB_015d29c8;
      puVar8 = (uint *)((int)puVar8 + param_4);
      param_4 = *(uint *)(param_2 + 0x4c) - param_4;
      if (uVar2 <= param_4) {
        puVar8 = (uint *)((int)puVar8 + uVar2);
        param_4 = param_4 - uVar2;
        if ((param_3 & 0xff) == 8) {
          if (7 < param_4) {
            if (*(char *)((int)puVar8 + 7) != '\0' || *(uint *)((int)puVar8 + 3) >> 8 != 0)
            goto LAB_015d29c8;
            uVar2 = *(uint *)((int)puVar8 + 3) << 0x18 | (uint)(uint3)*puVar8;
LAB_015d2a3c:
            iVar3 = *(int *)(param_2 + 0x40);
            uVar5 = *(uint *)(param_2 + 0x44);
            if ((uVar2 <= uVar5) && (iVar3 = iVar3 + uVar2, uVar5 != uVar2)) {
              iVar6 = 0;
              do {
                if (*(char *)(iVar3 + iVar6) == '\0') goto LAB_015d2a78;
                iVar6 = iVar6 + 1;
              } while (uVar5 - uVar2 != iVar6);
            }
            break;
          }
        }
        else if (3 < param_4) {
          uVar2 = *puVar8;
          goto LAB_015d2a3c;
        }
      }
    }
    param_2 = 0;
    uVar9 = 0x13;
LAB_015d29c8:
    *param_1 = uVar9;
    *(uint **)(param_1 + 4) = puVar8;
    *(uint **)(param_1 + 8) = puVar8;
    *(int *)(param_1 + 0xc) = param_2;
    return;
  case 0x1e:
    iVar3 = *(int *)(param_2 + 0x28);
    uVar2 = *(uint *)(param_2 + 0x2c);
    uVar5 = param_5[2];
    if ((uVar5 <= uVar2) && (iVar3 = iVar3 + uVar5, uVar2 != uVar5)) {
      iVar6 = 0;
      do {
        if (*(char *)(iVar3 + iVar6) == '\0') goto LAB_015d2a78;
        iVar6 = iVar6 + 1;
      } while (uVar2 - uVar5 != iVar6);
    }
    break;
  case 0x1f:
    uVar4 = param_5[2];
    uVar7 = param_5[3];
    *param_1 = 0x52;
    *(undefined4 *)(param_1 + 4) = uVar4;
    *(undefined4 *)(param_1 + 8) = uVar7;
    return;
  }
  *(int *)(param_1 + 8) = iVar3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *param_1 = 0x13;
  return;
}

