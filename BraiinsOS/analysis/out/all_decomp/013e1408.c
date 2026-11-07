// FUN_013e1408 @ 013e1408 size=324 calls_out=2 calls_in=3
// strings: a Display implementation returned an error unexpectedly

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013e1408(undefined4 *param_1,uint *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint3 uVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 uStack_9;
  
  bVar8 = param_3 == 1;
  if (bVar8) {
    param_3 = *param_2;
    param_4 = param_2[1];
  }
  if (!bVar8 || param_3 != param_4) {
    *param_1 = 0x80000000;
    return;
  }
  bVar1 = (byte)param_3;
  if (param_3 < 0x80) {
    local_2c = param_3 & 0xff;
    uVar7 = 1;
  }
  else {
    bVar3 = (byte)(param_3 >> 6);
    if (param_3 < 0x800) {
      bVar5 = bVar3 | 0xc0;
      uVar4 = (uint3)(bVar1 & 0x3f | 0x80);
      uVar7 = 2;
    }
    else {
      bVar2 = (byte)(param_3 >> 0xc);
      if (param_3 >> 0x10 == 0) {
        bVar5 = bVar2 | 0xe0;
        uVar7 = 3;
        uVar4 = (CONCAT11(bVar1,bVar3) & 0x3fff | 0x8000) & 0xffff3f | 0x80;
      }
      else {
        bVar5 = (byte)(param_3 >> 0x12) | 0xf0;
        uVar7 = 4;
        uVar4 = CONCAT21(CONCAT11(bVar1,bVar3),bVar2) & 0x3f3f3f | 0x808080;
      }
    }
    local_2c = CONCAT31(uVar4,bVar5);
  }
  local_20 = 0;
  local_18 = &DAT_01894fd8;
  local_1c = &local_28;
  local_28 = 0;
  local_10 = 0;
  local_24 = 1;
  local_14 = &DAT_60000020;
  iVar6 = FUN_00faace8(&local_1c,&local_2c,uVar7);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_9,
                 &DAT_01894ff0);
  }
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = local_20;
  return;
}

