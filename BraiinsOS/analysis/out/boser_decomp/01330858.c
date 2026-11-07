// FUN_01330858 @ 01330858 size=560 calls_out=4 calls_in=1
// strings: 

void FUN_01330858(undefined4 *param_1,byte param_2,undefined4 param_3,undefined4 param_4,
                 byte *param_5,uint param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 local_25;
  uint local_24;
  
  bVar3 = *param_5;
  if ((param_6 == 1) && (local_25 = 1, bVar3 == 0x2b || bVar3 == 0x2d)) goto LAB_01330890;
  uVar4 = 0;
  if (bVar3 == 0x2b) {
    param_5 = param_5 + 1;
    param_6 = param_6 - 1;
  }
  if (param_6 < 9) {
    if (param_6 != 0) {
      do {
        uVar7 = (uint)*param_5;
        uVar8 = uVar7 - 0x30;
        if (0x39 < uVar7) {
          uVar8 = (uVar7 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar8) goto LAB_01330a74;
        uVar4 = uVar8 | uVar4 << 4;
        param_5 = param_5 + 1;
        param_6 = param_6 - 1;
      } while (param_6 != 0);
      goto LAB_01330948;
    }
LAB_013309b4:
    local_24 = uVar4 & 0xff;
    uVar9 = 1;
  }
  else {
    do {
      uVar8 = (uint)*param_5;
      uVar7 = uVar8 - 0x30;
      if (0xfffffff < uVar4) {
        if (0x39 < uVar8) {
          uVar7 = (uVar8 - 0x41 & 0xffffffde) + 10;
        }
        local_25 = 1;
        if (uVar7 < 0x10) {
          local_25 = 2;
        }
        goto LAB_01330890;
      }
      if (0x39 < uVar8) {
        uVar7 = (uVar8 - 0x41 & 0xffffffdf) + 10;
      }
      if (0xf < uVar7) goto LAB_01330a74;
      uVar4 = uVar7 | uVar4 << 4;
      param_5 = param_5 + 1;
      param_6 = param_6 - 1;
    } while (param_6 != 0);
LAB_01330948:
    if ((uVar4 ^ 0xd800) - 0x110000 < 0xffef0800) {
      param_1[5] = param_3;
      param_1[1] = 8;
      uVar5 = 1;
      goto LAB_01330a4c;
    }
    if (uVar4 < 0x80) goto LAB_013309b4;
    uVar2 = (undefined1)uVar4;
    uVar1 = (undefined1)(uVar4 >> 6);
    if (uVar4 < 0x800) {
      local_24 = (CONCAT11(uVar2,uVar1) & 0x3fff | 0x8000) | 0xc0;
      uVar9 = 2;
    }
    else {
      bVar3 = (byte)(uVar4 >> 0xc);
      if (uVar4 >> 0x10 == 0) {
        bVar3 = bVar3 | 0xe0;
        local_24 = (uint)((CONCAT11(uVar2,uVar1) & 0x3fff | 0x8000) & 0xffff3f | 0x80) << 8;
        uVar9 = 3;
      }
      else {
        local_24._0_3_ = (uint3)(bVar3 & 0x3f | 0x80) << 8;
        uVar9 = 4;
        bVar3 = (byte)(uVar4 >> 0x12) | 0xf0;
        uVar4 = CONCAT13(uVar2,(int3)local_24) & 0x3fffffff;
        local_24._0_2_ = (undefined2)uVar4;
        local_24 = CONCAT13((char)(uVar4 >> 0x18),CONCAT12(uVar1,(undefined2)local_24)) & 0xff3fffff
                   | 0x80800000;
      }
      local_24 = CONCAT31(local_24._1_3_,bVar3);
    }
  }
  iVar6 = FUN_01298504(uVar9,1);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,uVar9);
  }
  FUN_01bed4e2(iVar6,&local_24,uVar9);
  *(byte *)(param_1 + 6) = param_2 & 1;
  param_1[1] = param_4;
  param_1[2] = 0x80000003;
  uVar5 = 0;
  param_1[3] = uVar9;
  param_1[4] = iVar6;
  param_1[5] = uVar9;
LAB_01330a4c:
  *param_1 = uVar5;
  return;
LAB_01330a74:
  local_25 = 1;
LAB_01330890:
                    /* WARNING: Subroutine does not return */
  FUN_013073dc(&DAT_00533467,0x2b,&local_25,&DAT_01ce644c,&DAT_01ce630c);
}

