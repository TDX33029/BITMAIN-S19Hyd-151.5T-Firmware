// FUN_01140144 @ 01140144 size=2372 calls_out=1 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01140334) */
/* WARNING: Removing unreachable block (ram,0x01140274) */
/* WARNING: Removing unreachable block (ram,0x01140364) */
/* WARNING: Removing unreachable block (ram,0x011403e4) */
/* WARNING: Removing unreachable block (ram,0x011402dc) */
/* WARNING: Removing unreachable block (ram,0x011403a0) */
/* WARNING: Removing unreachable block (ram,0x01140310) */
/* WARNING: Removing unreachable block (ram,0x011402a4) */
/* WARNING: Removing unreachable block (ram,0x011405a8) */

void FUN_01140144(undefined1 *param_1,int param_2,char param_3,byte param_4)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
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
    local_20 = &DAT_01888a9c;
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
    local_20 = &DAT_01888a9c;
    local_18 = &LAB_01579e10;
    FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
    return;
  case -0x36:
    uVar6 = *(uint *)(param_2 + 0xc);
    puVar5 = *(uint **)(param_2 + 8);
    if (uVar6 < 4) {
      *(uint *)(param_2 + 8) = (int)puVar5 + uVar6;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_1 + 4) = 2;
      *param_1 = 1;
      *(undefined **)(param_1 + 8) = &DAT_018aab20;
      return;
    }
    uVar3 = *puVar5;
    *(uint **)(param_2 + 8) = puVar5 + 1;
    *(uint *)(param_2 + 0xc) = uVar6 - 4;
    puStack_1c = &local_38;
    local_30 = (double)(float)(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                               (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18);
    local_38 = 3;
    local_24 = (int)register0x00000054 + -9;
    local_14 = &local_24;
    local_20 = &DAT_01888a9c;
    local_18 = &LAB_01579e10;
    FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
    return;
  case -0x35:
    puVar5 = *(uint **)(param_2 + 8);
    uVar6 = *(uint *)(param_2 + 0xc);
    if (7 < uVar6) {
      uVar4 = *puVar5;
      uVar3 = puVar5[1];
      *(uint **)(param_2 + 8) = puVar5 + 2;
      *(uint *)(param_2 + 0xc) = uVar6 - 8;
      local_30 = (double)CONCAT44(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                  (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18,
                                  uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                  (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18);
      puStack_1c = &local_38;
      local_38 = 3;
      local_24 = (int)register0x00000054 + -9;
      local_14 = &local_24;
      local_20 = &DAT_01888a9c;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar5 + uVar6;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case -0x34:
    if (*(int *)(param_2 + 0xc) != 0) {
      param_4 = **(byte **)(param_2 + 8);
      *(byte **)(param_2 + 8) = *(byte **)(param_2 + 8) + 1;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
LAB_01149014:
      puStack_1c = &local_38;
      local_38 = 1;
      local_24 = (int)register0x00000054 + -9;
      local_14 = &local_24;
      local_30 = (double)(ulonglong)param_4;
      local_20 = &DAT_01888a9c;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    break;
  case -0x33:
    uVar6 = *(uint *)(param_2 + 0xc);
    puVar2 = *(ushort **)(param_2 + 8);
    if (1 < uVar6) {
      uVar1 = *puVar2;
      *(ushort **)(param_2 + 8) = puVar2 + 1;
      *(uint *)(param_2 + 0xc) = uVar6 - 2;
      puStack_1c = &local_38;
      local_38 = 1;
      local_24 = (int)register0x00000054 + -9;
      local_14 = &local_24;
      local_30 = (double)(ulonglong)((uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8));
      local_20 = &DAT_01888a9c;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar2 + uVar6;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case -0x32:
    uVar6 = *(uint *)(param_2 + 0xc);
    puVar5 = *(uint **)(param_2 + 8);
    if (3 < uVar6) {
      uVar3 = *puVar5;
      *(uint **)(param_2 + 8) = puVar5 + 1;
      *(uint *)(param_2 + 0xc) = uVar6 - 4;
      puStack_1c = &local_38;
      local_38 = 1;
      local_24 = (int)register0x00000054 + -9;
      local_14 = &local_24;
      local_30 = (double)(ulonglong)
                         (uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8
                         | uVar3 >> 0x18);
      local_20 = &DAT_01888a9c;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar5 + uVar6;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case -0x31:
    puVar5 = *(uint **)(param_2 + 8);
    uVar6 = *(uint *)(param_2 + 0xc);
    if (7 < uVar6) {
      uVar4 = *puVar5;
      uVar3 = puVar5[1];
      *(uint **)(param_2 + 8) = puVar5 + 2;
      *(uint *)(param_2 + 0xc) = uVar6 - 8;
      puStack_1c = &local_38;
      local_38 = 1;
      local_24 = (int)register0x00000054 + -9;
      local_14 = &local_24;
      local_30 = (double)CONCAT44(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                  (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18,
                                  uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                  (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18);
      local_20 = &DAT_01888a9c;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar5 + uVar6;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case -0x30:
    if (*(int *)(param_2 + 0xc) != 0) {
      param_4 = **(byte **)(param_2 + 8);
      *(byte **)(param_2 + 8) = *(byte **)(param_2 + 8) + 1;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
      goto LAB_01148e7c;
    }
    break;
  case -0x2f:
    uVar6 = *(uint *)(param_2 + 0xc);
    puVar2 = *(ushort **)(param_2 + 8);
    if (1 < uVar6) {
      uVar1 = *puVar2;
      *(ushort **)(param_2 + 8) = puVar2 + 1;
      *(uint *)(param_2 + 0xc) = uVar6 - 2;
      puStack_1c = &local_38;
      local_30 = (double)(longlong)(int)(short)(uVar1 << 8 | uVar1 >> 8);
      local_24 = (int)register0x00000054 + -9;
      local_14 = &local_24;
      local_38 = 2;
      local_20 = &DAT_01888a9c;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar2 + uVar6;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case -0x2e:
    uVar6 = *(uint *)(param_2 + 0xc);
    puVar5 = *(uint **)(param_2 + 8);
    if (3 < uVar6) {
      uVar3 = *puVar5;
      *(uint **)(param_2 + 8) = puVar5 + 1;
      *(uint *)(param_2 + 0xc) = uVar6 - 4;
      puStack_1c = &local_38;
      local_38 = 2;
      local_24 = (int)register0x00000054 + -9;
      local_14 = &local_24;
      local_30 = (double)(longlong)
                         (int)(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                               (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18);
      local_20 = &DAT_01888a9c;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar5 + uVar6;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case -0x2d:
    puVar5 = *(uint **)(param_2 + 8);
    uVar6 = *(uint *)(param_2 + 0xc);
    if (7 < uVar6) {
      uVar4 = *puVar5;
      uVar3 = puVar5[1];
      *(uint **)(param_2 + 8) = puVar5 + 2;
      *(uint *)(param_2 + 0xc) = uVar6 - 8;
      puStack_1c = &local_38;
      local_38 = 2;
      local_24 = (int)register0x00000054 + -9;
      local_14 = &local_24;
      local_30 = (double)CONCAT44(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                  (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18,
                                  uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                  (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18);
      local_20 = &DAT_01888a9c;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar5 + uVar6;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case -0x20:
LAB_01148e7c:
    puStack_1c = &local_38;
    local_30 = (double)(longlong)(int)(char)param_4;
    local_24 = (int)register0x00000054 + -9;
    local_14 = &local_24;
    local_38 = 2;
    local_20 = &DAT_01888a9c;
    local_18 = &LAB_01579e10;
    FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
    return;
  default:
    if (param_3 == '\0') goto LAB_01149014;
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

