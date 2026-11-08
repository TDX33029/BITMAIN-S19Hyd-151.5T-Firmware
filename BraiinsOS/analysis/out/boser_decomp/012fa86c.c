// FUN_012fa86c @ 012fa86c size=608 calls_out=2 calls_in=4
// strings: 

void FUN_012fa86c(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined1 *puVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_3a [2];
  uint local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined1 auStack_2a [2];
  uint local_28;
  undefined4 local_24;
  undefined2 local_20;
  
  bVar9 = 0x26 < param_2;
  switch(param_2) {
  case 0:
    uVar6 = 0x305c;
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
switchD_012fa888_caseD_1:
    bVar8 = (param_3 & 1) == 0;
    if (!bVar8) {
      param_3 = param_2 >> 8;
      bVar9 = 1 < param_3;
    }
    if ((!bVar9 || (bVar8 || param_3 == 2)) || (iVar3 = FUN_012faed8(param_2), iVar3 == 0)) {
LAB_012faa68:
      iVar3 = FUN_012fab74(param_2);
      if (iVar3 != 0) {
        *param_1 = param_2;
        uVar5 = 0x81;
        uVar4 = 0x80;
        goto LAB_012fab5c;
      }
      uVar4 = (&DAT_005679b8)[(param_2 & 0xfff) >> 8];
      uVar5 = (&DAT_005679b8)[param_2 & 0xf];
      local_24._0_2_ =
           CONCAT11((&DAT_005679b8)[(param_2 & 0xffff) >> 0xc],
                    (&DAT_005679b8)[(param_2 & 0xfffff) >> 0x10]);
      local_28 = (uint)(byte)(&DAT_005679b8)[param_2 >> 0x14] << 0x18;
      iVar3 = ((uint)LZCOUNT(param_2 | 1) >> 2) - 2;
      puVar7 = (undefined1 *)((uint)&local_28 | (uint)LZCOUNT(param_2 | 1) >> 2);
      local_24._0_3_ = (uint3)(ushort)local_24;
      local_24 = CONCAT13((&DAT_005679b8)[(param_2 & 0xff) >> 4],(uint3)local_24);
      *(undefined1 *)((int)&local_28 + iVar3) = 0x5c;
      local_24._0_3_ = CONCAT12(uVar4,(ushort)local_24);
      *puVar7 = 0x7b;
      puVar7[-1] = 0x75;
      local_20 = CONCAT11(0x7d,uVar5);
      *param_1 = local_28;
      param_1[1] = local_24;
      *(undefined2 *)(param_1 + 2) = local_20;
    }
    else {
      uVar4 = (&DAT_005679b8)[(param_2 & 0xfff) >> 8];
      uVar5 = (&DAT_005679b8)[(param_2 & 0xff) >> 4];
      uVar2 = (&DAT_005679b8)[param_2 & 0xf];
      uVar1 = (uint)LZCOUNT(param_2 | 1) >> 2;
      iVar3 = uVar1 - 2;
      local_34._0_2_ =
           CONCAT11((&DAT_005679b8)[(param_2 & 0xffff) >> 0xc],
                    (&DAT_005679b8)[(param_2 & 0xfffff) >> 0x10]);
      puVar7 = (undefined1 *)((uint)&local_38 | (uint)LZCOUNT(param_2 | 1) >> 2);
      local_38 = (uint)(byte)(&DAT_005679b8)[param_2 >> 0x14] << 0x18;
      auStack_3a[uVar1] = 0x5c;
      local_34 = CONCAT13(uVar5,CONCAT12(uVar4,(undefined2)local_34));
      *puVar7 = 0x7b;
      puVar7[-1] = 0x75;
      local_30 = CONCAT11(0x7d,uVar2);
      *param_1 = local_38;
      param_1[1] = local_34;
      *(undefined2 *)(param_1 + 2) = local_30;
    }
    uVar4 = (undefined1)iVar3;
    uVar5 = 10;
    goto LAB_012fab5c;
  case 9:
    uVar6 = 0x745c;
    break;
  case 10:
    uVar6 = 0x6e5c;
    break;
  case 0xd:
    uVar6 = 0x725c;
    break;
  case 0x22:
    if ((param_3 & 0xffffff) < 0x10000) goto LAB_012faa68;
    uVar6 = 0x225c;
    break;
  case 0x27:
    if ((param_3 & 0x100) == 0) goto LAB_012faa68;
    uVar6 = 0x275c;
    break;
  default:
    bVar9 = 0x5b < param_2;
    if (param_2 != 0x5c) goto switchD_012fa888_caseD_1;
    uVar6 = 0x5c5c;
  }
  uVar4 = 0;
  *(undefined4 *)((int)param_1 + 6) = 0;
  *(undefined4 *)((int)param_1 + 2) = 0;
  *(undefined2 *)param_1 = uVar6;
  uVar5 = 2;
LAB_012fab5c:
  *(undefined1 *)((int)param_1 + 0xd) = uVar5;
  *(undefined1 *)(param_1 + 3) = uVar4;
  return;
}

