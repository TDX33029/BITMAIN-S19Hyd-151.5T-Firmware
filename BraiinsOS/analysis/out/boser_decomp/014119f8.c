// FUN_014119f8 @ 014119f8 size=692 calls_out=6 calls_in=3
// strings: 

void FUN_014119f8(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  uint *local_70;
  undefined1 *local_6c;
  uint *local_68;
  undefined1 *local_64;
  undefined2 local_60 [12];
  int local_48;
  int local_44;
  int local_40;
  undefined4 *local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar7 = CONCAT44(param_4,param_3);
  if (param_4 < 0xde0b6b4 && (uint)(0xa763ffff < param_3) <= param_4 + 0xf21f494d) {
    local_74 = 1;
    iVar4 = 0x14;
    local_80 = 1;
    local_78 = 0;
    local_7c = 0;
    if (param_4 == 0 && (9999 < param_3) <= param_4) goto LAB_01411b3c;
  }
  else {
    local_80 = thunk_FUN_01be5118(0x14,param_3 + 0x589c0000);
    if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x14);
    }
    local_78 = 0x14;
  }
  local_74 = 1;
  local_7c = 0;
  iVar2 = 0;
  do {
    iVar4 = iVar2;
    iVar6 = (int)(uVar7 >> 0x20);
    uVar5 = (uint)uVar7;
    uVar7 = FUN_01bf0ff0(uVar5,iVar6,10000,0);
    uVar3 = uVar5 + (int)uVar7 * -10000;
    uVar1 = (uint)((short)((uVar3 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)((int)local_60 + iVar4) = *(undefined2 *)(&DAT_00534998 + uVar1 * 2);
    *(undefined2 *)((int)local_60 + iVar4 + 2) =
         *(undefined2 *)(&DAT_00534998 + (uVar3 + uVar1 * -100 & 0xffff) * 2);
    iVar2 = iVar4 + -4;
  } while ((uint)(uVar5 < 100000000) <= (uint)-iVar6);
  iVar4 = iVar4 + 0x10;
LAB_01411b3c:
  uVar1 = (uint)uVar7;
  if ((uint)(uVar1 < 100) <= (uint)-(int)(uVar7 >> 0x20)) {
    uVar3 = (uint)((short)((uVar1 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)((int)local_60 + iVar4 + -0x12) =
         *(undefined2 *)(&DAT_00534998 + (uVar1 + uVar3 * -100 & 0xffff) * 2);
    uVar7 = (ulonglong)uVar3;
    iVar4 = iVar4 + -2;
  }
  uVar1 = (uint)(uVar7 >> 0x20);
  if (uVar1 == 0 && (9 < (uint)uVar7) <= uVar1) {
    iVar2 = iVar4 + -1;
    *(byte *)((int)local_60 + iVar4 + -0x11) = (byte)uVar7 | 0x30;
  }
  else {
    iVar2 = iVar4 + -2;
    *(undefined2 *)((int)local_60 + iVar4 + -0x12) =
         *(undefined2 *)(&DAT_00534998 + (uint)uVar7 * 2);
  }
  FUN_01284394(&local_80,(int)local_60 + iVar2 + -0x10,0x14 - iVar2);
  uVar1 = local_74;
  if ((local_74 & 1) == 0) {
    local_3c = &DAT_01d2e520;
  }
  else {
    local_40 = local_7c + (local_74 >> 5);
    local_44 = local_80 - (local_74 >> 5);
    local_48 = local_78 + (local_74 >> 5);
    FUN_01283524(&local_3c,&local_48);
    local_2c = uVar1 >> 5;
    if (local_34 < uVar1 >> 5) {
      local_68 = &local_28;
      local_28 = local_34;
      local_64 = &LAB_01a6a304;
      local_6c = &LAB_01a6a304;
      local_70 = &local_2c;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ac267,&local_70,&DAT_01d2e534);
    }
    local_7c = local_34 - local_2c;
    local_80 = local_38 + local_2c;
    local_74 = local_30;
  }
  *param_1 = local_3c;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[1] = local_80;
  param_1[2] = local_7c;
  param_1[3] = local_74;
  return;
}

