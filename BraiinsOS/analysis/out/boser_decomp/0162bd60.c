// FUN_0162bd60 @ 0162bd60 size=5608 calls_out=14 calls_in=0
// strings: 

void FUN_0162bd60(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint *puVar11;
  bool bVar12;
  ushort *local_88;
  ushort *local_84;
  ushort *local_80;
  ushort *local_78;
  uint local_74;
  ushort *local_70;
  undefined8 local_6c;
  ushort local_62;
  undefined8 *local_60;
  ushort *local_5c;
  ushort *local_58;
  ushort *local_54;
  undefined8 *local_50;
  ushort *puStack_4c;
  ushort *puStack_48;
  ushort *local_40;
  code *local_3c;
  ushort *local_38;
  ushort *local_30;
  ushort *puStack_2c;
  ushort *puStack_28;
  
  puVar11 = *(uint **)(param_2 + 0xc);
  FUN_0162385c(&local_78);
  if (local_78 == (ushort *)0x80000001) goto LAB_0162d420;
  uVar6 = local_74;
  puVar9 = local_70;
  puVar10 = local_78;
  if (local_78 != (ushort *)0x80000000) goto LAB_0162d408;
  local_6c = FUN_01623bf0(local_74,local_70);
  uVar3 = (undefined4)((ulonglong)local_6c >> 0x20);
  uVar2 = (undefined4)local_6c;
  uVar1 = FUN_01623bc0(local_74,local_70);
  uVar6 = 0;
  local_80 = (ushort *)0x0;
  puVar4 = (undefined8 *)&DAT_80000016;
  pcVar5 = (code *)(ushort *)0x0;
  switch(uVar1) {
  case 1:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_005b55a3,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 != (ushort *)0x80000000) break;
    pcVar5 = pcVar8;
    if ((ushort *)0x4 < pcVar8) {
      pcVar5 = (code *)0x5;
    }
    puVar4 = (undefined8 *)0x80000000;
LAB_0162c328:
    uVar6 = 0;
    local_84 = (ushort *)pcVar8;
    goto switchD_0162bdf8_caseD_18;
  case 2:
    FUN_0160f3f0(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_005a138d,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xffff);
    if (local_40 == (ushort *)0x80000000) {
      local_84 = (ushort *)((uint)local_3c >> 8 & 0xff);
      puVar4 = (undefined8 *)0x80000001;
      goto LAB_0162d3a0;
    }
LAB_0162d304:
    uVar6 = (uint)local_3c >> 0x10;
    uVar7 = (uint)pcVar8 >> 8;
    local_54 = local_38;
    puVar10 = local_40;
    goto LAB_0162d3f4;
  case 3:
    FUN_0160f300(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_005bae29,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = local_3c;
    if (local_40 != (ushort *)0x80000000) goto LAB_0162d304;
    local_84 = (ushort *)((uint)local_3c >> 8);
    uVar6 = (uint)local_3c & 0xffff0000;
    puVar4 = (undefined8 *)0x80000002;
    pcVar5 = local_3c;
    goto switchD_0162bdf8_caseD_18;
  case 4:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_005b9bc1,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 == (ushort *)0x80000000) {
      bVar12 = pcVar8 == (code *)0x0;
      puVar4 = (undefined8 *)0x80000003;
LAB_0162d394:
      if (!bVar12) {
        pcVar8 = (code *)0x1;
      }
      local_84 = (ushort *)pcVar8;
      goto LAB_0162d3a0;
    }
    break;
  case 5:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_00574010,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 == (ushort *)0x80000000) {
      bVar12 = pcVar8 == (code *)0x0;
      puVar4 = (undefined8 *)&DAT_80000004;
      goto LAB_0162d394;
    }
    break;
  case 6:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_0059961b,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 == (ushort *)0x80000000) {
      bVar12 = pcVar8 == (code *)0x0;
      puVar4 = (undefined8 *)&DAT_80000005;
      goto LAB_0162d394;
    }
    break;
  case 7:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_005a5769,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 == (ushort *)0x80000000) {
      bVar12 = pcVar8 == (code *)0x0;
      puVar4 = (undefined8 *)0x80000006;
      goto LAB_0162d394;
    }
    break;
  case 8:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_00590c77,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 == (ushort *)0x80000000) {
      bVar12 = pcVar8 == (code *)0x0;
      puVar4 = (undefined8 *)0x80000007;
      goto LAB_0162d394;
    }
    break;
  case 9:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_0059609d,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 == (ushort *)0x80000000) {
      bVar12 = pcVar8 == (code *)0x0;
      puVar4 = (undefined8 *)&DAT_80000008;
      goto LAB_0162d394;
    }
    break;
  case 10:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_00592d24,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 == (ushort *)0x80000000) {
      bVar12 = pcVar8 == (code *)0x0;
      puVar4 = (undefined8 *)&DAT_80000009;
      goto LAB_0162d394;
    }
    break;
  default:
    local_62 = uVar1;
    FUN_01623ae4(&local_50,local_74,local_70);
    local_3c = FUN_012fcf18;
    local_40 = &local_62;
    FUN_00664898(&local_30,&DAT_0059e153,&local_40);
    local_40 = local_30;
    local_3c = (code *)puStack_2c;
    local_38 = puStack_28;
    FUN_0160f810(&local_60,&local_50,&local_40);
    if (local_60 == (undefined8 *)0x80000000) goto LAB_0162d164;
    local_80 = local_54;
    local_88 = local_58;
    puVar4 = local_60;
LAB_0162c4ac:
    uVar6 = (uint)local_5c & 0xffff0000;
    pcVar5 = (code *)local_5c;
    local_84 = (ushort *)((uint)local_5c >> 8);
    goto switchD_0162bdf8_caseD_18;
  case 0xc:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_00573bab,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 == (ushort *)0x80000000) {
      bVar12 = pcVar8 == (code *)0x0;
      puVar4 = (undefined8 *)0x8000000a;
      goto LAB_0162d394;
    }
    break;
  case 0xd:
    FUN_016276e4(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_005af0ca,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    if (local_40 == (ushort *)0x80000000) {
      local_88 = local_38;
      puVar4 = (undefined8 *)0x8000000b;
      local_5c = (ushort *)local_3c;
      goto LAB_0162c4ac;
    }
LAB_0162d3e4:
    pcVar8 = local_3c;
    local_54 = local_38;
    puVar10 = local_40;
    goto LAB_0162d3ec;
  case 0xe:
    FUN_016276e4(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_00591ee0,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    if (local_40 != (ushort *)0x80000000) goto LAB_0162d3e4;
    local_88 = local_38;
    local_84 = (ushort *)((uint)local_3c >> 8);
    uVar6 = (uint)local_3c & 0xffff0000;
    puVar4 = (undefined8 *)&DAT_8000000c;
    pcVar5 = local_3c;
    goto switchD_0162bdf8_caseD_18;
  case 0xf:
    FUN_0160f3f0(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_0057cb98,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xffff);
    if (local_40 != (ushort *)0x80000000) goto LAB_0162d304;
    local_84 = (ushort *)((uint)local_3c >> 8 & 0xff);
    puVar4 = (undefined8 *)0x8000000d;
    goto LAB_0162d3a0;
  case 0x10:
    FUN_0160f3f0(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_0057f041,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xffff);
    if (local_40 != (ushort *)0x80000000) goto LAB_0162d304;
    local_84 = (ushort *)((uint)local_3c >> 8 & 0xff);
    puVar4 = (undefined8 *)0x8000000e;
    goto LAB_0162d3a0;
  case 0x11:
    FUN_0160f3f0(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_005bdd0b,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xffff);
    if (local_40 != (ushort *)0x80000000) goto LAB_0162d304;
    local_84 = (ushort *)((uint)local_3c >> 8 & 0xff);
    puVar4 = (undefined8 *)0x8000000f;
    goto LAB_0162d3a0;
  case 0x12:
    FUN_0160f3f0(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_005bdbb7,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xffff);
    if (local_40 != (ushort *)0x80000000) goto LAB_0162d304;
    local_84 = (ushort *)((uint)local_3c >> 8 & 0xff);
    puVar4 = (undefined8 *)&DAT_80000010;
    goto LAB_0162d3a0;
  case 0x13:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_0057ec70,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 == (ushort *)0x80000000) {
      bVar12 = pcVar8 == (code *)0x0;
      puVar4 = (undefined8 *)0x80000011;
      goto LAB_0162d394;
    }
    break;
  case 0x14:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_005830a7,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 == (ushort *)0x80000000) {
      bVar12 = pcVar8 == (code *)0x0;
      puVar4 = (undefined8 *)0x80000012;
      goto LAB_0162d394;
    }
    break;
  case 0x15:
    FUN_0160f460(&local_50,uVar2,uVar3);
    local_3c = (code *)&LAB_0141634c;
    local_40 = (ushort *)&local_6c;
    FUN_00664898(&local_30,&DAT_00585212,&local_40);
    local_40 = local_30;
    local_3c = (code *)puStack_2c;
    local_38 = puStack_28;
    FUN_0160f964(&local_60,&local_50,&local_40);
    if (local_60 == (undefined8 *)0x1) goto LAB_0162d164;
    local_88 = local_58;
    puVar4 = (undefined8 *)0x80000013;
LAB_0162d448:
    uVar6 = 0;
    pcVar5 = (code *)(ushort *)0x0;
    local_80 = local_54;
    goto switchD_0162bdf8_caseD_18;
  case 0x16:
    FUN_0160f460(&local_50,uVar2,uVar3);
    local_3c = (code *)&LAB_0141634c;
    local_40 = (ushort *)&local_6c;
    FUN_00664898(&local_30,&DAT_005a4997,&local_40);
    local_40 = local_30;
    local_3c = (code *)puStack_2c;
    local_38 = puStack_28;
    FUN_0160f964(&local_60,&local_50,&local_40);
    if (local_60 != (undefined8 *)0x1) {
      local_88 = local_58;
      puVar4 = (undefined8 *)&DAT_80000014;
      goto LAB_0162d448;
    }
    goto LAB_0162d164;
  case 0x17:
    FUN_0160f460(&local_50,uVar2,uVar3);
    local_3c = (code *)&LAB_0141634c;
    local_40 = (ushort *)&local_6c;
    FUN_00664898(&local_30,&DAT_0057ecde,&local_40);
    local_40 = local_30;
    local_3c = (code *)puStack_2c;
    local_38 = puStack_28;
    FUN_0160f964(&local_60,&local_50,&local_40);
    if (local_60 != (undefined8 *)0x1) {
      local_88 = local_58;
      puVar4 = (undefined8 *)0x80000015;
      goto LAB_0162d448;
    }
LAB_0162d164:
    pcVar8 = (code *)local_58;
    puVar10 = local_5c;
LAB_0162d3ec:
    uVar6 = (uint)pcVar8 >> 0x10;
    uVar7 = (uint)pcVar8 >> 8;
    goto LAB_0162d3f4;
  case 0x18:
    goto switchD_0162bdf8_caseD_18;
  case 0x19:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_00582934,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 == (ushort *)0x80000000) {
      pcVar5 = pcVar8;
      if ((ushort *)0x3 < pcVar8) {
        pcVar5 = (code *)0x4;
      }
      puVar4 = (undefined8 *)0x80000017;
      goto LAB_0162c328;
    }
    break;
  case 0x1b:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_00575ace,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 == (ushort *)0x80000000) {
      bVar12 = pcVar8 == (code *)0x0;
      puVar4 = (undefined8 *)&DAT_80000018;
      goto LAB_0162d394;
    }
    break;
  case 0x1c:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_00589f40,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 == (ushort *)0x80000000) {
      bVar12 = pcVar8 == (code *)0x0;
      puVar4 = (undefined8 *)0x80000019;
      goto LAB_0162d394;
    }
    break;
  case 0x1d:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_00590e16,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 == (ushort *)0x80000000) {
      bVar12 = pcVar8 == (code *)0x0;
      puVar4 = (undefined8 *)0x8000001a;
      goto LAB_0162d394;
    }
    break;
  case 0x1e:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_005787fc,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 == (ushort *)0x80000000) {
      bVar12 = pcVar8 == (code *)0x0;
      puVar4 = (undefined8 *)0x8000001b;
      goto LAB_0162d394;
    }
    break;
  case 0x1f:
    FUN_0160f3f0(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_005bb1de,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xffff);
    if (local_40 != (ushort *)0x80000000) goto LAB_0162d304;
    local_84 = (ushort *)((uint)local_3c >> 8 & 0xff);
    puVar4 = (undefined8 *)&DAT_8000001c;
LAB_0162d3a0:
    uVar6 = 0;
    pcVar5 = pcVar8;
    goto switchD_0162bdf8_caseD_18;
  case 0x20:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_00591f0c,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 == (ushort *)0x80000000) {
      bVar12 = pcVar8 == (code *)0x0;
      puVar4 = (undefined8 *)0x8000001d;
      goto LAB_0162d394;
    }
    break;
  case 0x21:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_0058ebdb,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 == (ushort *)0x80000000) {
      bVar12 = pcVar8 == (code *)0x0;
      puVar4 = (undefined8 *)0x8000001e;
      goto LAB_0162d394;
    }
    break;
  case 0x22:
    FUN_0160f300(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_0057239b,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = local_3c;
    if (local_40 != (ushort *)0x80000000) goto LAB_0162d304;
    uVar6 = (uint)local_3c & 0xffff0000;
    puVar4 = (undefined8 *)0x8000001f;
    pcVar5 = local_3c;
    local_84 = (ushort *)((uint)local_3c >> 8);
    goto switchD_0162bdf8_caseD_18;
  case 0x23:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_0058dd95,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 == (ushort *)0x80000000) {
      bVar12 = pcVar8 == (code *)0x0;
      puVar4 = (undefined8 *)&DAT_80000020;
      goto LAB_0162d394;
    }
    break;
  case 0x24:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_0059e106,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 == (ushort *)0x80000000) {
      bVar12 = pcVar8 == (code *)0x0;
      puVar4 = (undefined8 *)0x80000021;
      goto LAB_0162d394;
    }
    break;
  case 0x25:
    FUN_0160f300(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_0057eb00,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = local_3c;
    if (local_40 != (ushort *)0x80000000) goto LAB_0162d304;
    uVar6 = (uint)local_3c & 0xffff0000;
    puVar4 = (undefined8 *)0x80000022;
    pcVar5 = local_3c;
    local_84 = (ushort *)((uint)local_3c >> 8);
    goto switchD_0162bdf8_caseD_18;
  case 0x26:
    FUN_0160f300(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_005965eb,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = local_3c;
    if (local_40 != (ushort *)0x80000000) goto LAB_0162d304;
    uVar6 = (uint)local_3c & 0xffff0000;
    puVar4 = (undefined8 *)0x80000023;
    pcVar5 = local_3c;
    local_84 = (ushort *)((uint)local_3c >> 8);
    goto switchD_0162bdf8_caseD_18;
  case 0x27:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_0058a83a,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 == (ushort *)0x80000000) {
      bVar12 = pcVar8 == (code *)0x0;
      puVar4 = (undefined8 *)&DAT_80000024;
      goto LAB_0162d394;
    }
    break;
  case 0x28:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_005ae55c,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 == (ushort *)0x80000000) {
      bVar12 = pcVar8 == (code *)0x0;
      puVar4 = (undefined8 *)0x80000025;
      goto LAB_0162d394;
    }
    break;
  case 0x29:
    FUN_0160f300(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_0059d87f,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = local_3c;
    if (local_40 != (ushort *)0x80000000) goto LAB_0162d304;
    uVar6 = (uint)local_3c & 0xffff0000;
    puVar4 = (undefined8 *)&DAT_80000026;
    pcVar5 = local_3c;
    local_84 = (ushort *)((uint)local_3c >> 8);
    goto switchD_0162bdf8_caseD_18;
  case 0x2a:
    FUN_0160f300(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_005b8757,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = local_3c;
    if (local_40 != (ushort *)0x80000000) goto LAB_0162d304;
    uVar6 = (uint)local_3c & 0xffff0000;
    puVar4 = (undefined8 *)0x80000027;
    pcVar5 = local_3c;
    local_84 = (ushort *)((uint)local_3c >> 8);
    goto switchD_0162bdf8_caseD_18;
  case 0x2b:
    FUN_0160f290(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_00594473,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = (code *)((uint)local_3c & 0xff);
    if (local_40 == (ushort *)0x80000000) {
      bVar12 = pcVar8 == (code *)0x0;
      puVar4 = (undefined8 *)&DAT_80000028;
      goto LAB_0162d394;
    }
    break;
  case 0x2c:
    FUN_0160f300(&local_30,uVar2,uVar3);
    local_5c = (ushort *)&LAB_0141634c;
    local_60 = &local_6c;
    FUN_00664898(&local_50,&DAT_00587966,&local_60);
    local_60 = local_50;
    local_5c = puStack_4c;
    local_58 = puStack_48;
    FUN_0160f56c(&local_40,&local_30,&local_60);
    pcVar8 = local_3c;
    if (local_40 != (ushort *)0x80000000) goto LAB_0162d304;
    uVar6 = (uint)local_3c & 0xffff0000;
    puVar4 = (undefined8 *)0x80000029;
    pcVar5 = local_3c;
    local_84 = (ushort *)((uint)local_3c >> 8);
switchD_0162bdf8_caseD_18:
    param_1[1] = (uint)pcVar5 & 0xff | ((uint)local_84 & 0xff) << 8 | uVar6;
    param_1[2] = local_88;
    param_1[3] = local_80;
    goto LAB_0162d424;
  }
  uVar6 = (uint)local_3c >> 0x10;
  uVar7 = (uint)local_3c >> 8 & 0xff;
  local_54 = local_38;
  puVar10 = local_40;
LAB_0162d3f4:
  uVar6 = (uint)pcVar8 & 0xff | (uVar7 & 0xff) << 8 | uVar6 << 0x10;
  puVar9 = local_54;
LAB_0162d408:
  if (*puVar11 != 0x80000000) {
    FUN_0134bd64(*puVar11,puVar11[1]);
  }
  *puVar11 = (uint)puVar10;
  puVar11[1] = uVar6;
  puVar11[2] = (uint)puVar9;
LAB_0162d420:
  puVar4 = (undefined8 *)0x8000002a;
LAB_0162d424:
  *param_1 = puVar4;
  return;
}

