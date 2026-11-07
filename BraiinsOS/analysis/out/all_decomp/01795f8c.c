// FUN_01795f8c @ 01795f8c size=916 calls_out=2 calls_in=1
// strings: 

void FUN_01795f8c(uint *param_1,int *param_2,undefined4 param_3,undefined4 param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  byte *pbVar9;
  undefined8 uVar10;
  uint local_19c;
  undefined4 local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  uint local_180;
  undefined4 local_17c;
  undefined4 local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  int local_15c [12];
  byte bStack_129;
  byte local_128 [260];
  uint local_24;
  
  local_19c = 0;
  local_198 = 0;
  local_24 = DAT_018ddaf8;
  uVar10 = FUN_01792338(local_128,0x100,local_15c,&local_198,&local_19c,param_3,param_4);
  uVar4 = (uint)uVar10;
  if (0xffffff88 < uVar4) goto LAB_01796280;
  *param_5 = (uint)(local_15c[0] != 0);
  if (0xc < local_19c) {
    uVar10 = CONCAT44(local_19c,0xffffffd4);
    goto LAB_01796280;
  }
  if (*param_2 + 1U < local_198) {
    uVar10 = CONCAT44(local_19c,0xffffffd0);
    goto LAB_01796280;
  }
  *param_2 = local_198 - 1;
  local_178._0_2_ = CONCAT11((char)(local_198 - 1),(char)local_19c);
  local_178 = (uint)(ushort)local_178;
  *param_1 = local_178;
  if (local_19c == 0) {
    uVar10 = CONCAT44(local_19c,uVar4);
    if (local_198 == 0) goto LAB_01796280;
LAB_01796068:
    pbVar9 = &bStack_129;
    puVar8 = param_1;
    do {
      pbVar9 = pbVar9 + 1;
      if (*pbVar9 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (local_19c + 1) - (uint)*pbVar9 & 0xff;
      }
      puVar8 = puVar8 + 1;
      *puVar8 = uVar5;
    } while (puVar8 != param_1 + local_198);
    local_178 = 0;
    local_194 = 0;
    local_174 = 0;
    local_170 = 0;
    local_190 = 0;
    local_18c = 0;
    local_188 = 0;
    local_184 = 0;
    local_180 = 0;
    local_17c = 0;
    local_16c = 0;
    local_168 = 0;
    local_164 = 0;
    local_160 = 0;
    puVar8 = param_1;
    do {
      puVar8 = puVar8 + 1;
      iVar1 = (*puVar8 & 0xff) * 2;
      *(short *)((int)local_15c + iVar1 + -0x38) = *(short *)((int)local_15c + iVar1 + -0x38) + 1;
    } while (puVar8 != param_1 + local_198);
    if (local_19c != 0) {
      *(undefined2 *)((int)local_15c + local_19c * 2 + -0x1c) = 0;
      if (local_19c != 1) {
        uVar3 = *(ushort *)((int)local_15c + local_19c * 2 + -0x38);
        goto LAB_01796128;
      }
    }
  }
  else {
    if (local_198 != 0) goto LAB_01796068;
    local_178 = local_198;
    local_194 = local_198;
    local_174 = local_198;
    local_170 = local_198;
    local_16c = local_198;
    local_168 = local_198;
    local_164 = local_198;
    local_160 = local_198;
    local_190 = local_198;
    local_18c = local_198;
    local_188 = local_198;
    local_184 = local_198;
    local_180 = local_198;
    local_17c = local_198;
    uVar10 = CONCAT44(local_19c,uVar4);
    if (local_19c == 1) goto LAB_01796280;
    uVar3 = *(ushort *)((int)local_15c + local_19c * 2 + -0x38);
LAB_01796128:
    iVar1 = (local_19c - 1) * 2;
    *(ushort *)((int)local_15c + iVar1 + -0x1c) = uVar3 >> 1;
    uVar5 = local_19c;
    if (local_19c - 2 != 0) {
      iVar2 = (local_19c - 2) * 2;
      uVar6 = ((uint)(uVar3 >> 1) + (uint)*(ushort *)((int)local_15c + iVar1 + -0x38) & 0xffff) >> 1
      ;
      *(short *)((int)local_15c + iVar2 + -0x1c) = (short)uVar6;
      if (local_19c - 3 != 0) {
        iVar1 = (local_19c - 3) * 2;
        uVar6 = (uVar6 + *(ushort *)((int)local_15c + iVar2 + -0x38) & 0xffff) >> 1;
        *(short *)((int)local_15c + iVar1 + -0x1c) = (short)uVar6;
        if (local_19c - 4 != 0) {
          iVar2 = (local_19c - 4) * 2;
          uVar6 = (uVar6 + *(ushort *)((int)local_15c + iVar1 + -0x38) & 0xffff) >> 1;
          *(short *)((int)local_15c + iVar2 + -0x1c) = (short)uVar6;
          if (local_19c - 5 != 0) {
            iVar1 = (local_19c - 5) * 2;
            uVar6 = (uVar6 + *(ushort *)((int)local_15c + iVar2 + -0x38) & 0xffff) >> 1;
            *(short *)((int)local_15c + iVar1 + -0x1c) = (short)uVar6;
            if (local_19c - 6 != 0) {
              iVar2 = (local_19c - 6) * 2;
              uVar6 = (uVar6 + *(ushort *)((int)local_15c + iVar1 + -0x38) & 0xffff) >> 1;
              *(short *)((int)local_15c + iVar2 + -0x1c) = (short)uVar6;
              if (local_19c - 7 != 0) {
                iVar1 = (local_19c - 7) * 2;
                uVar6 = (uVar6 + *(ushort *)((int)local_15c + iVar2 + -0x38) & 0xffff) >> 1;
                *(short *)((int)local_15c + iVar1 + -0x1c) = (short)uVar6;
                if (local_19c - 8 != 0) {
                  iVar2 = (local_19c - 8) * 2;
                  uVar6 = (uVar6 + *(ushort *)((int)local_15c + iVar1 + -0x38) & 0xffff) >> 1;
                  *(short *)((int)local_15c + iVar2 + -0x1c) = (short)uVar6;
                  if (local_19c - 9 != 0) {
                    iVar1 = (local_19c - 9) * 2;
                    uVar6 = (uVar6 + *(ushort *)((int)local_15c + iVar2 + -0x38) & 0xffff) >> 1;
                    *(short *)((int)local_15c + iVar1 + -0x1c) = (short)uVar6;
                    if (local_19c - 10 != 0) {
                      uVar5 = (local_19c - 10) * 2;
                      uVar6 = (uVar6 + *(ushort *)((int)local_15c + iVar1 + -0x38) & 0xffff) >> 1;
                      *(short *)((int)local_15c + (uVar5 - 0x1c)) = (short)uVar6;
                      if (local_19c != 0xb) {
                        uVar5 = (uint)*(ushort *)((int)local_15c + (uVar5 - 0x38));
                        local_178 = CONCAT22((short)((uVar6 + uVar5 & 0xffff) >> 1),
                                             (ushort)local_178);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar10 = CONCAT44(uVar5,uVar4);
    if (local_198 == 0) goto LAB_01796280;
  }
  puVar8 = param_1 + local_198;
  do {
    param_1 = param_1 + 1;
    uVar5 = *param_1;
    uVar7 = uVar5 & 0xff;
    uVar6 = 0;
    if (uVar7 != 0) {
      uVar6 = 0x20 - uVar7;
    }
    uVar3 = *(ushort *)((int)local_15c + uVar7 * 2 + -0x1c);
    *(ushort *)((int)local_15c + uVar7 * 2 + -0x1c) = uVar3 + 1;
    if (uVar7 != 0) {
      uVar5 = uVar5 | (uint)uVar3 << (uVar6 & 0xff);
      *param_1 = uVar5;
    }
    uVar10 = CONCAT44(uVar5,uVar4);
  } while (puVar8 != param_1);
LAB_01796280:
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

