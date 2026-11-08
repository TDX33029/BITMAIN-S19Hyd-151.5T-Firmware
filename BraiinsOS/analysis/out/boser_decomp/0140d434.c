// FUN_0140d434 @ 0140d434 size=688 calls_out=3 calls_in=3
// strings: 

void FUN_0140d434(undefined4 *param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined2 uVar8;
  uint uVar9;
  uint local_6c;
  uint local_68;
  int local_60 [2];
  uint local_58;
  byte local_53;
  char local_52;
  int local_3c;
  int local_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  FUN_01306b30(local_60,param_2,param_3,":",1);
  if (local_60[0] == 1) {
    FUN_0140d6f0(&local_6c,&local_58,local_30,local_2c,uStack_28,local_24,local_3c == -1);
  }
  else {
    local_6c = 0;
    if (local_52 == '\0') {
      if (local_58 == 0) {
        local_58 = 0;
        local_6c = local_58;
        if ((local_53 & 1) == 0) goto LAB_0140d5a4;
      }
      else {
        do {
          pcVar7 = (char *)(local_30 + local_58);
          if (local_58 < local_2c) {
            if (*pcVar7 < -0x40) goto LAB_0140d6d0;
          }
          else if (local_58 != local_2c) {
LAB_0140d6d0:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(local_30,local_2c,0,local_58,&DAT_01d272d4);
          }
          uVar5 = (uint)pcVar7[-1];
          if (0x7fffffff < uVar5) {
            bVar3 = pcVar7[-2];
            if ((char)bVar3 < -0x40) {
              bVar1 = pcVar7[-3];
              if ((char)bVar1 < -0x40) {
                uVar9 = (int)(char)bVar1 & 0x3fU | ((byte)pcVar7[-4] & 7) << 6;
              }
              else {
                uVar9 = bVar1 & 0xf;
              }
              uVar9 = (int)(char)bVar3 & 0x3fU | uVar9 << 6;
            }
            else {
              uVar9 = bVar3 & 0x1f;
            }
            uVar5 = uVar5 & 0x3f | uVar9 << 6;
          }
          if ((local_53 & 1) != 0) goto LAB_0140d598;
          iVar4 = -1;
          if (0x7f < uVar5) {
            iVar4 = -2;
          }
          if ((0x7ff < uVar5) && (iVar4 = -4, uVar5 < 0x10000)) {
            iVar4 = -3;
          }
          local_58 = iVar4 + local_58;
          local_53 = 1;
        } while (local_58 != 0);
        local_58 = 0;
      }
LAB_0140d598:
      local_6c = 1;
      local_68 = local_58;
    }
  }
LAB_0140d5a4:
  if (local_6c == 1) {
    uVar5 = local_68 + 1;
    if (local_68 != 0xffffffff) {
      if (uVar5 < param_3) {
        if (*(char *)(param_2 + uVar5) < -0x40) goto LAB_0140d5d4;
      }
      else if (param_3 != uVar5) {
LAB_0140d5d4:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(param_2,param_3,uVar5,param_3,&DAT_01cf3fbc);
      }
    }
    param_3 = param_3 - uVar5;
    if (param_3 != 0) {
      pbVar2 = (byte *)(param_2 + uVar5);
      if (param_3 == 1) {
        bVar3 = *pbVar2;
        if (bVar3 == 0x2b || bVar3 == 0x2d) goto LAB_0140d6c0;
      }
      else {
        bVar3 = *pbVar2;
      }
      uVar5 = param_3;
      pbVar6 = pbVar2;
      if (bVar3 == 0x2b) {
        pbVar6 = pbVar2 + 1;
        uVar5 = param_3 - 1;
      }
      uVar9 = 0;
      uVar8 = 0;
      if (uVar5 < 5) {
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          bVar3 = *pbVar6;
          if (9 < bVar3 - 0x30) goto LAB_0140d6c0;
          pbVar6 = pbVar6 + 1;
          uVar9 = (bVar3 - 0x30) + uVar9 * 10;
          uVar8 = (undefined2)uVar9;
        }
LAB_0140d66c:
        *(undefined2 *)(param_1 + 2) = uVar8;
        *param_1 = pbVar2;
        param_1[1] = param_3;
        return;
      }
      do {
        uVar8 = (undefined2)uVar9;
        if (uVar5 == 0) goto LAB_0140d66c;
        uVar9 = (uVar9 & 0xffff) * 4 + (uVar9 & 0xffff);
        if (uVar9 >> 0xf != 0) break;
        if (9 < *pbVar6 - 0x30) break;
        uVar5 = uVar5 - 1;
        uVar9 = (uVar9 * 2 & 0xffff) + (*pbVar6 - 0x30 & 0xffff);
        pbVar6 = pbVar6 + 1;
      } while (uVar9 >> 0x10 == 0);
    }
  }
LAB_0140d6c0:
  *param_1 = 0;
  return;
}

