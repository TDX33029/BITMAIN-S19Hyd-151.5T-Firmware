// FUN_015057bc @ 015057bc size=280 calls_out=3 calls_in=1
// strings: 

void FUN_015057bc(int *param_1,byte *param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  if (param_3 != 0) {
    param_3 = param_3 * 0x14;
    iVar3 = param_3;
    pbVar4 = param_2;
    do {
      uVar6 = (uint)*pbVar4;
      if ((0xb < uVar6) && (2 < uVar6 - 0xd)) {
        pbVar2 = pbVar4;
        if (uVar6 != 0x10) goto LAB_0150585c;
        if (*(short *)(pbVar4 + 0x10) == 0x23) goto LAB_01505850;
      }
      iVar3 = iVar3 + -0x14;
      pbVar2 = param_2;
      pbVar4 = pbVar4 + 0x14;
    } while (iVar3 != 0);
    do {
      uVar6 = (uint)*pbVar2;
      if ((0xc < uVar6) && (1 < uVar6 - 0xe)) {
        if (uVar6 != 0x10) {
LAB_0150585c:
          iVar3 = *(int *)(pbVar2 + 0xc);
          if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(0,iVar3);
          }
          uVar5 = *(undefined4 *)(pbVar2 + 8);
          if (iVar3 == 0) {
            iVar7 = 0;
            iVar1 = 1;
          }
          else {
            iVar1 = thunk_FUN_016d4a50(iVar3);
            iVar7 = iVar3;
            if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar3);
            }
          }
          FUN_016dd1aa(iVar1,uVar5,iVar3);
          *param_1 = iVar7;
          param_1[1] = iVar1;
          param_1[2] = iVar3;
          return;
        }
        if (*(short *)(pbVar2 + 0x10) == 0x27) break;
      }
      param_3 = param_3 + -0x14;
      pbVar2 = pbVar2 + 0x14;
    } while (param_3 != 0);
  }
LAB_01505850:
  *param_1 = -0x80000000;
  return;
}

