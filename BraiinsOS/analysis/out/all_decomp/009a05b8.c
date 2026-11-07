// FUN_009a05b8 @ 009a05b8 size=752 calls_out=2 calls_in=1
// strings: 

int FUN_009a05b8(int *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int local_30;
  uint local_2c;
  uint local_28;
  
  if (param_1[0x14] == 0) {
    return 0;
  }
  param_1[0x14] = param_1[0x14] + -1;
  do {
    while( true ) {
      if (*(char *)((int)param_1 + 0x49) != '\0') {
        return 0;
      }
      iVar7 = param_1[0xc];
      uVar8 = param_1[0xd];
      if (*param_1 != 1) break;
      FUN_00d97eb0(&local_30,param_1 + 2,iVar7,uVar8,param_1[0xe],param_1[0xf],param_1[9] == -1);
      if (local_30 != 1) goto LAB_009a0818;
LAB_009a05ec:
      uVar8 = param_1[0x10];
      param_1[0x10] = local_28;
      if (local_2c != uVar8) {
        return iVar7 + uVar8;
      }
    }
    if (*(char *)((int)param_1 + 0xe) == '\0') {
      uVar4 = param_1[1];
      bVar1 = *(byte *)(param_1 + 3);
      if (uVar4 != 0) {
        if (uVar4 < uVar8) {
          if (*(char *)(iVar7 + uVar4) < -0x40) goto LAB_009a0880;
        }
        else if (uVar4 != uVar8) goto LAB_009a0880;
      }
      if (uVar4 == uVar8) {
        *(byte *)(param_1 + 3) = ~bVar1 & 1;
        if ((bVar1 & 1) == 0) {
          *(undefined1 *)((int)param_1 + 0xe) = 1;
          goto LAB_009a0650;
        }
      }
      else {
        pbVar5 = (byte *)(iVar7 + uVar4);
        uVar2 = (uint)*pbVar5;
        if ((char)*pbVar5 < '\0') {
          if (uVar2 < 0xe0) {
            uVar2 = pbVar5[1] & 0x3f | (uVar2 & 0x1f) << 6;
          }
          else {
            uVar6 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
            if (uVar2 < 0xf0) {
              uVar2 = uVar6 | (uVar2 & 0x1f) << 0xc;
              goto joined_r0x009a07f0;
            }
            uVar2 = pbVar5[3] & 0x3f | uVar6 << 6 | (uVar2 & 7) << 0x12;
          }
          if ((bVar1 & 1) == 0) goto LAB_009a06f8;
LAB_009a07f4:
          uVar8 = uVar4;
        }
        else {
joined_r0x009a07f0:
          if ((bVar1 & 1) != 0) goto LAB_009a07f4;
LAB_009a06f8:
          iVar3 = 1;
          if (0x7f < uVar2) {
            iVar3 = 2;
          }
          if (uVar2 < 0x800) {
            uVar4 = iVar3 + uVar4;
            param_1[1] = uVar4;
          }
          else {
            iVar3 = 4;
            if (uVar2 < 0x10000) {
              iVar3 = 3;
            }
            uVar4 = iVar3 + uVar4;
            param_1[1] = uVar4;
          }
          if (uVar4 != 0) {
            if (uVar4 < uVar8) {
              if (*(char *)(iVar7 + uVar4) < -0x40) {
LAB_009a087c:
                bVar1 = 1;
LAB_009a0880:
                *(byte *)(param_1 + 3) = ~bVar1 & 1;
                    /* WARNING: Subroutine does not return */
                FUN_00faa8ac(iVar7,uVar8,uVar4,uVar8,&DAT_018aeb58);
              }
            }
            else if (uVar4 != uVar8) goto LAB_009a087c;
          }
          if (uVar4 != uVar8) goto LAB_009a07f4;
        }
        *(undefined1 *)(param_1 + 3) = 0;
      }
      local_30 = 1;
      local_2c = uVar8;
      local_28 = uVar8;
      goto LAB_009a05ec;
    }
LAB_009a0650:
    local_30 = 0;
LAB_009a0818:
    if (*(char *)((int)param_1 + 0x49) != '\0') {
      return 0;
    }
    *(undefined1 *)((int)param_1 + 0x49) = 1;
    if ((char)param_1[0x12] == '\x01') {
      iVar7 = param_1[0x10];
      iVar3 = param_1[0x11];
    }
    else {
      iVar7 = param_1[0x10];
      iVar3 = param_1[0x11];
      if (iVar3 == iVar7) {
        return 0;
      }
    }
    if (iVar3 != iVar7) {
      return param_1[0xc] + iVar7;
    }
  } while( true );
}

