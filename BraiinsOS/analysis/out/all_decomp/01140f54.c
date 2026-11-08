// FUN_01140f54 @ 01140f54 size=1956 calls_out=1 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01141304) */
/* WARNING: Removing unreachable block (ram,0x01141180) */
/* WARNING: Removing unreachable block (ram,0x01141234) */
/* WARNING: Removing unreachable block (ram,0x01141268) */
/* WARNING: Removing unreachable block (ram,0x01141118) */
/* WARNING: Removing unreachable block (ram,0x011413f4) */

void FUN_01140f54(undefined1 *param_1,int param_2,char param_3,char param_4)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  ushort *puVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
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
    local_20 = &DAT_01888a2c;
    local_18 = &LAB_01579e10;
    FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
    return;
  case -0x3e:
  case -0x3d:
    local_37 = param_3 == -0x3d;
    puStack_1c = &local_38;
    local_24 = (int)register0x00000054 + -9;
    local_14 = &local_24;
    local_38 = 0;
    local_20 = &DAT_01888a2c;
    local_18 = &LAB_01579e10;
    FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
    return;
  case -0x36:
    uVar13 = *(uint *)(param_2 + 0xc);
    puVar12 = *(uint **)(param_2 + 8);
    if (uVar13 < 4) {
      *(uint *)(param_2 + 8) = (int)puVar12 + uVar13;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_1 + 4) = 2;
      *param_1 = 1;
      *(undefined **)(param_1 + 8) = &DAT_018aab20;
      return;
    }
    uVar6 = *puVar12;
    *(uint **)(param_2 + 8) = puVar12 + 1;
    *(uint *)(param_2 + 0xc) = uVar13 - 4;
    puStack_1c = &local_38;
    local_30 = (double)(float)(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                               (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18);
    local_38 = 3;
    local_24 = (int)register0x00000054 + -9;
    local_14 = &local_24;
    local_20 = &DAT_01888a2c;
    local_18 = &LAB_01579e10;
    FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
    return;
  case -0x35:
    puVar12 = *(uint **)(param_2 + 8);
    uVar13 = *(uint *)(param_2 + 0xc);
    if (7 < uVar13) {
      uVar10 = *puVar12;
      uVar6 = puVar12[1];
      *(uint **)(param_2 + 8) = puVar12 + 2;
      *(uint *)(param_2 + 0xc) = uVar13 - 8;
      local_30 = (double)CONCAT44(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                  (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18,
                                  uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                  (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18);
      puStack_1c = &local_38;
      local_38 = 3;
      local_24 = (int)register0x00000054 + -9;
      local_14 = &local_24;
      local_20 = &DAT_01888a2c;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar12 + uVar13;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case -0x34:
    if (*(int *)(param_2 + 0xc) != 0) {
      cVar3 = **(char **)(param_2 + 8);
      *(char **)(param_2 + 8) = *(char **)(param_2 + 8) + 1;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
      cVar2 = cVar3;
      if (cVar3 != '\0') {
        cVar2 = '\x02';
      }
      if (cVar3 == '\x01') {
        cVar2 = cVar3;
      }
      param_1[1] = cVar2;
      *param_1 = 9;
      return;
    }
    break;
  case -0x33:
    uVar13 = *(uint *)(param_2 + 0xc);
    piVar4 = *(int **)(param_2 + 8);
    if (1 < uVar13) {
      *(uint *)(param_2 + 0xc) = uVar13 - 2;
      iVar9 = *piVar4;
      *(short **)(param_2 + 8) = (short *)((int)piVar4 + 2);
      uVar8 = 2;
      if ((short)iVar9 == 0x100) {
        uVar8 = 1;
      }
      if ((short)iVar9 == 0) {
        uVar8 = 0;
      }
      param_1[1] = uVar8;
      *param_1 = 9;
      return;
    }
    goto LAB_011411a0;
  case -0x32:
    uVar13 = *(uint *)(param_2 + 0xc);
    piVar4 = *(int **)(param_2 + 8);
    if (3 < uVar13) {
      iVar9 = *piVar4;
      *(int **)(param_2 + 8) = piVar4 + 1;
      *(uint *)(param_2 + 0xc) = uVar13 - 4;
      uVar8 = 2;
      if (iVar9 == 0x1000000) {
        uVar8 = 1;
      }
      if (iVar9 == 0) {
        uVar8 = 0;
      }
      param_1[1] = uVar8;
      *param_1 = 9;
      return;
    }
    goto LAB_011411a0;
  case -0x31:
    uVar13 = *(uint *)(param_2 + 0xc);
    piVar4 = *(int **)(param_2 + 8);
    if (7 < uVar13) {
      iVar11 = piVar4[1];
      iVar9 = *piVar4;
      *(int **)(param_2 + 8) = piVar4 + 2;
      *(uint *)(param_2 + 0xc) = uVar13 - 8;
      uVar8 = 2;
      if (iVar9 == 0 && iVar11 == 0x1000000) {
        uVar8 = 1;
      }
      uVar7 = 0;
      if (iVar9 != 0 || iVar11 != 0) {
        uVar7 = uVar8;
      }
      param_1[1] = uVar7;
      *param_1 = 9;
      return;
    }
LAB_011411a0:
    *(uint *)(param_2 + 8) = (int)piVar4 + uVar13;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case -0x30:
    if (*(int *)(param_2 + 0xc) != 0) {
      param_4 = **(char **)(param_2 + 8);
      *(char **)(param_2 + 8) = *(char **)(param_2 + 8) + 1;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
      goto LAB_011429d4;
    }
    break;
  case -0x2f:
    uVar13 = *(uint *)(param_2 + 0xc);
    puVar5 = *(ushort **)(param_2 + 8);
    if (1 < uVar13) {
      uVar1 = *puVar5;
      *(ushort **)(param_2 + 8) = puVar5 + 1;
      *(uint *)(param_2 + 0xc) = uVar13 - 2;
      puStack_1c = &local_38;
      local_30 = (double)(longlong)(int)(short)(uVar1 << 8 | uVar1 >> 8);
      local_24 = (int)register0x00000054 + -9;
      local_14 = &local_24;
      local_38 = 2;
      local_20 = &DAT_01888a2c;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar5 + uVar13;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case -0x2e:
    uVar13 = *(uint *)(param_2 + 0xc);
    puVar12 = *(uint **)(param_2 + 8);
    if (3 < uVar13) {
      uVar6 = *puVar12;
      *(uint **)(param_2 + 8) = puVar12 + 1;
      *(uint *)(param_2 + 0xc) = uVar13 - 4;
      puStack_1c = &local_38;
      local_38 = 2;
      local_24 = (int)register0x00000054 + -9;
      local_14 = &local_24;
      local_30 = (double)(longlong)
                         (int)(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                               (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18);
      local_20 = &DAT_01888a2c;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar12 + uVar13;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case -0x2d:
    puVar12 = *(uint **)(param_2 + 8);
    uVar13 = *(uint *)(param_2 + 0xc);
    if (7 < uVar13) {
      uVar10 = *puVar12;
      uVar6 = puVar12[1];
      *(uint **)(param_2 + 8) = puVar12 + 2;
      *(uint *)(param_2 + 0xc) = uVar13 - 8;
      puStack_1c = &local_38;
      local_38 = 2;
      local_24 = (int)register0x00000054 + -9;
      local_14 = &local_24;
      local_30 = (double)CONCAT44(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                  (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18,
                                  uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                  (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18);
      local_20 = &DAT_01888a2c;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar12 + uVar13;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case -0x20:
LAB_011429d4:
    puStack_1c = &local_38;
    local_30 = (double)(longlong)(int)param_4;
    local_24 = (int)register0x00000054 + -9;
    local_14 = &local_24;
    local_38 = 2;
    local_20 = &DAT_01888a2c;
    local_18 = &LAB_01579e10;
    FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
    return;
  default:
    if (param_3 == '\0') {
      *param_1 = 9;
      cVar3 = param_4;
      if (param_4 != '\x01') {
        cVar3 = '\x02';
      }
      if (param_4 == '\0') {
        cVar3 = param_4;
      }
      param_1[1] = cVar3;
      return;
    }
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
    param_1[2] = param_4;
    param_1[1] = param_3;
    *param_1 = 2;
    return;
  }
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined **)(param_1 + 8) = &DAT_018aab20;
  return;
}

