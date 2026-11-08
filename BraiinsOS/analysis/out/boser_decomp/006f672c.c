// FUN_006f672c @ 006f672c size=632 calls_out=3 calls_in=1
// strings: 

void FUN_006f672c(uint *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int local_30;
  uint local_2c;
  uint local_28;
  
LAB_006f674c:
  iVar1 = FUN_006f69ac(param_1 + 0x14);
  if (iVar1 != 0) {
    return;
  }
  if ((*param_1 == 2) || (*(char *)((int)param_1 + 0x49) != '\0')) goto LAB_006f696c;
  uVar8 = param_1[0xc];
  uVar9 = param_1[0xd];
  if ((*param_1 & 1) == 0) {
    iVar1 = 0;
    if (*(char *)((int)param_1 + 0xe) == '\0') {
      bVar3 = (byte)param_1[3];
      uVar4 = param_1[1];
      do {
        if (uVar4 != 0) {
          if (uVar4 < uVar9) {
            if (*(char *)(uVar8 + uVar4) < -0x40) {
LAB_006f697c:
              *(byte *)(param_1 + 3) = ~bVar3 & 1;
                    /* WARNING: Subroutine does not return */
              FUN_012fb514(uVar8,uVar9,uVar4,uVar9,&DAT_01d2e39c);
            }
          }
          else if (uVar4 != uVar9) goto LAB_006f697c;
        }
        if (uVar4 == uVar9) {
          *(byte *)(param_1 + 3) = ~bVar3 & 1;
          if ((bVar3 & 1) != 0) goto LAB_006f68bc;
          *(undefined1 *)((int)param_1 + 0xe) = 1;
          break;
        }
        pbVar5 = (byte *)(uVar8 + uVar4);
        uVar7 = (uint)*pbVar5;
        if (0x7fffffff < (uint)(int)(char)*pbVar5) {
          if (uVar7 < 0xe0) {
            uVar7 = pbVar5[1] & 0x3f | (uVar7 & 0x1f) << 6;
          }
          else {
            uVar6 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
            if (uVar7 < 0xf0) {
              uVar7 = uVar6 | (uVar7 & 0x1f) << 0xc;
            }
            else {
              uVar7 = pbVar5[3] & 0x3f | uVar6 << 6 | (uVar7 & 7) << 0x12;
            }
          }
        }
        if ((bVar3 & 1) != 0) goto LAB_006f68b4;
        iVar2 = 1;
        if (0x7f < uVar7) {
          iVar2 = 2;
        }
        bVar3 = 1;
        if ((0x7ff < uVar7) && (iVar2 = 4, uVar7 < 0x10000)) {
          iVar2 = 3;
        }
        uVar4 = iVar2 + uVar4;
        param_1[1] = uVar4;
      } while( true );
    }
    goto LAB_006f68c8;
  }
  FUN_007a6f3c(&local_30,param_1 + 2,uVar8,uVar9,param_1[0xe],param_1[0xf],param_1[9] == 0xffffffff)
  ;
  goto LAB_006f68cc;
LAB_006f68b4:
  *(undefined1 *)(param_1 + 3) = 0;
  uVar9 = uVar4;
LAB_006f68bc:
  iVar1 = 1;
  local_2c = uVar9;
  local_28 = uVar9;
LAB_006f68c8:
  local_30 = iVar1;
LAB_006f68cc:
  if (local_30 == 1) {
    uVar9 = param_1[0x10];
    param_1[0x10] = local_28;
    uVar8 = uVar8 + uVar9;
    uVar9 = local_2c - uVar9;
  }
  else {
    if (*(char *)((int)param_1 + 0x49) != '\0') {
LAB_006f696c:
      FUN_006f69ac(param_1 + 0x1e);
      return;
    }
    *(undefined1 *)((int)param_1 + 0x49) = 1;
    if ((char)param_1[0x12] == '\x01') {
      uVar8 = param_1[0x10];
      uVar9 = param_1[0x11];
    }
    else {
      uVar8 = param_1[0x10];
      uVar9 = param_1[0x11];
      if (uVar9 == uVar8) goto LAB_006f696c;
    }
    uVar9 = uVar9 - uVar8;
    uVar8 = param_1[0xc] + uVar8;
  }
  *(undefined2 *)(param_1 + 0x1d) = 1;
  param_1[0x1c] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = uVar9;
  param_1[0x18] = uVar8;
  param_1[0x16] = (uint)"\r";
  param_1[0x19] = uVar9;
  param_1[0x17] = 2;
  param_1[0x1a] = uVar8;
  param_1[0x1b] = uVar8 + uVar9;
  goto LAB_006f674c;
}

