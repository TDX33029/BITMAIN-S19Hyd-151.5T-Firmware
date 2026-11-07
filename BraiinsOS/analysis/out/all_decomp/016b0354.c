// FUN_016b0354 @ 016b0354 size=896 calls_out=12 calls_in=2
// strings: 

void FUN_016b0354(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  byte local_40;
  uint3 local_3f;
  uint local_3c;
  undefined4 *local_38;
  undefined1 *local_34;
  undefined4 *local_30;
  undefined1 *local_2c;
  
  local_30 = &local_54;
  local_2c = &LAB_00fac484;
  local_34 = &LAB_00fac484;
  local_38 = param_2 + 1;
  local_54 = 0;
  FUN_00600d2c(&local_50,&DAT_0057cdc5,&local_38);
  local_34 = (undefined1 *)0x1b6;
  local_38 = (undefined4 *)0x0;
  local_2c = (undefined1 *)((uint)local_2c & 0xffff0000);
  local_30 = (undefined4 *)0x1;
  FUN_015ec1bc(&local_40,&local_38,local_4c,local_48);
  if (local_50 != 0) {
    thunk_FUN_016d3fb4(local_4c);
  }
  uVar4 = local_3c;
  if (local_40 != 4) {
    uVar11 = (uint)local_3f;
    goto LAB_016b057c;
  }
  local_44 = local_3c;
  local_30 = (undefined4 *)0x0;
  local_34 = (undefined1 *)0x1;
  local_38 = (undefined4 *)0x0;
  FUN_015c4bfc(&local_40,&local_44,&local_38);
  puVar2 = local_34;
  uVar10 = (uint)local_40;
  if (uVar10 == 4) {
    lVar14 = FUN_010ceb84(local_34,local_30);
    uVar13 = (uint)((ulonglong)lVar14 >> 0x20);
    uVar3 = 0;
    if (lVar14 < 0) {
LAB_016b0450:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar3,uVar13);
    }
    if (uVar13 == 0) {
      uVar10 = 1;
      local_58 = 0;
    }
    else {
      uVar10 = thunk_FUN_016d4a50(uVar13);
      if (uVar10 == 0) {
        uVar3 = 1;
        goto LAB_016b0450;
      }
      local_58 = uVar13;
    }
    FUN_016dd1aa(uVar10,(int)lVar14,uVar13);
    uVar11 = uVar10 >> 8;
    uVar10 = uVar10 & 0xff;
    local_3c = uVar13;
    if (local_38 != (undefined4 *)0x0) {
LAB_016b04f0:
      thunk_FUN_016d3fb4(puVar2);
      uVar13 = local_3c;
    }
  }
  else {
    uVar11 = (uint)local_3f;
    if (local_38 != (undefined4 *)0x0) {
      local_58 = 0x80000000;
      goto LAB_016b04f0;
    }
    local_58 = 0x80000000;
    uVar13 = local_3c;
  }
  uVar4 = FUN_016dffb2(uVar4);
  if (local_58 != 0x80000000) {
    uVar4 = uVar10 | uVar11 << 8;
    if (uVar13 < 3) {
      if (uVar13 != 2) {
LAB_016b06b0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(uVar4,uVar13,2,uVar13,&DAT_018aead8);
      }
LAB_016b0518:
      uVar10 = 5;
    }
    else {
      pbVar7 = (byte *)(uVar4 + 2);
      bVar1 = *pbVar7;
      if ((char)bVar1 < -0x40) goto LAB_016b06b0;
      if ((uVar13 != 3) || ((uVar10 = 5, bVar1 != 0x2b && (bVar1 != 0x2d)))) {
        uVar8 = uVar13 - 2;
        if (bVar1 == 0x2b) {
          pbVar7 = (byte *)(uVar4 + 3);
          uVar8 = uVar13 - 3;
        }
        if (uVar8 < 9) {
          uVar10 = 6;
          uVar13 = 0;
          for (; uVar8 != 0; uVar8 = uVar8 - 1) {
            uVar12 = (uint)*pbVar7;
            uVar9 = uVar12 - 0x30;
            uVar11 = uVar12 - 0x41 & 0xffffffdf;
            if (0x39 < uVar12) {
              uVar9 = uVar11 + 10;
            }
            if (0xf < uVar9) goto LAB_016b0518;
            uVar13 = uVar9 | uVar13 << 4;
            pbVar7 = pbVar7 + 1;
          }
        }
        else {
          uVar13 = 0;
          uVar10 = 5;
          while (uVar8 != 0) {
            if (0xfffffff < uVar13) goto LAB_016b051c;
            uVar9 = (uint)*pbVar7;
            uVar11 = uVar9 - 0x30;
            if (0x39 < uVar9) {
              uVar11 = (uVar9 - 0x41 & 0xffffffdf) + 10;
            }
            uVar9 = uVar13 * 0x10;
            uVar13 = uVar11 + uVar9;
            if ((0xf < uVar11) || (uVar8 = uVar8 - 1, pbVar7 = pbVar7 + 1, CARRY4(uVar11,uVar9)))
            goto LAB_016b051c;
          }
          uVar10 = 6;
        }
      }
    }
LAB_016b051c:
    if (local_58 != 0) {
      uVar4 = thunk_FUN_016d3fb4();
    }
  }
  local_40 = (byte)uVar10;
  local_3c = uVar13;
  if (uVar10 == 6) {
    if (uVar13 == 0) {
      uVar6 = 5;
    }
    else {
      iVar5 = FUN_016d69b4(0,uVar13,3,1,*param_2);
      if (iVar5 != -1) {
        param_1[1] = iVar5;
        param_1[2] = uVar13;
        *param_1 = 0;
        return;
      }
      uVar4 = FUN_0126ead8();
      uVar6 = 4;
    }
    param_1[2] = uVar4;
    *(undefined1 *)(param_1 + 1) = uVar6;
    *param_1 = 1;
    return;
  }
LAB_016b057c:
  *(byte *)(param_1 + 1) = local_40;
  *(short *)((int)param_1 + 5) = (short)uVar11;
  param_1[2] = local_3c;
  *(char *)((int)param_1 + 7) = (char)(uVar11 >> 0x10);
  *param_1 = 1;
  return;
}

