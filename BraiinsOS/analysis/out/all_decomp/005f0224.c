// FUN_005f0224 @ 005f0224 size=416 calls_out=1 calls_in=1
// strings: 

void FUN_005f0224(int *param_1,uint param_2,uint param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  
  param_3 = param_3 & 0xff;
  if (param_4 == 1) {
    uVar4 = *(uint *)(*param_1 + 0xc);
    if (uVar4 != 0) {
      iVar3 = param_1[1];
      uVar2 = *(uint *)(iVar3 + 8);
      if (uVar4 < uVar2) {
        param_2 = param_2 & 0xff;
        do {
          iVar7 = *(int *)(iVar3 + 4) + uVar4 * 0x14;
          iVar5 = *(int *)(iVar7 + 4);
          if (iVar5 == 0) {
            uVar4 = *(uint *)(*(int *)(iVar3 + 4) + uVar4 * 0x14);
            if (uVar4 != 0) {
              do {
                if (*(uint *)(iVar3 + 0x14) <= uVar4) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar4,*(uint *)(iVar3 + 0x14),&DAT_01894598);
                }
                pbVar6 = (byte *)(*(int *)(iVar3 + 0x10) + uVar4 * 9);
                if (param_2 <= *pbVar6) {
                  if (param_2 == *pbVar6) {
                    pbVar6 = pbVar6 + 1;
                    goto LAB_005f0268;
                  }
                  break;
                }
                uVar4 = *(uint *)(pbVar6 + 5);
              } while (uVar4 != 0);
            }
          }
          else {
            uVar4 = iVar5 + (uint)*(byte *)(iVar3 + 0x48 + param_2);
            if (*(uint *)(iVar3 + 0x20) <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar4,*(uint *)(iVar3 + 0x20),&DAT_01894588);
            }
            pbVar6 = (byte *)(*(int *)(iVar3 + 0x1c) + uVar4 * 4);
LAB_005f0268:
            param_4 = *(int *)pbVar6;
            if (param_4 != 1) goto LAB_005f0348;
          }
          uVar4 = *(uint *)(iVar7 + 0xc);
        } while (uVar4 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar4,uVar2,&DAT_01894578);
    }
    param_4 = 0;
LAB_005f0348:
    iVar3 = param_1[2];
    param_3 = *(int *)param_1[3] + param_3;
    if (*(uint *)(iVar3 + 8) <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(param_3,*(uint *)(iVar3 + 8),&DAT_01856ee8);
    }
  }
  else {
    iVar3 = param_1[2];
    uVar4 = *(int *)param_1[3] + param_3;
    if (*(uint *)(iVar3 + 8) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar4,*(uint *)(iVar3 + 8),&DAT_01856ef8);
    }
    piVar1 = (int *)param_1[4];
    *(int *)(*(int *)(iVar3 + 4) + uVar4 * 4) = param_4;
    param_3 = *piVar1 + param_3;
    if (*(uint *)(iVar3 + 8) <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(param_3,*(uint *)(iVar3 + 8),&DAT_01856f08);
    }
  }
  *(int *)(*(int *)(iVar3 + 4) + param_3 * 4) = param_4;
  return;
}

