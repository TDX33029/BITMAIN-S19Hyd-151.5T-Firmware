// FUN_014f9608 @ 014f9608 size=572 calls_out=2 calls_in=2
// strings: 

void FUN_014f9608(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined1 auStack_32 [2];
  uint local_30;
  undefined4 local_2c;
  undefined1 auStack_22 [2];
  uint local_20;
  undefined4 local_1c;
  
  switch(param_2) {
  case 0:
    uVar7 = 0x305c;
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
    goto switchD_014f9618_caseD_1;
  case 9:
    uVar7 = 0x745c;
    break;
  case 10:
    uVar7 = 0x6e5c;
    break;
  case 0xd:
    uVar7 = 0x725c;
    break;
  case 0x22:
    uVar7 = 0x225c;
    break;
  case 0x27:
    uVar7 = 0x275c;
    break;
  default:
    if (param_2 == 0x5c) {
      uVar7 = 0x5c5c;
      break;
    }
switchD_014f9618_caseD_1:
    if ((param_2 >> 8 < 3) || (iVar3 = FUN_00faa250(param_2), iVar3 == 0)) {
      iVar3 = FUN_00fa9eec(param_2);
      if (iVar3 != 0) {
        uVar6 = 0x81;
        uVar5 = 0x80;
        *param_1 = param_2;
        goto LAB_014f98d0;
      }
      uVar5 = (&DAT_00563e90)[(param_2 & 0xfff) >> 8];
      uVar6 = (&DAT_00563e90)[param_2 & 0xf];
      local_1c._0_2_ =
           CONCAT11((&DAT_00563e90)[(param_2 & 0xffff) >> 0xc],
                    (&DAT_00563e90)[(param_2 & 0xfffff) >> 0x10]);
      local_20 = (uint)(byte)(&DAT_00563e90)[param_2 >> 0x14] << 0x18;
      iVar3 = ((uint)LZCOUNT(param_2 | 1) >> 2) - 2;
      puVar4 = (undefined1 *)((uint)&local_20 | (uint)LZCOUNT(param_2 | 1) >> 2);
      local_1c._0_3_ = (uint3)(ushort)local_1c;
      local_1c = CONCAT13((&DAT_00563e90)[(param_2 & 0xff) >> 4],(uint3)local_1c);
      *(undefined1 *)((int)&local_20 + iVar3) = 0x5c;
      local_1c._0_3_ = CONCAT12(uVar5,(ushort)local_1c);
      *puVar4 = 0x7b;
      puVar4[-1] = 0x75;
      local_30 = local_20;
      local_2c = local_1c;
    }
    else {
      uVar5 = (&DAT_00563e90)[(param_2 & 0xfff) >> 8];
      uVar2 = (&DAT_00563e90)[(param_2 & 0xff) >> 4];
      uVar6 = (&DAT_00563e90)[param_2 & 0xf];
      uVar1 = (uint)LZCOUNT(param_2 | 1) >> 2;
      iVar3 = uVar1 - 2;
      local_2c._0_2_ =
           CONCAT11((&DAT_00563e90)[(param_2 & 0xffff) >> 0xc],
                    (&DAT_00563e90)[(param_2 & 0xfffff) >> 0x10]);
      puVar4 = (undefined1 *)((uint)&local_30 | (uint)LZCOUNT(param_2 | 1) >> 2);
      local_30 = (uint)(byte)(&DAT_00563e90)[param_2 >> 0x14] << 0x18;
      auStack_32[uVar1] = 0x5c;
      local_2c = CONCAT13(uVar2,CONCAT12(uVar5,(undefined2)local_2c));
      *puVar4 = 0x7b;
      puVar4[-1] = 0x75;
    }
    uVar5 = (undefined1)iVar3;
    *(ushort *)(param_1 + 2) = CONCAT11(0x7d,uVar6);
    *param_1 = local_30;
    param_1[1] = local_2c;
    uVar6 = 10;
LAB_014f98d0:
    *(undefined1 *)((int)param_1 + 0xd) = uVar6;
    *(undefined1 *)(param_1 + 3) = uVar5;
    return;
  }
  *(undefined4 *)((int)param_1 + 6) = 0;
  *(undefined4 *)((int)param_1 + 2) = 0;
  *(undefined2 *)param_1 = uVar7;
  *(undefined1 *)((int)param_1 + 0xd) = 2;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}

