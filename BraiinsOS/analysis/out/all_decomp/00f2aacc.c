// FUN_00f2aacc @ 00f2aacc size=684 calls_out=2 calls_in=2
// strings: 

longlong FUN_00f2aacc(int *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  int local_24;
  uint local_20;
  uint local_1c;
  
  uVar2 = (uint)*(byte *)((int)param_1 + 0x49);
  if (uVar2 != 0) goto LAB_00f2aae4;
  iVar7 = param_1[0xc];
  uVar2 = param_1[0xd];
  if (*param_1 == 1) {
    FUN_00d97eb0(&local_24,param_1 + 2,iVar7,uVar2,param_1[0xe],param_1[0xf],param_1[9] == -1);
    if (local_24 == 1) goto LAB_00f2ab6c;
  }
  else if (*(char *)((int)param_1 + 0xe) == '\0') {
    uVar3 = param_1[1];
    bVar1 = *(byte *)(param_1 + 3);
    if (uVar3 != 0) {
      if (uVar3 < uVar2) {
        if (*(char *)(iVar7 + uVar3) < -0x40) goto LAB_00f2ad50;
      }
      else if (uVar3 != uVar2) goto LAB_00f2ad50;
    }
    if (uVar3 == uVar2) {
      *(byte *)(param_1 + 3) = ~bVar1 & 1;
      if ((bVar1 & 1) == 0) {
        *(undefined1 *)((int)param_1 + 0xe) = 1;
        goto LAB_00f2acd4;
      }
    }
    else {
      pbVar6 = (byte *)(iVar7 + uVar3);
      uVar4 = (uint)*pbVar6;
      if (0x7fffffff < (uint)(int)(char)*pbVar6) {
        if (uVar4 < 0xe0) {
          uVar4 = pbVar6[1] & 0x3f | (uVar4 & 0x1f) << 6;
        }
        else {
          uVar8 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
          if (uVar4 < 0xf0) {
            uVar4 = uVar8 | (uVar4 & 0x1f) << 0xc;
          }
          else {
            uVar4 = pbVar6[3] & 0x3f | uVar8 << 6 | (uVar4 & 7) << 0x12;
          }
        }
      }
      if ((bVar1 & 1) == 0) {
        iVar5 = 1;
        if (0x7f < uVar4) {
          iVar5 = 2;
        }
        if (uVar4 < 0x800) {
          uVar3 = iVar5 + uVar3;
          param_1[1] = uVar3;
        }
        else {
          iVar5 = 4;
          if (uVar4 < 0x10000) {
            iVar5 = 3;
          }
          uVar3 = iVar5 + uVar3;
          param_1[1] = uVar3;
        }
        if (uVar3 != 0) {
          if (uVar3 < uVar2) {
            if (*(char *)(iVar7 + uVar3) < -0x40) {
LAB_00f2ad4c:
              bVar1 = 1;
LAB_00f2ad50:
              *(byte *)(param_1 + 3) = ~bVar1 & 1;
                    /* WARNING: Subroutine does not return */
              FUN_00faa8ac(iVar7,uVar2,uVar3,uVar2,&DAT_018aeb58);
            }
          }
          else if (uVar3 != uVar2) goto LAB_00f2ad4c;
        }
        if (uVar3 != uVar2) goto LAB_00f2acac;
      }
      else {
LAB_00f2acac:
        uVar2 = uVar3;
      }
      *(undefined1 *)(param_1 + 3) = 0;
    }
    local_20 = uVar2;
    local_1c = uVar2;
LAB_00f2ab6c:
    iVar5 = param_1[0x10];
    param_1[0x10] = local_1c;
    return CONCAT44(local_20 - iVar5,iVar7 + iVar5);
  }
LAB_00f2acd4:
  if (*(byte *)((int)param_1 + 0x49) != 0) {
    return (ulonglong)(uint)*(byte *)((int)param_1 + 0x49) << 0x20;
  }
  uVar2 = (uint)*(byte *)(param_1 + 0x12);
  *(undefined1 *)((int)param_1 + 0x49) = 1;
  if (uVar2 == 1) {
    iVar7 = param_1[0x10];
    iVar5 = param_1[0x11];
  }
  else {
    iVar7 = param_1[0x10];
    iVar5 = param_1[0x11];
    if (iVar5 == iVar7) {
LAB_00f2aae4:
      return (ulonglong)uVar2 << 0x20;
    }
  }
  return CONCAT44(iVar5 - iVar7,param_1[0xc] + iVar7);
}

