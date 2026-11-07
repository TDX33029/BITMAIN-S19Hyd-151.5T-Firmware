// FUN_0113fcac @ 0113fcac size=1884 calls_out=1 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x0113fff8) */
/* WARNING: Removing unreachable block (ram,0x0113fe84) */
/* WARNING: Removing unreachable block (ram,0x0113ff38) */
/* WARNING: Removing unreachable block (ram,0x0113ff6c) */
/* WARNING: Removing unreachable block (ram,0x0113fec4) */
/* WARNING: Removing unreachable block (ram,0x0113fe40) */
/* WARNING: Removing unreachable block (ram,0x01140104) */

void FUN_0113fcac(undefined1 *param_1,int param_2,char param_3,char param_4)

{
  char cVar1;
  ushort uVar2;
  ushort *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  undefined1 local_38;
  undefined1 local_37;
  undefined8 local_30;
  int local_24;
  undefined *local_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  switch(param_3) {
  case -0x40:
    puStack_1c = &local_38;
    local_38 = 7;
    local_24 = (int)register0x00000054 + -9;
    local_14 = &local_24;
    local_20 = &DAT_01888abc;
    local_18 = &LAB_01579e10;
    FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
    return;
  case -0x3f:
  case -0x3c:
  case -0x3b:
  case -0x3a:
  case -0x39:
  case -0x38:
  case -0x37:
  case -0x2c:
  case -0x2b:
  case -0x2a:
  case -0x29:
  case -0x28:
  case -0x27:
  case -0x26:
  case -0x25:
  case -0x24:
  case -0x23:
  case -0x22:
  case -0x21:
    goto switchD_0113fcc8_caseD_c1;
  case -0x3e:
  case -0x3d:
    local_37 = param_3 == -0x3d;
    puStack_1c = &local_38;
    local_24 = (int)register0x00000054 + -9;
    local_14 = &local_24;
    local_38 = 0;
    local_20 = &DAT_01888abc;
    local_18 = &LAB_01579e10;
    FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
    return;
  case -0x36:
    uVar10 = *(uint *)(param_2 + 0xc);
    puVar8 = *(uint **)(param_2 + 8);
    if (uVar10 < 4) {
      *(uint *)(param_2 + 8) = (int)puVar8 + uVar10;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_1 + 4) = 2;
      *param_1 = 1;
      *(undefined **)(param_1 + 8) = &DAT_018aab20;
      return;
    }
    uVar5 = *puVar8;
    *(uint **)(param_2 + 8) = puVar8 + 1;
    *(uint *)(param_2 + 0xc) = uVar10 - 4;
    puStack_1c = &local_38;
    local_30 = (double)(float)(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                               (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
    local_38 = 3;
    local_24 = (int)register0x00000054 + -9;
    local_14 = &local_24;
    local_20 = &DAT_01888abc;
    local_18 = &LAB_01579e10;
    FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
    return;
  case -0x35:
    puVar8 = *(uint **)(param_2 + 8);
    uVar10 = *(uint *)(param_2 + 0xc);
    if (7 < uVar10) {
      uVar7 = *puVar8;
      uVar5 = puVar8[1];
      *(uint **)(param_2 + 8) = puVar8 + 2;
      *(uint *)(param_2 + 0xc) = uVar10 - 8;
      local_30 = (double)CONCAT44(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                  (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18,
                                  uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                  (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
      puStack_1c = &local_38;
      local_38 = 3;
      local_24 = (int)register0x00000054 + -9;
      local_14 = &local_24;
      local_20 = &DAT_01888abc;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar8 + uVar10;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case -0x34:
    if (*(int *)(param_2 + 0xc) == 0) {
      *param_1 = 1;
      *(undefined4 *)(param_1 + 4) = 2;
      *(undefined **)(param_1 + 8) = &DAT_018aab20;
      return;
    }
    cVar1 = **(char **)(param_2 + 8);
    *(char **)(param_2 + 8) = *(char **)(param_2 + 8) + 1;
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
    param_1[1] = cVar1 != '\0';
    *param_1 = 9;
    return;
  case -0x33:
    uVar10 = *(uint *)(param_2 + 0xc);
    puVar8 = *(uint **)(param_2 + 8);
    if (1 < uVar10) {
      puVar4 = (uint *)((int)puVar8 + 2);
      uVar5 = (uint)(ushort)*puVar8;
      iVar9 = uVar10 - 2;
LAB_0113ffc0:
      *(uint **)(param_2 + 8) = puVar4;
LAB_0113ffc8:
      uVar6 = (undefined1)uVar5;
      *(int *)(param_2 + 0xc) = iVar9;
      if (uVar5 != 0) {
        uVar6 = 1;
      }
      param_1[1] = uVar6;
      *param_1 = 9;
      return;
    }
    goto LAB_0113fea4;
  case -0x32:
    uVar10 = *(uint *)(param_2 + 0xc);
    puVar8 = *(uint **)(param_2 + 8);
    if (3 < uVar10) {
      puVar4 = puVar8 + 1;
      uVar5 = *puVar8;
      iVar9 = uVar10 - 4;
      goto LAB_0113ffc0;
    }
    goto LAB_0113fea4;
  case -0x31:
    uVar10 = *(uint *)(param_2 + 0xc);
    puVar8 = *(uint **)(param_2 + 8);
    if (7 < uVar10) {
      uVar5 = *puVar8;
      iVar9 = uVar10 - 8;
      uVar10 = puVar8[1];
      *(uint **)(param_2 + 8) = puVar8 + 2;
      uVar5 = uVar5 | uVar10;
      goto LAB_0113ffc8;
    }
LAB_0113fea4:
    *(uint *)(param_2 + 8) = (int)puVar8 + uVar10;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case -0x30:
    if (*(int *)(param_2 + 0xc) != 0) {
      param_4 = **(char **)(param_2 + 8);
      *(char **)(param_2 + 8) = *(char **)(param_2 + 8) + 1;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
      goto LAB_01148f8c;
    }
    break;
  case -0x2f:
    uVar10 = *(uint *)(param_2 + 0xc);
    puVar3 = *(ushort **)(param_2 + 8);
    if (1 < uVar10) {
      uVar2 = *puVar3;
      *(ushort **)(param_2 + 8) = puVar3 + 1;
      *(uint *)(param_2 + 0xc) = uVar10 - 2;
      puStack_1c = &local_38;
      local_30 = (double)(longlong)(int)(short)(uVar2 << 8 | uVar2 >> 8);
      local_24 = (int)register0x00000054 + -9;
      local_14 = &local_24;
      local_38 = 2;
      local_20 = &DAT_01888abc;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar3 + uVar10;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case -0x2e:
    uVar10 = *(uint *)(param_2 + 0xc);
    puVar8 = *(uint **)(param_2 + 8);
    if (3 < uVar10) {
      uVar5 = *puVar8;
      *(uint **)(param_2 + 8) = puVar8 + 1;
      *(uint *)(param_2 + 0xc) = uVar10 - 4;
      puStack_1c = &local_38;
      local_38 = 2;
      local_24 = (int)register0x00000054 + -9;
      local_14 = &local_24;
      local_30 = (double)(longlong)
                         (int)(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                               (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
      local_20 = &DAT_01888abc;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar8 + uVar10;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case -0x2d:
    puVar8 = *(uint **)(param_2 + 8);
    uVar10 = *(uint *)(param_2 + 0xc);
    if (7 < uVar10) {
      uVar7 = *puVar8;
      uVar5 = puVar8[1];
      *(uint **)(param_2 + 8) = puVar8 + 2;
      *(uint *)(param_2 + 0xc) = uVar10 - 8;
      puStack_1c = &local_38;
      local_38 = 2;
      local_24 = (int)register0x00000054 + -9;
      local_14 = &local_24;
      local_30 = (double)CONCAT44(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                  (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18,
                                  uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                  (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
      local_20 = &DAT_01888abc;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar8 + uVar10;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case -0x20:
LAB_01148f8c:
    puStack_1c = &local_38;
    local_30 = (double)(longlong)(int)param_4;
    local_24 = (int)register0x00000054 + -9;
    local_14 = &local_24;
    local_38 = 2;
    local_20 = &DAT_01888abc;
    local_18 = &LAB_01579e10;
    FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
    return;
  default:
    if (param_3 == '\0') {
      *param_1 = 9;
      param_1[1] = param_4 != '\0';
      return;
    }
    goto switchD_0113fcc8_caseD_c1;
  }
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined **)(param_1 + 8) = &DAT_018aab20;
  return;
switchD_0113fcc8_caseD_c1:
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = 2;
  return;
}

