// FUN_007a6d1c @ 007a6d1c size=540 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_007a6d1c(int *param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int local_2c;
  uint local_28;
  uint local_24;
  
  if (*(char *)((int)param_1 + 0x49) == '\0') {
    iVar8 = param_1[0xc];
    uVar9 = param_1[0xd];
    if (*param_1 == 1) {
      FUN_007a6f3c(&local_2c,param_1 + 2,iVar8,uVar9,param_1[0xe],param_1[0xf],param_1[9] == -1);
    }
    else {
      local_2c = 0;
      if (*(char *)((int)param_1 + 0xe) == '\0') {
        bVar2 = *(byte *)(param_1 + 3);
        uVar3 = param_1[1];
        do {
          if (uVar3 != 0) {
            if (uVar3 < uVar9) {
              if (*(char *)(iVar8 + uVar3) < -0x40) goto LAB_007a6f10;
            }
            else if (uVar3 != uVar9) {
LAB_007a6f10:
              *(byte *)(param_1 + 3) = ~bVar2 & 1;
                    /* WARNING: Subroutine does not return */
              FUN_012fb514(iVar8,uVar9,uVar3,uVar9,&DAT_01d2e39c);
            }
          }
          if (uVar3 == uVar9) {
            *(byte *)(param_1 + 3) = ~bVar2 & 1;
            if ((bVar2 & 1) != 0) goto LAB_007a6e8c;
            *(undefined1 *)((int)param_1 + 0xe) = 1;
            break;
          }
          pbVar1 = (byte *)(iVar8 + uVar3);
          uVar5 = (uint)*pbVar1;
          if (0x7fffffff < (uint)(int)(char)*pbVar1) {
            if (uVar5 < 0xe0) {
              uVar5 = pbVar1[1] & 0x3f | (uVar5 & 0x1f) << 6;
            }
            else {
              uVar7 = pbVar1[2] & 0x3f | (pbVar1[1] & 0x3f) << 6;
              if (uVar5 < 0xf0) {
                uVar5 = uVar7 | (uVar5 & 0x1f) << 0xc;
              }
              else {
                uVar5 = pbVar1[3] & 0x3f | uVar7 << 6 | (uVar5 & 7) << 0x12;
              }
            }
          }
          if ((bVar2 & 1) != 0) goto LAB_007a6e80;
          iVar4 = 1;
          if (0x7f < uVar5) {
            iVar4 = 2;
          }
          bVar2 = 1;
          if ((0x7ff < uVar5) && (iVar4 = 4, uVar5 < 0x10000)) {
            iVar4 = 3;
          }
          uVar3 = iVar4 + uVar3;
          param_1[1] = uVar3;
        } while( true );
      }
    }
    goto LAB_007a6e9c;
  }
  goto LAB_007a6d38;
LAB_007a6e80:
  *(undefined1 *)(param_1 + 3) = 0;
  uVar9 = uVar3;
LAB_007a6e8c:
  local_2c = 1;
  local_28 = uVar9;
  local_24 = uVar9;
LAB_007a6e9c:
  if (local_2c == 1) {
    iVar4 = param_1[0x10];
    param_1[0x10] = local_24;
    iVar8 = iVar8 + iVar4;
    param_2 = local_28 - iVar4;
    goto LAB_007a6f08;
  }
  param_2 = (uint)*(byte *)((int)param_1 + 0x49);
  iVar8 = 0;
  if (param_2 == 0) {
    param_2 = (uint)*(byte *)(param_1 + 0x12);
    *(undefined1 *)((int)param_1 + 0x49) = 1;
    if (param_2 == 1) {
      iVar4 = param_1[0x10];
      iVar6 = param_1[0x11];
    }
    else {
      iVar4 = param_1[0x10];
      iVar6 = param_1[0x11];
      if (iVar6 == iVar4) goto LAB_007a6f08;
    }
    param_2 = iVar6 - iVar4;
    iVar8 = param_1[0xc] + iVar4;
    goto LAB_007a6f08;
  }
LAB_007a6d38:
  iVar8 = 0;
LAB_007a6f08:
  return CONCAT44(param_2,iVar8);
}

