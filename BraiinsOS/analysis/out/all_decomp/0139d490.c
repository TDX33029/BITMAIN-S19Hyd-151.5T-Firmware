// FUN_0139d490 @ 0139d490 size=704 calls_out=8 calls_in=8
// strings: assertion failed: start.offset() <= end.offset() | reverse search must match if forward search does

void FUN_0139d490(undefined4 *param_1,int param_2,uint *param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  uint *puVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  uint *local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined1 local_44;
  undefined2 local_43;
  undefined1 local_41;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  code *local_2c;
  uint *local_28;
  undefined1 *local_24;
  
  cVar1 = *(char *)(param_2 + 0x2b4);
  cVar2 = *(char *)(param_2 + 0x2b5);
  FUN_013ae3dc(&local_5c);
  if (local_5c == (uint *)0x2) {
LAB_0139d4c4:
    param_1[1] = local_58;
    *param_1 = 2;
    return;
  }
  pcVar5 = (code *)local_58;
  puVar6 = (uint *)local_54;
  if ((((uint)local_5c & 1) != 0) && (cVar1 != '\0' && cVar2 != '\0')) {
    FUN_013b7b18(&local_30,param_3,local_58,local_54,local_54,param_2);
    local_58 = (uint)local_2c;
    pcVar5 = local_2c;
    puVar6 = local_28;
    local_5c = local_30;
    if (local_30 == (uint *)0x2) goto LAB_0139d4c4;
  }
  if (((uint)local_5c & 1) == 0) {
    *param_1 = 0;
    return;
  }
  local_4c = param_3[4];
  if ((uint *)local_4c == puVar6) {
    *param_1 = 1;
    param_1[1] = puVar6;
    param_1[2] = puVar6;
    param_1[3] = pcVar5;
    return;
  }
  uVar7 = *param_3;
  bVar8 = uVar7 == 0;
  if (bVar8) {
    uVar7 = (uint)*(byte *)(param_2 + 0x2b6);
  }
  if (!bVar8 || (uVar7 & 1) != 0) {
    if (puVar6 < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
    }
    param_1[1] = local_4c;
    *param_1 = 1;
    param_1[2] = puVar6;
    param_1[3] = pcVar5;
    return;
  }
  local_54 = param_3[2];
  local_50 = param_3[3];
  bVar9 = (int)puVar6 + 1U <= local_4c;
  bVar8 = local_4c == (int)puVar6 + 1U;
  if (!bVar9 || bVar8) {
    bVar9 = local_50 <= puVar6;
    bVar8 = puVar6 == (uint *)local_50;
  }
  local_40 = local_4c;
  if (bVar9 && !bVar8) {
    local_28 = &local_34;
    local_30 = &local_40;
    local_24 = &LAB_00fac484;
    local_2c = FUN_005ffff4;
    local_34 = local_50;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0057a181,&local_30,&DAT_01893ee0);
  }
  local_5c = (uint *)0x1;
  local_41 = (undefined1)(param_3[6] >> 0x18);
  local_43 = (undefined2)(param_3[6] >> 8);
  local_44 = 0;
  bVar3 = *(byte *)(param_2 + 0x56c);
  bVar4 = *(byte *)(param_2 + 0x56d);
  local_3c = (uint)puVar6;
  FUN_013b1554(&local_30,param_2 + 0x2b8,&local_5c);
  if (local_30 == (uint *)0x2) {
LAB_0139d5d8:
    *param_1 = 2;
    param_1[1] = local_2c;
    return;
  }
  if (((uint)local_30 & 1) == 0) {
LAB_0139d738:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("reverse search must match if forward search does",0x30,&DAT_01893130);
  }
  if ((bVar3 & bVar4 & 1) == 0) {
    local_3c = (uint)local_2c;
    local_38 = (uint)local_28;
  }
  else {
    FUN_013b8260(&local_40,&local_5c,local_2c,local_28,local_28,param_2 + 0x2b8);
    local_2c = (code *)local_3c;
    if (local_40 == 2) goto LAB_0139d5d8;
    if ((local_40 & 1) == 0) goto LAB_0139d738;
  }
  if ((code *)local_3c == pcVar5) {
    if (local_38 <= puVar6) {
      *param_1 = 1;
      param_1[1] = local_38;
      param_1[2] = puVar6;
      param_1[3] = pcVar5;
      return;
    }
  }
  else {
    FUN_013bca70(&local_40,&local_30);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa464("assertion failed: start.offset() <= end.offset()",0x30,&DAT_01893150);
}

