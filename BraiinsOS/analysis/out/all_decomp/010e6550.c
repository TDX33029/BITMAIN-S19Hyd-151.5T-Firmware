// FUN_010e6550 @ 010e6550 size=1016 calls_out=3 calls_in=2
// strings: 

void FUN_010e6550(uint param_1,undefined4 param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar4 = param_1 * 8;
  if (uVar4 < 0x80) {
    iVar1 = param_4[1];
    bVar3 = (byte)uVar4 | 2;
  }
  else {
    iVar1 = param_4[1];
    bVar3 = (byte)uVar4 | 0x82;
    if (param_4[2] == iVar1) {
      FUN_00f5f538(param_4,1);
      iVar1 = param_4[1];
      iVar2 = param_4[2];
      *(byte *)(*param_4 + iVar1) = bVar3;
      if (iVar2 == iVar1) goto LAB_010e66bc;
    }
    else {
      *(byte *)(*param_4 + iVar1) = bVar3;
    }
    iVar1 = iVar1 + 1;
    bVar3 = (byte)((param_1 & 0x1fffffff) >> 4);
    param_4[1] = iVar1;
    if (0x3fff < uVar4) {
      if (param_4[2] == iVar1) {
        FUN_00f5f538(param_4,1);
        iVar1 = param_4[1];
        iVar2 = param_4[2];
        *(byte *)(*param_4 + iVar1) = bVar3 | 0x80;
        if (iVar2 == iVar1) goto LAB_010e66bc;
      }
      else {
        *(byte *)(*param_4 + iVar1) = bVar3 | 0x80;
      }
      iVar1 = iVar1 + 1;
      bVar3 = (byte)((param_1 & 0x1fffffff) >> 0xb);
      param_4[1] = iVar1;
      if (0x1fffff < uVar4) {
        if (param_4[2] == iVar1) {
          FUN_00f5f538(param_4,1);
          iVar1 = param_4[1];
          iVar2 = param_4[2];
          *(byte *)(*param_4 + iVar1) = bVar3 | 0x80;
          if (iVar2 == iVar1) goto LAB_010e66bc;
        }
        else {
          *(byte *)(*param_4 + iVar1) = bVar3 | 0x80;
        }
        iVar1 = iVar1 + 1;
        bVar3 = (byte)((param_1 & 0x1fffffff) >> 0x12);
        param_4[1] = iVar1;
        if (0xfffffff < uVar4) {
          if (param_4[2] == iVar1) {
            FUN_00f5f538(param_4,1);
            iVar1 = param_4[1];
            iVar2 = param_4[2];
            *(byte *)(*param_4 + iVar1) = bVar3 | 0x80;
            if (iVar2 == iVar1) {
LAB_010e66bc:
              local_28 = 1;
              local_24 = 0;
                    /* WARNING: Subroutine does not return */
              FUN_00f600c0(&local_28);
            }
          }
          else {
            *(byte *)(*param_4 + iVar1) = bVar3 | 0x80;
          }
          iVar1 = iVar1 + 1;
          bVar3 = ((byte)(param_1 >> 0x18) & 0x1f) >> 1;
          param_4[1] = iVar1;
        }
      }
    }
  }
  if (param_4[2] == iVar1) {
    FUN_00f5f538(param_4,1);
    iVar1 = param_4[1];
    iVar2 = param_4[2];
    *(byte *)(*param_4 + iVar1) = bVar3;
    if (iVar2 == iVar1) goto LAB_010e68cc;
    iVar1 = iVar1 + 1;
    param_4[1] = iVar1;
    if (0x7f < param_3) goto LAB_010e6744;
LAB_010e6724:
    uVar4 = param_3;
  }
  else {
    *(byte *)(*param_4 + iVar1) = bVar3;
    iVar1 = iVar1 + 1;
    param_4[1] = iVar1;
    if (param_3 < 0x80) goto LAB_010e6724;
LAB_010e6744:
    bVar3 = (byte)param_3 | 0x80;
    if (param_4[2] == iVar1) {
      FUN_00f5f538(param_4,1);
      iVar1 = param_4[1];
      iVar2 = param_4[2];
      *(byte *)(*param_4 + iVar1) = bVar3;
      if (iVar2 == iVar1) goto LAB_010e68cc;
    }
    else {
      *(byte *)(*param_4 + iVar1) = bVar3;
    }
    iVar1 = iVar1 + 1;
    uVar4 = param_3 >> 7;
    param_4[1] = iVar1;
    if (0x3fff < param_3) {
      bVar3 = (byte)uVar4 | 0x80;
      if (param_4[2] == iVar1) {
        FUN_00f5f538(param_4,1);
        iVar1 = param_4[1];
        iVar2 = param_4[2];
        *(byte *)(*param_4 + iVar1) = bVar3;
        if (iVar2 == iVar1) goto LAB_010e68cc;
      }
      else {
        *(byte *)(*param_4 + iVar1) = bVar3;
      }
      iVar1 = iVar1 + 1;
      uVar4 = param_3 >> 0xe;
      param_4[1] = iVar1;
      if (0x1fffff < param_3) {
        bVar3 = (byte)uVar4 | 0x80;
        if (param_4[2] == iVar1) {
          FUN_00f5f538(param_4,1);
          iVar1 = param_4[1];
          iVar2 = param_4[2];
          *(byte *)(*param_4 + iVar1) = bVar3;
          if (iVar2 == iVar1) goto LAB_010e68cc;
        }
        else {
          *(byte *)(*param_4 + iVar1) = bVar3;
        }
        iVar1 = iVar1 + 1;
        uVar4 = param_3 >> 0x15;
        param_4[1] = iVar1;
        if (0xfffffff < param_3) {
          bVar3 = (byte)uVar4 | 0x80;
          if (param_4[2] == iVar1) {
            FUN_00f5f538(param_4,1);
            iVar1 = param_4[1];
            iVar2 = param_4[2];
            *(byte *)(*param_4 + iVar1) = bVar3;
            if (iVar2 == iVar1) goto LAB_010e68cc;
          }
          else {
            *(byte *)(*param_4 + iVar1) = bVar3;
          }
          iVar1 = iVar1 + 1;
          uVar4 = param_3 >> 0x1c;
          param_4[1] = iVar1;
        }
      }
    }
  }
  if (param_4[2] == iVar1) {
    FUN_00f5f538(param_4,1);
    iVar1 = param_4[1];
    iVar2 = param_4[2];
    *(char *)(*param_4 + iVar1) = (char)uVar4;
    if (iVar2 == iVar1) {
LAB_010e68cc:
      local_28 = 1;
      local_24 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_28);
    }
  }
  else {
    *(char *)(*param_4 + iVar1) = (char)uVar4;
  }
  iVar1 = iVar1 + 1;
  param_4[1] = iVar1;
  uVar4 = param_4[2] - iVar1;
  if (uVar4 < param_3) {
    FUN_00f5f538(param_4,param_3);
    iVar1 = param_4[1];
    uVar4 = param_4[2] - iVar1;
  }
  FUN_016dd1aa(*param_4 + iVar1,param_2,param_3);
  if (uVar4 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_28);
  }
  param_4[1] = iVar1 + param_3;
  return;
}

