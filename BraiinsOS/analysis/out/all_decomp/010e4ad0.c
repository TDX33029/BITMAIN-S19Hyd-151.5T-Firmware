// FUN_010e4ad0 @ 010e4ad0 size=780 calls_out=3 calls_in=2
// strings: 

void FUN_010e4ad0(uint param_1,uint param_2,int *param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte local_21;
  undefined4 local_20;
  undefined4 local_1c;
  
  if ((uint)(param_1 < 0x80) <= -param_2) {
    iVar5 = param_3[1];
    iVar4 = param_3[2];
    bVar2 = (byte)param_1 | 0x80;
    if (iVar4 == iVar5) {
      FUN_00f5f538(param_3,1);
      iVar3 = *param_3;
      iVar5 = param_3[1];
      iVar4 = param_3[2];
      *(byte *)(iVar3 + iVar5) = bVar2;
      if (iVar4 == iVar5) goto LAB_010e4ca0;
    }
    else {
      iVar3 = *param_3;
      *(byte *)(iVar3 + iVar5) = bVar2;
    }
    uVar6 = param_1 >> 7;
    iVar5 = iVar5 + 1;
    param_3[1] = iVar5;
    if (param_2 != 0 || param_2 < (0x3fff < param_1)) {
      bVar2 = (byte)uVar6 | 0x80;
      if (iVar4 == iVar5) {
        FUN_00f5f538(param_3,1);
        iVar3 = *param_3;
        iVar5 = param_3[1];
        iVar4 = param_3[2];
        *(byte *)(iVar3 + iVar5) = bVar2;
        if (iVar4 == iVar5) goto LAB_010e4ca0;
      }
      else {
        *(byte *)(iVar3 + iVar5) = bVar2;
      }
      uVar6 = param_1 >> 0xe;
      iVar5 = iVar5 + 1;
      param_3[1] = iVar5;
      if (param_2 != 0 || param_2 < (0x1fffff < param_1)) {
        bVar2 = (byte)uVar6 | 0x80;
        if (iVar4 == iVar5) {
          FUN_00f5f538(param_3,1);
          iVar5 = param_3[1];
          iVar4 = param_3[2];
          *(byte *)(*param_3 + iVar5) = bVar2;
          if (iVar4 == iVar5) goto LAB_010e4ca0;
        }
        else {
          *(byte *)(iVar3 + iVar5) = bVar2;
        }
        iVar5 = iVar5 + 1;
        param_3[1] = iVar5;
        if (param_2 == 0 && (0xfffffff < param_1) <= param_2) {
          param_1 = param_1 >> 0x15;
        }
        else {
          iVar4 = param_3[2];
          bVar2 = (byte)(param_1 >> 0x15) | 0x80;
          if (iVar4 == iVar5) {
            FUN_00f5f538(param_3,1);
            iVar5 = param_3[1];
            iVar4 = param_3[2];
            iVar3 = *param_3;
            *(byte *)(iVar3 + iVar5) = bVar2;
            if (iVar4 == iVar5) {
LAB_010e4ca0:
              local_20 = 1;
              local_1c = 0;
                    /* WARNING: Subroutine does not return */
              FUN_00f600c0(&local_20);
            }
          }
          else {
            iVar3 = *param_3;
            *(byte *)(iVar3 + iVar5) = bVar2;
          }
          iVar5 = iVar5 + 1;
          param_1 = param_1 >> 0x1c | param_2 << 4;
          param_3[1] = iVar5;
          if (7 < param_2) {
            bVar2 = (byte)param_1 | 0x80;
            if (iVar4 == iVar5) {
              FUN_00f5f538(param_3,1);
              iVar5 = param_3[1];
              iVar4 = param_3[2];
              *(byte *)(*param_3 + iVar5) = bVar2;
              if (iVar4 == iVar5) {
                local_20 = 1;
                local_1c = 0;
                    /* WARNING: Subroutine does not return */
                FUN_00f600c0(&local_20);
              }
            }
            else {
              *(byte *)(iVar3 + iVar5) = bVar2;
            }
            param_3[1] = iVar5 + 1;
            param_1 = param_2 >> 3;
            uVar6 = param_2 >> 10;
            if (uVar6 != 0) {
              local_21 = (byte)param_1 | 0x80;
              FUN_00f60054(param_3,&local_21,1);
              uVar1 = param_2 >> 0x11;
              param_1 = uVar6;
              if (uVar1 != 0) {
                local_21 = (byte)uVar6 | 0x80;
                FUN_00f60054(param_3,&local_21,1);
                if (param_2 >> 0x18 == 0) {
                  param_1 = uVar1;
                }
                else {
                  local_21 = (byte)uVar1 | 0x80;
                  FUN_00f60054(param_3,&local_21,1);
                  if ((int)param_2 < 0) {
                    local_21 = (byte)(param_2 >> 0x18);
                    FUN_00f60054(param_3,&local_21,1);
                    param_1 = 1;
                  }
                  else {
                    param_1 = param_2 >> 0x18;
                  }
                }
              }
            }
          }
        }
        goto LAB_010e4bb0;
      }
    }
    param_1 = uVar6;
  }
LAB_010e4bb0:
  iVar5 = param_3[1];
  if (param_3[2] != iVar5) {
    *(char *)(*param_3 + iVar5) = (char)param_1;
    param_3[1] = iVar5 + 1;
    return;
  }
  FUN_00f5f538(param_3,1);
  iVar5 = param_3[1];
  iVar4 = param_3[2];
  *(char *)(*param_3 + iVar5) = (char)param_1;
  if (iVar4 == iVar5) {
    local_20 = 1;
    local_1c = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_20);
  }
  param_3[1] = iVar5 + 1;
  return;
}

