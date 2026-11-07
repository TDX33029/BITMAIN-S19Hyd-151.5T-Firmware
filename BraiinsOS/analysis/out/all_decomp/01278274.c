// FUN_01278274 @ 01278274 size=456 calls_out=4 calls_in=1
// strings: negative values are non-zero

void FUN_01278274(undefined4 param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int local_40;
  int *local_3c;
  int local_38;
  int local_30;
  int *piStack_2c;
  int iStack_28;
  int local_24;
  int *piStack_20;
  int iStack_1c;
  
  iVar6 = param_2[3];
  piVar10 = (int *)param_2[1];
  iVar11 = param_2[2];
  bVar5 = false;
  if ((char)iVar6 == '\0') {
    if (iVar11 != 0) {
      iVar7 = iVar11 << 2;
      uVar8 = 0;
      do {
        if (piVar10[uVar8] != 0) {
          iVar7 = piVar10[uVar8];
          bVar2 = (byte)iVar7;
          bVar3 = (byte)((uint)iVar7 >> 8);
          bVar4 = (byte)((uint)iVar7 >> 0x10);
          bVar1 = (byte)((uint)iVar7 >> 0x18);
          bVar5 = (LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                            bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                          bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                        bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                           (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                            bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                          bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                        bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                           (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                            bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                          bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                        bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                            bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                          bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                        bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) == 0 &&
                  (uVar8 & 0x7ffffff) == 0) && uVar8 >> 0x1b == 0;
          iVar7 = *param_2;
          goto joined_r0x01278334;
        }
        uVar8 = uVar8 + 1;
        iVar7 = iVar7 + -4;
      } while (iVar7 != 0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("negative values are non-zero",0x1c,&DAT_0188b824);
  }
  iVar7 = *param_2;
joined_r0x01278334:
  if (iVar7 == -0x80000000) {
    if (piVar10[2] == 0) {
      local_40 = 0;
      local_3c = (int *)&DAT_00000004;
      piVar10 = local_3c;
      iVar7 = local_40;
joined_r0x01278378:
      iVar11 = 0;
      local_40 = iVar7;
      local_3c = piVar10;
      goto joined_r0x01278360;
    }
  }
  else if (iVar11 == 0) goto joined_r0x01278378;
  local_24 = iVar7;
  piStack_20 = piVar10;
  iStack_1c = iVar11;
  FUN_0127b2d8(&local_40,&local_24,0,1);
  iVar11 = local_38;
joined_r0x01278360:
  local_38 = iVar11;
  if (bVar5) {
    if (iVar11 == 0) {
      if (local_40 == 0) {
        FUN_0127ac28(&local_40);
      }
      local_38 = 1;
      *local_3c = 1;
    }
    else {
      iVar7 = *local_3c;
      *local_3c = iVar7 + 1;
      if (iVar7 == -1) {
        if (iVar11 != 1) {
          iVar7 = iVar11 * 4 + -4;
          piVar10 = local_3c;
          do {
            piVar10 = piVar10 + 1;
            iVar9 = *piVar10;
            *piVar10 = iVar9 + 1;
            if (iVar9 != -1) goto LAB_0127841c;
            iVar7 = iVar7 + -4;
          } while (iVar7 != 0);
        }
        if (iVar11 == local_40) {
          FUN_0127ac28(&local_40);
        }
        local_3c[iVar11] = 1;
        local_38 = iVar11 + 1;
      }
    }
  }
LAB_0127841c:
  local_30 = local_40;
  piStack_2c = local_3c;
  iStack_28 = local_38;
  FUN_01277908(param_1,(char)iVar6,&local_30);
  return;
}

