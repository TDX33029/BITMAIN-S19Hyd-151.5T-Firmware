// FUN_01002f5c @ 01002f5c size=932 calls_out=5 calls_in=1
// strings: 

void FUN_01002f5c(undefined4 *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 == 3) {
    uVar3 = FUN_011d8634(param_2[1],param_2[2],param_3);
    *param_1 = 3;
    param_1[1] = uVar3;
    param_1[2] = &DAT_01c1c288;
    return;
  }
  do {
    iVar4 = *param_3;
    bVar2 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar2);
  *param_3 = iVar4 + 1;
  if (-1 < iVar4) {
    FUN_010035f8(&local_b0,param_2,param_3);
    do {
      iVar4 = *param_3;
      bVar2 = (bool)hasExclusiveAccess(param_3);
    } while (!bVar2);
    *param_3 = iVar4 + 1;
    if (-1 < iVar4) {
      FUN_010035f8(local_a0,param_2 + 3,param_3);
      do {
        iVar4 = *param_3;
        bVar2 = (bool)hasExclusiveAccess(param_3);
      } while (!bVar2);
      *param_3 = iVar4 + 1;
      if (-1 < iVar4) {
        FUN_010035f8(local_90,param_2 + 6,param_3);
        do {
          iVar4 = *param_3;
          bVar2 = (bool)hasExclusiveAccess(param_3);
        } while (!bVar2);
        *param_3 = iVar4 + 1;
        if (-1 < iVar4) {
          FUN_010035f8(local_80,param_2 + 9,param_3);
          do {
            iVar4 = *param_3;
            bVar2 = (bool)hasExclusiveAccess(param_3);
          } while (!bVar2);
          *param_3 = iVar4 + 1;
          if (-1 < iVar4) {
            FUN_010035f8(local_70,param_2 + 0xc,param_3);
            do {
              iVar4 = *param_3;
              bVar2 = (bool)hasExclusiveAccess(param_3);
            } while (!bVar2);
            *param_3 = iVar4 + 1;
            if (-1 < iVar4) {
              FUN_010035f8(local_60,param_2 + 0xf,param_3);
              do {
                iVar4 = *param_3;
                bVar2 = (bool)hasExclusiveAccess(param_3);
              } while (!bVar2);
              *param_3 = iVar4 + 1;
              if (-1 < iVar4) {
                FUN_010035f8(local_50,param_2 + 0x12,param_3);
                do {
                  iVar4 = *param_3;
                  bVar2 = (bool)hasExclusiveAccess(param_3);
                } while (!bVar2);
                *param_3 = iVar4 + 1;
                if (-1 < iVar4) {
                  FUN_010035f8(&local_40,param_2 + 0x15,param_3);
                  do {
                    iVar4 = *param_3;
                    bVar2 = (bool)hasExclusiveAccess(param_3);
                  } while (!bVar2);
                  *param_3 = iVar4 + 1;
                  if (-1 < iVar4) {
                    FUN_010035f8(&local_30,param_2 + 0x18,param_3);
                    iVar8 = param_2[0x1b];
                    iVar4 = param_2[0x1c];
                    iVar5 = param_2[0x1d];
                    if (iVar8 == 0) {
                      do {
                        iVar6 = *param_3;
                        bVar2 = (bool)hasExclusiveAccess(param_3);
                      } while (!bVar2);
                      *param_3 = iVar6 + 1;
                      if (iVar6 < 0) goto LAB_010032fc;
                      uVar9 = FUN_011d8634(iVar4,iVar5,param_3);
                      DataMemoryBarrier(0xb);
                      do {
                        iVar4 = *param_3;
                        bVar2 = (bool)hasExclusiveAccess(param_3);
                      } while (!bVar2);
                      *param_3 = iVar4 + -1;
                      if (iVar4 == 1) {
                        DataMemoryBarrier(0xb);
                        FUN_0117fe74(param_3);
                      }
                    }
                    else if (iVar8 == 2) {
                      uVar9 = FUN_011d8540(iVar4,iVar5,param_3);
                    }
                    else {
                      do {
                        iVar6 = *param_3;
                        bVar2 = (bool)hasExclusiveAccess(param_3);
                      } while (!bVar2);
                      *param_3 = iVar6 + 1;
                      if (iVar6 < 0) goto LAB_010032fc;
                      uVar9 = FUN_011d8634(iVar4,iVar5,param_3);
                      DataMemoryBarrier(0xb);
                      do {
                        iVar4 = *param_3;
                        bVar2 = (bool)hasExclusiveAccess(param_3);
                      } while (!bVar2);
                      *param_3 = iVar4 + -1;
                      if (iVar4 == 1) {
                        DataMemoryBarrier(0xb);
                        FUN_0117fe74(param_3);
                      }
                    }
                    local_140 = (undefined4)((ulonglong)uVar9 >> 0x20);
                    local_13c = (undefined4)uVar9;
                    iVar4 = param_2[0x1f];
                    iVar5 = param_2[0x20];
                    iVar6 = param_2[0x21];
                    iVar7 = param_2[0x22];
                    param_1[0x1e] = param_2[0x1e];
                    param_1[0x1f] = iVar4;
                    param_1[0x20] = iVar5;
                    param_1[0x21] = iVar6;
                    param_1[0x22] = iVar7;
                    local_120 = local_b0;
                    uStack_11c = uStack_ac;
                    uStack_118 = uStack_a8;
                    local_cc = local_40;
                    uStack_c8 = uStack_3c;
                    uStack_c4 = uStack_38;
                    local_c0 = local_30;
                    uStack_bc = uStack_2c;
                    uStack_b8 = uStack_28;
                    FUN_01bed4e2(param_1,&local_120,0x6c);
                    param_1[0x1c] = local_13c;
                    param_1[0x1b] = iVar8;
                    param_1[0x1d] = local_140;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_010032fc:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x10032fc);
  (*pcVar1)();
}

