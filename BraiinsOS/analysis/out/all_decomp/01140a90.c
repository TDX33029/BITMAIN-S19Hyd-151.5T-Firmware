// FUN_01140a90 @ 01140a90 size=2564 calls_out=1 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01140c84) */
/* WARNING: Removing unreachable block (ram,0x01140bc4) */
/* WARNING: Removing unreachable block (ram,0x01140cb4) */
/* WARNING: Removing unreachable block (ram,0x01140d34) */
/* WARNING: Removing unreachable block (ram,0x01140c2c) */
/* WARNING: Removing unreachable block (ram,0x01140cf0) */
/* WARNING: Removing unreachable block (ram,0x01140c60) */
/* WARNING: Removing unreachable block (ram,0x01140bf4) */
/* WARNING: Removing unreachable block (ram,0x01140f04) */

void FUN_01140a90(undefined4 *param_1,int param_2,char param_3,byte param_4)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 local_40 [8];
  undefined4 local_38;
  uint local_34;
  undefined8 local_30;
  undefined *local_28;
  undefined1 *local_24;
  undefined *local_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  switch(param_3) {
  case -0x40:
    puStack_1c = (undefined1 *)&local_38;
    local_14 = &local_24;
    local_38 = CONCAT31(local_38._1_3_,7);
    local_24 = local_40 + 0x37;
    local_20 = &DAT_01888a1c;
    local_18 = &LAB_01579e10;
    FUN_0113e12c(param_1 + 1,&DAT_0057fedd,&puStack_1c);
    *param_1 = 1;
    return;
  case -0x3e:
  case -0x3d:
    puStack_1c = (undefined1 *)&local_38;
    local_14 = &local_24;
    local_38 = (uint)CONCAT21(local_38._2_2_,param_3 == -0x3d) << 8;
    local_24 = local_40 + 0x37;
    local_20 = &DAT_01888a1c;
    local_18 = &LAB_01579e10;
    FUN_0113e12c(param_1 + 1,&DAT_0057fedd,&puStack_1c);
    *param_1 = 1;
    return;
  case -0x36:
    uVar6 = *(uint *)(param_2 + 0xc);
    puVar5 = *(uint **)(param_2 + 8);
    if (uVar6 < 4) {
      *(uint *)(param_2 + 8) = (int)puVar5 + uVar6;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      param_1[2] = 2;
      *param_1 = 1;
      param_1[3] = &DAT_018aab20;
      return;
    }
    uVar3 = *puVar5;
    *(uint **)(param_2 + 8) = puVar5 + 1;
    *(uint *)(param_2 + 0xc) = uVar6 - 4;
    puStack_1c = (undefined1 *)&local_38;
    local_30 = (double)(float)(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                               (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18);
    local_14 = &local_24;
    local_38 = CONCAT31(local_38._1_3_,3);
    local_24 = local_40 + 0x37;
    local_20 = &DAT_01888a1c;
    local_18 = &LAB_01579e10;
    FUN_0113e12c(param_1 + 1,&DAT_0057fedd,&puStack_1c);
    *param_1 = 1;
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
      puStack_1c = (undefined1 *)&local_38;
      local_14 = &local_24;
      local_38 = CONCAT31(local_38._1_3_,3);
      local_24 = local_40 + 0x37;
      local_20 = &DAT_01888a1c;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1 + 1,&DAT_0057fedd,&puStack_1c);
      *param_1 = 1;
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
LAB_01142a5c:
      local_24 = local_40;
      local_38 = (uint)param_4;
      local_18 = &LAB_0115452c;
      puStack_1c = (undefined1 *)((int)&local_30 + 4);
      local_34 = 0;
      local_30 = (double)CONCAT44((int)&local_14 + 3,(undefined4)local_30);
      local_40[0] = 1;
      local_28 = &DAT_01888a1c;
      local_20 = &LAB_01579e10;
      FUN_0113e12c(param_1 + 1,&DAT_0057fedd,&local_24);
      *param_1 = 1;
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
      local_38 = (uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8);
      local_24 = local_40;
      local_18 = &LAB_0115452c;
      puStack_1c = (undefined1 *)((int)&local_30 + 4);
      local_34 = 0;
      local_30 = (double)CONCAT44((int)&local_14 + 3,(undefined4)local_30);
      local_40[0] = 1;
      local_28 = &DAT_01888a1c;
      local_20 = &LAB_01579e10;
      FUN_0113e12c(param_1 + 1,&DAT_0057fedd,&local_24);
      *param_1 = 1;
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
      local_38 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                 uVar3 >> 0x18;
      local_24 = local_40;
      local_18 = &LAB_0115452c;
      puStack_1c = (undefined1 *)((int)&local_30 + 4);
      local_34 = 0;
      local_30 = (double)CONCAT44((int)&local_14 + 3,(undefined4)local_30);
      local_40[0] = 1;
      local_28 = &DAT_01888a1c;
      local_20 = &LAB_01579e10;
      FUN_0113e12c(param_1 + 1,&DAT_0057fedd,&local_24);
      *param_1 = 1;
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
      local_34 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                 uVar4 >> 0x18;
      local_38 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                 uVar3 >> 0x18;
      local_24 = local_40;
      local_28 = &DAT_01888a1c;
      local_30 = (double)CONCAT44((int)&local_14 + 3,(undefined4)local_30);
      puStack_1c = (undefined1 *)((int)&local_30 + 4);
      local_40[0] = 1;
      local_18 = &LAB_0115452c;
      local_20 = &LAB_01579e10;
      FUN_0113e12c(param_1 + 1,&DAT_0057fedd,&local_24);
      *param_1 = 1;
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
      goto LAB_0114293c;
    }
    break;
  case -0x2f:
    uVar6 = *(uint *)(param_2 + 0xc);
    puVar2 = *(ushort **)(param_2 + 8);
    if (1 < uVar6) {
      uVar1 = *puVar2;
      *(ushort **)(param_2 + 8) = puVar2 + 1;
      *(uint *)(param_2 + 0xc) = uVar6 - 2;
      puStack_1c = (undefined1 *)&local_38;
      local_14 = &local_24;
      local_38 = CONCAT31(local_38._1_3_,2);
      local_30 = (double)(longlong)(int)(short)(uVar1 << 8 | uVar1 >> 8);
      local_24 = local_40 + 0x37;
      local_20 = &DAT_01888a1c;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1 + 1,&DAT_0057fedd,&puStack_1c);
      *param_1 = 1;
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
      puStack_1c = (undefined1 *)&local_38;
      local_14 = &local_24;
      local_30 = (double)(longlong)
                         (int)(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                               (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18);
      local_38 = CONCAT31(local_38._1_3_,2);
      local_24 = local_40 + 0x37;
      local_20 = &DAT_01888a1c;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1 + 1,&DAT_0057fedd,&puStack_1c);
      *param_1 = 1;
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
      puStack_1c = (undefined1 *)&local_38;
      local_20 = &DAT_01888a1c;
      local_24 = local_40 + 0x37;
      local_14 = &local_24;
      local_38 = CONCAT31(local_38._1_3_,2);
      local_30 = (double)CONCAT44(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                  (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18,
                                  uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                  (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18);
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1 + 1,&DAT_0057fedd,&puStack_1c);
      *param_1 = 1;
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar5 + uVar6;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case -0x20:
LAB_0114293c:
    puStack_1c = (undefined1 *)&local_38;
    local_14 = &local_24;
    local_38 = CONCAT31(local_38._1_3_,2);
    local_30 = (double)(longlong)(int)(char)param_4;
    local_24 = local_40 + 0x37;
    local_20 = &DAT_01888a1c;
    local_18 = &LAB_01579e10;
    FUN_0113e12c(param_1 + 1,&DAT_0057fedd,&puStack_1c);
    *param_1 = 1;
    return;
  default:
    if (param_3 == '\0') goto LAB_01142a5c;
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
    *(byte *)((int)param_1 + 6) = param_4;
    *(undefined1 *)(param_1 + 1) = 2;
    *(char *)((int)param_1 + 5) = param_3;
    *param_1 = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 1;
  param_1[2] = 2;
  param_1[3] = &DAT_018aab20;
  return;
}

