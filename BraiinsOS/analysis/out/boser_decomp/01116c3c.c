// FUN_01116c3c @ 01116c3c size=396 calls_out=2 calls_in=2
// strings: 

void FUN_01116c3c(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  byte bVar9;
  
  if (*param_2 == 1) {
    FUN_007a6f3c(param_1,param_2 + 2,param_2[0xc],param_2[0xd],param_2[0xe],param_2[0xf],
                 param_2[9] == -1);
    return;
  }
  uVar8 = 0;
  if (*(char *)((int)param_2 + 0xe) == '\0') {
    bVar9 = *(byte *)(param_2 + 3);
    iVar6 = param_2[0xc];
    uVar7 = param_2[0xd];
    uVar1 = param_2[1];
    do {
      if (uVar1 != 0) {
        if (uVar1 < uVar7) {
          if (*(char *)(iVar6 + uVar1) < -0x40) {
LAB_01116da0:
            *(byte *)(param_2 + 3) = ~bVar9 & 1;
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(iVar6,uVar7,uVar1,uVar7,&DAT_01d2e39c);
          }
        }
        else if (uVar1 != uVar7) goto LAB_01116da0;
      }
      if (uVar1 == uVar7) {
        *(byte *)(param_2 + 3) = ~bVar9 & 1;
        if ((bVar9 & 1) != 0) goto LAB_01116d88;
        *(undefined1 *)((int)param_2 + 0xe) = 1;
        break;
      }
      pbVar4 = (byte *)(iVar6 + uVar1);
      uVar3 = (uint)*pbVar4;
      if (0x7fffffff < (uint)(int)(char)*pbVar4) {
        if (uVar3 < 0xe0) {
          uVar3 = pbVar4[1] & 0x3f | (uVar3 & 0x1f) << 6;
        }
        else {
          uVar2 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
          if (uVar3 < 0xf0) {
            uVar3 = uVar2 | (uVar3 & 0x1f) << 0xc;
          }
          else {
            uVar3 = pbVar4[3] & 0x3f | uVar2 << 6 | (uVar3 & 7) << 0x12;
          }
        }
      }
      if ((bVar9 & 1) != 0) goto LAB_01116d7c;
      iVar5 = 1;
      if (0x7f < uVar3) {
        iVar5 = 2;
      }
      bVar9 = 1;
      if ((0x7ff < uVar3) && (iVar5 = 4, uVar3 < 0x10000)) {
        iVar5 = 3;
      }
      uVar1 = iVar5 + uVar1;
      param_2[1] = uVar1;
    } while( true );
  }
LAB_01116d94:
  *param_1 = uVar8;
  return;
LAB_01116d7c:
  *(undefined1 *)(param_2 + 3) = 0;
  uVar7 = uVar1;
LAB_01116d88:
  uVar8 = 1;
  param_1[1] = uVar7;
  param_1[2] = uVar7;
  goto LAB_01116d94;
}

