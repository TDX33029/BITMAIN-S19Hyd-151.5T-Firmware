// FUN_01581aa8 @ 01581aa8 size=520 calls_out=5 calls_in=1
// strings: 

void FUN_01581aa8(undefined4 param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar8;
  double dVar7;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  if (0x7fefffff < (param_2 & 0x7fffffff)) {
LAB_01581acc:
    *param_3 = -0x80000000;
    return;
  }
  dVar7 = (double)FUN_01be6548();
  uVar8 = (uint)((ulonglong)dVar7 >> 0x20);
  uVar3 = SUB84(dVar7,0);
  if (dVar7 == 0.0) {
    *param_3 = 0;
    param_3[1] = 4;
    param_3[2] = 0;
    return;
  }
  uVar5 = (uVar8 & 0x7fffffff) >> 0x14;
  if (uVar5 == 0) {
    uVar4 = uVar3 >> 0x1f;
    uVar3 = uVar3 << 1;
    uVar4 = (uVar8 & 0xfffff) << 1 | uVar4;
  }
  else {
    uVar4 = uVar8 & 0xfffff | 0x100000;
  }
  if ((longlong)dVar7 < 0) goto LAB_01581acc;
  local_30 = 0;
  local_2c = 4;
  local_28 = 0;
  if (uVar3 != 0 || uVar4 != 0) {
    iVar2 = 4;
    do {
      iVar1 = local_28;
      if (local_28 == local_30) {
        FUN_01a54b48(&local_30);
        iVar2 = local_2c;
      }
      *(uint *)(iVar2 + iVar1 * 4) = uVar3;
      local_28 = iVar1 + 1;
      bVar6 = uVar4 != 0;
      uVar3 = uVar4;
      uVar4 = 0;
    } while (bVar6);
  }
  uVar3 = uVar5 - 0x433;
  if (0 < (int)uVar3 == (int)uVar3 < 0) goto LAB_01581ca4;
  if ((char)((0 < (int)uVar3) - ((int)uVar3 < 0)) == '\x01') {
    if (local_30 == -0x80000000) {
      if (*(int *)(local_2c + 8) == 0) {
        FUN_0164a9cc(&local_3c,*(undefined4 *)(local_2c + 4),*(undefined4 *)(local_2c + 8));
      }
      else {
LAB_01581c3c:
        FUN_0164b560(&local_3c,&local_30,uVar3 >> 5,uVar3 & 0x1f);
      }
    }
    else {
      if (local_28 != 0) goto LAB_01581c3c;
LAB_01581c8c:
      local_3c = local_30;
      local_38 = local_2c;
      local_34 = local_28;
    }
  }
  else {
    if (local_30 == -0x80000000) {
      if (*(int *)(local_2c + 8) == 0) {
        FUN_0164a9cc(&local_3c,*(undefined4 *)(local_2c + 4),*(undefined4 *)(local_2c + 8));
        goto LAB_01581c98;
      }
    }
    else if (local_28 == 0) goto LAB_01581c8c;
    FUN_0164b86c(&local_3c,&local_30,0x433 - uVar5 >> 5,0x433 - uVar5 & 0x1f);
  }
LAB_01581c98:
  local_30 = local_3c;
  local_2c = local_38;
  local_28 = local_34;
LAB_01581ca4:
  *param_3 = local_30;
  param_3[1] = local_2c;
  param_3[2] = local_28;
  return;
}

