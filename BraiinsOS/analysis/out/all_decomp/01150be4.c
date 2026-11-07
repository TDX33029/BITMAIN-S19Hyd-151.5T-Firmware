// FUN_01150be4 @ 01150be4 size=2384 calls_out=2 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x0113e40c) */
/* WARNING: Removing unreachable block (ram,0x0113e374) */
/* WARNING: Removing unreachable block (ram,0x0113e2d8) */
/* WARNING: Removing unreachable block (ram,0x0113e3e8) */
/* WARNING: Removing unreachable block (ram,0x0113e2b4) */
/* WARNING: Removing unreachable block (ram,0x0113e62c) */
/* WARNING: Removing unreachable block (ram,0x0113e480) */
/* WARNING: Removing unreachable block (ram,0x0113e448) */
/* WARNING: Removing unreachable block (ram,0x0113e3a4) */

void FUN_01150be4(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  ushort *puVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined1 *local_24;
  undefined *local_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  bVar3 = *(byte *)(param_2 + 0x10);
  bVar6 = *(byte *)(param_2 + 0x11);
  *(undefined1 *)(param_2 + 0x10) = 1;
  if (bVar3 == 1) {
    if (*(int *)(param_2 + 0xc) == 0) {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 4) = 2;
      *(undefined **)(param_1 + 8) = &DAT_018aab20;
      return;
    }
    bVar6 = **(byte **)(param_2 + 8);
    *(byte **)(param_2 + 8) = *(byte **)(param_2 + 8) + 1;
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
    bVar3 = 0;
    if ((char)bVar6 < '\0') {
      if (bVar6 < 0x90) {
        bVar6 = bVar6 & 0xf;
        bVar3 = 0x80;
      }
      else if (bVar6 < 0xa0) {
        bVar6 = bVar6 & 0xf;
        bVar3 = 0x90;
      }
      else if (bVar6 < 0xc0) {
        bVar6 = bVar6 & 0x1f;
        bVar3 = 0xa0;
      }
      else {
        bVar3 = bVar6;
        if ((bVar6 & 0xe0) != 0xc0) {
          bVar3 = 0xe0;
        }
      }
    }
  }
  switch(bVar3) {
  case 0xc0:
    puStack_1c = local_38;
    local_38[0] = 7;
    local_24 = local_38 + 0x2f;
    local_14 = &local_24;
    local_20 = &DAT_01888b54;
    local_18 = &LAB_01579e10;
    FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
    return;
  case 0xc2:
  case 0xc3:
    *param_1 = 9;
    param_1[1] = bVar3 == 0xc3;
    return;
  case 0xca:
    uVar9 = *(uint *)(param_2 + 0xc);
    puVar8 = *(uint **)(param_2 + 8);
    if (uVar9 < 4) {
      *(uint *)(param_2 + 8) = (int)puVar8 + uVar9;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_1 + 4) = 2;
      *param_1 = 1;
      *(undefined **)(param_1 + 8) = &DAT_018aab20;
      return;
    }
    uVar5 = *puVar8;
    *(uint **)(param_2 + 8) = puVar8 + 1;
    *(uint *)(param_2 + 0xc) = uVar9 - 4;
    puStack_1c = local_38;
    local_30 = (double)(float)(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                               (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
    local_38[0] = 3;
    local_24 = local_38 + 0x2f;
    local_14 = &local_24;
    local_20 = &DAT_01888b54;
    local_18 = &LAB_01579e10;
    FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
    return;
  case 0xcb:
    puVar8 = *(uint **)(param_2 + 8);
    uVar9 = *(uint *)(param_2 + 0xc);
    if (7 < uVar9) {
      uVar7 = *puVar8;
      uVar5 = puVar8[1];
      *(uint **)(param_2 + 8) = puVar8 + 2;
      *(uint *)(param_2 + 0xc) = uVar9 - 8;
      local_30 = (double)CONCAT44(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                  (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18,
                                  uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                  (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
      puStack_1c = local_38;
      local_38[0] = 3;
      local_24 = local_38 + 0x2f;
      local_14 = &local_24;
      local_20 = &DAT_01888b54;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar8 + uVar9;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case 0xcc:
    if (*(int *)(param_2 + 0xc) != 0) {
      uVar1 = **(undefined1 **)(param_2 + 8);
      *(undefined1 **)(param_2 + 8) = *(undefined1 **)(param_2 + 8) + 1;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
      FUN_01150cd4(param_1,uVar1);
      return;
    }
    break;
  case 0xcd:
    uVar9 = *(uint *)(param_2 + 0xc);
    puVar4 = *(ushort **)(param_2 + 8);
    if (1 < uVar9) {
      uVar2 = *puVar4;
      *(ushort **)(param_2 + 8) = puVar4 + 1;
      *(uint *)(param_2 + 0xc) = uVar9 - 2;
      puStack_1c = local_38;
      local_38[0] = 1;
      local_24 = local_38 + 0x2f;
      local_14 = &local_24;
      local_30 = (double)(ulonglong)((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8));
      local_20 = &DAT_01888b54;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar4 + uVar9;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case 0xce:
    uVar9 = *(uint *)(param_2 + 0xc);
    puVar8 = *(uint **)(param_2 + 8);
    if (3 < uVar9) {
      uVar5 = *puVar8;
      *(uint **)(param_2 + 8) = puVar8 + 1;
      *(uint *)(param_2 + 0xc) = uVar9 - 4;
      puStack_1c = local_38;
      local_38[0] = 1;
      local_24 = local_38 + 0x2f;
      local_14 = &local_24;
      local_30 = (double)(ulonglong)
                         (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8
                         | uVar5 >> 0x18);
      local_20 = &DAT_01888b54;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar8 + uVar9;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case 0xcf:
    puVar8 = *(uint **)(param_2 + 8);
    uVar9 = *(uint *)(param_2 + 0xc);
    if (7 < uVar9) {
      uVar7 = *puVar8;
      uVar5 = puVar8[1];
      *(uint **)(param_2 + 8) = puVar8 + 2;
      *(uint *)(param_2 + 0xc) = uVar9 - 8;
      puStack_1c = local_38;
      local_38[0] = 1;
      local_24 = local_38 + 0x2f;
      local_14 = &local_24;
      local_30 = (double)CONCAT44(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                  (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18,
                                  uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                  (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
      local_20 = &DAT_01888b54;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar8 + uVar9;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case 0xd0:
    if (*(int *)(param_2 + 0xc) != 0) {
      bVar6 = **(byte **)(param_2 + 8);
      *(byte **)(param_2 + 8) = *(byte **)(param_2 + 8) + 1;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
      goto LAB_01150edc;
    }
    break;
  case 0xd1:
    uVar9 = *(uint *)(param_2 + 0xc);
    puVar4 = *(ushort **)(param_2 + 8);
    if (1 < uVar9) {
      uVar2 = *puVar4;
      *(ushort **)(param_2 + 8) = puVar4 + 1;
      *(uint *)(param_2 + 0xc) = uVar9 - 2;
      puStack_1c = local_38;
      local_30 = (double)(longlong)(int)(short)(uVar2 << 8 | uVar2 >> 8);
      local_24 = local_38 + 0x2f;
      local_14 = &local_24;
      local_38[0] = 2;
      local_20 = &DAT_01888b54;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar4 + uVar9;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case 0xd2:
    uVar9 = *(uint *)(param_2 + 0xc);
    puVar8 = *(uint **)(param_2 + 8);
    if (3 < uVar9) {
      uVar5 = *puVar8;
      *(uint **)(param_2 + 8) = puVar8 + 1;
      *(uint *)(param_2 + 0xc) = uVar9 - 4;
      puStack_1c = local_38;
      local_38[0] = 2;
      local_24 = local_38 + 0x2f;
      local_14 = &local_24;
      local_30 = (double)(longlong)
                         (int)(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                               (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
      local_20 = &DAT_01888b54;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar8 + uVar9;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case 0xd3:
    puVar8 = *(uint **)(param_2 + 8);
    uVar9 = *(uint *)(param_2 + 0xc);
    if (7 < uVar9) {
      uVar7 = *puVar8;
      uVar5 = puVar8[1];
      *(uint **)(param_2 + 8) = puVar8 + 2;
      *(uint *)(param_2 + 0xc) = uVar9 - 8;
      puStack_1c = local_38;
      local_38[0] = 2;
      local_24 = local_38 + 0x2f;
      local_14 = &local_24;
      local_30 = (double)CONCAT44(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                  (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18,
                                  uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                  (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
      local_20 = &DAT_01888b54;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar8 + uVar9;
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case 0xe0:
LAB_01150edc:
    puStack_1c = local_38;
    local_30 = (double)(longlong)(int)(char)bVar6;
    local_24 = local_38 + 0x2f;
    local_14 = &local_24;
    local_38[0] = 2;
    local_20 = &DAT_01888b54;
    local_18 = &LAB_01579e10;
    FUN_0113e12c(param_1,&DAT_0057fedd,&puStack_1c);
    return;
  default:
    if (bVar3 == 0) {
      FUN_01150cd4(param_1,bVar6);
      return;
    }
  case 0xc1:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
    param_1[2] = bVar6;
    param_1[1] = bVar3;
    *param_1 = 2;
    return;
  }
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined **)(param_1 + 8) = &DAT_018aab20;
  return;
}

