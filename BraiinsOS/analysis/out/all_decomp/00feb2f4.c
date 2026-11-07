// FUN_00feb2f4 @ 00feb2f4 size=568 calls_out=4 calls_in=1
// strings: 

void FUN_00feb2f4(undefined4 *param_1,byte param_2,undefined4 param_3,undefined4 param_4,
                 byte *param_5,uint param_6)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint local_28;
  undefined1 local_21;
  
  bVar1 = *param_5;
  if ((param_6 == 1) && (local_21 = 1, bVar1 == 0x2b || bVar1 == 0x2d)) goto LAB_00feb32c;
  uVar4 = 0;
  if (bVar1 == 0x2b) {
    param_5 = param_5 + 1;
    param_6 = param_6 - 1;
  }
  if (param_6 < 9) {
    if (param_6 != 0) {
      do {
        uVar6 = (uint)*param_5;
        uVar7 = uVar6 - 0x30;
        if (0x39 < uVar6) {
          uVar7 = (uVar6 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar7) goto LAB_00feb518;
        uVar4 = uVar7 | uVar4 << 4;
        param_5 = param_5 + 1;
        param_6 = param_6 - 1;
      } while (param_6 != 0);
      goto LAB_00feb3e4;
    }
  }
  else {
    do {
      uVar7 = (uint)*param_5;
      uVar6 = uVar7 - 0x30;
      if (0xfffffff < uVar4) {
        if (0x39 < uVar7) {
          uVar6 = (uVar7 - 0x41 & 0xffffffde) + 10;
        }
        local_21 = 1;
        if (uVar6 < 0x10) {
          local_21 = 2;
        }
        goto LAB_00feb32c;
      }
      if (0x39 < uVar7) {
        uVar6 = (uVar7 - 0x41 & 0xffffffdf) + 10;
      }
      if (0xf < uVar6) goto LAB_00feb518;
      uVar4 = uVar6 | uVar4 << 4;
      param_5 = param_5 + 1;
      param_6 = param_6 - 1;
    } while (param_6 != 0);
LAB_00feb3e4:
    if ((uVar4 ^ 0xd800) - 0x110000 < 0xffef0800) {
      param_1[5] = param_3;
      param_1[1] = 8;
      *param_1 = 1;
      return;
    }
    if (0x7f < uVar4) {
      uVar3 = (undefined1)uVar4;
      uVar2 = (undefined1)(uVar4 >> 6);
      if (uVar4 < 0x800) {
        local_28 = (CONCAT11(uVar3,uVar2) & 0x3fff | 0x8000) | 0xc0;
        uVar8 = 2;
      }
      else {
        bVar1 = (byte)(uVar4 >> 0xc);
        if (uVar4 >> 0x10 == 0) {
          uVar8 = 3;
          local_28 = (CONCAT21(CONCAT11(uVar3,uVar2),bVar1) & 0x3fffff | 0x800000) & 0xffff3fff |
                     0x80e0;
        }
        else {
          local_28._0_3_ = (uint3)(bVar1 & 0x3f | 0x80) << 8;
          uVar8 = 4;
          uVar6 = CONCAT13(uVar3,(int3)local_28) & 0x3fffffff;
          local_28._0_2_ = (undefined2)uVar6;
          local_28 = CONCAT31((int3)(CONCAT13((char)(uVar6 >> 0x18),
                                              CONCAT12(uVar2,(undefined2)local_28)) >> 8),
                              (char)(uVar4 >> 0x12)) & 0xff3fffff | 0x808000f0;
        }
      }
      goto LAB_00feb460;
    }
  }
  local_28 = uVar4 & 0xff;
  uVar8 = 1;
LAB_00feb460:
  iVar5 = thunk_FUN_016d4a50(uVar8);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,uVar8);
  }
  FUN_016dd1aa(iVar5,&local_28,uVar8);
  *(byte *)(param_1 + 6) = param_2 & 1;
  param_1[1] = param_4;
  param_1[2] = 0x80000003;
  param_1[3] = uVar8;
  param_1[4] = iVar5;
  param_1[5] = uVar8;
  *param_1 = 0;
  return;
LAB_00feb518:
  local_21 = 1;
LAB_00feb32c:
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_21,&DAT_01881a98,&DAT_01881968);
}

