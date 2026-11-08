// FUN_01343338 @ 01343338 size=700 calls_out=9 calls_in=2
// strings: 

void FUN_01343338(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  int local_30;
  int local_2c;
  
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0x10074);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10074);
  }
  iVar3 = FUN_01be3f8c(1,0x14ccc);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(1,0x14ccc);
  }
  iVar4 = FUN_01be3f8c(1,0x10e0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(2,0x10e0);
  }
  FUN_018a7af8(&local_30,0x8102);
  uVar9 = FUN_01608eec(&local_30);
  iVar5 = (int)((ulonglong)uVar9 >> 0x20);
  local_30 = (int)uVar9;
  iVar1 = local_30;
  if (iVar5 != 0x8102) {
    iVar1 = iVar5;
  }
  if (iVar5 != 0x8102 && local_30 != 0) {
    local_2c = iVar1;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_30,&DAT_01d05db0,&DAT_01d05dc0);
  }
  FUN_01609034(&local_30);
  uVar9 = FUN_01608f44(&local_30);
  iVar6 = (int)((ulonglong)uVar9 >> 0x20);
  local_30 = (int)uVar9;
  iVar5 = local_30;
  if (iVar6 != 0x8000) {
    iVar5 = iVar6;
  }
  if (iVar6 != 0x8000 && local_30 != 0) {
    local_2c = iVar5;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_30,&DAT_01d05da0,&DAT_01d05dd0);
  }
  FUN_01609034(&local_30);
  uVar9 = FUN_01608f44(&local_30);
  iVar7 = (int)((ulonglong)uVar9 >> 0x20);
  local_30 = (int)uVar9;
  iVar6 = local_30;
  if (iVar7 != 0x8000) {
    iVar6 = iVar7;
  }
  if (iVar7 != 0x8000 && local_30 != 0) {
    local_2c = iVar6;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_30,&DAT_01d05da0,&DAT_01d05de0);
  }
  FUN_01bed93e(puVar2 + 0x19,0,0x10000);
  FUN_01bed93e(puVar2 + 3,0,0x14);
  FUN_01bed93e(puVar2 + 9,0,0x14);
  if (0xff < param_2) {
    param_2 = 1;
  }
  puVar2[1] = iVar3;
  *(undefined1 *)(puVar2 + 0x18) = 0x20;
  param_2 = param_2 & 0xff;
  uVar8 = param_2;
  if (9 < param_2) {
    uVar8 = 10;
  }
  uVar8 = (uint)*(ushort *)(&UNK_004bae04 + uVar8 * 2);
  puVar2[0xf] = iVar1;
  if (param_2 < 4) {
    uVar8 = uVar8 | 0x4000;
  }
  if (param_2 == 0) {
    uVar8 = uVar8 | 0x80000;
  }
  puVar2[0x10] = iVar5;
  puVar2[0x401c] = 8;
  puVar2[0x14] = 0;
  puVar2[0xe] = iVar4;
  puVar2[0x11] = iVar6;
  puVar2[8] = 1;
  *puVar2 = 0;
  puVar2[0x15] = 0;
  puVar2[0x4019] = 1;
  puVar2[0x401a] = 0;
  puVar2[0x401b] = 0;
  puVar2[2] = uVar8;
  *(char *)(puVar2 + 0xd) = (char)((uVar8 & 0x7fff) >> 0xe);
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = puVar2;
  puVar2[0x12] = ((short)(uVar8 & 0xfff) * 0x5556 + 0xaaacU >> 0x10) + 1;
  puVar2[0x13] = ((short)((uVar8 & 0xfff) >> 2) * 0x5556 + 0xaaacU >> 0x10) + 1;
  return;
}

