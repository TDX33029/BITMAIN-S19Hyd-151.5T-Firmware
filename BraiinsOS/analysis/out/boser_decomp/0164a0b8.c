// FUN_0164a0b8 @ 0164a0b8 size=432 calls_out=5 calls_in=1
// strings: 

void FUN_0164a0b8(undefined4 param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int local_38;
  int *local_34;
  int local_30;
  int local_28;
  int *piStack_24;
  int iStack_20;
  
  iVar6 = param_2[3];
  piVar11 = (int *)param_2[1];
  bVar5 = false;
  if ((char)iVar6 == '\0') {
    if (param_2[2] != 0) {
      iVar8 = param_2[2] << 2;
      uVar7 = 0;
      do {
        if (piVar11[uVar7] != 0) {
          iVar8 = piVar11[uVar7];
          bVar2 = (byte)iVar8;
          bVar3 = (byte)((uint)iVar8 >> 8);
          bVar4 = (byte)((uint)iVar8 >> 0x10);
          bVar1 = (byte)((uint)iVar8 >> 0x18);
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
                  (uVar7 & 0x7ffffff) == 0) && uVar7 >> 0x1b == 0;
          goto LAB_0164a140;
        }
        uVar7 = uVar7 + 1;
        iVar8 = iVar8 + -4;
      } while (iVar8 != 0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_004c12cd,0x1c,&DAT_01d067bc);
  }
LAB_0164a140:
  piVar9 = param_2;
  if (*param_2 == -0x80000000) {
    piVar9 = piVar11;
  }
  if (piVar9[2] == 0) {
    if (*param_2 == -0x80000000) {
      FUN_0164a9cc(&local_38,piVar11[1],piVar11[2]);
    }
    else {
      local_38 = *param_2;
      local_34 = (int *)param_2[1];
      local_30 = param_2[2];
    }
  }
  else {
    FUN_0164b86c(&local_38,param_2,0,1);
  }
  iVar8 = local_30;
  if (bVar5) {
    if (local_30 == 0) {
      if (local_38 == 0) {
        FUN_01a54b48(&local_38);
      }
      local_30 = 1;
      *local_34 = 1;
    }
    else {
      iVar10 = *local_34;
      *local_34 = iVar10 + 1;
      if (iVar10 == -1) {
        iVar10 = -4;
        do {
          if (local_30 * -4 == iVar10) {
            if (local_30 == local_38) {
              FUN_01a54b48(&local_38);
            }
            local_34[iVar8] = 1;
            local_30 = iVar8 + 1;
            break;
          }
          uVar7 = *(uint *)((int)local_34 - iVar10);
          *(uint *)((int)local_34 - iVar10) = uVar7 + 1;
          iVar10 = iVar10 + -4;
        } while (0xfffffffe < uVar7);
      }
    }
  }
  local_28 = local_38;
  piStack_24 = local_34;
  iStack_20 = local_30;
  FUN_016498e0(param_1,(char)iVar6);
  return;
}

