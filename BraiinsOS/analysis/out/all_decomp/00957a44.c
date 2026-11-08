// FUN_00957a44 @ 00957a44 size=1196 calls_out=11 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x00957bb4) */

void FUN_00957a44(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  uint *puVar7;
  int local_68;
  undefined4 local_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38 [2];
  uint local_30;
  uint local_2c;
  undefined1 uStack_25;
  
  uVar1 = 0x15;
  if ((int)*param_2 < 0) {
    uVar1 = *param_2 ^ 0x80000000;
  }
  if (uVar1 == 0x14) {
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    if (uVar2 == 0) {
      iVar6 = 0;
      FUN_00f3cf48(param_1,0,&DAT_01867380,&DAT_018ab990);
      uVar4 = uVar1;
      if (*param_1 != 2) {
        return;
      }
    }
    else {
      FUN_0093f87c(&local_68,uVar1);
      if (local_68 != 2) {
        FUN_016dd1aa((int)param_1 + 5,(int)&local_64 + 1,0x2b);
        *(char *)(param_1 + 1) = (char)local_64;
        *param_1 = local_68;
        return;
      }
      *(char *)(param_1 + 1) = (char)local_64;
      iVar6 = 1;
      uVar4 = uVar1 + 0x10;
    }
    uVar1 = uVar1 + uVar2 * 0x10;
    if (uVar1 == uVar4) goto LAB_00957ca4;
    puVar5 = &DAT_01887234;
    iVar3 = iVar6 + (uVar1 - uVar4 >> 4);
    local_38[0] = iVar6;
    goto LAB_00957f10;
  }
  if (uVar1 != 0x15) {
    FUN_008f7820(param_1,param_2,&uStack_25,&DAT_018671f8);
    return;
  }
  puVar7 = (uint *)param_2[1];
  uVar1 = param_2[2];
  if (uVar1 == 0) {
    *(undefined1 *)(param_1 + 1) = 2;
    goto LAB_00957ca4;
  }
  uVar2 = 0x15;
  if ((int)*puVar7 < 0) {
    uVar2 = *puVar7 ^ 0x80000000;
  }
  switch(uVar2) {
  case 1:
    if ((byte)puVar7[1] != 0) {
      local_2c = 0;
      local_30 = (uint)(byte)puVar7[1];
LAB_00957c18:
      local_38[0] = CONCAT31(local_38[0]._1_3_,1);
      FUN_00924358(&local_68,local_38,&DAT_018682d8,&DAT_018ab990);
      goto LAB_00957bdc;
    }
    break;
  default:
    FUN_008f7820(&local_68,puVar7,&uStack_25,&DAT_01867318);
    goto LAB_00957bdc;
  case 4:
    if (puVar7[2] != 0 || puVar7[3] != 0) {
      local_30 = puVar7[2];
      local_2c = puVar7[3];
      goto LAB_00957c18;
    }
    break;
  case 0xc:
    uVar2 = puVar7[2];
    uVar4 = puVar7[3];
    goto LAB_00957c2c;
  case 0xd:
    uVar2 = puVar7[1];
    uVar4 = puVar7[2];
LAB_00957c2c:
    if (uVar4 == 0x13) {
      iVar6 = thunk_FUN_016dd50a(uVar2,&DAT_00348f9a,0x13);
      if (iVar6 == 0) break;
      FUN_00924444(&local_68,uVar2,0x13,&DAT_018682d0,1);
    }
    else {
      FUN_00924444(&local_68,uVar2,uVar4,&DAT_018682d0,1);
    }
LAB_00957bdc:
    if (local_68 != 2) goto LAB_00957e24;
    goto LAB_00957c58;
  case 0xe:
    uVar2 = puVar7[2];
    uVar4 = puVar7[3];
    goto LAB_00957bcc;
  case 0xf:
    uVar2 = puVar7[1];
    uVar4 = puVar7[2];
LAB_00957bcc:
    FUN_0095a804(&local_68,uVar2,uVar4);
    goto LAB_00957bdc;
  }
  local_68 = 2;
LAB_00957c58:
  FUN_0093f87c(&local_68,puVar7 + 4);
  iVar6 = local_68;
  if (local_68 != 2) {
    FUN_016dd1aa((int)param_1 + 5,(int)&local_64 + 1,0x2b);
    *(char *)(param_1 + 1) = (char)local_64;
    *param_1 = iVar6;
    return;
  }
  if (uVar1 == 1) {
    if ((char)local_64 == '\x03') {
      local_64._0_1_ = '\x02';
    }
    *(char *)(param_1 + 1) = (char)local_64;
    goto LAB_00957ca4;
  }
  uVar2 = 0x15;
  if ((int)puVar7[8] < 0) {
    uVar2 = puVar7[8] ^ 0x80000000;
  }
  switch(uVar2) {
  case 1:
    FUN_009552ec(&local_68,(char)puVar7[9]);
    break;
  default:
    FUN_008f7820(&local_68,puVar7 + 8,&uStack_25,&DAT_01867318);
    break;
  case 4:
    if (puVar7[10] != 0 || puVar7[0xb] != 0) {
      local_38[0] = CONCAT31(local_38[0]._1_3_,1);
      local_30 = puVar7[10];
      local_2c = puVar7[0xb];
      FUN_00924358(&local_68,local_38,&DAT_018682d8,&DAT_018ab990);
      break;
    }
    goto LAB_00957ec8;
  case 0xc:
    uVar2 = puVar7[10];
    uVar4 = puVar7[0xb];
    goto LAB_00957e08;
  case 0xd:
    uVar2 = puVar7[9];
    uVar4 = puVar7[10];
LAB_00957e08:
    FUN_0095a970(&local_68,uVar2,uVar4);
    break;
  case 0xe:
    uVar2 = puVar7[10];
    uVar4 = puVar7[0xb];
    goto LAB_00957d9c;
  case 0xf:
    uVar2 = puVar7[9];
    uVar4 = puVar7[10];
LAB_00957d9c:
    FUN_0095a804(&local_68,uVar2,uVar4);
  }
  if (local_68 != 2) {
LAB_00957e24:
    iVar6 = local_68;
    FUN_016dd1aa((int)param_1 + 5,(int)&local_64 + 1,0x2b);
    *(char *)(param_1 + 1) = (char)local_64;
    *param_1 = iVar6;
    return;
  }
LAB_00957ec8:
  FUN_009244cc(param_1,&DAT_00348f9a,0x13);
  if (*param_1 == 2) {
    if (puVar7 + uVar1 * 8 != puVar7 + 0x10) {
      puVar5 = &DAT_01887224;
      iVar3 = ((uint)((int)(puVar7 + uVar1 * 8) - (int)(puVar7 + 0x10)) >> 5) + 2;
      local_38[0] = 2;
LAB_00957f10:
      FUN_00f3cf48(&local_68,iVar3,local_38,puVar5);
      if (local_68 != 2) {
        *param_1 = local_68;
        param_1[1] = local_64;
        param_1[2] = iStack_60;
        param_1[3] = iStack_5c;
        param_1[4] = iStack_58;
        param_1[5] = iStack_54;
        param_1[6] = local_50;
        param_1[7] = iStack_4c;
        param_1[8] = iStack_48;
        param_1[9] = iStack_44;
        param_1[10] = iStack_40;
        param_1[0xb] = iStack_3c;
        return;
      }
    }
LAB_00957ca4:
    *param_1 = 2;
  }
  return;
}

