// FUN_019815c8 @ 019815c8 size=844 calls_out=6 calls_in=2
// strings: /usr/lib/debug | /usr/lib/debug/.build-id/

void FUN_019815c8(uint *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  if (param_3 < 2) {
LAB_01981640:
    *param_1 = 0x80000000;
    return;
  }
  if (DAT_01d51a64 == '\0') {
    iVar4 = FUN_01982f48("/usr/lib/debug",0xe);
    DAT_01d51a64 = '\x02';
    if (iVar4 != 0) {
      DAT_01d51a64 = '\x01';
    }
  }
  if (DAT_01d51a64 != '\x01') goto LAB_01981640;
  uVar5 = param_3 * 2 + 0x20;
  if (param_3 * 2 == -0x21 || (int)uVar5 < -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00664730();
  }
  if (uVar5 == 0) {
    local_2c = 1;
    local_30 = 0;
  }
  else {
    local_2c = FUN_01298504(uVar5,1);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar5);
    }
    local_28 = 0;
    local_30 = uVar5;
    if (0x18 < uVar5) goto LAB_019816cc;
  }
  local_28 = 0;
  FUN_0197ac30(&local_30,0,0x19,1,1);
LAB_019816cc:
  uVar1 = local_28;
  uVar3 = local_2c;
  uVar5 = local_30;
  FUN_01bed4e2(local_2c + local_28,"/usr/lib/debug/.build-id/",0x19);
  bVar2 = *param_2;
  local_28 = uVar1 + 0x19;
  bVar6 = (bVar2 >> 4) + 0x57;
  if (bVar2 < 0xa0) {
    bVar6 = bVar2 >> 4 | 0x30;
  }
  if (uVar5 == local_28) {
    FUN_0197ac30(&local_30,uVar5,1,1,1);
    uVar3 = local_2c;
  }
  *(byte *)(uVar3 + local_28) = bVar6;
  bVar2 = bVar2 & 0xf;
  bVar6 = bVar2 + 0x57;
  local_28 = uVar1 + 0x1a;
  if (bVar2 < 10) {
    bVar6 = bVar2 | 0x30;
  }
  if (local_30 == local_28) {
    FUN_0197ac30(&local_30,local_28,1,1,1);
  }
  *(byte *)(local_2c + local_28) = bVar6;
  local_28 = uVar1 + 0x1b;
  if (local_30 == local_28) {
    FUN_0197ac30(&local_30,local_30,1,1,1);
  }
  iVar4 = param_3 - 1;
  *(undefined1 *)(local_2c + local_28) = 0x2f;
  local_28 = uVar1 + 0x1c;
  do {
    uVar5 = local_28;
    param_2 = param_2 + 1;
    bVar2 = *param_2;
    bVar6 = (bVar2 >> 4) + 0x57;
    if (bVar2 < 0xa0) {
      bVar6 = bVar2 >> 4 | 0x30;
    }
    if (local_28 == local_30) {
      FUN_0197ac30(&local_30,local_28,1,1,1);
    }
    *(byte *)(local_2c + local_28) = bVar6;
    bVar2 = bVar2 & 0xf;
    bVar6 = bVar2 + 0x57;
    local_28 = uVar5 + 1;
    if (bVar2 < 10) {
      bVar6 = bVar2 | 0x30;
    }
    if (local_28 == local_30) {
      FUN_0197ac30(&local_30,local_28,1,1,1);
    }
    uVar5 = uVar5 + 2;
    iVar4 = iVar4 + -1;
    *(byte *)(local_2c + local_28) = bVar6;
    local_28 = uVar5;
  } while (iVar4 != 0);
  if (local_30 - uVar5 < 6) {
    FUN_0197ac30(&local_30,uVar5,6,1,1);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28 + 6;
  *(undefined4 *)(local_2c + local_28) = 0x6265642e;
  *(undefined2 *)((undefined4 *)(local_2c + local_28) + 1) = 0x6775;
  return;
}

