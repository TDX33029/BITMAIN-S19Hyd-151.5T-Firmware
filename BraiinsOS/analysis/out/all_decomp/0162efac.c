// FUN_0162efac @ 0162efac size=468 calls_out=5 calls_in=0
// strings: 

void FUN_0162efac(int *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int local_38;
  undefined4 local_34;
  int local_30;
  
  if (param_3 == 0) {
    local_34._0_1_ = 3;
  }
  else {
    param_3 = param_3 << 5;
    do {
      pbVar3 = (byte *)*param_2;
      iVar4 = param_2[1];
      if (iVar4 != 7) {
LAB_0162f0b0:
        FUN_006008c8(&local_38,pbVar3,iVar4);
        if (local_38 == -0x80000000) {
          if (local_30 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(0,local_30);
          }
          if (local_30 == 0) {
            iVar4 = 0;
            iVar2 = 1;
          }
          else {
            iVar2 = thunk_FUN_016d4a50(local_30);
            iVar4 = local_30;
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,local_30);
            }
          }
          FUN_016dd1aa(iVar2,local_34,local_30);
          local_38 = iVar4;
          local_34 = iVar2;
        }
        iVar4 = param_2[2];
        *param_1 = 2;
        param_1[1] = iVar4;
        param_1[2] = local_38;
        param_1[3] = local_34;
        param_1[4] = local_30;
        return;
      }
      uVar1 = (uint)*pbVar3;
      iVar4 = 7;
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if (uVar1 != 0x70) goto LAB_0162f0b0;
      uVar1 = (uint)pbVar3[1];
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if (uVar1 != 0x61) goto LAB_0162f0b0;
      uVar1 = (uint)pbVar3[2];
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if (uVar1 != 100) goto LAB_0162f0b0;
      uVar1 = (uint)pbVar3[3];
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if (uVar1 != 100) goto LAB_0162f0b0;
      uVar1 = (uint)pbVar3[4];
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if (uVar1 != 0x69) goto LAB_0162f0b0;
      uVar1 = (uint)pbVar3[5];
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if (uVar1 != 0x6e) goto LAB_0162f0b0;
      uVar1 = (uint)pbVar3[6];
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if (uVar1 != 0x67) goto LAB_0162f0b0;
      FUN_0162e31c(&local_38,param_2 + 4);
      if (local_38 != 7) {
        FUN_016dd1aa((int)param_1 + 5,(int)&local_34 + 1,0x13);
        *(undefined1 *)(param_1 + 1) = (undefined1)local_34;
        *param_1 = local_38;
        return;
      }
      param_2 = param_2 + 8;
      param_3 = param_3 + -0x20;
    } while (param_3 != 0);
  }
  *(undefined1 *)(param_1 + 1) = (undefined1)local_34;
  *param_1 = 7;
  return;
}

