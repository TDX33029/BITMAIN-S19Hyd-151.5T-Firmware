// FUN_015fe2f8 @ 015fe2f8 size=652 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_015fe2f8(uint *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  uint uVar10;
  undefined1 *local_50;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar4 = param_1[3];
  pbVar5 = (byte *)param_1[6];
  uVar10 = *param_1;
  local_50 = (undefined1 *)*param_2;
  puVar8 = (undefined1 *)param_2[3];
  pbVar7 = (byte *)param_2[6];
  pbVar9 = (byte *)param_2[7];
  if (uVar10 != 0x110003) {
    iVar6 = 3;
    if (0x10ffff < uVar10) {
      iVar6 = uVar10 - 0x110000;
    }
                    /* WARNING: Could not recover jumptable at 0x015fe3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&DAT_015fe3c0 + *(int *)(&DAT_015fe3c0 + iVar6 * 4)))
                      (param_1[2],param_1[1],uVar10);
    return uVar2;
  }
  pbVar1 = (byte *)0x110003;
  if (pbVar5 != (byte *)0x0) {
    pbVar1 = (byte *)param_1[7];
  }
  if (pbVar5 != (byte *)0x0 && pbVar5 != pbVar1) {
    puVar3 = (undefined1 *)(uint)*pbVar5;
    if (0x7fffffff < (uint)(int)(char)*pbVar5) {
      if (puVar3 < (undefined1 *)0xe0) {
        puVar3 = (undefined1 *)(pbVar5[1] & 0x3f | ((uint)puVar3 & 0x1f) << 6);
      }
      else {
        uVar10 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
        if (puVar3 < (undefined1 *)0xf0) {
          puVar3 = (undefined1 *)(uVar10 | ((uint)puVar3 & 0x1f) << 0xc);
        }
        else {
          puVar3 = (undefined1 *)(pbVar5[3] & 0x3f | uVar10 << 6 | ((uint)puVar3 & 7) << 0x12);
          if (puVar3 == &DAT_00110000) goto LAB_015fe364;
        }
      }
    }
    FUN_01ac6d9c(&local_30,puVar3);
    puVar8 = (undefined1 *)0x3;
    if ((undefined1 *)0x10ffff < local_30) {
      puVar8 = local_30 + -0x110000;
    }
                    /* WARNING: Could not recover jumptable at 0x015fe600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&DAT_015fe604 + *(int *)(&DAT_015fe604 + (int)puVar8 * 4)))
                      (local_28,local_2c,local_30);
    return uVar2;
  }
LAB_015fe364:
  if (uVar4 != 0x110003) {
    iVar6 = 3;
    if (0x10ffff < uVar4) {
      iVar6 = uVar4 - 0x110000;
    }
                    /* WARNING: Could not recover jumptable at 0x015fe500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&DAT_015fe504 + *(int *)(&DAT_015fe504 + iVar6 * 4)))
                      (param_1[5],param_1[4],uVar4);
    return uVar2;
  }
  while( true ) {
    if (local_50 != (undefined1 *)0x110003 && local_50 != &DAT_00110000) {
      return 0xff;
    }
    if (pbVar7 == (byte *)0x0 || pbVar7 == pbVar9) break;
    puVar3 = (undefined1 *)(uint)*pbVar7;
    pbVar5 = pbVar7 + 1;
    if (0x7fffffff < (uint)(int)(char)*pbVar7) {
      if (puVar3 < (undefined1 *)0xe0) {
        puVar3 = (undefined1 *)(pbVar7[1] & 0x3f | ((uint)puVar3 & 0x1f) << 6);
        pbVar5 = pbVar7 + 2;
      }
      else {
        uVar4 = pbVar7[2] & 0x3f | (pbVar7[1] & 0x3f) << 6;
        if (puVar3 < (undefined1 *)0xf0) {
          puVar3 = (undefined1 *)(uVar4 | ((uint)puVar3 & 0x1f) << 0xc);
          pbVar5 = pbVar7 + 3;
        }
        else {
          puVar3 = (undefined1 *)(pbVar7[3] & 0x3f | uVar4 << 6 | ((uint)puVar3 & 7) << 0x12);
          if (puVar3 == &DAT_00110000) break;
          pbVar5 = pbVar7 + 4;
        }
      }
    }
    pbVar7 = pbVar5;
    FUN_01ac6d9c(&local_30,puVar3);
    if (local_30 == (undefined1 *)0x110003) break;
    local_50 = local_30;
  }
  if (puVar8 == &DAT_00110000 || puVar8 == (undefined1 *)0x110003) {
    return 0;
  }
  return 0xff;
}

