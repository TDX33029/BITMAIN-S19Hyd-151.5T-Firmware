// FUN_00efef48 @ 00efef48 size=520 calls_out=7 calls_in=2
// strings: 

void FUN_00efef48(char param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 *local_60 [5];
  uint local_4c [3];
  int local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  byte local_25;
  
  uVar7 = *param_3;
  local_4c[0] = CONCAT31(local_4c[0]._1_3_,param_1 << 3) | 2;
  FUN_01284394(uVar7,local_4c,1);
  uVar1 = FUN_00fe4528(param_2);
  iVar4 = 10;
  do {
    if (uVar1 >> 7 == 0) {
      local_4c[0] = CONCAT31(local_4c[0]._1_3_,(char)uVar1);
      FUN_01284394(uVar7,local_4c,1);
      break;
    }
    local_4c[0] = CONCAT31(local_4c[0]._1_3_,(char)uVar1) | 0x80;
    FUN_01284394(uVar7,local_4c,1);
    iVar4 = iVar4 + -1;
    uVar1 = uVar1 >> 7;
  } while (iVar4 != 0);
  local_4c[2] = *param_2;
  local_40 = param_2[1];
  local_2c = param_2[2];
  local_60[0] = &DAT_80000005;
  if (local_4c[2] == 0) {
    local_2c = 0;
  }
  local_4c[0] = (uint)(local_4c[2] != 0);
  local_38 = 0;
  local_4c[1] = 0;
  local_3c = local_4c[0];
  local_34 = local_4c[2];
  local_30 = local_40;
  do {
    uVar9 = FUN_0165d304(local_4c);
    puVar3 = (undefined4 *)((ulonglong)uVar9 >> 0x20);
    iVar4 = (int)uVar9;
    if (iVar4 == 0) {
      FUN_014880e4(local_60);
      return;
    }
    uVar1 = *(uint *)(iVar4 + 8);
    iVar5 = 0;
    iVar8 = 0;
    if (uVar1 != 0) {
      iVar8 = uVar1 + ((LZCOUNT(uVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    puVar2 = (undefined1 *)*puVar3;
    if (puVar2 != &DAT_80000005) {
      iVar5 = FUN_00fe4444(puVar3);
    }
    local_25 = 10;
    FUN_01284394(uVar7,&local_25,1);
    uVar6 = iVar5 + iVar8;
    iVar5 = 10;
    do {
      local_25 = (byte)uVar6;
      if (uVar6 < 0x80) {
        FUN_01284394(uVar7,&local_25,1);
        break;
      }
      local_25 = local_25 | 0x80;
      FUN_01284394(uVar7,&local_25,1);
      uVar6 = uVar6 >> 7;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (uVar1 != 0) {
      FUN_01016f10(1,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8),uVar7);
    }
    if (puVar2 != &DAT_80000005) {
      FUN_00f07680(2,puVar3,param_3);
    }
  } while( true );
}

