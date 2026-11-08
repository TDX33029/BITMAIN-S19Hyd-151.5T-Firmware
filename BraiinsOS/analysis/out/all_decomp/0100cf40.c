// FUN_0100cf40 @ 0100cf40 size=1068 calls_out=3 calls_in=2
// strings: 

void FUN_0100cf40(undefined2 *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined2 *puVar3;
  byte *pbVar4;
  char *pcVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar10 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 8;
  iVar11 = *param_2;
  uVar13 = param_2[1];
  uVar2 = param_2[2];
  do {
    while( true ) {
      if (uVar13 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar2,uVar13,uVar13,&DAT_01882234);
      }
      pbVar4 = (byte *)(iVar11 + uVar2);
      iVar9 = uVar13 - uVar2;
      if ((iVar9 != 0) && (*pbVar4 == 0x3a)) break;
      if ((uVar13 <= uVar2) || (bVar1 = (&DAT_00418c87)[*pbVar4], (char)bVar1 < '\0'))
      goto joined_r0x0100d32c;
      bVar12 = false;
      if (iVar9 == 1) {
LAB_0100d124:
        param_2[2] = uVar13;
        goto joined_r0x0100d32c;
      }
LAB_0100d014:
      uVar6 = (ushort)bVar1;
      uVar8 = (uint)pbVar4[1];
      pcVar5 = &DAT_00418c87 + uVar8;
      if (*pcVar5 < 0) {
        iVar9 = 1;
joined_r0x0100d08c:
        if (uVar8 == 0x2e) {
          if ((uVar10 == 7) || ((uVar10 != local_3c) != bVar12)) goto LAB_0100d140;
          uVar14 = FUN_0100bd54(param_2);
          uVar2 = (uint)(uVar14 >> 0x20);
          if ((uVar14 & 1) == 0) goto LAB_0100d140;
          *(uint *)((int)&local_38 + uVar10 * 2) = uVar2 >> 0x10 | uVar2 << 0x10;
          uVar10 = uVar10 + 2;
          goto joined_r0x0100d32c;
        }
      }
      else {
        if (iVar9 == 2) goto LAB_0100d124;
        uVar8 = (uint)pbVar4[2];
        uVar7 = (int)*pcVar5 | (uint)bVar1 << 4;
        uVar6 = (ushort)uVar7;
        pcVar5 = &DAT_00418c87 + uVar8;
        if (*pcVar5 < 0) {
          iVar9 = 2;
          goto joined_r0x0100d08c;
        }
        if (iVar9 == 3) goto LAB_0100d124;
        uVar8 = (uint)pbVar4[3];
        uVar7 = (int)*pcVar5 | uVar7 << 4;
        uVar6 = (ushort)uVar7;
        if ((char)(&DAT_00418c87)[uVar8] < '\0') {
          iVar9 = 3;
          goto joined_r0x0100d08c;
        }
        uVar6 = (short)(char)(&DAT_00418c87)[uVar8] | (ushort)(uVar7 << 4);
        iVar9 = 4;
      }
      uVar2 = iVar9 + uVar2;
      param_2[2] = uVar2;
      if ((uVar10 == 0 || uVar10 == local_3c) == bVar12) {
        *param_1 = 0;
        return;
      }
      iVar9 = uVar10 * 2;
      uVar10 = uVar10 + 1;
      *(ushort *)((int)&local_38 + iVar9) = uVar6;
      if (7 < uVar10) goto joined_r0x0100d32c;
    }
    uVar8 = uVar2 + 1;
    param_2[2] = uVar8;
    if (uVar13 <= uVar8) goto LAB_0100d140;
    pbVar4 = (byte *)(iVar11 + uVar8);
    bVar1 = (&DAT_00418c87)[*pbVar4];
    if (-1 < (char)bVar1) {
      iVar9 = uVar13 - uVar8;
      bVar12 = true;
      uVar2 = uVar8;
      if (iVar9 != 1) goto LAB_0100d014;
      goto LAB_0100d124;
    }
    if (*pbVar4 != 0x3a) goto LAB_0100d140;
    uVar2 = uVar2 + 2;
    param_2[2] = uVar2;
    if (local_3c != 8) goto LAB_0100d140;
    local_3c = uVar10;
  } while (uVar10 < 8);
joined_r0x0100d32c:
  if (local_3c == 8) {
    if (uVar10 == 8) goto LAB_0100d29c;
  }
  else if (uVar10 != 8) {
    if (local_3c < uVar10) {
      uVar2 = uVar10 - 1;
      if (8 < uVar10) goto LAB_0100d350;
      puVar3 = (undefined2 *)((int)&local_38 + uVar2 * 2);
      local_2c = CONCAT22(*puVar3,(undefined2)local_2c);
      *puVar3 = 0;
      if (local_3c < uVar2) {
        uVar13 = uVar10 - 2;
        puVar3 = (undefined2 *)((int)&local_38 + uVar13 * 2);
        local_2c = CONCAT22(local_2c._2_2_,*puVar3);
        *puVar3 = 0;
        if (local_3c < uVar13) {
          uVar2 = uVar10 - 3;
          if (uVar13 < 9) {
            puVar3 = (undefined2 *)((int)&local_38 + uVar2 * 2);
            local_30 = CONCAT22(*puVar3,(undefined2)local_30);
            *puVar3 = 0;
            if (uVar2 <= local_3c) goto LAB_0100d29c;
            uVar13 = uVar10 - 4;
            bVar12 = uVar2 < 9;
            uVar2 = uVar13;
            if (bVar12) {
              puVar3 = (undefined2 *)((int)&local_38 + uVar13 * 2);
              local_30 = CONCAT22(local_30._2_2_,*puVar3);
              *puVar3 = 0;
              if (uVar13 <= local_3c) goto LAB_0100d29c;
              uVar2 = uVar10 - 5;
              if (uVar13 < 9) {
                puVar3 = (undefined2 *)((int)&local_38 + uVar2 * 2);
                local_34 = CONCAT22(*puVar3,(undefined2)local_34);
                *puVar3 = 0;
                if (uVar2 <= local_3c) goto LAB_0100d29c;
                uVar13 = uVar10 - 6;
                bVar12 = uVar2 < 9;
                uVar2 = uVar13;
                if (bVar12) {
                  puVar3 = (undefined2 *)((int)&local_38 + uVar13 * 2);
                  local_34 = CONCAT22(local_34._2_2_,*puVar3);
                  *puVar3 = 0;
                  if (uVar13 <= local_3c) goto LAB_0100d29c;
                  uVar2 = uVar10 - 7;
                  if (uVar13 < 9) {
                    puVar3 = (undefined2 *)((int)&local_38 + uVar2 * 2);
                    local_38 = CONCAT22(*puVar3,(undefined2)local_38);
                    *puVar3 = 0;
                    if (uVar2 <= local_3c) goto LAB_0100d29c;
                    uVar2 = 0xfffffffe;
                  }
                }
              }
            }
          }
LAB_0100d350:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar2,8,&DAT_01882224);
        }
      }
    }
LAB_0100d29c:
    *(undefined4 *)(param_1 + 7) = local_2c;
    *(undefined4 *)(param_1 + 5) = local_30;
    *(undefined4 *)(param_1 + 3) = local_34;
    *(undefined4 *)(param_1 + 1) = local_38;
    *param_1 = 1;
    return;
  }
LAB_0100d140:
  *param_1 = 0;
  return;
}

