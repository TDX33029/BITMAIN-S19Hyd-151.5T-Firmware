// FUN_015f2444 @ 015f2444 size=440 calls_out=3 calls_in=2
// strings: ._sub.

void FUN_015f2444(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_6c [2];
  uint local_64;
  int local_60 [2];
  uint local_58;
  byte local_53;
  char local_52;
  int local_3c;
  int local_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  FUN_01306b30(local_60,param_2,param_3,"._sub.",6);
  if (local_60[0] == 1) {
    FUN_0140d6f0(local_6c,&local_58,local_30,local_2c,uStack_28,local_24,local_3c == -1);
  }
  else {
    local_6c[0] = 0;
    if (local_52 == '\0') {
      if (local_58 == 0) {
        local_58 = 0;
        local_6c[0] = local_58;
        if ((local_53 & 1) == 0) goto LAB_015f25b4;
      }
      else {
        do {
          pcVar4 = (char *)(local_30 + local_58);
          if (local_58 < local_2c) {
            if (*pcVar4 < -0x40) goto LAB_015f25e8;
          }
          else if (local_58 != local_2c) {
LAB_015f25e8:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(local_30,local_2c,0,local_58,&DAT_01d272d4);
          }
          uVar6 = (uint)pcVar4[-1];
          if (0x7fffffff < uVar6) {
            bVar1 = pcVar4[-2];
            if ((char)bVar1 < -0x40) {
              bVar2 = pcVar4[-3];
              if ((char)bVar2 < -0x40) {
                uVar5 = (int)(char)bVar2 & 0x3fU | ((byte)pcVar4[-4] & 7) << 6;
              }
              else {
                uVar5 = bVar2 & 0xf;
              }
              uVar5 = (int)(char)bVar1 & 0x3fU | uVar5 << 6;
            }
            else {
              uVar5 = bVar1 & 0x1f;
            }
            uVar6 = uVar6 & 0x3f | uVar5 << 6;
          }
          if ((local_53 & 1) != 0) goto LAB_015f25a8;
          iVar3 = -1;
          if (0x7f < uVar6) {
            iVar3 = -2;
          }
          if ((0x7ff < uVar6) && (iVar3 = -4, uVar6 < 0x10000)) {
            iVar3 = -3;
          }
          local_58 = iVar3 + local_58;
          local_53 = 1;
        } while (local_58 != 0);
        local_58 = 0;
      }
LAB_015f25a8:
      local_6c[0] = 1;
      local_64 = local_58;
    }
  }
LAB_015f25b4:
  if (local_6c[0] == 1) {
    param_1[3] = param_3;
    param_3 = param_3 - local_64;
    iVar3 = param_2 + local_64;
    iVar7 = param_2;
  }
  else {
    iVar7 = 0;
    iVar3 = param_2;
  }
  *param_1 = iVar3;
  param_1[1] = param_3;
  param_1[2] = iVar7;
  return;
}

