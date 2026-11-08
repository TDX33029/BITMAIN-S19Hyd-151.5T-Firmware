// FUN_010f50c8 @ 010f50c8 size=732 calls_out=2 calls_in=20
// strings: 

/* WARNING: Removing unreachable block (ram,0x010f5300) */

longlong FUN_010f50c8(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint unaff_r6;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int local_30;
  uint local_2c;
  uint local_28;
  
  if (*(char *)((int)param_1 + 0x49) != '\0') {
    return (ulonglong)unaff_r6 << 0x20;
  }
  iVar5 = 0;
  do {
    iVar8 = param_1[0xc];
    uVar4 = param_1[0xd];
    if (*param_1 == 1) {
      FUN_00d97eb0(&local_30,param_1 + 2,iVar8,uVar4,param_1[0xe],param_1[0xf],param_1[9] == -1);
      if (local_30 == 0) {
LAB_010f5334:
        if (*(char *)((int)param_1 + 0x49) != '\0') break;
        if ((char)param_1[0x12] == '\x01') {
          iVar8 = param_1[0x10];
          iVar2 = param_1[0x11];
        }
        else {
          iVar8 = param_1[0x10];
          iVar2 = param_1[0x11];
          if (iVar2 == iVar8) break;
        }
        return CONCAT44(iVar2 - iVar8,param_1[0xc] + iVar8);
      }
    }
    else {
      if (*(char *)((int)param_1 + 0xe) != '\0') goto LAB_010f5334;
      uVar3 = param_1[1];
      bVar1 = *(byte *)(param_1 + 3);
      if (uVar3 != 0) {
        if (uVar3 < uVar4) {
          if (*(char *)(iVar8 + uVar3) < -0x40) goto LAB_010f538c;
        }
        else if (uVar3 != uVar4) goto LAB_010f538c;
      }
      if (uVar3 == uVar4) {
        *(byte *)(param_1 + 3) = ~bVar1 & 1;
        if ((bVar1 & 1) == 0) {
          *(undefined1 *)((int)param_1 + 0xe) = 1;
          goto LAB_010f5334;
        }
      }
      else {
        pbVar6 = (byte *)(iVar8 + uVar3);
        uVar7 = (uint)*pbVar6;
        if ((char)*pbVar6 < '\0') {
          if (uVar7 < 0xe0) {
            uVar7 = pbVar6[1] & 0x3f | (uVar7 & 0x1f) << 6;
            goto joined_r0x010f5260;
          }
          uVar9 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
          if (0xef < uVar7) {
            uVar7 = pbVar6[3] & 0x3f | uVar9 << 6 | (uVar7 & 7) << 0x12;
            goto joined_r0x010f5260;
          }
          uVar7 = uVar9 | (uVar7 & 0x1f) << 0xc;
          if ((bVar1 & 1) == 0) goto LAB_010f5274;
LAB_010f5210:
          uVar4 = uVar3;
        }
        else {
joined_r0x010f5260:
          if ((bVar1 & 1) != 0) goto LAB_010f5210;
LAB_010f5274:
          iVar5 = 1;
          if (0x7f < uVar7) {
            iVar5 = 2;
          }
          if (uVar7 < 0x800) {
            uVar3 = iVar5 + uVar3;
            param_1[1] = uVar3;
          }
          else {
            iVar5 = 4;
            if (uVar7 < 0x10000) {
              iVar5 = 3;
            }
            uVar3 = iVar5 + uVar3;
            param_1[1] = uVar3;
          }
          if (uVar3 != 0) {
            if (uVar3 < uVar4) {
              if (*(char *)(iVar8 + uVar3) < -0x40) {
LAB_010f538c:
                    /* WARNING: Subroutine does not return */
                FUN_00faa8ac(iVar8,uVar4,uVar3,uVar4,&DAT_018aeb58);
              }
            }
            else if (uVar3 != uVar4) goto LAB_010f538c;
          }
          if (uVar3 != uVar4) {
            uVar4 = uVar3;
          }
        }
        *(undefined1 *)(param_1 + 3) = 0;
      }
      local_30 = 1;
      local_2c = uVar4;
      local_28 = uVar4;
    }
    iVar5 = iVar8 + param_1[0x10];
    unaff_r6 = local_2c - param_1[0x10];
    param_1[0x10] = local_28;
  } while (*(char *)((int)param_1 + 0x49) == '\0');
  return CONCAT44(unaff_r6,iVar5);
}

