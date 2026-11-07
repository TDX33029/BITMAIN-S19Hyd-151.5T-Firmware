// FUN_0113d96c @ 0113d96c size=2116 calls_out=1 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x0113dcc0) */
/* WARNING: Removing unreachable block (ram,0x0113dd28) */
/* WARNING: Removing unreachable block (ram,0x0113df54) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0113d96c(undefined1 *param_1,int param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined1 local_40 [8];
  undefined4 local_38;
  uint local_34;
  undefined8 local_30;
  undefined *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  bVar2 = *(byte *)(param_2 + 0x10);
  bVar5 = *(byte *)(param_2 + 0x11);
  *(undefined1 *)(param_2 + 0x10) = 1;
  if (bVar2 == 1) {
    if (*(int *)(param_2 + 0xc) == 0) {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 4) = 2;
      *(undefined **)(param_1 + 8) = &DAT_018aab20;
      return;
    }
    bVar2 = 0;
    bVar5 = **(byte **)(param_2 + 8);
    *(byte **)(param_2 + 8) = *(byte **)(param_2 + 8) + 1;
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
    if ((char)bVar5 < '\0') {
      if (bVar5 < 0x90) {
        bVar5 = bVar5 & 0xf;
        bVar2 = 0x80;
      }
      else if (bVar5 < 0xa0) {
        bVar5 = bVar5 & 0xf;
        bVar2 = 0x90;
      }
      else if (bVar5 < 0xc0) {
        bVar5 = bVar5 & 0x1f;
        bVar2 = 0xa0;
      }
      else {
        bVar2 = bVar5;
        if ((bVar5 & 0xe0) != 0xc0) {
          bVar2 = 0xe0;
        }
      }
    }
  }
  local_24 = local_40;
  switch(bVar2) {
  case 0xc0:
    local_1c = (undefined1 *)&local_38;
    local_38 = CONCAT31(local_38._1_3_,7);
    local_24 = local_40 + 0x37;
    local_14 = &local_24;
    local_20 = &DAT_01888b44;
    local_18 = &LAB_01579e10;
    FUN_0113e12c(param_1,&DAT_0057fedd,&local_1c);
    return;
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
    goto switchD_0113da7c_caseD_c1;
  case 0xc2:
  case 0xc3:
    local_1c = (undefined1 *)&local_38;
    local_38 = (uint)CONCAT21(local_38._2_2_,bVar2 == 0xc3) << 8;
    local_24 = local_40 + 0x37;
    local_14 = &local_24;
    local_20 = &DAT_01888b44;
    local_18 = &LAB_01579e10;
    FUN_0113e12c(param_1,&DAT_0057fedd,&local_1c);
    return;
  case 0xca:
    uVar8 = *(uint *)(param_2 + 0xc);
    if (uVar8 < 4) {
      *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + uVar8;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *param_1 = 1;
      *(undefined4 *)(param_1 + 4) = 2;
      *(undefined **)(param_1 + 8) = &DAT_018aab20;
      return;
    }
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
    *(uint *)(param_2 + 0xc) = uVar8 - 4;
    FUN_0113e12c(param_1,&DAT_0057fedd,&local_1c);
    return;
  case 0xcb:
    puVar7 = *(uint **)(param_2 + 8);
    uVar8 = *(uint *)(param_2 + 0xc);
    if (7 < uVar8) {
      uVar6 = *puVar7;
      uVar4 = puVar7[1];
      *(uint **)(param_2 + 8) = puVar7 + 2;
      *(uint *)(param_2 + 0xc) = uVar8 - 8;
      local_30 = CONCAT44(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8
                          | uVar6 >> 0x18,
                          uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8
                          | uVar4 >> 0x18);
      local_1c = (undefined1 *)&local_38;
      local_38 = CONCAT31(local_38._1_3_,3);
      local_24 = local_40 + 0x37;
      local_14 = &local_24;
      local_20 = &DAT_01888b44;
      local_18 = &LAB_01579e10;
      FUN_0113e12c(param_1,&DAT_0057fedd,&local_1c);
      return;
    }
    *(uint *)(param_2 + 8) = (int)puVar7 + uVar8;
    *(undefined4 *)(param_2 + 0xc) = 0;
LAB_0113df5c:
    *param_1 = 1;
    *(undefined4 *)(param_1 + 4) = 2;
    *(undefined **)(param_1 + 8) = &DAT_018aab20;
    return;
  case 0xcc:
    if (*(int *)(param_2 + 0xc) == 0) {
LAB_0113dfa8:
      *param_1 = 1;
      *(undefined4 *)(param_1 + 4) = 2;
      *(undefined **)(param_1 + 8) = &DAT_018aab20;
      return;
    }
    local_38 = (uint)**(byte **)(param_2 + 8);
    *(byte **)(param_2 + 8) = *(byte **)(param_2 + 8) + 1;
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
    goto LAB_0113df94;
  case 0xcd:
    uVar8 = *(uint *)(param_2 + 0xc);
    puVar3 = *(ushort **)(param_2 + 8);
    if (uVar8 < 2) {
      *(uint *)(param_2 + 8) = (int)puVar3 + uVar8;
      *(undefined4 *)(param_2 + 0xc) = 0;
      goto LAB_0113df5c;
    }
    uVar1 = *puVar3;
    *(ushort **)(param_2 + 8) = puVar3 + 1;
    *(uint *)(param_2 + 0xc) = uVar8 - 2;
    local_38 = (uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8);
    break;
  case 0xce:
    uVar8 = *(uint *)(param_2 + 0xc);
    puVar7 = *(uint **)(param_2 + 8);
    if (uVar8 < 4) {
      *(uint *)(param_2 + 8) = (int)puVar7 + uVar8;
      *(undefined4 *)(param_2 + 0xc) = 0;
      goto LAB_0113df5c;
    }
    uVar4 = *puVar7;
    *(uint **)(param_2 + 8) = puVar7 + 1;
    *(uint *)(param_2 + 0xc) = uVar8 - 4;
    local_38 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
               uVar4 >> 0x18;
    break;
  case 0xcf:
    puVar7 = *(uint **)(param_2 + 8);
    uVar8 = *(uint *)(param_2 + 0xc);
    if (uVar8 < 8) {
      *(uint *)(param_2 + 8) = (int)puVar7 + uVar8;
      *(undefined4 *)(param_2 + 0xc) = 0;
      goto LAB_0113dfa8;
    }
    uVar6 = *puVar7;
    uVar4 = puVar7[1];
    *(uint **)(param_2 + 8) = puVar7 + 2;
    *(uint *)(param_2 + 0xc) = uVar8 - 8;
    local_38 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
               uVar4 >> 0x18;
    local_34 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
               uVar6 >> 0x18;
    if (-local_34 < (uint)(local_38 < 0x100)) goto LAB_0113df94;
    local_40[0] = 1;
    goto LAB_0113de54;
  case 0xd0:
    if (*(int *)(param_2 + 0xc) == 0) goto LAB_0113df5c;
    local_38 = (uint)**(char **)(param_2 + 8);
    *(char **)(param_2 + 8) = *(char **)(param_2 + 8) + 1;
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
    if (local_38 < 0x80000000) goto LAB_0113df94;
    goto LAB_0113def8;
  case 0xd1:
    uVar8 = *(uint *)(param_2 + 0xc);
    puVar3 = *(ushort **)(param_2 + 8);
    if (uVar8 < 2) {
      *(uint *)(param_2 + 8) = (int)puVar3 + uVar8;
      *(undefined4 *)(param_2 + 0xc) = 0;
      goto LAB_0113df5c;
    }
    uVar1 = *puVar3;
    *(ushort **)(param_2 + 8) = puVar3 + 1;
    *(uint *)(param_2 + 0xc) = uVar8 - 2;
    local_38 = (uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8);
    if (local_38 < 0x100) goto LAB_0113df94;
    local_38 = (uint)(short)local_38;
    goto LAB_0113e058;
  case 0xd2:
    uVar8 = *(uint *)(param_2 + 0xc);
    puVar7 = *(uint **)(param_2 + 8);
    if (uVar8 < 4) {
      *(uint *)(param_2 + 8) = (int)puVar7 + uVar8;
      *(undefined4 *)(param_2 + 0xc) = 0;
      goto LAB_0113df5c;
    }
    uVar4 = *puVar7;
    *(uint **)(param_2 + 8) = puVar7 + 1;
    *(uint *)(param_2 + 0xc) = uVar8 - 4;
    local_38 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
               uVar4 >> 0x18;
    if (local_38 < 0x100) goto LAB_0113df94;
LAB_0113def8:
    local_34 = (int)local_38 >> 0x1f;
    local_40[0] = 2;
    local_30 = CONCAT44((int)&local_14 + 3,(undefined4)local_30);
    goto LAB_0113e074;
  case 0xd3:
    puVar7 = *(uint **)(param_2 + 8);
    uVar8 = *(uint *)(param_2 + 0xc);
    if (uVar8 < 8) {
      *(uint *)(param_2 + 8) = (int)puVar7 + uVar8;
      *(undefined4 *)(param_2 + 0xc) = 0;
      goto LAB_0113dfa8;
    }
    uVar6 = *puVar7;
    uVar4 = puVar7[1];
    *(uint **)(param_2 + 8) = puVar7 + 2;
    *(uint *)(param_2 + 0xc) = uVar8 - 8;
    local_38 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
               uVar4 >> 0x18;
    local_34 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
               uVar6 >> 0x18;
    if (local_34 == 0 && (0xff < local_38) <= local_34) goto LAB_0113df94;
    local_40[0] = 2;
LAB_0113de54:
    local_30 = CONCAT44((int)&local_14 + 3,(undefined4)local_30);
    goto LAB_0113e074;
  case 0xe0:
    local_38 = (uint)(char)bVar5;
    if (-1 < (int)local_38) {
LAB_0113dbcc:
      param_1[1] = bVar5;
      *param_1 = 9;
      return;
    }
LAB_0113e058:
    local_40[0] = 2;
    local_34 = (int)local_38 >> 0x1f;
    goto LAB_0113e064;
  default:
    if (bVar2 == 0) goto LAB_0113dbcc;
    goto switchD_0113da7c_caseD_c1;
  }
  if (local_38 < 0x100) {
LAB_0113df94:
    *param_1 = 9;
    param_1[1] = (char)local_38;
    return;
  }
  local_34 = 0;
  local_40[0] = 1;
LAB_0113e064:
  local_30 = CONCAT44((int)&local_14 + 3,(undefined4)local_30);
LAB_0113e074:
  local_18 = &LAB_0115452c;
  local_28 = &DAT_01888b44;
  local_1c = (undefined1 *)((int)&local_30 + 4);
  local_20 = &LAB_01579e10;
  FUN_0113e12c(param_1,&DAT_0058e458,&local_24);
  return;
switchD_0113da7c_caseD_c1:
  param_1[2] = bVar5;
  param_1[1] = bVar2;
  *param_1 = 2;
  return;
}

