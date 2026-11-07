// FUN_0166fbe0 @ 0166fbe0 size=524 calls_out=4 calls_in=2
// strings: 2DIGIT should match u8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0166fbe0(uint *param_1,int param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  uint local_50;
  byte *local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  
  uVar5 = *(undefined4 *)(param_2 + 8);
  uVar6 = *(undefined4 *)(param_2 + 0xc);
  FUN_01669030(&local_50,param_2,2,2);
  if (local_50 != 3) {
    *param_1 = local_50;
    param_1[1] = (uint)local_4c;
    param_1[2] = local_48;
    param_1[3] = local_44;
    param_1[4] = local_40;
    param_1[5] = local_3c;
    return;
  }
  if (local_48 == 1) {
    bVar2 = *local_4c;
    bVar7 = 1;
    if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) goto LAB_0166fdb4;
  }
  else {
    if (local_48 == 0) {
      bVar7 = 0;
      goto LAB_0166fdb4;
    }
    bVar2 = *local_4c;
  }
  if (bVar2 == 0x2b) {
    local_4c = local_4c + 1;
    local_48 = local_48 - 1;
  }
  if (2 < local_48) {
    uVar3 = 0;
    do {
      if (local_48 == 0) goto LAB_0166fcb8;
      uVar3 = (uVar3 & 0xff) * 4 + (uVar3 & 0xff);
      if (uVar3 >> 7 != 0) {
        bVar7 = 1;
        if (*local_4c - 0x30 < 10) {
          bVar7 = 2;
        }
        goto LAB_0166fdb4;
      }
      uVar4 = *local_4c - 0x30;
      if (9 < uVar4) {
        bVar7 = 1;
        goto LAB_0166fdb4;
      }
      local_48 = local_48 - 1;
      uVar3 = (uVar3 * 2 & 0xff) + (uVar4 & 0xff);
      local_4c = local_4c + 1;
    } while ((uVar3 & 0xffffff00) == 0);
    bVar7 = 2;
LAB_0166fdb4:
    local_50 = (uint)bVar7;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("2DIGIT should match u8",0x16,&local_50,&DAT_018ad7a8,&DAT_018ad838);
  }
  if (local_48 == 0) {
    uVar3 = 0;
  }
  else {
    bVar7 = 1;
    uVar3 = *local_4c - 0x30;
    if (9 < uVar3) goto LAB_0166fdb4;
    if (local_48 != 1) {
      if (9 < local_4c[1] - 0x30) goto LAB_0166fdb4;
      uVar3 = (local_4c[1] - 0x30) + uVar3 * 10;
LAB_0166fcb8:
      if (0x17 < (uVar3 & 0xff)) {
        *(undefined4 *)(param_2 + 8) = uVar5;
        *(undefined4 *)(param_2 + 0xc) = uVar6;
        local_2c = 0;
        local_30 = 0;
        local_38 = 0;
        local_50 = 0x80000001;
        local_34 = 4;
        puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x18);
        if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x18);
        }
        *puVar1 = 0x80000001;
        param_1[1] = local_38;
        param_1[2] = local_34;
        param_1[3] = local_30;
        param_1[4] = (uint)puVar1;
        param_1[5] = (uint)&DAT_018ad77c;
        *param_1 = 1;
        return;
      }
    }
  }
  *(char *)(param_1 + 1) = (char)uVar3;
  *param_1 = 3;
  return;
}

